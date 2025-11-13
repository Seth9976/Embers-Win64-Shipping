// 函数: sub_142c202a0
// 地址: 0x142c202a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = *(arg2 + 0x60)

if (i_2 == 0)
    return 

uint64_t i_1 = zx.q(i_2)
int64_t rax = 0
uint64_t i

do
    rax += 0x14
    *(*(arg2 + 0x80) + rax - 2) = 0
    *(*(arg2 + 0x80) + rax - 4) = 0
    i = i_1
    i_1 -= 1
while (i != 1)
