// 函数: sub_14146cc60
// 地址: 0x14146cc60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = data_143f10e68
int128_t var_88
__builtin_memcpy(&var_88, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x00\x00\x80\x3f", 
    0x20)
int64_t rax = *(rdx + 0x10)
int64_t var_50 = rax
int64_t rax_1 = *(rdx + 0x18)
int64_t var_40 = rax_1
int128_t* rax_2 = *(arg1 + 0x20)
int128_t var_68 = zx.o(0)

if (rax_2 == 0)
    rax_2 = sub_140a82f30(0x90, zx.q((&rax_2[1]).d))
    *(arg1 + 0x20) = rax_2

int128_t var_c8
*rax_2 = var_c8
int128_t var_b8
rax_2[1] = var_b8
int128_t var_a8
rax_2[2] = var_a8
int128_t var_98
rax_2[3] = var_98
__builtin_memcpy(&rax_2[4], 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x00\x00\x80\x3f", 
    0x20)
rax_2[6] = zx.o(0)
rax_2[7] = rax.o
rax_2[8] = rax_1.o
int64_t* result = sub_1405d16e0(arg1 + 0x18, nullptr)
int64_t r8 = *(arg1 + 0x20)

if (r8 == 0)
    return result

int64_t* rcx_1 = data_143f0f180
void* arg_8
(*(*rcx_1 + 0xf8))(rcx_1, &arg_8, r8, &data_143ed9a70, *(arg1 + 0x10), 1)
void* rax_4 = arg_8
void* arg_10 = rax_4

if (rax_4 != 0)
    *(rax_4 + 8) += 1

sub_1405d1550(&arg_8)
sub_1405d1600(arg1 + 0x18, &arg_10)
return sub_1405d1550(&arg_10)
