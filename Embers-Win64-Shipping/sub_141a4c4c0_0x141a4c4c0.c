// 函数: sub_141a4c4c0
// 地址: 0x141a4c4c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rcx_2

if (arg1[1].d == *(arg1 + 0x34))
label_141a4c523:
    rcx_2 = nullptr
else
    void* r8_1 = arg1[8]
    void* r10_1 = &arg1[7]
    
    if (r8_1 != 0)
        r10_1 = r8_1
    
    int32_t rax_2 = *(r10_1 + (((sx.q(arg1[9].d) - 1) & sx.q(arg2)) << 2))
    
    if (rax_2 == 0xffffffff)
    label_141a4c523_1:
        rcx_2 = nullptr
    else
        while (true)
            rcx_2 = sx.q(rax_2) * 0x108 + *arg1
            
            if (*rcx_2 == arg2)
                break
            
            rax_2 = rcx_2[0x40]
            
            if (rax_2 == 0xffffffff)
                goto label_141a4c523_2
        
        if (rax_2 == 0xffffffff)
        label_141a4c523_2:
            rcx_2 = nullptr

void* result = &rcx_2[2]

if (rcx_2 == 0)
    result = nullptr

if (result == 0)
    int32_t* rcx_6
    
    if (arg1[0xb].d == *(arg1 + 0x84))
        rcx_6 = nullptr
    else
        void* r9_5 = &arg1[0x11]
        void* rcx_3 = *(r9_5 + 8)
        
        if (rcx_3 != 0)
            r9_5 = rcx_3
        
        int32_t rax_5 = *(r9_5 + (((sx.q(arg1[0x13].d) - 1) & sx.q(arg2)) << 2))
        
        if (rax_5 == 0xffffffff)
            rcx_6 = nullptr
        else
            while (true)
                rcx_6 = sx.q(rax_5) * 0x108 + arg1[0xa]
                
                if (*rcx_6 == arg2)
                    break
                
                rax_5 = rcx_6[0x40]
                
                if (rax_5 == 0xffffffff)
                    return 0
            
            if (rax_5 == 0xffffffff)
                rcx_6 = nullptr
    
    result = &rcx_6[2]
    
    if (rcx_6 == 0)
        return nullptr

return result
