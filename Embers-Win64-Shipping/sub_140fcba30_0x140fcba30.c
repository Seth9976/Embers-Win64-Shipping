// 函数: sub_140fcba30
// 地址: 0x140fcba30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
char* rdi = arg2
arg2.b = 2

if ((*(*arg1 + 0x120))(arg1, arg2, 0) != 1)
    return 0

char rax_3 = (*(*arg1 + 0x120))(arg1, 0, *arg3)
*rdi = rax_3 == 0
return zx.q(rax_3 != 2)
