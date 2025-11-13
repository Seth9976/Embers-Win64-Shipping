// 函数: sub_1418f26e0
// 地址: 0x1418f26e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = *(arg3 + 0x38)
int32_t rax = *(arg3 + 0x34)
int128_t zmm0 = *(arg3 + 0x20)
int32_t r10 = *(arg3 + 0x30)
int32_t rbx = *(arg3 + 0x40)
int32_t rdx = *(arg3 + 0x60)
int32_t r11 = *(arg3 + 0x3c)
int32_t rdi = *(arg3 + 0x64)
*arg1 = &data_142d3ff08
arg1[1].d = 0
*(arg1 + 0xc) = 0
arg1[2].w = 0x100
arg1[3] = 0
*(arg1 + 0x34) = rax
*(arg1 + 0x20) = zmm0
arg1[9] = &arg1[0xa]
arg1[7].d = r9
arg1[6].d = r10
*(arg1 + 0x3c) = r11
arg1[8].d = rbx
arg1[0xa] = -0x3810000020000000
arg1[0xb] = 0
arg1[0xc].d = rdx
*arg1 = &data_142ef29a0
*(arg1 + 0x64) = rdi
sub_1418f2f30(&arg1[0xd], arg2, arg3 + 0x68, 1, *(arg3 + 0x60), *(arg3 + 0x64), 1)
*arg1 = &data_142ff1910
arg1[0xd] = &data_142ff1968
return arg1
