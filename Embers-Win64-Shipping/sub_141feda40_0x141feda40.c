// 函数: sub_141feda40
// 地址: 0x141feda40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(*arg1)
int64_t result

if (sub_1405fba70(rbx.d, 3).b != 0)
    if (rbx.d u<= 0x1f && test_bit(0x88051005, rbx.d))
        result.b = 1
        return result
    
    int64_t rdx_1 = rbx * 0x14
    int64_t r8_1 = *(rdx_1 + &data_143f025f0)
    
    if ((r8_1 == data_143f025b0 && *(rdx_1 + 0x143f025f8) == 3)
            || (rbx.d u<= 0x30 && test_bit(0x1000010100010, rbx)))
        result.b = 1
        return result
    
    if (r8_1 != data_143f025c0)
        if (rbx.d - 0x19 u<= 1 || ((*(rbx * 0x14 + &data_143f025fc) u>> 8).b & 1) != 0)
            result.b = 1
            return result
    else if (*(rdx_1 + 0x143f025f8) == 3 || rbx.d - 0x19 u<= 1
            || ((*(rbx * 0x14 + &data_143f025fc) u>> 8).b & 1) != 0)
        result.b = 1
        return result

result.b = 0
return result
