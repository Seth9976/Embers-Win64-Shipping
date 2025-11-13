// 函数: sub_140badd80
// 地址: 0x140badd80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
*(arg1 + 0xd8) = *(arg1 + 0x58)
*(arg1 + 0xe0) = u"loading imports"
void var_108
sub_140cad130(&var_108)
int32_t rsi = 0

if (*(arg1 + 0x9c) s< *(*(arg1 + 0x50) + 0x10))
    uint128_t zmm8 = 0x4170000000000000
    uint128_t zmm6
    uint128_t var_38_1 = zmm6
    int128_t zmm7
    int128_t var_48_1 = zmm7
    
    do
        void* rcx_1 = *(arg1 + 0x1d8)
        bool z_1
        
        if (0 == *(rcx_1 + 0x84))
            *(rcx_1 + 0x84) = 0
            z_1 = true
        else
            *(rcx_1 + 0x84)
            z_1 = false
        
        bool rax_4
        
        if (not(z_1))
            rax_4 = true
        else
            zmm7 = *(arg1 + 0xc4)
            zmm6 = zx.o(*(arg1 + 0xd0))
            
            if (*(arg1 + 0xc8) != 0)
                int64_t performanceCount
                QueryPerformanceCounter(&performanceCount)
                double zmm1 = float.d(performanceCount)
                double zmm0 = _mm_cvtps_pd(zmm7.q)
                zmm1 = zmm1 f* data_143d796f8 f+ zmm8.q
                double zmm2 = zmm1 f- zmm6.q
                rax_4 = zmm2 > zmm0
                
                if (rax_4 != 0 && data_143e1a324 != 0 && not(data_1439a9888 f== zmm6.q)
                        && not(zmm2 <= _mm_cvtps_pd(data_1439a9644)))
                    zmm0.d = data_1439a9640.d f* zmm7.d
                    
                    if (not(zmm2 <= _mm_cvtps_pd(zmm0)))
                        data_1439a9888 = zmm6.q
                
                data_1439a9890 = zmm1
            
            if (*(arg1 + 0xc8) != 0 && rax_4 != 0)
                rax_4 = true
            else
                void* rcx_3 = data_143e1adf0
                bool z_2
                
                if (0 == *(rcx_3 + 8))
                    *(rcx_3 + 8) = 0
                    z_2 = true
                else
                    *(rcx_3 + 8)
                    z_2 = false
                
                rcx_3.b = not(z_2)
                
                rax_4 = rcx_3.b != 0 ? true : false
        
        if (rax_4 != 0)
            break
        
        int64_t rcx_4 = sx.q(*(arg1 + 0x9c))
        *(arg1 + 0x9c) = (rcx_4 + 1).d
        int64_t rdx_1 = *(*(arg1 + 0x50) + 8)
        void* rbx_2 = rcx_4 * 0x38 + rdx_1
        
        for (int32_t i = *(rbx_2 + 8); i s< 0; i = *(rbx_2 + 8))
            rbx_2 = sx.q(not.d(i)) * 0x38 + rdx_1
        
        int32_t rcx_5
        rcx_5.b = sub_140b5b8a0(*(rbx_2 + 0x14), 0xcf) == 0
        
        if ((*(rbx_2 + 0x18) != 0 | rcx_5.b) == 0 && *rbx_2 != 0)
            *rbx_2
            
            if (sub_140cc1810() == 0)
                uint64_t i_1 = *rbx_2
                void* rax_12
                int64_t r9_1
                rax_12, r9_1 = sub_140cddea0()
                r9_1.b = 1
                int32_t var_118_1 = 0
                void* rax_13 = sub_140d2f0c0(rax_12, 0, i_1, r9_1, 0, 0)
                void* rax_14
                void* rcx_8
                int64_t rdx_2
                
                if (rax_13 != 0)
                    rax_14 = sub_140cddea0()
                    rcx_8 = *(rax_13 + 0x10)
                    rdx_2 = sx.q(*(rax_14 + 0x38))
                
                int64_t rcx_26
                
                if (rax_13 == 0 || rdx_2.d s> *(rcx_8 + 0x38)
                        || *(*(rcx_8 + 0x30) + (rdx_2 << 3)) != rax_14 + 0x30)
                    int64_t rax_26 = sx.q(*(arg1 + 0x78))
                    int32_t r9_3 = 0
                    int64_t r8_6 = 0
                    
                    if (rax_26.d s> 0)
                        void** rdx_10 = *(arg1 + 0x70)
                        
                        while (*(*rdx_10 + 0x14) != i_1)
                            r9_3 += 1
                            r8_6 += 1
                            rdx_10 = &rdx_10[1]
                            
                            if (r8_6 s>= rax_26)
                                goto label_140bae1dd
                    
                    if (rax_26.d s<= 0 || r9_3 == 0xffffffff)
                    label_140bae1dd:
                        int64_t var_e8
                        sub_140b63b70(rbx_2, &var_e8)
                        void var_d8
                        uint128_t zmm0_1 = *sub_140a1dfc0(&var_e8, &var_d8)
                        int16_t* i_2 = zmm0_1.q
                        uint128_t var_c8_1 = zmm0_1
                        
                        for (void* rax_30 = &i_2[sx.q(_mm_bsrli_si128(zmm0_1, 8).d)]; 
                                i_2 != rax_30; i_2 = &i_2[1])
                            if (*i_2 == 0x2f)
                                zmm8 = sub_140b9a630(arg1, &i_1, arg2)
                                break
                        
                        rcx_26 = var_e8
                    label_140bae238:
                        
                        if (rcx_26 != 0)
                            sub_140a74f90(rcx_26)
                else if ((*(rax_13 + 0x28) & 2) == 0 && sub_140bc9540(rax_13) == 0)
                    void* r14_2 = *(arg1 + 0x1d8)
                    uint64_t i_3 = i_1
                    
                    if (*(r14_2 + 0x1c0) != *(r14_2 + 0x1ec))
                        int32_t rax_19 = sub_140b5ead0(i_3.d) + i_3:4.d
                        void* r8_2 = r14_2 + 0x1f0
                        void* rcx_12 = *(r8_2 + 8)
                        
                        if (rcx_12 != 0)
                            r8_2 = rcx_12
                        
                        int32_t rax_21 =
                            *(r8_2 + (((sx.q(*(r14_2 + 0x200)) - 1) & sx.q(rax_19)) << 2))
                        
                        if (rax_21 != 0xffffffff)
                            int64_t r8_3 = *(r14_2 + 0x1b8)
                            int64_t rcx_13
                            
                            while (true)
                                rcx_13 = sx.q(rax_21)
                                int64_t rdx_6 = rcx_13 * 3
                                
                                if (*(r8_3 + (rdx_6 << 3)) == i_3)
                                    break
                                
                                rax_21 = *(r8_3 + (rdx_6 << 3) + 0x10)
                                
                                if (rax_21 == 0xffffffff)
                                    goto label_140bae245
                            
                            if (rax_21 != 0xffffffff)
                                void* rbx_4 = r8_3 + rcx_13 * 0x18
                                
                                if (rbx_4 != 0)
                                    void* rbx_5 = *(rbx_4 + 8)
                                    
                                    if (rbx_5 != 0)
                                        void* rax_23 = *(rbx_5 + 0x50)
                                        
                                        if (rax_23 != 0 && *(rax_23 + 0x329) != 0)
                                            *(rbx_5 + 0x98) += 1
                                            int64_t r15_1 = sx.q(*(arg1 + 0x88))
                                            int32_t rax_24 = (r15_1 + 1).d
                                            *(arg1 + 0x88) = rax_24
                                            
                                            if (rax_24 s> *(arg1 + 0x8c))
                                                sub_1405a4d70(arg1 + 0x80)
                                            
                                            *(*(arg1 + 0x80) + (r15_1 << 3)) = rbx_5
                                            int64_t var_b8
                                            __builtin_memset(&var_b8, 0, 0x2c)
                                            int32_t var_8c_1 = 0x80
                                            int32_t var_88_1 = 0xffffffff
                                            int32_t var_84_1 = 0
                                            int64_t var_78_1 = 0
                                            int32_t var_70_1 = 0
                                            zmm8 = sub_140b9a490(arg1, rbx_5, &var_b8, arg2)
                                            int32_t var_70_2 = 0
                                            
                                            if (var_78_1 != 0)
                                                sub_140a74f90(var_78_1)
                                            
                                            int64_t var_b0_1
                                            var_b0_1.d = 0
                                            int32_t var_88_2 = 0xffffffff
                                            int32_t var_84_2 = 0
                                            int64_t var_a8
                                            sub_14059a8e0(&var_a8, 0)
                                            int64_t var_98
                                            
                                            if (var_98 != 0)
                                                sub_140a74f90(var_98)
                                            
                                            rcx_26 = var_b8
                                            goto label_140bae238
                                        
                                        zmm8 = sub_140b9b6e0(arg1, rbx_5, arg2)
            label_140bae245:
                sub_140bbd840(arg1)
    while (*(arg1 + 0x9c) s< *(*(arg1 + 0x50) + 0x10))

if (*(arg1 + 0x78) != 0)
    if (*(arg1 + 0xc8) != 0 && *(arg1 + 0xc9) == 0)
        *(arg1 + 0xca) = 1
    
    rsi = 1
else if (*(arg1 + 0x9c) == *(*(arg1 + 0x50) + 0x10))
    rsi = 2

sub_140cad790()
__security_check_cookie(rax_1 ^ &var_148)
return zx.q(rsi)
