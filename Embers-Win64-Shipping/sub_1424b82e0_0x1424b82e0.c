// 函数: sub_1424b82e0
// 地址: 0x1424b82e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_ca8
int64_t rax_1 = __security_cookie ^ &var_ca8
int128_t var_5f8 = zx.o(0)
int128_t var_5e8
__builtin_memcpy(&var_5e8, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xb4\x42\x00\x00\xb4\x42\x00\x00\x00\x44\x00\x00\x00\x00\x"
"00\x00\x00\x4a\xab\xaa\xaa\x3f", 
    0x20)
char var_5c4 = 0
int32_t var_5c0 = 0
void var_5b8
sub_1422d7fd0(&var_5b8)
int64_t var_78 = 0
char var_38 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_5f8, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_5f8)

*(arg2 + 0x38) = 0
void var_c88

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_c88, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_c88)

void* rax_7 = *(arg2 + 0x38)
void* r14 = &var_c88
*(arg2 + 0x38) = 0

if (rax_7 != 0)
    r14 = rax_7

void var_c48

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_c48, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_c48)

void* rax_9 = *(arg2 + 0x38)
void* rsi = &var_c48
*(arg2 + 0x38) = 0

if (rax_9 != 0)
    rsi = rax_9

void var_c08

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_c08, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_c08)

int128_t* r15 = &var_c08
int128_t* rax_11 = *(arg2 + 0x38)

if (rax_11 != 0)
    r15 = rax_11

uint64_t var_bc8 = var_5f8.q
int64_t rax_12 = *(arg2 + 0x20)
uint64_t var_bbc = var_5f8:0xc.q
uint128_t zmm0 = var_5e8
int64_t rdi
rdi.b = rax_12 != 0
int128_t var_5d8
int32_t var_b9c = var_5d8:0xc.d.d
int32_t var_bc0 = var_5f8:8.d
int32_t var_bb4 = var_5e8:4.d
*(arg2 + 0x20) = rdi + rax_12
uint128_t var_bb0 = zmm0
int32_t var_b98
int32_t var_5c8
int32_t var_b98_1 = var_b98 ^ ((var_b98 ^ ((var_5c8 & 0xfffffffe) | 2)) & 3)
int32_t var_ba0 = var_5d8:8.d.d
int32_t var_b90 = var_5c0.d
char var_b94 = var_5c4
void var_b88
sub_1422d6d20(&var_b88, &var_5b8)
int32_t var_648 = var_78.d.d
int32_t var_644 = var_78:4.d.d
char var_608 = 0

if (var_38 != 0)
    int128_t var_68
    int128_t var_638_1 = var_68
    int128_t var_48
    int128_t var_618_1 = var_48
    int128_t var_58
    int128_t var_628_1 = var_58
    char var_608_1 = 1

int64_t result = sub_14202be90(&var_bc8, r14, rsi, r15)
char var_38_1 = 0
int64_t var_88

if (var_88 != 0)
    result = sub_140a74f90(var_88)

__security_check_cookie(rax_1 ^ &var_ca8)
return result
