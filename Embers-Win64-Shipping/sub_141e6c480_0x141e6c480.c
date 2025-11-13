// 函数: sub_141e6c480
// 地址: 0x141e6c480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm0 = *arg2
uint64_t var_28 = 0
int32_t var_20 = 1
sub_1405a4be0(&var_28, 1, 0)
*var_28 = zmm0
int32_t result = (*(*arg1 + 0x318))(arg1, &var_28)
uint64_t rcx_2 = var_28

if (rcx_2 == 0)
    return result

sub_140a74f90(rcx_2)
return result
