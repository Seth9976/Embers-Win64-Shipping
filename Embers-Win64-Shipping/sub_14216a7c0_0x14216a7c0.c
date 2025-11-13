// 函数: sub_14216a7c0
// 地址: 0x14216a7c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result_1 = *(arg1 + 0x178)
bool cond:0 = result_1 != 0
void* result

if (result_1 == 0)
    if (*(arg1 + 0x48) s> 1)
        int16_t* rsi_1
        
        if (*(arg1 + 0x48) == result_1.d)
            rsi_1 = &data_142d40450
        else
            rsi_1 = *(arg1 + 0x40)
        
        result = sub_140d2f240(sub_1425819f0(), 0, rsi_1, 0, result_1.d, result_1)
        result_1 = result
        *(arg1 + 0x178) = result
    
    cond:0 = result_1 != 0

result.b = cond:0
return result
