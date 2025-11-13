// 函数: sub_1421c3530
// 地址: 0x1421c3530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if ((zx.q(arg1[0xc]) & 0x10002) != 0)
    int64_t rbx_1 = sx.q(*arg1)
    
    if (sub_1405fba70(rbx_1.d, 1).b != 0)
        result.b = 1
        return result
    
    if (rbx_1.d u> 0x1b)
        if (((*(&data_143f025fc + rbx_1 * 0x14) u>> 2).b & 1) != 0)
            result.b = 1
            return result
    else if (test_bit(0x857c041, rbx_1.d) || ((*(&data_143f025fc + rbx_1 * 0x14) u>> 2).b & 1) != 0)
        result.b = 1
        return result

result.b = 0
return result
