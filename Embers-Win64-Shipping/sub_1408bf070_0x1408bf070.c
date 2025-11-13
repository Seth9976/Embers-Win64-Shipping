// 函数: sub_1408bf070
// 地址: 0x1408bf070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax = zx.q(*arg1)
int128_t result = zx.o(0)
float zmm7[0x4] = arg3
int32_t var_48

if (rax.d u<= 7)
    switch (rax)
        case 0
            return *(arg1 + 4)
        case 1
            result.d = (*(arg1 + 0xc)).d f- *(arg1 + 8)
            result.d = result.d f* arg5
            result.d = result.d f+ *(arg1 + 8)
        case 2
            return sub_1408beb20(&arg1[0x10], arg2, arg3, arg4)
        case 3
            return sub_1408be910(&arg1[0x98], arg2, arg3, arg4, arg5.d)
        case 4
            return *(arg1 + 0x1a8)
        case 5
            int128_t zmm0 = *(arg1 + 0x1b0)
            result.d = (*(arg1 + 0x1b8)).d f- zmm0.d
            result.d = result.d f* arg5
            result.d = result.d f+ zmm0.d
        case 6
            return *sub_1408bebf0(arg1 + 0x1c8, &var_48, arg2, zmm7, arg4[0])
        case 7
            int32_t zmm6_1
            float zmm7_1[0x4]
            uint128_t zmm8_1
            zmm6_1, zmm7_1, zmm8_1 = sub_1408bebf0(&arg1[0x3d0], &var_48, arg2, zmm7, arg4[0])
            int32_t var_58
            sub_1408bebf0(&arg1[0x5d8], &var_58, zmm8_1, zmm7_1, zmm6_1)
            result.d = var_58.d f- var_48
            result.d = result.d f* arg5
            result.d = result.d f+ var_48
return result
