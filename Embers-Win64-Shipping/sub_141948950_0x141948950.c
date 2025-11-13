// 函数: sub_141948950
// 地址: 0x141948950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = arg6
int64_t rdi = 0
uint128_t var_98 = *arg4
uint128_t zmm0 = zx.o(arg4[1].q)

if (data_143f01c92 != 0 && sub_140a80f10() == 0)
    int64_t rbx_1 = sx.q(zmm0.q:4.d * arg5)
    int64_t rax_4 = sub_140a82f30(rbx_1, 0x10)
    rdi = rax_4
    memcpy(rax_4, rsi, rbx_1.d)

int64_t var_d0 = arg1

if (rdi != 0)
    rsi = rdi

int32_t r8
int32_t var_c4 = r8
int64_t var_a0 = rdi
void*** rax_5 = sub_140a82f30(0x48, 8)
*rax_5 = &data_142ff8768
uint128_t zmm3 = zx.o(zmm0.q)
*(rax_5 + 8) = arg2.o
*(rax_5 + 0x18) = arg5.o
*(rax_5 + 0x28) = _mm_unpacklo_pd(var_98, zmm3.q)
*(rax_5 + 0x38) = rsi.o
void*** var_58 = rax_5
int64_t (* var_68)(int64_t* arg1)
int64_t (* rax_6)(int64_t* arg1) = var_68

if (rax_5 != -8)
    rax_6 = j_sub_14192e460

var_68 = rax_6
return sub_14195af10(&var_68, 0, arg3, zmm3)
