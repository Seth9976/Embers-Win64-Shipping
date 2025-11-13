// 函数: sub_1414f6390
// 地址: 0x1414f6390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax_1 = std::_Get_future_error_what((*U"1111")[sx.q(arg3)])
void* var_58
sub_1419a2ec0(rax_1, &var_58, &data_143eefa80, 0)
void* var_48
sub_1419a2ec0(rax_1, &var_48, &data_143ef3f60, 0)
int64_t rax_2 = 0
*arg2 = data_1439c9410
void* rcx_4 = var_58

if (rcx_4 != 0)
    int64_t rdx_2 = sx.q(*(rcx_4 + 0x10c))
    void* var_50
    int64_t* rbx_1 = *(var_50 + 0x10)
    int64_t rax_4 = rbx_1[3]
    
    if (*(rax_4 + (rdx_2 << 3)) == 0)
        sub_1419ccf30(rbx_1, rdx_2.d)
        rax_4 = rbx_1[3]
    
    rax_2 = *(rax_4 + (rdx_2 << 3))

void* rsi_2 = var_48
arg2[1] = rax_2
int64_t rax_5 = 0

if (rsi_2 != 0)
    int64_t rdx_3 = sx.q(*(rsi_2 + 0x10c))
    void* var_40
    int64_t* rbx_2 = *(var_40 + 0x10)
    int64_t rax_7 = rbx_2[3]
    
    if (*(rax_7 + (rdx_3 << 3)) == 0)
        sub_1419ccf30(rbx_2, rdx_3.d)
        rax_7 = rbx_2[3]
    
    rax_5 = *(rax_7 + (rdx_3 << 3))

arg2[4] = rax_5
arg2[0xb].d = 0
sub_1419870b0(arg1, arg2, 2)
int64_t* arg_30
int64_t* rbx_3 = arg_30
int64_t rbp_2 = *(arg1 + 0x1a0)
int64_t r12_1 = *arg4
int64_t arg_10 = rbp_2
int64_t rbx_4 = *rbx_3

if (*(rsi_2 + 0x11a) u> 0)
    uint32_t r15_1 = zx.d(*(rsi_2 + 0x118))
    void*** rcx_10 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_8 = &rcx_10[5]
    
    if (rax_8 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x30)
        rcx_10 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_8 = &rcx_10[5]
    
    *(arg1 + 0x30) = rax_8
    void**** rax_9 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rax_9 = rcx_10
    *(arg1 + 8) = &rcx_10[1]
    rcx_10[1] = 0
    *rcx_10 = &data_142d5a070
    rcx_10[2] = rbp_2
    rcx_10[3].d = r15_1
    rcx_10[4] = r12_1

if (*(rsi_2 + 0x11e) u> 0)
    uint32_t r15_2 = zx.d(*(rsi_2 + 0x11c))
    void*** rcx_16 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_11 = &rcx_16[5]
    
    if (rax_11 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x30)
        rcx_16 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_11 = &rcx_16[5]
    
    *(arg1 + 0x30) = rax_11
    void** rax_12 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rax_12 = rcx_16
    *(arg1 + 8) = &rcx_16[1]
    rcx_16[1] = 0
    *rcx_16 = &data_142d5ebf8
    rcx_16[4] = arg5
    rcx_16[2] = rbp_2
    rcx_16[3].d = r15_2

uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(rbx_4.d))
uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(rbx_4:4.d))
arg_30.d = zmm0.d
arg_30:4.d = zmm1.d
sub_1405d0cd0(arg1, &arg_10, rsi_2 + 0x120, &arg_30, 0)
void*** rcx_23 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_15 = &rcx_23[5]

if (rax_15 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x30)
    rcx_23 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_15 = &rcx_23[5]

*(arg1 + 0x30) = rax_15
int64_t* rax_16 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_16 = rcx_23
*(arg1 + 8) = &rcx_23[1]
rcx_23[1] = 0
*rcx_23 = &data_142d56618
rcx_23[3] = arg6
rcx_23[2].d = 0
rcx_23[4].d = 0
void*** rcx_29 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_19 = &rcx_29[4]

if (rax_19 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x28)
    rcx_29 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_19 = &rcx_29[4]

*(arg1 + 0x30) = rax_19
int64_t* rax_20 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_20 = rcx_29
*(arg1 + 8) = &rcx_29[1]
rcx_29[1] = 0
*rcx_29 = &data_142d54988
rcx_29[2].d = 0
*(rcx_29 + 0x14) = 1
rcx_29[3].d = 1
return &data_142d54988
