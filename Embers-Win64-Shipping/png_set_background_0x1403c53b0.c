// 函数: png_set_background
// 地址: 0x1403c53b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = sub_1403c0150(arg1, arg5, "png_set_background")

if (arg1 != 0)
    if (arg3 == 0)
        return png_warning(arg1, "Application must supply a known background gamma") __tailcall
    
    int32_t rcx = 0x80 | *(arg1 + 0x15c)
    *(arg1 + 0x15c) = rcx
    *(arg1 + 0x278) = arg2[1].w
    *(arg1 + 0x270) = *arg2
    *(arg1 + 0x26c) = result
    *(arg1 + 0x268) = arg3.b
    int32_t rax
    rax.b = arg4 != 0
    result = rax << 8 | rcx
    *(arg1 + 0x15c) = result

return result
