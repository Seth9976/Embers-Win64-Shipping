// 函数: sub_142055a00
// 地址: 0x142055a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r14 = 0
char arg_20 = 0
int64_t rcx = sx.q(arg4) * 0x150
int64_t* rsi_1 = *(arg3 + 0x20) + rcx
int64_t var_190 = rcx
int64_t var_1a8 = rsi_1[4] + 0x130
int64_t* rax_4 = std::_Get_future_error_what((*U"1111")[sx.q(data_1439c7a08)])
void* var_78
sub_1419a2ec0(rax_4, &var_78, &data_143f43a40, 0)
void* var_c8
sub_1419a2ec0(rax_4, &var_c8, &data_143f43ba0, 0)
void* var_118
sub_1419a2ec0(rax_4, &var_118, &data_143f43d00, 0)
void* var_58
sub_1419a2ec0(rax_4, &var_58, &data_143f43e60, 0)
void* var_a8
sub_1419a2ec0(rax_4, &var_a8, &data_143f43fc0, 0)
void* var_f8
sub_1419a2ec0(rax_4, &var_f8, &data_143f44120, 0)
void* var_48
sub_1419a2ec0(rax_4, &var_48, &data_143f44280, 0)
void* var_98
sub_1419a2ec0(rax_4, &var_98, &data_143f443e0, 0)
void* var_e8
sub_1419a2ec0(rax_4, &var_e8, &data_143f44540, 0)
void* var_88
sub_1419a2ec0(rax_4, &var_88, &data_143f446a0, 0)
void* var_d8
sub_1419a2ec0(rax_4, &var_d8, &data_143f44800, 0)
void* var_128
sub_1419a2ec0(rax_4, &var_128, &data_143f44960, 0)
void* var_68
sub_1419a2ec0(rax_4, &var_68, &data_143f44ac0, 0)
void* var_b8
sub_1419a2ec0(rax_4, &var_b8, &data_143f44c20, 0)
void* var_108
sub_1419a2ec0(rax_4, &var_108, &data_143f44d80, 0)
int32_t rcx_17 = *(rsi_1 + 0x44)
int32_t r8 = 0
void* rbx_1 = nullptr
void* r13 = nullptr
void* var_1c0 = nullptr

if (rcx_17 == 0)
    int32_t rax_7 = *(arg3 + 0x38)
    
    if (rax_7 != 0)
        if (rax_7 != 1)
            r13 = var_48
            void* var_40
            rbx_1 = var_40
        else if (*(arg3 + 0x3c) == 0)
            r13 = var_58
            void* var_50
            rbx_1 = var_50
        else
            r13 = var_68
            void* var_60
            rbx_1 = var_60
    else if (*(arg3 + 0x3c) == 0)
        r13 = var_78
        void* var_70
        rbx_1 = var_70
    else
        r13 = var_88
        void* var_80
        rbx_1 = var_80
    
    var_1c0 = rbx_1
else if (rcx_17 == 1)
    int32_t rax_6 = *(arg3 + 0x38)
    
    if (rax_6 != 0)
        if (rax_6 != 1)
            r13 = var_98
            void* var_90
            rbx_1 = var_90
        else if (*(arg3 + 0x3c) == 0)
            r13 = var_a8
            void* var_a0
            rbx_1 = var_a0
        else
            r13 = var_b8
            void* var_b0
            rbx_1 = var_b0
    else if (*(arg3 + 0x3c) == 0)
        r13 = var_c8
        void* var_c0
        rbx_1 = var_c0
    else
        r13 = var_d8
        void* var_d0
        rbx_1 = var_d0
    
    var_1c0 = rbx_1
else if (rcx_17 == 2)
    int32_t rax_5 = *(arg3 + 0x38)
    
    if (rax_5 != 0)
        if (rax_5 != 1)
            r13 = var_e8
            void* var_e0
            rbx_1 = var_e0
        else if (*(arg3 + 0x3c) == 0)
            r13 = var_f8
            void* var_f0
            rbx_1 = var_f0
        else
            r13 = var_108
            void* var_100
            rbx_1 = var_100
    else if (*(arg3 + 0x3c) == 0)
        r13 = var_118
        void* var_110
        rbx_1 = var_110
    else
        r13 = var_128
        void* var_120
        rbx_1 = var_120
    
    var_1c0 = rbx_1

int64_t rdx_15 = var_1a8
uint64_t r12_1 = zx.q(*(rdx_15 + 0x30))
int32_t rax_8 = *(rdx_15 + 0x38)
int32_t r11 = *(rdx_15 + 0x34)
void* r10_2 = ((r12_1 + 1) << 4) + rdx_15
void* var_198 = r10_2
int64_t rcx_19
rcx_19.b = rax_8 - r11 u<= 1
uint64_t rcx_20 = rcx_19 ^ r12_1

if (*(rdx_15 + (rcx_20 + 1) * 0x10) != 0)
    r12_1 = rcx_20

void* r12_4 = ((r12_1 + 1) << 4) + rdx_15

if (*(var_190 + *(arg3 + 0x20) + 0x30) != 0)
    arg_20 = 1

if (*(var_190 + *(arg3 + 0x20) + 0x30) == 0 || data_143f40a44 s<= 0)
    arg_20 = 0

void* r9 = *rsi_1
void* rcx_22 = &rsi_1[1]
void* rax_14 = r9 + 0x40

if (*(r9 + 0x84) == 0)
    rax_14 = nullptr

rsi_1[0x23] = rax_14
void* rax_15 = r9 + 0x60

if (*(r9 + 0x84) == 0)
    rax_15 = nullptr

int64_t rdx_16 = 0
rsi_1[0x24] = rax_15
void* rax_16 = &rsi_1[2]
void* rax_17

while (true)
    if (*rcx_22 == r11 && *rax_16 == r12_4)
        rax_17 = (sx.q(r8) << 5) + r9
        break
    
    r8 += 1
    rdx_16 += 1
    rcx_22 += 4
    rax_16 += 8
    
    if (rdx_16 s>= 2)
        rax_17 = nullptr
        break

rsi_1[0x26] = rax_17

if (rax_17 == 0)
    sub_14204cea0(rsi_1, r12_4, r11, r10_2, rax_8)
    void* rax_19 = &rsi_1[2]
    void* rcx_24 = &rsi_1[1]
    int32_t r8_2 = 0
    int64_t rdx_18 = 0
    int64_t rax_20
    
    while (true)
        if (*rcx_24 == r11 && *rax_19 == r12_4)
            rax_20 = (sx.q(r8_2) << 5) + *rsi_1
            break
        
        r8_2 += 1
        rdx_18 += 1
        rcx_24 += 4
        rax_19 += 8
        
        if (rdx_18 s>= 2)
            rax_20 = 0
            break
    
    rsi_1[0x26] = rax_20
    
    if (r13 != 0)
        int64_t* rbx_2 = *(rbx_1 + 0x10)
        int64_t rdx_19 = sx.q(*(r13 + 0x10c))
        int64_t r14_1 = rbx_2[3]
        int64_t rax_21 = rdx_19 << 3
        var_1a8 = rax_21
        
        if (*(rax_21 + r14_1) == 0)
            sub_1419ccf30(rbx_2, rdx_19.d)
            rax_21 = var_1a8
            r14_1 = rbx_2[3]
        
        r14 = *(rax_21 + r14_1)
    
    *(arg2 + 0x1b0) = r14
    sub_14198aa60(r14)
    void*** rcx_29 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_22 = &rcx_29[3]
    
    if (rax_22 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x20)
        rcx_29 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_22 = &rcx_29[3]
    
    *(arg2 + 0x30) = rax_22
    void** rax_23 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_23 = rcx_29
    *(arg2 + 8) = &rcx_29[1]
    rcx_29[1] = 0
    *rcx_29 = &data_142dd5b40
    rcx_29[2] = r14
    int32_t var_1e8_1
    
    if (arg_20 == 0)
        void* rax_31 = rsi_1[0x23]
        void* var_180
        void* var_170
        
        if (rax_31 == 0)
            var_170 = rax_31
            r14 = 8
        else
            rax_31 = *(rax_31 + 8)
            var_180 = rax_31
            
            if (rax_31 != 0)
                *(rax_31 + 8) += 1
                rax_31 = var_180
            
            r14 = 4
        
        var_1e8_1.q = rsi_1
        sub_142068330(r13, arg2, r12_4, arg3, var_1e8_1, *(rsi_1[0x26] + 8), rax_31)
        
        if ((r14.b & 8) != 0)
            r14 = zx.q(r14.d) & 0xfffffff7
            sub_1405d1550(&var_170)
        
        if ((r14.b & 4) != 0)
            r14 = zx.q(r14.d) & 0xfffffffb
            sub_1405d1550(&var_180)
    else
        void* rax_25 = rsi_1[0x24]
        void* var_188
        void* var_178
        
        if (rax_25 == 0)
            var_178 = rax_25
            r14 = 2
        else
            rax_25 = *(rax_25 + 8)
            var_188 = rax_25
            
            if (rax_25 != 0)
                *(rax_25 + 8) += 1
                rax_25 = var_188
            
            r14 = 1
        
        var_1e8_1.q = rsi_1
        sub_142068330(r13, arg2, r12_4, arg3, var_1e8_1, *(rsi_1[0x26] + 8), rax_25)
        
        if ((r14.b & 2) != 0)
            r14 = zx.q(r14.d) & 0xfffffffd
            sub_1405d1550(&var_178)
        
        if ((r14.b & 1) != 0)
            r14 = zx.q(r14.d) & 0xfffffffe
            sub_1405d1550(&var_188)
    int64_t rcx_40 = *(rsi_1[0x26] + 8)
    int64_t* rax_36 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    int64_t* var_1c8_1 = rax_36
    void* rdx_22 = &rax_36[1]
    
    if (rdx_22 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x10)
        rax_36 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        var_1c8_1 = rax_36
        rdx_22 = &rax_36[1]
    
    *(arg2 + 0x30) = rdx_22
    *rax_36 = rcx_40
    void*** rcx_44 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_39 = &rcx_44[6]
    
    if (rax_39 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x38)
        rcx_44 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_39 = &rcx_44[6]
    
    *(arg2 + 0x30) = rax_39
    *(arg2 + 0x14) += 1
    **(arg2 + 8) = rcx_44
    *(arg2 + 8) = &rcx_44[1]
    rcx_44[1] = 0
    *rcx_44 = &data_142da7798
    rcx_44[3] = var_1c8_1
    rcx_44[2].d = 1
    rcx_44[4] = 1
    rcx_44[5] = 0
    int32_t rcx_48 = arg1[1].d
    var_1c8_1.d = rcx_48
    int64_t rax_44 = *(rsi_1[0x26] + 8)
    arg1[1].d = rcx_48 + 1
    
    if (rcx_48 + 1 s> *(arg1 + 0xc))
        sub_1405a4d70(arg1)
        rcx_48 = var_1c8_1.d
    
    *(*arg1 + (sx.q(rcx_48) << 3)) = rax_44
    void* rax_56
    
    if (arg_20 == 0)
        void* rcx_60 = rsi_1[0x23]
        
        if (rcx_60 != 0)
            int64_t rcx_61 = *(rcx_60 + 8)
            int64_t* rax_59 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            var_1c8_1 = rax_59
            void* rdx_26 = &rax_59[1]
            
            if (rdx_26 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x10)
                rax_59 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                var_1c8_1 = rax_59
                rdx_26 = &rax_59[1]
            
            *(arg2 + 0x30) = rdx_26
            *rax_59 = rcx_61
            void*** rcx_65 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_62 = &rcx_65[6]
            
            if (rax_62 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x38)
                rcx_65 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_62 = &rcx_65[6]
            
            *(arg2 + 0x30) = rax_62
            void**** rax_63 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_63 = rcx_65
            *(arg2 + 8) = &rcx_65[1]
            rcx_65[1] = 0
            *rcx_65 = &data_142da7798
            rcx_65[3] = var_1c8_1
            rcx_65[2].d = 1
            rcx_65[4] = 1
            rcx_65[5] = 0
            rax_56 = rsi_1[0x23]
        label_142056323:
            int32_t rcx_70 = arg1[1].d
            int64_t rax_66 = *(rax_56 + 8)
            var_1c8_1.d = rcx_70
            arg1[1].d = rcx_70 + 1
            
            if (rcx_70 + 1 s> *(arg1 + 0xc))
                sub_1405a4d70(arg1)
                rcx_70 = var_1c8_1.d
            
            *(*arg1 + (sx.q(rcx_70) << 3)) = rax_66
    else
        void* rcx_51 = rsi_1[0x24]
        
        if (rcx_51 != 0)
            int64_t rcx_52 = *(rcx_51 + 8)
            int64_t* rax_49 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            var_1c8_1 = rax_49
            void* rdx_25 = &rax_49[1]
            
            if (rdx_25 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x10)
                rax_49 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                var_1c8_1 = rax_49
                rdx_25 = &rax_49[1]
            
            *(arg2 + 0x30) = rdx_25
            *rax_49 = rcx_52
            void*** rcx_56 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_52 = &rcx_56[6]
            
            if (rax_52 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x38)
                rcx_56 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_52 = &rcx_56[6]
            
            *(arg2 + 0x30) = rax_52
            void**** rax_53 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_53 = rcx_56
            *(arg2 + 8) = &rcx_56[1]
            rcx_56[1] = 0
            *rcx_56 = &data_142da7798
            rcx_56[3] = var_1c8_1
            rcx_56[2].d = 1
            rcx_56[4] = 1
            rcx_56[5] = 0
            rax_56 = rsi_1[0x24]
            goto label_142056323
    void*** rcx_74 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    var_1c8_1.d = (rsi_1[0xa].d + 0x3f) u>> 6
    void* rax_72 = &rcx_74[4]
    
    if (rax_72 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x28)
        rcx_74 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_72 = &rcx_74[4]
    
    *(arg2 + 0x30) = rax_72
    int64_t* rax_73 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_73 = rcx_74
    *(arg2 + 8) = &rcx_74[1]
    rcx_74[1] = 0
    *rcx_74 = &data_142ef57a8
    rcx_74[2].d = var_1c8_1.d
    *(rcx_74 + 0x14) = 1
    rcx_74[3].d = 1
    sub_142071650(r13, arg2)
    r10_2 = var_198

void* rbx_3 = &rsi_1[2]
int32_t r8_5 = 0
void* rcx_79 = &rsi_1[1]
int64_t rdx_30 = 0
void* rax_76 = rbx_3
int64_t result

while (true)
    if (*rcx_79 == rax_8 && *rax_76 == r10_2)
        result = (sx.q(r8_5) << 5) + *rsi_1
        break
    
    r8_5 += 1
    rdx_30 += 1
    rcx_79 += 4
    rax_76 += 8
    
    if (rdx_30 s>= 2)
        result = 0
        break

rsi_1[0x25] = result

if (result != 0)
    return result

sub_14204cea0(rsi_1, r10_2, rax_8, r12_4, r11)
void* rdx_32 = &rsi_1[1]
int32_t rcx_81 = 0
int64_t rax_77 = 0
int64_t rax_78

while (true)
    if (*rdx_32 == rax_8 && *rbx_3 == var_198)
        rax_78 = (sx.q(rcx_81) << 5) + *rsi_1
        break
    
    rcx_81 += 1
    rax_77 += 1
    rdx_32 += 4
    rbx_3 += 8
    
    if (rax_77 s>= 2)
        rax_78 = 0
        break

rsi_1[0x25] = rax_78
void* rax_79 = nullptr
void* var_198_1 = nullptr

if (r13 != 0)
    int64_t rdx_33 = sx.q(*(r13 + 0x10c))
    int64_t* rbx_4 = *(var_1c0 + 0x10)
    int64_t* rax_81 = rbx_4[3]
    
    if (rax_81[rdx_33] == 0)
        sub_1419ccf30(rbx_4, rdx_33.d)
        rax_81 = rbx_4[3]
    
    rax_79 = rax_81[rdx_33]
    var_198_1 = rax_79

*(arg2 + 0x1b0) = rax_79
sub_14198aa60(rax_79)
void*** rcx_87 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_82 = &rcx_87[3]

if (rax_82 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x20)
    rcx_87 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_82 = &rcx_87[3]

*(arg2 + 0x30) = rax_82
void**** rax_83 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_83 = rcx_87
*(arg2 + 8) = &rcx_87[1]
rcx_87[1] = 0
*rcx_87 = &data_142dd5b40
rcx_87[2] = var_198_1
int32_t var_1e8_2

if (arg_20 == 0)
    void* rax_93 = rsi_1[0x23]
    int64_t var_148
    int64_t rax_94
    int32_t r14_3
    
    if (rax_93 == 0)
        r14_3 = r14.d | 0x80
        rax_94 = 0
        var_148 = 0
    else
        rax_94 = *(rax_93 + 8)
        r14_3 = r14.d | 0x40
        var_1a8 = rax_94
        
        if (rax_94 != 0)
            *(rax_94 + 8) += 1
            rax_94 = var_1a8
    
    var_1e8_2.q = rsi_1
    sub_142068330(r13, arg2, var_198, arg3, var_1e8_2, *(rsi_1[0x25] + 8), rax_94)
    
    if (r14_3.b s< 0)
        r14_3 &= 0xffffff7f
        sub_1405d1550(&var_148)
    
    if ((r14_3.b & 0x40) != 0)
        sub_1405d1550(&var_1a8)
else
    void* rax_86 = rsi_1[0x24]
    int64_t var_150
    int64_t rax_87
    int32_t r14_2
    
    if (rax_86 == 0)
        r14_2 = r14.d | 0x20
        rax_87 = 0
        var_150 = 0
    else
        rax_87 = *(rax_86 + 8)
        r14_2 = r14.d | 0x10
        var_190 = rax_87
        
        if (rax_87 != 0)
            *(rax_87 + 8) += 1
            rax_87 = var_190
    
    var_1e8_2.q = rsi_1
    sub_142068330(r13, arg2, var_198, arg3, var_1e8_2, *(rsi_1[0x25] + 8), rax_87)
    
    if ((r14_2.b & 0x20) != 0)
        r14_2 &= 0xffffffdf
        sub_1405d1550(&var_150)
    
    if ((r14_2.b & 0x10) != 0)
        sub_1405d1550(&var_190)
int64_t* r14_6 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
int64_t rcx_98 = *(rsi_1[0x25] + 8)
void* rax_97 = &r14_6[1]

if (rax_97 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x10)
    r14_6 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_97 = &r14_6[1]

*(arg2 + 0x30) = rax_97
*r14_6 = rcx_98
void*** rcx_102 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_98 = &rcx_102[6]

if (rax_98 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x38)
    rcx_102 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_98 = &rcx_102[6]

*(arg2 + 0x30) = rax_98
*(arg2 + 0x14) += 1
**(arg2 + 8) = rcx_102
*(arg2 + 8) = &rcx_102[1]
rcx_102[1] = 0
*rcx_102 = &data_142da7798
rcx_102[2].d = 1
rcx_102[3] = r14_6
rcx_102[4] = 1
rcx_102[5] = 0
int64_t r14_9 = sx.q(arg1[1].d)
int64_t r12_6 = *(rsi_1[0x25] + 8)
int32_t rax_102 = (r14_9 + 1).d
arg1[1].d = rax_102

if (rax_102 s> *(arg1 + 0xc))
    sub_1405a4d70(arg1)

*(*arg1 + (r14_9 << 3)) = r12_6
void* rax_109

if (arg_20 == 0)
    void* rax_110 = rsi_1[0x23]
    
    if (rax_110 != 0)
        int64_t rax_111 = *(rax_110 + 8)
        int64_t* r14_17 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rcx_115 = &r14_17[1]
        
        if (rcx_115 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x10)
            r14_17 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rcx_115 = &r14_17[1]
        
        *(arg2 + 0x30) = rcx_115
        *r14_17 = rax_111
        void*** rcx_119 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_112 = &rcx_119[6]
        
        if (rax_112 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x38)
            rcx_119 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_112 = &rcx_119[6]
        
        *(arg2 + 0x30) = rax_112
        void**** rax_113 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_113 = rcx_119
        *(arg2 + 8) = &rcx_119[1]
        rcx_119[1] = 0
        *rcx_119 = &data_142da7798
        rcx_119[2].d = 1
        rcx_119[3] = r14_17
        rcx_119[4] = 1
        rcx_119[5] = 0
        rax_109 = rsi_1[0x23]
    label_142056929:
        int64_t r14_20 = sx.q(arg1[1].d)
        int64_t r12_7 = *(rax_109 + 8)
        int32_t rax_115 = (r14_20 + 1).d
        arg1[1].d = rax_115
        
        if (rax_115 s> *(arg1 + 0xc))
            sub_1405a4d70(arg1)
        
        *(*arg1 + (r14_20 << 3)) = r12_7
else
    void* rax_104 = rsi_1[0x24]
    
    if (rax_104 != 0)
        int64_t rax_105 = *(rax_104 + 8)
        int64_t* r14_12 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rcx_107 = &r14_12[1]
        
        if (rcx_107 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x10)
            r14_12 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rcx_107 = &r14_12[1]
        
        *(arg2 + 0x30) = rcx_107
        *r14_12 = rax_105
        void*** rcx_111 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_106 = &rcx_111[6]
        
        if (rax_106 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x38)
            rcx_111 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_106 = &rcx_111[6]
        
        *(arg2 + 0x30) = rax_106
        void**** rax_107 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_107 = rcx_111
        *(arg2 + 8) = &rcx_111[1]
        rcx_111[1] = 0
        *rcx_111 = &data_142da7798
        rcx_111[2].d = 1
        rcx_111[3] = r14_12
        rcx_111[4] = 1
        rcx_111[5] = 0
        rax_109 = rsi_1[0x24]
        goto label_142056929
uint32_t rsi_4 = (rsi_1[0xa].d + 0x3f) u>> 6
void*** rcx_126 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_117 = &rcx_126[4]

if (rax_117 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x28)
    rcx_126 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_117 = &rcx_126[4]

*(arg2 + 0x30) = rax_117
void**** rax_118 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_118 = rcx_126
*(arg2 + 8) = &rcx_126[1]
rcx_126[1] = 0
*rcx_126 = &data_142ef57a8
rcx_126[2].d = rsi_4
*(rcx_126 + 0x14) = 1
rcx_126[3].d = 1
return sub_142071650(r13, arg2)
