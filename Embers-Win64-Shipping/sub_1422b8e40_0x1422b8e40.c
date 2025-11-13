// 函数: sub_1422b8e40
// 地址: 0x1422b8e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x30)

if (rcx != 0)
    (**rcx)(rcx, 1)

*(arg1 + 0x30) = 0
void*** result = j_sub_140a82f30(0x28)

if (result == 0)
    *(arg1 + 0x30) = 0
    return result

result[2] = 0
result[3] = 0
result[4].b = 1
*result = &data_143317378
result[1] = &data_1433173b0
*(arg1 + 0x30) = result
return result
