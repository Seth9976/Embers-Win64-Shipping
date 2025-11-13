// 函数: sub_141cc4f90
// 地址: 0x141cc4f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbx = 0
int32_t rdi = 0
int64_t rsi = 0
int64_t* r12 = arg1
int64_t* r14 = arg2
uint64_t var_68 = 0
int32_t var_60 = 0
int64_t var_58 = 0
int64_t var_50 = 0
int64_t var_78 = 0
int32_t var_70 = 0
sub_1405947f0(&var_78, 2)
int32_t rax = var_70 + 2
var_70 = rax

if (rax s> 0)
    sub_140594770(&var_78)

UnDecorator::getReferenceType(var_78, &data_142dc30a4, 4)
int64_t var_88 = 0
int32_t var_80 = 0
sub_1405947f0(&var_88, 2)
int32_t rax_1 = var_80 + 2
var_80 = rax_1

if (rax_1 s> 0)
    sub_140594770(&var_88)

UnDecorator::getReferenceType(var_88, &data_142da76f4, 4)
int16_t* rax_2 = *r14
*r14 = 0
int16_t* var_118 = rax_2
int32_t var_110 = r14[1].d
int32_t var_10c = *(r14 + 0xc)
r14[1] = 0

if (sub_140a32a50(&var_118, &var_78, 0) != 0 && sub_140a236f0(&var_118, &var_88, 0) != 0)
    int32_t rax_7 = var_110
    int32_t r10_1 = rax_7 - 1
    
    if (rax_7 == 0)
        r10_1 = 0
    
    if (r10_1 - 1 s< 0)
        r10_1 = 0
    else if (r10_1 - 1 s< r10_1)
        r10_1 -= 1
    
    if (rax_7 != 0)
        rdi = rax_7 - 1
    
    int32_t rdi_1 = rdi - r10_1
    
    if (rdi_1 s> 1)
        rdi_1 = 1
    
    if (rdi_1 != 0)
        int32_t rcx_10 = rax_7 - rdi_1
        
        if (rcx_10 != r10_1)
            int16_t* r8_1 = var_118
            memmove(&r8_1[sx.q(r10_1)], &r8_1[sx.q(rdi_1 + r10_1)], (rcx_10 - r10_1) * 2)
            rax_7 = var_110
        
        rax_7 -= rdi_1
        var_110 = rax_7
    
    int32_t rdi_2 = rax_7 - 1
    
    if (rax_7 == 0)
        rdi_2 = 0
    
    if (rdi_2 s> 1)
        rdi_2 = 1
    
    if (rdi_2 != 0)
        if (rax_7 != rdi_2)
            int16_t* rcx_16 = var_118
            memmove(rcx_16, &rcx_16[sx.q(rdi_2)], (rax_7 - rdi_2) * 2)
            rax_7 = var_110
        
        var_110 = rax_7 - rdi_2
    
    int16_t* var_a8 = nullptr
    int32_t var_a0_1 = 0
    sub_1405947f0(&var_a8, 2)
    int32_t r15_1 = var_a0_1 + 2
    
    if (r15_1 s> 0)
        sub_140594770(&var_a8)
    
    UnDecorator::getReferenceType(var_a8, &data_142e1462c, 4)
    sub_14060a620(&var_118, &var_a8, nullptr, &var_118, 0, 0)
    int32_t rax_12 = var_110
    int32_t r10_2 = rax_12 - 1
    
    if (rax_12 == 0)
        r10_2 = 0
    
    if (r10_2 - 1 s< 0)
        r10_2 = 0
    else if (r10_2 - 1 s< r10_2)
        r10_2 -= 1
    
    int32_t rdi_3 = rax_12 - 1
    
    if (rax_12 == 0)
        rdi_3 = 0
    
    int32_t rdi_4 = rdi_3 - r10_2
    
    if (rdi_4 s> 1)
        rdi_4 = 1
    
    if (rdi_4 != 0)
        int32_t rcx_23 = rax_12 - rdi_4
        
        if (rcx_23 != r10_2)
            int16_t* r8_5 = var_118
            memmove(&r8_5[sx.q(r10_2)], &r8_5[sx.q(rdi_4 + r10_2)], (rcx_23 - r10_2) * 2)
            rax_12 = var_110
        
        rax_12 -= rdi_4
        var_110 = rax_12
    
    int32_t rdi_5 = rax_12 - 1
    
    if (rax_12 == 0)
        rdi_5 = 0
    
    if (rdi_5 s> 1)
        rdi_5 = 1
    
    if (rdi_5 != 0)
        if (rax_12 != rdi_5)
            int16_t* rcx_29 = var_118
            memmove(rcx_29, &rcx_29[sx.q(rdi_5)], (rax_12 - rdi_5) * 2)
            rax_12 = var_110
        
        var_110 = rax_12 - rdi_5
    
    int16_t* var_f8 = nullptr
    int32_t var_f0_1 = 0
    int16_t* var_108 = nullptr
    int32_t var_100_1 = 0
    int16_t* var_98 = nullptr
    int32_t var_90_1 = 0
    sub_1405947f0(&var_98, 2)
    int32_t rdi_6 = var_90_1 + 2
    var_90_1 = rdi_6
    
    if (rdi_6 s> 0)
        sub_140594770(&var_98)
        rdi_6 = var_90_1
    
    int16_t* rsi_1 = var_98
    UnDecorator::getReferenceType(rsi_1, &data_142d7fa60, 4)
    int64_t var_b8 = 0
    int32_t var_b0_1 = 0
    sub_1405947f0(&var_b8, 2)
    int32_t rax_17 = var_b0_1 + 2
    var_b0_1 = rax_17
    
    if (rax_17 s> 0)
        sub_140594770(&var_b8)
    
    UnDecorator::getReferenceType(var_b8, &data_142d4056c, 4)
    int16_t* const r14_1 = &data_142d40450
    void arg_18
    void arg_20
    
    while (true)
        int16_t* const rdx_12 = &data_142d40450
        
        if (rdi_6 != 0)
            rdx_12 = rsi_1
        
        int32_t rax_18 = sub_140a23cf0(&var_118, rdx_12, 0, 0, 0xffffffff)
        
        if (rax_18 s< 0)
            break
        
        int32_t rdx_13 = var_110
        int32_t rdi_7
        int16_t* r12_1
        
        if (rdx_13 == 0)
            r12_1 = &data_142d40450
            rdi_7 = 0
        else
            r12_1 = var_118
            rdi_7 = rdx_13 - 1
        
        int16_t* var_e8 = nullptr
        int16_t* r14_2 = nullptr
        int64_t var_e0_1 = 0
        
        if (rax_18 s< rdi_7)
            rdi_7 = rax_18
        
        int32_t rsi_2 = 0
        int32_t r15_2 = 0
        
        if (r12_1 != 0 && *r12_1 != 0 && rdi_7 s> 0)
            if (rdi_7 + 1 s> 0)
                sub_1405947f0(&var_e8, rdi_7 + 1)
                r15_2 = var_e0_1:4.d
                rsi_2 = var_e0_1.d
                r14_2 = var_e8
            
            rsi_2 = rsi_2 + 1 + rdi_7
            var_e0_1.d = rsi_2
            
            if (rsi_2 s> r15_2)
                sub_140594770(&var_e8)
                r15_2 = var_e0_1:4.d
                rsi_2 = var_e0_1.d
                r14_2 = var_e8
            
            UnDecorator::getReferenceType(r14_2, r12_1, rdi_7 * 2)
            r14_2[sx.q(rsi_2) - 1] = 0
            rdx_13 = var_110
        
        int16_t* rcx_40 = var_f8
        
        if (rcx_40 != 0)
            sub_140a74f90(rcx_40)
            rdx_13 = var_110
        
        var_f8 = r14_2
        var_e8 = nullptr
        var_f0_1 = rsi_2
        var_f0_1 = r15_2
        int64_t var_e0_2 = 0
        int32_t rax_21
        
        if (var_90_1 == 0)
            rax_21 = 0
        else
            rax_21 = var_90_1 - 1
        
        int32_t rax_22 = rax_21 + rax_18
        int32_t rdi_8 = rdx_13 - 1
        
        if (rdx_13 == 0)
            rdi_8 = 0
        
        int32_t rcx_41
        
        if (rax_22 s>= 0)
            rcx_41 = rdi_8
            
            if (rax_22 s< rdi_8)
                rcx_41 = rax_22
        else
            rcx_41 = 0
        
        int64_t r9_6 = sx.q(rcx_41)
        
        if (sx.q(rax_22) + 0x7fffffff s< r9_6)
            rdi_8 = rcx_41
        else if (sx.q(rax_22) + 0x7fffffff s< sx.q(rdi_8))
            rdi_8 = rax_22 + 0x7fffffff
        
        int16_t* var_d8 = nullptr
        int16_t* rax_24 = &data_142d40450
        int64_t var_d0_1 = 0
        
        if (rdx_13 != 0)
            rax_24 = var_118
        
        int16_t* r14_3 = nullptr
        int32_t rdi_9 = rdi_8 - rcx_41
        int32_t rsi_4 = 0
        int32_t r15_3 = 0
        void* r12_2 = &rax_24[r9_6]
        
        if (r12_2 != 0 && *r12_2 != 0 && rdi_9 s> 0)
            if (rdi_9 + 1 s> 0)
                sub_1405947f0(&var_d8, rdi_9 + 1)
                r15_3 = var_d0_1:4.d
                rsi_4 = var_d0_1.d
                r14_3 = var_d8
            
            rsi_4 = rsi_4 + 1 + rdi_9
            var_d0_1.d = rsi_4
            
            if (rsi_4 s> r15_3)
                sub_140594770(&var_d8)
                r15_3 = var_d0_1:4.d
                rsi_4 = var_d0_1.d
                r14_3 = var_d8
            
            UnDecorator::getReferenceType(r14_3, r12_2, rdi_9 * 2)
            r14_3[sx.q(rsi_4) - 1] = 0
        
        int16_t* rcx_45 = var_108
        var_d8 = nullptr
        int64_t var_d0_2 = 0
        
        if (rcx_45 != 0)
            sub_140a74f90(rcx_45)
        
        var_108 = r14_3
        var_100_1 = r15_3
        r14_1 = &data_142d40450
        int16_t* rdx_20 = &data_142d40450
        var_100_1 = rsi_4
        
        if (r15_1 != 0)
            rdx_20 = var_a8
        
        int32_t rax_26 = sub_140a23cf0(&var_f8, rdx_20, 0, 0, 0xffffffff)
        
        if (rax_26 s>= 0)
            int32_t rcx_47 = r15_1 - 1
            
            if (r15_1 == 0)
                rcx_47 = 0
            
            int32_t rax_27 = rax_26 + rcx_47
            int32_t rdi_10 = var_f0_1 - 1
            
            if (var_f0_1 == 0)
                rdi_10 = 0
            
            int32_t rcx_48
            
            if (rax_27 s>= 0)
                rcx_48 = rdi_10
                
                if (rax_27 s< rdi_10)
                    rcx_48 = rax_27
            else
                rcx_48 = 0
            
            int64_t r9_7 = sx.q(rcx_48)
            
            if (sx.q(rax_27) + 0x7fffffff s< r9_7)
                rdi_10 = rcx_48
            else if (sx.q(rax_27) + 0x7fffffff s< sx.q(rdi_10))
                rdi_10 = rax_27 + 0x7fffffff
            
            int16_t* rdx_23 = var_f8
            int16_t* const rax_29 = &data_142d40450
            int16_t* var_c8 = nullptr
            
            if (var_f0_1 != 0)
                rax_29 = rdx_23
            
            int64_t var_c0_1 = 0
            int32_t rdi_11 = rdi_10 - rcx_48
            int16_t* r14_4 = nullptr
            int32_t rsi_6 = 0
            int32_t r15_5 = 0
            void* r12_3 = &rax_29[r9_7]
            
            if (r12_3 != 0 && *r12_3 != 0 && rdi_11 s> 0)
                if (rdi_11 + 1 s> 0)
                    sub_1405947f0(&var_c8, rdi_11 + 1)
                    r15_5 = var_c0_1:4.d
                    rsi_6 = var_c0_1.d
                    r14_4 = var_c8
                
                rsi_6 += rdi_11 + 1
                var_c0_1.d = rsi_6
                
                if (rsi_6 s> r15_5)
                    sub_140594770(&var_c8)
                    r15_5 = var_c0_1:4.d
                    rsi_6 = var_c0_1.d
                    r14_4 = var_c8
                
                UnDecorator::getReferenceType(r14_4, r12_3, rdi_11 * 2)
                r14_4[sx.q(rsi_6) - 1] = 0
                rdx_23 = var_f8
            
            var_c8 = nullptr
            int64_t var_c0_2 = 0
            
            if (rdx_23 != 0)
                sub_140a74f90(rdx_23)
            
            var_f8 = r14_4
            r14_1 = &data_142d40450
            var_f0_1 = rsi_6
            var_f0_1 = r15_5
        
        int32_t rax_38
        
        if (sub_140a236f0(&var_f8, &var_88, 0) == 0)
            rax_38 = var_f0_1
        else
            int32_t rax_32 = var_f0_1
            int32_t r10_3 = rax_32 - 1
            
            if (rax_32 == 0)
                r10_3 = 0
            
            if (r10_3 - 1 s< 0)
                r10_3 = 0
            else if (r10_3 - 1 s< r10_3)
                r10_3 -= 1
            
            int32_t rdi_12 = rax_32 - 1
            
            if (rax_32 == 0)
                rdi_12 = 0
            
            int32_t rdi_13 = rdi_12 - r10_3
            
            if (rdi_13 s> 1)
                rdi_13 = 1
            
            if (rdi_13 != 0)
                int32_t rcx_56 = rax_32 - rdi_13
                
                if (rcx_56 != r10_3)
                    int16_t* r9_8 = var_f8
                    memmove(&r9_8[sx.q(r10_3)], &r9_8[sx.q(rdi_13 + r10_3)], (rcx_56 - r10_3) * 2)
                    rax_32 = var_f0_1
                
                var_f0_1 = rax_32 - rdi_13
            
            if (sub_140a32a50(&var_f8, &var_b8, 0) == 0)
                rax_38 = var_f0_1
            else if (sub_140a236f0(&var_f8, &var_b8, 0) == 0)
                rax_38 = var_f0_1
            else
                rax_38 = var_f0_1
                int32_t r10_4 = rax_38 - 1
                
                if (rax_38 == 0)
                    r10_4 = 0
                
                if (r10_4 - 1 s< 0)
                    r10_4 = 0
                else if (r10_4 - 1 s< r10_4)
                    r10_4 -= 1
                
                int32_t rdi_14 = rax_38 - 1
                
                if (rax_38 == 0)
                    rdi_14 = 0
                
                int32_t rdi_15 = rdi_14 - r10_4
                
                if (rdi_15 s> 1)
                    rdi_15 = 1
                
                if (rdi_15 != 0)
                    int32_t rcx_64 = rax_38 - rdi_15
                    
                    if (rcx_64 != r10_4)
                        int16_t* r9_9 = var_f8
                        memmove(&r9_9[sx.q(r10_4)], &r9_9[sx.q(rdi_15 + r10_4)], 
                            (rcx_64 - r10_4) * 2)
                        rax_38 = var_f0_1
                    
                    rax_38 -= rdi_15
                    var_f0_1 = rax_38
                
                int32_t rdi_16 = rax_38 - 1
                
                if (rax_38 == 0)
                    rdi_16 = 0
                
                if (rdi_16 s> 1)
                    rdi_16 = 1
                
                if (rdi_16 != 0)
                    if (rax_38 != rdi_16)
                        int16_t* rcx_70 = var_f8
                        memmove(rcx_70, &rcx_70[sx.q(rdi_16)], (rax_38 - rdi_16) * 2)
                        rax_38 = var_f0_1
                    
                    rax_38 -= rdi_16
                    var_f0_1 = rax_38
        
        int16_t* rsi_8 = var_108
        var_110 = var_100_1
        
        if (var_100_1 != 0 || var_10c != 0)
            sub_1405a4c70(&var_118, var_100_1, var_10c)
            memcpy(var_118, rsi_8, var_100_1 * 2)
            rax_38 = var_f0_1
        else
            var_10c = 0
        
        int16_t* rdx_35 = &data_142d40450
        
        if (rax_38 != 0)
            rdx_35 = var_f8
        
        int64_t* rax_42 = sub_140b58260(&arg_20, rdx_35, 1)
        void* rcx_74 = data_143f35848
        
        if (rcx_74 == 0)
            sub_141cc3750()
            rcx_74 = data_143f35848
        
        sub_141cc6810(rcx_74, &arg_18, *rax_42, 1)
        sub_141cbf4b0(&var_68, &arg_18)
        rdi_6 = var_90_1
        rsi_1 = var_98
    
    if (var_100_1 s> 1)
    label_141cc58d9:
        sub_14060a620(&var_108, &var_a8, nullptr, &var_108, 0, 0)
        int32_t rax_52
        
        if (sub_140a236f0(&var_108, &var_88, 0) == 0)
            rax_52 = var_100_1
        else
            int32_t rax_46 = var_100_1
            int32_t r10_5 = rax_46 - 1
            
            if (rax_46 == 0)
                r10_5 = 0
            
            if (r10_5 - 1 s< 0)
                r10_5 = 0
            else if (r10_5 - 1 s< r10_5)
                r10_5 -= 1
            
            int32_t rdi_19 = rax_46 - 1
            
            if (rax_46 == 0)
                rdi_19 = 0
            
            int32_t rdi_20 = rdi_19 - r10_5
            
            if (rdi_20 s> 1)
                rdi_20 = 1
            
            if (rdi_20 != 0)
                int32_t rcx_82 = rax_46 - rdi_20
                
                if (rcx_82 != r10_5)
                    int16_t* r9_12 = var_108
                    memmove(&r9_12[sx.q(r10_5)], &r9_12[sx.q(rdi_20 + r10_5)], (rcx_82 - r10_5) * 2)
                    rax_46 = var_100_1
                
                var_100_1 = rax_46 - rdi_20
            
            if (sub_140a32a50(&var_108, &var_b8, 0) == 0)
                rax_52 = var_100_1
            else if (sub_140a236f0(&var_108, &var_b8, 0) == 0)
                rax_52 = var_100_1
            else
                rax_52 = var_100_1
                int32_t r10_6 = rax_52 - 1
                
                if (rax_52 == 0)
                    r10_6 = 0
                
                if (r10_6 - 1 s< 0)
                    r10_6 = 0
                else if (r10_6 - 1 s< r10_6)
                    r10_6 -= 1
                
                int32_t rdi_21 = rax_52 - 1
                
                if (rax_52 == 0)
                    rdi_21 = 0
                
                int32_t rdi_22 = rdi_21 - r10_6
                
                if (rdi_22 s> 1)
                    rdi_22 = 1
                
                if (rdi_22 != 0)
                    int32_t rcx_90 = rax_52 - rdi_22
                    
                    if (rcx_90 != r10_6)
                        int16_t* r9_13 = var_108
                        memmove(&r9_13[sx.q(r10_6)], &r9_13[sx.q(rdi_22 + r10_6)], 
                            (rcx_90 - r10_6) * 2)
                        rax_52 = var_100_1
                    
                    rax_52 -= rdi_22
                    var_100_1 = rax_52
                
                if (rax_52 != 0)
                    rbx = zx.q(rax_52 - 1)
                
                if (rbx.d s> 1)
                    rbx = 1
                
                if (rbx.d != 0)
                    if (rax_52 != rbx.d)
                        int16_t* rcx_96 = var_108
                        memmove(rcx_96, &rcx_96[sx.q(rbx.d)], (rax_52 - rbx.d) * 2)
                        rax_52 = var_100_1
                    
                    rax_52 -= rbx.d
                    var_100_1 = rax_52
        
        if (rax_52 != 0)
            r14_1 = var_108
        
        int64_t* rax_56 = sub_140b58260(&arg_20, r14_1, 1)
        void* rcx_98 = data_143f35848
        
        if (rcx_98 == 0)
            sub_141cc3750()
            rcx_98 = data_143f35848
        
        sub_141cc6810(rcx_98, &arg_18, *rax_56, 1)
        sub_141cbf4b0(&var_68, &arg_18)
    else
        int16_t* rcx_76 = var_108
        
        if (rcx_76 != 0)
            sub_140a74f90(rcx_76)
        
        int32_t rcx_77 = var_110
        var_108 = var_118
        var_100_1 = var_10c
        var_110.q = 0
        var_118 = nullptr
        var_100_1 = rcx_77
        
        if (rcx_77 s> 1)
            goto label_141cc58d9
    
    int64_t rcx_100 = var_b8
    
    if (rcx_100 != 0)
        sub_140a74f90(rcx_100)
    
    if (rsi_1 != 0)
        sub_140a74f90(rsi_1)
    
    int16_t* rcx_102 = var_108
    
    if (rcx_102 != 0)
        sub_140a74f90(rcx_102)
    
    int16_t* rcx_103 = var_f8
    
    if (rcx_103 != 0)
        sub_140a74f90(rcx_103)
    
    int16_t* r15_6 = var_a8
    
    if (r15_6 != 0)
        sub_140a74f90(r15_6)
    
    r14 = arg2
    r12 = arg1
    rbx = var_68
    rdi = var_60
    rsi = var_58

int64_t rax_57 = sx.q(r12[1].d)

if (rax_57.d == rdi)
    int64_t* r8_35 = *r12
    void* r9_15 = &r8_35[rax_57]
    
    if (r8_35 == r9_15)
    label_141cc5b4c:
        rdi.b = 0
    else
    label_141cc5b14:
        
        if (rdi == 0)
            rdi.b = 1
        else
            uint64_t rcx_105 = rbx
            int64_t rdx_48 = rbx + (sx.q(rdi) << 3)
            
            if (rbx == rdx_48)
                rdi.b = 1
            else
                do
                    if (*rcx_105 == *r8_35)
                        r8_35 = &r8_35[1]
                        
                        if (r8_35 != r9_15)
                            goto label_141cc5b14
                        
                        goto label_141cc5b4c
                    
                    rcx_105 += 8
                while (rcx_105 != rdx_48)
                
                rdi.b = 1
else
    rdi.b = 1

int16_t* rcx_106 = var_118

if (rcx_106 != 0)
    sub_140a74f90(rcx_106)

int64_t rcx_107 = var_88

if (rcx_107 != 0)
    sub_140a74f90(rcx_107)

int64_t rcx_108 = var_78

if (rcx_108 != 0)
    sub_140a74f90(rcx_108)

if (rsi != 0)
    sub_140a74f90(rsi)

if (rbx != 0)
    sub_140a74f90(rbx)

int64_t rcx_111 = r12[2]

if (rcx_111 != 0)
    sub_140a74f90(rcx_111)

int64_t rcx_112 = *r12

if (rcx_112 != 0)
    sub_140a74f90(rcx_112)

int64_t rcx_113 = *r14

if (rcx_113 != 0)
    sub_140a74f90(rcx_113)

return zx.q(rdi.b)
