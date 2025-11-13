// 函数: sub_1420e3860
// 地址: 0x1420e3860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8 = arg1
int32_t rdi = 0
int32_t arg_18 = 0
arg1.b = sub_140b5b8a0(arg1.d, 0) == 0

if ((arg_8:4.d != 0 | arg1.b) != 0)
    int16_t* var_68
    sub_1420e7020(&var_68, &arg_8, arg2)
    int16_t* var_78
    int16_t* r14_1
    
    if (sub_140bace50(&var_68) == 0)
        r14_1 = var_68
    else
        int32_t var_60
        int32_t rbx_2
        
        if (var_60 == 0)
            rbx_2 = 0
        else
            rbx_2 = var_60 - 1
        
        var_78 = nullptr
        int32_t var_6c_1 = 0
        int32_t rdx_1 = 0
        int32_t var_70_1 = 0
        r14_1 = nullptr
        int32_t rsi_1 = 0
        
        if (rbx_2 + 2 s> 0)
            sub_1405947f0(&var_78, rbx_2 + 2)
            rdx_1 = var_70_1
            rsi_1 = var_6c_1
            r14_1 = var_78
        
        int32_t r15_2 = rbx_2 + 2 + rdx_1
        
        if (r15_2 s> rsi_1)
            sub_140594770(&var_78)
            rsi_1 = var_6c_1
            r14_1 = var_78
        
        *r14_1 = 0x2f
        int64_t rbx_3 = sx.q(rbx_2)
        memcpy(&r14_1[1], var_68, rbx_3.d * 2)
        r14_1[rbx_3 + 1] = 0
        int16_t* rcx_5 = var_68
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        var_68 = r14_1
        int32_t var_60_1 = r15_2
        int32_t var_5c_1 = rsi_1
    
    int64_t* rsi_2 = *(arg2 + 0x98)
    void* r15_3 = &rsi_2[sx.q(*(arg2 + 0xa0))]
    
    if (rsi_2 != r15_3)
        do
            void* result = *rsi_2
            int64_t var_58
            char rax_7
            
            if (result != 0)
                rdi |= 1
                
                if ((*(result + 0xba) & 2) == 0)
                    sub_140d30800(result + 0x38, &var_78)
                    int64_t var_48
                    int64_t* rax_4 = sub_140baf760(&var_48, &var_78)
                    int16_t* rdx_6
                    
                    if (rax_4[1].d == 0)
                        rdx_6 = &data_142d40450
                    else
                        rdx_6 = *rax_4
                    
                    void arg_20
                    *(result + 0x138) = *sub_140b58260(&arg_20, rdx_6, 1)
                    int64_t rcx_10 = var_48
                    
                    if (rcx_10 != 0)
                        sub_140a74f90(rcx_10)
                    
                    int16_t* rcx_11 = var_78
                    
                    if (rcx_11 != 0)
                        sub_140a74f90(rcx_11)
                    
                    *(result + 0xba) |= 2
                
                arg_18.q = *(result + 0x138)
                sub_140b63b70(&arg_18, &var_58)
                rax_7 = sub_140a236f0(&var_58, &var_68, 1)
            
            if (result == 0 || rax_7 == 0)
                r14_1.b = 0
            else
                r14_1.b = 1
            
            if ((rdi.b & 1) != 0)
                int64_t rcx_14 = var_58
                rdi &= 0xfffffffe
                
                if (rcx_14 != 0)
                    sub_140a74f90(rcx_14)
            
            if (r14_1.b != 0)
                int16_t* rcx_16 = var_68
                
                if (rcx_16 != 0)
                    sub_140a74f90(rcx_16)
                
                return result
            
            rsi_2 = &rsi_2[1]
        while (rsi_2 != r15_3)
        
        r14_1 = var_68
    
    if (r14_1 != 0)
        sub_140a74f90(r14_1)

return 0
