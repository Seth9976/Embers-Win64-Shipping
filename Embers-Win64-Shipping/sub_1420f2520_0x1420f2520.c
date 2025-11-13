// 函数: sub_1420f2520
// 地址: 0x1420f2520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_268
sub_1413c2ae0(&var_268)
memset(&var_268, 0, 0x260)
int128_t* rax = *(arg1 + 0x20)

if (rax == 0)
    rax = sub_140a82f30(0x260, zx.q((&rax[1]).d))
    *(arg1 + 0x20) = rax

void* rcx_2 = &var_268
void* i_1 = 4
int128_t zmm0_1
int128_t zmm1
void* i

do
    rax = &rax[8]
    zmm0_1 = *rcx_2
    zmm1 = *(rcx_2 + 0x10)
    rcx_2 += 0x80
    rax[-8] = zmm0_1
    zmm0_1 = *(rcx_2 - 0x60)
    rax[-7] = zmm1
    zmm1 = *(rcx_2 - 0x50)
    rax[-6] = zmm0_1
    zmm0_1 = *(rcx_2 - 0x40)
    rax[-5] = zmm1
    zmm1 = *(rcx_2 - 0x30)
    rax[-4] = zmm0_1
    zmm0_1 = *(rcx_2 - 0x20)
    rax[-3] = zmm1
    zmm1 = *(rcx_2 - 0x10)
    rax[-2] = zmm0_1
    rax[-1] = zmm1
    i = i_1
    i_1 -= 1
while (i != 1)
zmm1 = *(rcx_2 + 0x10)
*rax = *rcx_2
zmm0_1 = *(rcx_2 + 0x20)
rax[1] = zmm1
zmm1 = *(rcx_2 + 0x30)
rax[2] = zmm0_1
zmm0_1 = *(rcx_2 + 0x40)
rax[3] = zmm1
zmm1 = *(rcx_2 + 0x50)
rax[4] = zmm0_1
rax[5] = zmm1
int64_t* result = sub_1405d16e0(arg1 + 0x18, i_1)
int64_t r8 = *(arg1 + 0x20)

if (r8 == 0)
    return result

int64_t* rcx_4 = data_143f0f180
void* arg_8
(*(*rcx_4 + 0xf8))(rcx_4, &arg_8, r8, &data_143f59580, *(arg1 + 0x10), 1)
void* rax_2 = arg_8
void* arg_10 = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1

sub_1405d1550(&arg_8)
sub_1405d1600(arg1 + 0x18, &arg_10)
return sub_1405d1550(&arg_10)
