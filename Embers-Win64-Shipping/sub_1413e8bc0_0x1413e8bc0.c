// 函数: sub_1413e8bc0
// 地址: 0x1413e8bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_c8
__builtin_memset(&var_c8, 0, 0x68)
int64_t var_f0 = 0
int64_t var_e8 = 0
int32_t var_128
sub_1413f9890(*(arg1 + 8), &var_128)
void* rdx_1 = *(arg1 + 0xa0)
void* rcx_1 = *(arg1 + 8)
int128_t var_198
__builtin_memset(&var_198, 0, 0x18)
sub_1413f9c70(rcx_1, rdx_1, arg4, &var_198)
int32_t rax_1 = arg4[1] * *arg4
int64_t* rdx_2 = *(arg2 + 8)
int32_t var_19c = 2
int32_t var_1a0 = 0x209
int32_t var_1a8 = 0x10
int32_t var_1a4 = rax_1 * var_128
void*** rax_3 = sub_14081d830(0x48, rdx_2, 1, 0)

if (rax_3 == 0)
    rax_3 = nullptr
else
    int128_t zmm0_1 = var_1a8.o
    rax_3[2] = 0
    rax_3[1] = u"SkyLightVisibilityRays"
    rax_3[3].b = 0
    *(rax_3 + 0x1c) = 0
    rax_3[4] = 0
    rax_3[5].w = 0x200
    *rax_3 = &data_142f285d0
    *(rax_3 + 0x30) = zmm0_1
    rax_3[8] = 0

*arg3 = rax_3
void* rax_4 = sub_14081d830(0x50, *(arg2 + 8), 1, 0)
void* const rdi = rax_4

if (rax_4 == 0)
    rdi = nullptr
else
    __builtin_memset(rax_4 + 8, 0, 0x20)
    *(rax_4 + 0x30) = 0

memset(rdi, 0, 0x50)
int64_t* rcx_3 = data_143f0f180
void* arg_10
(*(*rcx_3 + 0xf8))(rcx_3, &arg_10, &var_128, &data_143ec9190, 0, 1)
void* rax_6 = arg_10
void* arg_18 = rax_6

if (rax_6 != 0)
    *(rax_6 + 8) += 1

sub_1405d1550(&arg_10)
sub_1405d1600(rdi + 8, &arg_18)
sub_1405d1550(&arg_18)
sub_1405d16e0(rdi + 0x10, var_198.q)
sub_1405d16e0(rdi + 0x18, var_198:8.q)
void* var_188
sub_1405d16e0(rdi + 0x20, var_188)
int32_t rax_7 = *arg4
*(rdi + 0x44) = arg4[1]
*(rdi + 0x40) = rax_7
*(rdi + 0x48) = 0
void* rbx = *arg3
var_1a8.q = rbx
int32_t var_1a0_1 = 0x1c
var_19c.w = 0
void*** rax_8
int512_t zmm6
rax_8, zmm6 = sub_14081d830(0x28, *(arg2 + 8), 1, 0)

if (rax_8 == 0)
    rax_8 = nullptr
else
    int128_t zmm0_2 = var_1a8.o
    rax_8[1] = *(rbx + 8)
    *rax_8 = &data_142f285c0
    rax_8[2] = 0
    *(rax_8 + 0x18) = zmm0_2

*(rdi + 0x30) = rax_8
int128_t var_148
char rcx_14 = sub_1419a2ec0(std::_Get_future_error_what((*1111")[sx.q(*(arg1 + 0x3b0))]), &var_148, 
    &data_143ec9320, 0)
zmm6.o = zx.o(0)
int128_t zmm7 = var_148
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(*arg4 + 0xf)
var_1a8 = (temp1 + (temp0 & 0xf)) s>> 4
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(arg4[1] + 0xf)
int32_t var_1a4_1 = (temp3 + (temp2 & 0xf)) s>> 4
int128_t var_138 = sub_1413ea9a0(rcx_14)
sub_141998c50(zmm7.q, &data_143eccd90, rdi)
int32_t var_158 = 1
int64_t var_160 = var_1a8.q
void*** rax_21
char rcx_16
rax_21, rcx_16 = sub_14081d830(0x60, *(arg2 + 8), 1, 0)
void*** rbx_1 = rax_21

if (rax_21 == 0)
    rbx_1 = nullptr
else
    var_1a8.q = rdi
    sub_1413ea9a0(rcx_16)
    var_1a0_1.q = &data_143eccdc0
    var_1a8.o = var_1a8.o
    void arg_8
    sub_141992bd0(rbx_1, &arg_8, &var_1a8, 2)
    *rbx_1 = &data_142f79418
    *(rbx_1 + 0x38) = rdi.o
    *(rbx_1 + 0x48) = zmm7
    rbx_1[0xb] = var_158.q

sub_1419968d0(arg2, rbx_1)
sub_1405d1550(&var_188)
sub_1405d1550(&var_198:8)
return sub_1405d1550(&var_198)
