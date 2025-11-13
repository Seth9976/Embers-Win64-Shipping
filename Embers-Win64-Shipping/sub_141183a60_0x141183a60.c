// 函数: sub_141183a60
// 地址: 0x141183a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = sub_1410fccd0(arg1, arg3 + 0xe0, u"External", 0)
void*** rax_1 = sub_1410fccd0(arg1, arg3 + 0x98, u"External", 0)
void**** rax_2 = sub_14081d830(0xb0, *(arg1 + 8), 1, 0)
void**** rdi = rax_2

if (rax_2 == 0)
    rdi = nullptr
else
    __builtin_memset(&rax_2[1], 0, 0x18)
    sub_14117af20(&rax_2[4])

memset(&rdi[1], 0, 0xa8)
*rdi = rax_1
rdi[1] = *arg4
void*** rax_5
int512_t zmm6
rax_5, zmm6 = sub_1410fccd0(arg1, arg3 + 0xa0, u"External", 0)
int64_t* arg_28
int64_t* rbx_1 = arg_28
rdi[2] = rax_5
rdi[3] = rax
int16_t var_d0 = 1
void**** var_d8 = *rbx_1
char var_ce = 0
int32_t var_cc = 0xffffffff
*(rdi + 0x20) = var_d8.o
var_d8 = *arg5
int16_t var_d0_1 = 1
char var_ce_1 = 0
int32_t var_cc_1 = 2
*(rdi + 0xa0) = var_d8.o
sub_1419a2ec0(*(arg2 + 0x5150), &var_d8, &data_143ed5e80, 0)
int128_t zmm9 = var_d8.o
char rcx_7 = sub_1419a2ec0(*(arg2 + 0x5150), &var_d8, &data_143e6bac0, 0)
zmm6.o = zx.o(0)
int128_t zmm8 = var_d8.o
int128_t zmm7 = *(arg2 + 0x1598)
int64_t rbx_3 = *(*rbx_1 + 0x44)
int128_t var_c8 = sub_14118f5b0(rcx_7)
sub_141998c50(zmm8.q, &data_143e72cd0, rdi)
int64_t var_80 = rbx_3
void*** rax_8
char rcx_9
rax_8, rcx_9 = sub_14081d830(0x80, *(arg1 + 8), 1, 0)
void*** rbx_4 = rax_8

if (rax_8 == 0)
    rbx_4 = nullptr
else
    var_d8 = rdi
    sub_14118f5b0(rcx_9)
    var_d0_1.q = &data_143e72d00
    var_c8 = var_d8.o
    sub_141992bd0(rbx_4, &arg_28, &var_c8, 1)
    *rbx_4 = &data_142f2c8f8
    *(rbx_4 + 0x38) = rdi.o
    *(rbx_4 + 0x48) = zmm9
    *(rbx_4 + 0x58) = zmm8
    *(rbx_4 + 0x68) = zmm7
    rbx_4[0xf] = arg2

return sub_1419968d0(arg1, rbx_4)
