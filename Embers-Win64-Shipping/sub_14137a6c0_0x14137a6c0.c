// 函数: sub_14137a6c0
// 地址: 0x14137a6c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int32_t var_78 = 0xf00
void* var_80 = nullptr
void** const var_88 = &data_142da8520
char var_70 = 0
sub_1407c36f0(&var_80, 0)
void* r8

if ((var_80.b & 1) == 0)
    r8 = var_80
else
    r8 = &var_80 + (var_80 s>> 1)

for (int32_t i = 0; i u< 0x14; i += 1)
    for (int32_t j = 0; j u< 0x20; )
        int16_t rax_5 = j.w + i.w * 0x21
        j += 1
        *r8 = rax_5
        *(r8 + 2) = rax_5 + 0x21
        *(r8 + 4) = rax_5 + 1
        *(r8 + 6) = rax_5 + 0x22
        *(r8 + 8) = rax_5 + 1
        *(r8 + 0xa) = rax_5 + 0x21
        r8 += 0xc

char rcx_2 = (data_1439c7a34).b
int128_t zmm0 = data_143dbb1e0
int64_t var_58
int64_t* var_98 = &var_58
var_58 = 0
int64_t* rcx_3 = data_143f0f180
int32_t var_34 = (1 << rcx_2) - 1
int32_t var_48 = 1
void** const* var_50 = &var_88
int128_t var_44 = zmm0
char var_30 = 0
int64_t var_28 = 0
int32_t var_20 = 0
void var_68
(*(*rcx_3 + 0x4d8))(rcx_3, &var_68, &data_143f02b98, 2, var_78 * 2, 1, var_98)
sub_1405d1600(arg1 + 0x10, &var_68)
sub_14081c9d0(&var_68)
int64_t result = sub_140a1d5c0(&var_80)
__security_check_cookie(rax_1 ^ &var_c8)
return result
