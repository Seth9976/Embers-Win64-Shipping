// 函数: sub_142656e00
// 地址: 0x142656e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = sx.q(arg2)
int32_t* rdx_2

if (*(arg1 + 0x308) == *(arg1 + 0x334))
label_142656e6e:
    rdx_2 = nullptr
else
    void* r10_1 = arg1 + 0x338
    void* r8_1 = *(r10_1 + 8)
    
    if (r8_1 != 0)
        r10_1 = r8_1
    
    int32_t rax_1 = *(r10_1 + (((sx.q(*(arg1 + 0x348)) - 1) & r11) << 2))
    
    if (rax_1 == 0xffffffff)
    label_142656e6e_1:
        rdx_2 = nullptr
    else
        while (true)
            rdx_2 = (sx.q(rax_1) << 5) + *(arg1 + 0x300)
            
            if (*rdx_2 == r11.d)
                break
            
            rax_1 = rdx_2[6]
            
            if (rax_1 == 0xffffffff)
                goto label_142656e6e_2
        
        if (rax_1 == 0xffffffff)
        label_142656e6e_2:
            rdx_2 = nullptr

void* rbx = &rdx_2[2]

if (rdx_2 == 0)
    rbx = nullptr

if (rbx != 0 && sub_140d3e110(rbx) != 0)
    return *(rbx + 8)

return 0
