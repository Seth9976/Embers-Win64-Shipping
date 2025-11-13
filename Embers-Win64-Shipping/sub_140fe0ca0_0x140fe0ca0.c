// 函数: sub_140fe0ca0
// 地址: 0x140fe0ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int32_t r10_1 = 0

do
    uint32_t r8 = 0
    void* rdx_3 = (zx.q(r10_1 * arg1) << 4) + arg5
    int16_t* rcx_2 = zx.q(r10_1 * arg4) + arg3
    uint32_t rax
    int32_t zmm0
    float zmm3[0x4]
    
    if (arg1 u>= 4)
        void* rbx_1 = rdx_3 + 0x20
        uint64_t rax_3 = zx.q(((arg1 - 4) u>> 2) + 1)
        uint64_t i_3 = zx.q(rax_3.d)
        r8 = (rax_3 << 2).d
        uint64_t i
        
        do
            zmm3 = zx.o(0)
            float zmm4[0x4] = zx.o(0)
            zmm3[0] = float.s(zx.d(*rcx_2))
            zmm0 = float.s(zx.d(rcx_2[1]))
            int32_t zmm1 = float.s(zx.d(rcx_2[2]))
            int32_t zmm2 = float.s(zx.d(rcx_2[3]))
            zmm3[0] = zmm3[0] * 1.52590219e-05f
            float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
            temp0_1[0] = zmm0 f* 1.52590219e-05f
            float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
            temp0_2[0] = zmm1 f* 1.52590219e-05f
            float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x27)
            temp0_3[0] = zmm2 f* 1.52590219e-05f
            *rdx_3 = _mm_shuffle_ps(temp0_3, temp0_3, 0x39)
            zmm3 = zx.o(0)
            zmm4[0] = float.s(zx.d(rcx_2[4]))
            zmm0 = float.s(zx.d(rcx_2[5]))
            zmm1 = float.s(zx.d(rcx_2[6]))
            zmm2 = float.s(zx.d(rcx_2[7]))
            zmm4[0] = zmm4[0] * 1.52590219e-05f
            float temp0_5[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xe1)
            temp0_5[0] = zmm0 f* 1.52590219e-05f
            float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xc6)
            temp0_6[0] = zmm1 f* 1.52590219e-05f
            float temp0_7[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0x27)
            temp0_7[0] = zmm2 f* 1.52590219e-05f
            *(rbx_1 - 0x10) = _mm_shuffle_ps(temp0_7, temp0_7, 0x39)
            zmm4 = zx.o(0)
            zmm3[0] = float.s(zx.d(rcx_2[8]))
            zmm0 = float.s(zx.d(rcx_2[9]))
            uint32_t rax_14 = zx.d(rcx_2[0xa])
            zmm3[0] = zmm3[0] * 1.52590219e-05f
            uint32_t rax_15 = zx.d(rcx_2[0xb])
            float temp0_9[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
            temp0_9[0] = zmm0 f* 1.52590219e-05f
            float temp0_10[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0xc6)
            temp0_10[0] = float.s(rax_14) f* 1.52590219e-05f
            float temp0_11[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0x27)
            temp0_11[0] = float.s(rax_15) f* 1.52590219e-05f
            *rbx_1 = _mm_shuffle_ps(temp0_11, temp0_11, 0x39)
            zmm4[0] = float.s(zx.d(rcx_2[0xc]))
            zmm0 = float.s(zx.d(rcx_2[0xd]))
            uint32_t rax_18 = zx.d(rcx_2[0xe])
            zmm4[0] = zmm4[0] * 1.52590219e-05f
            float temp0_13[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xe1)
            rbx_1 += 0x40
            temp0_13[0] = zmm0 f* 1.52590219e-05f
            float temp0_14[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xc6)
            rax = zx.d(rcx_2[0xf])
            rdx_3 += 0x40
            rcx_2 = &rcx_2[0x10]
            temp0_14[0] = float.s(rax_18) f* 1.52590219e-05f
            float temp0_15[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0x27)
            temp0_15[0] = float.s(rax) f* 1.52590219e-05f
            *(rbx_1 - 0x30) = _mm_shuffle_ps(temp0_15, temp0_15, 0x39)
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    if (r8 u< arg1)
        void* rcx_3 = &rcx_2[2]
        uint64_t i_2 = zx.q(arg1 - r8)
        uint64_t i_1
        
        do
            uint32_t rax_21 = zx.d(*(rcx_3 - 4))
            zmm3 = zx.o(0)
            rdx_3 += 0x10
            rcx_3 += 8
            zmm3[0] = float.s(rax_21)
            zmm0 = float.s(zx.d(*(rcx_3 - 0xa)))
            uint32_t rax_23 = zx.d(*(rcx_3 - 8))
            zmm3[0] = zmm3[0] * 1.52590219e-05f
            float temp0_17[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
            rax = zx.d(*(rcx_3 - 6))
            temp0_17[0] = zmm0 f* 1.52590219e-05f
            float temp0_18[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0xc6)
            temp0_18[0] = float.s(rax_23) f* 1.52590219e-05f
            float temp0_19[0x4] = _mm_shuffle_ps(temp0_18, temp0_18, 0x27)
            temp0_19[0] = float.s(rax) f* 1.52590219e-05f
            *(rdx_3 - 0x10) = _mm_shuffle_ps(temp0_19, temp0_19, 0x39)
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    r10_1 += 1
while (r10_1 u< arg2)
