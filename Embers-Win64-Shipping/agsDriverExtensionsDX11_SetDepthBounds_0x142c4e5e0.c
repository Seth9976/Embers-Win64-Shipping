// 函数: agsDriverExtensionsDX11_SetDepthBounds
// 地址: 0x142c4e5e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm2
zmm2.o = arg4
int64_t r9 = arg2

if (arg1 == 0)
    return zx.q((arg1 + 2).d)

int64_t* r8 = *(arg1 + 0x148)

if (r8 != 0)
    int32_t result
    
    if ((*(arg1 + 0x130) & 0x800000) != 0)
        if (arg2 == 0)
            r9 = *(arg1 + 0x128)
        
        int64_t var_18_1 = r9
        result = (*(*r8 + 0x28))(r8, zx.q(arg3))
        goto label_142c4e65a
    
    if (arg2 == 0 || arg2 == *(arg1 + 0x128))
        result = (*(*r8 + 0x18))(r8, zx.q(arg3))
    label_142c4e65a:
        
        if (result != 0)
            return 8
        
        return result

return 6
