// 函数: sub_1413decc0
// 地址: 0x1413decc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_588
int64_t rax_1 = __security_cookie ^ &var_588
int32_t var_558 = 0x18
int64_t var_510
__builtin_memset(&var_510, 0, 0x20)
char var_554 = 1
int64_t var_540 = 0
void* var_568
int64_t* var_58 = &var_568
int32_t var_538 = 0
int64_t var_530 = 0
int32_t var_528 = 0
int64_t var_520 = 0
int32_t var_518 = 0
var_568 = arg3
int32_t var_50 = 1
int128_t var_550 = var_58.o
int64_t var_510_1 = (-0x25b7402ea319f3f8 + (*(arg3 + 0x18)).q) ^ 0x4f1a08f64cae0c3d
void*** rax_2 = sub_141972650(arg2, &var_558)
int64_t var_4e8[0xc]
memset(&var_4e8, 0, 0x480)
int64_t var_68 = 0
int64_t var_3e8[0x40]

if (*(arg1 + 0x11a) u> 0)
    var_3e8[zx.q(*(arg1 + 0x118))] = *(*(arg4 + 0x10) + 0x18)
int16_t rax_3 = *(arg1 + 0x11c)
int64_t var_1e8[0x10]

if (rax_3 != 0xffff)
    var_1e8[zx.q(rax_3)] = arg5

int16_t rax_5 = *(arg1 + 0x11e)

if (rax_5 != 0xffff)
    var_1e8[zx.q(rax_5)] = arg6

int16_t rax_7 = *(arg1 + 0x120)

if (rax_7 != 0xffff)
    var_1e8[zx.q(rax_7)] = arg7

int64_t var_e8[0x10]

if (*(arg1 + 0x12c) u> 0)
    var_e8[zx.q(*(arg1 + 0x12a))] = arg8

if (*(arg1 + 0x130) u> 0)
    var_e8[zx.q(*(arg1 + 0x12e))] = arg9

if (*(arg1 + 0x124) u> 0)
    void* rax_11 = sub_1422c6ca0(arg2)
    
    if (rax_11 == 0)
        rax_11 = data_1439b70c8
    
    var_4e8[zx.q(*(arg1 + 0x122))] = *(rax_11 + 0x10)
    int64_t var_168[0x10]
    var_168[zx.q(*(arg1 + 0x126))] = data_14395f4d0

int64_t rsi_1 = *(arg4 + 0x10)
void*** rdx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_14 = &rdx_4[0x96]

if (rax_14 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x4b8)
    rdx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_14 = &rdx_4[0x96]

*(arg2 + 0x30) = rax_14
void* rcx_16 = &rdx_4[4]
void**** rax_15 = *(arg2 + 8)
int64_t i_1 = 9
*(arg2 + 0x14) += 1
*rax_15 = rdx_4
*(arg2 + 8) = &rdx_4[1]
rdx_4[1] = 0
*rdx_4 = &data_142f51dd0
int64_t (* rax_17)[0xc] = &var_4e8
rdx_4[2] = rax_2
rdx_4[3] = rsi_1
int64_t i

do
    rcx_16 += 0x80
    int128_t zmm0_1 = *rax_17
    rax_17 = &(*rax_17)[0x10]
    *(rcx_16 - 0x80) = zmm0_1
    *(rcx_16 - 0x70) = *(rax_17 - 0x70)
    *(rcx_16 - 0x60) = *(rax_17 - 0x60)
    *(rcx_16 - 0x50) = *(rax_17 - 0x50)
    *(rcx_16 - 0x40) = rax_17[0][0].o
    *(rcx_16 - 0x30) = *(rax_17 - 0x30)
    *(rcx_16 - 0x20) = *(rax_17 - 0x20)
    *(rcx_16 - 0x10) = *(rax_17 - 0x10)
    i = i_1
    i_1 -= 1
while (i != 1)
rdx_4[0x95].d = arg10
*(rdx_4 + 0x4ac) = arg11
rdx_4[0x94] = arg3
int64_t result = sub_1405d1550(&var_68)
__security_check_cookie(rax_1 ^ &var_588)
return result
