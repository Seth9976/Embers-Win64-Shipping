// 函数: sub_1417542b0
// 地址: 0x1417542b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_8
(*(*arg1 + 0xa0))(arg1, &arg_8)
int512_t zmm1_1 = sub_1416f34b0(arg2, &arg1[2], sub_141755af0(arg1, arg2))
sub_14152dda0(sub_14152dda0(arg2, &arg1[5], zmm1_1), arg1 + 0x34, zmm1_1)
sub_1417558e0(arg2, arg1 + 0x44)
(*(*arg2 + 0x1d8))(arg2, &data_1439a9538)
uint64_t result = sub_140b4e7c0(arg2, &data_1439a9538)

if (result.d s< 0xc)
    result = arg1[2]
    arg1[1].b = *(result + 8) | 0x80

return result
