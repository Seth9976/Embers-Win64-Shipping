// 函数: sub_14098a3f0
// 地址: 0x14098a3f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = arg2
*arg2 = 0

if (arg3[1].d != 0)
    int64_t* rcx = *arg3
    
    if (rcx != 0)
        int64_t* var_28 = nullptr
        int32_t var_20_1 = 0
        
        if (arg3 != &var_28)
            (*(*rcx + 0x40))(rcx, &var_28)
        
        arg2.b = 1
        sub_140599630(arg1 + 8, arg2.b)
        int64_t rbx_1 = 0
        
        if (var_20_1 != 0)
            int64_t* rcx_2 = var_28
            void arg_8
            
            if (rcx_2 != 0)
                rbx_1 = *(*(*rcx_2 + 0x30))(rcx_2, &arg_8)
        
        int64_t rbp_1 = sx.q(*(arg1 + 0x10))
        int32_t rax_4 = (rbp_1 + 1).d
        *(arg1 + 0x10) = rax_4
        
        if (rax_4 s> *(arg1 + 0x14))
            sub_1405a4f90(arg1 + 8)
        
        *result = rbx_1
        int64_t rcx_6 = (rbp_1 << 4) + *(arg1 + 8)
        *rcx_6 = 0
        *rcx_6 = var_28
        var_28 = nullptr
        *(rcx_6 + 8) = var_20_1
        int64_t* rcx_7 = var_28
        int32_t var_20_2 = 0
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)

sub_140745b20(arg3)
return result
