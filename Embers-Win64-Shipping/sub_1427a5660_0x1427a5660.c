// 函数: sub_1427a5660
// 地址: 0x1427a5660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result_1 = j_sub_140a82f30(0x1a0)
void*** result = result_1

if (result_1 == 0)
    result = nullptr
else
    sub_1422883b0(result_1, arg1, 0)
    *result = &data_1434b5ef0
    *(result + 0x150) = *(arg1 + 0x408)
    result[0x2c] = arg1[0x85]
    result[0x2d].d = arg1[0x86].d
    *(result + 0x16c) = *(arg1 + 0x434)
    result[0x2e].d = arg1[0x87].d
    *(result + 0x174) = *(arg1 + 0x43c)
    result[0x2f].b = arg1[0x88].b
    *(result + 0x17c) = arg1[0x83].d

result[0x30] = &arg1[0x84]
result[0x31] = arg1 + 0x424
result[0x32] = arg1 + 0x425
return result
