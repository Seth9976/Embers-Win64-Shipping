// 函数: sub_141182e90
// 地址: 0x141182e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_a0
__builtin_memset(&var_a0, 0, 0x48)
int128_t var_a8
sub_14142a030(arg1, &var_a8)
int32_t* rax = sub_14081d830(0x180, arg1[1], 1, 0)
int32_t* rbx = rax

if (rax == 0)
    rbx = nullptr
else
    __builtin_memset(&rax[0xa], 0, 0xa0)
    *(rax + 0xe0) = 0
    *(rax + 0xe8) = 0
    sub_14117af20(&rax[0x3c])

memset(rbx, 0, 0x180)
void* arg_28
*rbx = *(arg_28 + 0xcc)
rbx[1] = tanf(_mm_max_ss(data_1439b5f8c, 0) * 0.0174532924f).d
*(rbx + 0x20) = var_a8
__builtin_memset(&rbx[0xc], 0, 0x40)
sub_1405d16e0(&rbx[0x30], *(arg4 + 0xc0))
sub_14142a1f0(&rbx[0x1c])
sub_1405d16e0(&rbx[0x2e], *(arg2 + 0x10))
void*** rax_2
int512_t zmm6
rax_2, zmm6 = sub_1410fccd0(arg1, arg3 + 0x28, u"External", 0)
*(rbx + 0xb0) = rax_2
rbx[2] = *(arg2 + 0x1200)
int32_t rcx_7 = 1
rbx[3] = *(arg2 + 0x11e4)

if (data_1439b5f94 u>= 1)
    rcx_7 = data_1439b5f94

rbx[4] = rcx_7
float temp0_1[0x4] = __maxss_xmmss_memss(data_1439b5fa0[0], 0x3f800000)
int32_t* var_c8 = arg5
int16_t var_c0 = 1
char var_be = 0
int32_t var_bc = 0xffffffff
rbx[5] = temp0_1[0]
*(rbx + 0xf0) = var_c8.o
int32_t r9
r9.b = rbx[4] u> 0x10
char rcx_9 = sub_1419a2ec0(*(arg2 + 0x5150), &var_c8, &data_143e6ce70, r9)
int128_t zmm7 = var_c8.o
zmm6.o = zx.o(0)
int128_t var_b8 = sub_14118e190(rcx_9)
sub_141998c50(zmm7.q, &data_143e73f60, rbx)
void* var_50 = arg2
void*** rax_6
char rcx_11
rax_6, rcx_11 = sub_14081d830(0x58, arg1[1], 1, 0)
void*** rdi_1 = rax_6

if (rax_6 == 0)
    rdi_1 = nullptr
else
    var_c8 = rbx
    sub_14118e190(rcx_11)
    var_c0.q = &data_143e73f90
    var_b8 = var_c8.o
    sub_141992bd0(rdi_1, &arg_28, &var_b8, 1)
    *rdi_1 = &data_142f2c9a8
    *(rdi_1 + 0x38) = rbx.o
    *(rdi_1 + 0x48) = zmm7

return sub_1419968d0(arg1, rdi_1)
