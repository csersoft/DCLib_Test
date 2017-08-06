#pragma once

/************************************************************************/
/* VERSION: 0.0.1                                                       */
/*                                                                      */
/************************************************************************/


#ifndef _STDINT
#include <stdint.h>
#endif

#ifndef _WINDOWS_
#include <Windows.h>
#endif

#pragma comment(lib, "DreamColorDLL.lib")

#ifndef __cplusplus
#error The header file must be compiled in C++ mode!
#endif

#define DLL_IMPORT_API __declspec(dllimport)

struct Prescription;
enum DC_ERROR : int;

DLL_IMPORT_API class CDreamColorDLLApp
{
public:
  bool blSetCalibrator;
  DC_ERROR LastError;
  int var2;
  int NumberOfPrescriptions;

  CDreamColorDLLApp(void);
  ~CDreamColorDLLApp(void);

  bool CalibratePrescription(Prescription*);
  DC_ERROR CheckErrorReturn(void);
  DC_ERROR CheckPrescriptionGamut(Prescription*);
  void ForceUSBConnection(void);
  short GetBackLightHours(short);
  bool GetBackLightYxy(double*, double*, double*);
  bool GetColorSpaceName(short, char*);
  bool GetColorTempFrom_xy(double*, double, double);
  int GetCurrentColorSpace(void);
  bool GetDaylightColorTemp_xy(double, double*, double*);
  bool GetDisplayEDIDName(char *);
  int GetDisplayIndex(void);
  bool GetDisplayMaxLum(double*);
  bool GetDisplayName(ULONG, ULONG, char*);
  int GetDisplayTypeFromIndexList(int);
  bool GetFactoryPrescription(short, Prescription*);
  int GetNumberOfColorSpaces(short);
  int GetNumberOfPrescriptions(void);
  bool GetObiWanSerialNumber(char*, int);
  DC_ERROR GetPrescription(short, Prescription *);
  bool GetSerialNumber(ULONG, ULONG, char*);
  bool GetSerialNumber(char*);
  bool IsFactoryName(char*);
  bool IsThisDisplayDreamColor2(ULONG, ULONG);
  bool IsThisDisplayDreamColor(ULONG, ULONG);
  //int[32]
  bool OpenDCMulitpledisplays(int*);
  int OpenDCdisplay(void);
  bool ResetFactoryPrescription(short, Prescription*);
  bool SelectColorSpace(short);
  bool SetBackLightHours(int, int);
  bool SetBackLightYxy(double, double, double);
  bool SetCalibrator(void*);
  bool SetDisplayIndex(int, bool);
  bool SetDisplayIndex(int, bool, int);
  bool SetPrescription(short, Prescription*);
  void TestBacklight(void);
  bool TestUSBConnection(void);
  bool TestUSBConnectionWithSerialNumber(const char*);
  
private:
  int InitializePrescriptions(void);
  bool isXP();

};