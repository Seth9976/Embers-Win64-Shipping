// 函数: sub_142b3f4a0
// 地址: 0x142b3f4a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(*(arg1 + 0x84))

if (result.d != *(arg2 + 0x84))
    result.b = 0
    return result

if (result.d s<= 0)
label_142b3f583:
    result.b = 1
else
    char r10_1 = *arg1
    int64_t rcx = sx.q(*(arg2 + 0x80))
    char rbp_1 = *arg2
    int64_t r15_2 = sx.q(*(arg1 + 0x80)) - rcx
    int64_t result_1 = result
    int64_t r14_2 = neg.q(rcx)
    int64_t r8_1 = rcx * 2
    
    while (true)
        void* rdx
        
        if (r10_1 == 0)
            rdx = &arg1[8]
        else
            rdx = *(arg1 + 8)
        
        if (rbp_1 == 0)
            result = &arg2[8]
        else
            result = *(arg2 + 8)
        
        if (*(r8_1 + (r15_2 << 1) + rdx) == *(r8_1 + result))
            void* rdx_1
            
            if (r10_1 == 0)
                rdx_1 = &arg1[0x58]
            else
                rdx_1 = *(arg1 + 0x58)
            
            if (rbp_1 == 0)
                result = &arg2[0x58]
            else
                result = *(arg2 + 0x58)
            
            if (*(r15_2 + rcx + rdx_1) == *(rcx + result))
                rcx += 1
                r8_1 += 2
                
                if (r14_2 + rcx s>= result_1)
                    goto label_142b3f583
                
                continue
        
        result.b = 0
        break

return result
