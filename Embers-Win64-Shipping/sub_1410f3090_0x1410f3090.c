// 函数: sub_1410f3090
// 地址: 0x1410f3090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm1
zmm1.o = zx.o(0)
int128_t var_138
__builtin_memset(&var_138, 0, 0x120)
sub_1413aab70(&data_143ec4c60, arg2[0x2a9].d, 0, &var_138)
int64_t* rcx = *(*arg2 + 0x20)
void* rax_2 = (*(*rcx + 0x248))(rcx, zmm1)
int64_t* rcx_1 = data_143f0f180
int128_t* r8 = &var_138

if (rax_2 != 0)
    int64_t r9_1 = *rcx_1
    (*(r9_1 + 0x100))(rcx_1, *(rax_2 + 0x30), r8, r9_1)
    return sub_1405d16e0(arg3, *(rax_2 + 0x30))

void* arg_10
(*(*rcx_1 + 0xf8))(rcx_1, &arg_10, r8, &data_143ec50d0, 1, 1)
void* rax_5 = arg_10
void* arg_20 = rax_5

if (rax_5 != 0)
    *(rax_5 + 8) += 1

sub_1405d1550(&arg_10)
sub_1405d1600(arg3, &arg_20)
return sub_1405d1550(&arg_20)
