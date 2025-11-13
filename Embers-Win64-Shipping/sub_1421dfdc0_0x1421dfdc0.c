// 函数: sub_1421dfdc0
// 地址: 0x1421dfdc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0x3d0)
void* result_1 = arg1 + 0x3c0

if (result != 0)
    result_1 = result

void* r14_2 = (sx.q(*(arg1 + 0x3d8)) << 4) + result_1

if (result_1 == r14_2)
    *(arg1 + 0x168) &= 0xfb
    return result

do
    int32_t i = 0
    
    if (*(result_1 + 8) s> 0)
        int64_t* rdi_1 = nullptr
        
        do
            result = *result_1
            int64_t* rsi_1 = *(rdi_1 + result)
            
            if (rsi_1 != 0)
                (*(*rsi_1 + 0x30))(rsi_1)
                (**rsi_1)(rsi_1, 1)
                result = *result_1
                *(rdi_1 + result) = 0
            
            i += 1
            rdi_1 = &rdi_1[1]
        while (i s< *(result_1 + 8))
    
    result_1 += 0x10
while (result_1 != r14_2)

*(arg1 + 0x168) &= 0xfb
return result
