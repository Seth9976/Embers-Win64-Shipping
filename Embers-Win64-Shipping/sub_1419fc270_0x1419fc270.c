// 函数: sub_1419fc270
// 地址: 0x1419fc270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1].d = 0x7fffffff
*(arg1 + 0xc) = 0x7fffffff
*(arg1 + 0x14) = 0
arg1[5] = 0
arg1[6] = 0
arg1[8] = 0
arg1[9] = 0
arg1[7] = &data_142da8070
arg1[0xa].b = 0
arg1[0xc] = 0
arg1[0xd] = 0
arg1[0xb] = &data_142da8070
arg1[0xe].b = 0
arg1[0x10] = 0
arg1[0x11] = 0
arg1[0xf] = &data_142da8070
arg1[0x12].b = 0
__builtin_memset(&arg1[0x14], 0, 0x11)
arg1[0x13] = &data_142da8070
__builtin_memset(&arg1[0x17], 0, 0x68)
InitializeCriticalSection(&arg1[0x24])
SetCriticalSectionSpinCount(&arg1[0x24], 0xfa0)
arg1[0x29] = 0
void* rcx_2 = &arg1[0x2b]
arg1[0x2a] = 0
*(rcx_2 + 0x10) = 0
*(rcx_2 + 0x18) = 0
*(rcx_2 + 0x1c) = 0x80
void* rax = *(rcx_2 + 0x10)

if (rax != 0)
    rcx_2 = rax

*rcx_2 = 0
*(rcx_2 + 8) = 0
void* rcx_3 = &arg1[0x35]
arg1[0x2f].d = 0xffffffff
*(arg1 + 0x17c) = 0
arg1[0x31] = 0
arg1[0x32].d = 0
arg1[0x33] = 0
arg1[0x34] = 0
*(rcx_3 + 0x10) = 0
*(rcx_3 + 0x18) = 0
*(rcx_3 + 0x1c) = 0x80
void* rax_1 = *(rcx_3 + 0x10)

if (rax_1 != 0)
    rcx_3 = rax_1

*rcx_3 = 0
*(rcx_3 + 8) = 0
void* rcx_4 = &arg1[0x3f]
arg1[0x39].d = 0xffffffff
*(arg1 + 0x1cc) = 0
arg1[0x3b] = 0
arg1[0x3c].d = 0
arg1[0x3d] = 0
arg1[0x3e] = 0
*(rcx_4 + 0x10) = 0
*(rcx_4 + 0x18) = 0
*(rcx_4 + 0x1c) = 0x80
void* rax_2 = *(rcx_4 + 0x10)
void* rdx = &arg1[0x4a]

if (rax_2 != 0)
    rcx_4 = rax_2

*rcx_4 = 0
*(rcx_4 + 8) = 0
arg1[0x43].d = 0xffffffff
*(arg1 + 0x21c) = 0
arg1[0x45] = 0
arg1[0x46].d = 0
__builtin_memset(&arg1[0x47], 0, 0x18)
*(rdx + 0x10) = 0
*(rdx + 0x18) = 0
*(rdx + 0x1c) = 0x80
void* rax_3 = *(rdx + 0x10)

if (rax_3 != 0)
    rdx = rax_3

*rdx = 0
*(rdx + 8) = 0
rdx.b = 1
arg1[0x4e].d = 0xffffffff
*(arg1 + 0x274) = 0
arg1[0x50] = 0
arg1[0x51].d = 0
arg1[0x52] = 0
(*(arg1[7] + 0x38))(&arg1[7], rdx)
int64_t rdx_1
rdx_1.b = 1
(*(arg1[0xb] + 0x38))(&arg1[0xb], rdx_1)
int64_t rdx_2
rdx_2.b = 1
(*(arg1[0xf] + 0x38))(&arg1[0xf], rdx_2)
int64_t rdx_3
rdx_3.b = 1
arg1[0x13][7](&arg1[0x13], rdx_3)
return arg1
