// 函数: sub_1423e0c40
// 地址: 0x1423e0c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
*(arg1 + 0x28) = arg2
*(arg1 + 0x2c) = arg3
char rcx = (data_1439c7a34).b
int32_t var_78 = 1
int32_t r10 = arg3
int128_t var_58 = zx.o(0)
char var_30 = 0
int64_t var_28 = 0
int32_t var_34 = (1 << rcx) - 1
arg3.b = 2
int32_t var_38 = data_1439c7b18
int32_t var_20 = 0
int128_t var_48 = data_1439c7b08
sub_1421be920(arg2, r10, arg3.b, 1, 0, 1, 0, &var_58, arg1 + 0x10, arg1 + 0x40, var_78)
int128_t zmm1 = data_143dbb1e0
uint64_t r9 = zx.q(*(arg1 + 0x28))
var_48.d = 1
int512_t zmm0_1
zmm0_1.o = zx.o(0)
int64_t* rcx_4 = data_143f0f180
int32_t var_34_1 = (1 << (data_1439c7a34).b) - 1
int128_t* var_80_1 = &var_58
int32_t rax_8 = *(arg1 + 0x2c)
void* var_88
var_88.d = 0x40000
int128_t* var_90
var_90.d = 1
var_58 = zx.o(0)
var_48 = zmm1
char var_30_1 = 0
int64_t var_28_1 = 0
int32_t var_20_1 = 0
char var_98
var_98.d = 1
int32_t var_a0
var_a0.b = 2
void var_68
(*(*rcx_4 + 0x560))(zmm0_1, &var_68, &data_143f02b98, r9, rax_8, var_a0, var_98, var_90, var_88, 
    var_80_1)
sub_1405d1600(arg1 + 0x48, &var_68)
int64_t result = sub_1405d1550(&var_68)
__security_check_cookie(rax_1 ^ &var_c8)
return result
