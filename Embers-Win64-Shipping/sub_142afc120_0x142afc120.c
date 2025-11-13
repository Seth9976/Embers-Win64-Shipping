// 函数: sub_142afc120
// 地址: 0x142afc120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r9 = zx.d(*(arg1 + 0xcc))
int64_t r14 = *(arg1 + 0x28)
int64_t r11 = *(arg1 + 0xb8)
int32_t result

if (r9 == 8)
    if (arg2 u> 0xffff)
        result = arg2 & 0xff7f
        
        if (arg2 u<= 0x8effff)
            result = arg2 & 0x7fff
        
        arg2 = result
else if (r9 == 9 && arg2 u> 0xffffff)
    if (arg2 u> 0x8effffff)
        arg2 &= 0xff7fff
    else
        arg2 &= 0x7fffff

for (int64_t i = 0; i s<= 0x1f; i += 1)
    int64_t r10_1 = sx.q(*(arg3 + (i << 2)))
    
    if (r10_1.d s>= 0)
        int32_t r10_2 = r10_1.d & 0xf
        uint64_t rcx_3 = zx.q(*(r14 + (r10_1 s>> 0xa << 1))) + (zx.q((r10_1 s>> 4).d) & 0x3f)
        uint64_t r8_5 = zx.q((zx.d(*(r14 + (rcx_3 << 2))) << 4) + r10_2)
        int32_t* rbx_1 = r14 + (rcx_3 << 2)
        uint32_t rcx_4 = zx.d(*(arg1 + 0xcc))
        
        if (rcx_4 == 2)
        label_142afc1fa:
            uint64_t rcx_7 = zx.q((r8_5 * 3).d)
            *(rcx_7 + r11) = (arg2 u>> 0x10).b
            *(rcx_7 + r11 + 1) = (arg2 u>> 8).b
            *(rcx_7 + r11 + 2) = arg2.b
        else if (rcx_4 == 3)
            *(r11 + (r8_5 << 2)) = arg2
        else
            if (rcx_4 == 9)
                goto label_142afc1fa
            
            *(r11 + (r8_5 << 1)) = arg2.w
        
        *rbx_1 |= 1 << ((r10_2 + 0x10) u% 0x20)
    
    arg2 += 1

result.b = 1
return result
