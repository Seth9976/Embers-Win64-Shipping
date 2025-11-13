// 函数: sub_1422cc0b0
// 地址: 0x1422cc0b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141dd27a0(arg1)
uint64_t result = *(arg1 + 0x220)
data_143f53f80 = result

if (result != 0)
    int32_t zmm0 = *(arg1 + 0x284)
    data_143f53f88 = *(arg1 + 0x280) & 1
    uint8_t rax_2 = (*(arg1 + 0x280) u>> 1).b & 1
    data_143f53f8c = zmm0
    data_143f53f89 = rax_2
    result = zx.q(*(arg1 + 0x28c))
    data_143f53f8a = result.b

return result
