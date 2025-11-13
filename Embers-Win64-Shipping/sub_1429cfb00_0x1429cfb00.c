// 函数: sub_1429cfb00
// 地址: 0x1429cfb00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
int64_t result

if (*(arg2 + 4) s> 0)
    result = 0
    int64_t rdi_1 = 0
    
    do
        void* r8_1 = **(arg1 + 0x28)
        void* r9_1 = *(r8_1 + 0x18)
        uint64_t j_3 = zx.q(*(r9_1 + rdi_1))
        int32_t* r10_1 = *(r8_1 + 0x30) + (sx.q(*(r9_1 + rdi_1 + 4)) << 2)
        
        if (*(arg2 + 0x58) != 0)
            int32_t rdx_1 = *(*(arg2 + 0x10) + (result << 2))
            int32_t j_2 = (j_3 - 1).d
            result += 1
            *r10_1 = rdx_1
            int64_t j = sx.q(j_2)
            
            if (j_2 s> 0)
                do
                    int32_t rdx_2 = *(*(arg2 + 0x10) + (result << 2))
                    result += 1
                    r10_1[j] = rdx_2
                    j -= 1
                while (j s> 0)
        else if (j_3.d s> 0)
            uint64_t j_1
            
            do
                r10_1 = &r10_1[1]
                int32_t rdx_3 = *(*(arg2 + 0x10) + (result << 2))
                result += 1
                r10_1[-1] = rdx_3
                j_1 = j_3
                j_3 -= 1
            while (j_1 != 1)
        
        i += 1
        rdi_1 += 8
    while (i s< *(arg2 + 4))

result.b = 1
return result
