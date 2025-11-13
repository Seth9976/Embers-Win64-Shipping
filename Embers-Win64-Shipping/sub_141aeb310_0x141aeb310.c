// 函数: sub_141aeb310
// 地址: 0x141aeb310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[4].b &= 0xfc
void*** rax = sub_140a82f30(0x60, 8)
arg1[4].b |= 1
bool cond:0 = (arg1[4].b & 2) != 0
*arg1 = rax

if (cond:0)
    rax = arg1

*rax = &data_142d40498
rax[1].d = *(arg2 + 8)
*rax = &data_143053378
void* rcx_1 = &rax[4]
rax[2] = 0
rax[3] = 0
*(rcx_1 + 0x10) = 0
*(rcx_1 + 0x18) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax_1 = *(rcx_1 + 0x10)

if (rax_1 != 0)
    rcx_1 = rax_1

*rcx_1 = 0
*(rcx_1 + 8) = 0
rax[8].d = 0xffffffff
*(rax + 0x44) = 0
rax[0xa] = 0
rax[0xb].d = 0
sub_140780e10(&rax[2], arg2 + 0x10)

if (*(arg2 + 0x50) == 0)
    memmove(&rax[9], arg2 + 0x48, 4)

int64_t rcx_4 = rax[0xa]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

rax[0xa] = *(arg2 + 0x50)
*(arg2 + 0x50) = 0
rax[0xb].d = *(arg2 + 0x58)
*(arg2 + 0x58) = 0
return arg1
