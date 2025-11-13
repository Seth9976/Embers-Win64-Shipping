// 函数: sub_141369240
// 地址: 0x141369240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(*arg1)

if (result.d != 0xb && result.d != 0x1e)
    int64_t rcx = result * 5
    
    if (*(&data_143f025f0 + (rcx << 2)) != data_143f025b8
            || (*((rcx << 2) + &data_143f025fc) & 1) == 0)
        result.b = 0
        return result

result.b = 1
return result
