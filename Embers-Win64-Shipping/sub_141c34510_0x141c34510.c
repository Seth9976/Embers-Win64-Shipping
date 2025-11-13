// 函数: sub_141c34510
// 地址: 0x141c34510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = arg2[1].d
int128_t* r11 = *arg1
int32_t r8_1 = r9 & 0xfffffffc
float (* rbx)[0x4] = *arg2
int32_t i_4 = r9 & 3
float zmm0[0x4]

if (r8_1 s> 0)
    float (* rdx)[0x4] = rbx
    int128_t* rcx = r11
    uint64_t i_3 = zx.q(((r8_1 - 1) u>> 2) + 1)
    uint64_t i
    
    do
        float zmm2[0x4] = *rcx
        zmm0 = rcx[1]
        rcx = &rcx[2]
        float temp0_1[0x4] = _mm_mul_ps(zmm2, zmm2)
        float temp0_2[0x4] = _mm_mul_ps(zmm0, zmm0)
        *rdx = _mm_add_ps(_mm_shuffle_ps(temp0_1, temp0_2, 0xdd), 
            _mm_shuffle_ps(temp0_1, temp0_2, 0x88))
        rdx = &rdx[1]
        i = i_3
        i_3 -= 1
    while (i != 1)

if (i_4 == 0)
    return 

int64_t r10_3 = sx.q(r8_1 * 2) << 2
float* rdx_1 = &(*rbx)[sx.q(r8_1)]
uint64_t i_2 = zx.q(i_4)
float (* rcx_2)[0x4] = r10_3 + r11

if (i_2 s<= 0)
    return 

void* r8_2 = r10_3 - rcx_2 + r11
uint64_t i_1

do
    zmm0 = *rcx_2
    float zmm1[0x4] = *(r8_2 + rcx_2 + 4)
    rcx_2 = &(*rcx_2)[2]
    zmm1[0] = zmm1[0] * zmm1[0]
    zmm0[0] = zmm0[0] * zmm0[0]
    zmm1[0] = zmm1[0] + zmm0[0]
    *rdx_1 = zmm1[0]
    rdx_1 = &rdx_1[1]
    i_1 = i_2
    i_2 -= 1
while (i_1 != 1)
