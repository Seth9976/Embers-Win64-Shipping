// 函数: sub_140758e20
// 地址: 0x140758e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rcx_3

if (arg1[0x16].d == *(arg1 + 0xdc))
label_140758eb4:
    rcx_3 = nullptr
else
    void* r11_1 = &arg1[0x1c]
    void* r10_1 = *(r11_1 + 8)
    int64_t rsi_1 = sx.q(arg3[4])
    
    if (r10_1 != 0)
        r11_1 = r10_1
    
    int32_t rax_1 = *(r11_1 + (((sx.q(arg1[0x1e].d) - 1) & rsi_1) << 2))
    
    if (rax_1 == 0xffffffff)
    label_140758eb4_1:
        rcx_3 = nullptr
    else
        while (true)
            rcx_3 = sx.q(rax_1) * 0xc0 + arg1[0x15]
            
            if (*rcx_3 == rsi_1.d)
                break
            
            rax_1 = rcx_3[0x2e]
            
            if (rax_1 == 0xffffffff)
                goto label_140758eb4_2
        
        if (rax_1 == 0xffffffff)
        label_140758eb4_2:
            rcx_3 = nullptr

void* rax_2 = &rcx_3[2]

if (rcx_3 == 0)
    rax_2 = nullptr

if (rax_2 == 0)
    *arg2 = nullptr
    arg2[1].d = 0
else
    sub_141a4a6a0(rax_2, arg2, arg3, arg1)

return arg2
