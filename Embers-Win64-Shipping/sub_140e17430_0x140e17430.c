// 函数: sub_140e17430
// 地址: 0x140e17430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8
sub_140e1ad30(&arg_8, arg3, arg4)
int64_t rbx = arg_8
int64_t* rcx_5

if (*(arg1 + 0x178) == *(arg1 + 0x1a4))
    rcx_5 = nullptr
else
    int32_t rax_3 = sub_140b5ead0(rbx.d) + rbx:4.d
    void* r8_1 = arg1 + 0x1a8
    void* rcx_2 = *(r8_1 + 8)
    
    if (rcx_2 != 0)
        r8_1 = rcx_2
    
    int32_t rax_5 = *(r8_1 + (((sx.q(*(arg1 + 0x1b8)) - 1) & sx.q(rax_3)) << 2))
    
    if (rax_5 == 0xffffffff)
    label_140e174ce:
        rbx = arg_8
        rcx_5 = nullptr
    else
        while (true)
            rcx_5 = sx.q(rax_5) * 0x38 + *(arg1 + 0x170)
            
            if (*rcx_5 == rbx)
                break
            
            rax_5 = rcx_5[6].d
            
            if (rax_5 == 0xffffffff)
                goto label_140e174ce
        
        if (rax_5 == 0xffffffff)
            goto label_140e174ce
        
        rbx = arg_8

void* rdx_4 = &rcx_5[1]

if (rcx_5 == 0)
    rdx_4 = nullptr

if (rdx_4 != 0)
    sub_140dd9fa0(arg2, rdx_4)
else
    int64_t* rdx_10
    
    if (*(arg1 + 0x128) == *(arg1 + 0x154))
    label_140e17571:
        rdx_10 = nullptr
    else
        int32_t rax_8 = sub_140b5ead0(rbx.d) + rbx:4.d
        void* r8_3 = arg1 + 0x158
        void* rcx_7 = *(r8_3 + 8)
        
        if (rcx_7 != 0)
            r8_3 = rcx_7
        
        int32_t rax_10 = *(r8_3 + (((sx.q(*(arg1 + 0x168)) - 1) & sx.q(rax_8)) << 2))
        
        if (rax_10 == 0xffffffff)
        label_140e17571_1:
            rdx_10 = nullptr
        else
            while (true)
                rdx_10 = (sx.q(rax_10) << 5) + *(arg1 + 0x120)
                
                if (*rdx_10 == rbx)
                    break
                
                rax_10 = rdx_10[3].d
                
                if (rax_10 == 0xffffffff)
                    goto label_140e17571_2
            
            if (rax_10 == 0xffffffff)
            label_140e17571_2:
                rdx_10 = nullptr
    
    void* rax_11 = &rdx_10[1]
    
    if (rdx_10 == 0)
        rax_11 = nullptr
    
    if (rax_11 != 0)
        *arg2 = *rax_11
        arg2[1].b = 0
        *(arg2 + 0x18) = 0
        arg2[2].q = 0
    else
        sub_140dd9fa0(arg2, arg5)

return arg2
