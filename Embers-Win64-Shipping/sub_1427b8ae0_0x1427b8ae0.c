// 函数: sub_1427b8ae0
// 地址: 0x1427b8ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x24].b != 0)
    sub_1427b8ff0(arg1 + 0x80, arg3, arg1[0x25])

char rax_1 = (*(*arg1 + 0x2d0))(arg1, arg3)
int64_t r9 = *arg1

if (rax_1 == 0)
    (*(r9 + 0x320))(arg1, arg3, arg4, r9)
    *arg2 = 2
else
    (*(r9 + 0x328))(arg1, arg3, arg4, r9)
    arg1[0x26].b = 0
    *arg2 = 3

*(arg2 + 8) = 0
*(arg2 + 0x18) = 0
arg2[4] = 0x63
return arg2
