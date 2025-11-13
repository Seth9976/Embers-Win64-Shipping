// 函数: sub_142b645c0
// 地址: 0x142b645c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = arg1 + 8
int64_t result = data_144016e58
int32_t i = 0
char* r14_1 = sx.q(*(arg1 + 0x6c)) * 0x64 + *(result + 8)
int64_t r9 = 0

do
    if ((*rsi & 8) != 0)
        if (i != 0)
            if (i != 0xc || *(arg1 + 0x70) != 1)
            label_142b646bc:
                *arg2 = 3
                break
            
            r14_1[1] = 1
        else
            if (*(arg1 + 0x70) != i)
                goto label_142b646bc
            
            *r14_1 = 1
    
    if ((*rsi & 6) != 0)
        int32_t r8_1 = i + 1
        int64_t result_1 = r9 + 1
        
        while (true)
            if (result_1 == r9)
                goto label_142b646bc
            
            result = 0
            
            if (result_1 != 0x19)
                result = result_1
            
            if ((*(arg1 + (result << 2) + 8) & 1) != 0)
                int32_t rdi_1 = *(arg1 + 0x70)
                int32_t i_1 = i
                int64_t r8_2 = r9
                
                if (r9 != result)
                    do
                        int64_t rdx = 0
                        
                        if (r8_2 != 0x18)
                            rdx = r8_2
                        
                        int32_t i_2 = 0
                        
                        if (r8_2 != 0x18)
                            i_2 = i_1
                        
                        r8_2 = rdx + 1
                        *(r14_1 + (rdx << 2) + 4) = rdi_1
                        i_1 = i_2 + 1
                    while (r8_2 != result)
                
                break
            
            int32_t rcx = 0
            bool cond:0_1 = result_1 != 0x19
            result_1 = result + 1
            
            if (cond:0_1)
                rcx = r8_1
            
            r8_1 = rcx + 1
    
    i += 1
    r9 += 1
    rsi += 4
while (i s<= 0x18)

return result
