// 函数: sub_141be6480
// 地址: 0x141be6480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = arg2.d
int32_t zmm1 = arg2:4.d
*(arg1 + 0x260) = result
*(arg1 + 0x264) = zmm1
int64_t* rcx = *(arg1 + 0x290)

if (rcx == 0)
    return result

int32_t result_1 = result
int64_t var_18 = 0
int32_t var_10_1 = 0
int32_t var_24_1 = zmm1
char var_20_1 = 1
sub_140f8cd10(rcx, &result_1)
return sub_140745b20(&var_18)
