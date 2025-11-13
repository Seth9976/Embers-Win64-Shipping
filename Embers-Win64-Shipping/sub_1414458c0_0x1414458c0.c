// 函数: sub_1414458c0
// 地址: 0x1414458c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int64_t var_7c
__builtin_memset(&var_7c, 0, 0x43)
int128_t var_d8
__builtin_memset(&var_d8, 0, 0x30)
int128_t var_90 = zx.o(0)
int16_t var_38 = 0
sub_140fdc870(arg2, &var_d8)
int64_t var_98 = data_14395d9e8
int64_t var_a8 = data_1439b6028
int64_t var_a0 = data_14395da18
int32_t var_80 = 0
int64_t rax_5 = 0
var_d8.q = data_1439c9410
void* rcx_2 = *arg1

if (rcx_2 != 0)
    int64_t rdx_1 = sx.q(*(rcx_2 + 0x10c))
    int64_t* rsi_1 = *(arg1[1] + 0x10)
    int64_t* rax_7 = rsi_1[3]
    
    if (rax_7[rdx_1] == 0)
        sub_1419ccf30(rsi_1, rdx_1.d)
        rax_7 = rsi_1[3]
    
    rax_5 = rax_7[rdx_1]

void* rcx_4 = arg1[2]
var_d8:8.q = rax_5
int64_t rax_8 = 0

if (rcx_4 != 0)
    int64_t rdx_2 = sx.q(*(rcx_4 + 0x10c))
    int64_t* r14_2 = *(arg1[3] + 0x10)
    int64_t* rax_10 = r14_2[3]
    
    if (rax_10[rdx_2] == 0)
        sub_1419ccf30(r14_2, rdx_2.d)
        rax_10 = r14_2[3]
    
    rax_8 = rax_10[rdx_2]

int128_t var_b8
var_b8.q = rax_8
sub_1419870b0(arg2, &var_d8, 2)
void* rax_11 = *arg1
int64_t r8 = 0

if (rax_11 != 0)
    int64_t rdx_4 = sx.q(*(rax_11 + 0x10c))
    int64_t* r14_3 = *(arg1[1] + 0x10)
    int64_t* rax_13 = r14_3[3]
    
    if (rax_13[rdx_4] == 0)
        sub_1419ccf30(r14_3, rdx_4.d)
        rax_13 = r14_3[3]
    
    r8 = rax_13[rdx_4]

sub_141440a20(arg2, arg1, r8, arg1[4])
void* rax_14 = arg1[2]
int64_t r8_1 = 0

if (rax_14 != 0)
    int64_t rdx_6 = sx.q(*(rax_14 + 0x10c))
    int64_t* r14_4 = *(arg1[3] + 0x10)
    int64_t* rax_16 = r14_4[3]
    
    if (rax_16[rdx_6] == 0)
        sub_1419ccf30(r14_4, rdx_6.d)
        rax_16 = r14_4[3]
    
    r8_1 = rax_16[rdx_6]

sub_141440460(arg2, &arg1[2], r8_1, arg1[4])
int64_t r14_5 = data_1439c9168
int64_t rsi_2 = *(*(arg1[4] + 0xa8) + 0x10)
void*** rcx_14 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_18 = &rcx_14[5]

if (rax_18 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_14 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_18 = &rcx_14[5]

*(arg2 + 0x30) = rax_18
int64_t* rax_19 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_19 = rcx_14
*(arg2 + 8) = &rcx_14[1]
rcx_14[1] = 0
*rcx_14 = &data_142f21880
rcx_14[2] = r14_5
rcx_14[3] = rsi_2
rcx_14[4].d = 0
__security_check_cookie(rax_1 ^ &var_f8)
return &data_142f21880
