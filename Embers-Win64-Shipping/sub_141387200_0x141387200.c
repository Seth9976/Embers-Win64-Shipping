// 函数: sub_141387200
// 地址: 0x141387200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_588
int64_t rax_1 = __security_cookie ^ &var_588
void var_4e8
memset(&var_4e8, 0, 0x480)
int64_t r8 = *arg1
int64_t r14 = 0
int64_t var_68 = 0
sub_1413837b0(&var_4e8, &arg1[3], r8)
void* rcx_2 = arg1[2]
void*** r15 = *(rcx_2 + 0x51f0)

if (*(data_143ec51f8 + 4) == 0)
    char var_554_1 = 1
    int64_t var_540_1 = 0
    int32_t var_538_1 = 0
    int64_t var_520_1 = 0
    int32_t var_518_1 = 0
    int64_t var_508
    __builtin_memset(&var_508, 0, 0x18)
    int32_t var_558 = 0x3c
    void* rax_3 = sub_140790e00(&arg1[3])
    void* var_560 = rax_3
    int64_t var_58 = &var_560
    int32_t var_50_1 = 1
    int64_t rbx_1 = 0x4f1a08f64cae0c3d
    int128_t var_550_1 = var_58.o
    int32_t var_48_1 = *(rax_3 + 0x28)
    var_58 = (*(rax_3 + 0x18)).q
    int64_t var_510_1 = (-0x25b7402ea319f3f8 + var_58) ^ 0x4f1a08f64cae0c3d
    sub_1419a2ec0(*(arg1[2] + 0x5150), &var_58, &data_143ec8770, 0)
    int64_t rcx_9 = var_58
    int64_t rax_4 = 0
    
    if (rcx_9 != 0)
        int64_t rdx_2 = sx.q(*(rcx_9 + 0x10c))
        int64_t* r14_1 = *(var_50_1.q + 0x10)
        int64_t* rax_6 = r14_1[3]
        
        if (rax_6[rdx_2] == 0)
            sub_1419ccf30(r14_1, rdx_2.d)
            rax_6 = r14_1[3]
        
        rax_4 = rax_6[rdx_2]
        r14 = 0
    
    int64_t var_568 = rax_4
    int64_t* r9_1 = &var_568
    int32_t var_50_2 = 1
    var_58 = &var_568
    int64_t i = 0
    int128_t var_530_1 = var_58.o
    
    do
        void* rax_7 = *r9_1
        r9_1 = &r9_1[1]
        i += 1
        var_58 = (*(rax_7 + 0x18)).q
        rbx_1 ^= (rbx_1 << 6) + var_58 + (rbx_1 u>> 2) - -0x9e3779b9
    while (i != 1)
    
    int64_t var_500_1 = rbx_1
    char var_554_2 = 0
    void*** rax_11 = sub_141972650(arg2, &var_558)
    rcx_2 = arg1[2]
    r15 = rax_11

int64_t r13 = *(rcx_2 + 0x51e8)
void* rcx_16 = arg1[3]

if (rcx_16 != 0)
    int64_t rdx_4 = sx.q(*(rcx_16 + 0x10c))
    int64_t* rbx_2 = *(arg1[4] + 0x10)
    int64_t* rax_12 = rbx_2[3]
    
    if (rax_12[rdx_4] == 0)
        sub_1419ccf30(rbx_2, rdx_4.d)
        rax_12 = rbx_2[3]
    
    r14 = rax_12[rdx_4]

int32_t r12 = *(arg1 + 0x2c)
int32_t rdi_1 = arg1[5].d
void*** rdx_7 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_13 = &rdx_7[0x96]

if (rax_13 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x4b8)
    rdx_7 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_13 = &rdx_7[0x96]

*(arg2 + 0x30) = rax_13
void* rcx_20 = &rdx_7[4]
void**** rax_14 = *(arg2 + 8)
int64_t i_2 = 9
*(arg2 + 0x14) += 1
*rax_14 = rdx_7
*(arg2 + 8) = &rdx_7[1]
rdx_7[1] = 0
*rdx_7 = &data_142f51dd0
void* rax_16 = &var_4e8
rdx_7[2] = r15
rdx_7[3] = r13
int64_t i_1

do
    rcx_20 += 0x80
    int128_t zmm0_1 = *rax_16
    rax_16 += 0x80
    *(rcx_20 - 0x80) = zmm0_1
    *(rcx_20 - 0x70) = *(rax_16 - 0x70)
    *(rcx_20 - 0x60) = *(rax_16 - 0x60)
    *(rcx_20 - 0x50) = *(rax_16 - 0x50)
    *(rcx_20 - 0x40) = *(rax_16 - 0x40)
    *(rcx_20 - 0x30) = *(rax_16 - 0x30)
    *(rcx_20 - 0x20) = *(rax_16 - 0x20)
    *(rcx_20 - 0x10) = *(rax_16 - 0x10)
    i_1 = i_2
    i_2 -= 1
while (i_1 != 1)
rdx_7[0x94] = r14
rdx_7[0x95].d = rdi_1
*(rdx_7 + 0x4ac) = r12
int64_t result = sub_1405d1550(&var_68)
__security_check_cookie(rax_1 ^ &var_588)
return result
