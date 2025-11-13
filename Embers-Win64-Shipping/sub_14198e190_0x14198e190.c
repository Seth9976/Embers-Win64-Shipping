// 函数: sub_14198e190
// 地址: 0x14198e190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int32_t var_78 = 6
void* var_80 = nullptr
void** const var_88 = &data_143009d08
char var_70 = 0
sub_1405e4030(&var_80, 0)
void* rcx_1

if ((var_80.b & 1) == 0)
    rcx_1 = var_80
else
    rcx_1 = &var_80 + (var_80 s>> 1)

*rcx_1 = data_142f2cb30
void* rcx_2

if ((var_80.b & 1) == 0)
    rcx_2 = var_80
else
    rcx_2 = &var_80 + (var_80 s>> 1)

int128_t zmm0 = data_142ee7660
*(rcx_2 + 0x10) = 0x3f800000
*(rcx_2 + 0x14) = 0x3f800000
void* rcx_3

if ((var_80.b & 1) == 0)
    rcx_3 = var_80
else
    rcx_3 = &var_80 + (var_80 s>> 1)

*(rcx_3 + 0x20) = zmm0
void* rcx_4

if ((var_80.b & 1) == 0)
    rcx_4 = var_80
else
    rcx_4 = &var_80 + (var_80 s>> 1)

zmm0 = data_142d8c9b0
*(rcx_4 + 0x30) = 0
*(rcx_4 + 0x34) = 0x3f800000
void* rcx_5

if ((var_80.b & 1) == 0)
    rcx_5 = var_80
else
    rcx_5 = &var_80 + (var_80 s>> 1)

*(rcx_5 + 0x40) = zmm0
void* rcx_6

if ((var_80.b & 1) == 0)
    rcx_6 = var_80
else
    rcx_6 = &var_80 + (var_80 s>> 1)

zmm0 = data_142d3f660
*(rcx_6 + 0x50) = 0x3f800000
void* rcx_7

if ((var_80.b & 1) == 0)
    rcx_7 = var_80
else
    rcx_7 = &var_80 + (var_80 s>> 1)

*(rcx_7 + 0x60) = zmm0
void* rcx_8

if ((var_80.b & 1) == 0)
    rcx_8 = var_80
else
    rcx_8 = &var_80 + (var_80 s>> 1)

zmm0 = data_14300ab80
*(rcx_8 + 0x70) = 0
void* rcx_9

if ((var_80.b & 1) == 0)
    rcx_9 = var_80
else
    rcx_9 = &var_80 + (var_80 s>> 1)

*(rcx_9 + 0x80) = zmm0
void* rcx_10

if ((var_80.b & 1) == 0)
    rcx_10 = var_80
else
    rcx_10 = &var_80 + (var_80 s>> 1)

zmm0 = data_14300ab90
*(rcx_10 + 0x90) = 0xbf800000
*(rcx_10 + 0x94) = 0x3f800000
void* rcx_11

if ((var_80.b & 1) == 0)
    rcx_11 = var_80
else
    rcx_11 = &var_80 + (var_80 s>> 1)

*(rcx_11 + 0xa0) = zmm0
void* rcx_12

if ((var_80.b & 1) == 0)
    rcx_12 = var_80
else
    rcx_12 = &var_80 + (var_80 s>> 1)

*(rcx_12 + 0xb0) = 0x3f800000
*(rcx_12 + 0xb4) = 0xbf800000
zmm0 = data_143dbb1e0
int64_t* rcx_14 = data_143f0f180
int32_t var_34 = (1 << (data_1439c7a34).b) - 1
int64_t var_58
int64_t* var_90 = &var_58
void** const* var_50 = &var_88
var_58 = 0
int32_t var_48 = 1
int128_t var_44 = zmm0
char var_30 = 0
int64_t var_28 = 0
int32_t var_20 = 0
void var_68
(*(*rcx_14 + 0x498))(rcx_14, &var_68, &data_143f02b98, zx.q(var_78 << 5), 1, var_90)
sub_1405d1600(arg1 + 0x10, &var_68)
sub_1405d1550(&var_68)
int64_t result = sub_140a1d5c0(&var_80)
__security_check_cookie(rax_1 ^ &var_b8)
return result
