// 函数: sub_142c3e320
// 地址: 0x142c3e320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = *(arg1 + 0x98)

if (r9 == 0)
    return 

int32_t i_2 = *(arg2 + 0x60)

if (i_2 == 0)
    return 

void* rax = *(arg2 + 0x70) + 4
uint64_t i_1 = zx.q(i_2)
uint64_t i

do
    uint64_t rcx = zx.q(*(rax + 0xe))
    rax += 0x14
    *(rax - 0x14) |= *(r9 + (rcx << 2))
    i = i_1
    i_1 -= 1
while (i != 1)
