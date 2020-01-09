
Debian
====================
This directory contains files used to package jotod/joto-qt
for Debian-based Linux systems. If you compile jotod/joto-qt yourself, there are some useful files here.

## joto: URI support ##


joto-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install joto-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your joto-qt binary to `/usr/bin`
and the `../../share/pixmaps/joto128.png` to `/usr/share/pixmaps`

joto-qt.protocol (KDE)

