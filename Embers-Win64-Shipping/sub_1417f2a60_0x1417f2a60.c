// 函数: sub_1417f2a60
// 地址: 0x1417f2a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if (*(arg1 + 0x18) != 0)
    uint32_t zmm2[0x4] = data_143ef9460
    float zmm0[0x4] = zmm2
    int128_t zmm7
    int128_t var_28_1 = zmm7
    uint32_t temp0_1[0x4] = __andps_xmmxud_memxud(zmm2, data_143ef9470)
    zmm0[0].q = zx.o(0) u>> 0x40
    float temp0_2[0x4] = _mm_shuffle_ps(zx.o(0), zmm0, 0xc4)
    float var_58[0x4] = temp0_2
    float var_88[0x4] = temp0_2
    int128_t var_48_1 = zx.o(0)
    uint32_t var_38_1[0x4] = temp0_1
    int128_t var_78_1 = zx.o(0)
    uint32_t var_68_1[0x4] = temp0_1
    EnterCriticalSection(&data_143ef96b0)
    void* r8 = *(arg1 + 0x18)
    
    if (r8 == 0)
        result = LeaveCriticalSection(&data_143ef96b0)
    else
        int64_t* r10_1 = *arg3
        int64_t* rcx = r10_1
        void* r9_1 = &r10_1[sx.q(arg3[1].d)]
        void* rdx
        
        if (r10_1 != r9_1)
            while (true)
                rdx = *rcx
                
                if (rdx != 0 && *(rdx + 0x248) == *(r8 + 0x408))
                    break
                
                rcx = &rcx[1]
                
                if (rcx == r9_1)
                    goto label_1417f2b32
        
        if (r10_1 == r9_1 || not((*(rdx + 0x66c)).d f>= 0f))
        label_1417f2b32:
            *(*r10_1 + 0x66c)
        
        float zmm1[0x4] = *(r8 + 0x460)
        float var_b8 = zmm1[0]
        float temp0_3[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
        float var_b0_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
        float var_b4_1 = temp0_3[0]
        float var_98[0x4] = *(r8 + 0x450)
        void var_a8
        int128_t zmm6 = sub_140adf5d0(&var_98, &var_a8)
        char rax_3
        int512_t zmm6_1
        rax_3, zmm6_1 = sub_1417f2800(*(arg1 + 0x18), &var_b8, &var_a8, zmm6)
        zmm6_1.o = arg4
        
        if (rax_3 == 0)
            result = LeaveCriticalSection(&data_143ef96b0)
        else
            void* rbx_1 = *(arg1 + 0x18)
            int128_t zmm1_1 = *(rbx_1 + 0x460)
            var_58 = *(rbx_1 + 0x450)
            float var_38_2[0x4] = *(rbx_1 + 0x470)
            int128_t var_48_2 = zmm1_1
            int64_t zmm7_1 = sub_140ade170(&var_a8, &var_98)
            float zmm4_1[0x4] = var_b8
            float zmm3_2[0x4] = *(rbx_1 + 0x480)
            float zmm5_1[0x4] = var_98
            float temp0_5[0x4] = _mm_unpacklo_ps(var_b4_1, zmm7_1)
            float temp0_6[0x4] = _mm_unpacklo_ps(zmm4_1, var_b0_1)
            int64_t zmm0_2 = *(rbx_1 + 0x488)
            float temp0_7[0x4] = _mm_unpacklo_ps(temp0_6, temp0_5[0].q)
            float temp0_8[0x4] = _mm_unpacklo_ps(*(rbx_1 + 0x484), zmm7_1)
            float var_68_2[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3_2, zmm0_2), temp0_8[0].q)
            var_88 = zmm5_1
            float var_78_2[0x4] = temp0_7
            LeaveCriticalSection(&data_143ef96b0)
            result = sub_1417ec080(arg1 + 0x20, arg3[4], &var_58, &var_88)

return result
