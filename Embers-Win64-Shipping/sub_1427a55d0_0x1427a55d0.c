// 函数: sub_1427a55d0
// 地址: 0x1427a55d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x1e0)
void*** result

if (rax == 0)
    result = nullptr
else
    result = sub_14279c1d0(rax, arg1)

if (*(arg1 + 0x461) != 0)
    result[0x35] = arg1 + 0x462
    result[0x36] = arg1 + 0x463
    result[0x37] = arg1 + 0x464

result[0x38] = &arg1[0x84]
result[0x39] = arg1 + 0x424
result[0x3a] = arg1 + 0x425
return result
