// 函数: sub_1421b6e60
// 地址: 0x1421b6e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_1422e48a0(arg4)

if (data_143a2ecfc != 0 && data_1439c7a6a != 0 && data_1439c7a18 != 0 && data_1439c88a8 != 0
        && data_1439c7a17 != 0 && data_1439c7a0c != 0)
    result = *(arg1 + 0x40)
    
    if (*(result + 0x200) != 0xffffffff && *(result + 0x1f0) s> 0)
        int128_t zmm1 = *(arg1 + 0x130)
        int128_t var_78 = *(arg1 + 0x120)
        int128_t var_68_1 = zmm1
        int128_t var_58_1 = *(arg1 + 0x140)
        int128_t var_48_1 = *(arg1 + 0x150)
        int128_t var_38_1 = *(arg1 + 0x160)
        int32_t var_d8
        int32_t var_d0
        sub_1421f22f0(arg2, arg3, &var_d8, &var_d0)
        bool cond:0_1 = *(arg1 + 0x174) != 0
        float zmm3_1[0x4] = var_d8
        int32_t zmm1_1 = var_d0
        float temp0_1[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xe1)
        int32_t var_d4
        temp0_1[0] = var_d4
        float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
        temp0_2[0] = zmm1_1
        float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x27)
        int32_t var_cc
        temp0_3[0] = var_cc
        float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x39)
        void* var_b8_1 = temp0_4[0].q
        float var_38_2[0x4] = temp0_4
        
        if (not(cond:0_1))
            sub_142208cb0(arg2)
        
        char rdi_1 = *(arg1 + 0x28)
        char var_f8_1
        
        if (data_143a2ecd8 == 0)
            var_f8_1 = 0
        else
            int64_t rbx_1 = sx.q((*U"1111")[sx.q(sub_1422e48a0(arg4))])
            int32_t var_a8_1 = rbx_1.d
            
            if (sub_1405fba70(rbx_1.d, 3) != 0)
            label_1421b7034:
                var_f8_1 = 1
                
                if (rdi_1 == 0)
                    var_f8_1 = 0
            else if (rbx_1.d u> 0x30)
            label_1421b700d:
                
                if (*(rbx_1 * 0x14 + 0x143f025f8) == 1 && (rbx_1 - 0x19).d u> 1
                        && *(rbx_1 * 0x14 + &data_143f025f0) != data_143f025d0)
                    goto label_1421b7034
                
                var_f8_1 = 0
            else
                switch (rbx_1)
                    case 0, 2, 4, 6, 0xc, 0xd, 0x10, 0x12, 0x14, 0x19, 0x1b, 0x1c, 0x1f, 0x30
                        var_f8_1 = 0
                    case 1, 3, 5, 7, 8, 9, 0xa, 0x13, 0x17, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 
                            0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f
                        goto label_1421b700d
                    case 0xb, 0xe, 0xf, 0x11, 0x15, 0x16, 0x18, 0x1a, 0x1d, 0x1e
                        if ((rbx_1 - 0x19).d u> 1
                                && *(rbx_1 * 0x14 + &data_143f025f0) != data_143f025d0)
                            goto label_1421b7034
                        
                        var_f8_1 = 0
        
        char var_f7 = 0
        char* var_90_1 = &var_f7
        void*** (* var_98)() = j_sub_140597fc0
        void*** rax_6 = sub_14081d830(0x18, sub_140a756e0(&var_98, &data_143958018) + 0x10, 1, 0)
        int32_t r14_1 = 0
        void*** rdi_2 = rax_6
        
        if (rax_6 == 0)
            rdi_2 = nullptr
        else
            rax_6[1] = 0
            *rdi_2 = &data_1432eeae8
            rdi_2[2] = 0
        
        int64_t rsi_1 = sx.q(arg6[0x18].d)
        int32_t rax_7 = (rsi_1 + 1).d
        arg6[0x18].d = rax_7
        
        if (rax_7 s> *(arg6 + 0xc4))
            sub_14083a310(&arg6[0x17], rsi_1.d)
        
        *(arg6[0x17] + (rsi_1 << 3)) = rdi_2
        void* rsi_2 = arg7
        rdi_2[1] = rsi_2
        int64_t* rcx_12 = data_143f0f180
        void* var_c8
        (*(*rcx_12 + 0xf8))(rcx_12, &var_c8, &var_78, &data_143f4e0a0, 1, 1, var_f8_1)
        void* rax_10 = var_c8
        void* var_c0 = rax_10
        
        if (rax_10 != 0)
            *(rax_10 + 8) += 1
        
        sub_1405d1550(&var_c8)
        sub_1405d1600(&rdi_2[2], &var_c0)
        sub_1405d1550(&var_c0)
        void*** r12_1 = nullptr
        
        if (var_f8_1 != 0 && *(arg1 + 0x170) == 2)
            void* var_f0 = nullptr
            int64_t var_e8_1 = -1
            int32_t var_e0_1 = 0xffffffff
            
            if (rdi_1 != 0)
                void* rsi_3 = *(arg1 + 0x30)
                void* rcx_16 = *(rsi_3 + 0x90)
                
                if (rcx_16 != 0)
                    void* rdi_3 = *(arg1 + 0x40)
                    
                    if (sub_14204c660(rcx_16, &var_f0, *(rdi_3 + 0x1f0), 0x69) != 0)
                        int32_t r12_2 = *(rdi_3 + 0x1f0)
                        int64_t rsi_4 = sx.q(*(rsi_3 + 0xa0))
                        int32_t rax_13 = (rsi_4 + 1).d
                        *(rsi_3 + 0xa0) = rax_13
                        
                        if (rax_13 s> *(rsi_3 + 0xa4))
                            sub_1405c4f50(rsi_3 + 0x98)
                        
                        int64_t* r8_5 = rsi_4 * 0x30 + *(rsi_3 + 0x98)
                        *r8_5 = *(rdi_3 + 0x1e8)
                        r8_5[1] = *(arg3 + 0x60c)
                        r8_5[2].d = *(arg3 + 0x614)
                        *(r8_5 + 0x14) = r12_2
                        void* rax_18 = var_f0
                        r8_5[3] = rax_18
                        
                        if (rax_18 != 0)
                            *(rax_18 + 8) += 1
                        
                        r8_5[4].d = var_e8_1.d
                        *(r8_5 + 0x24) = var_e8_1:4.d
                        r8_5[5].d = var_e0_1
                        char var_f5
                        char* var_80_1 = &var_f5
                        void*** (* var_88)() = j_sub_140597fc0
                        var_f5 = 0
                        void*** rax_23 = sub_14081d830(0x18, 
                            sub_140a756e0(&var_88, &data_143958018) + 0x10, 1, 0)
                        r12_1 = rax_23
                        
                        if (rax_23 == 0)
                            r12_1 = nullptr
                        else
                            *(rax_23 + 0xc) = 0
                            *r12_1 = &data_1432ee920
                            r12_1[1].d = 0
                            r12_1[2] = 0
                        
                        int64_t rdi_5 = sx.q(arg6[0x18].d)
                        int32_t rax_24 = (rdi_5 + 1).d
                        arg6[0x18].d = rax_24
                        
                        if (rax_24 s> *(arg6 + 0xc4))
                            sub_14083a310(&arg6[0x17], rdi_5.d)
                        
                        *(arg6[0x17] + (rdi_5 << 3)) = r12_1
                        r12_1[1].d = var_e8_1.d
                        sub_1405d16e0(&r12_1[2], var_f0)
                
                rsi_2 = arg7
            
            sub_1405ec8a0(&var_f0)
        
        *(rsi_2 + 0x160) = *(*(arg1 + 0x40) + 0x1e8)
        int32_t rsi_5 = *(*(arg1 + 0x40) + 0x1f0)
        void* rdi_6 = *(*(arg1 + 0x30) + 0x80)
        int64_t rcx_23 = sx.q(*(rdi_6 + 0xb0))
        int64_t rax_32 = rcx_23 ^ 1
        
        if (*(data_143f4dd68 + 4) f<= (zx.o(0)).d)
            rax_32 = rcx_23
        
        int64_t rbx_4 = rax_32 * 0x38
        *(arg7 + 0x150) = *(*(arg1 + 0x38) + 0x10)
        sub_1405d16e0(arg7 + 0x158, rdi_2[2])
        *(arg7 + 0x168) = *(rbx_4 + rdi_6 + 0x18)
        *(arg7 + 0x170) = *(rbx_4 + rdi_6 + 0x28)
        *(arg7 + 0x178) = *(rdi_6 + 0x88)
        int32_t rax_38 = sub_14081f8e0(arg6, 1)
        int64_t* r8_10 = zx.q(rax_38 s% 0x66) * 0xa0 + *(*arg6 + (sx.q(rax_38 s/ 0x66) << 3))
        int64_t* r9_1 = r8_10
        int64_t* rcx_32 = r8_10[0xd]
        
        if (rcx_32 != 0)
            r9_1 = rcx_32
        
        r9_1[2] = &data_143a2efe0
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rsi_5)
        r9_1[4] = r12_1
        r9_1[9].d = (temp3_1 + (temp2_1 & 0xf)) s>> 4
        *(r9_1 + 0x44) = 0x20
        r9_1[8].d = 0
        r8_10[0xf] = arg7
        r8_10[0x11] = 0
        int64_t rax_44
        
        if (*(arg1 + 0x174) == 0)
            rax_44 = *(arg2 + 0x360)
        else
            rax_44 = *(arg2 + 0x140)
        
        *r9_1 = rax_44
        r9_1[0xa].d = 0
        *(r9_1 + 0x54) = 3
        int32_t rax_48 = ((zx.d(*(arg2 + 0x35)) ^ *(r8_10 + 0x9c)) & 1) ^ *(r8_10 + 0x9c)
        *(r8_10 + 0x9c) = rax_48
        int32_t rdx_23 = ((zx.d(*(arg2 + 0x168)) << 2 ^ rax_48) & 4) ^ rax_48
        *(r8_10 + 0x9c) = rdx_23
        uint8_t r10_1 = *(arg2 + 0x36)
        
        if ((r10_1 & 4) == 0)
        label_1421b74c2:
            r10_1 u>>= 4
        else
            int64_t* rbx_5 = *(arg2 + 0x70)
            int64_t* rcx_33 = rbx_5
            void* r9_2 = &rbx_5[sx.q(*(arg2 + 0x78))]
            
            if (rbx_5 == r9_2)
            label_1421b74c2_1:
                r10_1 u>>= 4
            else
                while (*rcx_33 != *(arg3 + 0x240))
                    rcx_33 = &rcx_33[1]
                    
                    if (rcx_33 == r9_2)
                        goto label_1421b74c2_2
                
                if (((rcx_33 - rbx_5) s>> 3).d == 0xffffffff)
                label_1421b74c2_2:
                    r10_1 u>>= 4
                else
                    r10_1 = *(arg2 + 0x37)
        
        int32_t rcx_38 = ((zx.d(r10_1) << 0xd ^ rdx_23) & 0xe000) ^ rdx_23
        *(r8_10 + 0x9c) = rcx_38
        int64_t rax_50 = *(arg1 + 0x20)
        int32_t rcx_40 = (rcx_38 & 0xffffe07f) | 0x10000
        *(r8_10 + 0x9c) = rcx_40
        r8_10[0x10] = rax_50
        
        if (*(arg2 + 0x35) s< 0 || (*(arg2 + 0x36) & 1) != 0)
            r14_1 = 0x20000
        
        *(r8_10 + 0x9c) = (rcx_40 & 0xfffdffff) | r14_1
        return sub_1422dd2a0(arg6, arg5, r8_10)

return result
