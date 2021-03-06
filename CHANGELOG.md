﻿## Changelog

### Version 5.5:

- Updated project to Visual Studio 2015.

### Version 5.4:

- Added support for single channel multi-mono input.
- Added German and Japanese language.

### Version 5.3:

- Added keyboard shortcuts.
- Fixed compatibility issue with Windows XP.

### Version 5.2:

- Installer packages save configuration files by default to user roaming directory.
- Enable portable version by creating empty EncWAVtoAC3.portable file.

### Version 5.1:

- Added multi-language support.
- Redesigned the GUI to enable multi-language support.
- Added tool-tips for settings list.
- Added log messages for Avisynth errors.
- Updated project to Visual Studio 2013.
- Fixed bitmap resource issue in VS2013.

### Version 5.0:

- Redesigned the GUI.
- Log to a file is now always enabled.
- Removed command-line options -l and --enable-log.
- Added more error messages saved in the default log file EncWAVtoAC3.txt.

### Version 4.7:

- Added support for avisynth in AMD64 (64-bit) builds using http://code.google.com/p/avisynth64/.

### Version 4.6:

- Fixed .mux files ANSI loading error.

### Version 4.5:

- Fixed AviSynth drag&drop bug.

### Version 4.4:

- Minor GUI tweaks.

### Version 4.3:

- Updated Aften sources and libraries to Git master head snapshot from 20091226.
- Added encoding process statistics to worker window.
- Reverted project to Visual Studio 2008.

### Version 4.2:

- Added AMD64 builds but without Avisynth *.avs support.

### Version 4.1:

- Fixed compatibility issue with Windows 2000.

### Version 4.0:

- Updated Aften sources and libraries to svn revision 843.
- Removed parallel file encoding mode.
- Removed x64 build configuration.
- Changed engines configuration file extention from .win32 and .win64 to .engines.
- Updated project to Visual Studio 2010 Beta 1.

### Version 3.0:

- Added preliminary Avisynth (*.avs files) scripting support (not supported in 'Multiple mono input' and in 'One per file' mode).
- Added *.avs filter to open dialog.
- Double-click on *.avs script in files list to show AVS File Properties window.
- The Win64 build is not available and does not compile properly (Avisynth not available for 64-bit Windows).

### Version 2.3:

- Added fully featured Aften engines editor.
- Added Advanced view check box to main window.
- Fixed invalid position change for bitrate/quality slider when switching between CBR/VBR mode.

### Version 2.2:

- Updated Aften sources and libraries to svn revision 832.
- Fixed bug in UI under Windows Vista.

### Version 2.1:

- Removed help file as it will not be used anymore.
- Removed donate option as donation are currently not accepted.

### Version 2.0:

- Removed Win32 & x64 Ansi builds and switched to Microsoft Layer for Unicode (not needed for x64 platforms).
- Added View menu with two GUI modes: Standard (for novice users) and Adcanced (for experienced users).
- Added MUX Wizard button into main program window.

### Version 1.2:

- Updated Aften sources and libraries to svn revision 762.
- Added extensive error and performance log messages for encoder.
- Added Options menu.
- Added auto detection of input file format based on file extension.

### Version 1.1:

- Updated Aften sources and libraries to svn revision 703.
- Added support for multi mono input.
- Added MUX Wizard for multi mono input.
- MUX Wizard can import *.mux and *.files file formats, Ansi and Unicode supported (*.files files fully support MUX format).
- MUX Wizard can export *.files files (Ansi or Unicode, depends on build type).
- MUX Wizard can export Ansi *.mux files using MUX file format.
- Added read and write support for *.mux files. 
- Added command-line support.
- Changed presets configuration file format.
- Default and ignored preset values are not saved to file.
- Removed option to generate batch scripts.
- Ansi and Unicode configuration files are supported in all builds.

### Version 1.0:

- Updated Aften sources and libraries to svn revision 606.
- Changed name of solution and project configuration files (from 'encoder' to 'encoder_vs2005').
- Added solution and project configuration files for Visual Studio 2008 Beta 2 (encoder_vs2008).
- Updated encoder code in EncWorkThread.cpp (from aften.c, svn revision 606).
- Added Win32 and Win64 builds scripts for Aften in 'src\aften\windows' path.
- Updated installer and build batch scripts.

### Version 0.9:

- Fixed crush when generating batch script file (again).
- Renamed File menu item from 'Generate batch file...' to 'Generate batch script...'.
- Renamed items in files List right-click pop-up menu.
- Added to File menu two new items 'Load files list...' and 'Save files list...'.
- Removed two buttons 'Delete files' and 'Clear list' from main window (using instead files list right-click pop-up menu).

### Version 0.8:

- Added version check for presets configuration files when loading.
- Added check for non existing files when loading files list.
- Added load/save presets to File menu and removed Load/Save presets buttons from main window.
- Added automatic remove of successfully encoded files from files list.
- Added support in Add file dialog for raw PCM audio files (*.pcm;*.raw;*.bin).
- Added 'Reset current' button to restore all default settings for currently selected preset.
- Added possibility to change value of selected item in options list by using Right Arrow and Left Arrow keys.
- Added ToolTips for options list items.
- Fixed total progress bar reset before encoding next file.
- Fixed crush when generating batch file.
- Fixed bug in parallel file encoding mode: number of threads was set to zero when <Auto> was selected.
- Changed minimum supported screen resolution to 800x600 pixels.
- Added build information to about dialog.

### Version 0.7:

- Added input file and output file detailed format informations to work dialog.
- Added quality, bandwidth an bitrate informations to work dialog.
- Added used SIMD optimizations and number of threads used informations to work dialog.
- Changed the way how the <Auto> and <Ignored> label are handled in edit boxes.
- Added parallel file encoding mode (set ParallelFileEncoding=true in *.config file and use number of parallel threads in main dialog).

### Version 0.6:

- Fixed bug in worker thread when used more then 2 Aften threads closing Aften caused memory leaks.
- Added automatic save/load for files list content to/from text file.
- Added options to enable/disable specific SIMD optimizations (-nosimd).
- Added support for RAW audio input files (-raw_fmt, -raw_sr, -raw_ch).
- Added number of threads, SIMD optimization and RAW audio settings to encoder preset config.
- Changed number of default parallel threads to '<Auto>'.
- Changed minimum width and height of main dialog (recommended screen resolution is now 1024x768 pixels).
- Added option to create output path when generating batch file (if output path doesn't exist).

### Version 0.5:

- Updated to Microsoft Visual C++ 2005 SP1 version.
- Updated Aften sources and libraries to version 0.0.8.
- Updated encoder code in EncWorkThread.cpp (from aften.c, version 0.0.8).
- Added option in main dialog to set number of Aften MT threads.
- Added list of available libaften.dll builds in main dialog (stored in text file).
- Changed quality slider label to 'Bitrate' for CBR mode and to 'Quality' for VBR mode.
- Added message to statubar when changing encoder library including name and version number.
- Added optimized Win32 & Win64 MMX,SSE,SSE2,SSE3 libaften.dll build to installer.
- Moved installer scripts to 'installer' directory.
- Created separate installers for Win32U, Win32A, Win64A and Win64U.
- Added unicode and ansi configuration files for engines.
- Added configuration files with different libaften dll's (*.win32 and .win64 extension).
- Added automatic configuration load/save of libaften.dll engines.
- Changed extension of configuration file from .cfg to .config.
- Added sorting to files list (used for both file path and file size columns).
- Added context-menu in options list (right click on option value item to change the value).
- Moved Aften library outside main binary to libaften.dll.
- Changed size of files list and options list.
- Changed size of output path and number of threads edit boxes.
- Added load/save of files list using files list context menu .
- Added 'Fast exponent strategy decision' and 'Start-of-stream padding' to options list.
- Added 'Minimum bandwidth' and 'Maximum bandwidth' to options list.
- Added 'Read input WAVE audio data until the end-of-file' to options list.
- Added 'MPEG mapping' for 'Channel mapping order of input audio' option.
- Changed calculation of total progress in work dialog to be more precise.
- Added elapsed time for current file progress and total progress in work dialog.
- Added filter for .wav files when adding directory to files list.
- Added context menu to the files list.
- Fixed bug when user clicked encode button and there where no files in the list then when second time user clicked encode button the encoding process didn't start.

### Version 0.4:

- Added to status bar 'Encoded # files in #'.
- Changed presets configuration file extension from *.cfg  to *.presets.
- Added program configuration file with extension *.cfg.
- Added load/save configuration of last main dialog position.
- Added load/save configuration of all lists column sizes.
- Added load/save of currently selected preset.
- Added grid lines to file list and settings list.
- Added status bar.
- Added encoding time information to status bar.
- Added resizing to main dialog.
- Added drag & drop for files and directories.
- Added support for Windows 98 SE using Ansi builds (unable to add support for Windows 98/Me Systems using Microsoft Layer for Unicode).

### Version 0.3:

- Added main menu.
- Added About dialog box.
- Added Generate bath file to generate command-line batch file.
- Fixed bitrate/quality slider not restored after reopening program.
- Added output path label.
- Removed two presets (done already in 0.2 but not updated Changelog).

### Version 0.2:

- Added all Aften settings.
- Updated GUI.
- Added presets (load, save, add, delete).
- Added output path.
- Added loading last preset from EncWAVtoAC3.cfg file.
- Added two default presets.
- Updated to Aften 0.06 sources.
- Added new icon.

### Version 0.1:

- First public release.
- Full Unicode support.
