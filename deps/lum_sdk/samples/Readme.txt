Samples for using Luminati SDK:

all samples are projects on VS2013 (default configuration) with sample
Luminati SDK code added.

- cs_winform_anycpu: c# Windows Forms project with AnyCPU configuration
  - code added on Form1.cs (buttons added in designer)
  - uses lum_sdk.dll (c# dll)

- vc++_console_64bit: VC++ Console project with 64bit configuration
  - code added on vc++_console_64bit.cpp
  - compiles with lum_sdk.h and lum_sdk64.lib (uses lum_sdk64.dll at runtime)

- vc++_mfc_32bit_vs2005: VC++ MFC Project with 32bit configuration for Visual
  Studio 2005
  - code added on my_dlg_app.cpp
  - compiles with lum_sdk.h and lum_sdk32.lib (uses lum_sdk32.dll at runtime)
