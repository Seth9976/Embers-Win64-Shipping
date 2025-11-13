// 函数: sub_141f3ea10
// 地址: 0x141f3ea10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_e8

if ((arg1[0x1f].b & 4) != 0)
    int32_t rbx_1 = *(arg1 + 0xcc)
    uint128_t zmm6 = zx.o(*(arg1 + 0xc4))
    var_e8 = arg4
    uint64_t var_d8
    int64_t* rax_2 = (*(*arg1 + 0x560))(arg5, &var_d8, arg2, arg3, var_e8)
    uint64_t var_30_1 = zmm6.q
    int32_t var_28_1 = rbx_1
    *(arg1 + 0xc4) = *rax_2
    *(arg1 + 0xcc) = rax_2[1].d
    int128_t zmm1 = arg2[1]
    uint128_t var_b8 = *arg2
    int128_t var_a8_1 = zmm1
    uint128_t var_98_1 = arg2[2]
    int128_t var_88_1 = arg2[3]
    uint128_t var_78_1 = arg2[4]
    int128_t var_68_1 = arg2[5]
    uint128_t var_58_1 = arg2[6]
    uint64_t var_38_1 = arg2[8].q
    int128_t var_48_1 = arg2[7]
    uint128_t zmm6_1 = sub_1405a9f90(&arg1[0x25], &var_b8)
    uint128_t zmm0 = zx.o(*(arg1 + 0xc4))
    int32_t rax_4 = *(arg1 + 0xcc)
    var_d8 = zmm0.q
    int32_t var_d0_1 = rax_4
    void var_c8
    uint128_t zmm7
    uint128_t zmm8
    uint128_t zmm9
    int64_t* rax_5 = sub_141f41d80(arg1, &var_c8, &var_d8, arg3, zmm0, zmm6_1, zmm7, zmm8, zmm9)
    arg6 = *(arg1 + 0x11c)
    *(arg1 + 0xc4) = *rax_5
    int32_t result = rax_5[1].d
    *(arg1 + 0xcc) = result
    arg5 = arg1[0x19].d
    arg3 = *(arg1 + 0xc4)
    zmm1 = *(arg1 + 0xcc)
    arg3.d = arg3.d f* arg3.d
    arg5.d = arg5.d f* arg5.d
    zmm1.d = zmm1.d f* zmm1.d
    arg3.d = arg3.d f+ arg5.d
    arg6.d = arg6.d f* arg6.d
    arg3.d = arg3.d f+ zmm1.d
    
    if (arg3.d f>= arg6.d)
        return result

return (*(*arg1 + 0x520))(arg1, arg2, arg3, arg6, var_e8)
