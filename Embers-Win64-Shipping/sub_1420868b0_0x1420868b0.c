// 函数: sub_1420868b0
// 地址: 0x1420868b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result
uint128_t zmm6_1
result, zmm6_1 = sub_142099320(arg1)

if (result != 0 && arg2 != 0)
    int64_t var_c0_1 = zmm6_1.q
    int128_t zmm11 = data_14399f5c0
    int64_t var_b8_1 = 0
    char var_b0_1 = 0
    int128_t var_a0_1 = zmm11
    int64_t var_a8_1 = 0
    void** const var_c8 = &data_14328aaf8
    int64_t var_90
    __builtin_memset(&var_90, 0, 0x20)
    int64_t var_70_1 = 1
    double (* var_78)[0x2]
    sub_14090a6a0(&var_78)
    double (* rax)[0x2] = var_78
    *rax = _mm_unpacklo_pd(zmm6_1, arg6)
    rax[1] = zmm11
    rax[2] = _mm_unpacklo_pd(zx.o(arg4), arg7)
    rax[3] = zmm11
    rax[4] = _mm_unpacklo_pd(zx.o(arg5), arg8)
    rax[5] = zmm11
    var_78[1] = *arg9
    var_78[3] = *arg10
    var_78[5] = *arg11
    int128_t var_88
    var_88.q = (*(*arg2 + 0x280))(arg2)
    result = sub_142409850(*(arg1 + 0x270), &var_c8)
    double (* rcx_6)[0x2] = var_78
    var_c8 = &data_14328aaf8
    
    if (rcx_6 != 0)
        return sub_140a74f90(rcx_6)

return result
