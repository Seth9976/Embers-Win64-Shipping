// 函数: sub_141bed450
// 地址: 0x141bed450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *(arg1 + 0x50)
int128_t zmm1 = *(arg1 + 0x38)

if (rdx == 0)
    return 

*(rdx + 0x30) = 1
*(rdx + 0x20) = zmm1
int64_t var_20 = 0
int32_t var_18_1 = 0
int128_t var_38_1 = zmm1
char var_28_1 = 1
sub_140692f90(rdx + 0x38, &var_20)
sub_140745b20(&var_20)
void* rdx_2 = *(arg1 + 0x50)

if (rdx_2 == 0)
    return 

*(rdx_2 + 0x48) = zx.d(*(arg1 + 0x48))
void* rdx_3 = *(arg1 + 0x50)

if (rdx_3 != 0)
    *(rdx_3 + 0x4c) = zx.d(*(arg1 + 0x49))
