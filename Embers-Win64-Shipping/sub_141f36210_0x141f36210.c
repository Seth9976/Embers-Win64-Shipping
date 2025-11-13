// 函数: sub_141f36210
// 地址: 0x141f36210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result

if (*(arg1 + 0x14f) != 2 && (*(arg1 + 0x88) & 1) != 0)
    void* result_1 = *(arg1 + 0xa8)
    
    if (result_1 != 0)
    label_141f3624b:
        
        if (sub_14243ade0(result_1).b != 0 && (*(result_1 + 0x11b) & 0x40) != 0
                && sub_141ee76e0(arg1).b == 0)
            result = *(arg1 + 0xa0)
            
            if (result != 0 && (*(result + 0x5b) & 0x20) != 0)
                result.b = 1
                return result
    else
        result = sub_141ee69e0(arg1)
        result_1 = result
        
        if (result != 0)
            goto label_141f3624b

result.b = 0
return result
