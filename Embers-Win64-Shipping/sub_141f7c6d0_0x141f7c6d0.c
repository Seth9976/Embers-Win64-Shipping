// 函数: sub_141f7c6d0
// 地址: 0x141f7c6d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(*(arg1 + 0x78))

if (result.d == *(arg2 + 0x78))
    if (result.d s> 0)
        void* r10_1 = *(arg2 + 0x70)
        int64_t r9_1 = 0
        char* r8_1 = *(arg1 + 0x70)
        int32_t* rcx = r10_1 + 8
        char* r10_2 = r10_1 - r8_1
        
        do
            if (rcx[-1] f!= *(r8_1 + 4))
                goto label_141f7c798
            
            if (*rcx f!= *(r8_1 + 8))
                goto label_141f7c798
            
            char rdx = *r8_1
            
            if (rdx != *(r10_2 + r8_1))
                goto label_141f7c798
            
            if (r8_1[1] != *(rcx - 7))
                goto label_141f7c798
            
            if (r8_1[2] != *(rcx - 6))
                goto label_141f7c798
            
            if (rdx == 2)
                if (rcx[1] f!= *(r8_1 + 0xc))
                    goto label_141f7c798
                
                if (rcx[3] f!= *(r8_1 + 0x14))
                    goto label_141f7c798
            
            r9_1 += 1
            rcx = &rcx[7]
            r8_1 = &r8_1[0x1c]
        while (r9_1 s< result)
    
    if (*(arg1 + 0x6c) == *(arg2 + 0x6c) && *(arg1 + 0x6d) == *(arg2 + 0x6d))
        result.b = 1
        return result

label_141f7c798:
result.b = 0
return result
