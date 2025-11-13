// 函数: sub_141c34660
// 地址: 0x141c34660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx_3 = sx.q(arg1[1].d)
int64_t i = 0
void* r8 = *arg1
float temp0[0x4] = _mm_shuffle_ps(arg2, arg2, 0)
int32_t i_4 = 0
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0)
void* rax
float zmm0[0x4]

if (rdx_3.d s> 0 && rdx_3.d u>= 0x10)
    int32_t rcx_1 = rdx_3.d & 0x8000000f
    
    if (rcx_1 s< 0)
        rcx_1 = ((rcx_1 - 1) | 0xfffffff0) + 1
    
    rax = r8 + 0x20
    
    do
        zmm0 = *(rax - 0x20)
        i_4 += 0x10
        rax += 0x40
        i += 0x10
        *(rax - 0x60) = _mm_mul_ps(zmm0, temp0_1)
        *(rax - 0x50) = _mm_mul_ps(*(rax - 0x50), temp0_1)
        *(rax - 0x40) = _mm_mul_ps(*(rax - 0x40), temp0_1)
        *(rax - 0x30) = _mm_mul_ps(*(rax - 0x30), temp0_1)
    while (i s< sx.q(rdx_3.d - rcx_1))

int64_t i_2 = sx.q(i_4)

if (i_2 s>= rdx_3)
    return 

if (rdx_3 - i_2 s>= 4)
    rax = r8 + 8 + (i_2 << 2)
    int64_t i_3 = ((rdx_3 - i_2 - 4) u>> 2) + 1
    i_2 += i_3 << 2
    int64_t i_1
    
    do
        zmm0 = *(rax - 8)
        rax += 0x10
        *(rax - 0x18) = _mm_mul_ps(zmm0, temp0)
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

for (; i_2 s< rdx_3; i_2 += 1)
    temp0[0] = temp0[0] f* *(r8 + (i_2 << 2))
    *(r8 + (i_2 << 2)) = temp0[0]
