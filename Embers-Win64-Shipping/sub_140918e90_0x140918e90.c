// 函数: sub_140918e90
// 地址: 0x140918e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = arg1[4].d
int16_t arg_8

if (((rcx - 2) & 0xfffffff5) != 0 || rcx == 0xa)
    int64_t* rcx_1 = arg1[1]
    arg_8 = 0x2c
    (*(*rcx_1 + 0x150))(rcx_1, &arg_8, 2)

(*(*arg1 + 0x10))(arg1, arg2)
int64_t* rcx_3 = arg1[1]
arg_8 = 0x3a
(*(*rcx_3 + 0x150))(rcx_3, &arg_8, 2)
int16_t* var_18
sub_140a2e390(&var_18, u"%lld", arg3)
int64_t* r9 = arg1[1]
int32_t var_10
int32_t rcx_6
int16_t* const rdx_3

if (var_10 == 0)
    rcx_6 = 0
    rdx_3 = &data_142d40450
else
    rdx_3 = var_18
    rcx_6 = var_10 - 1

int64_t result = (*(*r9 + 0x150))(r9, rdx_3, sx.q(rcx_6) * 2)
int16_t* rcx_8 = var_18

if (rcx_8 != 0)
    result = sub_140a74f90(rcx_8)

arg1[4].d = 8
return result
