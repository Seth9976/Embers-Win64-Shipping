// 函数: sub_142bfae70
// 地址: 0x142bfae70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rax = arg1

if (arg1 == 0)
    rax = sub_142c09c40()

int32_t var_18 = 0x10000
int32_t var_48 = 0
int128_t var_40
__builtin_memset(&var_40, 0, 0x15)
int32_t var_28 = 0
int64_t var_20 = 0
char var_14 = 0
int32_t* rax_2 = sub_142bf8580(&var_48, sub_142bf2890(rax))
int32_t** rax_3 = sub_140dc0ea0(1, 0x10)

if (rax_3 == 0)
    return &data_143ccb6b0

*rax_3 = rax_2
rax_3[1].d = arg2
int32_t* result_1 = sub_140dc0ea0(1, 0x170)
void* result = result_1

if (result_1 == 0)
    sub_142c09b70(*rax_3)
    j_sub_140a74f90(rax_3)
    data_143ccb6d8 = arg2
    return &data_143ccb6b0

*result_1 = 1
result_1[1] = 1
*(result_1 + 8) = 0
*(result + 0x10) = sub_142bf8990
*(result + 0x20) = sub_142bf8970
*(result + 0x18) = rax_3
*(result + 0x30) = 0xffffffff
*(result + 0x38) = result
sub_141e43d90(result + 0x48, result)
*(result + 0x28) = arg2
return result
