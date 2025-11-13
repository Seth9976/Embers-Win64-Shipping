// 函数: sub_141e0acd0
// 地址: 0x141e0acd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2)
int32_t* rdx_2

if (*(arg1 + 0x1c0) == *(arg1 + 0x1ec))
label_141e0ad4d:
    rdx_2 = nullptr
else
    void* r11_1 = arg1 + 0x1f0
    void* r9_1 = *(r11_1 + 8)
    
    if (r9_1 != 0)
        r11_1 = r9_1
    
    int32_t rax_1 = *(r11_1 + (((sx.q(*(arg1 + 0x200)) - 1) & rdi) << 2))
    
    if (rax_1 == 0xffffffff)
    label_141e0ad4d_1:
        rdx_2 = nullptr
    else
        while (true)
            rdx_2 = (sx.q(rax_1) << 4) + *(arg1 + 0x1b8)
            
            if (*rdx_2 == rdi.d)
                break
            
            rax_1 = rdx_2[2]
            
            if (rax_1 == 0xffffffff)
                goto label_141e0ad4d_2
        
        if (rax_1 == 0xffffffff)
        label_141e0ad4d_2:
            rdx_2 = nullptr

void* result = &rdx_2[1]

if (rdx_2 == 0)
    result = nullptr

if (result != 0)
    int64_t rcx = sx.q(*result + arg3)
    result = *(arg1 + sx.q(*(arg1 + 0x208)) * 0x10 + 0x198)
    *(result + (rcx << 2)) = arg4

return result
