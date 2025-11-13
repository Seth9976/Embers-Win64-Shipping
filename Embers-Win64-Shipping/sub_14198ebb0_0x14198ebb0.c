// 函数: sub_14198ebb0
// 地址: 0x14198ebb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
char result_1 = *(arg1 + 0xc)
uint32_t result

if (result_1 != 4)
    result = zx.d(result_1)
else
    result = data_1439c7a08

if (result s>= 3)
    char rcx = (data_1439c7a34).b
    int128_t var_68
    int128_t* var_a8_1 = &var_68
    int32_t var_b0_1 = 8
    var_68 = zx.o(0)
    int64_t* rcx_1 = data_143f0f180
    int32_t var_44_1 = (1 << rcx) - 1
    wchar16 const* const var_38_1 = u"BlackCubeArray"
    int32_t var_58_1 = 1
    int128_t var_54_1 = data_143dbb1e0
    char var_40_1 = 0
    int32_t var_30_1 = 0
    void* var_90
    (*(*rcx_1 + 0x5f0))(rcx_1, &var_90, &data_143f02b98, 1, 1, 2, 1, var_b0_1, var_a8_1)
    sub_1408c8cf0(arg1 + 0x10, var_90)
    int32_t i = 0
    int32_t var_98 = 0
    
    do
        int64_t* rcx_3 = data_143f0f180
        var_a8_1.b = 0
        var_b0_1.q = &var_98
        char var_c0_1
        var_c0_1.d = 0
        int32_t* rax_6 = (*(*rcx_3 + 0x600))(rcx_3, &data_143f02b98, var_90, zx.q(i), 0, var_c0_1, 
            1, var_b0_1, var_a8_1)
        int32_t var_b8_2
        var_b8_2.b = 0
        var_c0_1.d = 0
        int32_t var_c8_3 = 0
        *rax_6 = 0
        int64_t* rcx_4 = data_143f0f180
        (*(*rcx_4 + 0x608))(rcx_4, &data_143f02b98, var_90, zx.q(i), var_c8_3, var_c0_1, var_b8_2)
        i += 1
    while (i u< 6)
    
    int64_t* rcx_5 = data_143f0f180
    int32_t var_7c_1 = 0x7f7fffff
    int32_t var_88 = 0
    int64_t var_84_1 = 0
    int64_t var_78_1 = 0
    char var_70_1 = 0
    (*(*rcx_5 + 0x28))(rcx_5, &var_98, &var_88)
    sub_1405d1600(arg1 + 0x18, &var_98)
    sub_1405d1550(&var_98)
    result = sub_1405d1550(&var_90)

__security_check_cookie(rax_1 ^ &var_e8)
return result
