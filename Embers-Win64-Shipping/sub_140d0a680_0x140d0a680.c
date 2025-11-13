// 函数: sub_140d0a680
// 地址: 0x140d0a680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rbx_1 = zx.q(*(arg1 + 0x79)) + arg4
int64_t rax_1 = *arg2
bool arg_8 = (*(arg1 + 0x7b) & *rbx_1) != 0
(*(rax_1 + 0x158))(arg2, &arg_8, 1)
char rcx_1

if (arg_8 == 0)
    rcx_1 = 0
else
    rcx_1 = *(arg1 + 0x7a)

*rbx_1 = (not.b(*(arg1 + 0x7b)) & *rbx_1) | rcx_1
return 1
