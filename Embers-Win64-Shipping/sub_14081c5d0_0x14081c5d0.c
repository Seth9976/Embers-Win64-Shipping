// 函数: sub_14081c5d0
// 地址: 0x14081c5d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
*arg1 = &data_142dd6420
__builtin_memset(&arg1[5], 0, 0x18)
arg1[9] = 0
arg1[0xa] = 0
int64_t arg_8 = arg1[3]
int16_t* var_18
sub_140b63b70(&arg_8, &var_18)
int16_t* const rdx_1 = &data_142d40450
int32_t var_10

if (var_10 != 0)
    rdx_1 = var_18

int64_t arg_18
sub_140b58260(&arg_18, rdx_1, 1)
int16_t* rcx_2 = var_18
arg1[5] = arg_18

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

uint64_t rbx = *sub_140b58260(&arg_8, u"Default Instance", 1)
int64_t* rax_3 = sub_1408766e0()
void* rax_4 = sub_140d1dc20(arg2, arg1, rbx, rax_3, rax_3, 1, 0)
arg1[8] = rax_4
*(rax_4 + 0x28) = arg1
sub_14083eda0(rax_4)
return arg1
