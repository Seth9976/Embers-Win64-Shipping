// 函数: sub_1421891c0
// 地址: 0x1421891c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = *(arg1 + 0x48)
int32_t r9 = 0
int64_t* result

if (r10 s> 0)
    int64_t* r8_1 = *(arg1 + 0x40)
    
    do
        result = *r8_1
        
        if (result != 0)
            void* rcx = *result[8]
            
            if (rcx != 0)
                result = *(rcx + 0x48)
                
                if (result != 0)
                    result = result[2]
                    int64_t rcx_1 = sx.q(*(arg2 + 0x38))
                    
                    if (rcx_1.d s<= result[7].d && result[6][rcx_1] == arg2 + 0x30)
                        result.b = 1
                        return result
        
        r9 += 1
        r8_1 = &r8_1[1]
    while (r9 s< r10)

result.b = 0
return result
