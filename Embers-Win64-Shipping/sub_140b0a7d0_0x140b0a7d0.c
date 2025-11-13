// 函数: sub_140b0a7d0
// 地址: 0x140b0a7d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
*arg1 = 0
__builtin_memset(&arg1[8], 0, 0x20)
void* rcx = &arg1[0x28]
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax_2 = *(rcx + 0x10)

if (rax_2 != 0)
    rcx = rax_2

*rcx = 0
*(rcx + 8) = 0
void* rcx_1 = &arg1[0x78]
*(arg1 + 0x48) = 0xffffffff
*(arg1 + 0x4c) = 0
*(arg1 + 0x58) = 0
*(arg1 + 0x60) = 0
*(arg1 + 0x68) = 0
*(arg1 + 0x70) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax_3 = *(rcx_1 + 0x10)

if (rax_3 != 0)
    rcx_1 = rax_3

__builtin_memset(rcx_1, 0, 0x1c)
void* rcx_2 = &arg1[0xc8]
*(arg1 + 0x98) = 0xffffffff
*(arg1 + 0x9c) = 0
*(arg1 + 0xa8) = 0
*(arg1 + 0xb0) = 0
*(arg1 + 0xb8) = 0
*(arg1 + 0xc0) = 0
*(rcx_2 + 0x1c) = 0x80
void* rax_4 = *(rcx_2 + 0x10)

if (rax_4 != 0)
    rcx_2 = rax_4

__builtin_memset(rcx_2, 0, 0x1c)
void* rcx_3 = &arg1[0x118]
*(arg1 + 0xe8) = 0xffffffff
*(arg1 + 0xec) = 0
*(arg1 + 0xf8) = 0
*(arg1 + 0x100) = 0
*(arg1 + 0x108) = 0
*(arg1 + 0x110) = 0
*(rcx_3 + 0x1c) = 0x80
void* rax_5 = *(rcx_3 + 0x10)

if (rax_5 != 0)
    rcx_3 = rax_5

__builtin_memset(rcx_3, 0, 0x1c)
void* rcx_4 = &arg1[0x168]
*(arg1 + 0x138) = 0xffffffff
*(arg1 + 0x13c) = 0
*(arg1 + 0x148) = 0
*(arg1 + 0x150) = 0
*(arg1 + 0x158) = 0
*(arg1 + 0x160) = 0
*(rcx_4 + 0x1c) = 0x80
void* rax_6 = *(rcx_4 + 0x10)

if (rax_6 != 0)
    rcx_4 = rax_6

__builtin_memset(rcx_4, 0, 0x1c)
*(arg1 + 0x188) = 0xffffffff
*(arg1 + 0x18c) = 0
*(arg1 + 0x198) = 0
*(arg1 + 0x1a0) = 0
*(arg1 + 0x1a8) = 0
*(arg1 + 0x1b0) = 0
void* rcx_5 = &arg1[0x1b8]
int64_t* (* rsi)(int64_t* arg1, int64_t arg2, int64_t arg3) = sub_140acf300
*(rcx_5 + 0x1c) = 0x80
int64_t* (* rdx)(int64_t* arg1, int64_t arg2, int64_t arg3) = sub_140acf300
void* rax_7 = *(rcx_5 + 0x10)
void*** var_a8 = nullptr
void** const var_98 = &data_142e347e8

if (rax_7 != 0)
    rcx_5 = rax_7

int64_t* (* var_b8)(int64_t* arg1, int64_t arg2, int64_t arg3) = sub_140acf300
__builtin_memset(rcx_5, 0, 0x1c)
void* rcx_6 = &arg1[0x208]
*(arg1 + 0x1d8) = 0xffffffff
*(arg1 + 0x1dc) = 0
*(arg1 + 0x1e8) = 0
*(arg1 + 0x1f0) = 0
*(arg1 + 0x1f8) = 0
*(arg1 + 0x200) = 0
*(rcx_6 + 0x1c) = 0x80
void* rax_8 = *(rcx_6 + 0x10)

if (rax_8 != 0)
    rcx_6 = rax_8

__builtin_memset(rcx_6, 0, 0x1c)
void* rcx_7 = &arg1[0x258]
*(arg1 + 0x228) = 0xffffffff
*(arg1 + 0x22c) = 0
*(arg1 + 0x238) = 0
*(arg1 + 0x240) = 0
*(arg1 + 0x248) = 0
*(arg1 + 0x250) = 0
*(rcx_7 + 0x1c) = 0x80
void* rax_9 = *(rcx_7 + 0x10)

if (rax_9 != 0)
    rcx_7 = rax_9

void* (* var_90)(void* arg1, int64_t* arg2) = sub_140b07ff0
__builtin_memset(rcx_7, 0, 0x1c)
*(arg1 + 0x278) = 0xffffffff
*(arg1 + 0x27c) = 0
*(arg1 + 0x288) = 0
*(arg1 + 0x290) = 0
*arg1 = 1
int64_t r14 = sx.q(*(arg1 + 0x10))
int32_t rax_10 = (r14 + 1).d
*(arg1 + 0x10) = rax_10

if (rax_10 s> *(arg1 + 0x14))
    sub_1405c4fe0(&arg1[8])
    rdx = var_b8

int64_t* (** rcx_11)(int64_t* arg1, int64_t arg2, int64_t arg3) = (r14 << 6) + *(arg1 + 8)
*rcx_11 = rdx
rcx_11[2] = var_a8
*(rcx_11 + 0x20) = var_98.o
int128_t var_88
*(rcx_11 + 0x30) = var_88

if (*rcx_11 == 0 && var_b8 != 0)
    void** const* rcx_12 = &var_98
    
    if (var_a8 != 0)
        rcx_12 = var_a8
    
    (*rcx_12)[2](rcx_12)

int64_t r14_1 = sx.q(*(arg1 + 0x10))
void* (* var_90_1)(void* arg1, int64_t* arg2) = sub_140b07ec0
int64_t* (* rdx_2)(int64_t* arg1, int64_t arg2, int64_t arg3) = sub_140acf300
void*** var_a8_1 = nullptr
var_98 = &data_142e347e8
int32_t rax_14 = (r14_1 + 1).d
var_b8 = sub_140acf300
*(arg1 + 0x10) = rax_14

if (rax_14 s> *(arg1 + 0x14))
    sub_1405c4fe0(&arg1[8])
    rdx_2 = var_b8

int64_t* (** rcx_16)(int64_t* arg1, int64_t arg2, int64_t arg3) = (r14_1 << 6) + *(arg1 + 8)
*rcx_16 = rdx_2
rcx_16[2] = var_a8_1
*(rcx_16 + 0x20) = var_98.o
*(rcx_16 + 0x30) = var_88

if (*rcx_16 == 0 && var_b8 != 0)
    void** const* rcx_17 = &var_98
    
    if (var_a8_1 != 0)
        rcx_17 = var_a8_1
    
    (*rcx_17)[2](rcx_17)

int64_t r14_2 = sx.q(*(arg1 + 0x10))
void* (* var_90_2)(void* arg1, int64_t* arg2) = sub_140aca6f0
int64_t* (* rdx_4)(int64_t* arg1, int64_t arg2, int64_t arg3) = sub_140acf300
void*** var_a8_2 = nullptr
var_98 = &data_142e347e8
int32_t rax_18 = (r14_2 + 1).d
var_b8 = sub_140acf300
*(arg1 + 0x10) = rax_18

if (rax_18 s> *(arg1 + 0x14))
    sub_1405c4fe0(&arg1[8])
    rdx_4 = var_b8

int64_t* (** rcx_21)(int64_t* arg1, int64_t arg2, int64_t arg3) = (r14_2 << 6) + *(arg1 + 8)
*rcx_21 = rdx_4
rcx_21[2] = var_a8_2
*(rcx_21 + 0x20) = var_98.o
*(rcx_21 + 0x30) = var_88

if (*rcx_21 == 0 && var_b8 != 0)
    void** const* rcx_22 = &var_98
    
    if (var_a8_2 != 0)
        rcx_22 = var_a8_2
    
    (*rcx_22)[2](rcx_22)

int64_t r14_3 = sx.q(*(arg1 + 0x10))
void* (* var_90_3)(void* arg1, int64_t* arg2) = sub_140ad06e0
void*** var_a8_3 = nullptr
var_98 = &data_142e347e8
int32_t rax_22 = (r14_3 + 1).d
var_b8 = sub_140acf300
*(arg1 + 0x10) = rax_22

if (rax_22 s> *(arg1 + 0x14))
    sub_1405c4fe0(&arg1[8])
    rsi = var_b8

int64_t* (** rcx_26)(int64_t* arg1, int64_t arg2, int64_t arg3) = (r14_3 << 6) + *(arg1 + 8)
*rcx_26 = rsi
rcx_26[2] = var_a8_3
*(rcx_26 + 0x20) = var_98.o
*(rcx_26 + 0x30) = var_88

if (*rcx_26 == 0 && var_b8 != 0)
    void** const* rcx_27 = &var_98
    
    if (var_a8_3 != 0)
        rcx_27 = var_a8_3
    
    (*rcx_27)[2](rcx_27)

int64_t var_d0 = 1
char var_c8 = 0
sub_140ad8a60()
sub_140acb210(&arg1[0x108], &data_143dbb2f0, &var_d0)
sub_140b1b710()
void var_d4
sub_140acafe0(&arg1[0xb8], &var_d4, &data_143de69e0, nullptr)
sub_140b1b690()
sub_140acafe0(&arg1[0xb8], &var_d4, &data_143de69f8, nullptr)
sub_140b1b710()
var_b8.o = data_143de69e0.o
sub_140ad89e0()
var_98 = nullptr
int64_t var_90_4 = 0
void*** var_68 = nullptr
int128_t zmm0_2 = data_143dbb218.o
char var_d8
char var_50 = var_d8
void** const var_58 = &data_142e6d808
int64_t* (* var_78)(int64_t* arg1, int64_t arg2, int32_t* arg3, int64_t* arg4) = sub_140b0ee40
var_a8_3.o = zmm0_2
sub_140acb340(&arg1[0x1a8], &var_b8, &var_78)

if (var_78 != 0)
    void** const* rcx_32 = &var_58
    
    if (var_68 != 0)
        rcx_32 = var_68
    
    (*rcx_32)[2](rcx_32)

sub_140b1b690()
var_b8.o = data_143de69f8.o
sub_140ad89e0()
var_98 = nullptr
int64_t var_90_5 = 0
void*** var_68_1 = nullptr
int128_t zmm0_4 = data_143dbb218.o
char var_50_1 = var_d8
var_58 = &data_142e6d808
var_78 = sub_140b0ee70
var_a8_3.o = zmm0_4
sub_140acb340(&arg1[0x1a8], &var_b8, &var_78)

if (var_78 != 0)
    void** const* rcx_34 = &var_58
    
    if (var_68_1 != 0)
        rcx_34 = var_68_1
    
    (*rcx_34)[2](rcx_34)

sub_140ad8a60()
var_b8.o = data_143dbb2f0.o
sub_140ad89e0()
var_a8_3.o = data_143dbb218.o
sub_140ad89e0()
void*** var_68_2 = nullptr
int128_t zmm0_7 = data_143dbb218.o
char var_50_2 = var_d8
var_58 = &data_142e6d808
var_78 = sub_140b0eeb0
var_98.o = zmm0_7
sub_140acb340(&arg1[0x1f8], &var_b8, &var_78)

if (var_78 != 0)
    void** const* rcx_36 = &var_58
    
    if (var_68_2 != 0)
        rcx_36 = var_68_2
    
    void** const rdx_13 = *rcx_36
    rdx_13[2](rcx_36, rdx_13)

__security_check_cookie(rax_1 ^ &var_f8)
return arg1
