// 函数: sub_1409fa870
// 地址: 0x1409fa870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
*arg1 = *arg2
__builtin_memset(arg2, 0, 0x60)
arg1[1].d = arg2[1].d
*(arg1 + 0xc) = *(arg2 + 0xc)
arg1[2] = 0
arg1[2] = arg2[2]
arg1[3].d = arg2[3].d
*(arg1 + 0x1c) = *(arg2 + 0x1c)
arg1[4] = 0
arg1[4] = arg2[4]
arg1[5].d = arg2[5].d
*(arg1 + 0x2c) = *(arg2 + 0x2c)
arg1[6] = 0
arg1[6] = arg2[6]
arg1[7].d = arg2[7].d
*(arg1 + 0x3c) = *(arg2 + 0x3c)
arg1[8] = 0
arg1[8] = arg2[8]
arg1[9].d = arg2[9].d
*(arg1 + 0x4c) = *(arg2 + 0x4c)
arg1[0xa] = 0
arg1[0xa] = arg2[0xa]
arg1[0xb].d = arg2[0xb].d
*(arg1 + 0x5c) = *(arg2 + 0x5c)
arg1[0xc] = 0
arg1[0xd] = 0
void* rcx = &arg1[0xe]
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax_18 = *(rcx + 0x10)

if (rax_18 != 0)
    rcx = rax_18

*rcx = 0
*(rcx + 8) = 0
arg1[0x12].d = 0xffffffff
*(arg1 + 0x94) = 0
arg1[0x14] = 0
arg1[0x15].d = 0
sub_140780e10(&arg1[0xc], &arg2[0xc])

if (arg2[0x14] == 0)
    memmove(&arg1[0x13], &arg2[0x13], 4)

int64_t rcx_3 = arg1[0x14]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

arg1[0x14] = arg2[0x14]
arg2[0x14] = 0
arg1[0x15].d = arg2[0x15].d
arg2[0x15].d = 0
return arg1
