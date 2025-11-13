// 函数: sub_141e60ec0
// 地址: 0x141e60ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx_5

if (arg1[6].d == *(arg1 + 0x5c))
label_141e60f3e:
    rdx_5 = nullptr
else
    int32_t rax_2 = sub_140b5ead0(arg3.d) + arg3:4.d
    void* r8 = &arg1[0xc]
    void* rcx_1 = *(r8 + 8)
    
    if (rcx_1 != 0)
        r8 = rcx_1
    
    int32_t rax_4 = *(r8 + (((sx.q(arg1[0xe].d) - 1) & sx.q(rax_2)) << 2))
    
    if (rax_4 == 0xffffffff)
    label_141e60f3e_1:
        rdx_5 = nullptr
    else
        while (true)
            rdx_5 = (sx.q(rax_4) << 5) + arg1[5]
            
            if (*rdx_5 == arg3)
                break
            
            rax_4 = rdx_5[3].d
            
            if (rax_4 == 0xffffffff)
                goto label_141e60f3e_2
        
        if (rax_4 == 0xffffffff)
        label_141e60f3e_2:
            rdx_5 = nullptr

void* rax_5 = &rdx_5[1]

if (rdx_5 == 0)
    rax_5 = nullptr

if (rax_5 == 0)
    int32_t arg_8
    (*(*arg1 + 0x3f8))(arg1, &arg_8, arg3)
    int32_t rcx_3
    rcx_3.b = sub_140b5b8a0(arg_8, 0) == 0
    
    if ((arg4 != 0 | rcx_3.b) == 0)
    label_141e61001:
        *arg2 = 0
        arg2[1] = 0
        return arg2
    
    int64_t rbx_1 = arg_8.q
    int64_t* rdx_12
    
    if (arg1[6].d == *(arg1 + 0x5c))
    label_141e60fee:
        rdx_12 = nullptr
    else
        int32_t rax_10 = sub_140b5ead0(rbx_1.d) + rbx_1:4.d
        void* r8_3 = &arg1[0xc]
        void* rcx_5 = *(r8_3 + 8)
        
        if (rcx_5 != 0)
            r8_3 = rcx_5
        
        int32_t rax_12 = *(r8_3 + (((sx.q(arg1[0xe].d) - 1) & sx.q(rax_10)) << 2))
        
        if (rax_12 == 0xffffffff)
        label_141e60fee_1:
            rdx_12 = nullptr
        else
            while (true)
                rdx_12 = (sx.q(rax_12) << 5) + arg1[5]
                
                if (*rdx_12 == rbx_1)
                    break
                
                rax_12 = rdx_12[3].d
                
                if (rax_12 == 0xffffffff)
                    goto label_141e60fee_2
            
            if (rax_12 == 0xffffffff)
            label_141e60fee_2:
                rdx_12 = nullptr
    
    rax_5 = &rdx_12[1]
    
    if (rdx_12 == 0)
        rax_5 = nullptr
    
    if (rax_5 == 0)
        goto label_141e61001

*arg2 = *rax_5
return arg2
