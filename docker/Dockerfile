FROM ubuntu:20.04

RUN apt-get update && apt-get install -y build-essential sudo
ARG UID
ARG USERNAME
RUN useradd -m -u ${UID} ${USERNAME}
RUN adduser ${USERNAME} sudo
RUN echo "${USERNAME}:docker"|chpasswd
USER ${USERNAME}
