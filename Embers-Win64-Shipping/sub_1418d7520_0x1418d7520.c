// 函数: sub_1418d7520
// 地址: 0x1418d7520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int32_t var_e8
sub_140865c40(arg2 + 0xa0, &var_e8, *(arg4 + 0x10))
int64_t rax_2 = sx.q(var_e8)
void* const rcx_1

if (rax_2.d == 0xffffffff)
    rcx_1 = nullptr
else
    rcx_1 = *(arg2 + 0xa0) + rax_2 * 0x18

int64_t r8_1 = *(arg5 + 0x10)
int32_t r12 = *(arg5 + 0x70)
int32_t r15_1 = r12 & 6
var_e8 = *(rcx_1 + 8)
int32_t var_e0 = 0
int64_t var_a0 = r8_1
int32_t var_e4
sub_140865c40(arg2 + 0xa0, &var_e4, r8_1)
int64_t rax_5 = sx.q(var_e4)
void* const rcx_3

if (rax_5.d == 0xffffffff)
    rcx_3 = nullptr
else
    rcx_3 = *(arg2 + 0xa0) + rax_5 * 0x18

int32_t* rbx = rcx_3 + 8

if (rcx_3 == 0)
    rbx = nullptr

if (rbx == 0)
    int32_t* rax_7 = sub_1418ca3c0(arg2 + 0xa0, &var_a0, &var_e0)
    r12 = *(arg5 + 0x70)
    rbx = rax_7

int32_t rdx_5 = arg8[9]
int64_t r13_1 = *(arg3 + 0x40)
uint8_t rsi_2 = (*(arg5 + 0x30) u>> 0x12).b & 1
int32_t var_c0 = *(arg4 + 0x70)
int32_t var_bc = rdx_5
int32_t var_b8 = 1
int32_t rcx_6

if (arg6 != 6)
    rcx_6 = 0
else
    rcx_6 = *arg8

int32_t rax_10 = arg8[0xa] * arg6
int32_t var_d4 = rdx_5
int32_t var_b0 = 1
int32_t var_d8 = r12
int32_t var_d0 = 1
int32_t rcx_7

if (arg7 != 6)
    rcx_7 = 0
else
    rcx_7 = *arg8

int32_t var_c8 = 1
int32_t rax_14 = arg8[0xb] * arg7 + rcx_7
sub_1418f0770(r13_1, *(arg4 + 0x10), var_e8, 6, &var_c0)
sub_1418f0770(r13_1, *(arg5 + 0x10), 0, 7, &var_d8)
int32_t rcx_10 = arg8[9]
int64_t r9 = *(arg5 + 0x10)
int64_t rdx_9 = *(arg4 + 0x10)
int64_t var_88 = 0
int32_t var_80 = 0
int64_t var_6c = 0
int32_t var_64 = 0
uint32_t rax_16 = *(arg4 + 0x20) u>> rcx_10.b
int32_t var_94 = rcx_10
int32_t var_78 = rcx_10

if (rax_16 u<= 1)
    rax_16 = 1

int32_t var_58 = 1
uint32_t var_60 = rax_16
uint32_t rax_18 = *(arg4 + 0x24) u>> rcx_10.b
int32_t var_8c = 1
int32_t var_70 = 1

if (rax_18 u<= 1)
    rax_18 = 1

uint32_t var_5c = rax_18
int32_t var_98 = *(arg4 + 0x70)
int32_t var_90 = rax_10 + rcx_6
int32_t var_7c = *(arg5 + 0x70)
int32_t var_74 = rax_14
int32_t* var_108_1
var_108_1.d = 7
data_143efb9f8(r13_1, rdx_9, 6, r9, var_108_1, 1, &var_98)
int32_t r9_2 = sub_1418f0770(r13_1, *(arg4 + 0x10), 6, var_e8, &var_c0)
int32_t* var_108_3 = &var_d8
int64_t result

if (rsi_2 == 0)
    *rbx = sbb.d(r9_2, r9_2, r15_1 != 0) + 5
    result = sub_1418f0770(r13_1, *(arg5 + 0x10), 7, sbb.d(r9_2, r9_2, r15_1 != 0) + 5, var_108_3)
else
    result = sub_1418f0770(r13_1, *(arg5 + 0x10), 7, 1, var_108_3)
    *rbx = 1

__security_check_cookie(rax_1 ^ &var_128)
return result
