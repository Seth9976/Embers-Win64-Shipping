// 函数: sub_14198e940
// 地址: 0x14198e940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int32_t var_58 = 1
char rcx = (data_1439c7a34).b
char var_40 = 0
int128_t var_68 = zx.o(0)
int64_t* rcx_1 = data_143f0f180
int32_t var_44 = (1 << rcx) - 1
wchar16 const* const var_38 = u"SolidColorCube"
int32_t var_30 = 0
int128_t var_54 = data_143dbb1e0
void* var_98
(*(*rcx_1 + 0x5e8))(rcx_1, &var_98, &data_143f02b98, 1, *(arg1 + 0x4c), 1, 8, &var_68)
sub_1408c8cf0(arg1 + 0x10, var_98)
void var_90

for (int32_t i = 0; i u< 6; i += 1)
    int64_t* rcx_3 = data_143f0f180
    char var_c8
    var_c8.d = 0
    int32_t* rax_6 =
        (*(*rcx_3 + 0x600))(rcx_3, &data_143f02b98, var_98, zx.q(i), var_c8, 0, 1, &var_90, 0)
    
    if (*(arg1 + 0x48) == 0)
        *rax_6 = *(arg1 + 0x50)
    else
        memset(rax_6, 0, sx.q((&data_1439c85f4)[sx.q(*(arg1 + 0x4c)) * 0xa]))
    
    int64_t* rcx_6 = data_143f0f180
    int32_t var_b8_1
    var_b8_1.b = 0
    var_c8.d = 0
    (*(*rcx_6 + 0x608))(rcx_6, &data_143f02b98, var_98, zx.q(i), var_c8, 0, var_b8_1)

int64_t* rcx_7 = data_143f0f180
int32_t var_7c = 0x7f7fffff
int32_t var_88 = 0
int64_t var_84 = 0
int64_t var_78 = 0
char var_70 = 0
(*(*rcx_7 + 0x28))(rcx_7, &var_90, &var_88)
sub_1405d1600(arg1 + 0x18, &var_90)
sub_1405d1550(&var_90)
int64_t result = sub_1405d1550(&var_98)
__security_check_cookie(rax_1 ^ &var_e8)
return result
