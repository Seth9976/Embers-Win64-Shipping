// 函数: sub_1411088d0
// 地址: 0x1411088d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = *(arg1 + 0x30)
int64_t result

if (test_bit(rdx, 8) && not(test_bit(rdx, 0xd)) && (0x100000000 & rdx) == 0)
    result = sx.q(*arg1)
    
    if (result.d u> 0x1e || not(test_bit(0x6562c800, result.d)))
        if ((*(&data_143f025fc + result * 0x14) & 1) == 0 || (rdx & 0x4001) == 0)
            result.b = 0
            return result
    else if ((rdx & 0x4001) == 0)
        result.b = 0
        return result

result.b = 1
return result
