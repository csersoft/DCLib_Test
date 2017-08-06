#include "stdafx.h"

int main()
{
  bool blTest;
  short hours;
  int nTemp[32];
  char chTemp[256];
  Prescription *pMem = (Prescription *)malloc(65536);
  CDreamColorDLLApp *dclib = new CDreamColorDLLApp();

  hours = dclib->GetBackLightHours(0);

  blTest = dclib->OpenDCMulitpledisplays(nTemp);
  blTest = dclib->GetDisplayName(0, 0, chTemp);
  blTest = dclib->IsThisDisplayDreamColor2(0, 0);

  blTest = dclib->GetPrescription(0, pMem);
  blTest = dclib->GetFactoryPrescription(0, pMem);
  

  getchar();
  return 0;
}

