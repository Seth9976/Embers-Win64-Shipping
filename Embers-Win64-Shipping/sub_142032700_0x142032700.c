// 函数: sub_142032700
// 地址: 0x142032700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax_1 = (*(*arg1 + 0x180))()
char rax_3

if (rax_1 != 1)
    rax_3 = (*(*arg1 + 0x180))(arg1)

int64_t rbx

if (rax_1 == 1 || rax_3 == 2)
    rbx.b = 1
else
    rbx.b = 0

int64_t* rcx_1 = arg1[3]

if (rcx_1 == 0)
    return zx.q(rbx.b)

if ((*(*rcx_1 + 0x340))(rcx_1) == 0 && rbx.b != 0)
    return 1

return 0
