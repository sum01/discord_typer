#include "mainwindow.hpp"
#include "ui_mainwindow.h"
// Needed for pushing to the clipboard
#include <QApplication>
#include <QClipboard>
// Needed for handling output strings from the input box
#include <QString>
#include <QChar>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
	this->ui->setupUi(this);
}

MainWindow::~MainWindow() {
	delete this->ui;
}

// Read the input box when convert_copy_btn is clicked
void MainWindow::on_convert_copy_btn_clicked() {
	QString output {""};
	// Track if we're "inside of" an emote
	bool in_emote = false;
	for (const QChar &c : this->ui->text_input->toPlainText()) {
		// Discord emotes start with a ':'
		if (c == ':') {
			output += c;
			// Just flip it so this works for the opening/closing
			in_emote = !in_emote;
			continue;
		} else if (in_emote) {
			output += c;
			// Check if we're inside of an emote
			continue;
		}
		// Check if it's a letter
		if (c.isLetter()) {
			if (output.length() > 0) {
				// Add a space so the regional_indicator's don't turn into a flag
				// Discord turns them into flags if they're a valid flag and have no space
				output += ' ';
			}
			output += ":regional_indicator_";
			output += c.toLower();
			output += ':';
		} else {
			// If it's not a letter (so spaces, linebreaks, etc.) just append
			output += c;
		}
	}
	// Put the output into the display box
	this->ui->text_display->setPlainText(output);
	// Grab a pointer to the system clipboard
	QClipboard *clipboard = QApplication::clipboard();
	// Make sure the clipboard is clear
	clipboard->clear();
	// Puts our text into the clipboard
	// QClipboard::Clipboard mode tells it to use the global clipboard
	clipboard->setText(output, QClipboard::Clipboard);
}
