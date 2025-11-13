// 函数: sub_141e61ed0
// 地址: 0x141e61ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x40c)
int32_t result
int64_t* rcx_4

if (*(arg1 + 0x3e0) == *(arg1 + 0x40c))
label_141e61f5e:
    rcx_4 = nullptr
else
    int32_t rax_2 = sub_140b5ead0(arg2.d) + arg2:4.d
    void* r8 = arg1 + 0x410
    void* rcx_1 = *(r8 + 8)
    
    if (rcx_1 != 0)
        r8 = rcx_1
    
    result = *(r8 + (((sx.q(*(arg1 + 0x420)) - 1) & sx.q(rax_2)) << 2))
    
    if (result == 0xffffffff)
    label_141e61f5e_1:
        rcx_4 = nullptr
    else
        while (true)
            rcx_4 = (sx.q(result) << 5) + *(arg1 + 0x3d8)
            
            if (*rcx_4 == arg2)
                break
            
            result = rcx_4[3].d
            
            if (result == 0xffffffff)
                goto label_141e61f5e_2
        
        if (result == 0xffffffff)
        label_141e61f5e_2:
            rcx_4 = nullptr

void* rdx_4 = &rcx_4[1]

if (rcx_4 == 0)
    rdx_4 = nullptr

if (rdx_4 == 0)
    result.b = 0
else
    sub_141e516e0(arg3, *rdx_4)
    result.b = 1

return result
