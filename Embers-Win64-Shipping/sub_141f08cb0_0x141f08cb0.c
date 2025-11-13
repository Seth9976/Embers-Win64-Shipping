// 函数: sub_141f08cb0
// 地址: 0x141f08cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141ed8440(arg1)
uint64_t result = (*(*arg1 + 0x6a8))(arg1, 0, 0)

if (result != 0 && (*(result + 0xc) & 0x10) != 0 && *(result + 0xa0) == 0)
    char rbx_1 = *(arg1 + 0x14d)
    *(arg1 + 0x14d) = rbx_1 | 0x20
    (*(*arg1 + 0x400))(arg1, &data_143a2de54)
    result.b = *(arg1 + 0x14d) ^ rbx_1
    result.b &= 0x20
    *(arg1 + 0x14d) ^= result.b

return result
