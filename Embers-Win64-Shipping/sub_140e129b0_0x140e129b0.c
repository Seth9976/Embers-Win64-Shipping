// 函数: sub_140e129b0
// 地址: 0x140e129b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8
sub_140e1ad30(&arg_8, arg2, arg3)
int64_t rbx = arg_8
int64_t* rcx_5

if (*(arg1 + 0x128) == *(arg1 + 0x154))
label_140e12a4e:
    rcx_5 = nullptr
else
    int32_t rax_2 = sub_140b5ead0(rbx.d) + rbx:4.d
    void* r8 = arg1 + 0x158
    void* rcx_2 = *(r8 + 8)
    
    if (rcx_2 != 0)
        r8 = rcx_2
    
    int32_t rax_4 = *(r8 + (((sx.q(*(arg1 + 0x168)) - 1) & sx.q(rax_2)) << 2))
    
    if (rax_4 == 0xffffffff)
    label_140e12a4e_1:
        rcx_5 = nullptr
    else
        while (true)
            rcx_5 = (sx.q(rax_4) << 5) + *(arg1 + 0x120)
            
            if (*rcx_5 == rbx)
                break
            
            rax_4 = rcx_5[3].d
            
            if (rax_4 == 0xffffffff)
                goto label_140e12a4e_2
        
        if (rax_4 == 0xffffffff)
        label_140e12a4e_2:
            rcx_5 = nullptr

void* rax_5 = &rcx_5[1]

if (rcx_5 == 0)
    rax_5 = nullptr

if (rax_5 != 0)
    return rax_5

return arg4
