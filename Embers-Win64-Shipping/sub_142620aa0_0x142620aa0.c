// 函数: sub_142620aa0
// 地址: 0x142620aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rbx = zx.d(arg1[2])
uint32_t rdi = zx.d(arg2[2])
uint32_t r11 = zx.d(*arg1)
uint32_t r9 = zx.d(*arg3)
uint32_t r10 = zx.d(arg3[2])
uint32_t r8 = zx.d(*arg2)
uint32_t result

if ((r8 - r11) * (r10 - rbx) == (r9 - r11) * (rdi - rbx))
    bool cond:0_1
    
    if (r11.w != r8.w)
        if (r11.w u> r9.w)
        label_142620afa:
            cond:0_1 = r9.w u< r8.w
            goto label_142620b16
        
        if (r9.w u<= r8.w)
            result.b = 1
            return result
        
        if (r11.w u>= r9.w)
            goto label_142620afa
    else if (rbx.w u> r10.w)
    label_142620b12:
        cond:0_1 = r10.w u< rdi.w
    label_142620b16:
        
        if (not(cond:0_1))
            result.b = 1
            return result
    else
        if (r10.w u<= rdi.w)
            result.b = 1
            return result
        
        if (rbx.w u>= r10.w)
            goto label_142620b12

result.b = 0
return result
