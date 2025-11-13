// 函数: sub_142a1f510
// 地址: 0x142a1f510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
void** rbp = *(arg1 + 0x36f0)
void* r14 = arg1 + 0x12c0
int32_t rax_2 = *(arg1 + 0x3834)
uint64_t r9 = zx.q(*(arg1 + 0x3738))
int128_t* r13 = *(arg1 + 0x12a0)
void* r12 = arg1
*(arg1 + 0xfc0) = 0
void* rsi = r9 + rbp
void* var_58 = r14
void** var_88 = rbp
*(r13 + 0x88) = 0
uint64_t var_68
void* j_2

if (rsi - rbp s>= 3)
    int64_t rax_5 = *(arg1 + 0x3840)
    void** rbx_1 = rbp
    
    if (rax_5 != 0)
        if (r9.d u> 0xa)
            r9 = 0xa
        
        r9 = rax_5(*(r12 + 0x3848), rbp, &j_2, r9)
        rbx_1 = &j_2
    
    *(r14 + 0xba4) = zx.d(*rbx_1) & 1
    *(r14 + 0x2220) = zx.d(*rbx_1) u>> 1 & 7
    *(r14 + 0xba8) = zx.d(*rbx_1) u>> 4 & 1
    uint64_t r14_6 = (zx.q(*(rbx_1 + 2)) << 8 | zx.q(*(rbx_1 + 1))) << 8 u>> 5 | zx.q(*rbx_1) u>> 5
    var_68 = r14_6
    void* rax_17
    
    if (*(r12 + 0x382c) == 0)
        rax_17 = r14_6 + rbp
    
    if (*(r12 + 0x382c) == 0 && (rax_17 u> rsi || rax_17 u< rbp))
        r14 = r12 + 0x12c0
        r9 = sub_1429da010(r14, 7, "Truncated packet or corrupt partition 0 length", r9)
    else
        r14 = r12 + 0x12c0
    
    rbp += 3
    var_88 = rbp
    sub_1429ddd40(r14)
    
    if (*(r14 + 0xba4) != 0)
        *(r12 + 0xde0) = *r13
        *(r12 + 0xdf0) = r13[1]
        *(r12 + 0xe00) = r13[2]
        *(r12 + 0xe10) = r13[3]
        *(r12 + 0xe20) = r13[4]
        *(r12 + 0xe30) = r13[5]
        *(r12 + 0xe40) = r13[6]
        *(r12 + 0xe50) = r13[7]
        *(r12 + 0xe60) = r13[8]
        *(r12 + 0xe70) = *r13
        *(r12 + 0xe80) = r13[1]
        *(r12 + 0xe90) = r13[2]
        *(r12 + 0xea0) = r13[3]
        *(r12 + 0xeb0) = r13[4]
        *(r12 + 0xec0) = r13[5]
        *(r12 + 0xed0) = r13[6]
        *(r12 + 0xee0) = r13[7]
        *(r12 + 0xef0) = r13[8]
    else
        if ((*(r12 + 0x382c) == 0 || rbp + 3 u< rsi)
                && (*(rbx_1 + 3) != 0x9d || *(rbx_1 + 4) != 1 || *(rbx_1 + 5) != 0x2a))
            sub_1429da010(r14, 5, "Invalid frame sync code", r9)
        
        if (*(r12 + 0x382c) == 0 || rbp + 6 u< rsi)
            *(r14 + 0x760) = (zx.d(*(rbx_1 + 7)) << 8 | zx.d(*(rbx_1 + 6))) & 0x3fff
            *(r14 + 0x768) = zx.d(*(rbx_1 + 7)) u>> 6
            *(r14 + 0x764) = (zx.d(*(rbx_1 + 9)) << 8 | zx.d(rbx_1[1].b)) & 0x3fff
            *(r14 + 0x76c) = zx.d(*(rbx_1 + 9)) u>> 6
        
        rbp += 7
        var_88 = rbp
else
    if (*(arg1 + 0x382c) == 0)
        sub_1429da010(r14, 7, "Truncated packet", r9)
    
    *(r14 + 0xba4) = 1
    *(r14 + 0x2220) = 0
    *(r14 + 0xba8) = 1
    var_68 = 0

int64_t result

if (*(r12 + 0x3830) != 0 || *(r14 + 0xba4) == 0)
    sub_142a1efa0(r12)
    int32_t rax_27
    int64_t r9_2
    rax_27, r9_2 =
        sub_142a2e460(arg1 + 0x36a0, rbp, rsi.d - rbp.d, *(r12 + 0x3840), *(r12 + 0x3848))
    int32_t r13_1 = 2
    
    if (rax_27 != 0)
        sub_1429da010(r14, 2, "Failed to allocate bool decoder 0", r9_2)
    
    if (*(r14 + 0xba4) == 0)
        sub_142a20ce0(arg1 + 0x36a0, 0x80)
        *(r14 + 0x770) = sub_142a20ce0(arg1 + 0x36a0, 0x80)
    
    char rax_29 = sub_142a20ce0(arg1 + 0x36a0, 0x80)
    *(r12 + 0xf60) = rax_29
    
    if (rax_29 == 0)
        *(r12 + 0xf61) = 0
    else
        *(r12 + 0xf61) = sub_142a20ce0(arg1 + 0x36a0, 0x80)
        char rax_31 = sub_142a20ce0(arg1 + 0x36a0, 0x80)
        *(r12 + 0xf62) = rax_31
        
        if (rax_31 != 0)
            *(r12 + 0xf63) = sub_142a20ce0(arg1 + 0x36a0, 0x80)
            void* const i = &data_1436091f0
            void* const i_8 = &data_1436091f0
            *(r12 + 0xf67) = 0
            void* j_4 = r12 - 0x143608289
            j_2 = j_4
            
            do
                void* r12_1 = j_4 + i
                int64_t j_3 = 4
                int64_t j
                
                do
                    int32_t rsi_2 = 0
                    int32_t rbx_6 = (((*(arg1 + 0x36bc) << 7) - 0x80) u>> 8) + 1
                    
                    if (*(arg1 + 0x36b8) s< 0)
                        sub_142a2e350(arg1 + 0x36a0)
                    
                    int64_t r8_3 = *(arg1 + 0x36b0)
                    uint64_t rcx_24 = zx.q(rbx_6) << 0x38
                    
                    if (r8_3 u>= rcx_24)
                        rsi_2 = 1
                        rbx_6 = *(arg1 + 0x36bc) - rbx_6
                        r8_3 -= rcx_24
                    
                    uint32_t rdx_3 = zx.d(*(zx.q(rbx_6) + &data_143609200))
                    *(arg1 + 0x36b8) -= rdx_3
                    *(arg1 + 0x36b0) = r8_3 << rdx_3.b
                    *(arg1 + 0x36bc) = rbx_6 << rdx_3.b
                    
                    if (rsi_2 == 0)
                        *r12_1 = 0
                    else
                        int32_t rbp_1 = *i
                        int32_t r14_7 = 0
                        int32_t rbp_2 = rbp_1 - 1
                        
                        if (rbp_1 - 1 s>= 0)
                            int32_t temp5_1
                            
                            do
                                int32_t rsi_3 = 0
                                int32_t rbx_12 = (((*(arg1 + 0x36bc) << 7) - 0x80) u>> 8) + 1
                                
                                if (*(arg1 + 0x36b8) s< 0)
                                    sub_142a2e350(arg1 + 0x36a0)
                                
                                int64_t r8_5 = *(arg1 + 0x36b0)
                                uint64_t rcx_29 = zx.q(rbx_12) << 0x38
                                
                                if (r8_5 u>= rcx_29)
                                    rsi_3 = 1
                                    rbx_12 = *(arg1 + 0x36bc) - rbx_12
                                    r8_5 -= rcx_29
                                
                                uint32_t rdx_4 = zx.d(*(zx.q(rbx_12) + &data_143609200))
                                *(arg1 + 0x36b8) -= rdx_4
                                r14_7 |= rsi_3 << rbp_2.b
                                *(arg1 + 0x36b0) = r8_5 << rdx_4.b
                                temp5_1 = rbp_2
                                rbp_2 -= 1
                                *(arg1 + 0x36bc) = rbx_12 << rdx_4.b
                            while (temp5_1 - 1 s>= 0)
                        
                        *r12_1 = r14_7.b
                        int32_t rsi_5 = 0
                        int32_t rbx_18 = (((*(arg1 + 0x36bc) << 7) - 0x80) u>> 8) + 1
                        
                        if (*(arg1 + 0x36b8) s< 0)
                            sub_142a2e350(arg1 + 0x36a0)
                        
                        int64_t r8_7 = *(arg1 + 0x36b0)
                        uint64_t rcx_35 = zx.q(rbx_18) << 0x38
                        
                        if (r8_7 u>= rcx_35)
                            rsi_5 = 1
                            rbx_18 = *(arg1 + 0x36bc) - rbx_18
                            r8_7 -= rcx_35
                        
                        i = i_8
                        uint32_t rdx_5 = zx.d(*(zx.q(rbx_18) + &data_143609200))
                        *(arg1 + 0x36b8) -= rdx_5
                        *(arg1 + 0x36b0) = r8_7 << rdx_5.b
                        *(arg1 + 0x36bc) = rbx_18 << rdx_5.b
                        
                        if (rsi_5 != 0)
                            *r12_1 = neg.b(*r12_1)
                    
                    r12_1 += 1
                    j = j_3
                    j_3 -= 1
                while (j != 1)
                j_4 = j_2
                i += 4
                i_8 = i
            while (i s< &data_1436091f8)
            
            r12 = arg1
            r13_1 = 2
        
        if (*(r12 + 0xf61) != 0)
            *(r12 + 0xf64) = 0xffff
            *(r12 + 0xf66) = 0xff
            
            for (int64_t i_1 = 0; i_1 s< 3; i_1 += 1)
                int32_t rsi_6 = 0
                int32_t rbx_24 = (((*(arg1 + 0x36bc) << 7) - 0x80) u>> 8) + 1
                
                if (*(arg1 + 0x36b8) s< 0)
                    sub_142a2e350(arg1 + 0x36a0)
                
                int64_t r8_9 = *(arg1 + 0x36b0)
                uint64_t rcx_40 = zx.q(rbx_24) << 0x38
                
                if (r8_9 u>= rcx_40)
                    rsi_6 = 1
                    rbx_24 = *(arg1 + 0x36bc) - rbx_24
                    r8_9 -= rcx_40
                
                uint32_t rdx_6 = zx.d(*(zx.q(rbx_24) + &data_143609200))
                *(arg1 + 0x36b8) -= rdx_6
                *(arg1 + 0x36b0) = r8_9 << rdx_6.b
                *(arg1 + 0x36bc) = rbx_24 << rdx_6.b
                
                if (rsi_6 != 0)
                    int32_t r14_8 = 0
                    int32_t rbp_3 = 7
                    int32_t temp3_1
                    
                    do
                        int32_t rsi_7 = 0
                        int32_t rbx_30 = (((*(arg1 + 0x36bc) << 7) - 0x80) u>> 8) + 1
                        
                        if (*(arg1 + 0x36b8) s< 0)
                            sub_142a2e350(arg1 + 0x36a0)
                        
                        int64_t r8_11 = *(arg1 + 0x36b0)
                        uint64_t rcx_45 = zx.q(rbx_30) << 0x38
                        
                        if (r8_11 u>= rcx_45)
                            rsi_7 = 1
                            rbx_30 = *(arg1 + 0x36bc) - rbx_30
                            r8_11 -= rcx_45
                        
                        uint32_t rdx_7 = zx.d(*(zx.q(rbx_30) + &data_143609200))
                        *(arg1 + 0x36b8) -= rdx_7
                        r14_8 |= rsi_7 << rbp_3.b
                        *(arg1 + 0x36b0) = r8_11 << rdx_7.b
                        temp3_1 = rbp_3
                        rbp_3 -= 1
                        *(arg1 + 0x36bc) = rbx_30 << rdx_7.b
                    while (temp3_1 - 1 s>= 0)
                    *(i_1 + arg1 + 0xf64) = r14_8.b
            
            r12 = arg1
            r13_1 = 2
    
    int32_t rsi_9 = 0
    int32_t rbx_36 = (((*(arg1 + 0x36bc) << 7) - 0x80) u>> 8) + 1
    
    if (*(arg1 + 0x36b8) s< 0)
        sub_142a2e350(arg1 + 0x36a0)
    
    int64_t r8_13 = *(arg1 + 0x36b0)
    uint64_t rcx_51 = zx.q(rbx_36) << 0x38
    
    if (r8_13 u>= rcx_51)
        rsi_9 = 1
        rbx_36 = *(arg1 + 0x36bc) - rbx_36
        r8_13 -= rcx_51
    
    int32_t r14_9 = 0
    int32_t rbp_4 = 5
    uint32_t rdx_8 = zx.d(*(zx.q(rbx_36) + &data_143609200))
    *(arg1 + 0x36b8) -= rdx_8
    *(arg1 + 0x36bc) = rbx_36 << rdx_8.b
    *(arg1 + 0x36b0) = r8_13 << rdx_8.b
    *(r12 + 0x1ec0) = rsi_9
    int32_t temp0_1
    
    do
        int32_t rsi_10 = 0
        int32_t rbx_42 = (((*(arg1 + 0x36bc) << 7) - 0x80) u>> 8) + 1
        
        if (*(arg1 + 0x36b8) s< 0)
            sub_142a2e350(arg1 + 0x36a0)
        
        int64_t r8_15 = *(arg1 + 0x36b0)
        uint64_t rcx_56 = zx.q(rbx_42) << 0x38
        
        if (r8_15 u>= rcx_56)
            rsi_10 = 1
            rbx_42 = *(arg1 + 0x36bc) - rbx_42
            r8_15 -= rcx_56
        
        uint32_t rdx_9 = zx.d(*(zx.q(rbx_42) + &data_143609200))
        *(arg1 + 0x36b8) -= rdx_9
        r14_9 |= rsi_10 << rbp_4.b
        *(arg1 + 0x36b0) = r8_15 << rdx_9.b
        temp0_1 = rbp_4
        rbp_4 -= 1
        *(arg1 + 0x36bc) = rbx_42 << rdx_9.b
    while (temp0_1 - 1 s>= 0)
    *(r12 + 0x2be0) = r14_9
    int32_t rbp_5 = 0
    int32_t temp4_1
    
    do
        int32_t rsi_12 = 0
        int32_t rbx_48 = (((*(arg1 + 0x36bc) << 7) - 0x80) u>> 8) + 1
        
        if (*(arg1 + 0x36b8) s< 0)
            sub_142a2e350(arg1 + 0x36a0)
        
        int64_t r8_17 = *(arg1 + 0x36b0)
        uint64_t rcx_62 = zx.q(rbx_48) << 0x38
        
        if (r8_17 u>= rcx_62)
            rsi_12 = 1
            rbx_48 = *(arg1 + 0x36bc) - rbx_48
            r8_17 -= rcx_62
        
        uint32_t rdx_10 = zx.d(*(zx.q(rbx_48) + &data_143609200))
        *(arg1 + 0x36b8) -= rdx_10
        rbp_5 |= rsi_12 << r13_1.b
        *(arg1 + 0x36b0) = r8_17 << rdx_10.b
        temp4_1 = r13_1
        r13_1 -= 1
        *(arg1 + 0x36bc) = rbx_48 << rdx_10.b
    while (temp4_1 - 1 s>= 0)
    *(r12 + 0x2be8) = rbp_5
    void* r13_3 = r12 + 0x12c0
    *(r12 + 0xf70) = 0
    char rsi_14 = 0
    int32_t rbx_54 = (((*(arg1 + 0x36bc) << 7) - 0x80) u>> 8) + 1
    
    if (*(arg1 + 0x36b8) s< 0)
        sub_142a2e350(arg1 + 0x36a0)
    
    int64_t r8_19 = *(arg1 + 0x36b0)
    uint64_t rcx_68 = zx.q(rbx_54) << 0x38
    
    if (r8_19 u>= rcx_68)
        rsi_14 = 1
        rbx_54 = *(arg1 + 0x36bc) - rbx_54
        r8_19 -= rcx_68
    
    uint32_t rdx_11 = zx.d(*(zx.q(rbx_54) + &data_143609200))
    *(arg1 + 0x36b8) -= rdx_11
    *(arg1 + 0x36bc) = rbx_54 << rdx_11.b
    *(arg1 + 0x36b0) = r8_19 << rdx_11.b
    *(r12 + 0xf6f) = rsi_14
    
    if (rsi_14 != 0)
        char rsi_15 = 0
        int32_t rbx_60 = (((*(arg1 + 0x36bc) << 7) - 0x80) u>> 8) + 1
        
        if (*(arg1 + 0x36b8) s< 0)
            sub_142a2e350(arg1 + 0x36a0)
        
        int64_t r8_21 = *(arg1 + 0x36b0)
        uint64_t rcx_73 = zx.q(rbx_60) << 0x38
        
        if (r8_21 u>= rcx_73)
            rsi_15 = 1
            rbx_60 = *(arg1 + 0x36bc) - rbx_60
            r8_21 -= rcx_73
        
        uint32_t rdx_12 = zx.d(*(zx.q(rbx_60) + &data_143609200))
        *(arg1 + 0x36b8) -= rdx_12
        *(arg1 + 0x36bc) = rbx_60 << rdx_12.b
        *(arg1 + 0x36b0) = r8_21 << rdx_12.b
        *(r12 + 0xf70) = rsi_15
        
        if (rsi_15 != 0)
            void* r13_4
            
            for (int64_t i_2 = 0; i_2 s< 4; i_2 += 1)
                int32_t rsi_16 = 0
                int32_t rbx_66 = (((*(arg1 + 0x36bc) << 7) - 0x80) u>> 8) + 1
                
                if (*(arg1 + 0x36b8) s< 0)
                    sub_142a2e350(arg1 + 0x36a0)
                
                int64_t r8_23 = *(arg1 + 0x36b0)
                uint64_t rcx_78 = zx.q(rbx_66) << 0x38
                
                if (r8_23 u>= rcx_78)
                    rsi_16 = 1
                    rbx_66 = *(arg1 + 0x36bc) - rbx_66
                    r8_23 -= rcx_78
                
                uint32_t rdx_13 = zx.d(*(zx.q(rbx_66) + &data_143609200))
                *(arg1 + 0x36b8) -= rdx_13
                *(arg1 + 0x36b0) = r8_23 << rdx_13.b
                *(arg1 + 0x36bc) = rbx_66 << rdx_13.b
                
                if (rsi_16 == 0)
                    r13_4 = arg1
                else
                    int32_t r14_10 = 0
                    int32_t rbp_6 = 5
                    int32_t temp8_1
                    
                    do
                        int32_t rsi_17 = 0
                        int32_t rbx_72 = (((*(arg1 + 0x36bc) << 7) - 0x80) u>> 8) + 1
                        
                        if (*(arg1 + 0x36b8) s< 0)
                            sub_142a2e350(arg1 + 0x36a0)
                        
                        int64_t r8_25 = *(arg1 + 0x36b0)
                        uint64_t rcx_83 = zx.q(rbx_72) << 0x38
                        
                        if (r8_25 u>= rcx_83)
                            rsi_17 = 1
                            rbx_72 = *(arg1 + 0x36bc) - rbx_72
                            r8_25 -= rcx_83
                        
                        uint32_t rdx_14 = zx.d(*(zx.q(rbx_72) + &data_143609200))
                        *(arg1 + 0x36b8) -= rdx_14
                        r14_10 |= rsi_17 << rbp_6.b
                        *(arg1 + 0x36b0) = r8_25 << rdx_14.b
                        temp8_1 = rbp_6
                        rbp_6 -= 1
                        *(arg1 + 0x36bc) = rbx_72 << rdx_14.b
                    while (temp8_1 - 1 s>= 0)
                    r13_4 = arg1
                    int32_t rsi_19 = 0
                    *(i_2 + r13_4 + 0xf75) = r14_10.b
                    int32_t rbx_78 = (((*(arg1 + 0x36bc) << 7) - 0x80) u>> 8) + 1
                    
                    if (*(arg1 + 0x36b8) s< 0)
                        sub_142a2e350(arg1 + 0x36a0)
                    
                    int64_t r8_27 = *(arg1 + 0x36b0)
                    uint64_t rcx_89 = zx.q(rbx_78) << 0x38
                    
                    if (r8_27 u>= rcx_89)
                        rsi_19 = 1
                        rbx_78 = *(arg1 + 0x36bc) - rbx_78
                        r8_27 -= rcx_89
                    
                    uint32_t rdx_15 = zx.d(*(zx.q(rbx_78) + &data_143609200))
                    *(arg1 + 0x36b8) -= rdx_15
                    *(arg1 + 0x36b0) = r8_27 << rdx_15.b
                    *(arg1 + 0x36bc) = rbx_78 << rdx_15.b
                    
                    if (rsi_19 != 0)
                        *(i_2 + r13_4 + 0xf75) = neg.b(*(i_2 + r13_4 + 0xf75))
            
            for (int64_t i_3 = 0; i_3 s< 4; i_3 += 1)
                int32_t rsi_20 = 0
                int32_t rbx_84 = (((*(arg1 + 0x36bc) << 7) - 0x80) u>> 8) + 1
                
                if (*(arg1 + 0x36b8) s< 0)
                    sub_142a2e350(arg1 + 0x36a0)
                
                int64_t r8_29 = *(arg1 + 0x36b0)
                uint64_t rcx_94 = zx.q(rbx_84) << 0x38
                
                if (r8_29 u>= rcx_94)
                    rsi_20 = 1
                    rbx_84 = *(arg1 + 0x36bc) - rbx_84
                    r8_29 -= rcx_94
                
                uint32_t rdx_16 = zx.d(*(zx.q(rbx_84) + &data_143609200))
                *(arg1 + 0x36b8) -= rdx_16
                *(arg1 + 0x36b0) = r8_29 << rdx_16.b
                *(arg1 + 0x36bc) = rbx_84 << rdx_16.b
                
                if (rsi_20 != 0)
                    int32_t r14_11 = 0
                    int32_t rbp_7 = 5
                    int32_t temp11_1
                    
                    do
                        int32_t rsi_21 = 0
                        int32_t rbx_90 = (((*(arg1 + 0x36bc) << 7) - 0x80) u>> 8) + 1
                        
                        if (*(arg1 + 0x36b8) s< 0)
                            sub_142a2e350(arg1 + 0x36a0)
                        
                        int64_t r8_31 = *(arg1 + 0x36b0)
                        uint64_t rcx_99 = zx.q(rbx_90) << 0x38
                        
                        if (r8_31 u>= rcx_99)
                            rsi_21 = 1
                            rbx_90 = *(arg1 + 0x36bc) - rbx_90
                            r8_31 -= rcx_99
                        
                        uint32_t rdx_17 = zx.d(*(zx.q(rbx_90) + &data_143609200))
                        *(arg1 + 0x36b8) -= rdx_17
                        r14_11 |= rsi_21 << rbp_7.b
                        *(arg1 + 0x36b0) = r8_31 << rdx_17.b
                        temp11_1 = rbp_7
                        rbp_7 -= 1
                        *(arg1 + 0x36bc) = rbx_90 << rdx_17.b
                    while (temp11_1 - 1 s>= 0)
                    *(i_3 + r13_4 + 0xf7d) = r14_11.b
                    int32_t rsi_23 = 0
                    int32_t rbx_96 = (((*(arg1 + 0x36bc) << 7) - 0x80) u>> 8) + 1
                    
                    if (*(arg1 + 0x36b8) s< 0)
                        sub_142a2e350(arg1 + 0x36a0)
                    
                    int64_t r8_33 = *(arg1 + 0x36b0)
                    uint64_t rcx_105 = zx.q(rbx_96) << 0x38
                    
                    if (r8_33 u>= rcx_105)
                        rsi_23 = 1
                        rbx_96 = *(arg1 + 0x36bc) - rbx_96
                        r8_33 -= rcx_105
                    
                    uint32_t rdx_18 = zx.d(*(zx.q(rbx_96) + &data_143609200))
                    *(arg1 + 0x36b8) -= rdx_18
                    *(arg1 + 0x36b0) = r8_33 << rdx_18.b
                    *(arg1 + 0x36bc) = rbx_96 << rdx_18.b
                    
                    if (rsi_23 != 0)
                        *(i_3 + r13_4 + 0xf7d) = neg.b(*(i_3 + r13_4 + 0xf7d))
            
            r12 = arg1
            r13_3 = var_58
    
    sub_142a1f270(r12, var_68 + var_88)
    int32_t r14_12 = 0
    *(r12 + 0xfb8) = r12 + 0x3520
    int32_t rbp_8 = 6
    int32_t temp6_1
    
    do
        int32_t rsi_24 = 0
        int32_t rbx_102 = (((*(arg1 + 0x36bc) << 7) - 0x80) u>> 8) + 1
        
        if (*(arg1 + 0x36b8) s< 0)
            sub_142a2e350(arg1 + 0x36a0)
        
        int64_t r8_35 = *(arg1 + 0x36b0)
        uint64_t rcx_111 = zx.q(rbx_102) << 0x38
        
        if (r8_35 u>= rcx_111)
            rsi_24 = 1
            rbx_102 = *(arg1 + 0x36bc) - rbx_102
            r8_35 -= rcx_111
        
        uint32_t rdx_21 = zx.d(*(zx.q(rbx_102) + &data_143609200))
        *(arg1 + 0x36b8) -= rdx_21
        r14_12 |= rsi_24 << rbp_8.b
        *(arg1 + 0x36b0) = r8_35 << rdx_21.b
        temp6_1 = rbp_8
        rbp_8 -= 1
        *(arg1 + 0x36bc) = rbx_102 << rdx_21.b
    while (temp6_1 - 1 s>= 0)
    int32_t rdx_22 = *(r13_3 + 0xbd4)
    *(r13_3 + 0xbd0) = r14_12
    var_88.d = 0
    int32_t rax_90 = sub_142a1ee80(arg1 + 0x36a0, rdx_22, &var_88)
    int32_t rdx_23 = *(r13_3 + 0xbd8)
    *(r13_3 + 0xbd4) = rax_90
    int32_t rax_91 = sub_142a1ee80(arg1 + 0x36a0, rdx_23, &var_88)
    int32_t rdx_24 = *(r13_3 + 0xbdc)
    *(r13_3 + 0xbd8) = rax_91
    int32_t rax_92 = sub_142a1ee80(arg1 + 0x36a0, rdx_24, &var_88)
    int32_t rdx_25 = *(r13_3 + 0xbe0)
    *(r13_3 + 0xbdc) = rax_92
    int32_t rax_93 = sub_142a1ee80(arg1 + 0x36a0, rdx_25, &var_88)
    int32_t rdx_26 = *(r13_3 + 0xbe4)
    *(r13_3 + 0xbe0) = rax_93
    *(r13_3 + 0xbe4) = sub_142a1ee80(arg1 + 0x36a0, rdx_26, &var_88)
    
    if (var_88.d != 0)
        sub_142a20c30(arg1)
    
    sub_142a20b50(arg1, arg1)
    
    if (*(r13_3 + 0xba4) != 0)
        int32_t rsi_26 = 0
        int32_t rbx_108 = (((*(arg1 + 0x36bc) << 7) - 0x80) u>> 8) + 1
        
        if (*(arg1 + 0x36b8) s< 0)
            sub_142a2e350(arg1 + 0x36a0)
        
        int64_t r8_42 = *(arg1 + 0x36b0)
        uint64_t rcx_124 = zx.q(rbx_108) << 0x38
        
        if (r8_42 u>= rcx_124)
            rsi_26 = 1
            rbx_108 = *(arg1 + 0x36bc) - rbx_108
            r8_42 -= rcx_124
        
        uint32_t rdx_28 = zx.d(*(zx.q(rbx_108) + &data_143609200))
        *(arg1 + 0x36b8) -= rdx_28
        *(arg1 + 0x36bc) = rbx_108 << rdx_28.b
        *(arg1 + 0x36b0) = r8_42 << rdx_28.b
        *(r13_3 + 0x1930) = rsi_26
        int32_t rsi_27 = 0
        int32_t rbx_114 = (((*(arg1 + 0x36bc) << 7) - 0x80) u>> 8) + 1
        
        if (*(arg1 + 0x36b8) s< 0)
            sub_142a2e350(arg1 + 0x36a0)
        
        int64_t r8_44 = *(arg1 + 0x36b0)
        uint64_t rcx_129 = zx.q(rbx_114) << 0x38
        
        if (r8_44 u>= rcx_129)
            rsi_27 = 1
            rbx_114 = *(arg1 + 0x36bc) - rbx_114
            r8_44 -= rcx_129
        
        uint32_t rdx_29 = zx.d(*(zx.q(rbx_114) + &data_143609200))
        *(arg1 + 0x36b8) -= rdx_29
        *(arg1 + 0x36b0) = r8_44 << rdx_29.b
        *(arg1 + 0x36bc) = rbx_114 << rdx_29.b
        *(r13_3 + 0x1934) = rsi_27
        *(r13_3 + 0x1938) = 0
        
        if (*(r13_3 + 0x1930) == 0)
            int32_t r14_13 = 0
            int32_t rbp_9 = 1
            int32_t temp9_1
            
            do
                int32_t rsi_28 = 0
                int32_t rbx_120 = (((*(arg1 + 0x36bc) << 7) - 0x80) u>> 8) + 1
                
                if (*(arg1 + 0x36b8) s< 0)
                    sub_142a2e350(arg1 + 0x36a0)
                
                int64_t r8_46 = *(arg1 + 0x36b0)
                uint64_t rcx_134 = zx.q(rbx_120) << 0x38
                
                if (r8_46 u>= rcx_134)
                    rsi_28 = 1
                    rbx_120 = *(arg1 + 0x36bc) - rbx_120
                    r8_46 -= rcx_134
                
                uint32_t rdx_30 = zx.d(*(zx.q(rbx_120) + &data_143609200))
                *(arg1 + 0x36b8) -= rdx_30
                r14_13 |= rsi_28 << rbp_9.b
                *(arg1 + 0x36b0) = r8_46 << rdx_30.b
                temp9_1 = rbp_9
                rbp_9 -= 1
                *(arg1 + 0x36bc) = rbx_120 << rdx_30.b
            while (temp9_1 - 1 s>= 0)
            *(r13_3 + 0x1938) = r14_13
        
        *(r13_3 + 0x193c) = 0
        
        if (*(r13_3 + 0x1934) == 0)
            int32_t r14_14 = 0
            int32_t rbp_10 = 1
            int32_t temp10_1
            
            do
                int32_t rsi_30 = 0
                int32_t rbx_126 = (((*(arg1 + 0x36bc) << 7) - 0x80) u>> 8) + 1
                
                if (*(arg1 + 0x36b8) s< 0)
                    sub_142a2e350(arg1 + 0x36a0)
                
                int64_t r8_48 = *(arg1 + 0x36b0)
                uint64_t rcx_140 = zx.q(rbx_126) << 0x38
                
                if (r8_48 u>= rcx_140)
                    rsi_30 = 1
                    rbx_126 = *(arg1 + 0x36bc) - rbx_126
                    r8_48 -= rcx_140
                
                uint32_t rdx_31 = zx.d(*(zx.q(rbx_126) + &data_143609200))
                *(arg1 + 0x36b8) -= rdx_31
                r14_14 |= rsi_30 << rbp_10.b
                *(arg1 + 0x36b0) = r8_48 << rdx_31.b
                temp10_1 = rbp_10
                rbp_10 -= 1
                *(arg1 + 0x36bc) = rbx_126 << rdx_31.b
            while (temp10_1 - 1 s>= 0)
            *(r13_3 + 0x193c) = r14_14
        
        int32_t rsi_32 = 0
        int32_t rbx_132 = (((*(arg1 + 0x36bc) << 7) - 0x80) u>> 8) + 1
        
        if (*(arg1 + 0x36b8) s< 0)
            sub_142a2e350(arg1 + 0x36a0)
        
        int64_t r8_50 = *(arg1 + 0x36b0)
        uint64_t rcx_146 = zx.q(rbx_132) << 0x38
        
        if (r8_50 u>= rcx_146)
            rsi_32 = 1
            rbx_132 = *(arg1 + 0x36bc) - rbx_132
            r8_50 -= rcx_146
        
        uint32_t rdx_32 = zx.d(*(zx.q(rbx_132) + &data_143609200))
        *(arg1 + 0x36b8) -= rdx_32
        *(arg1 + 0x36bc) = rbx_132 << rdx_32.b
        *(arg1 + 0x36b0) = r8_50 << rdx_32.b
        *(r13_3 + 0x194c) = rsi_32
        int32_t rsi_33 = 0
        int32_t rbx_138 = (((*(arg1 + 0x36bc) << 7) - 0x80) u>> 8) + 1
        
        if (*(arg1 + 0x36b8) s< 0)
            sub_142a2e350(arg1 + 0x36a0)
        
        int64_t r8_52 = *(arg1 + 0x36b0)
        uint64_t rcx_151 = zx.q(rbx_138) << 0x38
        
        if (r8_52 u>= rcx_151)
            rsi_33 = 1
            rbx_138 = *(arg1 + 0x36bc) - rbx_138
            r8_52 -= rcx_151
        
        uint32_t rdx_33 = zx.d(*(zx.q(rbx_138) + &data_143609200))
        *(arg1 + 0x36b8) -= rdx_33
        *(arg1 + 0x36bc) = rbx_138 << rdx_33.b
        *(arg1 + 0x36b0) = r8_52 << rdx_33.b
        *(r13_3 + 0x1950) = rsi_33
    
    int32_t rsi_34 = 0
    int32_t rbx_144 = (((*(arg1 + 0x36bc) << 7) - 0x80) u>> 8) + 1
    
    if (*(arg1 + 0x36b8) s< 0)
        sub_142a2e350(arg1 + 0x36a0)
    
    int64_t r8_54 = *(arg1 + 0x36b0)
    uint64_t rcx_156 = zx.q(rbx_144) << 0x38
    
    if (r8_54 u>= rcx_156)
        rsi_34 = 1
        rbx_144 = *(arg1 + 0x36bc) - rbx_144
        r8_54 -= rcx_156
    
    uint32_t rdx_34 = zx.d(*(zx.q(rbx_144) + &data_143609200))
    *(arg1 + 0x36b8) -= rdx_34
    *(arg1 + 0x36bc) = rbx_144 << rdx_34.b
    *(arg1 + 0x36b0) = r8_54 << rdx_34.b
    *(r13_3 + 0x1940) = rsi_34
    int128_t zmm1_1
    
    if (rsi_34 == 0)
        void* rcx_159 = r13_3 + 0x1969
        int64_t i_10 = 8
        void* rdx_35 = r13_3 + 0x1dc2
        int128_t zmm0_1
        int64_t i_4
        
        do
            rcx_159 += 0x80
            zmm0_1 = *rdx_35
            zmm1_1 = *(rdx_35 + 0x10)
            rdx_35 += 0x80
            *(rcx_159 - 0x80) = zmm0_1
            zmm0_1 = *(rdx_35 - 0x60)
            *(rcx_159 - 0x70) = zmm1_1
            zmm1_1 = *(rdx_35 - 0x50)
            *(rcx_159 - 0x60) = zmm0_1
            zmm0_1 = *(rdx_35 - 0x40)
            *(rcx_159 - 0x50) = zmm1_1
            zmm1_1 = *(rdx_35 - 0x30)
            *(rcx_159 - 0x40) = zmm0_1
            zmm0_1 = *(rdx_35 - 0x20)
            *(rcx_159 - 0x30) = zmm1_1
            zmm1_1 = *(rdx_35 - 0x10)
            *(rcx_159 - 0x20) = zmm0_1
            *(rcx_159 - 0x10) = zmm1_1
            i_4 = i_10
            i_10 -= 1
        while (i_4 != 1)
        int64_t rax_116 = *(rdx_35 + 0x50)
        zmm1_1 = *(rdx_35 + 0x10)
        *rcx_159 = *rdx_35
        zmm0_1 = *(rdx_35 + 0x20)
        *(rcx_159 + 0x10) = zmm1_1
        zmm1_1 = *(rdx_35 + 0x30)
        *(rcx_159 + 0x20) = zmm0_1
        zmm0_1 = *(rdx_35 + 0x40)
        *(rcx_159 + 0x30) = zmm1_1
        *(rcx_159 + 0x40) = zmm0_1
        *(rcx_159 + 0x50) = rax_116
        *(rcx_159 + 0x58) = *(rdx_35 + 0x58)
    
    int32_t rax_121
    int32_t rsi_35
    
    if (*(r13_3 + 0xba4) != 0)
        rsi_35 = 0
        int32_t rbx_150 = (((*(arg1 + 0x36bc) << 7) - 0x80) u>> 8) + 1
        
        if (*(arg1 + 0x36b8) s< 0)
            sub_142a2e350(arg1 + 0x36a0)
        
        int64_t r8_56 = *(arg1 + 0x36b0)
        uint64_t rcx_162 = zx.q(rbx_150) << 0x38
        
        if (r8_56 u>= rcx_162)
            rsi_35 = 1
            rbx_150 = *(arg1 + 0x36bc) - rbx_150
            r8_56 -= rcx_162
        
        uint32_t rdx_36 = zx.d(*(zx.q(rbx_150) + &data_143609200))
        rax_121 = 0
        *(arg1 + 0x36b8) -= rdx_36
        *(arg1 + 0x36b0) = r8_56 << rdx_36.b
        *(arg1 + 0x36bc) = rbx_150 << rdx_36.b
    
    if (*(r13_3 + 0xba4) == 0 || rsi_35 != 0)
        rax_121 = 1
    
    *(r13_3 + 0x192c) = rax_121
    void* const i_5 = &data_143608d50
    *(arg1 + 0x3834) = 1
    int64_t rcx_165 = r13_3 - 0x143606f7b
    int64_t rbp_11 = r13_3 - 0x143606f86
    int64_t var_78_1 = rcx_165
    int64_t var_58_1 = rbp_11
    
    do
        j_2 = 8
        void* j_1
        
        do
            var_88 = nullptr
            void* const i_9 = i_5
            void** rax_133
            
            do
                for (int64_t k = 0; k s< 0xb; k += 1)
                    void* rax_124 = i_5 + k
                    void* r13_5 = rax_124 + rcx_165
                    int32_t rsi_36 = 0
                    int32_t rbx_156 = (((*(arg1 + 0x36bc) - 1) * zx.d(*rax_124)) u>> 8) + 1
                    
                    if (*(arg1 + 0x36b8) s< 0)
                        sub_142a2e350(arg1 + 0x36a0)
                    
                    int64_t r8_58 = *(arg1 + 0x36b0)
                    uint64_t rcx_168 = zx.q(rbx_156) << 0x38
                    
                    if (r8_58 u>= rcx_168)
                        rsi_36 = 1
                        rbx_156 = *(arg1 + 0x36bc) - rbx_156
                        r8_58 -= rcx_168
                    
                    uint32_t rdx_37 = zx.d(*(zx.q(rbx_156) + &data_143609200))
                    *(arg1 + 0x36b8) -= rdx_37
                    *(arg1 + 0x36b0) = r8_58 << rdx_37.b
                    *(arg1 + 0x36bc) = rbx_156 << rdx_37.b
                    
                    if (rsi_36 != 0)
                        int32_t r14_15 = 0
                        int32_t rbp_12 = 7
                        int32_t temp13_1
                        
                        do
                            int32_t rsi_37 = 0
                            int32_t rbx_162 = (((*(arg1 + 0x36bc) << 7) - 0x80) u>> 8) + 1
                            
                            if (*(arg1 + 0x36b8) s< 0)
                                sub_142a2e350(arg1 + 0x36a0)
                            
                            int64_t r8_60 = *(arg1 + 0x36b0)
                            uint64_t rcx_173 = zx.q(rbx_162) << 0x38
                            
                            if (r8_60 u>= rcx_173)
                                rsi_37 = 1
                                rbx_162 = *(arg1 + 0x36bc) - rbx_162
                                r8_60 -= rcx_173
                            
                            uint32_t rdx_38 = zx.d(*(zx.q(rbx_162) + &data_143609200))
                            *(arg1 + 0x36b8) -= rdx_38
                            r14_15 |= rsi_37 << rbp_12.b
                            *(arg1 + 0x36b0) = r8_60 << rdx_38.b
                            temp13_1 = rbp_12
                            rbp_12 -= 1
                            *(arg1 + 0x36bc) = rbx_162 << rdx_38.b
                        while (temp13_1 - 1 s>= 0)
                        rbp_11 = var_58_1
                        *r13_5 = r14_15.b
                        i_5 = i_9
                    
                    rax_133 = var_88
                    
                    if (rax_133 s> 0)
                        rax_133 = var_88
                        
                        if (*r13_5 != *(i_5 + rbp_11 + k))
                            *(arg1 + 0x3834) = 0
                    
                    rcx_165 = var_78_1
                
                i_5 += 0xb
                var_88 = rax_133 + 1
                i_9 = i_5
            while (rax_133 + 1 s< 3)
            j_1 = j_2
            j_2 -= 1
        while (j_1 != 1)
    while (i_5 s< &data_143609170)
    
    memset(arg1 + 0x180, 0, 0x320)
    sub_142a2fbb0(arg1)
    memset(*(arg1 + 0x2c18), 0, sx.q(*(arg1 + 0x1e78)) * 9)
    *(arg1 + 0x3838) = 0
    int32_t rdx_40
    int128_t* rbp_13
    int64_t r9_3
    
    if (*(arg1 + 0x3760) == 0 || *(arg1 + 0x34e4) == 0)
        r9_3 = sub_142a1e630(arg1)
        rdx_40 = *(arg1 + 0xfc0)
        rbp_13 = r13
    else
        sub_1429e0980(arg1, arg1)
        rbp_13 = r13
        r9_3 = sub_142a217f0(rbp_13)
        uint64_t i_12 = zx.q(*(arg1 + 0x376c))
        rdx_40 = 0
        
        if (i_12.d != 0)
            int64_t rax_137 = *(arg1 + 0x37f0) + 0xfc0
            uint64_t i_6
            
            do
                rdx_40 |= *rax_137
                rax_137 += 0x12a0
                i_6 = i_12
                i_12 -= 1
            while (i_6 != 1)
    
    int32_t r15
    r15.b = *(arg1 + 0x36b8) - 0x41 u<= 0x3fffffbe
    int32_t r15_1 = r15 | rdx_40
    *(rbp_13 + 0x88) = r15_1
    
    if (*(arg1 + 0x3830) == 0)
        if (*(arg1 + 0x1e64) != 0 || r15_1 != 0)
            sub_1429da010(arg1 + 0x12c0, 7, "A stream must start with a complete key frame", r9_3)
        else
            *(arg1 + 0x3830) = 1
    
    if (*(arg1 + 0x2c00) == 0)
        void* rcx_185 = arg1 + 0x3082
        int64_t i_11 = 8
        void* rdx_41 = arg1 + 0x2c29
        int128_t zmm0_2
        int64_t i_7
        
        do
            rcx_185 += 0x80
            zmm0_2 = *rdx_41
            zmm1_1 = *(rdx_41 + 0x10)
            rdx_41 += 0x80
            *(rcx_185 - 0x80) = zmm0_2
            zmm0_2 = *(rdx_41 - 0x60)
            *(rcx_185 - 0x70) = zmm1_1
            zmm1_1 = *(rdx_41 - 0x50)
            *(rcx_185 - 0x60) = zmm0_2
            zmm0_2 = *(rdx_41 - 0x40)
            *(rcx_185 - 0x50) = zmm1_1
            zmm1_1 = *(rdx_41 - 0x30)
            *(rcx_185 - 0x40) = zmm0_2
            zmm0_2 = *(rdx_41 - 0x20)
            *(rcx_185 - 0x30) = zmm1_1
            zmm1_1 = *(rdx_41 - 0x10)
            *(rcx_185 - 0x20) = zmm0_2
            *(rcx_185 - 0x10) = zmm1_1
            i_7 = i_11
            i_11 -= 1
        while (i_7 != 1)
        int64_t rax_140 = *(rdx_41 + 0x50)
        zmm1_1 = *(rdx_41 + 0x10)
        *rcx_185 = *rdx_41
        zmm0_2 = *(rdx_41 + 0x20)
        *(rcx_185 + 0x10) = zmm1_1
        zmm1_1 = *(rdx_41 + 0x30)
        *(rcx_185 + 0x20) = zmm0_2
        zmm0_2 = *(rdx_41 + 0x40)
        *(rcx_185 + 0x30) = zmm1_1
        *(rcx_185 + 0x40) = zmm0_2
        *(rcx_185 + 0x50) = rax_140
        *(rcx_185 + 0x58) = *(rdx_41 + 0x58)
        *(arg1 + 0x3834) = rax_2
    
    result = 0
else
    result = -1

__security_check_cookie(rax_1 ^ &var_b8)
return result
