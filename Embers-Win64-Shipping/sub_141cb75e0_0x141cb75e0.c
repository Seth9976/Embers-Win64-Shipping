// 函数: sub_141cb75e0
// 地址: 0x141cb75e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
int32_t r8 = arg3[7].d
int32_t var_198 = 0
int64_t* r15 = arg2
int32_t rdi = 0
int32_t rax_6 = r8 - *(arg3 + 0x74) + arg3[5].d + arg3[3].d + arg3[1].d
uint64_t result = zx.q(rax_6 + arg3[9].d)

if (rax_6 != neg.d(arg3[9].d))
    int64_t rcx = 0
    int64_t var_98
    __builtin_memset(&var_98, 0, 0x2c)
    int32_t var_6c_1 = 0x80
    int32_t var_68_1 = 0xffffffff
    int32_t var_64_1 = 0
    int64_t var_58_1 = 0
    int32_t var_50_1 = 0
    
    if (*(arg3 + 0xe1) != 0 && r8 s> 0)
        sub_141ca3e30(arg1 - 0x28, &arg3[6], &arg3[0x12], &var_98)
        rcx = var_58_1
    
    int32_t r14_1 = r15[1].d
    int32_t i = r14_1 - 1
    int32_t i_1 = i
    int64_t var_88
    int64_t* var_78
    
    if (r14_1 - 1 s>= 0)
        int64_t i_2 = sx.q(i)
        int16_t* var_148
        int16_t* r12_1 = var_148
        int64_t i_3 = i_2
        
        do
            int64_t rax_7 = sx.q(arg3[1].d)
            int64_t* rsi_3 = i_2 * 0x50 + *r15
            
            if (rax_7.d s> 0)
                int64_t* rax_8 = *arg3
                int64_t rcx_2 = 0
                
                while (*rax_8 != rsi_3[1])
                    rcx_2 += 1
                    rax_8 = &rax_8[1]
                    
                    if (rcx_2 s>= rax_7)
                        goto label_141cb770b
                
                goto label_141cb7d17
            
        label_141cb770b:
            int64_t rax_9 = sx.q(arg3[3].d)
            
            if (rax_9.d s<= 0)
                goto label_141cb7943
            
            r15.b = 0
            void* r9
            
            if (arg3[0x1c].b == 0)
                int64_t rcx_19 = 0
                
                if (rax_9.d s> 0)
                    int64_t* rax_31 = arg3[2]
                    
                    while (*rax_31 != rsi_3[2])
                        rcx_19 += 1
                        rax_31 = &rax_31[1]
                        
                        if (rcx_19 s>= rax_9)
                            goto label_141cb7939
                    
                    goto label_141cb7a5b
                
            label_141cb7939:
                r15 = arg2
            label_141cb7943:
                
                if (arg3[5].d s> 0)
                    for (int64_t* j = arg3[4]; j != &j[sx.q(arg3[5].d)]; j = &j[1])
                        if (*j == *rsi_3)
                            goto label_141cb7d17
                
                int64_t rax_21 = sx.q(arg3[7].d)
                int128_t var_b8
                
                if (rax_21.d s> 0)
                    if (*(arg3 + 0xe1) == 0)
                        int64_t rcx_25 = 0
                        
                        if (rax_21.d s> 0)
                            int64_t* rax_37 = arg3[6]
                            
                            do
                                if (*rax_37 == rsi_3[4])
                                    goto label_141cb7d17
                                
                                rcx_25 += 1
                                rax_37 = &rax_37[1]
                            while (rcx_25 s< rax_21)
                    else
                        int64_t* var_188_1 = &var_88
                        int32_t rcx_17 = 0
                        int32_t var_190_1 = 0
                        int32_t r8_6 = 0
                        int32_t var_18c_1 = 1
                        int32_t var_180_1 = 0xffffffff
                        int64_t var_17c_1 = 0
                        int32_t var_70
                        
                        if (var_70 != 0)
                            int64_t* r10_1 = &var_88
                            
                            if (var_78 != 0)
                                r10_1 = var_78
                            
                            int32_t temp5_1
                            int32_t temp6_1
                            temp5_1:temp6_1 = sx.q(var_70 - 1)
                            int32_t rdx_14 = *r10_1
                            int32_t rax_32
                            
                            if (rdx_14 != 0)
                            label_141cb7a1b:
                                int32_t rax_29 = neg.d(rdx_14) & rdx_14
                                uint64_t rflags_1
                                int32_t temp0_1
                                temp0_1, rflags_1 = _bit_scan_reverse(rax_29)
                                int32_t var_18c_2 = rax_29
                                int32_t rax_30
                                
                                if (rax_29 == 0)
                                    rax_30 = 0x20
                                else
                                    rax_30 = 0x1f - temp0_1
                                
                                rax_32 = r8_6 - rax_30 + 0x1f
                                
                                if (rax_32 s> var_70)
                                    rax_32 = var_70
                            else
                                while (true)
                                    int64_t rdx_15 = sx.q(rcx_17)
                                    r8_6 += 0x20
                                    rcx_17 += 1
                                    var_17c_1:4.d = r8_6
                                    var_190_1 = rcx_17
                                    
                                    if (rdx_15.d s>= (temp6_1 + (temp5_1 & 0x1f)) s>> 5)
                                        rax_32 = var_70
                                        break
                                    
                                    rdx_14 = *(r10_1 + (rdx_15 << 2) + 4)
                                    int32_t var_180_2 = 0xffffffff
                                    
                                    if (rdx_14 != 0)
                                        goto label_141cb7a1b
                            
                            var_17c_1.d = rax_32
                        
                        r9 = zx.q(var_70)
                        int128_t var_c0_1 = var_190_1.o
                        var_17c_1.d = r9.d
                        int128_t var_b0_1 = 0xffffffff
                        int64_t zmm2 = _mm_unpackhi_pd(0xffffffff, 0xffffffff).q
                        int128_t var_f0 = (&var_98).o
                        int128_t var_e0_1 = var_b8
                        int64_t var_d0_1 = zmm2
                        
                        while (true)
                            int64_t rax_33 = sx.q(var_e0_1:0xc.d)
                            int64_t* rcx_22 = var_f0.q
                            
                            if (rax_33.d == ((0xffffffff << (r9.b & 0x1f)).q u>> 0x20).d
                                    && var_e0_1.q == &var_88 && rcx_22 == &var_98)
                                break
                            
                            if (*(*rcx_22 + rax_33 * 0x10) == rsi_3[4])
                                goto label_141cb7d17
                            
                            var_e0_1:8.d &= not.d(var_f0:0xc.d)
                            sub_14059bdd0(&var_f0:8)
                
                if (arg3[9].d - *(arg3 + 0x74) s> 0)
                    int32_t rcx_26 = 0
                    int32_t var_18c_3 = 1
                    int32_t var_190_2 = 0
                    int32_t r11_1 = arg3[0xd].d
                    r9 = &arg3[0xa]
                    int32_t r8_10 = 0
                    void* var_188_2 = r9
                    int32_t var_180_4 = 0xffffffff
                    int64_t var_17c_2 = 0
                    
                    if (r11_1 != 0)
                        void* rax_40 = *(r9 + 0x10)
                        
                        if (rax_40 != 0)
                            r9 = rax_40
                        
                        int32_t temp3_1
                        int32_t temp4_1
                        temp3_1:temp4_1 = sx.q(r11_1 - 1)
                        int32_t rdx_23 = *r9
                        
                        if (rdx_23 != 0)
                        label_141cb7beb:
                            int32_t rax_47 = neg.d(rdx_23) & rdx_23
                            uint64_t rflags_2
                            int32_t temp0_3
                            temp0_3, rflags_2 = _bit_scan_reverse(rax_47)
                            int32_t var_18c_4 = rax_47
                            int32_t rax_48
                            
                            if (rax_47 == 0)
                                rax_48 = 0x20
                            else
                                rax_48 = 0x1f - temp0_3
                            
                            var_17c_2.d = r8_10 - rax_48 + 0x1f
                            
                            if (r8_10 - rax_48 + 0x1f s> r11_1)
                                var_17c_2.d = r11_1
                        else
                            while (true)
                                int64_t rdx_24 = sx.q(rcx_26)
                                r8_10 += 0x20
                                rcx_26 += 1
                                var_17c_2:4.d = r8_10
                                var_190_2 = rcx_26
                                
                                if (rdx_24.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                                    break
                                
                                rdx_23 = *(r9 + (rdx_24 << 2) + 4)
                                int32_t var_180_5 = 0xffffffff
                                
                                if (rdx_23 != 0)
                                    goto label_141cb7beb
                            
                            var_17c_2.d = r11_1
                    
                    int128_t var_b0_2 = 0xffffffff
                    int128_t var_c0_2 = var_190_2.o
                    int128_t var_120 = (&arg3[8]).o
                    int64_t var_100_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
                    int128_t var_110_1 = var_b8
                    
                    if (0 s>= r11_1)
                        goto label_141cb7d17
                    
                    int32_t rcx_28 = var_110_1:0xc.d
                    
                    while (true)
                        int64_t rdx_25 = sx.q(rcx_28) * 5
                        int64_t rcx_29 = *var_120.q
                        int64_t* rbx_5 = rcx_29 + (rdx_25 << 3)
                        int64_t r8_12 = *rbx_5
                        int16_t* const rcx_31
                        int16_t* rdx_27
                        
                        if (*(rcx_29 + (rdx_25 << 3) + 0x18) != 0)
                            sub_141ca03d0(&rsi_3[5], &var_148, r8_12)
                            int16_t* rax_53 = var_148
                            
                            if (rax_53 != 0)
                                if (rbx_5[2].d == 0)
                                    rdx_27 = &data_142d40450
                                else
                                    rdx_27 = rbx_5[1]
                                
                                if (*(rax_53 + 8) == 0)
                                    rcx_31 = &data_142d40450
                                else
                                    rcx_31 = *rax_53
                                
                            label_141cb7ced:
                                int32_t rax_54
                                rax_54, r9 = sub_140a54510(rcx_31, rdx_27)
                                
                                if (rax_54 == 0)
                                    break
                        else
                            int64_t* var_f8
                            sub_141ca03d0(&rsi_3[5], &var_f8, r8_12)
                            int64_t* rax_52 = var_f8
                            
                            if (rax_52 != 0)
                                if (rax_52[1].d == 0)
                                    rcx_31 = &data_142d40450
                                    rdx_27 = &data_142d40450
                                else
                                    rcx_31 = *rax_52
                                    rdx_27 = &data_142d40450
                                
                                goto label_141cb7ced
                        var_110_1:8.d &= not.d(var_120:0xc.d)
                        sub_14059bdd0(&var_120:8)
                        rcx_28 = var_110_1:0xc.d
                        
                        if (rcx_28 s>= *(var_110_1.q + 0x18))
                            goto label_141cb7d17
            else
                int16_t* var_130
                sub_140b63b70(&rsi_3[2], &var_130)
                int32_t j_1 = 0
                
                if (arg3[3].d s> 0)
                    do
                        int64_t var_140
                        sub_140b63b70(arg3[2] + (sx.q(j_1) << 3), &var_140)
                        char rax_11
                        rax_11, r9 = sub_140a32a50(&var_130, &var_140, 1)
                        
                        if (rax_11 != 0)
                            int32_t var_138
                            int32_t rbx
                            int32_t rcx_7
                            
                            if (var_138 == 0)
                                rcx_7 = 0
                            label_141cb77a3:
                                int32_t var_128
                                int32_t rdx_5 = var_128 - 1
                                
                                if (var_128 == 0)
                                    rdx_5 = 0
                                
                                if (rcx_7 == rdx_5)
                                    rbx.b = 1
                                else
                                    int32_t rax_13
                                    
                                    if (var_138 == 0)
                                        rax_13 = 0
                                    else
                                        rax_13 = var_138 - 1
                                    
                                    int32_t rbx_1 = var_128 - 1
                                    
                                    if (var_128 == 0)
                                        rbx_1 = 0
                                    
                                    int32_t rcx_8
                                    
                                    if (rax_13 s>= 0)
                                        rcx_8 = rbx_1
                                        
                                        if (rax_13 s< rbx_1)
                                            rcx_8 = rax_13
                                    else
                                        rcx_8 = 0
                                    
                                    int64_t r9_2 = sx.q(rcx_8)
                                    
                                    if (sx.q(rax_13) + 1 s< r9_2)
                                        rbx_1 = rcx_8
                                    else if (sx.q(rax_13) + 1 s< sx.q(rbx_1))
                                        rbx_1 = rax_13 + 1
                                    
                                    int16_t* var_170 = nullptr
                                    int16_t* const rax_15 = &data_142d40450
                                    int32_t var_168_1 = 0
                                    
                                    if (var_128 != 0)
                                        rax_15 = var_130
                                    
                                    r12_1 = nullptr
                                    rbx = rbx_1 - rcx_8
                                    int32_t rdi_2 = 0
                                    void* rsi_4 = &rax_15[r9_2]
                                    int32_t rax_16 = 0
                                    int32_t var_164_1 = 0
                                    
                                    if (rsi_4 != 0 && *rsi_4 != 0 && rbx s> 0)
                                        if (rbx + 1 s> 0)
                                            sub_1405947f0(&var_170, rbx + 1)
                                            rax_16 = var_164_1
                                            rdi_2 = var_168_1
                                            r12_1 = var_170
                                        
                                        rdi_2 = rdi_2 + 1 + rbx
                                        
                                        if (rdi_2 s> rax_16)
                                            sub_140594770(&var_170)
                                            r12_1 = var_170
                                        
                                        UnDecorator::getReferenceType(r12_1, rsi_4, rbx * 2)
                                        r12_1[sx.q(rdi_2) - 1] = 0
                                    
                                    var_170 = nullptr
                                    int16_t* const rcx_12 = &data_142d40450
                                    var_168_1.q = 0
                                    
                                    if (rdi_2 != 0)
                                        rcx_12 = r12_1
                                    
                                    int32_t rax_18
                                    rax_18, r9 = sub_140a54510(rcx_12, &data_142d5a024)
                                    rdi |= 1
                                    
                                    if (rax_18 == 0)
                                        rbx.b = 1
                                    else
                                        rbx.b = 0
                            else
                                rcx_7 = var_138 - 1
                                
                                if (rcx_7 != 1)
                                    goto label_141cb77a3
                                
                                rbx.b = 1
                            
                            if ((rdi.b & 1) != 0)
                                rdi &= 0xfffffffe
                                
                                if (r12_1 != 0)
                                    sub_140a74f90(r12_1)
                            
                            if (rbx.b != 0)
                                int64_t rcx_15 = var_140
                                r15.b = 1
                                
                                if (rcx_15 != 0)
                                    sub_140a74f90(rcx_15)
                                
                                break
                        
                        int64_t rcx_14 = var_140
                        
                        if (rcx_14 != 0)
                            sub_140a74f90(rcx_14)
                        
                        j_1 += 1
                    while (j_1 s< arg3[3].d)
                
                int16_t* rcx_16 = var_130
                
                if (rcx_16 != 0)
                    sub_140a74f90(rcx_16)
                
                i = i_1
                
                if (r15.b == 0)
                    goto label_141cb7939
                
            label_141cb7a5b:
                r15 = arg2
            label_141cb7d17:
                r9.b = 1
                sub_141caaa70(r15, i, 1, r9.b)
            i -= 1
            i_2 = i_3 - 1
            i_1 = i
            i_3 = i_2
        while (i s>= 0)
        
        rcx = var_58_1
    
    int32_t var_50_2 = 0
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    int64_t var_90
    bool cond:1_1 = var_90:4.d == 0
    var_90.d = 0
    
    if (not(cond:1_1))
        sub_1405a5410(&var_98, 0)
    
    int32_t var_68_2 = 0xffffffff
    int32_t var_64_2 = 0
    result = sub_14059a8e0(&var_88, 0)
    
    if (var_78 != 0)
        result = sub_140a74f90(var_78)
    
    int64_t rcx_37 = var_98
    
    if (rcx_37 != 0)
        result = sub_140a74f90(rcx_37)

__security_check_cookie(rax_1 ^ &var_1b8)
return result
