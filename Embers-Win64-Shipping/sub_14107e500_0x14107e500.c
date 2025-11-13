// 函数: sub_14107e500
// 地址: 0x14107e500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = *(arg2 + 0x78)
void* rcx = *(arg1 + 8)
char rax_1
int512_t zmm0

if (rcx != 0)
    rax_1, zmm0 = sub_1410c2460(rcx, arg8)

int64_t r12

if (rcx == 0 || rax_1 == 0 || (not.b(arg9) & 1) == 0)
    r12.b = 0
else
    r12.b = 1

void* rax_3

if (arg8 u> 1)
    rax_3 = *(arg1 + 8)

int64_t r15

if (arg8 u<= 1 || rax_3 == 0 || *(rax_3 + 0x1c28) == 0 || *(*(rax_3 + 0x6328) + 2) == 0)
    r15.b = 0
else
    r15.b = 1

zmm0.o = zx.o(0)
char rbx = *(arg1 + 0x74)
int512_t zmm1
zmm1.o = zx.o(0)
int128_t var_168
__builtin_memset(&var_168, 0, 0x70)
int128_t var_138
int128_t* var_188 = &var_138
int128_t var_158
int128_t var_148
int512_t zmm1_1
int512_t zmm2
zmm1_1, zmm2 = sub_14107bfa0(arg7, (*(*rax + 0x40))(rax, zmm1), zx.q(*arg10), *(arg1 + 0x10), zmm0, 
    r15.b, r12.b, rbx, &var_158, &var_148, &var_168)
int32_t r8_1 = *(arg1 + 0x10)
void* rcx_3 = *(arg1 + 0x18)
int64_t var_f8 = *(arg1 + 0x28)
int64_t var_f0 = *(arg1 + 0x30)
int32_t var_e8 = *(arg1 + 0x38)
int64_t var_e0 = *(arg1 + 0x40)
int64_t var_d8 = *(arg1 + 0x48)
int64_t var_d0 = *(arg1 + 0x50)
int64_t var_c8 = *(arg1 + 0x58)
int32_t var_c0 = *(arg1 + 0x60)
char var_1b0
var_1b0.q = arg5
char var_1b8
var_1b8.d = arg4
sub_1410b4180(rcx_3, &var_f8, r8_1, arg2, var_1b8, var_1b0, *(arg1 + 0x6d))

if (*(arg1 + 0x6c) != 0)
    sub_1410b7640(&var_f8, arg7, (*U"1111")[sx.q(*(arg1 + 0x10))], *(arg1 + 0x68), zmm1_1, zmm2)

void* rdx_4 = *(arg1 + 0x18)
char var_1b0_1 = 1
int128_t var_b8 = zx.o(0)
int64_t var_a8 = *arg11
var_1b8.d = arg4
sub_141458e70(&var_b8, rdx_4, arg5, arg2, var_1b8, 1)
uint64_t rax_23

if (*(arg1 + 0x6c) == 0)
    rax_23 = sub_141090f30(*(arg1 + 0x70), arg8, var_168.q, var_138.q)
else
    int16_t rax_19 = 0
    
    if (arg5 != 0)
        rax_19 = *(*(*(arg5 + 0x110) + 8) + 0x30) - 0x8000
    
    rax_23 = zx.q(rax_19) << 0x30 | zx.q(*(arg2 + 0x98))

zmm1_1.o = var_158
int128_t* var_190
var_190.d = arg13
int128_t* var_198
var_198.d = arg12
int128_t var_98 = var_168
char var_1a8_1
var_1a8_1.q = &var_f8
int128_t var_88 = zmm1_1.o
zmm1_1.o = var_138
int128_t var_78 = var_148
int128_t var_68 = zmm1_1.o
int128_t var_118
zmm1_1.o = var_118
int128_t var_58
__builtin_memset(&var_58, 0, 0x30)
var_1b0_1.q = arg7
var_1b8.q = arg6
return sub_141072120(arg1, arg2, arg3, arg5, var_1b8, 1, var_1a8_1, &var_98, var_198.d, var_190.d, 
    rax_23, 0, &var_b8)
