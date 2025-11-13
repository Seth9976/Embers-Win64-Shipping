// 函数: sub_142c4b310
// 地址: 0x142c4b310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = 0

if (arg2 - 1 u> 0x7ffffffe)
    r9 = -0x7ff8ffa9

int64_t r8_1

if (r9 s< 0)
    r8_1 = 0
else
    int64_t rcx = arg2
    int16_t* rax_1 = arg1
    
    if (arg2 != 0)
        while (*rax_1 != 0)
            rax_1 = &rax_1[1]
            int64_t temp2_1 = rcx
            rcx -= 1
            
            if (temp2_1 == 1)
                break
    
    r9 = -0x7ff8ffa9
    
    if (rcx != 0)
        r9 = 0
    
    if (rcx == 0)
        r8_1 = 0
    else
        r8_1 = arg2 - rcx

if (r9 s>= 0)
    void* rcx_1 = &arg1[r8_1]
    r9 = 0
    int64_t rdx_1 = arg2 - r8_1
    
    if (arg2 != r8_1)
        int64_t i = r8_1 + 0x7ffffffe + rdx_1 - arg2
        int16_t* r11_1 = arg3 - rcx_1
        
        while (i != 0)
            int16_t rax_4 = *(r11_1 + rcx_1)
            
            if (rax_4 == 0)
                break
            
            *rcx_1 = rax_4
            i -= 1
            rcx_1 += 2
            int64_t temp3_1 = rdx_1
            rdx_1 -= 1
            
            if (temp3_1 == 1)
                goto label_142c4b3c6
    
    if (arg2 == r8_1 || rdx_1 == 0)
    label_142c4b3c6:
        rcx_1 -= 2
        r9 = -0x7ff8ff86
    
    *rcx_1 = 0

return zx.q(r9)
