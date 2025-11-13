// 函数: sub_141c34cd0
// 地址: 0x141c34cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2[0x4] = arg2
int128_t* r10 = arg1
int32_t rdx_1 = arg4 & 0x80000003

if (rdx_1 s< 0)
    rdx_1 = ((rdx_1 - 1) | 0xfffffffc) + 1

arg2 = arg2[0]
int32_t r9 = arg4 - rdx_1
float temp0[0x4] = _mm_shuffle_ps(arg2, arg2, 0)
float zmm0[0x4]

if (r9 s> 0)
    uint64_t i_5 = zx.q(((r9 - 1) u>> 2) + 1)
    uint64_t i
    
    do
        zmm0 = *arg1
        arg1 = &arg1[1]
        *(arg3 - r10 + arg1 - 0x10) = _mm_mul_ps(zmm0, temp0)
        i = i_5
        i_5 -= 1
    while (i != 1)

int64_t i_1 = 0
int64_t rdi = sx.q(r9)
int32_t r11_3 = 0
float (* rax)[0x4]

if (rdx_1 s> 0 && rdx_1 u>= 0x10)
    float temp0_2[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
    int32_t rcx_1 = rdx_1 & 0x8000000f
    
    if (rcx_1 s< 0)
        rcx_1 = ((rcx_1 - 1) | 0xfffffff0) + 1
    
    void* rcx_5 = r10 - arg3
    rax = arg3 + (rdi << 2)
    
    do
        zmm0 = *(rax + rcx_5)
        r11_3 += 0x10
        i_1 += 0x10
        arg2 = *(rax + rcx_5 + 0x10)
        rax = &rax[4]
        float temp0_3[0x4] = _mm_mul_ps(zmm0, temp0_2)
        float temp0_4[0x4] = _mm_mul_ps(arg2, temp0_2)
        rax[-4] = temp0_3
        zmm0 = *(rax + rcx_5 - 0x20)
        rax[-3] = temp0_4
        float temp0_5[0x4] = _mm_mul_ps(zmm0, temp0_2)
        float temp0_6[0x4] = _mm_mul_ps(*(rax + rcx_5 - 0x10), temp0_2)
        rax[-2] = temp0_5
        rax[-1] = temp0_6
    while (i_1 s< sx.q(rdx_1 - rcx_1))

int64_t r9_2 = sx.q(r11_3)
int64_t rdx_4 = sx.q(rdx_1)

if (r9_2 s>= rdx_4)
    return 

if (rdx_4 - r9_2 s>= 4)
    void* rcx_6 = arg3 + ((rdi + 1 + r9_2) << 2)
    rax = r10 - arg3
    int64_t i_6 = ((rdx_4 - r9_2 - 4) u>> 2) + 1
    r9_2 += i_6 << 2
    int64_t i_2
    
    do
        rcx_6 += 0x10
        zmm2[0] = zmm2[0] f* *(rax + rcx_6 - 0x14)
        zmm2[0] = zmm2[0] f* *(rcx_6 + rax - 0x10)
        *(rcx_6 - 0x14) = zmm2[0]
        zmm2[0] = zmm2[0] f* *(rax + rcx_6 - 0xc)
        *(rcx_6 - 0x10) = zmm2[0]
        zmm2[0] = zmm2[0] f* *(rax + rcx_6 - 8)
        *(rcx_6 - 0xc) = zmm2[0]
        *(rcx_6 - 8) = zmm2[0]
        i_2 = i_6
        i_6 -= 1
    while (i_2 != 1)

if (r9_2 s>= rdx_4)
    return 

void* rcx_7 = arg3 + ((rdi + r9_2) << 2)
int64_t i_4 = rdx_4 - r9_2
int64_t i_3

do
    rcx_7 += 4
    zmm2[0] = zmm2[0] f* *(rcx_7 + r10 - arg3 - 4)
    *(rcx_7 - 4) = zmm2[0]
    i_3 = i_4
    i_4 -= 1
while (i_3 != 1)
