// 函数: sub_141db0df0
// 地址: 0x141db0df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r14 = 0
int32_t var_a0 = 0
int64_t r12
r12.b = 0
int64_t var_98 = 0
*arg5 = 0
int64_t* rcx = *(arg1 + 8)
int64_t var_b0 = *arg4
int32_t var_a8 = arg4[1].d
int16_t var_70 = 0x202
int32_t var_90 = 0
int32_t var_88 = 0
int64_t var_80 = 0
int32_t var_78 = 0
int32_t var_6e = 0xff00ff
int32_t var_b8 = 0xc
int32_t* rax_3 = (*(*rcx + 0x10))(rcx)
int32_t var_108 = *rax_3
int128_t zmm6 = rax_3[1]
int32_t var_104 = zmm6.d
int32_t zmm5 = rax_3[2]
int32_t var_100 = zmm5
int32_t zmm4 = rax_3[3]
int32_t var_fc = zmm4
int32_t r11 = rax_3[4]
int32_t var_f8 = r11
char rdi = rax_3[5].b
char var_f4 = rdi
char r10 = *(rax_3 + 0x15)
char var_f3 = r10
char r9 = *(rax_3 + 0x16)
char var_f2 = r9
int64_t zmm3 = *(rax_3 + 0x18)
int64_t var_f0 = zmm3
int32_t r8 = rax_3[8]
int32_t var_e8 = r8
int32_t rdx = rax_3[9]
int32_t var_e4 = rdx
int32_t r15 = rax_3[0xa]
int32_t var_e0 = r15
int32_t zmm2 = rax_3[0xb]
int32_t var_dc = zmm2
int32_t zmm1 = rax_3[0xc]
int32_t var_d8 = zmm1
int64_t zmm0 = *(rax_3 + 0x34)
int64_t var_d4 = zmm0
int32_t rcx_1 = rax_3[0xf]
int32_t var_cc = rcx_1
int32_t rax_5 = rax_3[0x10]
int32_t var_c8 = rax_5
char rbx_1 = not.b(arg3)
int32_t var_118 = rax_5
char rax_6 = rdi
int32_t var_154 = zmm6.d
int32_t var_150 = zmm5

if ((rbx_1 & 4) == 0)
    rax_6 = 1

int32_t var_14c = zmm4
char var_144 = rax_6
int32_t var_12c = zmm2
int32_t var_128 = zmm1
int32_t var_148 = r11
char var_143 = r10
char var_142 = r9
int64_t var_140 = zmm3
int32_t var_138 = r8
int32_t var_134 = rdx
int64_t var_124 = zmm0
int32_t var_11c = rcx_1
int32_t var_158 = 0

if ((1 & rbx_1) == 0)
    float var_68[0x2][0x4]
    sub_140acc600(&var_68, arg4)
    zmm0 = (zx.o(0)).q
    int32_t var_128_1 = 0
    int32_t var_134_1 = 2

if ((rbx_1 & 2) == 0)
    r15 = 1

int32_t var_130_1 = r15
(*(**(arg1 + 8) + 8))(zmm0, &var_158)
int64_t* rcx_4 = data_143ef8520
int64_t rbx_2 = **(arg1 + 8)
int64_t rax_10 = (*(*rcx_4 + 0x138))(rcx_4)
int64_t rax_11 = (*(rbx_2 + 0x40))(*(arg1 + 8), &var_b8, rax_10)
*arg5 = rax_11

if (rax_11 != 0)
    r12 = 1
else if ((var_70.b & 8) == 0)
    int16_t var_70_1 = var_70 | 8
    int64_t rbx_3 = **(arg1 + 8)
    int64_t rax_14 = (*(*data_143ef8520 + 0x138))(zmm0)
    rax_11 = (*(rbx_3 + 0x40))(*(arg1 + 8), &var_b8, rax_14)
    *arg5 = rax_11
    
    if (rax_11 != 0)
        r12.b = 2

if (rax_11 != 0)
    r14 = r12.b

int64_t* rcx_9 = *(arg1 + 8)
int64_t r8_3 = *rcx_9
(*(r8_3 + 8))(rcx_9, &var_108, r8_3)
return zx.q(r14)
