// 函数: sub_141e6be20
// 地址: 0x141e6be20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx_4

if (*(arg1 + 0x3e0) == *(arg1 + 0x40c))
label_141e6beae:
    rcx_4 = nullptr
else
    int32_t rax_2 = sub_140b5ead0(arg2.d) + arg2:4.d
    void* r8 = arg1 + 0x410
    void* rcx_1 = *(r8 + 8)
    
    if (rcx_1 != 0)
        r8 = rcx_1
    
    int32_t rax_4 = *(r8 + (((sx.q(*(arg1 + 0x420)) - 1) & sx.q(rax_2)) << 2))
    
    if (rax_4 == 0xffffffff)
    label_141e6beae_1:
        rcx_4 = nullptr
    else
        while (true)
            rcx_4 = (sx.q(rax_4) << 5) + *(arg1 + 0x3d8)
            
            if (*rcx_4 == arg2)
                break
            
            rax_4 = rcx_4[3].d
            
            if (rax_4 == 0xffffffff)
                goto label_141e6beae_2
        
        if (rax_4 == 0xffffffff)
        label_141e6beae_2:
            rcx_4 = nullptr

void* result = &rcx_4[1]

if (rcx_4 == 0)
    result = nullptr

if (result != 0)
    void* rcx_5 = *result
    *(rcx_5 + 0x60) = *arg3
    result = zx.q(arg3[1].d)
    *(rcx_5 + 0x68) = result.d

return result
