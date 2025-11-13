// 函数: sub_140d89ab0
// 地址: 0x140d89ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0xf9) = (GetAsyncKeyState(0xa0) u>> 0xf).b & 1
*(arg1 + 0xfa) = (GetAsyncKeyState(0xa1) u>> 0xf).b & 1
*(arg1 + 0xfb) = (GetAsyncKeyState(0xa2) u>> 0xf).b & 1
*(arg1 + 0xfc) = (GetAsyncKeyState(0xa3) u>> 0xf).b & 1
*(arg1 + 0xfd) = (GetAsyncKeyState(0xa4) u>> 0xf).b & 1
*(arg1 + 0xfe) = (GetAsyncKeyState(0xa5) u>> 0xf).b & 1
char result = GetKeyState(0x14) & 1
*(arg1 + 0xff) = result
return result
