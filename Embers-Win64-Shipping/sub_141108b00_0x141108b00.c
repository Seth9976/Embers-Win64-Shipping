// 函数: sub_141108b00
// 地址: 0x141108b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result

if (sub_1419803d0(*arg1).b != 0)
    result = *(arg1 + 0x38)
    
    if (result == 0)
    label_141108b24:
        
        if (arg1[7] != 0)
            result = *(arg1 + 0x30)
            
            if ((result.b & 2) != 0 || not(test_bit(result, 8)) || (0x100004000 & result) != 0)
                result.b = 1
                return result
    else if ((*(result + 0x60))().b != 0)
        goto label_141108b24

result.b = 0
return result
