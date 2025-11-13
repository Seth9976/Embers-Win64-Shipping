// 函数: sub_1429a2170
// 地址: 0x1429a2170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

j_sub_140a74f90(*(arg1 + 8))
*arg1 = *arg2
arg1[1] = arg2[1]
uint64_t i_3 = zx.q(arg2[1] * *arg2)
int64_t rax_2 = 4 * i_3
uint64_t i_4 = i_3

if (mulu.dp.q(4, i_3) u>> 0x40 != zx.o(0))
    rax_2 = -1

uint64_t i_5 = j_sub_140a82f30(rax_2)
int32_t i_1 = 0
i_4 = i_5

if (i_5 == 0)
    i_5 = 0
else if (i_3 != 0)
    void* rcx_2 = i_5 + 2
    uint64_t i
    
    do
        *(rcx_2 - 2) = 0xff000000
        rcx_2 += 4
        i = i_3
        i_3 -= 1
    while (i != 1)

*(arg1 + 8) = i_5

if (arg1[1] * *arg1 != 0)
    do
        uint64_t i_2 = zx.q(i_1)
        i_1 += 1
        uint64_t rdx = i_2 << 2
        *(rdx + *(arg1 + 8)) = *(rdx + *(arg2 + 8))
    while (i_1 u< arg1[1] * *arg1)

return arg1
