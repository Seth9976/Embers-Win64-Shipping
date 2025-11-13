// 函数: sub_1407a6260
// 地址: 0x1407a6260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = arg2[1].d
int32_t r14 = (data_143ce07e8.q).d
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
    
    int64_t rsi_1 = data_143ce07e0
    int32_t rcx_2 = r15_1 + rax_1
    var_48 = 0
    
    if (r14 != 0 || rcx_2 != 0)
        sub_1405a4c70(&var_48, r14 + rcx_2, 0)
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

int32_t r14_3 = (data_143ce07f8.q).d
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
    
    int64_t rsi_3 = data_143ce07f0
    int32_t rcx_10 = r15_3 + rax_2
    var_48 = 0
    
    if (r14_3 != 0 || rcx_10 != 0)
        sub_1405a4c70(&var_48, rcx_10 + r14_3, 0)
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

int32_t r14_6 = (data_143ce0808.q).d
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
    
    int64_t rsi_5 = data_143ce0800
    int32_t rcx_18 = r15_5 + rax_3
    var_48 = 0
    
    if (r14_6 != 0 || rcx_18 != 0)
        sub_1405a4c70(&var_48, rcx_18 + r14_6, 0)
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

int32_t r14_9 = (data_143ce0818.q).d
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
    
    int64_t rsi_7 = data_143ce0810
    int32_t rcx_26 = r15_7 + rax_4
    var_48 = 0
    
    if (r14_9 != 0 || rcx_26 != 0)
        sub_1405a4c70(&var_48, rcx_26 + r14_9, 0)
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

int32_t r14_12 = (data_143ce0828.q).d
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
    
    int64_t rsi_9 = data_143ce0820
    int32_t rcx_34 = r15_9 + rax_5
    var_48 = 0
    
    if (r14_12 != 0 || rcx_34 != 0)
        sub_1405a4c70(&var_48, rcx_34 + r14_12, 0)
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

int32_t r14_15 = (data_143ce0838.q).d
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
    
    int64_t rsi_11 = data_143ce0830
    int32_t rcx_42 = r15_11 + rax_6
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

int32_t r14_18 = (data_143ce0848.q).d
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
    
    int64_t rsi_13 = data_143ce0840
    int32_t rcx_50 = rax_7 + r15_13
    var_48 = 0
    
    if (r14_18 != 0 || rcx_50 != 0)
        sub_1405a4c70(&var_48, r14_18 + rcx_50, 0)
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

int32_t r14_21 = (data_143ce0858.q).d
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
    
    int64_t rsi_15 = data_143ce0850
    int32_t rcx_58 = r15_15 + rax_8
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

int32_t r14_24 = (data_143ce0868.q).d
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
    
    int64_t rsi_17 = data_143ce0860
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

int32_t rcx_72 = (data_143ce0878.q).d
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
    
    int64_t rdx_46 = data_143ce0870
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
    int64_t rcx_76 = arg1[0x12]
    
    if (rcx_76 != 0)
        sub_140a74f90(rcx_76)
    
    arg1[0x12] = r14_27
    arg1[0x13].d = r12_8
    *(arg1 + 0x9c) = r15_18
else if (r14_27 != 0)
    sub_140a74f90(r14_27)

int32_t rcx_78 = (data_143ce0888.q).d
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
    
    int64_t rdx_49 = data_143ce0880
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

int32_t rcx_84 = (data_143ce0898.q).d
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
    
    int64_t rdx_52 = data_143ce0890
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

int32_t rcx_90 = (data_143ce08a8.q).d
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
    
    int64_t rdx_55 = data_143ce08a0
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

int32_t rcx_96 = (data_143ce08b8.q).d
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
    
    int64_t rdx_58 = data_143ce08b0
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

int32_t rcx_102 = (data_143ce08c8.q).d
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
    
    int64_t rdx_61 = data_143ce08c0
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

int32_t rcx_108 = (data_143ce08d8.q).d
int32_t r12_14
uint64_t r14_33
int32_t r15_24

if (rcx_108 s> 1)
    int32_t rax_28 = arg2[1].d
    int32_t rsi_30 = rax_28 - 1
    
    if (rax_28 == 0)
        rsi_30 = 0
    
    int32_t rax_29
    
    if (rcx_108 == 0)
        rax_29 = rcx_108 + 1
    
    if (rcx_108 != 0 || rsi_30 == 0)
        rax_29 = 0
    
    int64_t rdx_64 = data_143ce08d0
    var_48 = 0
    sub_140596860(&var_48, rdx_64, rcx_108, 0, rax_29 + rsi_30)
    sub_140a20ba0(&var_48, *arg2, rsi_30)
    r14_33 = var_48
    r12_14 = var_40
    r15_24 = var_3c
    var_48 = 0
    var_40.q = 0
else
    sub_140596d10(&var_38, arg2)
    r15_24 = var_2c
    r12_14 = var_30
    r14_33 = var_38

if (&arg1[0x1e] != &var_38)
    int64_t rcx_112 = arg1[0x1e]
    
    if (rcx_112 != 0)
        sub_140a74f90(rcx_112)
    
    arg1[0x1e] = r14_33
    arg1[0x1f].d = r12_14
    *(arg1 + 0xfc) = r15_24
else if (r14_33 != 0)
    sub_140a74f90(r14_33)

int32_t rcx_114 = (data_143ce08e8.q).d
int32_t r12_15
uint64_t r14_34
int32_t r15_25

if (rcx_114 s> 1)
    int32_t rax_31 = arg2[1].d
    int32_t rsi_32 = rax_31 - 1
    
    if (rax_31 == 0)
        rsi_32 = 0
    
    int32_t rax_32
    
    if (rcx_114 == 0)
        rax_32 = rcx_114 + 1
    
    if (rcx_114 != 0 || rsi_32 == 0)
        rax_32 = 0
    
    int64_t rdx_67 = data_143ce08e0
    var_48 = 0
    sub_140596860(&var_48, rdx_67, rcx_114, 0, rax_32 + rsi_32)
    sub_140a20ba0(&var_48, *arg2, rsi_32)
    r14_34 = var_48
    r12_15 = var_40
    r15_25 = var_3c
    var_48 = 0
    var_40.q = 0
else
    sub_140596d10(&var_38, arg2)
    r15_25 = var_2c
    r12_15 = var_30
    r14_34 = var_38

if (&arg1[0x20] != &var_38)
    int64_t rcx_118 = arg1[0x20]
    
    if (rcx_118 != 0)
        sub_140a74f90(rcx_118)
    
    arg1[0x20] = r14_34
    arg1[0x21].d = r12_15
    *(arg1 + 0x10c) = r15_25
else if (r14_34 != 0)
    sub_140a74f90(r14_34)

int32_t rcx_120 = (data_143ce08f8.q).d
int32_t r12_16
uint64_t r14_35
int32_t r15_26

if (rcx_120 s> 1)
    int32_t rax_34 = arg2[1].d
    int32_t rsi_34 = rax_34 - 1
    
    if (rax_34 == 0)
        rsi_34 = 0
    
    int32_t rax_35
    
    if (rcx_120 == 0)
        rax_35 = rcx_120 + 1
    
    if (rcx_120 != 0 || rsi_34 == 0)
        rax_35 = 0
    
    int64_t rdx_70 = data_143ce08f0
    var_48 = 0
    sub_140596860(&var_48, rdx_70, rcx_120, 0, rax_35 + rsi_34)
    sub_140a20ba0(&var_48, *arg2, rsi_34)
    r14_35 = var_48
    r12_16 = var_40
    r15_26 = var_3c
    var_48 = 0
    var_40.q = 0
else
    sub_140596d10(&var_38, arg2)
    r15_26 = var_2c
    r12_16 = var_30
    r14_35 = var_38

if (&arg1[0x22] != &var_38)
    int64_t rcx_124 = arg1[0x22]
    
    if (rcx_124 != 0)
        sub_140a74f90(rcx_124)
    
    arg1[0x22] = r14_35
    arg1[0x23].d = r12_16
    *(arg1 + 0x11c) = r15_26
else if (r14_35 != 0)
    sub_140a74f90(r14_35)

int32_t rcx_126 = (data_143ce0908.q).d
int32_t r12_17
uint64_t r14_36
int32_t r15_27

if (rcx_126 s> 1)
    int32_t rax_37 = arg2[1].d
    int32_t rsi_36 = rax_37 - 1
    
    if (rax_37 == 0)
        rsi_36 = 0
    
    int32_t rax_38
    
    if (rcx_126 == 0)
        rax_38 = rcx_126 + 1
    
    if (rcx_126 != 0 || rsi_36 == 0)
        rax_38 = 0
    
    int64_t rdx_73 = data_143ce0900
    var_48 = 0
    sub_140596860(&var_48, rdx_73, rcx_126, 0, rax_38 + rsi_36)
    sub_140a20ba0(&var_48, *arg2, rsi_36)
    r14_36 = var_48
    r12_17 = var_40
    r15_27 = var_3c
    var_48 = 0
    var_40.q = 0
else
    sub_140596d10(&var_38, arg2)
    r15_27 = var_2c
    r12_17 = var_30
    r14_36 = var_38

if (&arg1[0x24] != &var_38)
    int64_t rcx_130 = arg1[0x24]
    
    if (rcx_130 != 0)
        sub_140a74f90(rcx_130)
    
    arg1[0x24] = r14_36
    arg1[0x25].d = r12_17
    *(arg1 + 0x12c) = r15_27
else if (r14_36 != 0)
    sub_140a74f90(r14_36)

int32_t rcx_132 = (data_143ce0918.q).d
int32_t r12_18
uint64_t r14_37
int32_t r15_28

if (rcx_132 s> 1)
    int32_t rax_40 = arg2[1].d
    int32_t rsi_38 = rax_40 - 1
    
    if (rax_40 == 0)
        rsi_38 = 0
    
    int32_t rax_41
    
    if (rcx_132 == 0)
        rax_41 = rcx_132 + 1
    
    if (rcx_132 != 0 || rsi_38 == 0)
        rax_41 = 0
    
    int64_t rdx_76 = data_143ce0910
    var_48 = 0
    sub_140596860(&var_48, rdx_76, rcx_132, 0, rax_41 + rsi_38)
    sub_140a20ba0(&var_48, *arg2, rsi_38)
    r14_37 = var_48
    r12_18 = var_40
    r15_28 = var_3c
    var_48 = 0
    var_40.q = 0
else
    sub_140596d10(&var_38, arg2)
    r15_28 = var_2c
    r12_18 = var_30
    r14_37 = var_38

if (&arg1[0x26] != &var_38)
    int64_t rcx_136 = arg1[0x26]
    
    if (rcx_136 != 0)
        sub_140a74f90(rcx_136)
    
    arg1[0x26] = r14_37
    arg1[0x27].d = r12_18
    *(arg1 + 0x13c) = r15_28
else if (r14_37 != 0)
    sub_140a74f90(r14_37)

int32_t rcx_138 = (data_143ce0928.q).d
int32_t r12_19
uint64_t r14_38
int32_t r15_29

if (rcx_138 s> 1)
    int32_t rax_43 = arg2[1].d
    int32_t rsi_40 = rax_43 - 1
    
    if (rax_43 == 0)
        rsi_40 = 0
    
    int32_t rax_44
    
    if (rcx_138 == 0)
        rax_44 = rcx_138 + 1
    
    if (rcx_138 != 0 || rsi_40 == 0)
        rax_44 = 0
    
    int64_t rdx_79 = data_143ce0920
    var_48 = 0
    sub_140596860(&var_48, rdx_79, rcx_138, 0, rax_44 + rsi_40)
    sub_140a20ba0(&var_48, *arg2, rsi_40)
    r14_38 = var_48
    r12_19 = var_40
    r15_29 = var_3c
    var_48 = 0
    var_40.q = 0
else
    sub_140596d10(&var_38, arg2)
    r15_29 = var_2c
    r12_19 = var_30
    r14_38 = var_38

if (&arg1[0x28] != &var_38)
    int64_t rcx_142 = arg1[0x28]
    
    if (rcx_142 != 0)
        sub_140a74f90(rcx_142)
    
    arg1[0x28] = r14_38
    arg1[0x29].d = r12_19
    *(arg1 + 0x14c) = r15_29
else if (r14_38 != 0)
    sub_140a74f90(r14_38)

int32_t rcx_144 = (data_143ce0938.q).d
int32_t r12_20
uint64_t r14_39
int32_t r15_30

if (rcx_144 s> 1)
    int32_t rax_46 = arg2[1].d
    int32_t rsi_42 = rax_46 - 1
    
    if (rax_46 == 0)
        rsi_42 = 0
    
    int32_t rax_47
    
    if (rcx_144 == 0)
        rax_47 = rcx_144 + 1
    
    if (rcx_144 != 0 || rsi_42 == 0)
        rax_47 = 0
    
    int64_t rdx_82 = data_143ce0930
    var_48 = 0
    sub_140596860(&var_48, rdx_82, rcx_144, 0, rax_47 + rsi_42)
    sub_140a20ba0(&var_48, *arg2, rsi_42)
    r14_39 = var_48
    r12_20 = var_40
    r15_30 = var_3c
    var_48 = 0
    var_40.q = 0
else
    sub_140596d10(&var_38, arg2)
    r15_30 = var_2c
    r12_20 = var_30
    r14_39 = var_38

if (&arg1[0x2a] != &var_38)
    int64_t rcx_148 = arg1[0x2a]
    
    if (rcx_148 != 0)
        sub_140a74f90(rcx_148)
    
    arg1[0x2a] = r14_39
    arg1[0x2b].d = r12_20
    *(arg1 + 0x15c) = r15_30
else if (r14_39 != 0)
    sub_140a74f90(r14_39)

int32_t rcx_150 = (data_143ce0948.q).d
int32_t r12_21
uint64_t r14_40
int32_t r15_31

if (rcx_150 s> 1)
    int32_t rax_49 = arg2[1].d
    int32_t rsi_44 = rax_49 - 1
    
    if (rax_49 == 0)
        rsi_44 = 0
    
    int32_t rax_50
    
    if (rcx_150 == 0)
        rax_50 = rcx_150 + 1
    
    if (rcx_150 != 0 || rsi_44 == 0)
        rax_50 = 0
    
    int64_t rdx_85 = data_143ce0940
    var_48 = 0
    sub_140596860(&var_48, rdx_85, rcx_150, 0, rax_50 + rsi_44)
    sub_140a20ba0(&var_48, *arg2, rsi_44)
    r14_40 = var_48
    r12_21 = var_40
    r15_31 = var_3c
    var_48 = 0
    var_40.q = 0
else
    sub_140596d10(&var_38, arg2)
    r15_31 = var_2c
    r12_21 = var_30
    r14_40 = var_38

if (&arg1[0x2c] != &var_38)
    int64_t rcx_154 = arg1[0x2c]
    
    if (rcx_154 != 0)
        sub_140a74f90(rcx_154)
    
    arg1[0x2c] = r14_40
    arg1[0x2d].d = r12_21
    *(arg1 + 0x16c) = r15_31
else if (r14_40 != 0)
    sub_140a74f90(r14_40)

int32_t rcx_156 = (data_143ce0958.q).d
int32_t r12_22
uint64_t r14_41
int32_t r15_32

if (rcx_156 s> 1)
    int32_t rax_52 = arg2[1].d
    int32_t rsi_46 = rax_52 - 1
    
    if (rax_52 == 0)
        rsi_46 = 0
    
    int32_t rax_53
    
    if (rcx_156 == 0)
        rax_53 = rcx_156 + 1
    
    if (rcx_156 != 0 || rsi_46 == 0)
        rax_53 = 0
    
    int64_t rdx_88 = data_143ce0950
    var_48 = 0
    sub_140596860(&var_48, rdx_88, rcx_156, 0, rax_53 + rsi_46)
    sub_140a20ba0(&var_48, *arg2, rsi_46)
    r14_41 = var_48
    r12_22 = var_40
    r15_32 = var_3c
    var_48 = 0
    var_40.q = 0
else
    sub_140596d10(&var_38, arg2)
    r15_32 = var_2c
    r12_22 = var_30
    r14_41 = var_38

if (&arg1[0x2e] != &var_38)
    int64_t rcx_160 = arg1[0x2e]
    
    if (rcx_160 != 0)
        sub_140a74f90(rcx_160)
    
    arg1[0x2e] = r14_41
    arg1[0x2f].d = r12_22
    *(arg1 + 0x17c) = r15_32
else if (r14_41 != 0)
    sub_140a74f90(r14_41)

int32_t rcx_162 = (data_143ce0968.q).d
int32_t r12_23
uint64_t r14_42
int32_t r15_33

if (rcx_162 s> 1)
    int32_t rax_55 = arg2[1].d
    int32_t rsi_48 = rax_55 - 1
    
    if (rax_55 == 0)
        rsi_48 = 0
    
    int32_t rax_56
    
    if (rcx_162 == 0)
        rax_56 = rcx_162 + 1
    
    if (rcx_162 != 0 || rsi_48 == 0)
        rax_56 = 0
    
    int64_t rdx_91 = data_143ce0960
    var_48 = 0
    sub_140596860(&var_48, rdx_91, rcx_162, 0, rax_56 + rsi_48)
    sub_140a20ba0(&var_48, *arg2, rsi_48)
    r14_42 = var_48
    r12_23 = var_40
    r15_33 = var_3c
    var_48 = 0
    var_40.q = 0
else
    sub_140596d10(&var_38, arg2)
    r15_33 = var_2c
    r12_23 = var_30
    r14_42 = var_38

if (&arg1[0x30] != &var_38)
    int64_t rcx_166 = arg1[0x30]
    
    if (rcx_166 != 0)
        sub_140a74f90(rcx_166)
    
    arg1[0x30] = r14_42
    arg1[0x31].d = r12_23
    *(arg1 + 0x18c) = r15_33
else if (r14_42 != 0)
    sub_140a74f90(r14_42)

int32_t rcx_168 = (data_143ce0978.q).d
int32_t r12_24
uint64_t r14_43
int32_t r15_34

if (rcx_168 s> 1)
    int32_t rax_58 = arg2[1].d
    int32_t rsi_50 = rax_58 - 1
    
    if (rax_58 == 0)
        rsi_50 = 0
    
    int32_t rax_59
    
    if (rcx_168 == 0)
        rax_59 = rcx_168 + 1
    
    if (rcx_168 != 0 || rsi_50 == 0)
        rax_59 = 0
    
    int64_t rdx_94 = data_143ce0970
    var_48 = 0
    sub_140596860(&var_48, rdx_94, rcx_168, 0, rax_59 + rsi_50)
    sub_140a20ba0(&var_48, *arg2, rsi_50)
    r14_43 = var_48
    r12_24 = var_40
    r15_34 = var_3c
    var_48 = 0
    var_40.q = 0
else
    sub_140596d10(&var_38, arg2)
    r15_34 = var_2c
    r12_24 = var_30
    r14_43 = var_38

if (&arg1[0x32] != &var_38)
    int64_t rcx_172 = arg1[0x32]
    
    if (rcx_172 != 0)
        sub_140a74f90(rcx_172)
    
    arg1[0x32] = r14_43
    arg1[0x33].d = r12_24
    *(arg1 + 0x19c) = r15_34
else if (r14_43 != 0)
    sub_140a74f90(r14_43)

int32_t rcx_174 = (data_143ce0988.q).d
int32_t r12_25
uint64_t r14_44
int32_t r15_35

if (rcx_174 s> 1)
    int32_t rax_61 = arg2[1].d
    int32_t rsi_52 = rax_61 - 1
    
    if (rax_61 == 0)
        rsi_52 = 0
    
    int32_t rax_62
    
    if (rcx_174 == 0)
        rax_62 = rcx_174 + 1
    
    if (rcx_174 != 0 || rsi_52 == 0)
        rax_62 = 0
    
    int64_t rdx_97 = data_143ce0980
    var_48 = 0
    sub_140596860(&var_48, rdx_97, rcx_174, 0, rax_62 + rsi_52)
    sub_140a20ba0(&var_48, *arg2, rsi_52)
    r14_44 = var_48
    r12_25 = var_40
    r15_35 = var_3c
    var_48 = 0
    var_40.q = 0
else
    sub_140596d10(&var_38, arg2)
    r15_35 = var_2c
    r12_25 = var_30
    r14_44 = var_38

if (&arg1[0x34] != &var_38)
    int64_t rcx_178 = arg1[0x34]
    
    if (rcx_178 != 0)
        sub_140a74f90(rcx_178)
    
    arg1[0x34] = r14_44
    arg1[0x35].d = r12_25
    *(arg1 + 0x1ac) = r15_35
else if (r14_44 != 0)
    sub_140a74f90(r14_44)

int32_t rcx_180 = (data_143ce0998.q).d

if (rcx_180 s> 1)
    int32_t rax_64 = arg2[1].d
    int32_t rsi_54 = rax_64 - 1
    
    if (rax_64 == 0)
        rsi_54 = 0
    
    int32_t rax_65
    
    if (rcx_180 == 0)
        rax_65 = rcx_180 + 1
    
    if (rcx_180 != 0 || rsi_54 == 0)
        rax_65 = 0
    
    int64_t rdx_100 = data_143ce0990
    var_48 = 0
    sub_140596860(&var_48, rdx_100, rcx_180, 0, rax_65 + rsi_54)
    sub_140a20ba0(&var_48, *arg2, rsi_54)
    var_38 = var_48
    int32_t var_30_1 = var_40
    int32_t var_2c_1 = var_3c
    var_40.q = 0
    var_48 = 0
else
    sub_140596d10(&var_38, arg2)

sub_140597da0(&arg1[0x36], &var_38)
uint64_t rcx_185 = var_38

if (rcx_185 != 0)
    sub_140a74f90(rcx_185)

int32_t rcx_186 = (data_143ce09a8.q).d

if (rcx_186 s> 1)
    int32_t rax_70 = arg2[1].d
    int32_t rsi_55 = rax_70 - 1
    
    if (rax_70 == 0)
        rsi_55 = 0
    
    int32_t rax_71
    
    if (rcx_186 == 0)
        rax_71 = rcx_186 + 1
    
    if (rcx_186 != 0 || rsi_55 == 0)
        rax_71 = 0
    
    int64_t rdx_104 = data_143ce09a0
    var_48 = 0
    sub_140596860(&var_48, rdx_104, rcx_186, 0, rax_71 + rsi_55)
    sub_140a20ba0(&var_48, *arg2, rsi_55)
    var_38 = var_48
    int32_t var_30_2 = var_40
    int32_t var_2c_2 = var_3c
    var_40.q = 0
    var_48 = 0
else
    sub_140596d10(&var_38, arg2)

sub_140597da0(&arg1[0x38], &var_38)
uint64_t rcx_191 = var_38

if (rcx_191 != 0)
    sub_140a74f90(rcx_191)

int32_t rcx_192 = (data_143ce09b8.q).d

if (rcx_192 s> 1)
    int32_t rax_76 = arg2[1].d
    int32_t rsi_56 = rax_76 - 1
    
    if (rax_76 == 0)
        rsi_56 = 0
    
    int32_t rax_77
    
    if (rcx_192 == 0)
        rax_77 = rcx_192 + 1
    
    if (rcx_192 != 0 || rsi_56 == 0)
        rax_77 = 0
    
    int64_t rdx_108 = data_143ce09b0
    var_48 = 0
    sub_140596860(&var_48, rdx_108, rcx_192, 0, rax_77 + rsi_56)
    sub_140a20ba0(&var_48, *arg2, rsi_56)
    var_38 = var_48
    int32_t var_30_3 = var_40
    int32_t var_2c_3 = var_3c
    var_40.q = 0
    var_48 = 0
else
    sub_140596d10(&var_38, arg2)

sub_140597da0(&arg1[0x3a], &var_38)
uint64_t rcx_197 = var_38

if (rcx_197 != 0)
    sub_140a74f90(rcx_197)

int32_t rcx_198 = (data_143ce09c8.q).d

if (rcx_198 s> 1)
    int32_t rax_82 = arg2[1].d
    int32_t rsi_57 = rax_82 - 1
    
    if (rax_82 == 0)
        rsi_57 = 0
    
    int32_t rax_83
    
    if (rcx_198 == 0)
        rax_83 = rcx_198 + 1
    
    if (rcx_198 != 0 || rsi_57 == 0)
        rax_83 = 0
    
    int64_t rdx_112 = data_143ce09c0
    var_48 = 0
    sub_140596860(&var_48, rdx_112, rcx_198, 0, rax_83 + rsi_57)
    sub_140a20ba0(&var_48, *arg2, rsi_57)
    var_38 = var_48
    int32_t var_30_4 = var_40
    int32_t var_2c_4 = var_3c
    var_40.q = 0
    var_48 = 0
else
    sub_140596d10(&var_38, arg2)

sub_140597da0(&arg1[0x3c], &var_38)
uint64_t rcx_203 = var_38

if (rcx_203 != 0)
    sub_140a74f90(rcx_203)

int32_t rcx_204 = (data_143ce09d8.q).d

if (rcx_204 s> 1)
    int32_t rax_88 = arg2[1].d
    int32_t rsi_58 = rax_88 - 1
    
    if (rax_88 == 0)
        rsi_58 = 0
    
    int32_t rax_89
    
    if (rcx_204 == 0)
        rax_89 = rcx_204 + 1
    
    if (rcx_204 != 0 || rsi_58 == 0)
        rax_89 = 0
    
    int64_t rdx_116 = data_143ce09d0
    var_48 = 0
    sub_140596860(&var_48, rdx_116, rcx_204, 0, rax_89 + rsi_58)
    sub_140a20ba0(&var_48, *arg2, rsi_58)
    var_38 = var_48
    int32_t var_30_5 = var_40
    int32_t var_2c_5 = var_3c
    var_40.q = 0
    var_48 = 0
else
    sub_140596d10(&var_38, arg2)

sub_140597da0(&arg1[0x3e], &var_38)
uint64_t rcx_209 = var_38

if (rcx_209 != 0)
    sub_140a74f90(rcx_209)

int32_t rcx_210 = (data_143ce09e8.q).d

if (rcx_210 s> 1)
    int32_t rax_94 = arg2[1].d
    int32_t rsi_59 = rax_94 - 1
    
    if (rax_94 == 0)
        rsi_59 = 0
    
    int32_t rax_95
    
    if (rcx_210 == 0)
        rax_95 = rcx_210 + 1
    
    if (rcx_210 != 0 || rsi_59 == 0)
        rax_95 = 0
    
    int64_t rdx_120 = data_143ce09e0
    var_48 = 0
    sub_140596860(&var_48, rdx_120, rcx_210, 0, rax_95 + rsi_59)
    sub_140a20ba0(&var_48, *arg2, rsi_59)
    var_38 = var_48
    int32_t var_30_6 = var_40
    int32_t var_2c_6 = var_3c
    var_40.q = 0
    var_48 = 0
else
    sub_140596d10(&var_38, arg2)

sub_140597da0(&arg1[0x40], &var_38)
uint64_t rcx_215 = var_38

if (rcx_215 != 0)
    sub_140a74f90(rcx_215)

int32_t rcx_216 = (data_143ce09f8.q).d

if (rcx_216 s> 1)
    int32_t rax_100 = arg2[1].d
    int32_t rsi_60 = rax_100 - 1
    
    if (rax_100 == 0)
        rsi_60 = 0
    
    int32_t rax_101
    
    if (rcx_216 == 0)
        rax_101 = rcx_216 + 1
    
    if (rcx_216 != 0 || rsi_60 == 0)
        rax_101 = 0
    
    int64_t rdx_124 = data_143ce09f0
    var_48 = 0
    sub_140596860(&var_48, rdx_124, rcx_216, 0, rax_101 + rsi_60)
    sub_140a20ba0(&var_48, *arg2, rsi_60)
    var_38 = var_48
    int32_t var_30_7 = var_40
    int32_t var_2c_7 = var_3c
    var_40.q = 0
    var_48 = 0
else
    sub_140596d10(&var_38, arg2)

sub_140597da0(&arg1[0x42], &var_38)
uint64_t rcx_221 = var_38

if (rcx_221 != 0)
    sub_140a74f90(rcx_221)

int32_t rcx_222 = (data_143ce0a08.q).d

if (rcx_222 s> 1)
    int32_t rax_106 = arg2[1].d
    int32_t rsi_61 = rax_106 - 1
    
    if (rax_106 == 0)
        rsi_61 = 0
    
    int32_t rax_107
    
    if (rcx_222 == 0)
        rax_107 = rcx_222 + 1
    
    if (rcx_222 != 0 || rsi_61 == 0)
        rax_107 = 0
    
    int64_t rdx_128 = data_143ce0a00
    var_48 = 0
    sub_140596860(&var_48, rdx_128, rcx_222, 0, rax_107 + rsi_61)
    sub_140a20ba0(&var_48, *arg2, rsi_61)
    var_38 = var_48
    int32_t var_30_8 = var_40
    int32_t var_2c_8 = var_3c
    var_40.q = 0
    var_48 = 0
else
    sub_140596d10(&var_38, arg2)

sub_140597da0(&arg1[0x44], &var_38)
uint64_t rcx_227 = var_38

if (rcx_227 != 0)
    sub_140a74f90(rcx_227)

int32_t rcx_228 = (data_143ce0a18.q).d

if (rcx_228 s> 1)
    int32_t rax_112 = arg2[1].d
    int32_t rsi_62 = rax_112 - 1
    
    if (rax_112 == 0)
        rsi_62 = 0
    
    int32_t rax_113
    
    if (rcx_228 == 0)
        rax_113 = rcx_228 + 1
    
    if (rcx_228 != 0 || rsi_62 == 0)
        rax_113 = 0
    
    int64_t rdx_132 = data_143ce0a10
    var_48 = 0
    sub_140596860(&var_48, rdx_132, rcx_228, 0, rax_113 + rsi_62)
    sub_140a20ba0(&var_48, *arg2, rsi_62)
    var_38 = var_48
    int32_t var_30_9 = var_40
    int32_t var_2c_9 = var_3c
    var_40.q = 0
    var_48 = 0
else
    sub_140596d10(&var_38, arg2)

sub_140597da0(&arg1[0x46], &var_38)
uint64_t rcx_233 = var_38

if (rcx_233 != 0)
    sub_140a74f90(rcx_233)

int32_t rcx_234 = (data_143ce0a28.q).d

if (rcx_234 s> 1)
    int32_t rax_118 = arg2[1].d
    int32_t rsi_63 = rax_118 - 1
    
    if (rax_118 == 0)
        rsi_63 = 0
    
    int32_t rax_119
    
    if (rcx_234 == 0)
        rax_119 = rcx_234 + 1
    
    if (rcx_234 != 0 || rsi_63 == 0)
        rax_119 = 0
    
    int64_t rdx_136 = data_143ce0a20
    var_48 = 0
    sub_140596860(&var_48, rdx_136, rcx_234, 0, rax_119 + rsi_63)
    sub_140a20ba0(&var_48, *arg2, rsi_63)
    var_38 = var_48
    int32_t var_30_10 = var_40
    int32_t var_2c_10 = var_3c
    var_40.q = 0
    var_48 = 0
else
    sub_140596d10(&var_38, arg2)

sub_140597da0(&arg1[0x48], &var_38)
uint64_t rcx_239 = var_38

if (rcx_239 != 0)
    sub_140a74f90(rcx_239)

int32_t rcx_240 = (data_143ce0a38.q).d

if (rcx_240 s> 1)
    int32_t rax_124 = arg2[1].d
    int32_t rsi_64 = rax_124 - 1
    
    if (rax_124 == 0)
        rsi_64 = 0
    
    int32_t rax_125
    
    if (rcx_240 == 0)
        rax_125 = rcx_240 + 1
    
    if (rcx_240 != 0 || rsi_64 == 0)
        rax_125 = 0
    
    int64_t rdx_140 = data_143ce0a30
    var_48 = 0
    sub_140596860(&var_48, rdx_140, rcx_240, 0, rax_125 + rsi_64)
    sub_140a20ba0(&var_48, *arg2, rsi_64)
    var_38 = var_48
    int32_t var_30_11 = var_40
    int32_t var_2c_11 = var_3c
    var_40.q = 0
    var_48 = 0
else
    sub_140596d10(&var_38, arg2)

sub_140597da0(&arg1[0x4a], &var_38)
uint64_t rcx_245 = var_38

if (rcx_245 != 0)
    sub_140a74f90(rcx_245)

int32_t rcx_246 = (data_143ce0a48.q).d

if (rcx_246 s> 1)
    int32_t rax_130 = arg2[1].d
    int32_t rsi_65 = rax_130 - 1
    
    if (rax_130 == 0)
        rsi_65 = 0
    
    int32_t rax_131
    
    if (rcx_246 == 0)
        rax_131 = rcx_246 + 1
    
    if (rcx_246 != 0 || rsi_65 == 0)
        rax_131 = 0
    
    int64_t rdx_144 = data_143ce0a40
    var_48 = 0
    sub_140596860(&var_48, rdx_144, rcx_246, 0, rax_131 + rsi_65)
    sub_140a20ba0(&var_48, *arg2, rsi_65)
    var_38 = var_48
    int32_t var_30_12 = var_40
    int32_t var_2c_12 = var_3c
    var_40.q = 0
    var_48 = 0
else
    sub_140596d10(&var_38, arg2)

sub_140597da0(&arg1[0x4c], &var_38)
uint64_t rcx_251 = var_38

if (rcx_251 != 0)
    sub_140a74f90(rcx_251)

int32_t rcx_252 = (data_143ce0a58.q).d

if (rcx_252 s> 1)
    int32_t rax_136 = arg2[1].d
    int32_t rsi_66 = rax_136 - 1
    
    if (rax_136 == 0)
        rsi_66 = 0
    
    int32_t rax_137
    
    if (rcx_252 == 0)
        rax_137 = rcx_252 + 1
    
    if (rcx_252 != 0 || rsi_66 == 0)
        rax_137 = 0
    
    int64_t rdx_148 = data_143ce0a50
    var_48 = 0
    sub_140596860(&var_48, rdx_148, rcx_252, 0, rax_137 + rsi_66)
    sub_140a20ba0(&var_48, *arg2, rsi_66)
    var_38 = var_48
    int32_t var_30_13 = var_40
    int32_t var_2c_13 = var_3c
    var_40.q = 0
    var_48 = 0
else
    sub_140596d10(&var_38, arg2)

int64_t* result = sub_140597da0(&arg1[0x4e], &var_38)
uint64_t rcx_257 = var_38

if (rcx_257 == 0)
    return result

return sub_140a74f90(rcx_257) __tailcall
