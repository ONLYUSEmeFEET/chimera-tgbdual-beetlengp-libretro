# Chimera
Chimera is a project to combine neopop's ngpc emulation with tgb-dual's multiplayer capabilities.

Chimera: Combining the best of NeoPop and TGB-Dual into one beautiful, linked creature.

# Outline of Chimera

*We first need to decide which emulator will be the basis of Chimera. The better half, if you will.
I'll assume NeoPop will be the base.

*Next, we need to SLOWLY implement parts of TGB-Dual.
This step is going to be broken into multiple smaller parts, but our goal is to get dual screens within NeoPop.

*Afterwards, we need to be able to get input from Players 1 and 2 within our new Chimera emulator.

*We then must compile the core and test. Fix things as needed.

*If everything else is running smooth, it's time to get link cable emulation up and running.
Link cable emulation will need a bounty in order to be implemented.

*Once link support is complete, and after extensive local multiplayer testing is complete, Chimera's initial goals are completed.
Any relevant pieces of Chimera should be merged to beetle-neopop proper.

*If possible, a stretch goal for Chimera would be to add single-screen spectator support.
*Another stretch goal would be LAN support.

ANY and all ideas are welcome. AS ARE CONTRIBUTORS!

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