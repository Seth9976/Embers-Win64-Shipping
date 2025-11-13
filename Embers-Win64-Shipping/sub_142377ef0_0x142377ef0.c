// 函数: sub_142377ef0
// 地址: 0x142377ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = 0
char rax
int32_t zmm0
rax, zmm0 = sub_141dc78d0(arg2, &arg_18)
void* rcx_1 = *(arg2 + 0x50)

if (rax == 0)
    zmm0 = sub_141e744f0(rcx_1, arg2)
else
    sub_141e89d80(rcx_1, arg2)

void var_28
sub_141e71360(&var_28)
char result = sub_141e8d400(arg2, 0, &var_28, zmm0)

if (result != 0)
    sub_141dbcc30(arg2)
    result = sub_141e74a30(*(arg2 + 0x50), &var_28)

if (rax != 0)
    int128_t zmm2_1 = arg_18
    *(arg2 + 0x185) = 2
    result = sub_141c46d20(arg2 + 0x1ac, zx.o(0), zmm2_1, 1)
    sub_141c45d50(arg2 + 0x1ac, arg_18)

return result
