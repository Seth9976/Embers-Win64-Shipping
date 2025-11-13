// 函数: sub_1428b4dc0
// 地址: 0x1428b4dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)
int32_t var_28 = sub_142890ef0(arg1)
void* rax_1 = sub_142890ec0(arg1)
int64_t rbp = *(rax_1 + 0x120)
int64_t* rax_2 = sub_142890ea0(arg1)
char* rax_3 = sub_1406219d0(arg1)

if (rbp == 0)
    sub_1428d0690(arg3, arg2, arg4, rax_1, arg5, rax_3, rax_2, &var_28, *(rax_1 + 0x118))
else
    sub_1428d0810(arg3, arg2, arg4, rax_1, rax_3, rax_2, &var_28, rbp)

sub_142890f20(arg1, var_28)
return 1
