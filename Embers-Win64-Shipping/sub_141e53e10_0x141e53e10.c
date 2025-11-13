// 函数: sub_141e53e10
// 地址: 0x141e53e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
int64_t* rcx_4

if (arg1[1].d == *(arg1 + 0x34))
label_141e53e8e:
    rcx_4 = nullptr
else
    int32_t rax_2 = sub_140b5ead0(arg2.d) + arg2:4.d
    void* r8_1 = &arg1[7]
    void* rcx_1 = *(r8_1 + 8)
    
    if (rcx_1 != 0)
        r8_1 = rcx_1
    
    int32_t rax_4 = *(r8_1 + (((sx.q(arg1[9].d) - 1) & sx.q(rax_2)) << 2))
    
    if (rax_4 == 0xffffffff)
    label_141e53e8e_1:
        rcx_4 = nullptr
    else
        while (true)
            rcx_4 = (sx.q(rax_4) << 7) + *arg1
            
            if (*rcx_4 == arg2)
                break
            
            rax_4 = rcx_4[0xf].d
            
            if (rax_4 == 0xffffffff)
                goto label_141e53e8e_2
        
        if (rax_4 == 0xffffffff)
        label_141e53e8e_2:
            rcx_4 = nullptr

void* result = &rcx_4[1]

if (rcx_4 == 0)
    result = nullptr

if (result != 0)
    return result

return sub_141e4c7d0(arg1, &arg_10)
