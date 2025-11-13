// 函数: sub_141842e40
// 地址: 0x141842e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* const r8

if (arg2[1].d == 0)
    r8 = &data_142d40450
else
    r8 = *arg2

int64_t* rcx = *(arg1 + 8)
int64_t* arg_8
(*(*rcx + 0x48))(rcx, &arg_8, r8, 0)
int64_t* rdx_1 = arg_8

if (rdx_1 == 0)
    *arg3 = 1
    return 0

void*** result = sub_141842a60(arg1, rdx_1, arg3, arg4, arg5)
int64_t* rcx_2 = arg_8
(*(*rcx_2 + 0x1b8))(rcx_2)
int64_t* rcx_3 = arg_8

if (rcx_3 != 0)
    (**rcx_3)(rcx_3, 1)

return result
