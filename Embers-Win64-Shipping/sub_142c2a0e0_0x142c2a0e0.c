// 函数: sub_142c2a0e0
// 地址: 0x142c2a0e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8_2 = (zx.q(*(arg1 + 2)) << 8) + zx.q(*(arg1 + 3)) + 2
uint32_t r10 = zx.d(*(arg1 + (r8_2 << 1)))
void* r11 = arg1 + (r8_2 << 1)
uint64_t r8_3 = zx.q(*(arg1 + (r8_2 << 1) + 1))
void* r9 = r11 + (((zx.q(r10) << 8) + r8_3) << 1)
uint16_t result

if (*(arg2 + 0x14) == 0)
label_142c2a179:
    
    if (sub_142c2a8d0(arg2, (r10 << 8) + r8_3.d, r11 + 4, sub_142c22190, arg1).b != 0)
        result.b = 1
        return result
else if (zx.w(*(arg1 + 2)) * 0x100 == neg.w(zx.w(*(arg1 + 3)))
        && zx.w(*(r9 + 2)) * 0x100 == neg.w(zx.w(*(r9 + 3))))
    goto label_142c2a179

result.b = 0
return result
