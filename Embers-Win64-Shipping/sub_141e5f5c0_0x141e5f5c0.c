// 函数: sub_141e5f5c0
// 地址: 0x141e5f5c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = *arg2
int64_t* rcx_4

if (arg1[1].d == *(arg1 + 0x34))
label_141e5f63e:
    rcx_4 = nullptr
else
    int32_t rax_2 = sub_140b5ead0(rbx.d) + rbx:4.d
    void* r8_1 = &arg1[7]
    void* rcx_1 = *(r8_1 + 8)
    
    if (rcx_1 != 0)
        r8_1 = rcx_1
    
    int32_t rax_4 = *(r8_1 + (((sx.q(arg1[9].d) - 1) & sx.q(rax_2)) << 2))
    
    if (rax_4 == 0xffffffff)
    label_141e5f63e_1:
        rcx_4 = nullptr
    else
        while (true)
            rcx_4 = (sx.q(rax_4) << 7) + *arg1
            
            if (*rcx_4 == rbx)
                break
            
            rax_4 = rcx_4[0xf].d
            
            if (rax_4 == 0xffffffff)
                goto label_141e5f63e_2
        
        if (rax_4 == 0xffffffff)
        label_141e5f63e_2:
            rcx_4 = nullptr

if (rcx_4 == 0)
    return nullptr

return &rcx_4[1]
