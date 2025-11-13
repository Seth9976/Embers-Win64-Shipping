// 函数: sub_140af9190
// 地址: 0x140af9190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
*(arg1 + 0x34)
uint64_t result

if (arg1[1].d == *(arg1 + 0x34))
label_140af964e:
    result.b = 1
else
    int32_t r11_1 = arg1[5].d
    int32_t r8_1 = 0
    int32_t var_114_1 = 1
    int32_t rcx = 0
    int32_t var_118_1 = 0
    void* var_110_1 = &arg1[2]
    int32_t var_108_1 = 0xffffffff
    int64_t var_104_1 = 0
    
    if (r11_1 != 0)
        void* rax_3 = arg1[4]
        void* r9_1 = &arg1[2]
        
        if (rax_3 != 0)
            r9_1 = rax_3
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r11_1 - 1)
        int32_t rdx_2 = *r9_1
        
        if (rdx_2 != 0)
        label_140af9257:
            int32_t rax_10 = neg.d(rdx_2) & rdx_2
            uint64_t rflags_1
            int32_t temp0_1
            temp0_1, rflags_1 = _bit_scan_reverse(rax_10)
            int32_t var_114_2 = rax_10
            int32_t rax_11
            
            if (rax_10 == 0)
                rax_11 = 0x20
            else
                rax_11 = 0x1f - temp0_1
            
            var_104_1.d = rcx - rax_11 + 0x1f
            
            if (rcx - rax_11 + 0x1f s> r11_1)
                var_104_1.d = r11_1
        else
            while (true)
                int64_t rdx_3 = sx.q(r8_1)
                rcx += 0x20
                r8_1 += 1
                var_104_1:4.d = rcx
                var_118_1 = r8_1
                
                if (rdx_3.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
                int32_t var_108_2 = 0xffffffff
                
                if (rdx_2 != 0)
                    goto label_140af9257
            
            var_104_1.d = r11_1
    
    int32_t rdx_5 = arg1[5].d
    int128_t var_b8_1 = 0xffffffff
    int32_t r14_1 = 0xffffffff << (rdx_5.b & 0x1f)
    int128_t var_c8_1 = var_118_1.o
    int32_t r8_3 = rdx_5 s>> 5
    int32_t r9_3 = rdx_5 & 0xffffffe0
    int64_t var_d8_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff).q
    int32_t var_108_3 = r14_1
    var_104_1.d = rdx_5
    int128_t var_f8 = arg1.o
    int128_t var_e8_1 = var_c8_1
    
    if (rdx_5 != r11_1)
        void* rax_13 = arg1[4]
        void* r10_1 = &arg1[2]
        
        if (rax_13 != 0)
            r10_1 = rax_13
        
        int32_t temp4_1
        int32_t temp5_1
        temp4_1:temp5_1 = sx.q(r11_1 - 1)
        int32_t rdx_9 = *(r10_1 + (sx.q(r8_3) << 2)) & r14_1
        
        if (rdx_9 != 0)
        label_140af932f:
            int32_t rax_20 = neg.d(rdx_9) & rdx_9
            uint64_t rflags_2
            int32_t temp0_3
            temp0_3, rflags_2 = _bit_scan_reverse(rax_20)
            int32_t rax_21
            
            if (rax_20 == 0)
                rax_21 = 0x20
            else
                rax_21 = 0x1f - temp0_3
            
            var_104_1.d = r9_3 - rax_21 + 0x1f
            
            if (r9_3 - rax_21 + 0x1f s> r11_1)
                var_104_1.d = r11_1
        else
            while (true)
                int64_t rcx_5 = sx.q(r8_3)
                r9_3 += 0x20
                r8_3 += 1
                
                if (rcx_5.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                    break
                
                rdx_9 = *(r10_1 + (rcx_5 << 2) + 4)
                var_108_3 = 0xffffffff
                
                if (rdx_9 != 0)
                    goto label_140af932f
            
            var_104_1.d = r11_1
    
    while (true)
        result = sx.q(var_e8_1:0xc.d)
        int64_t rdx_10 = var_f8.q
        
        if (result.d == (var_108_3.q u>> 0x20).d && var_e8_1.q == &arg1[2] && rdx_10 == arg1)
            goto label_140af964e
        
        void* rbx_3 = result * 0x38 + *rdx_10
        
        if (*(rbx_3 + 0x18) == 0)
            int16_t* rcx_7
            
            if (*(rbx_3 + 0x10) == 0)
                rcx_7 = &data_142d40450
            else
                rcx_7 = *(rbx_3 + 8)
            
            char rax_23 = sub_140b40760(rcx_7, nullptr)
            char rax_24
            
            if (rax_23 != 0)
                int16_t* const rcx_8
                
                if (*(rbx_3 + 0x10) == 0)
                    rcx_8 = &data_142d40450
                else
                    rcx_8 = *(rbx_3 + 8)
                
                rax_24 = sub_140aed720(rcx_8)
            
            if (rax_23 == 0 || rax_24 != 0)
                int32_t var_7c_1 = 0x80
                int64_t var_a8
                __builtin_memset(&var_a8, 0, 0x2c)
                int32_t var_74_1 = 0
                int64_t var_68_1 = 0
                int32_t var_60_1 = 0
                int32_t var_78_1 = 0xffffffff
                sub_140ae7670(&var_a8, arg1)
                int32_t rax_27 = arg1[0xa].d
                int32_t rcx_11 = 0
                int32_t r8_4 = 0
                int64_t var_98
                int64_t* var_110_2 = &var_98
                int32_t var_118_2 = 0
                int32_t var_114_3 = 1
                int32_t var_108_4 = 0xffffffff
                int64_t var_104_2 = 0
                int64_t* var_88
                int32_t var_80
                
                if (var_80 != 0)
                    int64_t* r10_2 = &var_98
                    
                    if (var_88 != 0)
                        r10_2 = var_88
                    
                    int32_t temp6_1
                    int32_t temp7_1
                    temp6_1:temp7_1 = sx.q(var_80 - 1)
                    int32_t rdx_14 = *r10_2
                    
                    if (rdx_14 != 0)
                    label_140af94a7:
                        int32_t rax_35 = neg.d(rdx_14) & rdx_14
                        uint64_t rflags_3
                        int32_t temp0_4
                        temp0_4, rflags_3 = _bit_scan_reverse(rax_35)
                        int32_t var_114_4 = rax_35
                        int32_t r12_1
                        
                        if (rax_35 == 0)
                            r12_1 = 0x20
                        else
                            r12_1 = 0x1f - temp0_4
                        
                        int32_t rax_36 = r8_4 - r12_1 + 0x1f
                        
                        if (rax_36 s> var_80)
                            rax_36 = var_80
                        
                        var_104_2.d = rax_36
                    else
                        while (true)
                            int64_t rdx_15 = sx.q(rcx_11)
                            r8_4 += 0x20
                            rcx_11 += 1
                            var_104_2:4.d = r8_4
                            var_118_2 = rcx_11
                            
                            if (rdx_15.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                                var_104_2.d = var_80
                                break
                            
                            rdx_14 = *(r10_2 + (rdx_15 << 2) + 4)
                            int32_t var_108_5 = 0xffffffff
                            
                            if (rdx_14 != 0)
                                goto label_140af94a7
                
                int128_t var_c8_2 = var_118_2.o
                var_104_2.d = var_80
                int128_t var_b8_2 = 0xffffffff
                int64_t zmm2 = _mm_unpackhi_pd(0xffffffff, 0xffffffff).q
                var_f8 = (&var_a8).o
                int128_t var_e8_2 = var_c8_2
                int64_t var_d8_2 = zmm2
                int32_t* rbx_5
                
                while (true)
                    int64_t rax_37 = sx.q(var_e8_2:0xc.d)
                    int64_t rcx_15 = var_f8.q
                    
                    if (rax_37.d == ((0xffffffff << (var_80.b & 0x1f)).q u>> 0x20).d
                            && var_e8_2.q == &var_98 && rcx_15 == &var_a8)
                        sub_140ae7670(&arg2[0xc], &var_a8)
                        arg2[0x16].d = rax_27
                        rbx_5.b = 1
                        break
                    
                    rbx_5 = rax_37 * 0x38 + *rcx_15
                    
                    if (*rbx_5 s>= 0)
                        int16_t* rcx_16
                        
                        if (rbx_5[4] == 0)
                            rcx_16 = &data_142d40450
                        else
                            rcx_16 = *(rbx_5 + 8)
                        
                        if (sub_140b40760(rcx_16, nullptr) == 0)
                        label_140af95f0:
                            int16_t* rcx_22
                            int16_t* rdx_16
                            
                            if (rbx_5[4] == 0)
                                rdx_16 = &data_142d40450
                                rcx_22 = &data_142d40450
                            else
                                rdx_16 = *(rbx_5 + 8)
                                rcx_22 = rdx_16
                            
                            sub_140b43590(rcx_22, rdx_16, arg2, 0, *rbx_5 != 0)
                        else
                            int16_t* const rcx_17
                            
                            if (rbx_5[4] == 0)
                                rcx_17 = &data_142d40450
                            else
                                rcx_17 = *(rbx_5 + 8)
                            
                            if (sub_140aed720(rcx_17) != 0)
                                goto label_140af95f0
                            
                            if (rbx_5[6].b != 0)
                                rbx_5.b = 0
                                break
                    
                    var_e8_2:8.d &= not.d(var_f8:0xc.d)
                    sub_14059bdd0(&var_f8:8)
                
                int32_t var_60_2 = 0
                
                if (var_68_1 != 0)
                    sub_140a74f90(var_68_1)
                
                sub_140aeeaa0(&var_a8, 0)
                
                if (var_88 != 0)
                    sub_140a74f90(var_88)
                
                int64_t rcx_21 = var_a8
                
                if (rcx_21 != 0)
                    sub_140a74f90(rcx_21)
                
                result = zx.q(rbx_5.b)
                break
        
        var_e8_1:8.d &= not.d(var_f8:0xc.d)
        sub_14059bdd0(&var_f8:8)

__security_check_cookie(rax_1 ^ &var_148)
return result
