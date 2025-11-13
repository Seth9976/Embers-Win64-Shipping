// 函数: sub_14240f580
// 地址: 0x14240f580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0 || ((zx.q(*(*(arg3 + 8) + 0x10)) u>> 0xf).b & 1) == 0)
    sub_140bdce70(arg1, arg2, arg3)
    return arg2

int16_t* var_38
sub_140b63b70(arg3 + 0x28, &var_38)
int32_t var_30
int32_t r15 = var_30

if (r15 != 0)
    int32_t rsi_1 = r15 - 1
    
    if (rsi_1 s> 0x23)
        int16_t* r12_1 = var_38
        
        if (rsi_1 - 0x21 s< 0)
            rsi_1 = 0
        else if (rsi_1 - 0x21 s< rsi_1)
            rsi_1 -= 0x21
        
        int32_t var_40_1 = 0
        int16_t* rbx_1 = nullptr
        int16_t* var_48 = nullptr
        int32_t rcx_1 = 0
        int32_t var_3c_1 = 0
        int32_t r14_1 = 0
        
        if (r12_1 != 0 && *var_38 != 0 && rsi_1 s> 0)
            if (rsi_1 + 1 s> 0)
                sub_1405947f0(&var_48, rsi_1 + 1)
                rcx_1 = var_3c_1
                r14_1 = var_40_1
                rbx_1 = var_48
            
            r14_1 = r14_1 + 1 + rsi_1
            
            if (r14_1 s> rcx_1)
                sub_140594770(&var_48)
                rbx_1 = var_48
            
            UnDecorator::getReferenceType(rbx_1, r12_1, rsi_1 * 2)
            rbx_1[sx.q(r14_1) - 1] = 0
            r15 = var_30
        
        int16_t* rcx_5 = &rbx_1[sx.q(r14_1)]
        
        while (rcx_5 != rbx_1)
            rcx_5 -= 2
            
            if (*rcx_5 == 0x5f)
                int32_t rcx_8 = ((rcx_5 - rbx_1) s>> 1).d
                
                if (rcx_8 s< 1)
                    goto label_14240f6a1
                
                *arg2 = 0
                int32_t rsi_2 = r14_1 - 1
                arg2[1] = 0
                
                if (r14_1 == 0)
                    rsi_2 = 0
                
                int64_t r8_2 = sx.q(rcx_8)
                int32_t rdx_4 = rsi_2
                
                if (rsi_2 s> 0)
                    rdx_4 = 0
                
                int64_t r9_3 = sx.q(rdx_4)
                
                if (r8_2 s< r9_3)
                    rsi_2 = rdx_4
                else if (r8_2 s< sx.q(rsi_2))
                    rsi_2 = rcx_8
                
                var_48 = nullptr
                int16_t* const rax_7 = &data_142d40450
                var_40_1.q = 0
                
                if (r14_1 != 0)
                    rax_7 = rbx_1
                
                int16_t* r14_3 = nullptr
                int32_t rsi_3 = rsi_2 - rdx_4
                int32_t r15_1 = 0
                int32_t r12_2 = 0
                void* r13_1 = &rax_7[r9_3]
                
                if (r13_1 != 0 && *r13_1 != 0 && rsi_3 s> 0)
                    if (rsi_3 + 1 s> 0)
                        sub_1405947f0(&var_48, rsi_3 + 1)
                        r12_2 = var_3c_1
                        r15_1 = var_40_1
                        r14_3 = var_48
                    
                    r15_1 = r15_1 + 1 + rsi_3
                    
                    if (r15_1 s> r12_2)
                        sub_140594770(&var_48)
                        r12_2 = var_3c_1
                        r14_3 = var_48
                    
                    UnDecorator::getReferenceType(r14_3, r13_1, rsi_3 * 2)
                    r14_3[sx.q(r15_1) - 1] = 0
                
                if (arg2 != &var_48)
                    int64_t rcx_12 = *arg2
                    
                    if (rcx_12 != 0)
                        sub_140a74f90(rcx_12)
                    
                    *arg2 = r14_3
                    arg2[1].d = r15_1
                    *(arg2 + 0xc) = r12_2
                else if (r14_3 != 0)
                    sub_140a74f90(r14_3)
                
                if (rbx_1 != 0)
                    sub_140a74f90(rbx_1)
                
                goto label_14240f813
        
    label_14240f6a1:
        
        if (rbx_1 != 0)
            sub_140a74f90(rbx_1)
            r15 = var_30

int16_t* rbx_2 = var_38
*arg2 = 0
arg2[1].d = r15

if (r15 != 0)
    sub_1405a4c70(arg2, r15, 0)
    memcpy(*arg2, rbx_2, r15 * 2)
else
    *(arg2 + 0xc) = 0

label_14240f813:
int16_t* rcx_17 = var_38

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

return arg2
