// 函数: sub_141b2cd20
// 地址: 0x141b2cd20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int64_t r15 = *(arg1 + 0xf0)
void* var_48 = nullptr
int64_t r12_1 = sx.q(*(arg1 + 0xf8)) * 0xa8 + r15
int32_t var_40 = 0
int32_t var_3c = 1
void* var_a8
void*** var_a0
void* var_90
void* var_88
void var_60

while (r15 != r12_1)
    int32_t i = var_40
    int32_t rsi_1 = 0
    void* rax_4 = *(sub_141a788e0() + 0x18)
    var_90 = rax_4
    
    if (i s<= 0)
        goto label_141b2ce29
    
    void* r14_1 = &var_60
    
    if (var_48 != 0)
        r14_1 = var_48
    
    do
        int32_t rcx_1 = i & 0x80000001
        
        if (rcx_1 s< 0)
            rcx_1 = ((rcx_1 - 1) | 0xfffffffe) + 1
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(i)
        int32_t i_9 = (temp1_1 - temp0_1) s>> 1
        i = i_9
        int32_t rax_9 = i_9 + rsi_1
        var_88 = *(r14_1 + sx.q(rax_9) * 0x18)
        
        if (sub_140b5d160(&var_88, &var_90) s< 0)
            rsi_1 = rax_9 + rcx_1
    while (i s> 0)
    
    void* r8_1
    
    if (rsi_1 s>= var_40)
        rax_4 = var_90
    label_141b2ce29:
        var_a8 = rax_4
        var_a0 = nullptr
        int64_t var_98_1 = 0
        sub_141b25e90(&var_60, &var_a8, rsi_1)
        void*** rcx_8 = var_a0
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        r8_1 = var_48
    else
        r8_1 = var_48
        void* rdx_3 = &var_60
        
        if (r8_1 != 0)
            rdx_3 = r8_1
        
        rax_4 = var_90
        
        if (*(rdx_3 + sx.q(rsi_1) * 0x18) != rax_4)
            goto label_141b2ce29
    
    void* rdx_5 = &var_60
    
    if (r8_1 != 0)
        rdx_5 = r8_1
    
    int64_t rcx_9 = sx.q(rsi_1) * 3
    int64_t rdi_1 = sx.q(*(rdx_5 + (rcx_9 << 3) + 0x10))
    void* rbx_2 = rdx_5 + (rcx_9 << 3)
    int32_t rax_15 = (rdi_1 + 1).d
    *(rbx_2 + 0x10) = rax_15
    
    if (rax_15 s> *(rbx_2 + 0x14))
        sub_1405a4d70(rbx_2 + 8)
    
    int64_t rdx_7 = r15 + 8
    r15 += 0xa8
    *(*(rbx_2 + 8) + (rdi_1 << 3)) = rdx_7

int64_t r15_1 = *(arg1 + 0xe0)
int64_t r12_3 = sx.q(*(arg1 + 0xe8)) * 0x98 + r15_1

while (r15_1 != r12_3)
    int32_t i_1 = var_40
    int32_t rsi_2 = 0
    void* rax_19 = *(sub_141a737d0() + 0x18)
    var_90 = rax_19
    
    if (i_1 s<= 0)
        goto label_141b2cf67
    
    void* r14_2 = &var_60
    
    if (var_48 != 0)
        r14_2 = var_48
    
    do
        int32_t rcx_12 = i_1 & 0x80000001
        
        if (rcx_12 s< 0)
            rcx_12 = ((rcx_12 - 1) | 0xfffffffe) + 1
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(i_1)
        int32_t i_10 = (temp3_1 - temp2_1) s>> 1
        i_1 = i_10
        int32_t rax_24 = i_10 + rsi_2
        var_88 = *(r14_2 + sx.q(rax_24) * 0x18)
        
        if (sub_140b5d160(&var_88, &var_90) s< 0)
            rsi_2 = rax_24 + rcx_12
    while (i_1 s> 0)
    
    void* r8_3
    
    if (rsi_2 s>= var_40)
        rax_19 = var_90
    label_141b2cf67:
        var_a8 = rax_19
        var_a0 = nullptr
        int64_t var_98_2 = 0
        sub_141b25e90(&var_60, &var_a8, rsi_2)
        void*** rcx_19 = var_a0
        
        if (rcx_19 != 0)
            sub_140a74f90(rcx_19)
        
        r8_3 = var_48
    else
        r8_3 = var_48
        void* rdx_10 = &var_60
        
        if (r8_3 != 0)
            rdx_10 = r8_3
        
        rax_19 = var_90
        
        if (*(rdx_10 + sx.q(rsi_2) * 0x18) != rax_19)
            goto label_141b2cf67
    
    void* rdx_12 = &var_60
    
    if (r8_3 != 0)
        rdx_12 = r8_3
    
    int64_t rcx_20 = sx.q(rsi_2) * 3
    int64_t rdi_2 = sx.q(*(rdx_12 + (rcx_20 << 3) + 0x10))
    void* rbx_4 = rdx_12 + (rcx_20 << 3)
    int32_t rax_30 = (rdi_2 + 1).d
    *(rbx_4 + 0x10) = rax_30
    
    if (rax_30 s> *(rbx_4 + 0x14))
        sub_1405a4d70(rbx_4 + 8)
    
    int64_t rdx_14 = r15_1 + 8
    r15_1 += 0x98
    *(*(rbx_4 + 8) + (rdi_2 << 3)) = rdx_14

int64_t r15_2 = *(arg1 + 0x100)
int64_t r12_5 = sx.q(*(arg1 + 0x108)) * 0x148 + r15_2
void* var_80

while (r15_2 != r12_5)
    int32_t i_2 = var_40
    int32_t rsi_3 = 0
    void* rax_34 = *(sub_141a788e0() + 0x18)
    var_90 = rax_34
    
    if (i_2 s<= 0)
        goto label_141b2d0a7
    
    void* r14_3 = &var_60
    
    if (var_48 != 0)
        r14_3 = var_48
    
    do
        int32_t rcx_23 = i_2 & 0x80000001
        
        if (rcx_23 s< 0)
            rcx_23 = ((rcx_23 - 1) | 0xfffffffe) + 1
        
        int32_t temp4_1
        int32_t temp5_1
        temp4_1:temp5_1 = sx.q(i_2)
        int32_t i_11 = (temp5_1 - temp4_1) s>> 1
        i_2 = i_11
        int32_t rax_39 = i_11 + rsi_3
        var_88 = *(r14_3 + sx.q(rax_39) * 0x18)
        
        if (sub_140b5d160(&var_88, &var_90) s< 0)
            rsi_3 = rax_39 + rcx_23
    while (i_2 s> 0)
    
    void* r8_5
    
    if (rsi_3 s>= var_40)
        rax_34 = var_90
    label_141b2d0a7:
        var_a8 = rax_34
        var_a0 = nullptr
        int64_t var_98_3 = 0
        sub_141b25e90(&var_60, &var_a8, rsi_3)
        void*** rcx_30 = var_a0
        
        if (rcx_30 != 0)
            sub_140a74f90(rcx_30)
        
        r8_5 = var_48
    else
        r8_5 = var_48
        void* rdx_17 = &var_60
        
        if (r8_5 != 0)
            rdx_17 = r8_5
        
        rax_34 = var_90
        
        if (*(rdx_17 + sx.q(rsi_3) * 0x18) != rax_34)
            goto label_141b2d0a7
    
    void* rdx_19 = &var_60
    
    if (r8_5 != 0)
        rdx_19 = r8_5
    
    int64_t rcx_31 = sx.q(rsi_3) * 3
    int64_t rdi_3 = sx.q(*(rdx_19 + (rcx_31 << 3) + 0x10))
    void* rbx_6 = rdx_19 + (rcx_31 << 3)
    int32_t rax_45 = (rdi_3 + 1).d
    *(rbx_6 + 0x10) = rax_45
    
    if (rax_45 s> *(rbx_6 + 0x14))
        sub_1405a4d70(rbx_6 + 8)
    
    *(*(rbx_6 + 8) + (rdi_3 << 3)) = r15_2 + 8
    int32_t i_3 = var_40
    int32_t rsi_4 = 0
    void* rax_48 = *(sub_141a788e0() + 0x18)
    var_80 = rax_48
    
    if (i_3 s<= 0)
        goto label_141b2d1b7
    
    void* r14_4 = &var_60
    
    if (var_48 != 0)
        r14_4 = var_48
    
    do
        int32_t rcx_34 = i_3 & 0x80000001
        
        if (rcx_34 s< 0)
            rcx_34 = ((rcx_34 - 1) | 0xfffffffe) + 1
        
        int32_t temp14_1
        int32_t temp15_1
        temp14_1:temp15_1 = sx.q(i_3)
        int32_t i_12 = (temp15_1 - temp14_1) s>> 1
        i_3 = i_12
        int32_t rax_53 = i_12 + rsi_4
        var_88 = *(r14_4 + sx.q(rax_53) * 0x18)
        
        if (sub_140b5d160(&var_88, &var_80) s< 0)
            rsi_4 = rax_53 + rcx_34
    while (i_3 s> 0)
    
    void* r8_7
    
    if (rsi_4 s>= var_40)
        rax_48 = var_80
    label_141b2d1b7:
        var_a8 = rax_48
        var_a0 = nullptr
        int64_t var_98_4 = 0
        sub_141b25e90(&var_60, &var_a8, rsi_4)
        void*** rcx_41 = var_a0
        
        if (rcx_41 != 0)
            sub_140a74f90(rcx_41)
        
        r8_7 = var_48
    else
        r8_7 = var_48
        void* rdx_24 = &var_60
        
        if (r8_7 != 0)
            rdx_24 = r8_7
        
        rax_48 = var_80
        
        if (*(rdx_24 + sx.q(rsi_4) * 0x18) != rax_48)
            goto label_141b2d1b7
    
    void* rdx_26 = &var_60
    
    if (r8_7 != 0)
        rdx_26 = r8_7
    
    int64_t rcx_42 = sx.q(rsi_4) * 3
    int64_t rdi_4 = sx.q(*(rdx_26 + (rcx_42 << 3) + 0x10))
    void* rbx_8 = rdx_26 + (rcx_42 << 3)
    int32_t rax_59 = (rdi_4 + 1).d
    *(rbx_8 + 0x10) = rax_59
    
    if (rax_59 s> *(rbx_8 + 0x14))
        sub_1405a4d70(rbx_8 + 8)
    
    int64_t rdx_28 = r15_2 + 0xa8
    r15_2 += 0x148
    *(*(rbx_8 + 8) + (rdi_4 << 3)) = rdx_28

int64_t r15_3 = *(arg1 + 0x120)
int64_t r12_7 = sx.q(*(arg1 + 0x128)) * 0x288 + r15_3
void* var_78
void* var_70

while (r15_3 != r12_7)
    int32_t i_4 = var_40
    int32_t rsi_5 = 0
    void* rax_63 = *(sub_141a788e0() + 0x18)
    var_80 = rax_63
    
    if (i_4 s<= 0)
        goto label_141b2d2f8
    
    void* r14_5 = &var_60
    
    if (var_48 != 0)
        r14_5 = var_48
    
    do
        int32_t rcx_45 = i_4 & 0x80000001
        
        if (rcx_45 s< 0)
            rcx_45 = ((rcx_45 - 1) | 0xfffffffe) + 1
        
        int32_t temp7_1
        int32_t temp8_1
        temp7_1:temp8_1 = sx.q(i_4)
        int32_t i_13 = (temp8_1 - temp7_1) s>> 1
        i_4 = i_13
        int32_t rax_68 = i_13 + rsi_5
        var_88 = *(r14_5 + sx.q(rax_68) * 0x18)
        
        if (sub_140b5d160(&var_88, &var_80) s< 0)
            rsi_5 = rax_68 + rcx_45
    while (i_4 s> 0)
    
    void* r8_9
    
    if (rsi_5 s>= var_40)
        rax_63 = var_80
    label_141b2d2f8:
        var_a8 = rax_63
        var_a0 = nullptr
        int64_t var_98_5 = 0
        sub_141b25e90(&var_60, &var_a8, rsi_5)
        void*** rcx_52 = var_a0
        
        if (rcx_52 != 0)
            sub_140a74f90(rcx_52)
        
        r8_9 = var_48
    else
        r8_9 = var_48
        void* rdx_31 = &var_60
        
        if (r8_9 != 0)
            rdx_31 = r8_9
        
        rax_63 = var_80
        
        if (*(rdx_31 + sx.q(rsi_5) * 0x18) != rax_63)
            goto label_141b2d2f8
    
    void* rdx_33 = &var_60
    
    if (r8_9 != 0)
        rdx_33 = r8_9
    
    int64_t rcx_53 = sx.q(rsi_5) * 3
    int64_t rdi_5 = sx.q(*(rdx_33 + (rcx_53 << 3) + 0x10))
    void* rbx_10 = rdx_33 + (rcx_53 << 3)
    int32_t rax_74 = (rdi_5 + 1).d
    *(rbx_10 + 0x10) = rax_74
    
    if (rax_74 s> *(rbx_10 + 0x14))
        sub_1405a4d70(rbx_10 + 8)
    
    *(*(rbx_10 + 8) + (rdi_5 << 3)) = r15_3 + 8
    int32_t i_5 = var_40
    int32_t rsi_6 = 0
    void* rax_77 = *(sub_141a788e0() + 0x18)
    var_90 = rax_77
    
    if (i_5 s<= 0)
        goto label_141b2d407
    
    void* r14_6 = &var_60
    
    if (var_48 != 0)
        r14_6 = var_48
    
    do
        int32_t rcx_56 = i_5 & 0x80000001
        
        if (rcx_56 s< 0)
            rcx_56 = ((rcx_56 - 1) | 0xfffffffe) + 1
        
        int32_t temp16_1
        int32_t temp17_1
        temp16_1:temp17_1 = sx.q(i_5)
        int32_t i_14 = (temp17_1 - temp16_1) s>> 1
        i_5 = i_14
        int32_t rax_82 = i_14 + rsi_6
        var_88 = *(r14_6 + sx.q(rax_82) * 0x18)
        
        if (sub_140b5d160(&var_88, &var_90) s< 0)
            rsi_6 = rax_82 + rcx_56
    while (i_5 s> 0)
    
    void* r8_11
    
    if (rsi_6 s>= var_40)
        rax_77 = var_90
    label_141b2d407:
        var_a8 = rax_77
        var_a0 = nullptr
        int64_t var_98_6 = 0
        sub_141b25e90(&var_60, &var_a8, rsi_6)
        void*** rcx_63 = var_a0
        
        if (rcx_63 != 0)
            sub_140a74f90(rcx_63)
        
        r8_11 = var_48
    else
        r8_11 = var_48
        void* rdx_38 = &var_60
        
        if (r8_11 != 0)
            rdx_38 = r8_11
        
        rax_77 = var_90
        
        if (*(rdx_38 + sx.q(rsi_6) * 0x18) != rax_77)
            goto label_141b2d407
    
    void* rdx_40 = &var_60
    
    if (r8_11 != 0)
        rdx_40 = r8_11
    
    int64_t rcx_64 = sx.q(rsi_6) * 3
    int64_t rdi_6 = sx.q(*(rdx_40 + (rcx_64 << 3) + 0x10))
    void* rbx_12 = rdx_40 + (rcx_64 << 3)
    int32_t rax_88 = (rdi_6 + 1).d
    *(rbx_12 + 0x10) = rax_88
    
    if (rax_88 s> *(rbx_12 + 0x14))
        sub_1405a4d70(rbx_12 + 8)
    
    *(*(rbx_12 + 8) + (rdi_6 << 3)) = r15_3 + 0xa8
    int32_t i_6 = var_40
    int32_t rsi_7 = 0
    void* rax_91 = *(sub_141a788e0() + 0x18)
    var_78 = rax_91
    
    if (i_6 s<= 0)
        goto label_141b2d517
    
    void* r14_7 = &var_60
    
    if (var_48 != 0)
        r14_7 = var_48
    
    do
        int32_t rcx_67 = i_6 & 0x80000001
        
        if (rcx_67 s< 0)
            rcx_67 = ((rcx_67 - 1) | 0xfffffffe) + 1
        
        int32_t temp20_1
        int32_t temp21_1
        temp20_1:temp21_1 = sx.q(i_6)
        int32_t i_15 = (temp21_1 - temp20_1) s>> 1
        i_6 = i_15
        int32_t rax_96 = i_15 + rsi_7
        var_88 = *(r14_7 + sx.q(rax_96) * 0x18)
        
        if (sub_140b5d160(&var_88, &var_78) s< 0)
            rsi_7 = rax_96 + rcx_67
    while (i_6 s> 0)
    
    void* r8_13
    
    if (rsi_7 s>= var_40)
        rax_91 = var_78
    label_141b2d517:
        var_a8 = rax_91
        var_a0 = nullptr
        int64_t var_98_7 = 0
        sub_141b25e90(&var_60, &var_a8, rsi_7)
        void*** rcx_74 = var_a0
        
        if (rcx_74 != 0)
            sub_140a74f90(rcx_74)
        
        r8_13 = var_48
    else
        r8_13 = var_48
        void* rdx_45 = &var_60
        
        if (r8_13 != 0)
            rdx_45 = r8_13
        
        rax_91 = var_78
        
        if (*(rdx_45 + sx.q(rsi_7) * 0x18) != rax_91)
            goto label_141b2d517
    
    void* rdx_47 = &var_60
    
    if (r8_13 != 0)
        rdx_47 = r8_13
    
    int64_t rcx_75 = sx.q(rsi_7) * 3
    int64_t rdi_7 = sx.q(*(rdx_47 + (rcx_75 << 3) + 0x10))
    void* rbx_14 = rdx_47 + (rcx_75 << 3)
    int32_t rax_102 = (rdi_7 + 1).d
    *(rbx_14 + 0x10) = rax_102
    
    if (rax_102 s> *(rbx_14 + 0x14))
        sub_1405a4d70(rbx_14 + 8)
    
    *(*(rbx_14 + 8) + (rdi_7 << 3)) = r15_3 + 0x148
    int32_t i_7 = var_40
    int32_t rsi_8 = 0
    void* rax_105 = *(sub_141a788e0() + 0x18)
    var_70 = rax_105
    
    if (i_7 s<= 0)
        goto label_141b2d627
    
    void* r14_8 = &var_60
    
    if (var_48 != 0)
        r14_8 = var_48
    
    do
        int32_t rcx_78 = i_7 & 0x80000001
        
        if (rcx_78 s< 0)
            rcx_78 = ((rcx_78 - 1) | 0xfffffffe) + 1
        
        int32_t temp24_1
        int32_t temp25_1
        temp24_1:temp25_1 = sx.q(i_7)
        int32_t i_16 = (temp25_1 - temp24_1) s>> 1
        i_7 = i_16
        int32_t rax_110 = i_16 + rsi_8
        var_88 = *(r14_8 + sx.q(rax_110) * 0x18)
        
        if (sub_140b5d160(&var_88, &var_70) s< 0)
            rsi_8 = rax_110 + rcx_78
    while (i_7 s> 0)
    
    void* r8_15
    
    if (rsi_8 s>= var_40)
        rax_105 = var_70
    label_141b2d627:
        var_a8 = rax_105
        var_a0 = nullptr
        int64_t var_98_8 = 0
        sub_141b25e90(&var_60, &var_a8, rsi_8)
        void*** rcx_85 = var_a0
        
        if (rcx_85 != 0)
            sub_140a74f90(rcx_85)
        
        r8_15 = var_48
    else
        r8_15 = var_48
        void* rdx_52 = &var_60
        
        if (r8_15 != 0)
            rdx_52 = r8_15
        
        rax_105 = var_70
        
        if (*(rdx_52 + sx.q(rsi_8) * 0x18) != rax_105)
            goto label_141b2d627
    
    void* rdx_54 = &var_60
    
    if (r8_15 != 0)
        rdx_54 = r8_15
    
    int64_t rcx_86 = sx.q(rsi_8) * 3
    int64_t rdi_8 = sx.q(*(rdx_54 + (rcx_86 << 3) + 0x10))
    void* rbx_16 = rdx_54 + (rcx_86 << 3)
    int32_t rax_116 = (rdi_8 + 1).d
    *(rbx_16 + 0x10) = rax_116
    
    if (rax_116 s> *(rbx_16 + 0x14))
        sub_1405a4d70(rbx_16 + 8)
    
    int64_t rdx_56 = r15_3 + 0x1e8
    r15_3 += 0x288
    *(*(rbx_16 + 8) + (rdi_8 << 3)) = rdx_56

int64_t i_8 = *(arg1 + 0x130)

for (int64_t r12_9 = sx.q(*(arg1 + 0x138)) * 0x5a8 + i_8; i_8 != r12_9; i_8 += 0x5a8)
    int32_t j = var_40
    int32_t rsi_9 = 0
    void* rax_120 = *(sub_141a788e0() + 0x18)
    var_70 = rax_120
    
    if (j s<= 0)
        goto label_141b2d768
    
    void* r14_9 = &var_60
    
    if (var_48 != 0)
        r14_9 = var_48
    
    do
        int32_t rcx_89 = j & 0x80000001
        
        if (rcx_89 s< 0)
            rcx_89 = ((rcx_89 - 1) | 0xfffffffe) + 1
        
        int32_t temp11_1
        int32_t temp12_1
        temp11_1:temp12_1 = sx.q(j)
        int32_t j_6 = (temp12_1 - temp11_1) s>> 1
        j = j_6
        int32_t rax_125 = j_6 + rsi_9
        var_a8 = *(r14_9 + sx.q(rax_125) * 0x18)
        
        if (sub_140b5d160(&var_a8, &var_70) s< 0)
            rsi_9 = rax_125 + rcx_89
    while (j s> 0)
    
    void* r8_17
    
    if (rsi_9 s>= var_40)
        rax_120 = var_70
    label_141b2d768:
        var_a8 = rax_120
        var_a0 = nullptr
        int64_t var_98_9 = 0
        sub_141b25e90(&var_60, &var_a8, rsi_9)
        void*** rcx_96 = var_a0
        
        if (rcx_96 != 0)
            sub_140a74f90(rcx_96)
        
        r8_17 = var_48
    else
        r8_17 = var_48
        void* rdx_59 = &var_60
        
        if (r8_17 != 0)
            rdx_59 = r8_17
        
        rax_120 = var_70
        
        if (*(rdx_59 + sx.q(rsi_9) * 0x18) != rax_120)
            goto label_141b2d768
    
    void* rdx_61 = &var_60
    
    if (r8_17 != 0)
        rdx_61 = r8_17
    
    int64_t rcx_97 = sx.q(rsi_9) * 3
    int64_t rdi_9 = sx.q(*(rdx_61 + (rcx_97 << 3) + 0x10))
    void* rbx_18 = rdx_61 + (rcx_97 << 3)
    int32_t rax_131 = (rdi_9 + 1).d
    *(rbx_18 + 0x10) = rax_131
    
    if (rax_131 s> *(rbx_18 + 0x14))
        sub_1405a4d70(rbx_18 + 8)
    
    *(*(rbx_18 + 8) + (rdi_9 << 3)) = i_8 + 8
    int32_t j_1 = var_40
    int32_t rsi_10 = 0
    void* rax_134 = *(sub_141a788e0() + 0x18)
    var_78 = rax_134
    
    if (j_1 s<= 0)
        goto label_141b2d877
    
    void* r14_10 = &var_60
    
    if (var_48 != 0)
        r14_10 = var_48
    
    do
        int32_t rcx_100 = j_1 & 0x80000001
        
        if (rcx_100 s< 0)
            rcx_100 = ((rcx_100 - 1) | 0xfffffffe) + 1
        
        int32_t temp18_1
        int32_t temp19_1
        temp18_1:temp19_1 = sx.q(j_1)
        int32_t j_7 = (temp19_1 - temp18_1) s>> 1
        j_1 = j_7
        int32_t rax_139 = j_7 + rsi_10
        var_a8 = *(r14_10 + sx.q(rax_139) * 0x18)
        
        if (sub_140b5d160(&var_a8, &var_78) s< 0)
            rsi_10 = rax_139 + rcx_100
    while (j_1 s> 0)
    
    void* r8_19
    
    if (rsi_10 s>= var_40)
        rax_134 = var_78
    label_141b2d877:
        var_a8 = rax_134
        var_a0 = nullptr
        int64_t var_98_10 = 0
        sub_141b25e90(&var_60, &var_a8, rsi_10)
        void*** rcx_107 = var_a0
        
        if (rcx_107 != 0)
            sub_140a74f90(rcx_107)
        
        r8_19 = var_48
    else
        r8_19 = var_48
        void* rdx_66 = &var_60
        
        if (r8_19 != 0)
            rdx_66 = r8_19
        
        rax_134 = var_78
        
        if (*(rdx_66 + sx.q(rsi_10) * 0x18) != rax_134)
            goto label_141b2d877
    
    void* rdx_68 = &var_60
    
    if (r8_19 != 0)
        rdx_68 = r8_19
    
    int64_t rcx_108 = sx.q(rsi_10) * 3
    int64_t rdi_10 = sx.q(*(rdx_68 + (rcx_108 << 3) + 0x10))
    void* rbx_20 = rdx_68 + (rcx_108 << 3)
    int32_t rax_145 = (rdi_10 + 1).d
    *(rbx_20 + 0x10) = rax_145
    
    if (rax_145 s> *(rbx_20 + 0x14))
        sub_1405a4d70(rbx_20 + 8)
    
    *(*(rbx_20 + 8) + (rdi_10 << 3)) = i_8 + 0xa8
    int32_t j_2 = var_40
    int32_t rsi_11 = 0
    void* rax_148 = *(sub_141a788e0() + 0x18)
    var_80 = rax_148
    
    if (j_2 s<= 0)
        goto label_141b2d987
    
    void* r14_11 = &var_60
    
    if (var_48 != 0)
        r14_11 = var_48
    
    do
        int32_t rcx_111 = j_2 & 0x80000001
        
        if (rcx_111 s< 0)
            rcx_111 = ((rcx_111 - 1) | 0xfffffffe) + 1
        
        int32_t temp22_1
        int32_t temp23_1
        temp22_1:temp23_1 = sx.q(j_2)
        int32_t j_8 = (temp23_1 - temp22_1) s>> 1
        j_2 = j_8
        int32_t rax_153 = j_8 + rsi_11
        var_a8 = *(r14_11 + sx.q(rax_153) * 0x18)
        
        if (sub_140b5d160(&var_a8, &var_80) s< 0)
            rsi_11 = rax_153 + rcx_111
    while (j_2 s> 0)
    
    void* r8_21
    
    if (rsi_11 s>= var_40)
        rax_148 = var_80
    label_141b2d987:
        var_a8 = rax_148
        var_a0 = nullptr
        int64_t var_98_11 = 0
        sub_141b25e90(&var_60, &var_a8, rsi_11)
        void*** rcx_118 = var_a0
        
        if (rcx_118 != 0)
            sub_140a74f90(rcx_118)
        
        r8_21 = var_48
    else
        r8_21 = var_48
        void* rdx_73 = &var_60
        
        if (r8_21 != 0)
            rdx_73 = r8_21
        
        rax_148 = var_80
        
        if (*(rdx_73 + sx.q(rsi_11) * 0x18) != rax_148)
            goto label_141b2d987
    
    void* rdx_75 = &var_60
    
    if (r8_21 != 0)
        rdx_75 = r8_21
    
    int64_t rcx_119 = sx.q(rsi_11) * 3
    int64_t rdi_11 = sx.q(*(rdx_75 + (rcx_119 << 3) + 0x10))
    void* rbx_22 = rdx_75 + (rcx_119 << 3)
    int32_t rax_159 = (rdi_11 + 1).d
    *(rbx_22 + 0x10) = rax_159
    
    if (rax_159 s> *(rbx_22 + 0x14))
        sub_1405a4d70(rbx_22 + 8)
    
    *(*(rbx_22 + 8) + (rdi_11 << 3)) = i_8 + 0x148
    int32_t j_3 = var_40
    int32_t rsi_12 = 0
    void* rax_162 = *(sub_141a788e0() + 0x18)
    var_90 = rax_162
    
    if (j_3 s<= 0)
        goto label_141b2da97
    
    void* r14_12 = &var_60
    
    if (var_48 != 0)
        r14_12 = var_48
    
    do
        int32_t rcx_122 = j_3 & 0x80000001
        
        if (rcx_122 s< 0)
            rcx_122 = ((rcx_122 - 1) | 0xfffffffe) + 1
        
        int32_t temp26_1
        int32_t temp27_1
        temp26_1:temp27_1 = sx.q(j_3)
        int32_t j_9 = (temp27_1 - temp26_1) s>> 1
        j_3 = j_9
        int32_t rax_167 = j_9 + rsi_12
        var_a8 = *(r14_12 + sx.q(rax_167) * 0x18)
        
        if (sub_140b5d160(&var_a8, &var_90) s< 0)
            rsi_12 = rax_167 + rcx_122
    while (j_3 s> 0)
    
    void* r8_23
    
    if (rsi_12 s>= var_40)
        rax_162 = var_90
    label_141b2da97:
        var_a8 = rax_162
        var_a0 = nullptr
        int64_t var_98_12 = 0
        sub_141b25e90(&var_60, &var_a8, rsi_12)
        void*** rcx_129 = var_a0
        
        if (rcx_129 != 0)
            sub_140a74f90(rcx_129)
        
        r8_23 = var_48
    else
        r8_23 = var_48
        void* rdx_80 = &var_60
        
        if (r8_23 != 0)
            rdx_80 = r8_23
        
        rax_162 = var_90
        
        if (*(rdx_80 + sx.q(rsi_12) * 0x18) != rax_162)
            goto label_141b2da97
    
    void* rdx_82 = &var_60
    
    if (r8_23 != 0)
        rdx_82 = r8_23
    
    int64_t rcx_130 = sx.q(rsi_12) * 3
    int64_t rdi_12 = sx.q(*(rdx_82 + (rcx_130 << 3) + 0x10))
    void* rbx_24 = rdx_82 + (rcx_130 << 3)
    int32_t rax_173 = (rdi_12 + 1).d
    *(rbx_24 + 0x10) = rax_173
    
    if (rax_173 s> *(rbx_24 + 0x14))
        sub_1405a4d70(rbx_24 + 8)
    
    *(*(rbx_24 + 8) + (rdi_12 << 3)) = i_8 + 0x1e8
    int32_t j_4 = var_40
    int32_t rsi_13 = 0
    void* rax_176 = *(sub_141a788e0() + 0x18)
    void* var_68 = rax_176
    
    if (j_4 s<= 0)
        goto label_141b2dba7
    
    void* r14_13 = &var_60
    
    if (var_48 != 0)
        r14_13 = var_48
    
    do
        int32_t rcx_133 = j_4 & 0x80000001
        
        if (rcx_133 s< 0)
            rcx_133 = ((rcx_133 - 1) | 0xfffffffe) + 1
        
        int32_t temp28_1
        int32_t temp29_1
        temp28_1:temp29_1 = sx.q(j_4)
        int32_t j_10 = (temp29_1 - temp28_1) s>> 1
        j_4 = j_10
        int32_t rax_181 = j_10 + rsi_13
        var_a8 = *(r14_13 + sx.q(rax_181) * 0x18)
        
        if (sub_140b5d160(&var_a8, &var_68) s< 0)
            rsi_13 = rax_181 + rcx_133
    while (j_4 s> 0)
    
    void* r8_25
    
    if (rsi_13 s>= var_40)
        rax_176 = var_68
    label_141b2dba7:
        var_a8 = rax_176
        var_a0 = nullptr
        int64_t var_98_13 = 0
        sub_141b25e90(&var_60, &var_a8, rsi_13)
        void*** rcx_140 = var_a0
        
        if (rcx_140 != 0)
            sub_140a74f90(rcx_140)
        
        r8_25 = var_48
    else
        r8_25 = var_48
        void* rdx_87 = &var_60
        
        if (r8_25 != 0)
            rdx_87 = r8_25
        
        rax_176 = var_68
        
        if (*(rdx_87 + sx.q(rsi_13) * 0x18) != rax_176)
            goto label_141b2dba7
    
    void* rdx_89 = &var_60
    
    if (r8_25 != 0)
        rdx_89 = r8_25
    
    int64_t rcx_141 = sx.q(rsi_13) * 3
    int64_t rdi_13 = sx.q(*(rdx_89 + (rcx_141 << 3) + 0x10))
    void* rbx_26 = rdx_89 + (rcx_141 << 3)
    int32_t rax_187 = (rdi_13 + 1).d
    *(rbx_26 + 0x10) = rax_187
    
    if (rax_187 s> *(rbx_26 + 0x14))
        sub_1405a4d70(rbx_26 + 8)
    
    *(*(rbx_26 + 8) + (rdi_13 << 3)) = i_8 + 0x288
    int32_t j_5 = var_40
    int32_t rsi_14 = 0
    void* rax_190 = *(sub_141a788e0() + 0x18)
    var_88 = rax_190
    
    if (j_5 s<= 0)
        goto label_141b2dcb7
    
    void* r14_14 = &var_60
    
    if (var_48 != 0)
        r14_14 = var_48
    
    do
        int32_t rcx_144 = j_5 & 0x80000001
        
        if (rcx_144 s< 0)
            rcx_144 = ((rcx_144 - 1) | 0xfffffffe) + 1
        
        int32_t temp30_1
        int32_t temp31_1
        temp30_1:temp31_1 = sx.q(j_5)
        int32_t j_11 = (temp31_1 - temp30_1) s>> 1
        j_5 = j_11
        int32_t rax_195 = j_11 + rsi_14
        var_a8 = *(r14_14 + sx.q(rax_195) * 0x18)
        
        if (sub_140b5d160(&var_a8, &var_88) s< 0)
            rsi_14 = rax_195 + rcx_144
    while (j_5 s> 0)
    
    void* r8_27
    
    if (rsi_14 s>= var_40)
        rax_190 = var_88
    label_141b2dcb7:
        var_a8 = rax_190
        var_a0 = nullptr
        int64_t var_98_14 = 0
        sub_141b25e90(&var_60, &var_a8, rsi_14)
        void*** rcx_151 = var_a0
        
        if (rcx_151 != 0)
            sub_140a74f90(rcx_151)
        
        r8_27 = var_48
    else
        r8_27 = var_48
        void* rdx_94 = &var_60
        
        if (r8_27 != 0)
            rdx_94 = r8_27
        
        rax_190 = var_88
        
        if (*(rdx_94 + sx.q(rsi_14) * 0x18) != rax_190)
            goto label_141b2dcb7
    
    void* rdx_96 = &var_60
    
    if (r8_27 != 0)
        rdx_96 = r8_27
    
    int64_t rcx_152 = sx.q(rsi_14) * 3
    int64_t rdi_14 = sx.q(*(rdx_96 + (rcx_152 << 3) + 0x10))
    void* rbx_28 = rdx_96 + (rcx_152 << 3)
    int32_t rax_201 = (rdi_14 + 1).d
    *(rbx_28 + 0x10) = rax_201
    
    if (rax_201 s> *(rbx_28 + 0x14))
        sub_1405a4d70(rbx_28 + 8)
    
    *(*(rbx_28 + 8) + (rdi_14 << 3)) = i_8 + 0x328
    sub_141aec4c0(&var_60, i_8 + 0x3c8)
    sub_141aec4c0(&var_60, i_8 + 0x468)
    sub_141aec4c0(&var_60, i_8 + 0x508)

void*** rax_203 = sub_141af34e0(&var_60)
var_a0 = rax_203
var_a8 = &rax_203[2]
sub_141af0a30(&var_a8, &rax_203[2])
var_a8 = &rax_203[2]
void*** rdi_15 = rax_203
var_a0 = rax_203

if (rax_203 != 0)
    rax_203[1].d += 1

if (arg1 + 0xd0 != &var_a8)
    *(arg1 + 0xd0) = &rax_203[2]
    var_a8 = nullptr
    sub_14066a200(arg1 + 0xd8, &var_a0)
    rdi_15 = var_a0

if (rdi_15 != 0)
    rdi_15[1].d -= 1
    
    if (rdi_15[1].d == 1)
        (**rdi_15)(rdi_15)
        int32_t temp10_1 = *(rdi_15 + 0xc)
        *(rdi_15 + 0xc) -= 1
        
        if (temp10_1 == 1)
            (*rdi_15)[1](rdi_15, 1)

if (rax_203 != 0)
    rax_203[1].d -= 1
    
    if (rax_203[1].d == 1)
        (**rax_203)(rax_203)
        int32_t temp13_1 = *(rax_203 + 0xc)
        *(rax_203 + 0xc) -= 1
        
        if (temp13_1 == 1)
            (*rax_203)[1](rax_203, 1)

int64_t result = sub_1405ade00(&var_60)
__security_check_cookie(rax_1 ^ &var_c8)
return result
