// 函数: sub_141019ea0
// 地址: 0x141019ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0xc8)

if (result == 0)
    return result

int64_t rbx_1 = *(arg1 + 0x30)
sub_140fd9f50(result, arg2, arg3)
result[0xe] = rbx_1
*result = &data_142efd980
result[0x10].d = 0xffffffff
*(result + 0x84) = 4
result[0x11] = rbx_1
result[0xf] = &data_142efd940
result[0x13].d = 0
__builtin_memset(&result[0x14], 0, 0x22)
result[0x12].d = 1
*(result + 0x94) = 0xffffffff
int64_t rdx_1 = result[0xf]
(*(rdx_1 + 8))(&result[0xf], rdx_1)
return result
