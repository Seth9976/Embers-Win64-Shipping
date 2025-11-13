// 函数: sub_142604ad0
// 地址: 0x142604ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int64_t result

if (arg2 == 0)
    result = 0x80000008
else
    void* rbx_1 = *arg1
    char rdi_1 = (*(rbx_1 + 0xa0)).b
    char r15_1 = (*(rbx_1 + 0x9c)).b
    int32_t r10_3 = (arg2 u>> rdi_1).d & ((1 << r15_1).d - 1)
    int32_t r8_2 = ((1 << rdi_1).d - 1) & arg2.d
    
    if (r10_3 u>= *(rbx_1 + 0x30))
        result = 0x80000008
    else
        int64_t rsi_1 = *(rbx_1 + 0x90)
        int32_t* r11_1 = zx.q(r10_3) * 0xb0
        
        if (*(r11_1 + rsi_1) != ((arg2 u>> (r15_1 + rdi_1)).d & ((1 << (*(rbx_1 + 0x98)).b).d - 1)))
            result = 0x80000008
        else
            void* rax_5 = *(r11_1 + rsi_1 + 8)
            
            if (rax_5 == 0 || r8_2 u>= *(rax_5 + 0x18))
                result = 0x80000008
            else
                int32_t rbx_2 = 0
                int32_t rdi_2 = 0
                void* r10_6 = (zx.q(r8_2) << 5) + *(r11_1 + rsi_1 + 0x10)
                int64_t r15_2 = 0
                uint64_t r8_3 = zx.q(*(r10_6 + 0x1e))
                int32_t var_d0[0x12]
                
                if (r8_3 u>= 4)
                    int64_t r9_2 = *(r11_1 + rsi_1 + 0x18)
                    int32_t (* rdx_2)[0x12] = &var_d0
                    void* rbp_1 = r10_6 + 6
                    int64_t i_4 = ((r8_3 - 4) u>> 2) + 1
                    rdi_2 = (i_4 << 2).d
                    r15_2 = i_4 << 2
                    int64_t i
                    
                    do
                        uint64_t rax_6 = zx.q(*(rbp_1 - 2))
                        rdx_2 = &(*rdx_2)[0xc]
                        rbp_1 += 8
                        uint64_t rcx_5 = rax_6 * 3
                        (*rdx_2)[-0xe] = *(r9_2 + (rcx_5 << 2))
                        (*rdx_2)[-0xd] = *(r9_2 + (rcx_5 << 2) + 4)
                        (*rdx_2)[-0xc] = *(r9_2 + (rcx_5 << 2) + 8)
                        uint64_t rcx_6 = zx.q(*(rbp_1 - 8)) * 3
                        (*rdx_2)[-0xb] = *(r9_2 + (rcx_6 << 2))
                        (*rdx_2)[-0xa] = *(r9_2 + (rcx_6 << 2) + 4)
                        (*rdx_2)[-9] = *(r9_2 + (rcx_6 << 2) + 8)
                        uint64_t rcx_7 = zx.q(*(rbp_1 - 6)) * 3
                        (*rdx_2)[-8] = *(r9_2 + (rcx_7 << 2))
                        (*rdx_2)[-7] = *(r9_2 + (rcx_7 << 2) + 4)
                        (*rdx_2)[-6] = *(r9_2 + (rcx_7 << 2) + 8)
                        uint64_t rcx_8 = zx.q(*(rbp_1 - 4)) * 3
                        (*rdx_2)[-5] = *(r9_2 + (rcx_8 << 2))
                        rdx_2[0][0] = *(r9_2 + (rcx_8 << 2) + 4)
                        (*rdx_2)[-3] = *(r9_2 + (rcx_8 << 2) + 8)
                        i = i_4
                        i_4 -= 1
                    while (i != 1)
                
                if (r15_2 s< r8_3)
                    int64_t r9_3 = *(r11_1 + rsi_1 + 0x18)
                    int64_t rax_22 = sx.q(rdi_2)
                    void* r10_8 = r10_6 + (r15_2 << 1) + 4
                    int64_t i_3 = r8_3 - r15_2
                    rdi_2 += i_3.d
                    void* rdx_3 = &var_d0[rax_22 * 3]
                    int64_t i_1
                    
                    do
                        uint64_t rax_23 = zx.q(*r10_8)
                        rdx_3 += 0xc
                        r10_8 += 2
                        uint64_t rcx_10 = rax_23 * 3
                        *(rdx_3 - 0x14) = *(r9_3 + (rcx_10 << 2))
                        *(rdx_3 - 0x10) = *(r9_3 + (rcx_10 << 2) + 4)
                        *(rdx_3 - 0xc) = *(r9_3 + (rcx_10 << 2) + 8)
                        i_1 = i_3
                        i_3 -= 1
                    while (i_1 != 1)
                
                void var_f8
                void var_d8
                int32_t var_88[0x6]
                char rax_27
                int128_t zmm6_1
                int128_t zmm7_1
                int128_t zmm8_1
                rax_27, zmm6_1, zmm7_1, zmm8_1 =
                    sub_142608ee0(arg3, &var_d8, rdi_2, &var_f8, &var_88)
                
                if (rax_27 == 0)
                    int64_t r8_5 = sx.q(rdi_2)
                    uint64_t r9_5 = 0xffffffff
                    int128_t var_58_1 = zmm7_1
                    int64_t i_2 = 0
                    zmm7_1 = 0x7f7fffff
                    int128_t zmm0_1
                    float zmm1_1
                    float zmm2_1
                    int128_t zmm3_1
                    
                    if (r8_5 s>= 4)
                        int128_t var_48_1 = zmm6_1
                        int128_t var_68_1 = zmm8_1
                        
                        do
                            zmm3_1 = *(&var_f8 + (i_2 << 2))
                            int32_t rax_30 = rbx_2 + 1
                            void var_f4
                            zmm2_1 = *(&var_f4 + (i_2 << 2))
                            int32_t rcx_12 = rbx_2
                            void var_f0
                            zmm1_1 = *(&var_f0 + (i_2 << 2))
                            int32_t var_ec[0x5]
                            zmm0_1 = var_ec[i_2]
                            zmm6_1 = _mm_min_ss(zmm3_1.d, zmm7_1.d)
                            float zmm5_1 = _mm_min_ss(zmm2_1, zmm6_1.d)
                            
                            if (zmm7_1.d f<= zmm3_1.d)
                                rcx_12 = r9_5.d
                            
                            r9_5 = zx.q(rbx_2 + 3)
                            float zmm4_1 = _mm_min_ss(zmm1_1, zmm5_1)
                            
                            if (zmm6_1.d f<= zmm2_1)
                                rax_30 = rcx_12
                            
                            int32_t rcx_13 = rbx_2 + 2
                            zmm8_1 = _mm_min_ss(zmm0_1.d, zmm4_1)
                            
                            if (zmm5_1 <= zmm1_1)
                                rcx_13 = rax_30
                            
                            zmm7_1 = zmm8_1
                            
                            if (zmm4_1 f<= zmm0_1.d)
                                r9_5 = zx.q(rcx_13)
                            
                            rbx_2 += 4
                            i_2 += 4
                        while (i_2 s< r8_5 - 3)
                    
                    while (i_2 s< r8_5)
                        zmm0_1 = *(&var_f8 + (i_2 << 2))
                        int32_t rax_31 = rbx_2
                        bool cond:0_1 = zmm7_1.d f<= zmm0_1.d
                        zmm0_1 = _mm_min_ss(zmm0_1.d, zmm7_1.d)
                        
                        if (cond:0_1)
                            rax_31 = r9_5.d
                        
                        rbx_2 += 1
                        i_2 += 1
                        r9_5 = zx.q(rax_31)
                        zmm7_1 = zmm0_1
                    
                    int64_t r8_6 = sx.q((r9_5 * 3).d)
                    zmm0_1 = *(&var_d8 + (r8_6 << 2))
                    void var_d4
                    zmm2_1 = *(&var_d4 + (r8_6 << 2))
                    int64_t rcx_14 = sx.q(mods.dp.d(sx.q((r9_5 + 1).d), rdi_2) * 3)
                    zmm3_1 = var_88[sx.q(r9_5.d)]
                    result = 0x40000000
                    zmm1_1 = (*(&var_d8 + (rcx_14 << 2)) f- zmm0_1.d) f* zmm3_1.d f+ zmm0_1.d
                    zmm0_1.d = (*(&var_d4 + (rcx_14 << 2))).d f- zmm2_1
                    *arg4 = zmm1_1
                    zmm1_1 = var_d0[r8_6]
                    zmm0_1.d = zmm0_1.d f* zmm3_1.d
                    zmm0_1.d = zmm0_1.d f+ zmm2_1
                    arg4[1] = zmm0_1.d
                    zmm0_1.d = var_d0[rcx_14].d f- zmm1_1
                    zmm0_1.d = zmm0_1.d f* zmm3_1.d
                    zmm0_1.d = zmm0_1.d f+ zmm1_1
                    arg4[2] = zmm0_1.d
                else
                    *arg4 = *arg3
                    arg4[1] = arg3[1]
                    result = 0x40000000
                    arg4[2] = arg3[2].d

__security_check_cookie(rax_1 ^ &var_128)
return result
