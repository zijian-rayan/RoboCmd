#include <windows.h>

class CComObj
{
  HANDLE hcom;
public:
  CComObj(int nbcom) {}
  bool Action1() {Sleep(1000); return rand()&1; };
  bool Action2() {Sleep(1000); return rand()&1; };
  bool Action3() {Sleep(1000); return rand()&1; };
  bool Action4() {Sleep(1000); return rand()&1; };
};