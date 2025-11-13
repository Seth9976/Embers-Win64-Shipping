// 函数: png_set_background_fixed
// 地址: 0x1403c5340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

if (arg3 == 0)
    return png_warning(arg1, "Application must supply a known background gamma") __tailcall

int32_t r11_1 = 0x80 | *(arg1 + 0x15c)
*(arg1 + 0x15c) = r11_1
*(arg1 + 0x278) = arg2[1].w
*(arg1 + 0x270) = *arg2
*(arg1 + 0x26c) = arg5
*(arg1 + 0x268) = arg3.b
int32_t rax_3
rax_3.b = arg4 != 0
*(arg1 + 0x15c) = rax_3 << 8 | r11_1
