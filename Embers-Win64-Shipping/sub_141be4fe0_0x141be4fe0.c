// 函数: sub_141be4fe0
// 地址: 0x141be4fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = *(arg1 + 0x28)
int128_t zmm0 = *arg2
int64_t* rcx = *(result + 0x1c8)
*(result + 0x120) = zmm0

if (rcx == 0)
    return result

char var_28_1 = 1
int64_t var_20 = 0
int32_t var_18_1 = 0
int128_t var_38 = zmm0
sub_140f60400(rcx, &var_38)
return sub_140745b20(&var_20)
