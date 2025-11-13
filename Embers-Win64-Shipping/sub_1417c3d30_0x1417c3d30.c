// 函数: sub_1417c3d30
// 地址: 0x1417c3d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x18)

if (result == 0)
    return result

int64_t* rcx = *(arg1 + 0x10)
int64_t rdi_1

if (rcx == 0)
    rdi_1 = 0
else
    int64_t rdx_1 = *rcx
    rdi_1 = (*(rdx_1 + 0x18))(rcx, rdx_1)

result[1] = 0
*result = &data_142fc9648
sub_140b58170(&result[1], &data_1437020ab, 1)
*result = &data_142fc9918
result[2] = rdi_1
return result
