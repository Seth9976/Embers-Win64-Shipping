// 函数: ?getZName@UnDecorator@@CA?AVDName@@_N0@Z
// 地址: 0x142317d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int64_t* rax_3 = (*(*(arg1 + 0x30) + 0x28))(arg1 + 0x30)
char rcx_1 = (data_1439c7a34).b
int128_t zmm0 = data_143dbb1e0
int64_t var_68 = 0
char var_40 = 0
int32_t var_58 = 1
int64_t var_38 = 0
int32_t var_44 = (1 << rcx_1) - 1
int128_t var_54 = zmm0
int32_t var_30 = 0
int64_t* var_60 = rax_3
int32_t rax_5 = (*(*rax_3 + 0x18))(rax_3)
int64_t* rcx_3 = data_143f0f180
void var_78
(*(*rcx_3 + 0x498))(rcx_3, &var_78, &data_143f02b98, zx.q(rax_5), 0x201, &var_68)
sub_1405d1600(arg1 + 0x10, &var_78)
sub_1405d1550(&var_78)
int64_t* rcx_6 = data_143f0f180
int64_t* var_80
var_80.b = 0x1c
(*(*rcx_6 + 0x4b8))(rcx_6, &var_78, &data_143f02b98, *(arg1 + 0x10), 4, var_80)
sub_1405d1600(arg1 + 0x18, &var_78)
sub_1405ec8a0(&var_78)
int64_t* rax_8 = (*(*(arg1 + 0x58) + 0x28))(arg1 + 0x58)
int128_t zmm0_1 = data_143dbb1e0
int32_t var_58_1 = 1
int32_t rdi = 1 << (data_1439c7a34).b
var_68 = 0
int32_t var_44_1 = rdi - 1
int128_t var_54_1 = zmm0_1
char var_40_1 = 0
int64_t var_38_1 = 0
int32_t var_30_1 = 0
int64_t* var_60_1 = rax_8
int32_t rax_10 = (*(*rax_8 + 0x18))(rax_8)
int64_t* rcx_12 = data_143f0f180
(*(*rcx_12 + 0x498))(rcx_12, &var_78, &data_143f02b98, zx.q(rax_10), 0x201, &var_68)
sub_1405d1600(arg1 + 0x20, &var_78)
sub_1405d1550(&var_78)
int64_t* rcx_15 = data_143f0f180
int64_t* var_80_1
var_80_1.b = 0x1c
(*(*rcx_15 + 0x4b8))(rcx_15, &var_78, &data_143f02b98, *(arg1 + 0x20), 4, var_80_1)
sub_1405d1600(arg1 + 0x28, &var_78)
int64_t result = sub_1405ec8a0(&var_78)
__security_check_cookie(rax_1 ^ &var_a8)
return result
