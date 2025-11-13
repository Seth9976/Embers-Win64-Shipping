// 函数: sub_141db12e0
// 地址: 0x141db12e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_118 = 0
*arg8 = 0
int64_t rax = *arg4
int64_t var_110 = 0
uint128_t var_78 = var_118.o
var_78:8.q = rax
int64_t var_68 = 0.q
var_68.d = arg4[1].d
int64_t var_f8 = 0
uint128_t var_60 = 0.o
var_60:8.q = *arg5
int64_t var_50 = 0.q
var_50.d = arg5[1].d
var_78.d = 0xc
var_60.d = 0xc
int32_t var_40 = 2
int64_t var_38 = *arg6
int64_t* rcx_2 = *(arg1 + 8)
uint16_t var_48 = zx.w(arg7)
int32_t* rax_7 = (*(*rcx_2 + 0x10))(rcx_2)
int32_t var_c8 = *rax_7
int128_t zmm6 = rax_7[1]
int32_t var_c4 = zmm6.d
int32_t zmm5 = rax_7[2]
int32_t var_c0 = zmm5
int32_t zmm4 = rax_7[3]
int32_t var_bc = zmm4
int32_t r11 = rax_7[4]
int32_t var_b8 = r11
char rbx = rax_7[5].b
char var_b4 = rbx
char r10 = *(rax_7 + 0x15)
char var_b3 = r10
char r9 = *(rax_7 + 0x16)
char var_b2 = r9
int64_t zmm3 = *(rax_7 + 0x18)
int64_t var_b0 = zmm3
int32_t r8 = rax_7[8]
int32_t var_a8 = r8
int32_t rdi = rax_7[9]
int32_t var_a4 = rdi
int32_t rdx = rax_7[0xa]
int32_t var_a0 = rdx
int32_t zmm2 = rax_7[0xb]
int32_t var_9c = zmm2
int64_t zmm1 = rax_7[0xc]
int32_t var_98 = zmm1.d
uint128_t zmm0 = zx.o(*(rax_7 + 0x34))
uint64_t var_94 = zmm0.q
int32_t rcx_4 = rax_7[0xf]
int32_t var_8c = rcx_4
int32_t rax_8 = rax_7[0x10]
int32_t var_114 = zmm6.d
var_110.d = zmm5
var_110:4.d = zmm4
int32_t var_88 = rax_8
int32_t var_108_1 = r11
char var_103 = r10
char var_102 = r9
int32_t var_100
var_100.q = zmm3
char r14 = not.b(arg3)
int32_t var_d8 = rax_8
int32_t var_dc = rcx_4
char rax_9 = rbx
int32_t var_ec = zmm2
int32_t var_e8 = zmm1.d

if ((r14 & 4) == 0)
    rax_9 = 1

var_f8.d = r8
char var_104 = rax_9
int32_t var_f0_1 = rdx
uint64_t var_e4 = zmm0.q
var_118 = 0
var_f8:4.d = rdi

if ((r14 & 8) == 0)
    rdi |= 4
    var_f8:4.d = rdi

if ((1 & r14) == 0)
    zmm0 = 0x3f0ccccd
    var_e4.d = 0x3f0ccccd
    var_f8:4.d = (rdi & 0xfffffffe) | 2
    var_e4 = 0

(*(**(arg1 + 8) + 8))(zmm0, &var_118)
int64_t* rcx_6 = data_143ef8520
int64_t rbx_1 = **(arg1 + 8)
int64_t rax_13 = (*(*rcx_6 + 0x138))(rcx_6)
int64_t rax_14 = (*(rbx_1 + 0x28))(*(arg1 + 8), &var_78, rax_13)
*arg8 = rax_14
int64_t* rcx_8 = *(arg1 + 8)
int64_t r8_2 = *rcx_8
(*(r8_2 + 8))(rcx_8, &var_c8, r8_2)
int64_t result
result.b = rax_14 != 0
return result
