// 函数: sub_141ddd6f0
// 地址: 0x141ddd6f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx = &arg1[4]
arg1[1] = 0
*arg1 = &data_14323f5c0
arg1[2] = 0
arg1[3] = 0
rdx[2] = 0
rdx[3].d = 0
*(rdx + 0x1c) = 0x80
int64_t* rax = rdx[2]

if (rax != 0)
    rdx = rax

*rdx = 0
rdx[1] = 0
*(arg1 + 0x44) = 0
arg1[8].d = 0xffffffff
arg1[0xa] = 0
arg1[0xb].d = 0
InitializeCriticalSection(&arg1[0xc])
SetCriticalSectionSpinCount(&arg1[0xc], 0xfa0)
return arg1
