// 函数: sub_1411d74d0
// 地址: 0x1411d74d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if (data_1439b6158 s> 0 && arg2 != 0)
    void*** rax = sub_141193740(arg1, &arg3[0x34], u"External", 0)
    int64_t var_f8_1 = 1
    
    if ((rax[7].d & 0x100) != 0)
        var_f8_1.d = 4
        var_f8_1:4.d = 0x1c
    
    void*** rax_1 = sub_14081d830(0x28, *(arg1 + 8), 1, 0)
    void*** r15_1 = rax_1
    
    if (rax_1 == 0)
        r15_1 = nullptr
    else
        rax_1[1] = rax[1]
        rax_1[2] = 0
        *r15_1 = &data_142f285c0
        *(r15_1 + 0x18) = rax.o
    
    void*** rax_3
    int128_t zmm6_1
    rax_3, zmm6_1 = sub_1411e0390(arg1, sub_1410fccd0(arg1, &arg3[0x22], u"External", 0))
    void* rcx_3 = *(arg2 + 0x15a8)
    int32_t var_104_1
    
    if (rcx_3 == 0)
        var_104_1 = 0
    else
        var_104_1 = *(rcx_3 + 0x4c8) & 7
    
    int128_t var_98
    sub_1419a2ec0(*(arg2 + 0x5150), &var_98, &data_143e78fc0, 0)
    void* rdi_1 = arg4
    int128_t zmm7 = var_98
    void* var_88_1 = zmm7.q
    int64_t* rsi_1 = *(rdi_1 + 0x80)
    result = sx.q(*(rdi_1 + 0x88))
    void* r12_1 = &rsi_1[result * 5]
    
    if (rsi_1 != r12_1)
        void*** var_100_1
        var_100_1.d = 0x40
        int512_t zmm6_3
        
        do
            int32_t* rax_4 = sub_14081d830(0x100, *(arg1 + 8), 1, 0)
            int32_t* rbx_4 = rax_4
            
            if (rax_4 == 0)
                rbx_4 = nullptr
            else
                __builtin_memset(&rbx_4[0x10], 0, 0x28)
                __builtin_memset(&rbx_4[0x38], 0, 0x18)
            
            memset(rbx_4, 0, 0x100)
            int32_t rcx_7 = data_1439b616c
            int32_t rax_5
            
            if (rcx_7 s>= 1)
                rax_5 = 0x100
                
                if (rcx_7 s< 0x100)
                    rax_5 = rcx_7
            else
                rax_5 = 1
            
            rbx_4[0x1e] = rax_5
            *rbx_4 = *arg3
            rbx_4[1] = arg3[1]
            rbx_4[2] = arg3[2]
            rbx_4[3] = arg3[3]
            rbx_4[4] = arg3[4]
            rbx_4[5] = arg3[5]
            rbx_4[6] = arg3[6]
            rbx_4[7] = arg3[7]
            rbx_4[8] = arg3[8]
            rbx_4[9] = arg3[9]
            rbx_4[0xa] = arg3[0xa]
            rbx_4[0xb] = arg3[0xb]
            rbx_4[0xc] = arg3[0xc]
            rbx_4[0xd] = arg3[0xd]
            rbx_4[0xe] = arg3[0xe]
            rbx_4[0xf] = arg3[0xf]
            *(rbx_4 + 0x40) = *(arg3 + 0x40)
            *(rbx_4 + 0x48) = *(arg3 + 0x48)
            *(rbx_4 + 0x50) = *(arg3 + 0x50)
            *(rbx_4 + 0x58) = *(arg3 + 0x58)
            *(rbx_4 + 0x60) = *(arg3 + 0x60)
            rbx_4[0x1c] = *(rdi_1 + 0xcc)
            *(rbx_4 + 0xf0) = rax_3
            rbx_4[0x1f] = var_104_1
            *(rbx_4 + 0xe8) = r15_1
            rbx_4[0x1d] = 0x40
            void* rcx_8 = *rsi_1
            void* rax_30 = *(rcx_8 + 0x68)
            
            if (rax_30 != 0)
                rcx_8 = rax_30
            
            void* rdx_6 = *(rcx_8 + 0x28)
            *(rbx_4 + 0xe0) = *(rdx_6 + 0x10)
            *(rbx_4 + 0x90) = *(rdx_6 + 0x18)
            rbx_4[0x26] = *(rdx_6 + 0x20)
            uint64_t rcx_9 = zx.q(*(rdx_6 + 0x24))
            rbx_4[0x27] = rcx_9.d
            rbx_4[0x21] = *(rdx_6 + 0x28)
            rbx_4[0x22] = *(rdx_6 + 0x2c)
            rbx_4[0x20] = *(rdx_6 + 0x30)
            uint128_t zmm1_1 = *(rdx_6 + 0x40)
            float temp0_1[0x4] = _mm_add_ps(zmm1_1, zmm1_1)
            uint128_t zmm0_2 = _mm_shuffle_ps(zmm1_1, zmm1_1, 4)
            float temp0_4[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_1, temp0_1, 0x29), zmm0_2)
            float temp0_5[0x4] = _mm_mul_ps(temp0_1, zmm1_1)
            float temp0_8[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_1, temp0_1, 0x12), 
                _mm_shuffle_ps(zmm1_1, zmm1_1, 0xff))
            zmm1_1 = *(rdx_6 + 0x60)
            zmm0_2 = _mm_shuffle_ps(temp0_5, temp0_5, 0x1a)
            uint128_t zmm5_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xc9)
            zmm0_2 = _mm_add_ps(zmm0_2, _mm_shuffle_ps(temp0_5, temp0_5, 1))
            float zmm4_1[0x4] = data_143e782c0
            float temp0_13[0x4] = _mm_add_ps(temp0_8, temp0_4)
            float temp0_14[0x4] = _mm_sub_ps(temp0_4, temp0_8)
            float temp0_15[0x4] = _mm_mul_ps(temp0_13, zmm1_1)
            zmm5_1 = _mm_mul_ps(zmm5_1, temp0_14)
            float zmm2[0x4] = __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm4_1, zmm0_2), zmm1_1), 
                data_143e782d0)
            zmm0_2 = _mm_shuffle_ps(zmm5_1, zmm2, 0x32)
            zmm1_1 = _mm_shuffle_ps(zmm5_1, zmm2, 0x10)
            float temp0_23[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_15, zmm2, 0), zmm0_2, 0x82)
            zmm1_1 = _mm_shuffle_ps(zmm1_1, _mm_shuffle_ps(temp0_15, zmm2, 0x31), 0x88)
            zmm0_2 = *(rdx_6 + 0x50)
            *(rbx_4 + 0xa0) = temp0_23
            *(rbx_4 + 0xb0) = zmm1_1
            zmm4_1[0].q = zmm0_2 u>> 0x40
            zmm0_2 = _mm_shuffle_ps(zmm0_2, zmm4_1, 0xc4)
            zmm1_1.d = float.s(rcx_9)
            zmm1_1.d = zmm1_1.d f* 0.00048828125f
            *(rbx_4 + 0xc0) = _mm_shuffle_ps(_mm_shuffle_ps(temp0_15, zmm5_1, 0x12), zmm2, 0xe8)
            *(rbx_4 + 0xd0) = zmm0_2
            zmm1_1.d = zmm1_1.d f+ zmm1_1.d
            zmm0_2.d = -0.5f f- zmm1_1.d
            var_100_1:4.d = neg.d(int.d(zmm0_2.d) s>> 1)
            sub_1411e50c0(rcx_9.b)
            int128_t var_e8 = zx.o(0)
            sub_141998c50(var_88_1, &data_143e7e920, rbx_4)
            int32_t var_a8_1 = 1
            void*** var_b0_1 = var_100_1
            void*** rax_39
            char rcx_11
            rax_39, rcx_11 = sub_14081d830(0x60, *(arg1 + 8), 1, 0)
            void*** rdi_2 = rax_39
            
            if (rax_39 == 0)
                rdi_2 = nullptr
            else
                sub_1411e50c0(rcx_11)
                void* var_d0_1 = &data_143e7e950
                var_e8 = rbx_4.o
                void var_108
                sub_141992bd0(rdi_2, &var_108, &var_e8, 2)
                *rdi_2 = &data_142f38b58
                *(rdi_2 + 0x38) = rbx_4.o
                *(rdi_2 + 0x48) = zmm7
                rdi_2[0xb] = var_a8_1.q
            
            result, zmm6_3 = sub_1419968d0(arg1, rdi_2)
            rdi_1 = arg4
            rsi_1 = &rsi_1[5]
        while (rsi_1 != r12_1)
        
        zmm6_3.o = zmm6_1

return result
