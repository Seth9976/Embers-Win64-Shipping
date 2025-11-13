// 函数: sub_1414fc250
// 地址: 0x1414fc250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int64_t var_9c
__builtin_memset(&var_9c, 0, 0x43)
int128_t var_f8
__builtin_memset(&var_f8, 0, 0x30)
int128_t var_b0 = zx.o(0)
int16_t var_58 = 0
sub_140fdc870(arg2, &var_f8)
int64_t var_b8 = data_14395d9e8
int64_t var_c8 = data_14395da00
int64_t var_c0 = data_14395da18
int32_t var_a0 = 0
int64_t rax_5 = 0
var_f8.q = data_1439c9410
void* rcx_2 = *arg1

if (rcx_2 != 0)
    int64_t rdx_1 = sx.q(*(rcx_2 + 0x10c))
    int64_t* rsi_1 = *(arg1[1] + 0x10)
    int64_t rax_7 = rsi_1[3]
    
    if (*(rax_7 + (rdx_1 << 3)) == 0)
        sub_1419ccf30(rsi_1, rdx_1.d)
        rax_7 = rsi_1[3]
    
    rax_5 = *(rax_7 + (rdx_1 << 3))

void* rcx_4 = arg1[2]
var_f8:8.q = rax_5
int64_t rax_8 = 0

if (rcx_4 != 0)
    int64_t rdx_2 = sx.q(*(rcx_4 + 0x10c))
    int64_t* r14_2 = *(arg1[3] + 0x10)
    int64_t rax_10 = r14_2[3]
    
    if (*(rax_10 + (rdx_2 << 3)) == 0)
        sub_1419ccf30(r14_2, rdx_2.d)
        rax_10 = r14_2[3]
    
    rax_8 = *(rax_10 + (rdx_2 << 3))

int128_t var_d8
var_d8.q = rax_8
sub_1419870b0(arg2, &var_f8, 2)
void* rax_11 = *arg1
int64_t r8 = 0

if (rax_11 != 0)
    int64_t rdx_4 = sx.q(*(rax_11 + 0x10c))
    int64_t* r14_3 = *(arg1[1] + 0x10)
    int64_t rax_13 = r14_3[3]
    
    if (*(rax_13 + (rdx_4 << 3)) == 0)
        sub_1419ccf30(r14_3, rdx_4.d)
        rax_13 = r14_3[3]
    
    r8 = *(rax_13 + (rdx_4 << 3))

sub_1414f7410(arg2, arg1, r8, arg1[4])
void* rax_14 = arg1[2]
int64_t r8_1 = 0

if (rax_14 != 0)
    int64_t rdx_6 = sx.q(*(rax_14 + 0x10c))
    int64_t* r14_4 = *(arg1[3] + 0x10)
    int64_t rax_16 = r14_4[3]
    
    if (*(rax_16 + (rdx_6 << 3)) == 0)
        sub_1419ccf30(r14_4, rdx_6.d)
        rax_16 = r14_4[3]
    
    r8_1 = *(rax_16 + (rdx_6 << 3))

int64_t r9_2 = sub_1414f6e50(arg2, &arg1[2], r8_1, arg1[4])
uint128_t zmm7 = zx.o(arg1[5].d)
void*** rcx_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
uint128_t zmm6 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x2c)))
void* rax_17 = &rcx_13[5]
zmm7 = _mm_cvtepi32_ps(zmm7)

if (rax_17 u> *(arg2 + 0x38))
    r9_2, zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_17 = &rcx_13[5]

*(arg2 + 0x30) = rax_17
void**** rax_18 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_18 = rcx_13
*(arg2 + 8) = &rcx_13[1]
rcx_13[1] = 0
*(rcx_13 + 0x1c) = zmm7.d
rcx_13[4].d = zmm6.d
*rcx_13 = &data_142d54998
rcx_13[2] = 0
rcx_13[3].d = 0
*(rcx_13 + 0x24) = 0x3f800000
int64_t rsi_2 = data_1439c9168

if (rsi_2 == 0)
    sub_140af98a0("Unknown", 0xbc8, Tried to call DrawIndexedPrimitive with null IndexBuffer!", 
        r9_2)
    sub_140afbb40()

void*** rcx_19 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_20 = &rcx_19[6]

if (rax_20 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x38)
    rcx_19 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_20 = &rcx_19[6]

*(arg2 + 0x30) = rax_20
int64_t* rax_21 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_21 = rcx_19
*(arg2 + 8) = &rcx_19[1]
rcx_19[1] = 0
*rcx_19 = &data_142f11598
rcx_19[2] = rsi_2
rcx_19[3] = 0
rcx_19[4] = 4
rcx_19[5].d = 2
*(rcx_19 + 0x2c) = 1
__security_check_cookie(rax_1 ^ &var_118)
return &data_142f11598
