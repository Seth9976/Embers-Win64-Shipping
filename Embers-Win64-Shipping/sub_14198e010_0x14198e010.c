// 函数: sub_14198e010
// 地址: 0x14198e010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
char result_1 = *(arg1 + 0xc)
uint32_t result

if (result_1 != 4)
    result = zx.d(result_1)
else
    result = data_1439c7a08

if (result s>= 3)
    char rcx = (data_1439c7a34).b
    int128_t zmm0 = data_143dbb1e0
    void** const var_68 = &data_1430083d8
    void** const* var_58
    void** const** var_a8_1 = &var_58
    int32_t var_b0_1 = 8
    int32_t var_b8_1 = 1
    int64_t* rcx_1 = data_143f0f180
    int32_t var_34_1 = (1 << rcx) - 1
    var_58 = &var_68
    wchar16 const* const var_28_1 = u"BlackArrayTexture"
    int32_t var_60_1 = 0
    int32_t var_48_1 = 1
    int128_t var_44_1 = zmm0
    int64_t var_50_1 = 0
    char var_30_1 = 0
    int32_t var_20_1 = 0
    void* var_70
    (*(*rcx_1 + 0x578))(rcx_1, &var_70, &data_143f02b98, 1, 1, 1, 2, 1, var_b8_1, var_b0_1, 
        var_a8_1)
    sub_1408c8cf0(arg1 + 0x10, var_70)
    int64_t* rcx_3 = data_143f0f180
    int32_t var_8c_1 = 0x7f7fffff
    int32_t var_98 = 0
    int64_t var_94_1 = 0
    int64_t var_88_1 = 0
    char var_80_1 = 0
    void var_78
    (*(*rcx_3 + 0x28))(rcx_3, &var_78, &var_98)
    sub_1405d1600(arg1 + 0x18, &var_78)
    sub_1405d1550(&var_78)
    result = sub_1405d1550(&var_70)

__security_check_cookie(rax_1 ^ &var_f8)
return result
