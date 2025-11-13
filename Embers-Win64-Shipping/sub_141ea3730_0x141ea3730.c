// 函数: sub_141ea3730
// 地址: 0x141ea3730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx_5

if (arg1[1].d == *(arg1 + 0x34))
label_141ea37ae:
    rdx_5 = nullptr
else
    int32_t rax_2 = sub_140b5ead0(arg2.d) + arg2:4.d
    void* r8_1 = &arg1[7]
    void* rcx_1 = *(r8_1 + 8)
    
    if (rcx_1 != 0)
        r8_1 = rcx_1
    
    int32_t rax_4 = *(r8_1 + (((sx.q(arg1[9].d) - 1) & sx.q(rax_2)) << 2))
    
    if (rax_4 == 0xffffffff)
    label_141ea37ae_1:
        rdx_5 = nullptr
    else
        while (true)
            rdx_5 = (sx.q(rax_4) << 6) + *arg1
            
            if (*rdx_5 == arg2)
                break
            
            rax_4 = rdx_5[7].d
            
            if (rax_4 == 0xffffffff)
                goto label_141ea37ae_2
        
        if (rax_4 == 0xffffffff)
        label_141ea37ae_2:
            rdx_5 = nullptr

void* result = &rdx_5[1]

if (rdx_5 == 0)
    result = nullptr

if (result == 0)
    int64_t* rdx_11
    
    if (arg1[0xb].d == *(arg1 + 0x84))
    label_141ea383e:
        rdx_11 = nullptr
    else
        int32_t rax_8 = sub_140b5ead0(arg2.d) + arg2:4.d
        void* r8_3 = &arg1[0x11]
        void* rcx_3 = *(r8_3 + 8)
        
        if (rcx_3 != 0)
            r8_3 = rcx_3
        
        int32_t rax_10 = *(r8_3 + (((sx.q(arg1[0x13].d) - 1) & sx.q(rax_8)) << 2))
        
        if (rax_10 == 0xffffffff)
        label_141ea383e_1:
            rdx_11 = nullptr
        else
            while (true)
                rdx_11 = (sx.q(rax_10) << 6) + arg1[0xa]
                
                if (*rdx_11 == arg2)
                    break
                
                rax_10 = rdx_11[7].d
                
                if (rax_10 == 0xffffffff)
                    goto label_141ea383e_2
            
            if (rax_10 == 0xffffffff)
            label_141ea383e_2:
                rdx_11 = nullptr
    
    result = &rdx_11[1]
    
    if (rdx_11 == 0)
        result = nullptr
    
    if (result == 0)
        return result

return *(result + 0x28)
