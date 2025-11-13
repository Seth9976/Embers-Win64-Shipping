// 函数: sub_1411235a0
// 地址: 0x1411235a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm0 = data_142d3f660
int128_t var_a8
__builtin_memcpy(&var_a8, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00"
"00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
"00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
    0x60)
int512_t zmm1
zmm1.o = zmm0
int128_t var_28
__builtin_memset(&var_28, 0, 0x20)
sub_1411463f0(arg2, &var_a8)
int64_t* rcx_1 = data_143f0f180
int128_t var_98
int128_t var_88
int128_t var_78
int128_t var_68
int128_t var_58
void* arg_8
(*(*rcx_1 + 0xf8))(rcx_1, &arg_8, &var_a8, &data_143e58180, arg3, 1, var_a8, var_98, var_88, 
    var_78, var_68, var_58)
void* rax_2 = arg_8
*arg1 = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1

sub_1405d1550(&arg_8)
return arg1
