// 函数: sub_141ba5c10
// 地址: 0x141ba5c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_318
int64_t rax_1 = __security_cookie ^ &var_318
int64_t var_2f8
sub_141baaa80(&data_143f31310, &var_2f8, arg1 + 0x80)
int64_t rsi = sx.q(*(arg1 + 0x88))
int64_t rbx = *(arg1 + 0x80)
uint64_t var_2f0 = 0
int32_t var_2e8 = rsi.d
int32_t rcx
uint64_t rbx_1

if (rsi.d != 0)
    sub_1405c4a00(&var_2f0, rsi.d, 0)
    rbx_1 = var_2f0
    memcpy(rbx_1, rbx, (rsi << 3).d)
    int32_t var_2e4
    rcx = var_2e4
    rsi = zx.q(var_2e8)
else
    rcx = 0
    rbx_1 = 0

int64_t rax_2 = var_2f8
void** const var_1c8 = &data_14306f188
int32_t var_1b0 = rsi.d
int64_t var_190 = 0
int32_t var_188 = 0
int32_t var_184 = 2
int64_t var_168 = 0
int32_t var_160 = 0
int32_t var_15c = 2
int64_t var_138 = 0
int32_t var_130 = 0
int32_t var_12c = 2
int64_t var_100 = 0
int32_t var_f8 = 0
int32_t var_f4 = 2
int64_t var_c0 = 0
int32_t var_b8 = 0
int32_t var_b4 = 2
int64_t var_58 = 0
int32_t var_50 = 0
int32_t var_4c = 2
void var_1a8
sub_141b18710(arg1, arg3, &var_1a8)
char var_2a0
char var_2a0_1 = var_2a0 & 0xfc
int64_t* rax_3 = sub_140a82f30(0x180, 8)
int64_t* var_2e0 = rax_3
char rcx_4 = var_2a0_1 | 1
char var_2a0_2 = rcx_4
int64_t* rcx_5 = &var_2e0

if ((rcx_4 & 2) == 0)
    rcx_5 = rax_3

*rcx_5 = &data_14306f188
rcx_5[1] = rax_2
rcx_5[2] = 0
rcx_5[2] = rbx_1
int64_t var_1b8_1 = 0
rcx_5[3].d = var_1b0
*(rcx_5 + 0x1c) = rcx
var_1b0.q = 0
sub_141af5f10(&rcx_5[4], &var_1a8)
int32_t var_288 = arg4[0x24].d
int128_t var_298 = *(arg4 + 0x110)
int128_t var_284 = *(arg4 + 0x124)
void var_270
sub_141a2f010(&var_270, &arg4[0x27])
char var_1d8
char rcx_8 = var_1d8 & 0xfe
char var_1d8_1 = rcx_8 | 2
int128_t var_218

if ((var_2a0_2 & 1) != 0)
    char rax_10 = var_2a0_2 & 0xfe
    var_2a0_2 = rax_10
    var_218 = var_2e0.o
    int128_t var_2d0
    int128_t var_208_1 = var_2d0
    var_1d8_1 = (((rax_10 ^ rcx_8) & 2) ^ rcx_8) | 1
    int128_t var_2c0
    int128_t var_1f8_1 = var_2c0
    int128_t var_2b0
    int128_t var_1e8_1 = var_2b0

int64_t rbx_2 = sx.q(arg4[1].d)
int32_t rax_11 = (rbx_2 + 1).d
arg4[1].d = rax_11

if (rax_11 s> *(arg4 + 0xc))
    sub_1405c5190(arg4)

sub_1405ab620(rbx_2 * 0xc8 + *arg4, &var_298)

if ((var_1d8_1 & 1) != 0)
    int128_t* rcx_12 = &var_218
    
    if ((var_1d8_1 & 2) == 0)
        rcx_12 = var_218.q
    
    (**rcx_12)(rcx_12, 0)
    
    if ((var_1d8_1 & 2) == 0)
        sub_140a74f90(var_218.q)

int64_t var_238

if (var_238 != 0)
    sub_140a74f90(var_238)

if ((var_2a0_2 & 1) != 0)
    int64_t* rcx_15 = &var_2e0
    
    if ((var_2a0_2 & 2) == 0)
        rcx_15 = var_2e0
    
    (**rcx_15)(rcx_15, 0)
    
    if ((var_2a0_2 & 2) == 0)
        sub_140a74f90(var_2e0)

int64_t result = sub_141afcfd0(&var_1a8)

if (var_1b8_1 != 0)
    result = sub_140a74f90(var_1b8_1)

__security_check_cookie(rax_1 ^ &var_318)
return result
