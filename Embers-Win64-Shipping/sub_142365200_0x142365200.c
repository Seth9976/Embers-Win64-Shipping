// 函数: sub_142365200
// 地址: 0x142365200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = *(arg1 + 0x198)

if (arg3 == 0xffffffff || arg3 == r11)
    arg3 = 0

if (arg3 s< r11)
    int64_t rbx_1 = *(arg1 + 0x190)
    int32_t r10_1 = arg3 + 1
    int64_t i = sx.q(arg3)
    float* r9 = rbx_1 + (i << 3)
    
    do
        float zmm3 = r9[1]
        int64_t rax_3 = sx.q(mods.dp.d(sx.q(r10_1), r11))
        
        if (not(arg2 < zmm3))
            float zmm0 = *(rbx_1 + (rax_3 << 3) + 4)
            
            if (arg2 < zmm0)
                *arg4 = (arg2 - zmm3) / (zmm0 - zmm3) * (*(rbx_1 + (rax_3 << 3)) - *r9) + *r9
                return zx.q(arg3)
        
        arg3 += 1
        r10_1 += 1
        i += 1
        r9 = &r9[2]
    while (i s< sx.q(r11))

return 0xffffffff
