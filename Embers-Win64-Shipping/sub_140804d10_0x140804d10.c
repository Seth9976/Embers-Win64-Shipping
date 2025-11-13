// 函数: sub_140804d10
// 地址: 0x140804d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18
(*(*arg2 + 0x38))(arg2, &var_18)
char rax_2 = sub_14083e100()
int64_t rcx_2 = var_18
int64_t rdi
rdi.b = rax_2 == 0

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

if (rdi.b != 0)
    return 1

char rax_5 = sub_140834940(arg1 + 0x118, (*(*arg2 + 0x38))(arg2, &var_18))
int64_t rcx_5 = var_18

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

return zx.q(rax_5)
