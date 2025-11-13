// 函数: sub_1422b8ec0
// 地址: 0x1422b8ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x30)

if (rcx != 0)
    (**rcx)(rcx, 1)
    *(arg1 + 0x30) = 0

void*** result = j_sub_140a82f30(0x28)

if (result == 0)
    *(arg1 + 0x30) = 0
    return result

char rcx_1 = *(arg1 + 0x20)
result[2] = 0
result[3] = 0
result[4].b = rcx_1
result[1] = &data_142dd5b70
*result = &data_1433176d0
*(arg1 + 0x30) = result
return result
