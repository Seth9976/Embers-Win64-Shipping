// 函数: sub_141d98550
// 地址: 0x141d98550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x10) = 1
int64_t var_98 = 0
int32_t var_90 = 0
int64_t var_88
__builtin_memset(&var_88, 0, 0x24)
int64_t* rcx = *arg1
int64_t var_60 = 0
int64_t var_58 = 0
int32_t var_50 = 0xffffffff
int64_t var_48
__builtin_memset(&var_48, 0, 0x40)
sub_141da1e80(rcx, &arg1[0xf], &var_98, 0)
sub_140a464c0()
int16_t* const rdx_1

if (arg1[2].d == 0)
    rdx_1 = &data_142d40450
else
    rdx_1 = arg1[1]

(*(data_14399ea08 + 0x30))(&data_14399ea08, rdx_1, 0, 0, 0)
*(arg2 + 0x1c) = arg1[0xd].d
*(arg2 + 0x20) = *(arg1 + 0x6c)
sub_140597df0(arg2 + 0x28, &arg1[5])
*(arg2 + 0x48) = 1
void arg_8
*(arg2 + 0x38) = *sub_140b21590(&arg_8)
sub_14081d8c0(arg2 + 0x50, &arg1[0x11])
int64_t* rcx_5 = *arg1
sub_141da40c0(rcx_5, &rcx_5[0x74], arg2 + 0x18)
*(arg2 + 8) = 0
int64_t var_18

if (var_18 != 0)
    sub_140a74f90(var_18)

int64_t var_28
sub_141d94e70(&var_28)
int64_t var_38
int64_t result = sub_141d94e70(&var_38)
int64_t rcx_9 = var_48

if (rcx_9 != 0)
    result = sub_140a74f90(rcx_9)

if (var_60 != 0)
    result = sub_140a74f90(var_60)

int64_t rcx_11 = var_88

if (rcx_11 == 0)
    return result

return sub_140a74f90(rcx_11)
