// 函数: sub_141c45970
// 地址: 0x141c45970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3[0x4] = arg3 ^ 0x80000000
float temp0[0x4] = _mm_unpacklo_ps(zmm3, zmm3[0].q)
float temp0_2[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(arg3, arg3[0].q), temp0[0].q)
int32_t r10_1 = arg5 & 0xfffffffc

if (r10_1 s> 0)
    float (* rcx)[0x4] = arg2
    uint64_t i_3 = zx.q(((r10_1 - 1) u>> 2) + 1)
    uint64_t i
    
    do
        float zmm0[0x4] = *rcx
        rcx = &rcx[1]
        *(arg4 - arg2 + rcx - 0x10) = _mm_mul_ps(zmm0, temp0_2)
        i = i_3
        i_3 -= 1
    while (i != 1)

int64_t rcx_1 = sx.q(arg5)
int64_t r8_3 = sx.q(r10_1)

if (r8_3 s>= rcx_1)
    return 

void* rax = arg4 + 4 + (r8_3 << 2)
void* rdx = arg2 - arg4
int64_t i_2 = ((rcx_1 - r8_3 - 1) u>> 1) + 1
int64_t i_1

do
    rax += 8
    arg3[0] = arg3[0] f* *(rdx + rax - 0xc)
    *(rax - 0xc) = arg3[0]
    arg3[0] = arg3[0] f* *(rdx + rax - 8)
    *(rax - 8) = (arg3 ^ 0x80000000)[0]
    i_1 = i_2
    i_2 -= 1
while (i_1 != 1)
