// 函数: sub_140acc470
// 地址: 0x140acc470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = 0
int64_t r9 = sx.q(arg3)
__builtin_memset(arg1, 0, 0x11)
void* r11 = arg2
float zmm0[0x4]
float zmm1

if (r9 s>= 4)
    arg2.b = 0
    void* rax_1 = r11 + 0x14
    int64_t i_2 = ((r9 - 4) u>> 2) + 1
    r10 = i_2 << 2
    int64_t i
    
    do
        float zmm3
        float zmm4
        
        if (arg2.b == 0)
            zmm0 = zx.o(*(rax_1 - 0x14))
            arg2.b = 1
            *arg1 = _mm_unpacklo_pd(zmm0, zmm0[0].q)
            arg1[1][0].b = 1
            zmm4 = *arg1
            zmm3 = (*arg1)[3]
        else
            zmm1 = (*arg1)[2]
            zmm4 = __minss_xmmss_memss(*(rax_1 - 0x14), *arg1)
            *arg1 = zmm4
            (*arg1)[1] = __minss_xmmss_memss((*(rax_1 - 0x10))[0], (*arg1)[1])[0]
            (*arg1)[2] = __maxss_xmmss_memss(zmm1, *(rax_1 - 0x14))
            zmm3 = __maxss_xmmss_memss(*(rax_1 - 0x10), (*arg1)[3])
            (*arg1)[3] = zmm3
        
        zmm0 = (*arg1)[2]
        int32_t temp0_6 = _mm_min_ss(*(rax_1 - 0xc), zmm4)
        *arg1 = temp0_6
        float temp0_7 = __minss_xmmss_memss(*(rax_1 - 8), (*arg1)[1])
        (*arg1)[1] = temp0_7
        float temp0_8[0x4] = __maxss_xmmss_memss(zmm0[0], *(rax_1 - 0xc))
        (*arg1)[2] = temp0_8[0]
        float temp0_9 = __maxss_xmmss_memss(zmm3, *(rax_1 - 8))
        (*arg1)[3] = temp0_9
        int32_t temp0_10 = __minss_xmmss_memss(temp0_6, *(rax_1 - 4))
        *arg1 = temp0_10
        float temp0_11 = __minss_xmmss_memss(temp0_7, *rax_1)
        (*arg1)[1] = temp0_11
        float temp0_12[0x4] = __maxss_xmmss_memss(temp0_8[0], *(rax_1 - 4))
        (*arg1)[2] = temp0_12[0]
        float temp0_13 = __maxss_xmmss_memss(temp0_9, *rax_1)
        (*arg1)[3] = temp0_13
        *arg1 = __minss_xmmss_memss(temp0_10, *(rax_1 + 4))
        (*arg1)[1] = __minss_xmmss_memss(temp0_11, *(rax_1 + 8))
        (*arg1)[2] = __maxss_xmmss_memss(temp0_12[0], *(rax_1 + 4))[0]
        float temp0_17 = __maxss_xmmss_memss(temp0_13, *(rax_1 + 8))
        rax_1 += 0x20
        (*arg1)[3] = temp0_17
        i = i_2
        i_2 -= 1
    while (i != 1)

if (r10 s< r9)
    char rdx = arg1[1][0].b
    void* rax_2 = r11 + (r10 << 3)
    int64_t i_3 = r9 - r10
    int64_t i_1
    
    do
        if (rdx == 0)
            zmm0 = zx.o(*rax_2)
            rdx = 1
            *arg1 = _mm_unpacklo_pd(zmm0, zmm0[0].q)
            arg1[1][0].b = 1
        else
            *arg1 = __minss_xmmss_memss((*rax_2)[0], *arg1)[0]
            float temp0_19 = __minss_xmmss_memss(*(rax_2 + 4), (*arg1)[1])
            zmm0 = (*arg1)[2]
            (*arg1)[1] = temp0_19
            float temp0_20[0x4] = __maxss_xmmss_memss(zmm0[0], *rax_2)
            zmm1 = (*arg1)[3]
            (*arg1)[2] = temp0_20[0]
            (*arg1)[3] = __maxss_xmmss_memss(zmm1, *(rax_2 + 4))
        
        rax_2 += 8
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

return arg1
