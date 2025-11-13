// 函数: sub_140ba9d00
// 地址: 0x140ba9d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = arg2

if (data_143de5660 s> 0)
    int32_t rdi_1 = arg2[1].d
    int32_t rsi_1 = 0
    int64_t rbx_1 = *arg2
    int64_t r13
    r13.b = 0
    int16_t* var_68 = nullptr
    int16_t* r9_1 = nullptr
    int32_t var_60_1 = rdi_1
    int32_t var_5c
    
    if (rdi_1 != 0)
        sub_1405a4c70(&var_68, rdi_1, 0)
        memcpy(var_68, rbx_1, rdi_1 * 2)
        r9_1 = var_68
        rdi_1 = var_60_1
    else
        var_5c = 0
    
    int64_t* r12_1 = nullptr
    int32_t r14_1 = 0
    int16_t* rbx_2 = r9_1
    void* rcx_2 = &r9_1[sx.q(rdi_1)]
    int64_t* var_58
    
    if (r9_1 != rcx_2)
        do
            if (*rbx_2 == 0x2e)
                int32_t rbx_4 = ((rbx_2 - r9_1) s>> 1).d
                
                if (rbx_4 != 0xffffffff)
                    if (rdi_1 != 0)
                        rsi_1 = rdi_1 - 1
                    
                    int32_t rcx_3
                    
                    if (rbx_4 + 1 s>= 0)
                        rcx_3 = rsi_1
                        
                        if (rbx_4 + 1 s< rsi_1)
                            rcx_3 = rbx_4 + 1
                    else
                        rcx_3 = 0
                    
                    int64_t r8_3 = sx.q(rcx_3)
                    
                    if (sx.q(rbx_4 + 1) + 0x7fffffff s< r8_3)
                        rsi_1 = rcx_3
                    else if (sx.q(rbx_4 + 1) + 0x7fffffff s< sx.q(rsi_1))
                        rsi_1 = rbx_4 - -0x80000000
                    
                    var_58 = nullptr
                    int16_t* rax_4 = &data_142d40450
                    int32_t var_50_1 = 0
                    
                    if (rdi_1 != 0)
                        rax_4 = r9_1
                    
                    r12_1 = nullptr
                    int32_t rsi_2 = rsi_1 - rcx_3
                    r14_1 = 0
                    void* r15_1 = &rax_4[r8_3]
                    int32_t rax_5 = 0
                    int32_t var_4c_1 = 0
                    
                    if (r15_1 != 0 && *r15_1 != 0 && rsi_2 s> 0)
                        if (rsi_2 + 1 s> 0)
                            sub_1405947f0(&var_58, rsi_2 + 1)
                            rax_5 = var_4c_1
                            r14_1 = var_50_1
                            r12_1 = var_58
                        
                        r14_1 = r14_1 + 1 + rsi_2
                        
                        if (r14_1 s> rax_5)
                            sub_140594770(&var_58)
                            r12_1 = var_58
                        
                        UnDecorator::getReferenceType(r12_1, r15_1, rsi_2 * 2)
                        *(r12_1 + (sx.q(r14_1) << 1) - 2) = 0
                        rdi_1 = var_60_1
                        r9_1 = var_68
                    
                    int32_t rax_7 = rdi_1 - 1
                    
                    if (rdi_1 == 0)
                        rax_7 = 0
                    
                    int32_t r10_1
                    
                    if (rbx_4 s>= 0)
                        r10_1 = rax_7
                        
                        if (rbx_4 s< rax_7)
                            r10_1 = rbx_4
                    else
                        r10_1 = 0
                    
                    int32_t rax_8 = rax_7 - r10_1
                    int32_t rbx_5 = rdi_1 - 1
                    
                    if (rdi_1 == 0)
                        rbx_5 = 0
                    
                    int32_t rbx_6 = rbx_5 - r10_1
                    
                    if (rax_8 s>= 0)
                        if (rax_8 s< rbx_6)
                            rbx_6 = rax_8
                        
                        if (rbx_6 != 0)
                            int32_t rax_10 = rdi_1 - rbx_6
                            
                            if (rax_10 != r10_1)
                                memmove(&r9_1[sx.q(r10_1)], &r9_1[sx.q(rbx_6 + r10_1)], 
                                    (rax_10 - r10_1) * 2)
                                r9_1 = var_68
                                rdi_1 = var_60_1
                            
                            var_60_1 = rdi_1 - rbx_6
                
                break
            
            rbx_2 = &rbx_2[1]
        while (rbx_2 != rcx_2)
    
    int64_t* rbx_7 = data_143de5658
    void* r15_4 = &rbx_7[sx.q(data_143de5660) * 2]
    
    if (rbx_7 != r15_4)
        do
            int64_t* rax_15 = nullptr
            var_58 = nullptr
            int32_t rdx_8 = 0
            int32_t var_50_3 = 0
            
            if (rbx_7 != &var_58 && rbx_7[1].d != 0)
                int64_t* rcx_9 = *rbx_7
                
                if (rcx_9 != 0)
                    (*(*rcx_9 + 0x40))(rcx_9, &var_58)
                    rdx_8 = var_50_3
                    rax_15 = var_58
            
            int64_t var_48 = 0
            int32_t var_40_1 = 0
            int64_t* rcx_10 = nullptr
            
            if (rdx_8 != 0)
                rcx_10 = rax_15
            
            char rax_17 = (*(*rcx_10 + 0x48))(rcx_10, &var_68, &var_48)
            int64_t rdi_3 = var_48
            
            if (rax_17 != 0)
                var_60_1 = var_40_1
                
                if (var_40_1 != 0 || var_5c != 0)
                    sub_1405a4c70(&var_68, var_40_1, var_5c)
                    memcpy(var_68, rdi_3, var_40_1 * 2)
                    rdi_3 = var_48
                else
                    var_5c = 0
                
                r13.b = 1
            
            if (rdi_3 != 0)
                sub_140a74f90(rdi_3)
            
            int64_t* rax_19
            
            if (var_50_3 == 0)
                rax_19 = var_58
            label_140baa007:
                
                if (rax_19 != 0)
                    sub_140a74f90(rax_19)
            else
                int64_t* rcx_14 = var_58
                
                if (rcx_14 != 0)
                    (*(*rcx_14 + 0x38))(rcx_14, 0)
                    rax_19 = var_58
                    
                    if (rax_19 != 0)
                        rax_19 = sub_140a84c80(rax_19, 0, 0)
                        var_58 = rax_19
                    
                    int32_t var_50_4 = 0
                    goto label_140baa007
            rbx_7 = &rbx_7[2]
        while (rbx_7 != r15_4)
        
        if (r13.b != 0)
            if (r14_1 != 0 && r14_1 != 1)
                int16_t* rdx_13 = var_68
                int16_t* rcx_17 = &rdx_13[sx.q(var_60_1)]
                
                while (rcx_17 != rdx_13)
                    rcx_17 -= 2
                    
                    if (*rcx_17 == 0x2f)
                        int32_t rcx_19 = ((rcx_17 - rdx_13) s>> 1).d
                        
                        if (rcx_19 != 0xffffffff)
                            int32_t rbx_9
                            
                            if (var_60_1 == 0)
                                rbx_9 = 0
                            else
                                rbx_9 = var_60_1 - 1
                            
                            int32_t rcx_20
                            
                            if (rcx_19 + 1 s>= 0)
                                rcx_20 = rbx_9
                                
                                if (rcx_19 + 1 s< rbx_9)
                                    rcx_20 = rcx_19 + 1
                            else
                                rcx_20 = 0
                            
                            int64_t r9_2 = sx.q(rcx_20)
                            
                            if (sx.q(rcx_19 + 1) + 0x7fffffff s< r9_2)
                                rbx_9 = rcx_20
                            else if (sx.q(rcx_19 + 1) + 0x7fffffff s< sx.q(rbx_9))
                                rbx_9 = rcx_19 - -0x80000000
                            
                            int16_t* rax_24 = &data_142d40450
                            
                            if (var_60_1 != 0)
                                rax_24 = rdx_13
                            
                            int32_t rbx_10 = rbx_9 - rcx_20
                            var_58 = nullptr
                            int64_t* rdi_4 = nullptr
                            int32_t var_50_5 = 0
                            r14_1 = 0
                            void* rsi_4 = &rax_24[r9_2]
                            int32_t rax_25 = 0
                            int32_t var_4c_2 = 0
                            
                            if (rsi_4 != 0 && *rsi_4 != 0 && rbx_10 s> 0)
                                if (rbx_10 + 1 s> 0)
                                    sub_1405947f0(&var_58, rbx_10 + 1)
                                    rax_25 = var_4c_2
                                    r14_1 = var_50_5
                                    rdi_4 = var_58
                                
                                r14_1 = r14_1 + 1 + rbx_10
                                
                                if (r14_1 s> rax_25)
                                    sub_140594770(&var_58)
                                    rdi_4 = var_58
                                
                                UnDecorator::getReferenceType(rdi_4, rsi_4, rbx_10 * 2)
                                *(rdi_4 + (sx.q(r14_1) << 1) - 2) = 0
                            
                            if (r12_1 != 0)
                                sub_140a74f90(r12_1)
                            
                            r12_1 = rdi_4
                        
                        break
                
                sub_140a20ba0(&var_68, &data_142d404c4, 1)
                int32_t r8_16 = r14_1 - 1
                
                if (r14_1 == 0)
                    r8_16 = 0
                
                sub_140a20ba0(&var_68, r12_1, r8_16)
            
            int16_t* rax_27 = var_68
            var_68 = nullptr
            *arg1 = rax_27
            arg1[1].d = var_60_1
            *(arg1 + 0xc) = var_5c
            var_60_1.q = 0
            
            if (r12_1 != 0)
                sub_140a74f90(r12_1)
                int16_t* rcx_28 = var_68
                
                if (rcx_28 != 0)
                    sub_140a74f90(rcx_28)
            
            return arg1
        
        r9_1 = var_68
    
    if (r12_1 != 0)
        sub_140a74f90(r12_1)
        r9_1 = var_68
    
    if (r9_1 != 0)
        sub_140a74f90(r9_1)
    
    rax = arg2

sub_140596d10(arg1, rax)
return arg1
