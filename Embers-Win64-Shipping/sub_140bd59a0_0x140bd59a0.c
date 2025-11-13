// 函数: sub_140bd59a0
// 地址: 0x140bd59a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg1, 0, 0x18)

if (arg2 != 0)
    int64_t rax_1 = *(arg2 + 0x18)
    void* rbx_1 = *(arg2 + 0x20)
    
    if (rbx_1 == 0)
        arg1[2] = rax_1
        return arg1
    
    int32_t rcx = 0
    int32_t rdx = 0
    int32_t var_30_1 = 0
    int32_t var_2c_1 = 0
    int16_t* var_38 = nullptr
    *arg1 = rax_1
    int64_t arg_8
    
    while (true)
        void* rbp_1 = *(rbx_1 + 0x20)
        
        if (rbp_1 == 0)
            break
        
        if (rcx s> 1)
            int32_t rsi_1 = rcx - 1
            
            if (rcx s<= 0)
                rsi_1 = 0
            
            int32_t rax_3
            rax_3.b = rcx s<= 0
            int32_t rax_5 = rax_3 + 1 + rcx
            var_30_1 = rax_5
            
            if (rax_5 s> rdx)
                sub_140594770(&var_38)
            
            int64_t rcx_2 = sx.q(rsi_1)
            var_38[rcx_2] = 0x2e
            var_38[rcx_2 + 1] = 0
        
        arg_8 = *(rbx_1 + 0x18)
        int64_t var_28
        sub_140b63b70(&arg_8, &var_28)
        int32_t var_20
        int32_t r8_2
        
        if (var_20 == 0)
            r8_2 = 0
        else
            r8_2 = var_20 - 1
        
        sub_140a20ba0(&var_38, var_28, r8_2)
        int64_t rcx_5 = var_28
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        rdx = var_2c_1
        rbx_1 = rbp_1
        rcx = var_30_1
    
    int16_t* const rdx_4 = &data_142d40450
    
    if (rcx != 0)
        rdx_4 = var_38
    
    arg1[1] = *sub_140b58260(&arg_8, rdx_4, 1)
    int16_t* rcx_8 = var_38
    arg1[2] = *(rbx_1 + 0x18)
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)

return arg1
