// 函数: sub_141184050
// 地址: 0x141184050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_b0
__builtin_memset(&var_b0, 0, 0x48)
void var_b8
sub_14142a030(arg1, &var_b8)
int64_t rbx_1 = *(*arg3 + 0x44)
int32_t* rax
int512_t zmm6
rax, zmm6 = sub_14081d830(0xc0, arg1[1], 1, 0)
int32_t* rdi = rax

if (rax == 0)
    rdi = nullptr
else
    sub_14117af20(&rax[0xc])

int32_t rdx_2
int64_t r8
int32_t r9
rdx_2, r8, r9 = memset(rdi, 0, 0xc0)
*rdi = *(arg2 + 0xd68)
rdi[1] = *(arg2 + 0xd6c)
rdi[2] = 0xa
rdi[3] = 0x64
rdi[4] = 0x100
rdi[5] = 0x100
void* rcx_2 = *arg3
rdi[6] = *(rcx_2 + 0x44)
rdi[7] = *(rcx_2 + 0x48)
bool arg_10
bool* rax_5 = sub_1411e1150(&arg_10)
int32_t arg_8 = *rax_5
char arg_c = rax_5[4]
rdi[8] = sub_1411fc260(&arg_8, rdx_2, r8, r9)
rdi[9] = data_1439b5fb0.d
rdi[0xa] = data_1439b5fb4
rdi[0xb] = data_1439b5fb8.d
int32_t* var_128 = *arg3
int16_t var_120 = 1
char var_11e = 0
int32_t var_11c = 0xffffffff
*(rdi + 0x30) = var_128.o
sub_1419a2ec0(*(arg2 + 0x5150), &var_128, &data_143ed5e80, 0)
int128_t zmm9 = var_128.o
char rcx_8 = sub_1419a2ec0(*(arg2 + 0x5150), &var_128, &data_143e6c460, 0)
int128_t zmm8 = var_128.o
zmm6.o = zx.o(0)
int128_t zmm7 = *(arg2 + 0x1598)
int128_t var_118 = sub_14118f2d0(rcx_8)
sub_141998c50(zmm8.q, &data_143e73730, rdi)
int64_t var_d0 = rbx_1
void*** rax_9
char rcx_10
rax_9, rcx_10 = sub_14081d830(0x80, arg1[1], 1, 0)
void*** rbx_2 = rax_9

if (rax_9 == 0)
    rbx_2 = nullptr
else
    var_128 = rdi
    sub_14118f2d0(rcx_10)
    var_120.q = &data_143e73760
    var_118 = var_128.o
    sub_141992bd0(rbx_2, &arg_8, &var_118, 1)
    *rbx_2 = &data_142f2c968
    *(rbx_2 + 0x38) = rdi.o
    *(rbx_2 + 0x48) = zmm9
    *(rbx_2 + 0x58) = zmm8
    *(rbx_2 + 0x68) = zmm7
    rbx_2[0xf] = arg2

return sub_1419968d0(arg1, rbx_2)
