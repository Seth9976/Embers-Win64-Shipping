// 函数: sub_14137baa0
// 地址: 0x14137baa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = *(arg2 + 0x98)
int512_t zmm1
zmm1.o = zx.o(0)
int128_t var_128
__builtin_memset(&var_128, 0, 0x80)
int64_t* rcx = &data_143ec4c60

if (rax != 0)
    rcx = rax

int128_t var_a8
__builtin_memset(&var_a8, 0, 0xa0)
sub_1413aab70(rcx, arg4, arg3, &var_128)
int64_t* rcx_1 = data_143f0f180
void* arg_8
(*(*rcx_1 + 0xf8))(rcx_1, &arg_8, &var_128, &data_143ec50d0, 0, 1)
void* rax_2 = arg_8
*arg1 = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1

sub_1405d1550(&arg_8, zmm1)
return arg1
