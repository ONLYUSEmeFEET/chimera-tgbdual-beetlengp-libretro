# Chimera
Chimera is a project to combine neopop's ngpc emulation with tgb-dual's multiplayer capabilities. This is a proof of concept repro.

Chimera: Combining the best of NeoPop and TGB-Dual into one beautiful creature.

# TGB Dual is an open source (GPLv2) GB/GBC emulator with game link cable support.

This is a port of it to libretro.  To emulate two units side by side, use
your frontend's "Sufami Turbo" interface, placing the ROMs in "slots" A and B.
The Sufami Turbo BIOS itself can be any file; it is ignored by the emulator.
Use the Player 1 and Player 2 controllers to control each unit.

In addition, some of the Japanese comments in the source code have been run
through Google Translate to English, and CP932 and EUC-JP encoded files have
been converted to UTF-8.

Original sources from
http://gigo.retrogames.com/download.html#tgb-dual
http://shinh.skr.jp/tgbdualsdl/

[![Build Status](https://travis-ci.org/libretro/beetle-ngp-libretro.svg?branch=master)](https://travis-ci.org/libretro/beetle-ngp-libretro)
[![Build status](https://ci.appveyor.com/api/projects/status/cbyyvbdbv1yc8yst/branch/master?svg=true)](https://ci.appveyor.com/project/bparker06/beetle-ngp-libretro/branch/master)

# Beetle NeoGeo Pocket