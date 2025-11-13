// 函数: sub_1413ceb60
// 地址: 0x1413ceb60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
float zmm6[0x4]
float var_18[0x4] = zmm6

while (true)
    zmm6 = arg1[7]
    float rbx_1 = _mm_bsrli_si128(zmm6, 8)[0]
    void* rsi_1
    
    if (rbx_1 s>= 0)
        rsi_1 = zmm6[0].q
    
    int64_t var_58
    
    if (rbx_1 s>= 0 && rbx_1 s< *(rsi_1 + 0x310))
        void* rdx_1 = *(rsi_1 + 0x300)
        void* rax_5 = rsi_1
        
        if (rdx_1 != 0)
            rax_5 = rdx_1
        
        int64_t* rcx_2 = *(*(rax_5 + sx.q(rbx_1) * 0x30 + 0x20) + 0x20)
        int32_t var_98
        (*(*rcx_2 + 0x10))(rcx_2, &var_98)
        int32_t var_4c_1 = 0
        float zmm4_1[0x4] = var_58.o
        zmm4_1[0] = var_98[0]
        int32_t var_3c_1 = 0
        float temp0_2[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xe1)
        int32_t var_8c
        float var_48[0x4]
        var_48[0] = var_8c
        int32_t var_94
        temp0_2[0] = var_94[0]
        float temp0_3[0x4] = _mm_shuffle_ps(var_48, var_48, 0xe1)
        float zmm1[0x4] = arg1[1]
        temp0_3[0] = var_8c
        float temp0_4[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc6)
        float var_90
        temp0_4[0] = var_90
        float temp0_5[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc6)
        float temp0_6[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xc9)
        temp0_5[0] = var_8c
        var_58.o = temp0_6
        float temp0_7[0x4] = __subps_xmmps_memps(temp0_6, *arg1)
        float temp0_8[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xc9)
        var_48 = temp0_8
        result = zx.q(_mm_movemask_ps(_mm_cmpeq_ps(_mm_add_ps(zmm1, temp0_8), 
            __andps_xmmxud_memxud(temp0_7, data_143eca230), 1)))
        
        if (result.d == 0)
            arg1[7] = zmm6
            return result
        
        do
            float temp2_1 = rbx_1
            rbx_1 += 1
            zmm6[2] = rbx_1
            
            if (temp2_1 i+ 1 s< 0)
                goto label_1413ced5f
            
            if (rbx_1 s>= *(rsi_1 + 0x310))
                goto label_1413ced5f
            
            void* rdx_3 = *(rsi_1 + 0x300)
            void* rax_11 = rsi_1
            
            if (rdx_3 != 0)
                rax_11 = rdx_3
            
            int64_t* rcx_5 = *(*(rax_11 + sx.q(rbx_1) * 0x30 + 0x20) + 0x20)
            int32_t var_88
            (*(*rcx_5 + 0x10))(rcx_5, &var_88)
            int32_t var_4c_2 = 0
            float zmm4_2[0x4] = var_58.o
            zmm4_2[0] = var_88[0]
            int32_t var_3c_2 = 0
            float temp0_13[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xe1)
            int32_t var_7c
            var_48[0] = var_7c
            int32_t var_84
            temp0_13[0] = var_84[0]
            float temp0_14[0x4] = _mm_shuffle_ps(var_48, var_48, 0xe1)
            zmm1 = arg1[1]
            temp0_14[0] = var_7c
            float temp0_15[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xc6)
            float var_80
            temp0_15[0] = var_80
            float temp0_16[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0xc6)
            float temp0_17[0x4] = _mm_shuffle_ps(temp0_15, temp0_15, 0xc9)
            temp0_16[0] = var_7c
            var_58.o = temp0_17
            float temp0_18[0x4] = __subps_xmmps_memps(temp0_17, *arg1)
            float temp0_19[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0xc9)
            var_48 = temp0_19
            result = zx.q(_mm_movemask_ps(_mm_cmpeq_ps(_mm_add_ps(zmm1, temp0_19), 
                __andps_xmmxud_memxud(temp0_18, data_143eca230), 1)))
        while (result.d != 0)
        
        arg1[7] = zmm6
        return result
    
label_1413ced5f:
    int64_t rcx_6 = sx.q((*arg1)[0x1a])
    
    if (rcx_6.d == 0)
        var_58 = 0
        data_142d3f660[0]
        arg1[2] = var_58.o
        __builtin_memcpy(&arg1[3], 
            "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x"
        "00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
            0x20)
        float var_28[0x4]
        arg1[5] = var_28
    else
        int64_t r9_1 = arg1[6][0].q
        int32_t r10_1 = (rcx_6 - 1).d
        int64_t rax_15 = sx.q(r10_1) << 6
        arg1[2] = *(rax_15 + r9_1)
        arg1[3] = *(rax_15 + r9_1 + 0x10)
        arg1[4] = *(rax_15 + r9_1 + 0x20)
        arg1[5] = *(rax_15 + r9_1 + 0x30)
        float rdx_5 = (*arg1)[0x1a]
        int32_t rax_17 = rdx_5 i- r10_1
        
        if (rax_17 != 1)
            memmove((sx.q(r10_1) << 6) + r9_1, (rcx_6 << 6) + r9_1, (rax_17 - 1) << 6)
            rdx_5 = (*arg1)[0x1a]
        
        (*arg1)[0x1a] = rdx_5 - 1
        result, zmm6 = sub_141238da0(&arg1[6])
    
    if (arg1[2][0].q == 0)
        arg1[7] = zmm6
        return result
    
    sub_1413efe00(arg1)
    result = arg1[2][0].q
    int32_t var_60_1 = 0
    arg1[7] = result.o
