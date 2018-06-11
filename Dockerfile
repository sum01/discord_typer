FROM ubuntu:latest
MAINTAINER sum01 <sum01@protonmail.com>
RUN apt-get update && \
		# The ubuntu image doesn't have add-apt-repository, so get it
		apt-get install -y software-properties-common && \
		# A ppa with mingw-w64 pre-compiled packages/libs
		add-apt-repository ppa:tobydox/mingw-w64 && \
		# Install common C++ and cmake build tools
		# This includes cross-compile packages, and Qt5
		apt-get install -y \
		cmake \
		build-essential \
		qtbase5-dev \
		mingw-w64 \
		qt5base-mingw-w64 \
	&& rm -rf /var/lib/apt/lists/*
