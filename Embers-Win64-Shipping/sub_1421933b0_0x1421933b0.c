// 函数: sub_1421933b0
// 地址: 0x1421933b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x160)
void*** result

if (rax == 0)
    result = nullptr
else
    result = sub_142180a80(rax)

if ((*(*arg1 + 0x218))(arg1, result) != 0)
    return result

if (result != 0)
    (**result)(result, 1)

return 0
