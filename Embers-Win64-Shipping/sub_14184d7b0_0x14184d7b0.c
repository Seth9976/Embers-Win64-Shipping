// 函数: sub_14184d7b0
// 地址: 0x14184d7b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
uint128_t* var_c0
void* var_a8
(*(*arg3 + 0x10))(arg3, &var_a8, &var_c0)
uint128_t* rcx_1 = var_c0
uint64_t rsi
rsi.b = 0
void* var_b8 = nullptr
bool cond:0 = *(arg1 + 0x10) s< 6
int32_t rdx_1 = 0
void* rdi = nullptr
int32_t var_b0 = 0
int32_t r8_1 = 0
int32_t var_c8 = *(rcx_1 + 0x1c)
int32_t var_ac = 0
char rax_7
int512_t zmm1

if (not(cond:0))
    int32_t rax_4 = *(rcx_1 + 0x1c)
    
    if (rax_4 != 0)
        sub_1405c5510(&var_b8, rax_4)
        rcx_1 = var_c0
        r8_1 = var_ac
        rdx_1 = var_b0
        rdi = var_b8
    
    int32_t rcx_4 = *(rcx_1 + 0x1c) + rdx_1
    int32_t var_b0_1 = rcx_4
    
    if (rcx_4 s> r8_1)
        sub_1405daba0(&var_b8)
        rdi = var_b8
    
    int32_t var_d8_1 = 0
    void var_a0
    var_b8.d = *sub_140b5e500(&var_a0, 0x101)
    var_b8:4.d = 0
    rax_7, zmm1 = sub_140aecc20(var_b8, rdi, &var_c8, var_a8, *(var_c0 + 0x1c), 0x10)
    rcx_1 = var_c0
    rsi = zx.q(rax_7)

if (cond:0 || rax_7 == 0)
    var_c8 = *(rcx_1 + 0x1c)
else
    var_a8 = rdi

int64_t var_8c = 0
int64_t var_70
__builtin_memset(&var_70, 0, 0x1c)
int32_t rdx_4 = 3
int64_t rax_9 = sx.q(*(arg1 + 0x10))
int32_t var_98 = 3
int64_t var_94 = 0x42
int64_t var_84 = 0
int32_t var_7c = 0x100000
int16_t var_78 = 0x100
var_98.o = *rcx_1
zmm1.o = rcx_1[1]
var_8c:4.o = zmm1.o
var_78.o = rcx_1[2]
zmm1.o = rcx_1[3]
int64_t var_68
var_68.o = zmm1.o
int32_t var_58
var_58.q = rcx_1[4].q

if (rax_9.d u> 0x12)
    rdx_4 = 0
else
    switch (rax_9)
        case 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0xa, 0xb
            rdx_4 = 1
        case 0xc, 0xd
            rdx_4 = 2

int64_t rax_11 = *arg2
var_98 = rdx_4
int64_t rax_12 = (*(rax_11 + 0x20))(arg2, rdx_4)
sub_141824b20(arg2, &var_98, zmm1)
int64_t rdx_6 = *arg2
int32_t rax_13 = (*(rdx_6 + 0x20))(arg2, rdx_6)
var_84:4.d = var_c8
var_94.d = rax_13 - rax_12.d
char rax_15 = var_78:1.b
var_78.b = rsi.b
char rcx_17 = rax_15

if ((1 & rax_15) == 0)
    rcx_17 = 1

var_78:1.b = rcx_17
int32_t var_7c_1 = *(var_c0 + 0x1c)
(*(*arg2 + 0x178))(arg2, rax_12)
sub_141824b20(arg2, &var_98, zmm1)
(*(*arg2 + 0x150))(arg2, var_a8, sx.q(var_c8))
int64_t rdx_11 = *arg3
int64_t rbx_1
rbx_1.b = sbb.b(rax_12.b, rax_12.b, (*(arg2 + 0x29) & 1) != 0)
rbx_1.b &= 3
(*(rdx_11 + 0x18))(arg3, rdx_11)

if (rdi != 0)
    sub_140a74f90(rdi)

__security_check_cookie(rax_1 ^ &var_108)
return zx.q(rbx_1.b)
