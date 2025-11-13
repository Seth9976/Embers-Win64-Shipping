// 函数: sub_1427443e0
// 地址: 0x1427443e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x48)

if (rcx == 0)
    return &__return_addr

int128_t zmm6 = *(arg4 + 4)
int128_t zmm8 = *(arg4 + 8)
int32_t var_68 = (*arg4).d
float var_5c = *arg3
int32_t var_64_1 = zmm6.d
int32_t var_58_1 = arg3[1].d
int32_t var_60_1 = zmm8.d
float var_54_1 = arg3[2]
return (*(*rcx + 0x188))(rcx, arg2, arg5, &var_5c, &var_68, 0xffffffff, 0)
