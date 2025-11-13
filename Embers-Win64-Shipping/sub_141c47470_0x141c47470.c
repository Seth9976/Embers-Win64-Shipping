// 函数: sub_141c47470
// 地址: 0x141c47470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = *arg2
int64_t r11 = *arg3
float (* rcx)[0x4] = *arg4
float zmm4[0x4] = data_143205570
int64_t rdi = sx.q(arg2[1].d)
int32_t rbx_1 = rdi.d & 0xfffffffc
float zmm1[0x4]
float zmm2[0x4]

if (rbx_1 s> 0)
    int128_t* r9_1 = r11 - rcx
    float (* rdx)[0x4] = rcx
    uint64_t i_3 = zx.q(((rbx_1 - 1) u>> 2) + 1)
    uint64_t i
    
    do
        zmm2 = *(r9_1 + rdx)
        zmm1 = *(r9_1 + rdx + r10 - r11)
        float temp0_3[0x4] =
            _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xf5), _mm_shuffle_ps(zmm1, zmm1, 0xb1))
        float temp0_5[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xa0), zmm1)
        *rdx = __addps_xmmps_memps(_mm_add_ps(_mm_mul_ps(temp0_3, zmm4), temp0_5), *rdx)
        rdx = &rdx[1]
        i = i_3
        i_3 -= 1
    while (i != 1)

int64_t r8_2 = sx.q(rbx_1)

if (r8_2 s>= rdi)
    return 

void* rax = r11 + 4 + (r8_2 << 2)
int64_t r10_1 = r10 - r11
int32_t* rcx_1 = rcx - r11
int64_t i_2 = ((rdi - r8_2 - 1) u>> 1) + 1
int64_t i_1

do
    float zmm0[0x4] = *rax
    zmm0[0] = zmm0[0] f* *(rax + r10_1)
    zmm1 = *(rax - 4)
    zmm1[0] = zmm1[0] f* *(r10_1 + rax - 4)
    zmm1[0] = zmm1[0] - zmm0[0]
    zmm1[0] = zmm1[0] f+ *(rcx_1 + rax - 4)
    *(rcx_1 + rax - 4) = zmm1[0]
    zmm2 = *rax
    zmm2[0] = zmm2[0] f* *(r10_1 + rax - 4)
    zmm0 = *(rax - 4)
    zmm0[0] = zmm0[0] f* *(rax + r10_1)
    zmm2[0] = zmm2[0] + zmm0[0]
    zmm2[0] = zmm2[0] f+ *(rcx_1 + rax)
    *(rcx_1 + rax) = zmm2[0]
    rax += 8
    i_1 = i_2
    i_2 -= 1
while (i_1 != 1)
