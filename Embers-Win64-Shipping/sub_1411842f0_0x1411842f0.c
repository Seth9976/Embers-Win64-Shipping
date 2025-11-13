// 函数: sub_1411842f0
// 地址: 0x1411842f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_c0
__builtin_memset(&var_c0, 0, 0x48)
void var_c8
sub_14142a030(arg1, &var_c8)
int64_t rbx_1 = *(*arg4 + 0x44)
int32_t* rax = sub_14081d830(0xe0, arg1[1], 1, 0)
int32_t* rdi = rax

if (rax == 0)
    rdi = nullptr
else
    __builtin_memset(&rax[2], 0, 0x20)
    sub_14117af20(&rax[0x14])

memset(&rdi[2], 0, 0xd8)
rdi[1] = 0x8000
*rdi = 0x20
int32_t* r14 = *arg3
int32_t* var_138 = r14
int64_t var_130 = 1

if ((r14[0xe] & 0x100) != 0)
    var_130.d = 4
    var_130:4.d = 0x1c

void*** rax_1 = sub_14081d830(0x28, arg1[1], 1, 0)

if (rax_1 != 0)
    int128_t zmm0_1 = var_138.o
    rax_1[1] = *(r14 + 8)
    rax_1[2] = 0
    *(rax_1 + 0x18) = zmm0_1
    *rax_1 = &data_142f285c0

*(rdi + 8) = rax_1
*(rdi + 0x10) = sub_141188b30(arg1, arg3[1], 0x1c)
int32_t* r14_1 = arg3[2]
var_138 = r14_1
int64_t var_130_1 = 1

if ((r14_1[0xe] & 0x100) != 0)
    var_130_1.d = 4
    var_130_1:4.d = 0x1c

void*** rax_3 = sub_14081d830(0x28, arg1[1], 1, 0)

if (rax_3 != 0)
    int128_t zmm0_2 = var_138.o
    rax_3[1] = *(r14_1 + 8)
    *rax_3 = &data_142f285c0
    rax_3[2] = 0
    *(rax_3 + 0x18) = zmm0_2

*(rdi + 0x18) = rax_3
void*** rax_4
int32_t rdx_6
int64_t r8
int32_t r9
int512_t zmm6
rax_4, rdx_6, r8, r9, zmm6 = sub_141188b30(arg1, arg3[3], 0x1c)
*(rdi + 0x20) = rax_4
rdi[0xc] = 0x64
rdi[0xd] = 0x64
rdi[0xe] = 0x100
rdi[0xf] = 0x100
void* rcx_6 = *arg4
rdi[0x10] = *(rcx_6 + 0x44)
rdi[0x11] = *(rcx_6 + 0x48)
bool arg_10
bool* rax_7 = sub_1411e1150(&arg_10)
int32_t arg_8 = *rax_7
char arg_c = rax_7[4]
rdi[0x12] = sub_1411fc260(&arg_8, rdx_6, r8, r9)
rdi[0x13] = data_1439b5fb8.d
var_138 = *arg4
var_130_1.w = 1
var_130_1:2.b = 0
var_130_1:4.d = 0xffffffff
*(rdi + 0x50) = var_138.o
sub_1419a2ec0(*(arg2 + 0x5150), &var_138, &data_143ed5e80, 0)
int128_t zmm9 = var_138.o
char rcx_12 = sub_1419a2ec0(*(arg2 + 0x5150), &var_138, &data_143e6c560, 0)
int128_t zmm8 = var_138.o
zmm6.o = zx.o(0)
int128_t zmm7 = *(arg2 + 0x1598)
int128_t var_128 = sub_14118f440(rcx_12)
sub_141998c50(zmm8.q, &data_143e73840, rdi)
int64_t var_e0 = rbx_1
void*** rax_11
char rcx_14
rax_11, rcx_14 = sub_14081d830(0x80, arg1[1], 1, 0)
void*** rbx_2 = rax_11

if (rax_11 == 0)
    rbx_2 = nullptr
else
    var_138 = rdi
    sub_14118f440(rcx_14)
    void* var_130_2 = &data_143e73870
    var_128 = var_138.o
    sub_141992bd0(rbx_2, &arg_8, &var_128, 1)
    *rbx_2 = &data_142f2c978
    *(rbx_2 + 0x38) = rdi.o
    *(rbx_2 + 0x48) = zmm9
    *(rbx_2 + 0x58) = zmm8
    *(rbx_2 + 0x68) = zmm7
    rbx_2[0xf] = arg2

return sub_1419968d0(arg1, rbx_2)
