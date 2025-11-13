// 函数: sub_140963740
// 地址: 0x140963740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rcx_1

if (*(arg1 + 0xd0) == *(arg1 + 0xfc))
labelid_6:
    rcx_1 = nullptr
else
    void* r11_1 = arg1 + 0x100
    void* r9_1 = *(r11_1 + 8)
    
    if (r9_1 != 0)
        r11_1 = r9_1
    
    int32_t rax_2 = *(r11_1 + (((sx.q(*(arg1 + 0x110)) - 1) & zx.q(arg3)) << 2))
    
    if (rax_2 == 0xffffffff)
    label_1409637b0:
        rcx_1 = nullptr
    else
        int64_t r9_2 = *(arg1 + 0xc8)
        
        while (true)
            int64_t rdx = sx.q(rax_2) * 5
            rcx_1 = r9_2 + (rdx << 2)
            
            if (*(r9_2 + (rdx << 2)) == arg3)
                break
            
            rax_2 = *(rcx_1 + 0xc)
            
            if (rax_2 == 0xffffffff)
                goto label_1409637b0_1
        
        if (rax_2 == 0xffffffff)
        label_1409637b0_1:
            rcx_1 = nullptr

void* rax_3 = rcx_1 + 4

if (rcx_1 == 0)
    rax_3 = nullptr

if (rax_3 != 0)
    *arg2 = *rax_3
    return arg2

int64_t arg_8 = 0
*arg2 = 0
return arg2
