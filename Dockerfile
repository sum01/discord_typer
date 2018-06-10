FROM ubuntu:latest
MAINTAINER sum01 <sum01@protonmail.com>
RUN apt-get -qq update
RUN apt-get -qq -y upgrade
RUN apt-get install -qq -y cmake build-essential qtbase5-dev
WORKDIR /discord_typer
COPY . .
