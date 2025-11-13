// 函数: sub_140850cc0
// 地址: 0x140850cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0 || (*(arg1 + 0xa4) != 1 && *(*(*(arg4 + 0x778) + 0x98) + 0xb0) u<= 0))
    return 0

void*** result_1 = j_sub_140a82f30(0x28)
void*** result = result_1

if (result_1 == 0)
    result = nullptr
else
    sub_14081a280(result_1, arg4)
    result[4] = 0
    *result = &data_142ddb3e8

int64_t* rcx_2 = **(arg1 + 0x1c8)
int64_t rdx_2 = *rcx_2
result[4] = (*(rdx_2 + 0x280))(rcx_2, rdx_2)
result[1] = *(arg1 + 0x1d8)
return result
