// 函数: sub_141ca4710
// 地址: 0x141ca4710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx_4

if (*(arg1 + 0xa8) == *(arg1 + 0xd4))
label_141ca479e:
    rcx_4 = nullptr
else
    int32_t rax_2 = sub_140b5ead0(arg2.d) + arg2:4.d
    void* r8_1 = arg1 + 0xd8
    void* rcx_1 = *(r8_1 + 8)
    
    if (rcx_1 != 0)
        r8_1 = rcx_1
    
    int32_t rax_4 = *(r8_1 + (((sx.q(*(arg1 + 0xe8)) - 1) & sx.q(rax_2)) << 2))
    
    if (rax_4 == 0xffffffff)
    label_141ca479e_1:
        rcx_4 = nullptr
    else
        while (true)
            rcx_4 = (sx.q(rax_4) << 5) + *(arg1 + 0xa0)
            
            if (*rcx_4 == arg2)
                break
            
            rax_4 = rcx_4[3].d
            
            if (rax_4 == 0xffffffff)
                goto label_141ca479e_2
        
        if (rax_4 == 0xffffffff)
        label_141ca479e_2:
            rcx_4 = nullptr

void* result = &rcx_4[1]

if (rcx_4 == 0)
    result = nullptr

if (result != 0 && *(result + 8) s> 0)
    result.b = 1
    return result

result.b = 0
return result
