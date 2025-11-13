// 函数: sub_1411d3fc0
// 地址: 0x1411d3fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
int64_t var_58 = 2
int32_t var_50 = 0
int32_t var_e8 = 1
int16_t var_c0 = 1
int32_t var_f4 = 1
int64_t var_f0 = 1
int16_t var_e0 = 1
int128_t var_108 = var_58.o
int32_t var_e4 = 0x10000
int16_t var_d0 = 0
wchar16 const* const var_c8 = u"UnknownTexture"
char var_be = 0
int64_t var_dc = 0x1c
int32_t var_d4 = 0x10008
*arg6 = sub_141188e50(arg1, &var_108, u"HairVisibilityPPLLCounter", 0)
wchar16 const* const var_68 = u"UnknownTexture"
int32_t var_88 = 1
int16_t var_60 = 1
int16_t var_80 = 1
int32_t var_94 = *arg4
int32_t var_90 = arg4[1]
var_108.q = 2
var_108:8.d = 0
int32_t var_48
int32_t var_98 = var_48
int32_t var_84 = 0x10000
int16_t var_70 = 0
char var_5e = 0
int32_t var_8c = 0
int64_t var_7c = 0x1c
int32_t var_74 = 0x10008
int128_t var_a8 = var_108
*arg7 = sub_141188e50(arg1, &var_a8, u"HairVisibilityPPLLNodeIndex", 0)
int64_t rax_8 = *arg4
var_108:0xc.d = 2
var_108:8.d = 0x209
var_108.d = 0x1c
int32_t r12_3 = (rax_8 u>> 0x20).d * rax_8.d * data_1439b60e0
var_108:4.d = r12_3
void*** rax_9 = sub_14081d830(0x48, *(arg1 + 8), 1, 0)

if (rax_9 == 0)
    rax_9 = nullptr
else
    int128_t zmm0_1 = var_108
    rax_9[2] = 0
    rax_9[1] = u"HairVisibilityPPLLNodeData"
    rax_9[3].b = 0
    *(rax_9 + 0x1c) = 0
    rax_9[4] = 0
    rax_9[5].w = 0x200
    *rax_9 = &data_142f285d0
    *(rax_9 + 0x30) = zmm0_1
    rax_9[8] = 0

*arg8 = rax_9
void*** rbx_1 = *arg6
int64_t* rdx_3 = *(arg1 + 8)
int64_t var_40 = 0
int64_t var_38 = 0
var_58 = -1
var_50.q = -1
var_108.q = rbx_1
var_108:8.w = 0
void*** rax_10 = sub_14081d830(0x28, rdx_3, 1, 0)
void*** rdx_4 = rax_10

if (rax_10 == 0)
    rdx_4 = nullptr
else
    int128_t zmm0_2 = var_108
    rdx_4[1] = rbx_1[1]
    rdx_4[2] = 0
    *(rdx_4 + 0x18) = zmm0_2
    *rdx_4 = &data_142f285c0

sub_141996630(arg1, rdx_4, &var_40)
void*** rbx_2 = *arg7
var_108.q = rbx_2
var_108:8.w = 0
void*** rax_12 = sub_14081d830(0x28, *(arg1 + 8), 1, 0)
void*** rdx_6 = rax_12

if (rax_12 == 0)
    rdx_6 = nullptr
else
    int128_t zmm0_3 = var_108
    rdx_6[1] = rbx_2[1]
    *rdx_6 = &data_142f285c0
    rdx_6[2] = 0
    *(rdx_6 + 0x18) = zmm0_3

sub_141996630(arg1, rdx_6, &var_58)
int128_t* rax_14 = sub_14081d830(0xb0, *(arg1 + 8), 1, 0)
int128_t* rbx_3 = rax_14

if (rax_14 == 0)
    rbx_3 = nullptr
else
    __builtin_memset(rbx_3 + 8, 0, 0x18)
    sub_14117af20(&rbx_3[2])

memset(rbx_3, 0, 0xb0)
void*** rsi_1 = *arg6
var_108.q = rsi_1
var_108:8.w = 0
void*** rax_15 = sub_14081d830(0x28, *(arg1 + 8), 1, 0)

if (rax_15 != 0)
    int128_t zmm0_4 = var_108
    rax_15[1] = rsi_1[1]
    *rax_15 = &data_142f285c0
    rax_15[2] = 0
    *(rax_15 + 0x18) = zmm0_4

*(rbx_3 + 8) = rax_15
void*** rsi_2 = *arg7
var_108.q = rsi_2
var_108:8.w = 0
void*** rax_16 = sub_14081d830(0x28, *(arg1 + 8), 1, 0)

if (rax_16 != 0)
    int128_t zmm0_5 = var_108
    rax_16[1] = rsi_2[1]
    *rax_16 = &data_142f285c0
    rax_16[2] = 0
    *(rax_16 + 0x18) = zmm0_5

rbx_3[1].q = rax_16
void* rsi_3 = *arg8
int32_t rax_17 = 0
var_108.q = rsi_3
var_108:0xc.w = 0

if ((*(rsi_3 + 0x38) & 0x100) != 0)
    rax_17 = 0x1c

var_108:8.d = rax_17
void*** rax_18 = sub_14081d830(0x28, *(arg1 + 8), 1, 0)

if (rax_18 != 0)
    int128_t zmm0_6 = var_108
    rax_18[1] = *(rsi_3 + 8)
    *rax_18 = &data_142f285c0
    rax_18[2] = 0
    *(rax_18 + 0x18) = zmm0_6

*(rbx_3 + 0x18) = rax_18
var_108:8.w = 1
var_108:0xa.b = 0
var_108:0xc.d = 1
*rbx_3 = r12_3
var_108.q = *arg5
var_108:8.q = arg2
int32_t var_f8
var_f8.q = arg3
int128_t* var_128 = &var_108
rbx_3[0xa] = var_108
var_108.q = rbx_3
int64_t r9
int64_t var_f0_1 = r9
int32_t var_e8_1 = 2
void var_118
int64_t result = sub_1411b29a0(arg1, &var_118, rbx_3, 1, var_128)
__security_check_cookie(rax_1 ^ &var_148)
return result
