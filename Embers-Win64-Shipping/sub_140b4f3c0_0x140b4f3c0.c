// 函数: sub_140b4f3c0
// 地址: 0x140b4f3c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* arg_8 = arg1
int64_t r8
r8.b = 1
char rax
int64_t r8_1
rax, r8_1 = sub_140b0f6c0(&arg_8, u"stat")
r8_1.b = 1

if (rax != 0 || sub_140b0f6c0(&arg_8, u"budget") != 0)
    int16_t* rsi_1 = arg_8
    int16_t* var_68 = nullptr
    int32_t rdx_1 = 0
    int32_t var_60_1 = 0
    int32_t rcx_2 = 0
    int32_t var_5c_1 = 0
    int64_t rdi_1 = -1
    
    if (rsi_1 != 0 && *rsi_1 != 0)
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (rsi_1[rbx_1] != 0)
        
        if (rbx_1.d + 1 s> 0)
            sub_1405947f0(&var_68, rbx_1.d + 1)
            rcx_2 = var_5c_1
            rdx_1 = var_60_1
        
        int32_t rax_2 = rdx_1 + rbx_1.d + 1
        int32_t var_60_2 = rax_2
        
        if (rax_2 s> rcx_2)
            sub_140594770(&var_68)
        
        UnDecorator::getReferenceType(var_68, rsi_1, (rbx_1.d + 1) * 2)
    
    int64_t var_48
    sub_140b26200(&var_48, &var_68)
    int16_t* rcx_7 = var_68
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    int32_t var_40
    
    if (var_40 s> 1)
        int32_t rdx_5 = 0
        int16_t* r14_1 = arg_8
        int16_t* rsi_2 = nullptr
        int32_t r15_1 = 0
        var_68 = nullptr
        int32_t var_60_3 = 0
        int32_t var_5c_2 = 0
        int32_t rbx_3
        
        if (r14_1 != 0 && *r14_1 != 0)
            do
                rdi_1 += 1
            while (r14_1[rdi_1] != 0)
            
            if (rdi_1.d + 1 s> 0)
                sub_1405947f0(&var_68, rdi_1.d + 1)
                rdx_5 = var_60_3
                r15_1 = var_5c_2
                rsi_2 = var_68
            
            rbx_3 = rdi_1.d + 1 + rdx_5
            
            if (rbx_3 s> r15_1)
                sub_140594770(&var_68)
                r15_1 = var_5c_2
                rsi_2 = var_68
            
            UnDecorator::getReferenceType(rsi_2, r14_1, (rdi_1.d + 1) * 2)
        
        int16_t* var_58
        int32_t rbx_4
        int16_t* r14_2
        int16_t* r15_2
        
        if (r14_1 == 0 || *r14_1 == 0 || rbx_3 s<= 1)
            r14_2 = nullptr
            rbx_4 = 0
            r15_2 = nullptr
            
            if (rsi_2 != 0)
                sub_140a74f90(rsi_2)
        else
            var_58 = rsi_2
            int32_t var_4c_1 = r15_1
            
            if (rbx_3 s> r15_1)
                sub_1405947f0(&var_58, rbx_3)
            
            sub_140a20ba0(&var_58, 0, 0)
            r14_2 = var_58
            rbx_4 = rbx_3
            r15_2 = r14_2
        
        var_58 = nullptr
        int16_t* rdi_3 = nullptr
        int16_t* rcx_14
        
        if (rbx_4 != 0)
            sub_1405a4c70(&var_58, rbx_4, 0)
            rdi_3 = var_58
            memcpy(rdi_3, r15_2, rbx_4 * 2)
            rcx_14 = rdi_3
        else
            rcx_14 = nullptr
        
        int16_t* const rsi_3 = &data_142d40450
        var_58 = nullptr
        int32_t var_50_2
        var_50_2.q = 0
        int16_t* const rax_3 = &data_142d40450
        
        if (rbx_4 != 0)
            rax_3 = rcx_14
        
        int16_t* const var_70 = rax_3
        sub_140b295a0(&var_70, &var_58, 0)
        
        if (rax != 0)
            int32_t rcx_18 = var_50_2
            
            if (rcx_18 != 0 && rcx_18 - 1 s> 0)
                int16_t* r9_1 = var_58
                
                if (r9_1[sx.q(rcx_18 - 1) - 1] == 0x2b)
                    int32_t rbx_6 = 0 + 1
                    
                    if (rbx_6 s> 1)
                        rbx_6 = 1
                    
                    if (rbx_6 != 0)
                        if (0 + 2 != rbx_6)
                            memmove(&r9_1[sx.q(rcx_18 - 2)], &r9_1[sx.q(rcx_18 - 1)], 
                                (0 + 2 - rbx_6) * 2)
                            rcx_18 = var_50_2
                            r9_1 = var_58
                        
                        rcx_18 -= rbx_6
                        int32_t var_50_3 = rcx_18
                
                if (rcx_18 != 0)
                    rsi_3 = r9_1
                
                sub_140b58260(&var_68, rsi_3, 1)
                void var_78
                void arg_20
                sub_140b50fd0(&var_68, &var_78, &arg_20)
        
        int16_t* rcx_22 = var_58
        
        if (rcx_22 != 0)
            sub_140a74f90(rcx_22)
        
        if (rdi_3 != 0)
            sub_140a74f90(rdi_3)
        
        if (r14_2 != 0)
            sub_140a74f90(r14_2)
    
    int64_t rcx_25 = var_48
    
    if (rcx_25 != 0)
        sub_140a74f90(rcx_25)

return 0
