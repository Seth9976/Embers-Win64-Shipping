// 函数: sub_141f2dda0
// 地址: 0x141f2dda0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg2

if (arg2 == 0)
    arg1[1].d &= 0xfffffff8
else
    int32_t r8_5 = ((zx.d(*(arg2 + 0x14c)) u>> 2 ^ arg1[1].d) & 1) ^ arg1[1].d
    arg1[1].d = r8_5
    int32_t r8_6 = r8_5 ^ ((zx.d(*(arg2 + 0x14c)) u>> 2 ^ r8_5) & 2)
    arg1[1].d = r8_6
    int32_t rcx = 0
    int32_t r8_7 = r8_6 ^ ((zx.d(*(arg2 + 0x14c)) u>> 2 ^ r8_6) & 4)
    
    if ((r8_7.b & 7) != 7)
        rcx = 8
    
    arg1[1].d = rcx | (r8_7 & 0xfffffff7)
    *(arg2 + 0x14c) |= 4
    void* rax_11 = *arg1
    *(rax_11 + 0x14c) |= 8
    void* rax_12 = *arg1
    *(rax_12 + 0x14c) |= 0x10
    
    if ((arg1[1].b & 8) != 0)
        void* rcx_2 = *arg1
        
        if (*(rcx_2 + 0xc0) != 0)
            if ((*(arg2 + 0x14c) & 1) == 0)
                sub_1405c6ac0(arg2, 0, 0)
                rcx_2 = *arg1
            
            float zmm2[0x4] = *(rcx_2 + 0x1d0)
            float var_20 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)[0]
            *(rcx_2 + 0x11c) = (_mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55)[0].q)).q
            *(rcx_2 + 0x124) = var_20
            void* rcx_4 = *arg1
            float zmm1[0x4] = *(rcx_4 + 0x1c0)
            float (* rdi)[0x4] = rcx_4 + 0x180
            uint32_t temp0_4 = _mm_movemask_ps(_mm_cmpeq_ps(*rdi, zmm1, 4))
            float var_18[0x4] = zmm1
            
            if (temp0_4 != 0)
                *rdi = zmm1
                void var_28
                int32_t* rax_15 = sub_140adf5d0(&var_18, &var_28)
                rdi[1][0].q = *rax_15
                (*rdi)[6] = rax_15[2]
                rcx_4 = *arg1
            
            *(rcx_4 + 0x128) = rdi[1][0].q
            *(rcx_4 + 0x130) = (*rdi)[6]
            void* rcx_6 = *arg1
            zmm2 = *(rcx_6 + 0x1e0)
            float var_20_1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)[0]
            *(rcx_6 + 0x134) = (_mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55)[0].q)).q
            *(rcx_6 + 0x13c) = var_20_1

return arg1
