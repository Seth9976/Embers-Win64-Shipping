// 函数: sub_141af0ad0
// 地址: 0x141af0ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0x10].b &= 0xfd
void** rax = sub_140a82f30(0xe8, 8)
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
void* result_1 = &rdx[0x15]
rdx[2].b = *(arg2 + 0x10)
*(rdx + 0x14) = *(arg2 + 0x14)
*rdx = &data_142d4c6c8
rdx[4] = *(arg2 + 0x20)
rdx[5] = 0
rdx[5] = *(arg2 + 0x28)
*(arg2 + 0x28) = 0
rdx[6].d = *(arg2 + 0x30)
*(rdx + 0x34) = *(arg2 + 0x34)
*(arg2 + 0x30) = 0
rdx[7] = *(arg2 + 0x38)
rdx[8] = *(arg2 + 0x40)
*rdx = &data_143058a28
rdx[9] = &data_143058528
rdx[0xa] = 0
rdx[0xa] = *(arg2 + 0x50)
__builtin_memset(arg2 + 0x50, 0, 0x30)
rdx[0xb].d = *(arg2 + 0x58)
*(rdx + 0x5c) = *(arg2 + 0x5c)
rdx[0xc] = 0
rdx[0xc] = *(arg2 + 0x60)
rdx[0xd].d = *(arg2 + 0x68)
*(rdx + 0x6c) = *(arg2 + 0x6c)
rdx[0xe] = 0
rdx[0xe] = *(arg2 + 0x70)
rdx[0xf].d = *(arg2 + 0x78)
*(rdx + 0x7c) = *(arg2 + 0x7c)
rdx[0x10].b = *(arg2 + 0x80)
__builtin_memset(&rdx[0x11], 0, 0x20)
*(result_1 + 0x10) = 0
*(result_1 + 0x18) = 0
*(result_1 + 0x1c) = 0x80
void* result = *(result_1 + 0x10)

if (result != 0)
    result_1 = result

*result_1 = 0
*(result_1 + 8) = 0
rdx[0x19].d = 0xffffffff
*(rdx + 0xcc) = 0
rdx[0x1b] = 0
rdx[0x1c].d = 0
return result
