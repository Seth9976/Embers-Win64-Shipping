// 函数: sub_141108860
// 地址: 0x141108860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = *(arg1 + 0x30)
int64_t result

if (not(test_bit(r8, 8)) || (0x100002000 & r8) != 0)
    result = sx.q(*arg1)
    
    if ((result.d u> 0x1e || not(test_bit(0x6562c800, result.d)))
            && (*(result * 0x14 + &data_143f025fc) & 1) == 0)
        goto label_1411088a4
else
label_1411088a4:
    result = sx.q(*arg1)
    
    if (result.d u> 0x1e || not(test_bit(0x6562c800, result.d)))
        if ((*(result * 0x14 + &data_143f025fc) & 1) == 0 || (r8 & 0x4001) == 0)
            result.b = 0
            return result
    else if ((r8 & 0x4001) == 0)
        result.b = 0
        return result

result.b = 1
return result
