// 函数: sub_1422d4150
// 地址: 0x1422d4150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_b8
__builtin_memset(&var_b8, 0, 0x78)
int32_t rcx = data_1439c7a08
int128_t var_38
__builtin_memset(&var_38, 0, 0x30)
sub_1422e51d0(rcx, &var_38, nullptr, &var_b8)
int128_t* rax = arg1[4]

if (rax == 0)
    int32_t rdx_1 = (&rax[1]).d
    rax = sub_140a82f30(zx.q(rdx_1 + 0x70), rdx_1)
    arg1[4] = rax

*rax = var_b8
__builtin_memset(&rax[1], 0, 0x60)
int64_t var_48
int128_t zmm1 = var_48.o
rax[7] = zmm1
sub_1419ba620(arg1, zmm1)
int64_t* result = sub_1405d16e0(&arg1[3], nullptr)
int64_t r8 = arg1[4]

if (r8 == 0)
    return result

int64_t* rcx_4 = data_143f0f180
void* arg_8
(*(*rcx_4 + 0xf8))(rcx_4, &arg_8, r8, &data_143f55540, arg1[2].d, 1)
void* rax_2 = arg_8
void* arg_10 = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1

sub_1405d1550(&arg_8)
sub_1405d1600(&arg1[3], &arg_10)
return sub_1405d1550(&arg_10)
