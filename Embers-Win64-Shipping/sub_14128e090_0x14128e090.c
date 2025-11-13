// 函数: sub_14128e090
// 地址: 0x14128e090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = data_143f025b8
int64_t rbx = sx.q(arg1)

if (((rbx.d u<= 0x18 && test_bit(0x100a040, rbx.d)) || *(&data_143f025f0 + rbx * 0x14) == result)
        && ((rbx.d u<= 0x1e && test_bit(0x6562c800, rbx.d))
        || (*(rbx * 0x14 + &data_143f025fc) & 1) != 0)
        && (rbx.d u> 0x1b || not(test_bit(0x857c041, rbx.d))))
    int64_t r8_1 = rbx * 0x14
    int32_t rdx_4 = *(r8_1 + &data_143f025fc)
    
    if (((rdx_4 u>> 2).b & 1) == 0 && rbx.d != 0xb && rbx.d != 0x1e
            && (*(r8_1 + &data_143f025f0) != result || (rdx_4.b & 1) == 0)
            && sub_141271090(rbx.d).b == 0 && rbx.d - 0x19 u> 1)
        result.b = 1
        return result

result.b = 0
return result
