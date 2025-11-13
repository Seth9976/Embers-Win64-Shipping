// 函数: sub_141f74360
// 地址: 0x141f74360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (sub_141f1d5e0(arg1).b != 0)
    int64_t rax
    uint64_t rdx_1
    
    if (data_143f0f21f != 0)
        rdx_1 = zx.q(data_143f0f1a0)
        rax = sx.q(rdx_1.d)
    
    if (data_143f0f21f == 0 || ((*(&data_143f025fc + rax * 0x14) u>> 0x13).b & 1) == 0
            || not(test_bit(data_143f13cd8, rdx_1)))
        result.b = 1
        return result

result.b = 0
return result
