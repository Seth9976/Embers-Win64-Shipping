// 函数: sub_1422a4d20
// 地址: 0x1422a4d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a28
int64_t rax_1 = __security_cookie ^ &var_a28
int64_t r12 = sx.q(arg2)
void* r15 = arg1
int32_t i_8 = r12.d

if (*(arg1 + 0x228) == 0)
    *(arg1 + 0xc) = 3
    *(arg1 + 0x22c) = *(arg3 + 0x78) + 1
    int32_t rax_4 = *(arg3 + 0x84)
    int64_t var_998 = *(arg3 + 0x7c)
    int32_t var_990_1 = rax_4
    sub_142285060(arg1 + 0x10, &var_998, arg3 + 0x88)
    *(r15 + 0x228) = 1
else if (*(arg1 + 0x1c8) == 0 && *(arg3 + 0x230) != 0)
    int32_t rax_5 = *(arg1 + 0x18)
    int64_t var_988 = *(arg1 + 0x10)
    int32_t var_980_1 = rax_5
    sub_142296b00(arg1 + 0x1a8, &var_988)
    int64_t* rcx_2 = data_143f0f180
    void var_9c0
    (*(*rcx_2 + 0x5a0))(rcx_2, &var_9c0, &data_143f02b98, *(r15 + 0x1c8), 0)
    sub_1405d1600(r15 + 0x1d0, &var_9c0)
    sub_1405d1550(&var_9c0)

int64_t i = *(r15 + 0x218)
int32_t rbx = 0

for (int64_t rcx_7 = (sx.q(*(r15 + 0x220)) << 4) + i; i != rcx_7; i += 0x10)
    rbx += *(i + 8)

int32_t rax_7 = *(r15 + 0x22c)
int64_t r14 = 0
int64_t var_9f8 = 0
int64_t var_9f0 = 0
int32_t rbx_1 =
    rbx + divs.dp.d(sx.q(*(arg3 + 0x84) * *(arg3 + 0x80) * *(arg3 + 0x7c)), rax_7 * rax_7 * rax_7)
int64_t var_348
sub_142289560(&var_348)
int32_t r9_2 = 0x100
int32_t r8_1 = 0x100
int32_t rcx_12 = 0x100

if (rbx_1 s<= 0x100)
    r8_1 = rbx_1

int32_t temp0_1 = divs.dp.d(sx.q(rbx_1 - 1 + r8_1), r8_1)

if (temp0_1 s<= 0x100)
    rcx_12 = temp0_1

int32_t temp0_2 = divs.dp.d(sx.q(temp0_1 - 1 + rcx_12), rcx_12)
int32_t rcx_13 = *(r15 + 0x22c)
int32_t var_9e0
var_9e0.q = r8_1.q

if (temp0_2 s<= 0x100)
    r9_2 = temp0_2

int32_t var_970 = r9_2 * rcx_13
int32_t var_9dc_1 = rcx_12 * rcx_13
int64_t var_978 = (rcx_13 * r8_1).q
sub_142284e00(&var_348, &var_978, r15 + 0x10)
int32_t var_9e0_1
var_9e0_1.q = r12
int32_t rbx_2 = 0
int64_t r13 = r12

if (r12.d s> 0)
    int64_t i_1 = 0
    int64_t rdx_10 = 0
    
    while (i_1 s< sx.q(*(r15 + 0x220)))
        i_1 += 1
        rbx_2 += *(rdx_10 + *(r15 + 0x218) + 8)
        rdx_10 += 0x10
        
        if (i_1 s>= r13)
            break

int32_t rax_26 = *(r15 + 0x22c)
int32_t i_2 = r12.d
int32_t rbx_3 = rbx_2
    + divs.dp.d(sx.q(*(arg3 + 0x84) * *(arg3 + 0x80) * *(arg3 + 0x7c)), rax_26 * rax_26 * rax_26)

if (r12.d s< *(r15 + 0x220))
    int64_t r10_1 = *(r15 + 0x218)
    int64_t rdi_2 = r13 << 4
    
    do
        void* rcx_18 = *(rdi_2 + r10_1)
        int32_t r9_4 = *(rcx_18 + 0x34)
        int32_t r8_4 = *(rcx_18 + 0x38)
        
        if (*(rcx_18 + 0x30) s>= r9_4)
            r9_4 = *(rcx_18 + 0x30)
        
        if (r9_4 s>= r8_4)
            r8_4 = r9_4
        
        if (r8_4 s> 0)
            sub_1422a2b90(rcx_18, *(rdi_2 + r10_1 + 0xc), rbx_3)
            r10_1 = *(r15 + 0x218)
        
        rbx_3 += *(rdi_2 + r10_1 + 8)
        i_2 += 1
        rdi_2 += 0x10
    while (i_2 s< *(r15 + 0x220))

int64_t var_118
int64_t* rcx_19 = &var_118
void var_2a0
void* rdx_15 = &var_2a0
int64_t var_120
__builtin_memset(&var_120, 0, 0x30)

for (int32_t i_3 = 0; i_3 u< 6; )
    i_3 += 6
    rcx_19[-1] = *(rdx_15 - 0x38)
    rcx_19 = &rcx_19[6]
    int64_t rax_36 = *rdx_15
    rdx_15 += 0x150
    rcx_19[-6] = rax_36
    rcx_19[-5] = *(rdx_15 - 0x118)
    rcx_19[-4] = *(rdx_15 - 0xe0)
    rcx_19[-3] = *(rdx_15 - 0xa8)
    rcx_19[-2] = *(rdx_15 - 0x70)

int64_t* rbx_6 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
void* rax_41 = &rbx_6[9]

if (rax_41 u> data_143f02bd0)
    sub_140b0e3d0(&data_143f02bc8, 0x50)
    rbx_6 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    rax_41 = &rbx_6[9]

data_143f02bc8 = rax_41
int64_t var_310
*rbx_6 = var_310
int64_t var_188
rbx_6[1] = var_188
int64_t var_150
rbx_6[2] = var_150
rbx_6[3] = var_120
rbx_6[4] = var_118
__builtin_memset(&rbx_6[5], 0, 0x20)
void*** rcx_22 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
void* rax_47 = &rcx_22[6]

if (rax_47 u> data_143f02bd0)
    sub_140b0e3d0(&data_143f02bc8, 0x38)
    rcx_22 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    rax_47 = &rcx_22[6]

data_143f02bac += 1
int32_t r12_1 = 0
data_143f02bc8 = rax_47
*data_143f02ba0 = rcx_22
data_143f02ba0 = &rcx_22[1]
rcx_22[1] = 0
*rcx_22 = &data_142da7798
int32_t i_4 = 0
rcx_22[2].d = 9
rcx_22[3] = rbx_6
rcx_22[4].d = 2
*(rcx_22 + 0x24) = 3
rcx_22[5] = 0
int32_t i_9 = 0
int32_t var_a08
int32_t var_340
void var_338
void var_2f8
void var_1b0
void var_178

if (r13 s> 0)
    int64_t var_9b8_1 = 0
    int64_t var_9b0_1 = 0
    
    while (i_4 s< *(r15 + 0x220))
        uint64_t var_968 = var_348
        int32_t var_960_1 = var_340
        void** var_958
        sub_142289700(&var_958, &var_338)
        int64_t j = 6
        void var_918
        void* rbx_9 = &var_918
        void* rdi_3 = &var_2f8
        
        do
            uint32_t count = *(rdi_3 + 8)
            j -= 1
            *(rbx_9 - 8) = &data_143314ec0
            *rbx_9 = 0
            *(rbx_9 + 8) = count
            
            if (count != 0)
                sub_1405da9e0(rbx_9, count, 0)
                memcpy(*rbx_9, *rdi_3, count)
            else
                *(rbx_9 + 0xc) = count
            
            *(rbx_9 + 0x10) = *(rdi_3 + 0x10)
            *(rbx_9 + 0x14) = *(rdi_3 + 0x14)
            void* rax_53 = *(rdi_3 + 0x18)
            *(rbx_9 + 0x18) = rax_53
            
            if (rax_53 != 0)
                *(rax_53 + 8) += 1
            
            void* rax_54 = *(rdi_3 + 0x20)
            *(rbx_9 + 0x20) = rax_54
            
            if (rax_54 != 0)
                *(rax_54 + 8) += 1
            
            char rax_55 = *(rdi_3 + 0x28)
            rdi_3 += 0x38
            *(rbx_9 + 0x28) = rax_55
            rbx_9 += 0x38
        while (j != 0)
        
        void** var_7d0
        sub_142289700(&var_7d0, &var_1b0)
        void** var_798
        sub_142289700(&var_798, &var_178)
        int64_t rax_56 = *(r15 + 0x218)
        var_a08.q = r15 + 0x10
        sub_142283310(&data_143f02b98, *(var_9b0_1 + rax_56 + 0xc), r12_1, 
            *(var_9b0_1 + rax_56 + 8), var_a08, &var_968)
        int64_t* rcx_31 = *(r15 + 0x218)
        int64_t rbx_10 = sx.q(var_9f0.d)
        r13 = var_9e0_1.q
        int32_t var_9c4_1 = r12_1
        int64_t rax_57 = *(rcx_31 + var_9b0_1)
        int32_t var_9c8_1 = *(rcx_31 + var_9b0_1 + 8)
        int32_t rax_59 = (rbx_10 + 1).d
        var_9f0.d = rax_59
        
        if (rax_59 s> var_9f0:4.d)
            sub_1405a4f90(&var_9f8)
        
        r14 = var_9f8
        int64_t rcx_34 = var_9b8_1 + 1
        var_9b8_1 = rcx_34
        *(r14 + rbx_10 * 0x10) = rax_57.o
        r12_1 += *(var_9b0_1 + *(r15 + 0x218) + 8)
        i_4 = i_9 + 1
        var_9b0_1 += 0x10
        i_9 = i_4
        
        if (rcx_34 s>= r13)
            break

int32_t rax_64 = *(r15 + 0x22c)
int32_t temp0_4 =
    divs.dp.d(sx.q(*(arg3 + 0x84) * *(arg3 + 0x80) * *(arg3 + 0x7c)), rax_64 * rax_64 * rax_64)
var_a08.q = arg3 + 0x88
void var_558
sub_142283960(&data_143f02b98, 0, r12_1, temp0_4, var_a08, sub_142289410(&var_558, &var_348))
int64_t rbx_12 = sx.q(var_9f0.d)
int32_t var_9c8_2 = temp0_4
int32_t var_9c4_2 = r12_1
int32_t rdi_4 = (rbx_12 + 1).d
var_9f0.d = rdi_4

if (rdi_4 s> var_9f0:4.d)
    sub_1405a4f90(&var_9f8)
    rdi_4 = var_9f0.d
    r14 = var_9f8

*(r14 + rbx_12 * 0x10) = arg3.o
*(arg3 + 0x350) = r12_1
int32_t r12_2 = r12_1 + temp0_4
void* rsi_4

if (i_8 s>= *(r15 + 0x220))
    rsi_4 = r15 + 0x218
else
    int64_t r13_1 = r13 << 4
    int32_t i_5
    
    do
        uint64_t var_760 = var_348
        int32_t var_758_1 = var_340
        void** var_750
        sub_142289700(&var_750, &var_338)
        int64_t j_1 = 6
        void var_710
        void* rbx_13 = &var_710
        void* rdi_5 = &var_2f8
        
        do
            uint32_t count_1 = *(rdi_5 + 8)
            *(rbx_13 - 8) = &data_143314ec0
            j_1 -= 1
            *rbx_13 = 0
            *(rbx_13 + 8) = count_1
            
            if (count_1 != 0)
                sub_1405da9e0(rbx_13, count_1, 0)
                memcpy(*rbx_13, *rdi_5, count_1)
            else
                *(rbx_13 + 0xc) = 0
            
            *(rbx_13 + 0x10) = *(rdi_5 + 0x10)
            *(rbx_13 + 0x14) = *(rdi_5 + 0x14)
            void* rax_78 = *(rdi_5 + 0x18)
            *(rbx_13 + 0x18) = rax_78
            
            if (rax_78 != 0)
                *(rax_78 + 8) += 1
            
            void* rax_79 = *(rdi_5 + 0x20)
            *(rbx_13 + 0x20) = rax_79
            
            if (rax_79 != 0)
                *(rax_79 + 8) += 1
            
            char rax_80 = *(rdi_5 + 0x28)
            rdi_5 += 0x38
            *(rbx_13 + 0x28) = rax_80
            rbx_13 += 0x38
        while (j_1 != 0)
        
        void** var_5c8
        sub_142289700(&var_5c8, &var_1b0)
        void** var_590
        sub_142289700(&var_590, &var_178)
        r15 = arg1
        var_a08.q = r15 + 0x10
        rsi_4 = r15 + 0x218
        int64_t rax_81 = *rsi_4
        sub_142283310(&data_143f02b98, *(rax_81 + r13_1 + 0xc), r12_2, *(rax_81 + r13_1 + 8), 
            var_a08, &var_760)
        int64_t* rcx_47 = *rsi_4
        int64_t rbx_14 = sx.q(var_9f0.d)
        int32_t var_9c4_3 = r12_2
        int64_t rax_82 = *(rcx_47 + r13_1)
        rdi_4 = (rbx_14 + 1).d
        int32_t var_9c8_3 = *(rcx_47 + r13_1 + 8)
        var_9f0.d = rdi_4
        
        if (rdi_4 s> var_9f0:4.d)
            sub_1405a4f90(&var_9f8)
            rdi_4 = var_9f0.d
        
        r14 = var_9f8
        *(r14 + rbx_14 * 0x10) = rax_82.o
        int64_t* r10_2 = *rsi_4
        void* rcx_49 = *(r10_2 + r13_1)
        int32_t r9_8 = *(rcx_49 + 0x34)
        int32_t r8_11 = *(rcx_49 + 0x38)
        
        if (*(rcx_49 + 0x30) s>= r9_8)
            r9_8 = *(rcx_49 + 0x30)
        
        if (r9_8 s>= r8_11)
            r8_11 = r9_8
        
        if (r8_11 == 0)
            sub_1422a2b90(rcx_49, *(r10_2 + r13_1 + 0xc), r12_2)
            r10_2 = *(r15 + 0x218)
        
        r12_2 += *(r10_2 + r13_1 + 8)
        i_5 = i_8 + 1
        r13_1 += 0x10
        i_8 = i_5
    while (i_5 s< *(r15 + 0x220))

int64_t var_c8
int64_t* rcx_50 = &var_c8
void* rdx_35 = &var_2a0
int64_t var_d0
__builtin_memset(&var_d0, 0, 0x30)

for (int32_t i_6 = 0; i_6 u< 6; )
    i_6 += 6
    rcx_50[-1] = *(rdx_35 - 0x38)
    rcx_50 = &rcx_50[6]
    int64_t rax_91 = *rdx_35
    rdx_35 += 0x150
    rcx_50[-6] = rax_91
    rcx_50[-5] = *(rdx_35 - 0x118)
    rcx_50[-4] = *(rdx_35 - 0xe0)
    rcx_50[-3] = *(rdx_35 - 0xa8)
    rcx_50[-2] = *(rdx_35 - 0x70)

int64_t* rbx_17 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
void* rax_96 = &rbx_17[9]

if (rax_96 u> data_143f02bd0)
    sub_140b0e3d0(&data_143f02bc8, 0x50)
    rbx_17 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    rax_96 = &rbx_17[9]

data_143f02bc8 = rax_96
*rbx_17 = var_310
rbx_17[1] = var_188
rbx_17[2] = var_150
rbx_17[3] = var_d0
rbx_17[4] = var_c8
__builtin_memset(&rbx_17[5], 0, 0x20)
void*** rcx_53 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
void* rax_102 = &rcx_53[6]

if (rax_102 u> data_143f02bd0)
    sub_140b0e3d0(&data_143f02bc8, 0x38)
    rcx_53 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    rax_102 = &rcx_53[6]

data_143f02bac += 1
data_143f02bc8 = rax_102
*data_143f02ba0 = rcx_53
data_143f02ba0 = &rcx_53[1]
rcx_53[1] = 0
*rcx_53 = &data_142da7798
rcx_53[2].d = 9
rcx_53[3] = rbx_17
rcx_53[4].d = 0
*(rcx_53 + 0x24) = 1
rcx_53[5] = 0

if (rsi_4 != &var_9f8)
    int32_t r8_13 = *(rsi_4 + 0xc)
    *(rsi_4 + 8) = rdi_4
    
    if (rdi_4 != 0 || r8_13 != 0)
        sub_1405a4be0(rsi_4, rdi_4, r8_13)
        memcpy(*rsi_4, r14, rdi_4 << 4)
    else
        *(rsi_4 + 0xc) = 0

sub_14228a770(r15 + 0x10, &var_348)
int64_t rax_105 = *(r15 + 0x40)
int64_t var_78
int64_t* rcx_59 = &var_78
void* rdx_39 = r15 + 0xb0
int64_t rax_106 = *(r15 + 0x1c8)
int32_t i_7 = 0
int64_t rax_107 = *(r15 + 0x200)
int64_t var_80
__builtin_memset(&var_80, 0, 0x30)

do
    i_7 += 6
    rcx_59[-1] = *(rdx_39 - 0x38)
    rcx_59 = &rcx_59[6]
    int64_t rax_109 = *rdx_39
    rdx_39 += 0x150
    rcx_59[-6] = rax_109
    rcx_59[-5] = *(rdx_39 - 0x118)
    rcx_59[-4] = *(rdx_39 - 0xe0)
    rcx_59[-3] = *(rdx_39 - 0xa8)
    rcx_59[-2] = *(rdx_39 - 0x70)
while (i_7 u< 6)

int64_t* rbx_22 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
void* rax_114 = &rbx_22[9]

if (rax_114 u> data_143f02bd0)
    sub_140b0e3d0(&data_143f02bc8, 0x50)
    rbx_22 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    rax_114 = &rbx_22[9]

data_143f02bc8 = rax_114
*rbx_22 = rax_105
rbx_22[1] = rax_106
rbx_22[2] = rax_107
rbx_22[3] = var_80
rbx_22[4] = var_78
__builtin_memset(&rbx_22[5], 0, 0x20)
void*** rcx_62 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
void* rax_120 = &rcx_62[5]

if (rax_120 u> data_143f02bd0)
    sub_140b0e3d0(&data_143f02bc8, 0x30)
    rcx_62 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    rax_120 = &rcx_62[5]

data_143f02bac += 1
data_143f02bc8 = rax_120
*data_143f02ba0 = rcx_62
data_143f02ba0 = &rcx_62[1]
rcx_62[1] = 0
*rcx_62 = &data_142d549c8
rcx_62[2].d = 9
rcx_62[3] = rbx_22
rcx_62[4].d = 0
int64_t result = sub_14228a190(&var_348)

if (r14 != 0)
    result = sub_140a74f90(r14)

__security_check_cookie(rax_1 ^ &var_a28)
return result
