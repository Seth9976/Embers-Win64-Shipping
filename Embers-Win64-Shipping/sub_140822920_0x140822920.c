// 函数: sub_140822920
// 地址: 0x140822920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0xa] == 0)
    return 0

void*** rax = j_sub_140a82f30(0x248)
void*** result

if (rax == 0)
    result = nullptr
else
    result = sub_14081a720(rax, arg2, arg1, arg3)

(*result)[1](result, arg1, arg3)
return result
