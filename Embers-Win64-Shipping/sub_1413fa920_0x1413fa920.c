// 函数: sub_1413fa920
// 地址: 0x1413fa920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (data_1439b6b08 != 0)
    int64_t rdi
    
    if ((arg1[0xc].b & 4) != 0 || arg1[4] == 2)
        rdi.b = 1
    else
    label_1413fa958:
        rdi.b = 0
    
    if (sub_1413edd80(*(arg1 + 0x38)).b != 0 && rdi.b == 0)
        uint64_t rdx_1 = zx.q(*arg1)
        
        if (((*(&data_143f025fc + sx.q(rdx_1.d) * 0x14) u>> 0x13).b & 1) != 0
                && test_bit(data_143f13cd8, rdx_1) && data_143e51034 != 0)
            result.b = 1
            return result
else if (data_1439b6b04 != 0)
    goto label_1413fa958

result.b = 0
return result
