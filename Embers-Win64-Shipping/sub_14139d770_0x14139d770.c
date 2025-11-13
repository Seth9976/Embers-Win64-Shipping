// 函数: sub_14139d770
// 地址: 0x14139d770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0xe] = 0
arg1[0xf] = 0
uint128_t zmm1 = *arg2
uint128_t zmm0 = zx.o(arg2[1].q)
int64_t var_b8 = data_143dbb180
void* rcx = zmm1.q
uint64_t var_88 = zmm0.q
int128_t var_b0 = zx.o(0)
int32_t rax_1 = *(rcx + 0x44)
uint128_t temp0 = _mm_bsrli_si128(zmm1, 8)
var_b8.d = rax_1
var_b8:4.d = *(rcx + 0x48)
var_b0:4.d = (temp0.q u>> 0x20).d
var_b0:8.d = var_88.d
var_b0:0xc.d = (var_88 u>> 0x20).d
var_b0.d = _mm_bsrli_si128(zmm1, 8).d
int32_t var_78[0x1c]
int32_t* rax_8 = sub_141455b70(&var_78, &var_b8)
*arg1 = *rax_8
arg1[1] = *(rax_8 + 8)
arg1[2] = *(rax_8 + 0x10)
arg1[3] = *(rax_8 + 0x18)
arg1[4].d = rax_8[8]
*(arg1 + 0x24) = rax_8[9]
arg1[5].d = rax_8[0xa]
*(arg1 + 0x2c) = rax_8[0xb]
arg1[6] = *(rax_8 + 0x30)
arg1[7] = *(rax_8 + 0x38)
arg1[8] = *(rax_8 + 0x40)
arg1[9] = *(rax_8 + 0x48)
arg1[0xa] = *(rax_8 + 0x50)
arg1[0xb] = *(rax_8 + 0x58)
arg1[0xc] = *(rax_8 + 0x60)
arg1[0xd] = *(rax_8 + 0x68)
arg1[0xe] = *arg2
arg1[0xf] = arg3
return arg1
