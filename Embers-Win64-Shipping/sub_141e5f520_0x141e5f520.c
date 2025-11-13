// 函数: sub_141e5f520
// 地址: 0x141e5f520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx_6

if (arg1[1].d == *(arg1 + 0x34))
label_141e5f59e:
    rcx_6 = nullptr
else
    int32_t rax_2 = sub_140b5ead0(arg2.d) + arg2:4.d
    void* r8_1 = &arg1[7]
    void* rdx = *(r8_1 + 8)
    
    if (rdx != 0)
        r8_1 = rdx
    
    int32_t rax_4 = *(r8_1 + (((sx.q(arg1[9].d) - 1) & sx.q(rax_2)) << 2))
    
    if (rax_4 == 0xffffffff)
    label_141e5f59e_1:
        rcx_6 = nullptr
    else
        while (true)
            rcx_6 = (sx.q(rax_4) << 7) + *arg1
            
            if (*rcx_6 == arg2)
                break
            
            rax_4 = rcx_6[0xf].d
            
            if (rax_4 == 0xffffffff)
                goto label_141e5f59e_2
        
        if (rax_4 == 0xffffffff)
        label_141e5f59e_2:
            rcx_6 = nullptr

if (rcx_6 == 0)
    return nullptr

return &rcx_6[1]
