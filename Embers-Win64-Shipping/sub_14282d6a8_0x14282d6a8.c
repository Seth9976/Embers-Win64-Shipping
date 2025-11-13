// 函数: sub_14282d6a8
// 地址: 0x14282d6a8
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
int32_t var_1c8 = 0
int64_t var_e0 = 0
int64_t var_d8 = 0xf
char var_f0 = 0
char rax_2 = sub_14282b034(arg1)
int64_t rdi
rdi.b = rax_2
int64_t r14
r14.b = rax_2 == 0x27
char var_190 = 0
int32_t var_17c = 0
char var_178 = 0
int32_t* rdx_3
int32_t rbx_1

if (rax_2 != 0x27)
    void var_170
    rdx_3 = sub_142826388(&var_170, rdi.b)
    rbx_1 = 8
else
    sub_14282bc98()
    void var_110
    int32_t* rax_3 = sub_1428263e4(&var_110, &data_143f89a50)
    int32_t var_1c8_1 = 1
    int32_t var_1c8_2 = 3
    void var_150
    void var_130
    rdx_3 = sub_142826538(&var_150, sub_142826388(&var_130, rdi.b), rax_3)
    rbx_1 = 7

int32_t var_1c8_3 = rbx_1
int32_t var_1c0 = *rdx_3
int32_t rax_7
rax_7.b = rdx_3[1].b
char var_1bc = rax_7.b
rax_7.b = *(rdx_3 + 5)
char var_1bb = rax_7.b
void* var_1b8
sub_14281f81c(&var_1b8, &rdx_3[2])

if ((rbx_1.b & 8) != 0)
    rbx_1 &= 0xfffffff7
    void* var_168
    
    if (var_168 != 0)
        int64_t var_160
        sub_14281f774(var_168, var_160)
        int64_t var_158
        sub_14058ba50(var_168, (var_158 - var_168) & 0xffffffffffffffe0)
        int64_t var_168_1
        __builtin_memset(&var_168_1, 0, 0x18)

if ((rbx_1.b & 4) != 0)
    rbx_1 &= 0xfffffffb
    void* var_148
    
    if (var_148 != 0)
        int64_t var_140
        sub_14281f774(var_148, var_140)
        int64_t var_138
        sub_14058ba50(var_148, (var_138 - var_148) & 0xffffffffffffffe0)
        int64_t var_148_1
        __builtin_memset(&var_148_1, 0, 0x18)

if ((2 & rbx_1.b) != 0)
    rbx_1 &= 0xfffffffd
    void* var_128
    
    if (var_128 != 0)
        int64_t var_120
        sub_14281f774(var_128, var_120)
        int64_t var_118
        sub_14058ba50(var_128, (var_118 - var_128) & 0xffffffffffffffe0)
        int64_t var_128_1
        __builtin_memset(&var_128_1, 0, 0x18)

void* var_108

if ((rbx_1.b & 1) != 0 && var_108 != 0)
    int64_t var_100
    sub_14281f774(var_108, var_100)
    int64_t var_f8
    sub_14058ba50(var_108, (var_f8 - var_108) & 0xffffffffffffffe0)
    int64_t var_108_1
    __builtin_memset(&var_108_1, 0, 0x18)

int32_t* var_1a0 = &var_1c0
char var_198 = 1
char temp0 = r14.b
r14.b = neg.b(r14.b)
char var_18e = (sbb.b(&var_1c0, &var_1c0, temp0 != 0) & 0xcb) + 0x5c
int32_t var_194 = 0
int32_t var_18c = 2
char var_18f = 1
char var_188 = 0
int32_t var_184 = 0
int32_t var_180 = 2
sub_14282b1a8(arg1)
uint128_t zmm6 = zx.o(arg1[1])
int32_t rdi_1 = arg1[2].d
sub_14282aff8(arg1)
void* var_68
int64_t* rax_9
int64_t r8_3
rax_9, r8_3 = sub_14282e794(&var_68, arg1, &var_1a0)

if (&var_f0 != rax_9)
    if (var_d8 u>= 0x10)
        sub_14058ba50(var_f0.q, var_d8 + 1)
    
    var_e0 = 0
    var_d8 = 0xf
    var_f0 = 0
    memcpy(&var_f0, rax_9, 0x20)
    rax_9[2] = 0
    rax_9[3] = 0xf
    *rax_9 = 0

int64_t var_50

if (var_50 u>= 0x10)
    sub_14058ba50(var_68, var_50 + 1)

*(arg1 + 0x82) = 0x100
int32_t var_c8 = 0
int32_t var_c4 = 0x14
uint64_t var_c0 = zmm6.q
int32_t var_b8 = rdi_1
int64_t var_a0 = 0
int64_t var_98 = 0xf
char var_b0[0x10]
var_b0[0] = 0
int64_t* var_90
__builtin_memset(&var_90, 0, 0x1c)
char* r9 = &var_f0

if (var_d8 u>= 0x10)
    r9 = var_f0.q

char (* rcx_19)[0x10] = &var_b0

if (var_e0 u> 0xf)
    r8_3.b = 0
    sub_14058b8a0(rcx_19, var_e0, r8_3, r9)
else
    int64_t var_a0_1 = var_e0
    memmove(rcx_19, r9, var_e0.d)
    var_b0[var_e0] = 0

int64_t result = sub_14282b618(&arg1[0xb], &var_c8)
int64_t* rcx_21 = var_90

if (rcx_21 != 0)
    int128_t var_88
    sub_140688f70(rcx_21, var_88.q)
    int64_t* rcx_22 = var_90
    result = sub_14058ba50(rcx_22, (var_88:8.q - rcx_22) & 0xffffffffffffffe0)
    int64_t var_90_1
    __builtin_memset(&var_90_1, 0, 0x18)

if (var_98 u>= 0x10)
    result = sub_14058ba50(var_b0[0].q, var_98 + 1)

int64_t var_a0_2 = 0
int64_t var_98_1 = 0xf
var_b0[0] = 0
void* rcx_24 = var_1b8

if (rcx_24 != 0)
    int64_t var_1b0
    sub_14281f774(rcx_24, var_1b0)
    void* rcx_25 = var_1b8
    int64_t var_1a8
    result = sub_14058ba50(rcx_25, (var_1a8 - rcx_25) & 0xffffffffffffffe0)
    __builtin_memset(&var_1b8, 0, 0x18)

if (var_d8 u>= 0x10)
    result = sub_14058ba50(var_f0.q, var_d8 + 1)

__security_check_cookie(rax_1 ^ &var_1e8)
return result
