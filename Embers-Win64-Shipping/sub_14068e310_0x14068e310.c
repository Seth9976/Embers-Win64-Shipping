// 函数: sub_14068e310
// 地址: 0x14068e310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142d8ad18
arg1[1] = *(arg2 + 8)
*(arg1 + 0x10) = *(arg2 + 0x10)
*(arg1 + 0x20) = *(arg2 + 0x20)
arg1[6].b = *(arg2 + 0x30)
arg1[7] = *(arg2 + 0x38)
void* rax_2 = *(arg2 + 0x40)
arg1[8] = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1

arg1[9] = *(arg2 + 0x48)
arg1[0xa] = *(arg2 + 0x50)
*(arg1 + 0x58) = *(arg2 + 0x58)
arg1[0xd].d = *(arg2 + 0x68)
*(arg1 + 0x6c) = *(arg2 + 0x6c)
*(arg1 + 0x6d) = *(arg2 + 0x6d)
*(arg1 + 0x6e) = *(arg2 + 0x6e)
*(arg1 + 0x6f) = *(arg2 + 0x6f)
arg1[0xe] = *(arg2 + 0x70)
void* rax_11 = *(arg2 + 0x78)
arg1[0xf] = rax_11

if (rax_11 != 0)
    *(rax_11 + 8) += 1

arg1[0x10].b ^= (arg1[0x10].b ^ *(arg2 + 0x80)) & 1
char rax_13 = arg1[0x10].b
arg1[0x10].b = ((rax_13 ^ *(arg2 + 0x80)) & 2) ^ rax_13
return arg1
