// 函数: sub_141aeb5e0
// 地址: 0x141aeb5e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0x10].b &= 0xfc
void** rax = sub_140a82f30(0xc0, 8)
arg1[0x10].b |= 1
void** rdx = rax
bool cond:0 = (arg1[0x10].b & 2) != 0
*arg1 = rax

if (cond:0)
    rdx = arg1

*rdx = &data_142d4b9d8
char rcx = *(arg2 + 8)
*rdx = &data_142d4ba68
rdx[1].b = rcx
rdx[2].b = *(arg2 + 0x10)
*(rdx + 0x14) = *(arg2 + 0x14)
*rdx = &data_143054b38
rdx[4] = 0
rdx[4] = *(arg2 + 0x20)
*(arg2 + 0x20) = 0
rdx[5].d = *(arg2 + 0x28)
*(rdx + 0x2c) = *(arg2 + 0x2c)
*(arg2 + 0x28) = 0
rdx[6].d ^= (rdx[6].d ^ *(arg2 + 0x30)) & 1
int32_t rcx_2 = rdx[6].d ^ *(arg2 + 0x30)
*rdx = &data_143054b88
rdx[6].d ^= rcx_2 & 2
rdx[7] = &data_1430541c8
void* rcx_4 = &rdx[0x10]
rdx[8] = 0
rdx[8] = *(arg2 + 0x40)
__builtin_memset(arg2 + 0x40, 0, 0x20)
rdx[9].d = *(arg2 + 0x48)
*(rdx + 0x4c) = *(arg2 + 0x4c)
rdx[0xa] = 0
rdx[0xa] = *(arg2 + 0x50)
rdx[0xb].d = *(arg2 + 0x58)
*(rdx + 0x5c) = *(arg2 + 0x5c)
__builtin_memset(&rdx[0xc], 0, 0x20)
*(rcx_4 + 0x10) = 0
*(rcx_4 + 0x18) = 0
*(rcx_4 + 0x1c) = 0x80
void* rax_15 = *(rcx_4 + 0x10)

if (rax_15 != 0)
    rcx_4 = rax_15

*rcx_4 = 0
*(rcx_4 + 8) = 0
rdx[0x14].d = 0xffffffff
*(rdx + 0xa4) = 0
rdx[0x16] = 0
rdx[0x17].d = 0
return arg1
