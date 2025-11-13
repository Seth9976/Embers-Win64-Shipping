// 函数: sub_1410f9680
// 地址: 0x1410f9680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg1)

if (sub_1405fba70(rbx.d, 3) != 0)
    int64_t rcx_2
    int64_t rdx_1
    
    if (rbx.d u> 0xe || not(test_bit(0x4011, rbx.d)))
        rdx_1 = rbx * 0x14
        rcx_2 = *(rdx_1 + &data_143f025f0)
    
    if ((rbx.d u<= 0xe && test_bit(0x4011, rbx.d)) || rcx_2 == data_143f025a8 || rbx.d == 2
            || ((*(rdx_1 + &data_143f025fc) u>> 3).b & 1) != 0
            || (rbx.d u<= 0x1f && test_bit(0xc8451800, rbx.d)) || rcx_2 == data_143f025b0)
        return true

return false
