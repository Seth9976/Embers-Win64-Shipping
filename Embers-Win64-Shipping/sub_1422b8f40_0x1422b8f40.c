// 函数: sub_1422b8f40
// 地址: 0x1422b8f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x28)

if (rcx != 0)
    (**rcx)(rcx, 1)
    *(arg1 + 0x28) = 0

void*** result = j_sub_140a82f30(0x28)

if (result == 0)
    *(arg1 + 0x28) = 0
    return result

char rcx_1 = *(arg1 + 0x20)
*result = &data_1433173f0
result[2] = 0
result[3] = 0
result[1] = &data_142dd66a0
result[4].b = rcx_1
*(arg1 + 0x28) = result
return result
