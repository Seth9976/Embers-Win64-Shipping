// 函数: sub_14282d434
// 地址: 0x14282d434
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int64_t var_c8 = 0
int64_t var_c0 = 0xf
char var_d8 = 0
char var_f8 = 0
char var_f6 = 0
char var_e0 = 0
int64_t rax_2

if (arg1[0x22] == 0)
    rax_2 = sub_14282dac0()
else
    rax_2 = sub_14282dbdc()

int64_t var_108 = rax_2
char var_100 = 0

if (arg1[0x22] == 0)
    int32_t var_fc_1 = sub_1428278e4(arg1) + 1
else
    int32_t var_fc = 0

int32_t var_f4 = 2
char var_f7 = 1
char var_f0 = 1
int32_t var_ec = 0xffffffff
int32_t var_e8 = 1
int32_t var_e4 = 2
sub_14282b1a8(arg1)
uint128_t zmm6 = zx.o(arg1[1])
int32_t rsi = arg1[2].d
void* var_58
int64_t* rax_5
int64_t r8_1
rax_5, r8_1 = sub_14282e794(&var_58, arg1, &var_108)

if (&var_d8 != rax_5)
    if (var_c0 u>= 0x10)
        sub_14058ba50(var_d8.q, var_c0 + 1)
    
    var_c8 = 0
    var_c0 = 0xf
    var_d8 = 0
    memcpy(&var_d8, rax_5, 0x20)
    rax_5[2] = 0
    rax_5[3] = 0xf
    *rax_5 = 0

int64_t var_40

if (var_40 u>= 0x10)
    sub_14058ba50(var_58, var_40 + 1)

*(arg1 + 0x82) = var_e0
*(arg1 + 0x83) = 0
int32_t var_b8 = 0
int32_t var_b4 = 0x13
uint64_t var_b0 = zmm6.q
int32_t var_a8 = rsi
int64_t var_90 = 0
int64_t var_88 = 0xf
char var_a0[0x10]
var_a0[0] = 0
int64_t* var_80
__builtin_memset(&var_80, 0, 0x1c)
char* r9 = &var_d8

if (var_c0 u>= 0x10)
    r9 = var_d8.q

char (* rcx_6)[0x10] = &var_a0

if (var_c8 u> 0xf)
    r8_1.b = 0
    sub_14058b8a0(rcx_6, var_c8, r8_1, r9)
else
    int64_t var_90_1 = var_c8
    memmove(rcx_6, r9, var_c8.d)
    var_a0[var_c8] = 0

int64_t result = sub_14282b618(&arg1[0xb], &var_b8)
int64_t* rcx_8 = var_80

if (rcx_8 != 0)
    int128_t var_78
    sub_140688f70(rcx_8, var_78.q)
    int64_t* rcx_9 = var_80
    result = sub_14058ba50(rcx_9, (var_78:8.q - rcx_9) & 0xffffffffffffffe0)
    int64_t var_80_1
    __builtin_memset(&var_80_1, 0, 0x18)

if (var_88 u>= 0x10)
    result = sub_14058ba50(var_a0[0].q, var_88 + 1)

int64_t var_90_2 = 0
int64_t var_88_1 = 0xf
var_a0[0] = 0

if (var_c0 u>= 0x10)
    result = sub_14058ba50(var_d8.q, var_c0 + 1)

__security_check_cookie(rax_1 ^ &var_128)
return result
