// 函数: sub_1422d4460
// 地址: 0x1422d4460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = data_143f11688
int128_t __saved_zmm6 = arg2
arg2 = data_142d4cc00
int64_t rax = *(rdx + 0x10)
int64_t rax_1 = *(rdx + 0x18)
int128_t* rax_2 = arg1[4]

if (rax_2 == 0)
    rax_2 = sub_140a82f30(zx.q((&rax_2[2]).d), zx.q((&rax_2[1]).d))
    arg1[4] = rax_2

*rax_2 = arg2
rax_2[1] = rax.o
sub_1419ba620(arg1)
int64_t* result = sub_1405d16e0(&arg1[3], nullptr)
int64_t r8 = arg1[4]

if (r8 == 0)
    return result

int64_t* rcx_3 = data_143f0f180
void* arg_8
(*(*rcx_3 + 0xf8))(rcx_3, &arg_8, r8, &data_143f555f0, arg1[2].d, 1, arg2, rax, rax_1, __saved_zmm6)
void* rax_4 = arg_8
void* arg_10 = rax_4

if (rax_4 != 0)
    *(rax_4 + 8) += 1

sub_1405d1550(&arg_8)
sub_1405d1600(&arg1[3], &arg_10)
return sub_1405d1550(&arg_10)
