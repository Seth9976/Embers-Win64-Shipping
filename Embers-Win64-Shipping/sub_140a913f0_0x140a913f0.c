// 函数: sub_140a913f0
// 地址: 0x140a913f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx = &arg1[2]
*arg1 = 0
arg1[1] = 0
rdx[2] = 0
rdx[3].d = 0
*(rdx + 0x1c) = 0x80
int64_t* rax = rdx[2]

if (rax != 0)
    rdx = rax

*rdx = 0
rdx[1] = 0
arg1[6].d = 0xffffffff
*(arg1 + 0x34) = 0
arg1[8] = 0
arg1[9].d = 0
InitializeCriticalSection(&arg1[0xa])
return SetCriticalSectionSpinCount(&arg1[0xa], 0xfa0) __tailcall
