// 函数: sub_140fe0780
// 地址: 0x140fe0780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int32_t r10_1 = 0

do
    uint32_t r9 = 0
    void* rdx_3 = (zx.q(r10_1 * arg1) << 4) + arg5
    int32_t* r8_2 = zx.q(r10_1 * arg4) + arg3
    float zmm3[0x4]
    
    if (arg1 u>= 4)
        void* rdi_1 = rdx_3 + 0x20
        uint64_t rax_3 = zx.q(((arg1 - 4) u>> 2) + 1)
        uint64_t i_2 = zx.q(rax_3.d)
        r9 = (rax_3 << 2).d
        uint64_t i
        
        do
            int32_t rcx = *r8_2
            zmm3 = zx.o(0)
            zmm3[0] = float.s(zx.q(rcx) & 0x3ff)
            zmm3[0] = zmm3[0] * 0.000977517106f
            float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
            temp0_1[0] = float.s(zx.q(rcx u>> 0xa) & 0x3ff) f* 0.000977517106f
            float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
            temp0_2[0] = float.s(zx.q(rcx u>> 0x14) & 0x3ff) f* 0.000977517106f
            float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x27)
            temp0_3[0] = float.s(zx.q(rcx u>> 0x1e)) f* 0.333333343f
            *rdx_3 = _mm_shuffle_ps(temp0_3, temp0_3, 0x39)
            int32_t rcx_2 = r8_2[1]
            zmm3 = zx.o(0)
            zmm3[0] = float.s(zx.q(rcx_2) & 0x3ff)
            zmm3[0] = zmm3[0] * 0.000977517106f
            float temp0_5[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
            temp0_5[0] = float.s(zx.q(rcx_2 u>> 0xa) & 0x3ff) f* 0.000977517106f
            float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xc6)
            temp0_6[0] = float.s(zx.q(rcx_2 u>> 0x14) & 0x3ff) f* 0.000977517106f
            float temp0_7[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0x27)
            temp0_7[0] = float.s(zx.q(rcx_2 u>> 0x1e)) f* 0.333333343f
            *(rdi_1 - 0x10) = _mm_shuffle_ps(temp0_7, temp0_7, 0x39)
            int32_t rcx_4 = r8_2[2]
            zmm3 = zx.o(0)
            zmm3[0] = float.s(zx.q(rcx_4) & 0x3ff)
            zmm3[0] = zmm3[0] * 0.000977517106f
            float temp0_9[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
            rdi_1 += 0x40
            temp0_9[0] = float.s(zx.q(rcx_4 u>> 0xa) & 0x3ff) f* 0.000977517106f
            float temp0_10[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0xc6)
            temp0_10[0] = float.s(zx.q(rcx_4 u>> 0x14) & 0x3ff) f* 0.000977517106f
            float temp0_11[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0x27)
            rdx_3 += 0x40
            temp0_11[0] = float.s(zx.q(rcx_4 u>> 0x1e)) f* 0.333333343f
            *(rdi_1 - 0x40) = _mm_shuffle_ps(temp0_11, temp0_11, 0x39)
            int32_t rcx_6 = r8_2[3]
            zmm3 = zx.o(0)
            r8_2 = &r8_2[4]
            zmm3[0] = float.s(zx.q(rcx_6) & 0x3ff)
            zmm3[0] = zmm3[0] * 0.000977517106f
            float temp0_13[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
            temp0_13[0] = float.s(zx.q(rcx_6 u>> 0xa) & 0x3ff) f* 0.000977517106f
            float temp0_14[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xc6)
            temp0_14[0] = float.s(zx.q(rcx_6 u>> 0x14) & 0x3ff) f* 0.000977517106f
            float temp0_15[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0x27)
            temp0_15[0] = float.s(zx.q(rcx_6 u>> 0x1e)) f* 0.333333343f
            *(rdi_1 - 0x30) = _mm_shuffle_ps(temp0_15, temp0_15, 0x39)
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    if (r9 u< arg1)
        uint64_t i_3 = zx.q(arg1 - r9)
        uint64_t i_1
        
        do
            int32_t rcx_8 = *r8_2
            rdx_3 += 0x10
            zmm3 = zx.o(0)
            r8_2 = &r8_2[1]
            zmm3[0] = float.s(zx.q(rcx_8) & 0x3ff)
            zmm3[0] = zmm3[0] * 0.000977517106f
            float temp0_17[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
            temp0_17[0] = float.s(zx.q(rcx_8 u>> 0xa) & 0x3ff) f* 0.000977517106f
            float temp0_18[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0xc6)
            temp0_18[0] = float.s(zx.q(rcx_8 u>> 0x14) & 0x3ff) f* 0.000977517106f
            float temp0_19[0x4] = _mm_shuffle_ps(temp0_18, temp0_18, 0x27)
            temp0_19[0] = float.s(zx.q(rcx_8 u>> 0x1e)) f* 0.333333343f
            *(rdx_3 - 0x10) = _mm_shuffle_ps(temp0_19, temp0_19, 0x39)
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    r10_1 += 1
while (r10_1 u< arg2)
