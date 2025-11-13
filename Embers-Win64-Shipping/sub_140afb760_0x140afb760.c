// 函数: sub_140afb760
// 地址: 0x140afb760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result

if (*(arg1 + 0x68) - *(arg1 + 0x94) s<= 0)
label_140afb7eb:
    *(arg1 + 0x44)
    
    if (*(arg1 + 0x18) == *(arg1 + 0x44))
    label_140afb840:
        
        if (*(arg1 + 0xb8) s<= 0)
            result.b = 1
            return result
    else
        int32_t rax_7 = sub_140b5ead0(arg2.d) + arg2:4.d
        void* r8_2 = arg1 + 0x48
        void* rcx_5 = *(r8_2 + 8)
        
        if (rcx_5 != 0)
            r8_2 = rcx_5
        
        result = *(r8_2 + (((sx.q(*(arg1 + 0x58)) - 1) & sx.q(rax_7)) << 2))
        
        if (result == 0xffffffff)
            goto label_140afb840
        
        int64_t rdx_7 = *(arg1 + 0x10)
        
        while (true)
            int64_t rcx_7 = sx.q(result) << 5
            
            if (*(rcx_7 + rdx_7) == arg2)
                break
            
            result = *(rcx_7 + rdx_7 + 0x18)
            
            if (result == 0xffffffff)
                goto label_140afb840
        
        if (result == 0xffffffff)
            goto label_140afb840
else
    int32_t rax_3 = sub_140b5ead0(arg2.d) + arg2:4.d
    void* r8_1 = arg1 + 0x98
    void* rcx_1 = *(r8_1 + 8)
    
    if (rcx_1 != 0)
        r8_1 = rcx_1
    
    result = *(r8_1 + (((sx.q(*(arg1 + 0xa8)) - 1) & sx.q(rax_3)) << 2))
    
    if (result != 0xffffffff)
        int64_t rdx_3 = *(arg1 + 0x60)
        
        while (true)
            int64_t rcx_3 = sx.q(result) << 5
            
            if (*(rcx_3 + rdx_3) == arg2)
                break
            
            result = *(rcx_3 + rdx_3 + 0x18)
            
            if (result == 0xffffffff)
                result.b = 0
                return result
        
        if (result != 0xffffffff)
            goto label_140afb7eb

result.b = 0
return result
