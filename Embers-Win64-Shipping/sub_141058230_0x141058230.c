// 函数: sub_141058230
// 地址: 0x141058230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
uint128_t zmm1 = arg4[1]
int128_t zmm0 = *arg4
int32_t r13 = arg4[2].d
uint64_t rsi = zx.q(arg5)
int32_t r14 = arg6
uint128_t var_f0 = zmm1
int32_t var_118 = rsi.d
int64_t rdi = sx.q(*(arg2 + 0x3c)) * 0x28
int32_t rax_4 = _mm_bsrli_si128(zmm1, 8).d
int32_t rcx_1 = *(rdi + 0x1439c85e8)
int32_t var_114 = r14
int32_t var_e0 = r13
int128_t var_100 = zmm0
int32_t rcx_2 = *(rdi + &data_1439c85ec)
var_f0:8.d = divs.dp.d(sx.q(rax_4 - 1 + rcx_1), rcx_1) * rcx_1
int32_t rbx_1 = divs.dp.d(sx.q(var_f0:0xc.d - 1 + rcx_2), rcx_2) * rcx_2
var_f0:0xc.d = rbx_1
void* var_d8
sub_1410447f0(arg1, &var_d8, arg2, arg3, &var_100)
int32_t r15 = 0
uint64_t i_2 = zx.q(divu.dp.d(0:rbx_1, *(rdi + &data_1439c85ec)))
int32_t var_a8

if (r13 != 0)
    int64_t rax_17 = arg7
    
    do
        int32_t var_a4
        int64_t var_a0
        int64_t rdi_3 = zx.q(var_a4 * r15) + var_a0
        int64_t rbx_4 = zx.q(r14 * r15) + rax_17
        
        if (i_2.d != 0)
            uint64_t i_1 = i_2
            uint64_t i
            
            do
                memcpy(rdi_3, rbx_4, rsi.d)
                rbx_4 += rsi
                rdi_3 += zx.q(var_a8)
                i = i_1
                i_1 -= 1
            while (i != 1)
            rsi = zx.q(var_118)
            r14 = var_114
            rax_17 = arg7
        
        r15 += 1
    while (r15 u< r13)

char var_88
int64_t result
void* var_90

if (var_88 == 0)
    void*** rdx_8 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    void* rax_20 = &rdx_8[0xa]
    
    if (rax_20 u> data_143f02bd0)
        sub_140b0e3d0(&data_143f02bc8, 0x58)
        rdx_8 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
        rax_20 = &rdx_8[0xa]
    
    data_143f02bac += 1
    data_143f02bc8 = rax_20
    *data_143f02ba0 = rdx_8
    data_143f02ba0 = &rdx_8[1]
    rdx_8[1] = 0
    *rdx_8 = &data_142f01e18
    int32_t var_d0
    rdx_8[2].d = var_d0
    int32_t var_cc
    *(rdx_8 + 0x14) = var_cc
    int32_t var_c8
    rdx_8[3].d = var_c8
    int32_t var_c4
    *(rdx_8 + 0x1c) = var_c4
    void* rax_27 = var_d8
    rdx_8[4] = rax_27
    
    if (rax_27 != 0)
        *(rax_27 + 8) += 1
    
    __builtin_memset(&rdx_8[6], 0, 0x20)
    int32_t var_ac
    *(rdx_8 + 0x44) = var_ac
    int32_t var_b0
    rdx_8[8].d = var_b0
    int32_t var_b4
    *(rdx_8 + 0x3c) = var_b4
    rdx_8[7].d = (&data_1439c85fc)[sx.q(*(rdx_8[4] + 0x3c)) * 0xa]
    rdx_8[9].d = var_a8
    void* rax_35 = var_90
    rdx_8[5] = rax_35
    result = *(rax_35 + 0x50)
    rdx_8[6] = result
else
    result = (*(*arg1 + 0x750))(arg1, &var_d8, &var_90)
__security_check_cookie(rax_1 ^ &var_148)
return result
