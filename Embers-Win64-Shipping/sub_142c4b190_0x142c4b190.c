// 函数: sub_142c4b190
// 地址: 0x142c4b190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r10_1 = arg2 u>> 1
int32_t r9 = 0

if (r10_1 - 1 u> 0x7ffffffe)
    r9 = -0x7ff8ffa9

uint64_t r8_1

if (r9 s< 0)
    r8_1 = 0
else
    uint64_t rcx = r10_1
    int16_t* rax_1 = arg1
    
    if (r10_1 != 0)
        while (*rax_1 != 0)
            rax_1 = &rax_1[1]
            uint64_t temp2_1 = rcx
            rcx -= 1
            
            if (temp2_1 == 1)
                break
    
    r9 = -0x7ff8ffa9
    
    if (rcx != 0)
        r9 = 0
    
    if (rcx == 0)
        r8_1 = 0
    else
        r8_1 = r10_1 - rcx

if (r9 s>= 0)
    int16_t* rax_2 = &arg1[r8_1]
    r9 = 0
    uint64_t rdx_1 = r10_1 - r8_1
    
    if (r10_1 != r8_1)
        int64_t i = r8_1 + 0x7ffffffe + rdx_1 - r10_1
        int16_t* r11_1 = arg3 - rax_2
        
        while (i != 0)
            int16_t rcx_3 = *(r11_1 + rax_2)
            
            if (rcx_3 == 0)
                break
            
            *rax_2 = rcx_3
            i -= 1
            rax_2 = &rax_2[1]
            uint64_t temp3_1 = rdx_1
            rdx_1 -= 1
            
            if (temp3_1 == 1)
                goto label_142c4b246
    
    if (r10_1 == r8_1 || rdx_1 == 0)
    label_142c4b246:
        rax_2 -= 2
        r9 = -0x7ff8ff86
    
    *rax_2 = 0

return zx.q(r9)
