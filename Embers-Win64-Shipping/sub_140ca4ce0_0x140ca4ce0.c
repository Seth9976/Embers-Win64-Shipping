// 函数: sub_140ca4ce0
// 地址: 0x140ca4ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = *(*arg3 + 8)
*(rbp + 0x2c) += 1
char rax_1 = *(rbp + 0x28)
int64_t result

if ((rax_1 & 3) != 0 && (rax_1 & 0x10) == 0)
    result = (*(*arg1 + 0x290))(arg1, arg3, arg2, arg1[8], sub_140d209c0(arg2), 0)
else if (*(rbp + 0x30) == 0)
    result = (*(*arg1 + 0x280))(arg1, arg3, arg2)
else
    result = sub_140ca4a60(arg1, arg3, arg2, sub_140d209c0(arg2), arg1[8])

*(rbp + 0x2c) -= 1
return result
