// 函数: sub_141c34800
// 地址: 0x141c34800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r11 = *arg2
int64_t i = 0
int64_t r8 = sx.q(arg1[1].d)
int32_t r10 = 0
int64_t r9 = *arg1
void* rax
float zmm0[0x4]
float zmm1[0x4]

if (r8.d s> 0 && r8.d u>= 0x10)
    int64_t rcx = sx.q((r8 - 1).d)
    
    if (r11 u> r9 + (rcx << 2) || r11 + (rcx << 2) u< r9)
        int32_t rcx_2 = r8.d & 0x8000000f
        
        if (rcx_2 s< 0)
            rcx_2 = ((rcx_2 - 1) | 0xfffffff0) + 1
        
        int128_t* rcx_6 = r9 - r11
        rax = r11 + 0x10
        
        do
            zmm0 = *(rax - 0x10)
            r10 += 0x10
            i += 0x10
            zmm1 = *(rcx_6 + rax - 0x10)
            float zmm2[0x4] = *(rcx_6 + rax)
            rax += 0x40
            *(rax - 0x50) = _mm_mul_ps(zmm1, zmm0)
            zmm1 = *(rcx_6 + rax - 0x30)
            *(rax - 0x40) = _mm_mul_ps(zmm2, *(rax - 0x40))
            *(rax - 0x30) = _mm_mul_ps(zmm1, *(rax - 0x30))
            *(rax - 0x20) = _mm_mul_ps(*(rcx_6 + rax - 0x20), *(rax - 0x20))
        while (i s< sx.q(r8.d - rcx_2))

int64_t r10_1 = sx.q(r10)

if (r10_1 s>= r8)
    return 

if (r8 - r10_1 s>= 4)
    rax = r11 + 4 + (r10_1 << 2)
    void* rdx_1 = r9 - r11
    int64_t i_4 = ((r8 - r10_1 - 4) u>> 2) + 1
    r10_1 += i_4 << 2
    int64_t i_1
    
    do
        zmm0 = *(rdx_1 + rax - 4)
        zmm0[0] = zmm0[0] f* *(rax - 4)
        rax += 0x10
        *(rax - 0x14) = zmm0[0]
        zmm1 = *(rdx_1 + rax - 0x10)
        zmm1[0] = zmm1[0] f* *(rax - 0x10)
        *(rax - 0x10) = zmm1[0]
        zmm0 = *(rdx_1 + rax - 0xc)
        zmm0[0] = zmm0[0] f* *(rax - 0xc)
        *(rax - 0xc) = zmm0[0]
        zmm1 = *(rdx_1 + rax - 8)
        zmm1[0] = zmm1[0] f* *(rax - 8)
        *(rax - 8) = zmm1[0]
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)

if (r10_1 s>= r8)
    return 

rax = r11 + (r10_1 << 2)
int64_t i_3 = r8 - r10_1
int64_t i_2

do
    zmm0 = *(r9 - r11 + rax)
    zmm0[0] = zmm0[0] f* *rax
    rax += 4
    *(rax - 4) = zmm0[0]
    i_2 = i_3
    i_3 -= 1
while (i_2 != 1)
