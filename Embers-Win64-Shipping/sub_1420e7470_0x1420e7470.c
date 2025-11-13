// 函数: sub_1420e7470
// 地址: 0x1420e7470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* result = sub_1423de4b0(data_143f5b298, arg1)
char* result_1 = result

if (result != 0 && *result == 3)
    char** i = *(result + 0x220)
    void* rdi_3 = &i[sx.q(*(result + 0x228)) * 2]
    void* arg_20 = rdi_3
    
    for (; i != rdi_3; i = &i[2])
        result = *i
        
        if (result != 0)
            void* r15_1 = *(result + 0x150)
            
            if (r15_1 != 0)
                int32_t r10_1 = *(r15_1 + 0x28)
                int32_t rcx_1 = 0
                int32_t var_c4_1 = 1
                int32_t r8_1 = 0
                int32_t var_c8_1 = 0
                void* var_c0_1 = r15_1 + 0x10
                int32_t var_b8_1 = 0xffffffff
                int64_t var_b4_1 = 0
                
                if (r10_1 != 0)
                    void* rax = *(r15_1 + 0x20)
                    void* r9_1 = r15_1 + 0x10
                    
                    if (rax != 0)
                        r9_1 = rax
                    
                    int32_t temp0_1
                    int32_t temp1_1
                    temp0_1:temp1_1 = sx.q(r10_1 - 1)
                    int32_t rdx_3 = *r9_1
                    
                    if (rdx_3 != 0)
                    label_1420e7588:
                        int32_t rax_7 = neg.d(rdx_3) & rdx_3
                        uint64_t rflags_1
                        int32_t temp0_2
                        temp0_2, rflags_1 = _bit_scan_reverse(rax_7)
                        int32_t var_c4_2 = rax_7
                        int32_t rax_8
                        
                        if (rax_7 == 0)
                            rax_8 = 0x20
                        else
                            rax_8 = 0x1f - temp0_2
                        
                        var_b4_1.d = r8_1 - rax_8 + 0x1f
                        
                        if (r8_1 - rax_8 + 0x1f s> r10_1)
                            var_b4_1.d = r10_1
                    else
                        while (true)
                            int64_t rdx_4 = sx.q(rcx_1)
                            r8_1 += 0x20
                            rcx_1 += 1
                            var_b4_1:4.d = r8_1
                            var_c8_1 = rcx_1
                            
                            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
                            int32_t var_b8_2 = 0xffffffff
                            
                            if (rdx_3 != 0)
                                goto label_1420e7588
                        
                        var_b4_1.d = r10_1
                
                int32_t rdx_5 = *(r15_1 + 0x28)
                int128_t var_48_1 = 0xffffffff
                int32_t rsi_1 = 0xffffffff << (rdx_5.b & 0x1f)
                int128_t var_58_1 = var_c8_1.o
                int32_t r8_4 = rdx_5 s>> 5
                int32_t r9_3 = rdx_5 & 0xffffffe0
                int64_t var_88_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
                int32_t var_b8_3 = rsi_1
                var_b4_1.d = rdx_5
                int128_t var_a8 = r15_1.o
                int128_t var_98_1 = var_58_1
                
                if (rdx_5 != r10_1)
                    void* rax_10 = *(r15_1 + 0x20)
                    void* r11_1 = r15_1 + 0x10
                    
                    if (rax_10 != 0)
                        r11_1 = rax_10
                    
                    int32_t temp2_1
                    int32_t temp3_1
                    temp2_1:temp3_1 = sx.q(r10_1 - 1)
                    int32_t rdx_9 = *(r11_1 + (sx.q(r8_4) << 2)) & rsi_1
                    
                    if (rdx_9 != 0)
                    label_1420e7652:
                        int32_t rax_17 = neg.d(rdx_9) & rdx_9
                        uint64_t rflags_2
                        int32_t temp0_4
                        temp0_4, rflags_2 = _bit_scan_reverse(rax_17)
                        int32_t rax_18
                        
                        if (rax_17 == 0)
                            rax_18 = 0x20
                        else
                            rax_18 = 0x1f - temp0_4
                        
                        var_b4_1.d = r9_3 - rax_18 + 0x1f
                        
                        if (r9_3 - rax_18 + 0x1f s> r10_1)
                            var_b4_1.d = r10_1
                    else
                        while (true)
                            int64_t rcx_6 = sx.q(r8_4)
                            r9_3 += 0x20
                            r8_4 += 1
                            
                            if (rcx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_9 = *(r11_1 + (rcx_6 << 2) + 4)
                            var_b8_3 = 0xffffffff
                            
                            if (rdx_9 != 0)
                                goto label_1420e7652
                        
                        var_b4_1.d = r10_1
                
                while (true)
                    result = sx.q(var_98_1:0xc.d)
                    int64_t rcx_8 = var_a8.q
                    
                    if (result.d == (var_b8_3.q u>> 0x20).d && var_98_1.q == r15_1 + 0x10
                            && rcx_8 == r15_1)
                        break
                    
                    char* rax_21 = result * 0x38 + *rcx_8
                    
                    if ((*rax_21 & 1) != 0 && *(rax_21 + 0x10) u<= 0 && *(rax_21 + 0x14) == arg2)
                        int64_t var_80
                        int64_t var_70
                        int64_t* rax_23 = sub_14242f630(&var_80, 
                            sub_140b63b70(&rax_21[0x14], &var_70), *(result_1 + 0x230))
                        int16_t* rdx_12
                        
                        if (rax_23[1].d == 0)
                            rdx_12 = &data_142d40450
                        else
                            rdx_12 = *rax_23
                        
                        int64_t arg_18
                        sub_140b58260(&arg_18, rdx_12, 1)
                        int64_t rcx_12 = var_80
                        *(rax_21 + 0x14) = arg_18
                        
                        if (rcx_12 != 0)
                            sub_140a74f90(rcx_12)
                        
                        int64_t rcx_13 = var_70
                        
                        if (rcx_13 != 0)
                            sub_140a74f90(rcx_13)
                    
                    var_98_1:8.d &= not.d(var_a8:0xc.d)
                    sub_14059bdd0(&var_a8:8)
                
                rdi_3 = arg_20

return result
