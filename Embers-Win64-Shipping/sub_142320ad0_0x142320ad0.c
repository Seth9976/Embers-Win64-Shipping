// 函数: sub_142320ad0
// 地址: 0x142320ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x719) &= 0xef
uint64_t result = sub_141f64a80(arg1)
uint64_t result_1 = result

if (result != 0)
    int32_t i = 0
    
    if (*(result + 0x48) s> 0)
        int64_t* rdi_1 = nullptr
        
        do
            result = sub_141f5e0e0(arg1, *(*(rdi_1 + *(result_1 + 0x40)) + 0x80))
            
            if (result.d != 0xffffffff)
                *(arg1 + 0x719) |= 0x10
                break
            
            i += 1
            rdi_1 = &rdi_1[1]
        while (i s< *(result_1 + 0x48))

return result
