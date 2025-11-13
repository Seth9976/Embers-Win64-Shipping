// 函数: sub_1415136d0
// 地址: 0x1415136d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(*arg1)
int64_t result

if (sub_1405fba70(rbx.d, 3).b != 0)
    if (rbx.d u> 0x30 || not(test_bit(0x1000010150015, rbx)))
        int64_t rdx_1 = rbx * 0x14
        
        if (*(rdx_1 + &data_143f025f0) != data_143f025c0)
            if (((*(rbx * 0x14 + &data_143f025fc) u>> 0xc).b & 1) != 0)
                goto label_141513741
        else if (*(rdx_1 + 0x143f025f8) == 3
                || ((*(rbx * 0x14 + &data_143f025fc) u>> 0xc).b & 1) != 0)
            goto label_141513741
    else
    label_141513741:
        
        if (arg1[2] == 3)
            result.b = 1
            return result

result.b = 0
return result
