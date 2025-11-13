// 函数: sub_141af0640
// 地址: 0x141af0640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r9 = *(arg1 + 8)
int32_t* rcx_6

if (r9[1].d == *(r9 + 0x34))
label_141af06c9:
    rcx_6 = nullptr
else
    int32_t rbx_1 = *(arg1 + 0x28)
    void* r8_1 = &r9[7]
    int64_t r10_1 = sx.q(*(arg1 + 0x2c))
    int64_t r11_1 = sx.q(*(arg1 + 0x24))
    void* rdx_1 = *(r8_1 + 8)
    
    if (rdx_1 != 0)
        r8_1 = rdx_1
    
    int32_t rax_5 = *(r8_1 + (((sx.q(not.d(rbx_1)) ^ r11_1 ^ r10_1) & (sx.q(r9[9].d) - 1)) << 2))
    
    if (rax_5 == 0xffffffff)
    label_141af06c9_1:
        rcx_6 = nullptr
    else
        while (true)
            rcx_6 = (sx.q(rax_5) << 5) + *r9
            
            if (rcx_6[1] == rbx_1 && *rcx_6 == r11_1.d && rcx_6[2] == r10_1.d)
                break
            
            rax_5 = rcx_6[6]
            
            if (rax_5 == 0xffffffff)
                goto label_141af06c9_2
        
        if (rax_5 == 0xffffffff)
        label_141af06c9_2:
            rcx_6 = nullptr

void* rax_6 = &rcx_6[4]

if (rcx_6 == 0)
    rax_6 = nullptr

if (rax_6 == 0)
    return 0

return *rax_6
