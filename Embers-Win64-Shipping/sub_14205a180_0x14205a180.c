// 函数: sub_14205a180
// 地址: 0x14205a180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (arg1[1].d s<= 0)
    return 

int64_t rdx_1 = 0
float zmm2 = 1f / arg2

do
    int64_t rax = *arg1
    rdx_1 += 0x18
    i += 1
    arg2 = zmm2 f* *(rdx_1 + rax - 0x14)
    *(rdx_1 + rax - 0xc) = zmm2 f* *(rdx_1 + rax - 0x18)
    *(rdx_1 + rax - 8) = arg2
while (i s< arg1[1].d)
