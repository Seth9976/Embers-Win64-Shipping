// 函数: sub_141b5f6a0
// 地址: 0x141b5f6a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx_6

if (arg1[1].d == *(arg1 + 0x34))
label_141b5f71e:
    rcx_6 = nullptr
else
    int32_t rax_2 = sub_140b5ead0(arg3.d) + arg3:4.d
    void* r8 = &arg1[7]
    void* rdx = *(r8 + 8)
    
    if (rdx != 0)
        r8 = rdx
    
    int32_t rax_4 = *(r8 + (((sx.q(arg1[9].d) - 1) & sx.q(rax_2)) << 2))
    
    if (rax_4 == 0xffffffff)
    label_141b5f71e_1:
        rcx_6 = nullptr
    else
        while (true)
            rcx_6 = (sx.q(rax_4) << 5) + *arg1
            
            if (*rcx_6 == arg3)
                break
            
            rax_4 = rcx_6[3].d
            
            if (rax_4 == 0xffffffff)
                goto label_141b5f71e_2
        
        if (rax_4 == 0xffffffff)
        label_141b5f71e_2:
            rcx_6 = nullptr

if (rcx_6 == 0)
    *arg2 = 0
    arg2[1] = 0
else
    *arg2 = rcx_6[1]
    void* rax_6 = rcx_6[2]
    arg2[1] = rax_6
    
    if (rax_6 != 0)
        *(rax_6 + 8) += 1

return arg2
