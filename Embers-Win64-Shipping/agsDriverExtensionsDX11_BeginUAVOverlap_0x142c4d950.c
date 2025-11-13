// 函数: agsDriverExtensionsDX11_BeginUAVOverlap
// 地址: 0x142c4d950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return zx.q((arg1 + 2).d)

int64_t* r8 = *(arg1 + 0x140)

if (r8 != 0)
    int32_t result
    
    if ((*(arg1 + 0x130) & 0x400000) != 0)
        if (arg2 == 0)
            arg2 = *(arg1 + 0x128)
        
        result = (*(*r8 + 0x30))(r8, arg2)
        goto label_142c4d9a7
    
    if (arg2 == 0 || arg2 == *(arg1 + 0x128))
        result = (*(*r8 + 0x18))(r8)
    label_142c4d9a7:
        
        if (result != 0)
            return 8
        
        return result

return 6
