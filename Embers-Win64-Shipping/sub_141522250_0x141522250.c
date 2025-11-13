// 函数: sub_141522250
// 地址: 0x141522250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r14_1 = zx.q(*(arg1 + 8) * 2)
int64_t r15 = sx.q(r14_1.d)
int64_t rax = 8 * r15

if (mulu.dp.q(8, r15) u>> 0x40 != zx.o(0))
    rax = -1

int64_t rax_1 = j_sub_140a82f30(rax)
int32_t i_3 = 0
int32_t i = 0

if (*(arg1 + 8) s> 0)
    int64_t rdx = 0
    
    do
        rdx += 8
        i += 1
        *(rdx + rax_1 - 8) = *(rdx + *(arg1 + 0x20) - 8)
    while (i s< *(arg1 + 8))

j_sub_140a74f90(*(arg1 + 0x20))
*(arg1 + 0x20) = rax_1
int64_t rax_3 = 8 * r15

if (mulu.dp.q(8, r15) u>> 0x40 != zx.o(0))
    rax_3 = -1

int64_t rax_4 = j_sub_140a82f30(rax_3)
int32_t i_1 = 0

if (*(arg2 + 8) s> 0)
    int64_t rdx_1 = 0
    
    do
        rdx_1 += 8
        i_1 += 1
        *(rdx_1 + rax_4 - 8) = *(rdx_1 + *(arg2 + 0xa8) - 8)
    while (i_1 s< *(arg2 + 8))

j_sub_140a74f90(*(arg2 + 0xa8))
*(arg2 + 0xa8) = rax_4
int64_t rax_6 = 4 * r15

if (mulu.dp.q(4, r15) u>> 0x40 != zx.o(0))
    rax_6 = -1

int64_t rax_7 = j_sub_140a82f30(rax_6)
int32_t i_2 = 0

if (*(arg1 + 8) s> 0)
    int64_t rdx_2 = 0
    
    do
        rdx_2 += 4
        i_2 += 1
        *(rdx_2 + rax_7 - 4) = *(rdx_2 + *(arg1 + 0x28) - 4)
    while (i_2 s< *(arg1 + 8))

j_sub_140a74f90(*(arg1 + 0x28))
*(arg1 + 0x28) = rax_7
int64_t rdx_3 = sx.q((r14_1 * 3).d)
int64_t rax_9 = 8 * rdx_3

if (mulu.dp.q(8, rdx_3) u>> 0x40 != zx.o(0))
    rax_9 = -1

int64_t rax_10 = j_sub_140a82f30(rax_9)

if (*(arg1 + 8) * 3 s> 0)
    int64_t r8 = 0
    
    do
        r8 += 8
        i_3 += 1
        *(r8 + rax_10 - 8) = *(r8 + *(arg1 + 0x30) - 8)
    while (i_3 s< *(arg1 + 8) * 3)

int64_t result = j_sub_140a74f90(*(arg1 + 0x30))
*(arg1 + 0x30) = rax_10
*(arg1 + 8) = r14_1.d
return result
