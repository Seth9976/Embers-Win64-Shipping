// 函数: sub_14198dd40
// 地址: 0x14198dd40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int128_t zmm0 = data_143dbb1e0
int32_t var_88 = 0
int32_t var_48 = 1
void** const var_90 = &data_1430083d8
void** const* var_58
void** const** var_a0 = &var_58
int32_t var_a8 = 8
int64_t var_50 = 0
char var_30 = 0
void* var_98
int64_t* rdx = &var_98
int64_t* rcx_1 = data_143f0f180
bool cond:0 = data_1439c7a17 == 0
int32_t var_34 = (1 << (data_1439c7a34).b) - 1
var_58 = &var_90
int32_t var_20 = 0
int128_t var_44 = zmm0
int32_t var_b0 = 1

if (cond:0)
    int64_t var_28_1 = 0
    (*(*rcx_1 + 0x560))(rcx_1, rdx, &data_143f02b98, 1, 1, 0x3c, 1, var_b0, var_a8, var_a0)
    sub_1408c8cf0(arg1 + 0x10, var_98)
    sub_1405d1550(&var_98)
else
    int32_t var_b8
    var_b8.b = 0x3c
    wchar16 const* const var_28 = u"BlackVolumeTexture"
    char var_c0
    var_c0.d = 1
    (*(*rcx_1 + 0x580))(rcx_1, rdx, &data_143f02b98, 1, 1, var_c0, var_b8, var_b0, var_a8, var_a0)
    sub_1408c8cf0(arg1 + 0x10, var_98)
    sub_14081c9d0(&var_98)

int64_t* rcx_6 = data_143f0f180
int32_t var_74 = 0x7f7fffff
int32_t var_80 = 0
int64_t var_7c = 0
int64_t var_70 = 0
char var_68 = 0
(*(*rcx_6 + 0x28))(rcx_6, &var_98, &var_80)
sub_1405d1600(arg1 + 0x18, &var_98)
int64_t result = sub_1405d1550(&var_98)
__security_check_cookie(rax_1 ^ &var_e8)
return result
