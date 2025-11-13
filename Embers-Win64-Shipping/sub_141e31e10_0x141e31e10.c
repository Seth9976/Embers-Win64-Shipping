// 函数: sub_141e31e10
// 地址: 0x141e31e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int64_t r12 = *arg1

if (r12 != 0)
    result = sub_140d3c6e0(&arg1[0x21])
    
    if (result != 0)
        int32_t rcx_1 = arg1[0x24].d
        int64_t rsi_1 = sx.q(rcx_1 - 1)
        int64_t var_48
        int64_t var_40
        void* var_38
        
        if (rcx_1 - 1 s>= 0)
            int64_t r14_1 = rsi_1 * 0xb8
            int64_t temp1_1
            
            do
                void* rbx_2 = arg1[0x23] + r14_1
                int64_t rcx_4 = *(sub_140d3c6e0(&arg1[0x21]) + 0x20)
                var_40 = *arg1
                int32_t var_30_1 = arg1[0x22].d
                var_48 = rcx_4
                var_38 = rbx_2
                int64_t* rcx_5 = *(rbx_2 + 0x50)
                (*(*rcx_5 + 0x290))(rcx_5, &var_48)
                r14_1 -= 0xb8
                temp1_1 = rsi_1
                rsi_1 -= 1
            while (temp1_1 - 1 s>= 0)
        
        int32_t i_1 = arg1[0x24].d
        void* rax_4 = arg1[0x23]
        
        if (i_1 != 0)
            int32_t i
            
            do
                *(rax_4 + 0x60) = &data_142e0b890
                *rax_4 = &data_142e0b890
                rax_4 += 0xb8
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        arg1[0x24].d = 0
        
        if (*(arg1 + 0x124) != 0)
            sub_14092fa50(&arg1[0x23], 0)
        
        int64_t* rcx_7 = nullptr
        int64_t* var_58 = nullptr
        int32_t rdx_2 = 0
        int32_t var_50_1 = 0
        
        if (&arg1[1] != &var_58 && arg1[2].d != 0)
            int64_t* r8_1 = arg1[1]
            
            if (r8_1 != 0)
                (*(*r8_1 + 0x40))(r8_1, &var_58)
                rdx_2 = var_50_1
                rcx_7 = var_58
        
        var_40.b = arg1[0x2c].b
        var_48 = r12
        var_38 = nullptr
        int32_t var_30_2 = 0
        
        if (rdx_2 != 0 && rcx_7 != 0)
            (*(*rcx_7 + 0x40))(rcx_7, &var_38)
        
        sub_140745b20(&var_58)
        sub_141e0a7f0(result, &var_48)
        sub_140745b20(&var_38)
        result = sub_141df5a80(result, arg1)
    
    sub_141defe60(&arg1[0x26], 0)
    sub_141defc80(&arg1[0x26], 0)
    *arg1 = 0

return result
