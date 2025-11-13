// 函数: sub_141c34ad0
// 地址: 0x141c34ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9_1 = arg1[1].d
float (* r10)[0x4] = *arg1
int32_t r8_1 = r9_1 & 0xfffffffc
float temp0[0x4] = _mm_shuffle_ps(arg2, arg2, 0)
int32_t r9 = r9_1 & 3
float temp0_1[0x4] = _mm_shuffle_ps(arg2, arg2, 0)

if (r8_1 s> 0)
    float (* rcx)[0x4] = r10
    uint64_t i_4 = zx.q(((r8_1 - 1) u>> 2) + 1)
    uint64_t i
    
    do
        *rcx = _mm_sub_ps(*rcx, temp0_1)
        rcx = &rcx[1]
        i = i_4
        i_4 -= 1
    while (i != 1)

if (r9 == 0)
    return 

int64_t r8_2 = 0
uint64_t rcx_1 = zx.q(r9)
void* r10_1 = &(*r10)[sx.q(r8_1)]

if (0 s>= rcx_1)
    return 

float* rax

if (zx.q(rcx_1.d) s>= 4)
    rax = r10_1 + 8
    int64_t i_5 = ((zx.q(rcx_1.d) - 4) u>> 2) + 1
    r8_2 = i_5 << 2
    int64_t i_1
    
    do
        *(rax - 8) = _mm_sub_ps(*(rax - 8), temp0)
        rax = &rax[4]
        i_1 = i_5
        i_5 -= 1
    while (i_1 != 1)

if (r8_2 s>= rcx_1)
    return 

rax = r10_1 + (r8_2 << 2)
int64_t i_3 = rcx_1 - r8_2
int64_t i_2

do
    float zmm0[0x4] = *rax
    zmm0[0] = zmm0[0] - temp0[0]
    *rax = zmm0[0]
    rax = &rax[1]
    i_2 = i_3
    i_3 -= 1
while (i_2 != 1)
