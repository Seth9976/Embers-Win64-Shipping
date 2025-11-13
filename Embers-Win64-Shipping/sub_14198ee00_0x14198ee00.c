// 函数: sub_14198ee00
// 地址: 0x14198ee00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int32_t var_58 = 1
char rcx = (data_1439c7a34).b
int128_t var_68
int128_t* var_a0 = &var_68
int32_t var_a8 = 8
int32_t var_b0 = 1
var_68 = zx.o(0)
int64_t* rcx_1 = data_143f0f180
int32_t var_44 = (1 << rcx) - 1
wchar16 const* const var_38 = u"UintTexture"
int128_t var_54 = data_143dbb1e0
char var_40 = 0
int32_t var_30 = 0
void* var_98
(*(*rcx_1 + 0x560))(rcx_1, &var_98, &data_143f02b98, 1, 1, 0x30, 1, var_b0, var_a8, var_a0)
sub_1408c8cf0(arg1 + 0x10, var_98)
int64_t* rcx_3 = data_143f0f180
var_b0.b = 1
int32_t var_b8
var_b8.b = 0
char var_c0
void var_70
var_c0.q = &var_70
int32_t* rax_6 = (*(*rcx_3 + 0x510))(rcx_3, &data_143f02b98, var_98, 0, 1, var_c0, var_b8, var_b0)
int32_t r9 = data_1439c8d78
int32_t* r8_1 = rax_6
int32_t temp0 = divs.dp.d(sx.q(data_1439c8d74), r9)
char var_28
int32_t var_18

if (temp0 == 1)
    var_18 = 0
    int32_t i = 0
    
    if (r9 s> 0)
        char* rdx_6 = &var_18 - r8_1
        
        do
            i += 1
            *r8_1 = *(rdx_6 + r8_1)
            r8_1 += 1
        while (i s< data_1439c8d78)
else if (temp0 == 2)
    var_18.q = 0
    int32_t i_1 = 0
    
    if (r9 s> 0)
        int16_t* rdx_5 = &var_18 - r8_1
        
        do
            i_1 += 1
            *r8_1 = *(rdx_5 + r8_1)
            r8_1 += 2
        while (i_1 s< data_1439c8d78)
else if (temp0 == 4)
    var_28.q = 0
    int32_t i_2 = 0
    int64_t var_24 = 0
    
    if (r9 s> 0)
        void* rdx_4 = &var_28 - r8_1
        
        do
            i_2 += 1
            *r8_1 = *(rdx_4 + r8_1)
            r8_1 = &r8_1[1]
        while (i_2 s< data_1439c8d78)

int64_t* rcx_4 = data_143f0f180
int32_t var_c8_1
var_c8_1.b = 0
(*(*rcx_4 + 0x518))(rcx_4, &data_143f02b98, var_98, 0, var_c8_1, 1)
int64_t* rcx_5 = data_143f0f180
int32_t var_84 = 0x7f7fffff
int32_t var_90 = 0
int64_t var_8c = 0
int64_t var_80 = 0
char var_78 = 0
(*(*rcx_5 + 0x28))(rcx_5, &var_18, &var_90)
sub_1405d1600(arg1 + 0x18, &var_18)
sub_1405d1550(&var_18)
int64_t* rcx_8 = data_143f0f180
int16_t var_27 = 0x100
int64_t var_24_1 = 0
var_28 = *(*(arg1 + 0x10) + 0x3c)
int32_t var_1c = 0
var_c8_1.q = &var_28
(*(*rcx_8 + 0x5d0))(rcx_8, &var_18, &data_143f02b98)
sub_1405d1600(arg1 + 0x48, &var_18)
sub_1405ec8a0(&var_18)
int64_t result = sub_1405d1550(&var_98)
__security_check_cookie(rax_1 ^ &var_e8)
return result
