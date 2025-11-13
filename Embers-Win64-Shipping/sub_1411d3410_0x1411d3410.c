// 函数: sub_1411d3410
// 地址: 0x1411d3410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg4 == 0 || *arg5 == 0 || *arg6 == 0)
    return &__return_addr

int64_t* rax
int512_t zmm6_1
rax, zmm6_1 = sub_14081d830(0xa0, *(arg1 + 8), 1, 0)
int64_t* rdi_1 = rax

if (rax == 0)
    rdi_1 = nullptr
else
    *rax = 0
    sub_14117af20(&rax[2])

memset(rdi_1, 0, 0xa0)
*rdi_1 = *arg3
int64_t* var_d8 = *arg4
int16_t var_d0_1 = 1
char var_ce_1 = 0
int32_t var_cc_1 = 0xffffffff
*(rdi_1 + 0x10) = var_d8.o
var_d8 = *arg5
int16_t var_d0_2 = 1
char var_ce_2 = 0
int32_t var_cc_2 = 0xffffffff
*(rdi_1 + 0x20) = var_d8.o
var_d8 = *arg6
int16_t var_d0_3 = 0x101
char var_ce_3 = 0
int32_t var_cc_3 = 2
*(rdi_1 + 0x90) = var_d8.o
sub_1419a2ec0(*(arg2 + 0x5150), &var_d8, &data_143ed5e80, 0)
int128_t zmm9 = var_d8.o
char rcx_4 = sub_1419a2ec0(*(arg2 + 0x5150), &var_d8, &data_143e77fc0, 0)
zmm6_1.o = zx.o(0)
int128_t zmm8 = var_d8.o
int128_t zmm7 = *(arg2 + 0x1598)
int64_t rbx_3 = *(*arg6 + 0x44)
int128_t var_c8 = sub_1411e3290(rcx_4)
sub_141998c50(zmm8.q, &data_143e7da90, rdi_1)
int64_t var_80_1 = rbx_3
void*** rax_5
char rcx_6
rax_5, rcx_6 = sub_14081d830(0x80, *(arg1 + 8), 1, 0)
void*** rbx_4 = rax_5

if (rax_5 == 0)
    rbx_4 = nullptr
else
    var_d8 = rdi_1
    sub_1411e3290(rcx_6)
    var_d0_3.q = &data_143e7dac0
    var_c8 = var_d8.o
    void arg_20
    sub_141992bd0(rbx_4, &arg_20, &var_c8, 1)
    *rbx_4 = &data_142f38988
    *(rbx_4 + 0x38) = rdi_1.o
    *(rbx_4 + 0x48) = zmm9
    *(rbx_4 + 0x58) = zmm8
    *(rbx_4 + 0x68) = zmm7
    rbx_4[0xf] = arg2

return sub_1419968d0(arg1, rbx_4)
