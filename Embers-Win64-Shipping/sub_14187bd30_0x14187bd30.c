// 函数: sub_14187bd30
// 地址: 0x14187bd30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result_1 = j_sub_140a82f30(0x70)
void*** result = result_1

if (result_1 == 0)
    result = nullptr
else
    int64_t rax = *arg1
    int128_t var_48_1 = *arg2
    int128_t zmm0_1 = arg2[1]
    *arg1 = 0
    int32_t rax_1 = arg1[1].d
    int32_t rax_2 = *(arg1 + 0xc)
    arg1[1] = 0
    void var_18
    sub_14181d6d0(&var_18, &arg1[2])
    *result = &data_142fe7ba8
    result[1] = 0
    result[1] = rax
    result[2].d = rax_1
    *(result + 0x14) = rax_2
    int32_t var_20_1
    var_20_1.q = 0
    sub_14181d6d0(&result[3], &var_18)
    *(result + 0x28) = var_48_1
    *(result + 0x38) = zmm0_1
    __builtin_memset(&result[9], 0, 0x24)
    sub_1418221b0(&var_18)

sub_141889bc0(result)
sub_1418221b0(&arg1[2])
int64_t rcx_5 = *arg1

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

return result
