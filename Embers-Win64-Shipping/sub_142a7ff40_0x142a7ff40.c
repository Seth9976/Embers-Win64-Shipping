// 函数: sub_142a7ff40
// 地址: 0x142a7ff40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r11_1 = &arg1[0x3f + sx.q(*(arg1 + 0x1f4)) * 2]
int64_t rdi = sx.q(arg2)
uint64_t result = *(*arg1 + 0x70)

if (zx.d(*(result + rdi)) - 0x13 u> 3)
    *(r11_1 + 6) = *(r11_1 + 4)
    uint32_t r8 = zx.d(arg4)
    result = zx.q(arg3)
    
    if ((zx.d(arg4) & 0xffffff7f) u<= (zx.d(arg3) & 0xffffff7f))
        r8 = result.d
    
    *(r11_1 + 8) = arg4
    int32_t r8_1 = r8 & 1
    *r11_1 = rdi.d
    *(r11_1 + 0xa) = r8_1.b
    *(r11_1 + 9) = r8_1.b
    *(r11_1 + 0xc) = r8_1

return result
