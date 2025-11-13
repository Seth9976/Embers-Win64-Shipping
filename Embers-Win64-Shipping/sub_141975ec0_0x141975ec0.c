// 函数: sub_141975ec0
// 地址: 0x141975ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int64_t* rsi
rsi.b = 0

if (*arg2 == 1)
    int64_t* var_88
    __builtin_memset(&var_88, 0, 0x2c)
    int32_t var_5c_1 = 0x80
    int32_t var_58_1 = 0xffffffff
    int32_t var_54_1 = 0
    int64_t var_48_1 = 0
    int32_t var_40_1 = 0
    int32_t var_100
    sub_14186d450(&var_88, &var_100)
    char* var_110_1 = nullptr
    int64_t* var_f8
    *var_f8 = *(arg2 + 0x18)
    var_f8[2].d = *(arg2 + 0x28)
    int32_t rax_3 = var_100
    *(var_f8 + 0x14) = 0xffffffff
    void var_108
    sub_14187f510(&var_88, &var_108, *var_f8, var_f8, rax_3, var_110_1)
    
    if (*(arg2 + 0x2c) != 0 || *(arg2 + 0x34) != 0 || *(arg2 + 0x3c) != 0)
        sub_14186d450(&var_88, &var_100)
        char* var_110_2 = nullptr
        *var_f8 = *(arg2 + 0x2c)
        var_f8[2].d = *(arg2 + 0x3c)
        int32_t rax_5 = var_100
        *(var_f8 + 0x14) = 0xffffffff
        sub_14187f510(&var_88, &var_108, *var_f8, var_f8, rax_5, var_110_2)
    
    if (*(arg2 + 0x40) != 0 || *(arg2 + 0x48) != 0 || *(arg2 + 0x50) != 0)
        sub_14186d450(&var_88, &var_100)
        char* var_110_3 = nullptr
        *var_f8 = *(arg2 + 0x40)
        var_f8[2].d = *(arg2 + 0x50)
        int32_t rax_7 = var_100
        *(var_f8 + 0x14) = 0xffffffff
        sub_14187f510(&var_88, &var_108, *var_f8, var_f8, rax_7, var_110_3)
    
    if (*(arg2 + 0x54) != 0 || *(arg2 + 0x5c) != 0 || *(arg2 + 0x64) != 0)
        sub_14186d450(&var_88, &var_100)
        char* var_110_4 = nullptr
        *var_f8 = *(arg2 + 0x54)
        var_f8[2].d = *(arg2 + 0x64)
        int32_t rax_9 = var_100
        *(var_f8 + 0x14) = 0xffffffff
        sub_14187f510(&var_88, &var_108, *var_f8, var_f8, rax_9, var_110_4)
    
    if (*(arg2 + 0x68) != 0 || *(arg2 + 0x70) != 0 || *(arg2 + 0x78) != 0)
        sub_14186d450(&var_88, &var_100)
        char* var_110_5 = nullptr
        *var_f8 = *(arg2 + 0x68)
        var_f8[2].d = *(arg2 + 0x78)
        int32_t rax_11 = var_100
        *(var_f8 + 0x14) = 0xffffffff
        sub_14187f510(&var_88, &var_108, *var_f8, var_f8, rax_11, var_110_5)
    
    int32_t rcx_15 = 0
    int32_t var_fc_1 = 1
    var_100 = 0
    int32_t r9_6 = *(arg1 + 0xb0)
    int32_t r8_6 = 0
    void* var_f8_1 = arg1 + 0x98
    int32_t var_f0_1 = 0xffffffff
    int64_t var_ec_1 = 0
    
    if (r9_6 != 0)
        void* rax_12 = *(arg1 + 0xa8)
        void* r10_1 = arg1 + 0x98
        
        if (rax_12 != 0)
            r10_1 = rax_12
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r9_6 - 1)
        int32_t rdx_12 = *r10_1
        
        if (rdx_12 != 0)
        label_1419761ac:
            int32_t rax_18 = neg.d(rdx_12) & rdx_12
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_18)
            int32_t var_fc_2 = rax_18
            int32_t rax_19
            
            if (rax_18 == 0)
                rax_19 = 0x20
            else
                rax_19 = 0x1f - temp0_2
            
            var_ec_1.d = r8_6 - rax_19 + 0x1f
            
            if (r8_6 - rax_19 + 0x1f s> r9_6)
                var_ec_1.d = r9_6
        else
            while (true)
                int64_t rax_15 = sx.q(rcx_15)
                r8_6 += 0x20
                rcx_15 += 1
                var_ec_1:4.d = r8_6
                var_100 = rcx_15
                
                if (rax_15.d s>= ((temp0_1 & 0x1f) + temp1_1) s>> 5)
                    break
                
                rdx_12 = *(r10_1 + (rax_15 << 2) + 4)
                var_f0_1 = 0xffffffff
                
                if (rdx_12 != 0)
                    goto label_1419761ac
            
            var_ec_1.d = r9_6
    
    int32_t rdx_13 = *(arg1 + 0xb0)
    double zmm2[0x2] = var_f0_1.o
    var_ec_1.d = rdx_13
    int32_t rdi_1 = 0xffffffff << (rdx_13 & 0x1f).b
    int128_t var_b0_1 = var_100.o
    int32_t rcx_19 = rdx_13 & 0xffffffe0
    int32_t r8_9 = rdx_13 s>> 5
    int32_t var_f0_2 = rdi_1
    double var_a0_1[0x2] = zmm2
    int64_t var_c0_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
    int128_t var_e0 = (arg1 + 0x88).o
    int128_t var_d0_1 = var_b0_1
    uint64_t rax_22
    
    if (rdx_13 != r9_6)
        void* rax_23 = *(arg1 + 0xa8)
        void* r10_2 = arg1 + 0x98
        
        if (rax_23 != 0)
            r10_2 = rax_23
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r9_6 - 1)
        int32_t rdx_17 = *(r10_2 + (sx.q(r8_9) << 2)) & rdi_1
        
        if (rdx_17 != 0)
        label_141976282:
            int32_t rax_29 = neg.d(rdx_17) & rdx_17
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_29)
            int32_t r11_1
            
            if (rax_29 == 0)
                r11_1 = 0x20
            else
                r11_1 = 0x1f - temp0_4
            
            rax_22 = zx.q(rcx_19 - r11_1 + 0x1f)
            var_ec_1.d = rax_22.d
            
            if (rax_22.d s> r9_6)
                var_ec_1.d = r9_6
        else
            while (true)
                rax_22 = sx.q(r8_9)
                rcx_19 += 0x20
                r8_9 += 1
                
                if (rax_22.d s>= ((temp2_1 & 0x1f) + temp3_1) s>> 5)
                    break
                
                rdx_17 = *(r10_2 + (rax_22 << 2) + 4)
                var_f0_2 = 0xffffffff
                
                if (rdx_17 != 0)
                    goto label_141976282
            
            var_ec_1.d = r9_6
    
    int64_t var_80
    int64_t var_78
    int64_t* var_68
    
    while (true)
        int64_t rcx_21 = sx.q(var_d0_1:0xc.d)
        
        if (rcx_21.d != (var_f0_2.q u>> 0x20).d || var_d0_1.q != arg1 + 0x98)
            rax_22.b = 0
        else
            rax_22.b = 1
        
        int64_t rdx_19 = var_e0.q
        
        if (rax_22.b == 0 || rdx_19 != arg1 + 0x88)
            rax_22.b = 1
        else
            rax_22.b = 0
        
        if (rax_22.b == 0)
            rsi.b = 0
            break
        
        int32_t r11_2 = var_80.d
        void* rbx_6 = rcx_21 * 0xb8 + *rdx_19
        
        if (r11_2 == *(rbx_6 + 0x58))
            int32_t rax_30 = 0
            
            if (r11_2 s> 0)
                void* rdi_2 = rbx_6 + 0x60
                rsi = var_88
                int64_t* r14_1 = &var_78
                
                if (var_68 != 0)
                    r14_1 = var_68
                
                void* rcx_23 = *(rdi_2 + 0x10)
                
                if (rcx_23 != 0)
                    rdi_2 = rcx_23
                
                do
                    int32_t rcx_24 = rax_30
                    
                    if (rax_30 s< 0)
                        rcx_24 = rax_30 + 0x1f
                    
                    int64_t r9_7 = sx.q(rcx_24 s>> 5) << 2
                    int32_t r8_10 = 1 << (rax_30.b & 0x1f)
                    int32_t r10_4 = r8_10 & *(r9_7 + r14_1)
                    rdx_19.b = r10_4 != 0
                    
                    if (rdx_19.b != (*(rdi_2 + r9_7) & r8_10) != 0)
                        goto label_1419763b2
                    
                    if (r10_4 != 0)
                        int64_t* r8_11 = *(rbx_6 + 0x50)
                        rdx_19 = sx.q(rax_30) * 0x1c
                        
                        if (*(rsi + rdx_19) != *(r8_11 + rdx_19))
                            goto label_1419763b2
                        
                        if (*(rsi + rdx_19 + 8) != *(r8_11 + rdx_19 + 8))
                            goto label_1419763b2
                        
                        if (*(rsi + rdx_19 + 0x10) != *(r8_11 + rdx_19 + 0x10))
                            goto label_1419763b2
                    
                    rax_30 += 1
                while (rax_30 s< r11_2)
            
            rsi.b = 1
            break
        
    label_1419763b2:
        var_d0_1:8.d &= not.d(var_e0:0xc.d)
        sub_14059bdd0(&var_e0:8)
    
    int32_t var_40_2 = 0
    
    if (var_48_1 != 0)
        sub_140a74f90(var_48_1)
    
    bool cond:3_1 = var_80:4.d == 0
    var_80.d = 0
    
    if (not(cond:3_1))
        sub_1406106e0(&var_88, 0)
    
    int32_t var_58_2 = 0xffffffff
    int32_t var_54_2 = 0
    sub_14059a8e0(&var_78, 0)
    
    if (var_68 != 0)
        sub_140a74f90(var_68)
    
    int64_t* rcx_38 = var_88
    
    if (rcx_38 != 0)
        sub_140a74f90(rcx_38)

__security_check_cookie(rax_1 ^ &var_138)
return zx.q(rsi.b)
