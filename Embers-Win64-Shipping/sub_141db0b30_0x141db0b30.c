// 函数: sub_141db0b30
// 地址: 0x141db0b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_70 = 0
int64_t var_68 = 0
int32_t var_60 = 0
int64_t rdi
rdi.b = 0
*arg6 = 0
int64_t* rcx = *(arg1 + 8)
int64_t var_80 = *arg4
int32_t var_78 = arg4[1].d
int16_t var_40 = 0x202
int32_t var_58 = 0
int64_t var_50 = 0
int32_t var_48 = 0
int32_t var_3e = 0xff00ff
int32_t var_88 = 0xc
int32_t* rax_4 = (*(*rcx + 0x10))(rcx)
char r12 = not.b(arg3)
int32_t var_f8 = *rax_4
int128_t zmm6 = rax_4[1]
int32_t var_f4 = zmm6.d
int32_t zmm5 = rax_4[2]
int32_t var_f0 = zmm5
int32_t zmm4 = rax_4[3]
int32_t var_ec = zmm4
int32_t r11 = rax_4[4]
int32_t var_e8 = r11
char rbx = rax_4[5].b
char var_e4 = rbx
char r10 = *(rax_4 + 0x15)
char var_e3 = r10
char r9 = *(rax_4 + 0x16)
char var_e2 = r9
int64_t zmm3 = *(rax_4 + 0x18)
int64_t var_e0 = zmm3
int32_t r8 = rax_4[8]
int32_t var_d8 = r8
int32_t rdx = rax_4[9]
int32_t var_d4 = rdx
int32_t rsi = rax_4[0xa]
int32_t var_d0 = rsi
int32_t zmm2 = rax_4[0xb]
int32_t var_cc = zmm2
int32_t zmm1 = rax_4[0xc]
int32_t var_c8 = zmm1
int64_t zmm0 = *(rax_4 + 0x34)
int64_t var_c4 = zmm0
int32_t rcx_2 = rax_4[0xf]
int32_t var_bc = rcx_2
int32_t rax_5 = rax_4[0x10]
int32_t var_b8 = rax_5
int32_t var_108 = rax_5
char rax_6 = rbx
int32_t var_10c = rcx_2

if ((r12 & 4) == 0)
    rax_6 = 1

int32_t var_144 = zmm6.d
char var_134 = rax_6
int32_t var_140 = zmm5
int32_t var_13c = zmm4
int32_t var_11c = zmm2
int32_t var_118 = zmm1
int32_t var_138 = r11
char var_133 = r10
char var_132 = r9
int64_t var_130 = zmm3
int32_t var_128 = r8
int32_t var_124 = rdx
int64_t var_114 = zmm0
int32_t var_148 = 0
void** const var_a8

if ((1 & r12) == 0)
    sub_140acc600(&var_a8, arg4)
    zmm0 = (zx.o(0)).q
    int32_t var_118_1 = 0
    int32_t var_124_1 = 2

if ((2 & r12) == 0)
    rsi = 1

int32_t var_120_1 = rsi
(*(**(arg1 + 8) + 8))(zmm0, &var_148)
int64_t* rcx_5 = *(arg1 + 8)
var_a8 = &data_142fcaad8
int64_t var_158 = 0
int64_t* var_a0 = &var_158
int64_t var_150 = 0

if ((*(*rcx_5 + 0x38))(rcx_5, &var_88, &var_a8, 0, var_158, var_150) != 0)
    rdi.b = 1
else if ((var_40.b & 8) == 0)
    int16_t var_40_1 = var_40 | 8
    rdi = 0
    
    if ((*(**(arg1 + 8) + 0x38))(zmm0, &var_88, &var_a8, 0) != 0)
        rdi = 2

uint32_t count = var_150.d

if (count == 0)
    rdi.b = 0
else if (rdi.b != 0)
    int32_t rax_12 = arg5[1].d
    int32_t rdx_5 = rax_12 + count
    
    if (rdx_5 s> *(arg5 + 0xc))
        sub_1405c5510(arg5, rdx_5)
        rax_12 = arg5[1].d
    
    memcpy(sx.q(rax_12) + *arg5, var_158, count)
    arg5[1].d += count

int64_t rcx_10 = var_158
var_a8 = &data_142d40888

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

int64_t* rcx_11 = *(arg1 + 8)
int64_t r8_4 = *rcx_11
(*(r8_4 + 8))(rcx_11, &var_f8, r8_4)
return zx.q(rdi.b)
