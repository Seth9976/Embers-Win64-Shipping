// 函数: sub_141c47590
// 地址: 0x141c47590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* r10 = *arg2
int64_t rbx = *arg4
int64_t rdi = sx.q(arg2[1].d)
float temp0[0x4] = _mm_shuffle_ps(arg3, arg3, 0)
float temp0_1[0x4] = _mm_shuffle_ps(arg3, arg3, 0)
int32_t i_7 = rdi.d & 0xfffffffc
float zmm0[0x4]

if (i_7 s> 0)
    uint64_t i_5 = zx.q(((i_7 - 1) u>> 2) + 1)
    int128_t* rcx = r10
    uint64_t i
    
    do
        zmm0 = *rcx
        rcx = &rcx[1]
        *(rbx - r10 + rcx - 0x10) = _mm_mul_ps(zmm0, temp0_1)
        i = i_5
        i_5 -= 1
    while (i != 1)

int32_t r8_4 = rdi.d - i_7
void* rax

if (i_7 s< rdi.d && r8_4 u>= 0x10)
    int64_t i_1 = sx.q(i_7)
    int64_t rdx_2 = sx.q((rdi - 1).d)
    
    if (rbx + (i_1 << 2) u> r10 + (rdx_2 << 2) || rbx + (rdx_2 << 2) u< r10 + (i_1 << 2))
        int32_t r8_5 = r8_4 & 0x8000000f
        
        if (r8_5 s< 0)
            r8_5 = ((r8_5 - 1) | 0xfffffff0) + 1
        
        float (* rcx_3)[0x4] = r10 - rbx
        rax = rbx + 0x10 + (i_1 << 2)
        
        do
            zmm0 = *(rcx_3 + rax - 0x10)
            i_7 += 0x10
            i_1 += 0x10
            float zmm1[0x4] = *(rcx_3 + rax)
            rax += 0x40
            float temp0_3[0x4] = _mm_mul_ps(zmm0, temp0)
            float temp0_4[0x4] = _mm_mul_ps(zmm1, temp0)
            *(rax - 0x50) = temp0_3
            zmm0 = *(rcx_3 + rax - 0x30)
            *(rax - 0x40) = temp0_4
            float temp0_5[0x4] = _mm_mul_ps(zmm0, temp0)
            float temp0_6[0x4] = _mm_mul_ps(*(rcx_3 + rax - 0x20), temp0)
            *(rax - 0x30) = temp0_5
            *(rax - 0x20) = temp0_6
        while (i_1 s< sx.q(rdi.d - r8_5))

int64_t i_8 = sx.q(i_7)

if (i_8 s>= rdi)
    return 

if (rdi - i_8 s>= 4)
    rax = rbx + 4 + (i_8 << 2)
    void* rdx_5 = r10 - rbx
    int64_t i_6 = ((rdi - i_8 - 4) u>> 2) + 1
    i_8 += i_6 << 2
    int64_t i_2
    
    do
        rax += 0x10
        arg3[0] = arg3[0] f* *(rdx_5 + rax - 0x14)
        *(rax - 0x14) = arg3[0]
        arg3[0] = arg3[0] f* *(rdx_5 + rax - 0x10)
        *(rax - 0x10) = arg3[0]
        arg3[0] = arg3[0] f* *(rdx_5 + rax - 0xc)
        *(rax - 0xc) = arg3[0]
        arg3[0] = arg3[0] f* *(rdx_5 + rax - 8)
        *(rax - 8) = arg3[0]
        i_2 = i_6
        i_6 -= 1
    while (i_2 != 1)

if (i_8 s>= rdi)
    return 

rax = rbx + (i_8 << 2)
int64_t i_4 = rdi - i_8
int64_t i_3

do
    rax += 4
    arg3[0] = arg3[0] f* *(r10 - rbx + rax - 4)
    *(rax - 4) = arg3[0]
    i_3 = i_4
    i_4 -= 1
while (i_3 != 1)
