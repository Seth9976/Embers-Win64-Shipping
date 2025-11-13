// 函数: sub_1411cf3e0
// 地址: 0x1411cf3e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rax
int512_t zmm6
rax, zmm6 = sub_14081d830(0xa0, *(arg1 + 8), 1, 0)
int32_t* rdi = rax

if (rax == 0)
    rdi = nullptr
else
    sub_14117af20(&rax[4])

memset(&rdi[1], 0, 0x9c)
*rdi = arg4
int16_t var_c0 = 0
char var_be = 0
int32_t var_bc = 0xffffffff
int32_t* var_c8 = *arg5
*(rdi + 0x10) = var_c8.o
sub_1419a2ec0(*(arg3 + 0x5150), &var_c8, &data_143ed5e80, 0)
int128_t zmm8 = var_c8.o
int128_t var_b8
char rcx_4 = sub_1419a2ec0(*(arg3 + 0x5150), &var_b8, &data_143e779c0, 0)
int128_t zmm7 = var_b8
zmm6.o = zx.o(0)
var_c8 = nullptr
int64_t rbx_2 = *(*arg5 + 0x44)
var_c0.q = rbx_2
int128_t var_a8 = sub_1411e1460(rcx_4)
sub_141998c50(zmm7.q, &data_143e7d430, rdi)
int128_t zmm0_1 = var_c8.o
int64_t var_60 = rbx_2
void*** rax_3
char rcx_6
rax_3, rcx_6 = sub_14081d830(0x80, *(arg1 + 8), 1, 0)
void*** rbx_3 = rax_3

if (rax_3 == 0)
    rbx_3 = nullptr
else
    var_c8 = rdi
    sub_1411e1460(rcx_6)
    var_c0.q = &data_143e7d460
    var_a8 = var_c8.o
    sub_141992bd0(rbx_3, arg2, &var_a8, 1)
    *rbx_3 = &data_142f38948
    *(rbx_3 + 0x38) = rdi.o
    *(rbx_3 + 0x48) = zmm8
    *(rbx_3 + 0x58) = zmm7
    *(rbx_3 + 0x68) = zmm0_1
    rbx_3[0xf] = arg3

return sub_1419968d0(arg1, rbx_3) __tailcall
