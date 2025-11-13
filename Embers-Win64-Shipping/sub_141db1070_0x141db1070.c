// 函数: sub_141db1070
// 地址: 0x141db1070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_128 = 0
int64_t var_120 = 0
uint128_t zmm0 = var_128.o
*arg9 = 0
int64_t rax_1 = *arg4
uint128_t var_88 = zmm0
var_88:8.q = rax_1
int64_t var_78 = 0.q
var_78.d = arg4[1].d
int64_t var_108 = 0
uint128_t var_70 = 0.o
var_70:8.q = *arg5
int64_t var_60 = 0.q
var_60.d = arg5[1].d
var_88.d = 0xc
var_70.d = 0xc
int32_t var_50 = 2
int64_t var_48 = *arg6
int64_t* rcx_2 = *(arg1 + 8)
uint16_t var_58 = zx.w(arg7)
int32_t* rax_8 = (*(*rcx_2 + 0x10))(rcx_2)
int32_t var_d8 = *rax_8
int128_t zmm6 = rax_8[1]
int32_t var_d4 = zmm6.d
int32_t zmm5 = rax_8[2]
int32_t var_d0 = zmm5
int32_t zmm4 = rax_8[3]
int32_t var_cc = zmm4
int32_t r11 = rax_8[4]
int32_t var_c8 = r11
char rbx = rax_8[5].b
char var_c4 = rbx
char r10 = *(rax_8 + 0x15)
char var_c3 = r10
char r9 = *(rax_8 + 0x16)
char var_c2 = r9
int64_t zmm3 = *(rax_8 + 0x18)
int64_t var_c0 = zmm3
int32_t r8 = rax_8[8]
int32_t var_b8 = r8
int32_t rdi = rax_8[9]
int32_t var_b4 = rdi
int32_t rdx = rax_8[0xa]
int32_t var_b0 = rdx
int32_t zmm2 = rax_8[0xb]
int32_t var_ac = zmm2
int64_t zmm1 = rax_8[0xc]
int32_t var_a8 = zmm1.d
zmm0 = zx.o(*(rax_8 + 0x34))
uint64_t var_a4 = zmm0.q
int32_t rcx_4 = rax_8[0xf]
int32_t var_9c = rcx_4
int32_t rax_9 = rax_8[0x10]
int32_t var_124 = zmm6.d
var_120.d = zmm5
var_120:4.d = zmm4
int32_t var_98 = rax_9
int32_t var_118_1 = r11
char var_113 = r10
char var_112 = r9
int32_t var_110
var_110.q = zmm3
char r14 = not.b(arg3)
int32_t var_e8 = rax_9
int32_t var_ec = rcx_4
char rax_10 = rbx
int32_t var_fc = zmm2
int32_t var_f8 = zmm1.d

if ((r14 & 4) == 0)
    rax_10 = 1

var_108.d = r8
char var_114 = rax_10
int32_t var_100_1 = rdx
uint64_t var_f4 = zmm0.q
var_128 = 0
var_108:4.d = rdi

if ((r14 & 8) == 0)
    rdi |= 4
    var_108:4.d = rdi

if ((1 & r14) == 0)
    zmm0 = 0x3f0ccccd
    var_f4.d = 0x3f0ccccd
    var_108:4.d = (rdi & 0xfffffffe) | 2
    var_f4 = 0

(*(**(arg1 + 8) + 8))(zmm0, &var_128)
int64_t* rcx_6 = *(arg1 + 8)
void** const var_38 = &data_142fcaad8
int64_t var_30 = arg8
char rax_14 = (*(*rcx_6 + 0x20))(rcx_6, &var_88, &var_38, 0)
int64_t* rcx_7 = *(arg1 + 8)
int64_t r8_2 = *rcx_7
(*(r8_2 + 8))(rcx_7, &var_d8, r8_2)
return zx.q(rax_14)
