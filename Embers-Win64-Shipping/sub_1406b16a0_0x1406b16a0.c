// 函数: sub_1406b16a0
// 地址: 0x1406b16a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** lpWideCharStr = arg2
int64_t* lpWideCharStr_1 = arg2

if (arg2[3] u>= 8)
    lpWideCharStr_1 = *arg2

int32_t rax =
    WideCharToMultiByte(0xfde9, 0, lpWideCharStr_1, arg2[2].d, nullptr, 0, nullptr, nullptr)
arg1[2] = 0
arg1[3] = 0xf
*arg1 = 0
sub_140610c40(arg1, sx.q(rax), 0)
int64_t* lpMultiByteStr = arg1

if (arg1[3] u>= 0x10)
    lpMultiByteStr = *arg1

if (lpWideCharStr[3] u>= 8)
    lpWideCharStr = *lpWideCharStr

WideCharToMultiByte(0xfde9, 0, lpWideCharStr, arg2[2].d, lpMultiByteStr, arg1[2].d, nullptr, 
    nullptr)
return arg1
