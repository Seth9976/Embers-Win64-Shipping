// 函数: sub_140f7acf0
// 地址: 0x140f7acf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r13 = arg1
int64_t* rcx = *arg1
int32_t result = (**rcx)(rcx)

if (result.b == 0)
    int32_t rbx_1 = arg2[1].d
    result = rbx_1 - 1
    
    if (rbx_1 == 0)
        result = 0
    
    if (result != 0)
        int64_t rdi_1 = *arg2
        int16_t* var_98 = nullptr
        int32_t var_90_1 = rbx_1
        
        if (rbx_1 != 0)
            sub_1405a4c70(&var_98, rbx_1, 0)
            memcpy(var_98, rdi_1, rbx_1 * 2)
        else
            int32_t var_8c_1 = 0
        
        int64_t* rcx_3 = *r13
        char rax_2 = (*(*rcx_3 + 0x10))(rcx_3)
        int64_t r10_1 = sx.q(var_90_1)
        int32_t arg_18
        int32_t arg_20
        uint32_t rsi_1
        
        if (r10_1.d != 0)
            int16_t* r9_1 = var_98
            arg_18 = 0
            int32_t r13_1 = 0
            int32_t rdi_2 = 0
            char r14_1 = 1
            int16_t r8_3 = *r9_1
            
            if ((0xffe0 & r8_3) == 0 && r8_3 != 9 && rax_2 == 0)
                int32_t rax_4
                rax_4.b = r8_3 == 0x2029
                bool rdx_2 = zx.d(r8_3) - 0xa u<= 3 | rax_4.b
                
                if (r8_3 == 0x2028)
                    rdx_2 = true
                
                rax_4.b = r8_3 == 0x85
                
                if ((rdx_2 | rax_4.b) != 0)
                    r14_1 = 0
            
            int64_t rbx_2 = 0
            
            do
                int32_t r10_2 = rdi_2
                arg_20 = rdi_2
                rdi_2 += 1
                rbx_2 += 1
                
                if (rbx_2 s< r10_1)
                    do
                        int16_t rax_5 = r9_1[rbx_2]
                        
                        if ((0xffe0 & rax_5) != 0 || rax_5 == 9 || rax_2 != 0)
                            rax_5.b = 1
                        else
                            int32_t rcx_6
                            rcx_6.b = rax_5 == 0x2029
                            bool rcx_7 = zx.d(rax_5) - 0xa u<= 3 | rcx_6.b
                            
                            if (rax_5 == 0x2028)
                                rcx_7 = true
                            
                            rax_5.b = rax_5 == 0x85
                            
                            if ((rcx_7 | rax_5.b) == 0)
                                rax_5.b = 1
                            else
                                rax_5.b = 0
                        
                        if (r14_1 != rax_5.b)
                            break
                        
                        rdi_2 += 1
                        rbx_2 += 1
                    while (rbx_2 s< r10_1)
                    
                    r13_1 = arg_18
                    r10_2 = arg_20
                
                rsi_1 = rdi_2 - r10_2
                
                if (r14_1 != 0)
                    if (r13_1 != r10_2)
                        memmove(&r9_1[sx.q(r13_1)], &r9_1[sx.q(r10_2)], rsi_1 * 2)
                        r9_1 = var_98
                    
                    r13_1 += rsi_1
                    arg_18 = r13_1
                
                r14_1 ^= 1
            while (rbx_2 s< r10_1)
            
            var_90_1 = r13_1
            r13 = arg1
        
        int32_t rdi_3 = 0
        int64_t* var_70 = nullptr
        int32_t var_68_1 = 0
        int32_t r9_2 = sub_140a21e00(&var_98, &var_70)
        char rax_8
        char rdx_5
        uint32_t r8_6
        rax_8, rdx_5, r8_6 = sub_140f6a470(r13)
        
        if (rax_8 != 0)
            rdx_5, r8_6, r9_2 = sub_140f74180(r13)
        
        int64_t* r15_2 = var_70
        rsi_1.b = 1
        void* r14_2 = &r15_2[sx.q(var_68_1)]
        void* var_48_1 = r14_2
        
        if (r15_2 != r14_2)
            void* r12_2 = &r13[0xf2]
            
            do
                int64_t var_a8
                
                if (rsi_1.b == 0)
                    int32_t rcx_12
                    rcx_12.b = *(r12_2 + 8) == 1
                    int32_t var_78 = *r12_2
                    int32_t rax_11 = 0
                    
                    if (rcx_12 + *(r12_2 + 4) s>= 0)
                        rax_11 = rcx_12 + *(r12_2 + 4)
                    
                    int32_t var_74_1 = rax_11
                    char rax_12
                    int64_t zmm0_1
                    rax_12, r9_2, zmm0_1 = sub_140f18650(r13[9], &var_78, r8_6)
                    
                    if (rax_12 != 0)
                        int32_t var_5c_1 = 0
                        arg_18.q = (var_78 + 1).q
                        r9_2 = sub_140f8af60(r12_2, r13[9], &arg_18, false, zmm0_1, var_a8.d)
                
                int64_t rax_16 = sx.q(*r15_2)
                rsi_1.b = 0
                int32_t r8_8 = *(r15_2 + 4)
                arg_18.b = 0
                int64_t var_88 = 0
                int32_t var_80_1 = 0
                int32_t rax_20
                
                if (r8_8 - rax_16.d s< 0)
                    rax_20 = 0
                else
                    r9_2 = var_90_1
                    int32_t rbx_3 = r9_2 - 1
                    
                    if (r9_2 == 0)
                        rbx_3 = 0
                    
                    int32_t rcx_16
                    
                    if (rax_16.d s>= 0)
                        rcx_16 = rbx_3
                        
                        if (rax_16.d s< rbx_3)
                            rcx_16 = rax_16.d
                    else
                        rcx_16 = 0
                    
                    int64_t r10_3 = sx.q(rcx_16)
                    int64_t rdx_9 = rax_16 + sx.q(r8_8 - rax_16.d)
                    
                    if (rdx_9 s< r10_3)
                        rbx_3 = rcx_16
                    else if (rdx_9 s< sx.q(rbx_3))
                        rbx_3 = rdx_9.d
                    
                    var_a8 = 0
                    int16_t* rax_19 = &data_142d40450
                    int64_t var_a0_1 = 0
                    
                    if (r9_2 != 0)
                        rax_19 = var_98
                    
                    int64_t rsi_3 = 0
                    int32_t rbx_4 = rbx_3 - rcx_16
                    void* r13_2 = &rax_19[r10_3]
                    rax_20 = 0
                    int32_t r14_3 = 0
                    
                    if (r13_2 != 0 && *r13_2 != 0 && rbx_4 s> 0)
                        if (rbx_4 + 1 s> 0)
                            sub_1405947f0(&var_a8, rbx_4 + 1)
                            r14_3 = var_a0_1:4.d
                            rdi_3 = var_a0_1.d
                            rsi_3 = var_a8
                        
                        rdi_3 = rdi_3 + 1 + rbx_4
                        var_a0_1.d = rdi_3
                        
                        if (rdi_3 s> r14_3)
                            sub_140594770(&var_a8)
                            r14_3 = var_a0_1:4.d
                            rdi_3 = var_a0_1.d
                            rsi_3 = var_a8
                        
                        r9_2 = UnDecorator::getReferenceType(rsi_3, r13_2, rbx_4 * 2)
                        *(rsi_3 + (sx.q(rdi_3) << 1) - 2) = 0
                        int64_t rcx_20 = var_88
                        
                        if (rcx_20 != 0)
                            r9_2 = sub_140a74f90(rcx_20)
                        
                        rax_20 = 0
                    
                    r13 = arg1
                    var_88 = rsi_3
                    rsi_1 = zx.d(arg_18.b)
                    var_80_1 = r14_3
                    r14_2 = var_48_1
                    var_a8 = 0
                    var_80_1 = rdi_3
                    int64_t var_a0_2 = 0
                
                bool cond:11_1 = *(r12_2 + 8) == 1
                int64_t rdi_5 = sx.q(*r12_2)
                arg_20 = rdi_5.d
                int32_t rcx_21
                rcx_21.b = cond:11_1
                
                if (rcx_21 + *(r12_2 + 4) s>= 0)
                    rax_20 = rcx_21 + *(r12_2 + 4)
                
                int64_t* rcx_23 = r13[9]
                int64_t rbx_5 = rcx_23[3]
                int64_t zmm0_2 = sub_140f069d0(rcx_23, &arg_20, &var_88, r9_2)
                rdi_3 = 0
                int32_t rcx_25 = *(*(rdi_5 * 0x70 + rbx_5) + 8)
                int32_t r8_13 = rcx_25 - 1
                
                if (rcx_25 == 0)
                    r8_13 = 0
                
                int32_t rcx_27
                
                if (var_80_1 == 0)
                    rcx_27 = 0
                else
                    rcx_27 = var_80_1 - 1
                
                int32_t rcx_28 = rcx_27 + rax_20
                int64_t r9_3 = sx.q(arg_20)
                void* r11_1 = r13[9]
                
                if (rcx_28 s<= r8_13)
                    r8_13 = rcx_28
                
                int32_t var_54_1 = r8_13
                bool r10_4 = false
                int64_t rax_23 = r9_3.d.q
                arg_18.q = rax_23
                
                if (r8_13 s> 0)
                    int32_t rcx_30 = *(*(r9_3 * 0x70 + *(r11_1 + 0x18)) + 8)
                    int32_t rdx_16 = rcx_30 - 1
                    
                    if (rcx_30 == 0)
                        rdx_16 = 0
                    
                    if (rdx_16 == r8_13)
                        uint32_t rax_24 = (rax_23 u>> 0x20).d
                        int32_t rcx_31 = 0
                        r10_4 = true
                        
                        if (rax_24 - 1 s>= 0)
                            rcx_31 = rax_24 - 1
                        
                        int32_t var_4c_1 = rcx_31
                        arg_18.q = r9_3.d.q
                
                rdx_5, r8_6, r9_2 = sub_140f8af60(r12_2, r11_1, &arg_18, r10_4, zmm0_2, var_a8.d)
                int64_t rcx_33 = var_88
                
                if (rcx_33 != 0)
                    rdx_5, r8_6, r9_2 = sub_140a74f90(rcx_33)
                
                r15_2 = &r15_2[1]
            while (r15_2 != r14_2)
        
        result = sub_140f8fc70(r13, rdx_5, r8_6)
        int64_t* rcx_35 = var_70
        
        if (rcx_35 != 0)
            result = sub_140a74f90(rcx_35)
        
        int16_t* rcx_36 = var_98
        
        if (rcx_36 != 0)
            return sub_140a74f90(rcx_36)

return result
