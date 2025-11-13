// 函数: agsDriverExtensionsDX11_MultiDrawIndexedInstancedIndirectCountIndirect
// 地址: 0x142c4e130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg3 == 0 || arg5 == 0 || arg7 == 0)
    return 2

int32_t rax = *(arg1 + 0x130)

if ((rax.b & 0x20) != 0)
    int32_t result
    
    if (test_bit(rax, 0x15))
        if (arg2 == 0)
            arg2 = *(arg1 + 0x128)
        
        int64_t* rcx = *(arg1 + 0x150)
        int64_t var_18_1 = arg2
        int32_t var_20 = arg7
        int32_t var_28 = arg6
        result = (*(*rcx + 0x58))(rcx, arg3, zx.q(arg4))
        goto label_142c4e1e8
    
    if (arg2 == 0 || arg2 == *(arg1 + 0x128))
        int64_t* rcx_1 = *(arg1 + 0x150)
        int32_t var_20_1 = arg7
        int32_t var_28_1 = arg6
        result = (*(*rcx_1 + 0x38))(rcx_1, arg3, zx.q(arg4))
    label_142c4e1e8:
        
        if (result != 0)
            return 8
        
        return result

return 6
