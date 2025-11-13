// 函数: sub_14234f680
// 地址: 0x14234f680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14332b748
InitializeCriticalSection(&arg1[2])
SetCriticalSectionSpinCount(&arg1[2], 0xfa0)
arg1[7] = 0
arg1[8] = 0
arg1[9].d = 1
*(arg1 + 0x4c) = 0xffffffff
arg1[0xa].d = 0
*(arg1 + 0x54) = 0
arg1[0xb].d = 0
int64_t* rax = j_sub_140a82f30(0x50)

if (rax == 0)
    rax = nullptr
else
    *rax = 0
    rax[2] = 0
    rax[4] = 0

arg1[0xd] = rax
arg1[0xc] = rax
return arg1
