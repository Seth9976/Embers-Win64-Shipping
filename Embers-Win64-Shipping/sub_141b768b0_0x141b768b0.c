// 函数: sub_141b768b0
// 地址: 0x141b768b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0x10].b &= 0xfd
void*** rax = sub_140a82f30(0x90, 8)
arg1[0x10].b |= 1
void*** r8 = rax
bool cond:0 = (arg1[0x10].b & 2) != 0
*arg1 = rax

if (cond:0)
    r8 = arg1

*r8 = &data_142d4b9d8
char rcx = *(arg2 + 8)
*r8 = &data_142d4ba68
r8[1].b = rcx
r8[2].b = *(arg2 + 0x10)
*(r8 + 0x14) = *(arg2 + 0x14)
*r8 = &data_143056778
r8[4] = 0
r8[4] = *(arg2 + 0x20)
__builtin_memset(arg2 + 0x20, 0, 0x70)
r8[5].d = *(arg2 + 0x28)
*(r8 + 0x2c) = *(arg2 + 0x2c)
r8[6] = 0
r8[6] = *(arg2 + 0x30)
r8[7].d = *(arg2 + 0x38)
*(r8 + 0x3c) = *(arg2 + 0x3c)
r8[8] = 0
r8[8] = *(arg2 + 0x40)
r8[9].d = *(arg2 + 0x48)
*(r8 + 0x4c) = *(arg2 + 0x4c)
r8[0xa] = 0
r8[0xa] = *(arg2 + 0x50)
r8[0xb].d = *(arg2 + 0x58)
*(r8 + 0x5c) = *(arg2 + 0x5c)
r8[0xc] = 0
r8[0xc] = *(arg2 + 0x60)
r8[0xd].d = *(arg2 + 0x68)
*(r8 + 0x6c) = *(arg2 + 0x6c)
r8[0xe] = 0
r8[0xe] = *(arg2 + 0x70)
r8[0xf].d = *(arg2 + 0x78)
*(r8 + 0x7c) = *(arg2 + 0x7c)
*r8 = &data_14306e6a0
r8[0x10] = 0
r8[0x10] = *(arg2 + 0x80)
r8[0x11].d = *(arg2 + 0x88)
int32_t result = *(arg2 + 0x8c)
*(r8 + 0x8c) = result
return result
