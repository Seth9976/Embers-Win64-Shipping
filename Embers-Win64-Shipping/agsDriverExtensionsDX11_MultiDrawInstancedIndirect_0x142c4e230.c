// 函数: agsDriverExtensionsDX11_MultiDrawInstancedIndirect
// 地址: 0x142c4e230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg3 == 0 || arg4 == 0 || arg6 == 0)
    return 2

int32_t rax = *(arg1 + 0x130)

if ((rax.b & 0x10) != 0)
    int32_t result
    
    if (test_bit(rax, 0x15))
        if (arg2 == 0)
            arg2 = *(arg1 + 0x128)
        
        int64_t* rcx = *(arg1 + 0x150)
        result = (*(*rcx + 0x40))(rcx, zx.q(arg3), arg4, zx.q(arg5), arg6, arg2)
        goto label_142c4e2cd
    
    if (arg2 == 0 || arg2 == *(arg1 + 0x128))
        int64_t* rcx_1 = *(arg1 + 0x150)
        result = (*(*rcx_1 + 0x20))(rcx_1, zx.q(arg3), arg4, zx.q(arg5), arg6)
    label_142c4e2cd:
        
        if (result != 0)
            return 8
        
        return result

return 6
