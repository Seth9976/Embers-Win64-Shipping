// 函数: sub_140a94030
// 地址: 0x140a94030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x58)

if (result == 0)
    return result

result[1].d = 1
*(result + 0xc) = 1
*result = &data_142e66708
result[2] = &data_142e63e68
result[3] = 0
result[4] = 0
result[5] = &data_142e63698
int16_t rcx = *(sub_140aae970() + 0x120)
result[5] = &data_142e63bd8
result[6].w = rcx
sub_1405d9400()
result[7] = data_143cd6fd8
void* rcx_2 = data_143cd6fe0
result[8] = rcx_2

if (rcx_2 != 0)
    *(rcx_2 + 8) += 1

result[9].d = 0
result[2] = &data_142e64568
return result
