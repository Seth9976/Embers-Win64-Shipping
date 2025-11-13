// 函数: sub_1423e25a0
// 地址: 0x1423e25a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t result = __security_cookie ^ &var_c8
int64_t result_1 = result
int64_t r8 = *(arg1 + 0x88)
void var_68

if (r8 != 0)
    int64_t* rcx = data_143f0f180
    (*(*rcx + 0x338))(rcx, &var_68, r8)
    sub_1405d1600(arg1 - 8, &var_68)
    result = sub_1405d1550(&var_68)

if ((*(arg1 + 0xa8) & 1) != 0)
    int32_t r10_1 = *(arg1 + 0x98)
    int32_t rdx_3 = *(arg1 + 0x9c)
    int32_t var_78_1 = 1
    *(arg1 + 0x50) = r10_1
    *(arg1 + 0x54) = rdx_3
    int32_t rax_3 = (1 << (data_1439c7a34).b) - 1
    int128_t var_58 = zx.o(0)
    int32_t var_34_1 = rax_3
    int32_t var_38_1 = data_1439c7b18
    void* r8_1
    r8_1.b = 2
    char var_30_1 = 0
    int64_t var_28_1 = 0
    int32_t var_20_1 = 0
    int128_t var_48_1 = data_1439c7b08
    sub_1421be920(r10_1, rdx_3, r8_1.b, 1, 0, 1, 0, &var_58, arg1 + 0x38, arg1 + 0x68, var_78_1)
    int128_t zmm1_1 = data_143dbb1e0
    uint64_t r9_1 = zx.q(*(arg1 + 0x50))
    var_48_1.d = 1
    int512_t zmm0_1
    zmm0_1.o = zx.o(0)
    int64_t* rcx_6 = data_143f0f180
    int32_t var_34_2 = (1 << (data_1439c7a34).b) - 1
    int128_t* var_80_2 = &var_58
    int32_t rax_8 = *(arg1 + 0x54)
    int64_t* var_88_1
    var_88_1.d = 0x40000
    int128_t* var_90_1
    var_90_1.d = 1
    var_58 = zx.o(0)
    var_48_1 = zmm1_1
    char var_30_2 = 0
    int64_t var_28_2 = 0
    int32_t var_20_2 = 0
    char var_98_1
    var_98_1.d = 1
    int32_t var_a0_1
    var_a0_1.b = 2
    (*(*rcx_6 + 0x560))(zmm0_1, &var_68, &data_143f02b98, r9_1, rax_8, var_a0_1, var_98_1, 
        var_90_1, var_88_1, var_80_2)
    sub_1405d1600(arg1 + 0x70, &var_68)
    result = sub_1405d1550(&var_68)

__security_check_cookie(result_1 ^ &var_c8)
return result
