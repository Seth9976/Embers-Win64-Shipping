// 函数: sub_141e3b060
// 地址: 0x141e3b060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1422d1f40(arg2, *(*arg1 + 0x24))
*(arg2 + 0x28) = *(*arg1 + 0x28)
int64_t rbx_1 = *arg3
int64_t* rcx_5

if (arg1[0xd].d == *(arg1 + 0x94))
label_141e3b10e:
    rcx_5 = nullptr
else
    int32_t rax_4 = sub_140b5ead0(rbx_1.d) + rbx_1:4.d
    void* r8 = &arg1[0x13]
    void* rcx_2 = *(r8 + 8)
    
    if (rcx_2 != 0)
        r8 = rcx_2
    
    int32_t rax_6 = *(r8 + (((sx.q(arg1[0x15].d) - 1) & sx.q(rax_4)) << 2))
    
    if (rax_6 == 0xffffffff)
    label_141e3b10e_1:
        rcx_5 = nullptr
    else
        while (true)
            rcx_5 = (sx.q(rax_6) << 7) + arg1[0xc]
            
            if (*rcx_5 == rbx_1)
                break
            
            rax_6 = rcx_5[0xf].d
            
            if (rax_6 == 0xffffffff)
                goto label_141e3b10e_2
        
        if (rax_6 == 0xffffffff)
        label_141e3b10e_2:
            rcx_5 = nullptr

int64_t* result = &rcx_5[1]

if (rcx_5 == 0)
    result = nullptr

if (result == 0)
    return result

return sub_141e3b150(result, arg2, *arg1)
