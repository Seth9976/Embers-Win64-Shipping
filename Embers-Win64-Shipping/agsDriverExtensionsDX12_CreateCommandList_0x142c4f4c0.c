// 函数: agsDriverExtensionsDX12_CreateCommandList
// 地址: 0x142c4f4c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 0 && arg4 != 0)
    int64_t* rcx = *(arg1 + 0x1b0)
    
    if (rcx != 0)
        if ((*(*rcx + 0x60))(rcx) == 0 && arg7 != 0)
            if (arg3 != 0)
                return 0
            
            int64_t* rcx_1 = *(arg1 + 0x1c0)
            void* rdi_1 = *arg7
            int64_t arg_8 = 0
            
            if ((*(*rcx_1 + 0x18))(rcx_1, rdi_1, &data_1436b0dd8, &arg_8, arg5, arg6, arg7) == 0)
                int64_t rax_5 = arg_8
                
                if (rax_5 != 0)
                    void* var_18 = rdi_1
                    int64_t var_10_1 = rax_5
                    int64_t* rax_6 = sub_142c4e830(arg1 + 0x1e0, &var_18)
                    sub_142c4eaf0(arg1 + 0x1e0, &var_18, false, &rax_6[4], rax_6)
                    return 0
        
        return 8

return 2
