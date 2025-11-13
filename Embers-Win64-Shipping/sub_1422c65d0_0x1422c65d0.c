// 函数: sub_1422c65d0
// 地址: 0x1422c65d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char var_20 = arg7
int32_t var_28 = arg6
int64_t var_30 = arg5
int64_t var_38 = arg4
int128_t zmm0_1 = sub_141dca0c0(arg1, arg2, arg3)

if (arg5 != 0)
    return zmm0_1

void* rax_3 = (*(*arg1 + 0x150))(arg1)
int128_t zmm6
zmm6.d = zmm0_1.d f+ 1f - *(arg1 + 0x9c) f/ *(rax_3 + 0x520)
return zmm6
