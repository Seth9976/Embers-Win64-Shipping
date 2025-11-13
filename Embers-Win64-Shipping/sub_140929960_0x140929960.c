// 函数: sub_140929960
// 地址: 0x140929960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rdx_2

if (*(arg1 + 0x180) == *(arg1 + 0x1ac))
label_1409299ce:
    rdx_2 = nullptr
else
    void* r11_1 = arg1 + 0x1b0
    void* r9_1 = *(r11_1 + 8)
    
    if (r9_1 != 0)
        r11_1 = r9_1
    
    int32_t rax_2 = *(r11_1 + (((sx.q(*(arg1 + 0x1c0)) - 1) & sx.q(arg3)) << 2))
    
    if (rax_2 == 0xffffffff)
    label_1409299ce_1:
        rdx_2 = nullptr
    else
        while (true)
            rdx_2 = (sx.q(rax_2) << 5) + *(arg1 + 0x178)
            
            if (*rdx_2 == arg3)
                break
            
            rax_2 = rdx_2[6]
            
            if (rax_2 == 0xffffffff)
                goto label_1409299ce_2
        
        if (rax_2 == 0xffffffff)
        label_1409299ce_2:
            rdx_2 = nullptr

void* rcx = &rdx_2[2]

if (rdx_2 == 0)
    rcx = nullptr

if (rcx == 0)
    *arg2 = 0
    arg2[1] = 0
else
    *arg2 = *rcx
    void* rax_4 = *(rcx + 8)
    arg2[1] = rax_4
    
    if (rax_4 != 0)
        *(rax_4 + 8) += 1

return arg2
