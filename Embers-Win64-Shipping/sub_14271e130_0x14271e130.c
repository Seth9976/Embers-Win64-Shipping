// 函数: sub_14271e130
// 地址: 0x14271e130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rcx_2

if (*(arg1 + 0xd8) == *(arg1 + 0x104))
label_14271e1ae:
    rcx_2 = nullptr
else
    void* r11_1 = arg1 + 0x108
    void* r10_1 = *(r11_1 + 8)
    int64_t r8_1 = sx.q(arg2[0xb])
    
    if (r10_1 != 0)
        r11_1 = r10_1
    
    int32_t rax_1 = *(r11_1 + (((sx.q(*(arg1 + 0x118)) - 1) & r8_1) << 2))
    
    if (rax_1 == 0xffffffff)
    label_14271e1ae_1:
        rcx_2 = nullptr
    else
        while (true)
            rcx_2 = (sx.q(rax_1) << 5) + *(arg1 + 0xd0)
            
            if (*rcx_2 == r8_1.d)
                break
            
            rax_1 = rcx_2[6]
            
            if (rax_1 == 0xffffffff)
                goto label_14271e1ae_2
        
        if (rax_1 == 0xffffffff)
        label_14271e1ae_2:
            rcx_2 = nullptr

void* rdi = &rcx_2[1]

if (rcx_2 == 0)
    rdi = nullptr

if (rdi != 0)
    char var_38 = *(arg1 + 0x44)
    int64_t var_34_1 = *(arg1 + 0x48)
    int128_t var_28
    sub_14271a2c0(&var_28, sub_142702010(sub_140d3c6e0(arg2), &var_38))
    char rcx_6 = *(rdi + 0x10)
    *rdi = var_28
    int32_t result
    *(rdi + 0x10) = result
    
    if (result.b == rcx_6)
        return result

return sub_140926420(arg1 + 0x60, arg2)
