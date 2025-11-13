// 函数: sub_1413c83a0
// 地址: 0x1413c83a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_598
int64_t rax_1 = __security_cookie ^ &var_598
void var_4e8
memset(&var_4e8, 0, 0x480)
int64_t r8 = *(arg1 + 0x20)
int64_t var_68 = 0
sub_1413bacb0(&var_4e8, arg1 + 0x10, r8)
int64_t r13 = *(*(arg1 + 8) + 0x51e8)
void*** rdx_3
int64_t i_3
int32_t r14_1

if (data_1439b6af4 == 0)
    char var_554_1 = 1
    int64_t var_540_1 = 0
    int32_t var_538_1 = 0
    int64_t var_520_1 = 0
    int32_t var_518_1 = 0
    int64_t var_508
    __builtin_memset(&var_508, 0, 0x18)
    int32_t var_558 = 0x3c
    void* rax_7 = sub_140790e00(arg1 + 0x10)
    void* var_570 = rax_7
    void** var_58 = &var_570
    int32_t var_50_1 = 1
    int64_t rbx_1 = 0x4f1a08f64cae0c3d
    int128_t var_550_1 = var_58.o
    int32_t var_48_1 = *(rax_7 + 0x28)
    var_58 = (*(rax_7 + 0x18)).q
    int64_t var_510_1 = &var_58[-0x4b6e805d4633e7f] ^ 0x4f1a08f64cae0c3d
    sub_1419a2ec0(*(*(arg1 + 8) + 0x5150), &var_58, &data_143ec8770, 0)
    void** rcx_12 = var_58
    void* rax_8 = nullptr
    
    if (rcx_12 != 0)
        int64_t rdx_7 = sx.q(*(rcx_12 + 0x10c))
        int64_t* r14_2 = *(var_50_1.q + 0x10)
        int64_t* rax_10 = r14_2[3]
        
        if (rax_10[rdx_7] == 0)
            sub_1419ccf30(r14_2, rdx_7.d)
            rax_10 = r14_2[3]
        
        rax_8 = rax_10[rdx_7]
    
    void* var_578 = rax_8
    void** r9_1 = &var_578
    int32_t var_50_2 = 1
    var_58 = &var_578
    int64_t i = 0
    int128_t var_530_1 = var_58.o
    
    do
        void* rax_11 = *r9_1
        r9_1 = &r9_1[1]
        i += 1
        var_58 = (*(rax_11 + 0x18)).q
        rbx_1 ^= &var_58[rbx_1 * 8] + (rbx_1 u>> 2) - -0x9e3779b9
    while (i != 1)
    
    int64_t var_500_1 = rbx_1
    char var_554_2 = 0
    void*** rax_15 = sub_141972650(arg2, &var_558)
    r14_1 = *(arg1 + 0x2c)
    int32_t rsi_2 = *(arg1 + 0x28)
    void* rax_16 = sub_140790e00(arg1 + 0x10)
    rdx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rcx_20 = &rdx_3[0x96]
    
    if (rcx_20 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x4b8)
        rdx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rcx_20 = &rdx_3[0x96]
    
    *(arg2 + 0x30) = rcx_20
    i_3 = 9
    void**** rax_17 = *(arg2 + 8)
    void* rcx_22 = &rdx_3[4]
    *(arg2 + 0x14) += 1
    *rax_17 = rdx_3
    *(arg2 + 8) = &rdx_3[1]
    rdx_3[1] = 0
    *rdx_3 = &data_142f51dd0
    rdx_3[3] = r13
    void* rax_20 = &var_4e8
    rdx_3[2] = rax_15
    int64_t i_1
    
    do
        rcx_22 += 0x80
        int128_t zmm0_4 = *rax_20
        rax_20 += 0x80
        *(rcx_22 - 0x80) = zmm0_4
        *(rcx_22 - 0x70) = *(rax_20 - 0x70)
        *(rcx_22 - 0x60) = *(rax_20 - 0x60)
        *(rcx_22 - 0x50) = *(rax_20 - 0x50)
        *(rcx_22 - 0x40) = *(rax_20 - 0x40)
        *(rcx_22 - 0x30) = *(rax_20 - 0x30)
        *(rcx_22 - 0x20) = *(rax_20 - 0x20)
        *(rcx_22 - 0x10) = *(rax_20 - 0x10)
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    rdx_3[0x94] = rax_16
    rdx_3[0x95].d = rsi_2
else
    r14_1 = *(arg1 + 0x2c)
    int32_t r15_1 = *(arg1 + 0x28)
    void* rax_3 = sub_140790e00(arg1 + 0x10)
    rdx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    int64_t rsi_1 = *(*(arg1 + 8) + 0x51f0)
    void* rcx_4 = &rdx_3[0x96]
    
    if (rcx_4 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x4b8)
        rdx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rcx_4 = &rdx_3[0x96]
    
    *(arg2 + 0x30) = rcx_4
    i_3 = 9
    void** rax_4 = *(arg2 + 8)
    void* rcx_6 = &var_4e8
    *(arg2 + 0x14) += 1
    *rax_4 = rdx_3
    *(arg2 + 8) = &rdx_3[1]
    rdx_3[1] = 0
    *rdx_3 = &data_142f51dd0
    void* rax_6 = &rdx_3[4]
    rdx_3[2] = rsi_1
    rdx_3[3] = r13
    int64_t i_2
    
    do
        rax_6 += 0x80
        int128_t zmm0_1 = *rcx_6
        rcx_6 += 0x80
        *(rax_6 - 0x80) = zmm0_1
        *(rax_6 - 0x70) = *(rcx_6 - 0x70)
        *(rax_6 - 0x60) = *(rcx_6 - 0x60)
        *(rax_6 - 0x50) = *(rcx_6 - 0x50)
        *(rax_6 - 0x40) = *(rcx_6 - 0x40)
        *(rax_6 - 0x30) = *(rcx_6 - 0x30)
        *(rax_6 - 0x20) = *(rcx_6 - 0x20)
        *(rax_6 - 0x10) = *(rcx_6 - 0x10)
        i_2 = i_3
        i_3 -= 1
    while (i_2 != 1)
    rdx_3[0x94] = rax_3
    rdx_3[0x95].d = r15_1

*(rdx_3 + 0x4ac) = r14_1
int64_t result = sub_1405d1550(&var_68, rdx_3, i_3)
__security_check_cookie(rax_1 ^ &var_598)
return result
