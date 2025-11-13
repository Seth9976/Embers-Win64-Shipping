// 函数: agsDriverExtensionsDX12_CreateGraphicsPipelineState
// 地址: 0x142c4f860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 0 && arg3 != 0 && arg5 != 0)
    int64_t* r10_1 = *(arg1 + 0x1b0)
    
    if (r10_1 != 0)
        int64_t* rbx = *(arg1 + 0x1d8)
        int32_t result
        
        if (rbx != 0)
            int32_t rcx_1 = 0
            int64_t var_28 = 1
            int64_t var_18_1 = 0
            int64_t var_20_1 = 0
            
            if (arg2 != 0)
                rcx_1 = *arg2
            
            var_18_1.d = rcx_1 & 1
            result = (*(*rbx + 0x18))(rbx, &var_28, arg3, arg4, arg5)
        else
            result = (*(*r10_1 + 0x50))(r10_1, arg3, arg4)
        
        if (result != 0)
            return 8
        
        return result

return 2
