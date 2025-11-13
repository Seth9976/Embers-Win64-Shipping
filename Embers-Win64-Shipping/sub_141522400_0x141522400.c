// 函数: sub_141522400
// 地址: 0x141522400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r15_1 = *(arg1 + 0xc) * 2
int64_t r12 = sx.q(r15_1)
int64_t rax = 4 * r12

if (mulu.dp.q(4, r12) u>> 0x40 != zx.o(0))
    rax = -1

int64_t rax_1 = j_sub_140a82f30(rax)
int32_t i_3 = 0
int32_t i = 0

if (*(arg1 + 0xc) s> 0)
    int64_t rdx = 0
    
    do
        rdx += 4
        i += 1
        *(rdx + rax_1 - 4) = *(rdx + *(arg1 + 0x38) - 4)
    while (i s< *(arg1 + 0xc))

if (i s< r15_1)
    __builtin_memset(rax_1 + (sx.q(i) << 2), 0, sx.q(r15_1 - i) << 2)

j_sub_140a74f90(*(arg1 + 0x38))
*(arg1 + 0x38) = rax_1
int64_t rax_6 = 8 * r12

if (mulu.dp.q(8, r12) u>> 0x40 != zx.o(0))
    rax_6 = -1

int64_t rax_7 = j_sub_140a82f30(rax_6)
int32_t i_1 = 0

if (*(arg1 + 0xc) s> 0)
    int64_t rdi_1 = 0
    
    do
        rdi_1 += 8
        i_1 += 1
        *(rdi_1 + rax_7 - 8) = *(rdi_1 + *(arg1 + 0x48) - 8)
    while (i_1 s< *(arg1 + 0xc))

j_sub_140a74f90(*(arg1 + 0x48))
*(arg1 + 0x48) = rax_7
int64_t rax_8 = 4 * r12

if (mulu.dp.q(4, r12) u>> 0x40 != zx.o(0))
    rax_8 = -1

int64_t rax_9 = j_sub_140a82f30(rax_8)
int32_t i_2 = 0

if (*(arg1 + 0xc) s> 0)
    int64_t rdi_2 = 0
    
    do
        rdi_2 += 4
        i_2 += 1
        *(rdi_2 + rax_9 - 4) = *(rdi_2 + *(arg1 + 0x40) - 4)
    while (i_2 s< *(arg1 + 0xc))

if (i_2 s< r15_1)
    __builtin_memset(rax_9 + (sx.q(i_2) << 2), 0, sx.q(r15_1 - i_2) << 2)

j_sub_140a74f90(*(arg1 + 0x40))
*(arg1 + 0x40) = rax_9
int64_t rax_10 = 8 * r12

if (mulu.dp.q(8, r12) u>> 0x40 != zx.o(0))
    rax_10 = -1

int64_t rax_11 = j_sub_140a82f30(rax_10)

if (*(arg2 + 0xc) s> 0)
    int64_t rdi_4 = 0
    
    do
        rdi_4 += 8
        i_3 += 1
        *(rdi_4 + rax_11 - 8) = *(rdi_4 + *(arg2 + 0xa0) - 8)
    while (i_3 s< *(arg2 + 0xc))

int64_t result = j_sub_140a74f90(*(arg2 + 0xa0))
*(arg2 + 0xa0) = rax_11
*(arg1 + 0xc) = r15_1
return result
