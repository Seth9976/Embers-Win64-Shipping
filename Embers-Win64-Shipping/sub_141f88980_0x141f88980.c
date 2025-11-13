// 函数: sub_141f88980
// 地址: 0x141f88980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
arg2[1] = 0
int64_t arg_8 = *(arg1 - 0x10)
int16_t* var_28
sub_140b63b70(&arg_8, &var_28)
int16_t* const rdx_1 = &data_142d40450
int32_t var_20

if (var_20 != 0)
    rdx_1 = var_28

void arg_10
int64_t rcx_2 = *sub_140b58260(&arg_10, rdx_1, 1)
int64_t rbx_1 = sx.q(arg2[1].d)
void* var_10 = arg1 + 8
int32_t rax_3 = (rbx_1 + 1).d
arg2[1].d = rax_3

if (rax_3 s> *(arg2 + 0xc))
    sub_1405a4f90(arg2)

*(*arg2 + rbx_1 * 0x10) = rcx_2.o
int16_t* rcx_6 = var_28

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

return arg2
