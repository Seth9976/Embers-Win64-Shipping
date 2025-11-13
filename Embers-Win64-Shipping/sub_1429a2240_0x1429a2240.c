// 函数: sub_1429a2240
// 地址: 0x1429a2240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = -2
char arg_8
(*(*arg2 + 0x10))(arg2, &arg_8, 4)
int32_t rdi_6 = ((sx.d(arg5) << 8 | zx.d(arg4)) << 8 | zx.d(arg3)) << 8 | zx.d(arg_8)
(*(*arg2 + 0x10))(arg2, &arg_8, 4)
int32_t var_20
sub_1429a2000(&var_20, rdi_6, 
    ((sx.d(arg5) << 8 | zx.d(arg4)) << 8 | zx.d(arg3)) << 8 | zx.d(arg_8), 0)
int32_t var_1c
int32_t i_2 = var_1c * var_20

if (i_2 s> 0)
    int64_t var_18
    int64_t rdi_8 = var_18 + 2
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        (*(*arg2 + 0x10))(arg2, rdi_8 - 2, 1)
        (*(*arg2 + 0x10))(arg2, rdi_8 - 1, 1)
        (*(*arg2 + 0x10))(arg2, rdi_8, 1)
        (*(*arg2 + 0x10))(arg2, rdi_8 + 1, 1)
        rdi_8 += 4
        i = i_1
        i_1 -= 1
    while (i != 1)

sub_1429a2170(arg1 + 8, &var_20)
return sub_142985d60(&var_20)
