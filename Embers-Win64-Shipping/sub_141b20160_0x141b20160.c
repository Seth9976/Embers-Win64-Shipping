// 函数: sub_141b20160
// 地址: 0x141b20160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xe0) == 0)
    arg2[0x10].b = (arg2[0x10].b & 0xfe) | 2
    return arg2

int64_t rax = *(arg1 + 0x90)
int32_t var_40 = 0
int128_t zmm0 = *(arg1 + 0xe0)
int128_t zmm1 = *(arg1 + 0xf0)
uint32_t rax_1

if (rax.b == 2)
    rax_1 = 0
else if (rax.b != 1)
    rax_1 = (rax u>> 0x20).d + 1
else
    rax_1 = (rax u>> 0x20).d

arg2[0x10].b = (arg2[0x10].b & 0xfe) | 3
*(arg2 + 0x14) = 0xffffffff.q
*(arg2 + 0x20) = zmm0
arg2[8].d = rax_1
*arg2 = &data_143053238
arg2[1].b = 0
arg2[2].b = 0
*(arg2 + 0x30) = zmm1
return arg2
