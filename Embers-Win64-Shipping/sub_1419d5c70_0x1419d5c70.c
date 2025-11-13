// 函数: sub_1419d5c70
// 地址: 0x1419d5c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 u<= 0x18 && test_bit(0x100a040, arg1))
    if (arg1 - 0x19 u<= 1)
        goto label_1419d5cb6
    
    goto label_1419d5ca2

int64_t result

if (*(&data_143f025f0 + sx.q(arg1) * 0x14) != data_143f025b8 || arg1 - 0x19 u<= 1)
label_1419d5cb6:
    
    if ((arg1 u> 0x1e || not(test_bit(0x6562c800, arg1)))
            && (*(sx.q(arg1) * 0x14 + &data_143f025fc) & 1) == 0)
        result.b = 1
        return result
else
label_1419d5ca2:
    
    if (*(&data_143f025f0 + sx.q(arg1) * 0x14) == data_143f025d0)
        goto label_1419d5cb6

result.b = 0
return result
