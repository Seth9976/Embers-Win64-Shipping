// 函数: sub_140a8dc00
// 地址: 0x140a8dc00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = EnterCriticalSection(arg1 + 0x18)

if (arg2 == 0)
    int64_t r10_1 = sx.q(GetCurrentThreadId())
    int32_t* rcx_5
    
    if (*(arg1 + 0x48) == *(arg1 + 0x74))
    label_140a8dc92:
        rcx_5 = nullptr
    else
        void* r9_1 = arg1 + 0x78
        void* rdx = *(r9_1 + 8)
        
        if (rdx != 0)
            r9_1 = rdx
        
        int32_t rax_1 = *(r9_1 + (((sx.q(*(arg1 + 0x88)) - 1) & r10_1) << 2))
        
        if (rax_1 == 0xffffffff)
        label_140a8dc92_1:
            rcx_5 = nullptr
        else
            while (true)
                rcx_5 = sx.q(rax_1) * 0x30 + *(arg1 + 0x40)
                
                if (*rcx_5 == r10_1.d)
                    break
                
                rax_1 = rcx_5[0xa]
                
                if (rax_1 == 0xffffffff)
                    goto label_140a8dc92_2
            
            if (rax_1 == 0xffffffff)
            label_140a8dc92_2:
                rcx_5 = nullptr
    
    result = &rcx_5[2]
    
    if (rcx_5 == 0)
        result = nullptr
    
    if (result != 0)
        *(result + 0x10) += 1
else
    *(arg1 + 0xec) += 1

*(arg1 + 0xa0) += 1

if (arg1 == -0x18)
    return result

return LeaveCriticalSection(arg1 + 0x18)
