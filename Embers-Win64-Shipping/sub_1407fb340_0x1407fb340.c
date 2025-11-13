// 函数: sub_1407fb340
// 地址: 0x1407fb340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r14 = (data_143ce2b88.q).d
int32_t rsi = arg2[1].d
uint64_t var_48
int32_t var_40
int32_t var_3c
uint64_t var_38
int32_t var_30
int32_t var_2c
uint64_t r14_2
int32_t r15

if (r14 s> 1)
    int32_t r15_1 = rsi - 1
    
    if (rsi == 0)
        r15_1 = 0
    
    int32_t rax_1
    
    if (r14 == 0)
        rax_1 = 1
    
    if (r14 != 0 || r15_1 == 0)
        rax_1 = 0
    
    int64_t rsi_1 = data_143ce2b80
    int32_t rcx_2 = rax_1 + r15_1
    var_48 = 0
    
    if (r14 != 0 || rcx_2 != 0)
        sub_1405a4c70(&var_48, rcx_2 + r14, 0)
        memcpy(var_48, rsi_1, r14 * 2)
    else
        var_3c = 0
    
    sub_140a20ba0(&var_48, *arg2, r15_1)
    r14_2 = var_48
    rsi = r14
    r15 = var_3c
    var_48 = 0
    var_40.q = 0
else
    int64_t r14_1 = *arg2
    var_38 = 0
    var_30 = rsi
    
    if (rsi != 0)
        sub_1405a4c70(&var_38, rsi, 0)
        r14_2 = var_38
        memcpy(r14_2, r14_1, rsi * 2)
        r15 = var_2c
        rsi = var_30
    else
        r15 = 0
        r14_2 = 0

if (arg1 != &var_38)
    int64_t rcx_6 = *arg1
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    *arg1 = r14_2
    arg1[1].d = rsi
    *(arg1 + 0xc) = r15
else if (r14_2 != 0)
    sub_140a74f90(r14_2)

int32_t r14_3 = (data_143ce2b98.q).d
int32_t rsi_2 = arg2[1].d
int32_t r12
uint64_t r15_2

if (r14_3 s> 1)
    int32_t r15_3 = rsi_2 - 1
    
    if (rsi_2 == 0)
        r15_3 = 0
    
    int32_t rax_2
    
    if (r14_3 == 0)
        rax_2 = 1
    
    if (r14_3 != 0 || r15_3 == 0)
        rax_2 = 0
    
    int64_t rsi_3 = data_143ce2b90
    int32_t rcx_10 = rax_2 + r15_3
    var_48 = 0
    
    if (r14_3 != 0 || rcx_10 != 0)
        sub_1405a4c70(&var_48, r14_3 + rcx_10, 0)
        memcpy(var_48, rsi_3, r14_3 * 2)
    else
        var_3c = 0
    
    sub_140a20ba0(&var_48, *arg2, r15_3)
    r15_2 = var_48
    rsi_2 = r14_3
    r12 = var_3c
    var_48 = 0
    var_40.q = 0
else
    int64_t r14_4 = *arg2
    var_38 = 0
    var_30 = rsi_2
    
    if (rsi_2 != 0)
        sub_1405a4c70(&var_38, rsi_2, 0)
        r15_2 = var_38
        memcpy(r15_2, r14_4, rsi_2 * 2)
        r12 = var_2c
        rsi_2 = var_30
    else
        r12 = 0
        r15_2 = 0

if (&arg1[2] != &var_38)
    int64_t rcx_14 = arg1[2]
    
    if (rcx_14 != 0)
        sub_140a74f90(rcx_14)
    
    arg1[2] = r15_2
    arg1[3].d = rsi_2
    *(arg1 + 0x1c) = r12
else if (r15_2 != 0)
    sub_140a74f90(r15_2)

int32_t r14_6 = (data_143ce2ba8.q).d
int32_t rsi_4 = arg2[1].d
int32_t r12_1
uint64_t r15_4

if (r14_6 s> 1)
    int32_t r15_5 = rsi_4 - 1
    
    if (rsi_4 == 0)
        r15_5 = 0
    
    int32_t rax_3
    
    if (r14_6 == 0)
        rax_3 = r14_6 + 1
    
    if (r14_6 != 0 || r15_5 == 0)
        rax_3 = 0
    
    int64_t rsi_5 = data_143ce2ba0
    int32_t rcx_18 = rax_3 + r15_5
    var_48 = 0
    
    if (r14_6 != 0 || rcx_18 != 0)
        sub_1405a4c70(&var_48, r14_6 + rcx_18, 0)
        memcpy(var_48, rsi_5, r14_6 * 2)
    else
        var_3c = 0
    
    sub_140a20ba0(&var_48, *arg2, r15_5)
    r15_4 = var_48
    rsi_4 = r14_6
    r12_1 = var_3c
    var_48 = 0
    var_40.q = 0
else
    int64_t r14_7 = *arg2
    var_38 = 0
    var_30 = rsi_4
    
    if (rsi_4 != 0)
        sub_1405a4c70(&var_38, rsi_4, 0)
        r15_4 = var_38
        memcpy(r15_4, r14_7, rsi_4 * 2)
        r12_1 = var_2c
        rsi_4 = var_30
    else
        r12_1 = 0
        r15_4 = 0

if (&arg1[4] != &var_38)
    int64_t rcx_22 = arg1[4]
    
    if (rcx_22 != 0)
        sub_140a74f90(rcx_22)
    
    arg1[4] = r15_4
    arg1[5].d = rsi_4
    *(arg1 + 0x2c) = r12_1
else if (r15_4 != 0)
    sub_140a74f90(r15_4)

int32_t r14_9 = (data_143ce2bb8.q).d
int32_t rsi_6 = arg2[1].d
int32_t r12_2
uint64_t r15_6

if (r14_9 s> 1)
    int32_t r15_7 = rsi_6 - 1
    
    if (rsi_6 == 0)
        r15_7 = 0
    
    int32_t rax_4
    
    if (r14_9 == 0)
        rax_4 = r14_9 + 1
    
    if (r14_9 != 0 || r15_7 == 0)
        rax_4 = 0
    
    int64_t rsi_7 = data_143ce2bb0
    int32_t rcx_26 = r15_7 + rax_4
    var_48 = 0
    
    if (r14_9 != 0 || rcx_26 != 0)
        sub_1405a4c70(&var_48, r14_9 + rcx_26, 0)
        memcpy(var_48, rsi_7, r14_9 * 2)
    else
        var_3c = 0
    
    sub_140a20ba0(&var_48, *arg2, r15_7)
    r15_6 = var_48
    rsi_6 = r14_9
    r12_2 = var_3c
    var_48 = 0
    var_40.q = 0
else
    int64_t r14_10 = *arg2
    var_38 = 0
    var_30 = rsi_6
    
    if (rsi_6 != 0)
        sub_1405a4c70(&var_38, rsi_6, 0)
        r15_6 = var_38
        memcpy(r15_6, r14_10, rsi_6 * 2)
        r12_2 = var_2c
        rsi_6 = var_30
    else
        r12_2 = 0
        r15_6 = 0

if (&arg1[6] != &var_38)
    int64_t rcx_30 = arg1[6]
    
    if (rcx_30 != 0)
        sub_140a74f90(rcx_30)
    
    arg1[6] = r15_6
    arg1[7].d = rsi_6
    *(arg1 + 0x3c) = r12_2
else if (r15_6 != 0)
    sub_140a74f90(r15_6)

int32_t r14_12 = (data_143ce2bc8.q).d
int32_t rsi_8 = arg2[1].d
int32_t r12_3
uint64_t r15_8

if (r14_12 s> 1)
    int32_t r15_9 = rsi_8 - 1
    
    if (rsi_8 == 0)
        r15_9 = 0
    
    int32_t rax_5
    
    if (r14_12 == 0)
        rax_5 = r14_12 + 1
    
    if (r14_12 != 0 || r15_9 == 0)
        rax_5 = 0
    
    int64_t rsi_9 = data_143ce2bc0
    int32_t rcx_34 = r15_9 + rax_5
    var_48 = 0
    
    if (r14_12 != 0 || rcx_34 != 0)
        sub_1405a4c70(&var_48, r14_12 + rcx_34, 0)
        memcpy(var_48, rsi_9, r14_12 * 2)
    else
        var_3c = 0
    
    sub_140a20ba0(&var_48, *arg2, r15_9)
    r15_8 = var_48
    rsi_8 = r14_12
    r12_3 = var_3c
    var_48 = 0
    var_40.q = 0
else
    int64_t r14_13 = *arg2
    var_38 = 0
    var_30 = rsi_8
    
    if (rsi_8 != 0)
        sub_1405a4c70(&var_38, rsi_8, 0)
        r15_8 = var_38
        memcpy(r15_8, r14_13, rsi_8 * 2)
        r12_3 = var_2c
        rsi_8 = var_30
    else
        r12_3 = 0
        r15_8 = 0

if (&arg1[8] != &var_38)
    int64_t rcx_38 = arg1[8]
    
    if (rcx_38 != 0)
        sub_140a74f90(rcx_38)
    
    arg1[8] = r15_8
    arg1[9].d = rsi_8
    *(arg1 + 0x4c) = r12_3
else if (r15_8 != 0)
    sub_140a74f90(r15_8)

int32_t r14_15 = (data_143ce2bd8.q).d
int32_t rsi_10 = arg2[1].d
int32_t r12_4
uint64_t r15_10

if (r14_15 s> 1)
    int32_t r15_11 = rsi_10 - 1
    
    if (rsi_10 == 0)
        r15_11 = 0
    
    int32_t rax_6
    
    if (r14_15 == 0)
        rax_6 = r14_15 + 1
    
    if (r14_15 != 0 || r15_11 == 0)
        rax_6 = 0
    
    int64_t rsi_11 = data_143ce2bd0
    int32_t rcx_42 = rax_6 + r15_11
    var_48 = 0
    
    if (r14_15 != 0 || rcx_42 != 0)
        sub_1405a4c70(&var_48, rcx_42 + r14_15, 0)
        memcpy(var_48, rsi_11, r14_15 * 2)
    else
        var_3c = 0
    
    sub_140a20ba0(&var_48, *arg2, r15_11)
    r15_10 = var_48
    rsi_10 = r14_15
    r12_4 = var_3c
    var_48 = 0
    var_40.q = 0
else
    int64_t r14_16 = *arg2
    var_38 = 0
    var_30 = rsi_10
    
    if (rsi_10 != 0)
        sub_1405a4c70(&var_38, rsi_10, 0)
        r15_10 = var_38
        memcpy(r15_10, r14_16, rsi_10 * 2)
        r12_4 = var_2c
        rsi_10 = var_30
    else
        r12_4 = 0
        r15_10 = 0

if (&arg1[0xa] != &var_38)
    int64_t rcx_46 = arg1[0xa]
    
    if (rcx_46 != 0)
        sub_140a74f90(rcx_46)
    
    arg1[0xa] = r15_10
    arg1[0xb].d = rsi_10
    *(arg1 + 0x5c) = r12_4
else if (r15_10 != 0)
    sub_140a74f90(r15_10)

int32_t r14_18 = (data_143ce2be8.q).d
int32_t rsi_12 = arg2[1].d
int32_t r12_5
uint64_t r15_12

if (r14_18 s> 1)
    int32_t r15_13 = rsi_12 - 1
    
    if (rsi_12 == 0)
        r15_13 = 0
    
    int32_t rax_7
    
    if (r14_18 == 0)
        rax_7 = r14_18 + 1
    
    if (r14_18 != 0 || r15_13 == 0)
        rax_7 = 0
    
    int64_t rsi_13 = data_143ce2be0
    int32_t rcx_50 = rax_7 + r15_13
    var_48 = 0
    
    if (r14_18 != 0 || rcx_50 != 0)
        sub_1405a4c70(&var_48, rcx_50 + r14_18, 0)
        memcpy(var_48, rsi_13, r14_18 * 2)
    else
        var_3c = 0
    
    sub_140a20ba0(&var_48, *arg2, r15_13)
    r15_12 = var_48
    rsi_12 = r14_18
    r12_5 = var_3c
    var_48 = 0
    var_40.q = 0
else
    int64_t r14_19 = *arg2
    var_38 = 0
    var_30 = rsi_12
    
    if (rsi_12 != 0)
        sub_1405a4c70(&var_38, rsi_12, 0)
        r15_12 = var_38
        memcpy(r15_12, r14_19, rsi_12 * 2)
        r12_5 = var_2c
        rsi_12 = var_30
    else
        r12_5 = 0
        r15_12 = 0

if (&arg1[0xc] != &var_38)
    int64_t rcx_54 = arg1[0xc]
    
    if (rcx_54 != 0)
        sub_140a74f90(rcx_54)
    
    arg1[0xc] = r15_12
    arg1[0xd].d = rsi_12
    *(arg1 + 0x6c) = r12_5
else if (r15_12 != 0)
    sub_140a74f90(r15_12)

int32_t r14_21 = (data_143ce2bf8.q).d
int32_t rsi_14 = arg2[1].d
int32_t r12_6
uint64_t r15_14

if (r14_21 s> 1)
    int32_t r15_15 = rsi_14 - 1
    
    if (rsi_14 == 0)
        r15_15 = 0
    
    int32_t rax_8
    
    if (r14_21 == 0)
        rax_8 = r14_21 + 1
    
    if (r14_21 != 0 || r15_15 == 0)
        rax_8 = 0
    
    int64_t rsi_15 = data_143ce2bf0
    int32_t rcx_58 = rax_8 + r15_15
    var_48 = 0
    
    if (r14_21 != 0 || rcx_58 != 0)
        sub_1405a4c70(&var_48, rcx_58 + r14_21, 0)
        memcpy(var_48, rsi_15, r14_21 * 2)
    else
        var_3c = 0
    
    sub_140a20ba0(&var_48, *arg2, r15_15)
    r15_14 = var_48
    rsi_14 = r14_21
    r12_6 = var_3c
    var_48 = 0
    var_40.q = 0
else
    int64_t r14_22 = *arg2
    var_38 = 0
    var_30 = rsi_14
    
    if (rsi_14 != 0)
        sub_1405a4c70(&var_38, rsi_14, 0)
        r15_14 = var_38
        memcpy(r15_14, r14_22, rsi_14 * 2)
        r12_6 = var_2c
        rsi_14 = var_30
    else
        r12_6 = 0
        r15_14 = 0

if (&arg1[0xe] != &var_38)
    int64_t rcx_62 = arg1[0xe]
    
    if (rcx_62 != 0)
        sub_140a74f90(rcx_62)
    
    arg1[0xe] = r15_14
    arg1[0xf].d = rsi_14
    *(arg1 + 0x7c) = r12_6
else if (r15_14 != 0)
    sub_140a74f90(r15_14)

int32_t r14_24 = (data_143ce2c08.q).d
int32_t rsi_16 = arg2[1].d
int32_t r12_7
uint64_t r15_16

if (r14_24 s> 1)
    int32_t r15_17 = rsi_16 - 1
    
    if (rsi_16 == 0)
        r15_17 = 0
    
    int32_t rax_9
    
    if (r14_24 == 0)
        rax_9 = r14_24 + 1
    
    if (r14_24 != 0 || r15_17 == 0)
        rax_9 = 0
    
    int64_t rsi_17 = data_143ce2c00
    int32_t rcx_66 = r15_17 + rax_9
    var_48 = 0
    
    if (r14_24 != 0 || rcx_66 != 0)
        sub_1405a4c70(&var_48, rcx_66 + r14_24, 0)
        memcpy(var_48, rsi_17, r14_24 * 2)
    else
        var_3c = 0
    
    sub_140a20ba0(&var_48, *arg2, r15_17)
    r15_16 = var_48
    rsi_16 = r14_24
    r12_7 = var_3c
    var_48 = 0
    var_40.q = 0
else
    int64_t r14_25 = *arg2
    var_38 = 0
    var_30 = rsi_16
    
    if (rsi_16 != 0)
        sub_1405a4c70(&var_38, rsi_16, 0)
        r15_16 = var_38
        memcpy(r15_16, r14_25, rsi_16 * 2)
        r12_7 = var_2c
        rsi_16 = var_30
    else
        r12_7 = 0
        r15_16 = 0

if (&arg1[0x10] != &var_38)
    int64_t rcx_70 = arg1[0x10]
    
    if (rcx_70 != 0)
        sub_140a74f90(rcx_70)
    
    arg1[0x10] = r15_16
    arg1[0x11].d = rsi_16
    *(arg1 + 0x8c) = r12_7
else if (r15_16 != 0)
    sub_140a74f90(r15_16)

int32_t rcx_72 = (data_143ce2c18.q).d
int32_t r12_8
uint64_t r14_27
int32_t r15_18

if (rcx_72 s> 1)
    int32_t rax_10 = arg2[1].d
    int32_t rsi_18 = rax_10 - 1
    
    if (rax_10 == 0)
        rsi_18 = 0
    
    int32_t rax_11
    
    if (rcx_72 == 0)
        rax_11 = rcx_72 + 1
    
    if (rcx_72 != 0 || rsi_18 == 0)
        rax_11 = 0
    
    int64_t rdx_46 = data_143ce2c10
    var_48 = 0
    sub_140596860(&var_48, rdx_46, rcx_72, 0, rax_11 + rsi_18)
    sub_140a20ba0(&var_48, *arg2, rsi_18)
    r14_27 = var_48
    r12_8 = var_40
    r15_18 = var_3c
    var_48 = 0
    var_40.q = 0
else
    sub_140596d10(&var_38, arg2)
    r15_18 = var_2c
    r12_8 = var_30
    r14_27 = var_38

if (&arg1[0x12] != &var_38)
    uint64_t rcx_76 = arg1[0x12]
    
    if (rcx_76 != 0)
        sub_140a74f90(rcx_76)
    
    arg1[0x12] = r14_27
    arg1[0x13].d = r12_8
    *(arg1 + 0x9c) = r15_18
else if (r14_27 != 0)
    sub_140a74f90(r14_27)

int32_t rcx_78 = (data_143ce2c28.q).d
int32_t r12_9
uint64_t r14_28
int32_t r15_19

if (rcx_78 s> 1)
    int32_t rax_13 = arg2[1].d
    int32_t rsi_20 = rax_13 - 1
    
    if (rax_13 == 0)
        rsi_20 = 0
    
    int32_t rax_14
    
    if (rcx_78 == 0)
        rax_14 = rcx_78 + 1
    
    if (rcx_78 != 0 || rsi_20 == 0)
        rax_14 = 0
    
    int64_t rdx_49 = data_143ce2c20
    var_48 = 0
    sub_140596860(&var_48, rdx_49, rcx_78, 0, rax_14 + rsi_20)
    sub_140a20ba0(&var_48, *arg2, rsi_20)
    r14_28 = var_48
    r12_9 = var_40
    r15_19 = var_3c
    var_48 = 0
    var_40.q = 0
else
    sub_140596d10(&var_38, arg2)
    r15_19 = var_2c
    r12_9 = var_30
    r14_28 = var_38

if (&arg1[0x14] != &var_38)
    int64_t rcx_82 = arg1[0x14]
    
    if (rcx_82 != 0)
        sub_140a74f90(rcx_82)
    
    arg1[0x14] = r14_28
    arg1[0x15].d = r12_9
    *(arg1 + 0xac) = r15_19
else if (r14_28 != 0)
    sub_140a74f90(r14_28)

int32_t rcx_84 = (data_143ce2c38.q).d
int32_t r12_10
uint64_t r14_29
int32_t r15_20

if (rcx_84 s> 1)
    int32_t rax_16 = arg2[1].d
    int32_t rsi_22 = rax_16 - 1
    
    if (rax_16 == 0)
        rsi_22 = 0
    
    int32_t rax_17
    
    if (rcx_84 == 0)
        rax_17 = rcx_84 + 1
    
    if (rcx_84 != 0 || rsi_22 == 0)
        rax_17 = 0
    
    int64_t rdx_52 = data_143ce2c30
    var_48 = 0
    sub_140596860(&var_48, rdx_52, rcx_84, 0, rax_17 + rsi_22)
    sub_140a20ba0(&var_48, *arg2, rsi_22)
    r14_29 = var_48
    r12_10 = var_40
    r15_20 = var_3c
    var_48 = 0
    var_40.q = 0
else
    sub_140596d10(&var_38, arg2)
    r15_20 = var_2c
    r12_10 = var_30
    r14_29 = var_38

if (&arg1[0x16] != &var_38)
    int64_t rcx_88 = arg1[0x16]
    
    if (rcx_88 != 0)
        sub_140a74f90(rcx_88)
    
    arg1[0x16] = r14_29
    arg1[0x17].d = r12_10
    *(arg1 + 0xbc) = r15_20
else if (r14_29 != 0)
    sub_140a74f90(r14_29)

int32_t rcx_90 = (data_143ce2c48.q).d
int32_t r12_11
uint64_t r14_30
int32_t r15_21

if (rcx_90 s> 1)
    int32_t rax_19 = arg2[1].d
    int32_t rsi_24 = rax_19 - 1
    
    if (rax_19 == 0)
        rsi_24 = 0
    
    int32_t rax_20
    
    if (rcx_90 == 0)
        rax_20 = rcx_90 + 1
    
    if (rcx_90 != 0 || rsi_24 == 0)
        rax_20 = 0
    
    int64_t rdx_55 = data_143ce2c40
    var_48 = 0
    sub_140596860(&var_48, rdx_55, rcx_90, 0, rax_20 + rsi_24)
    sub_140a20ba0(&var_48, *arg2, rsi_24)
    r14_30 = var_48
    r12_11 = var_40
    r15_21 = var_3c
    var_48 = 0
    var_40.q = 0
else
    sub_140596d10(&var_38, arg2)
    r15_21 = var_2c
    r12_11 = var_30
    r14_30 = var_38

if (&arg1[0x18] != &var_38)
    int64_t rcx_94 = arg1[0x18]
    
    if (rcx_94 != 0)
        sub_140a74f90(rcx_94)
    
    arg1[0x18] = r14_30
    arg1[0x19].d = r12_11
    *(arg1 + 0xcc) = r15_21
else if (r14_30 != 0)
    sub_140a74f90(r14_30)

int32_t rcx_96 = (data_143ce2c58.q).d
int32_t r12_12
uint64_t r14_31
int32_t r15_22

if (rcx_96 s> 1)
    int32_t rax_22 = arg2[1].d
    int32_t rsi_26 = rax_22 - 1
    
    if (rax_22 == 0)
        rsi_26 = 0
    
    int32_t rax_23
    
    if (rcx_96 == 0)
        rax_23 = rcx_96 + 1
    
    if (rcx_96 != 0 || rsi_26 == 0)
        rax_23 = 0
    
    int64_t rdx_58 = data_143ce2c50
    var_48 = 0
    sub_140596860(&var_48, rdx_58, rcx_96, 0, rax_23 + rsi_26)
    sub_140a20ba0(&var_48, *arg2, rsi_26)
    r14_31 = var_48
    r12_12 = var_40
    r15_22 = var_3c
    var_48 = 0
    var_40.q = 0
else
    sub_140596d10(&var_38, arg2)
    r15_22 = var_2c
    r12_12 = var_30
    r14_31 = var_38

if (&arg1[0x1a] != &var_38)
    int64_t rcx_100 = arg1[0x1a]
    
    if (rcx_100 != 0)
        sub_140a74f90(rcx_100)
    
    arg1[0x1a] = r14_31
    arg1[0x1b].d = r12_12
    *(arg1 + 0xdc) = r15_22
else if (r14_31 != 0)
    sub_140a74f90(r14_31)

int32_t rcx_102 = (data_143ce2c68.q).d
int32_t r12_13
uint64_t r14_32
int32_t r15_23

if (rcx_102 s> 1)
    int32_t rax_25 = arg2[1].d
    int32_t rsi_28 = rax_25 - 1
    
    if (rax_25 == 0)
        rsi_28 = 0
    
    int32_t rax_26
    
    if (rcx_102 == 0)
        rax_26 = rcx_102 + 1
    
    if (rcx_102 != 0 || rsi_28 == 0)
        rax_26 = 0
    
    int64_t rdx_61 = data_143ce2c60
    var_48 = 0
    sub_140596860(&var_48, rdx_61, rcx_102, 0, rax_26 + rsi_28)
    sub_140a20ba0(&var_48, *arg2, rsi_28)
    r14_32 = var_48
    r12_13 = var_40
    r15_23 = var_3c
    var_48 = 0
    var_40.q = 0
else
    sub_140596d10(&var_38, arg2)
    r15_23 = var_2c
    r12_13 = var_30
    r14_32 = var_38

if (&arg1[0x1c] != &var_38)
    int64_t rcx_106 = arg1[0x1c]
    
    if (rcx_106 != 0)
        sub_140a74f90(rcx_106)
    
    arg1[0x1c] = r14_32
    arg1[0x1d].d = r12_13
    *(arg1 + 0xec) = r15_23
else if (r14_32 != 0)
    sub_140a74f90(r14_32)

int32_t rcx_108 = (data_143ce2c78.q).d
int32_t rsi_30
uint64_t rdi_1
int32_t r14_33

if (rcx_108 s> 1)
    int32_t rax_28 = arg2[1].d
    int32_t rsi_31 = rax_28 - 1
    
    if (rax_28 == 0)
        rsi_31 = 0
    
    int32_t rax_29
    
    if (rcx_108 == 0)
        rax_29 = rcx_108 + 1
    
    if (rcx_108 != 0 || rsi_31 == 0)
        rax_29 = 0
    
    int64_t rdx_64 = data_143ce2c70
    var_48 = 0
    sub_140596860(&var_48, rdx_64, rcx_108, 0, rax_29 + rsi_31)
    sub_140a20ba0(&var_48, *arg2, rsi_31)
    rdi_1 = var_48
    r14_33 = var_40
    rsi_30 = var_3c
    var_48 = 0
    var_40.q = 0
else
    sub_140596d10(&var_38, arg2)
    rsi_30 = var_2c
    r14_33 = var_30
    rdi_1 = var_38

uint64_t* result = &var_38

if (&arg1[0x1e] == &var_38)
    if (rdi_1 == 0)
        return result
    
    return sub_140a74f90(rdi_1)

int64_t rcx_112 = arg1[0x1e]

if (rcx_112 != 0)
    result = sub_140a74f90(rcx_112)

arg1[0x1e] = rdi_1
arg1[0x1f].d = r14_33
*(arg1 + 0xfc) = rsi_30
return result
