// 函数: sub_140785070
// 地址: 0x140785070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = (data_143ce0628.q).d
int32_t rdi = arg2[1].d
int64_t* r14 = arg2
int16_t* var_58
int32_t var_50
uint64_t var_48
int32_t var_40
uint64_t rsi_2

if (rsi s> 1)
    int32_t r14_1 = rdi - 1
    
    if (rdi == 0)
        r14_1 = 0
    
    int32_t rax_1
    
    if (rsi == 0)
        rax_1 = rsi + 1
    
    if (rsi != 0 || r14_1 == 0)
        rax_1 = 0
    
    int64_t rdi_1 = data_143ce0620
    int32_t rcx_2 = rax_1 + r14_1
    var_58 = nullptr
    
    if (rsi != 0 || rcx_2 != 0)
        sub_1405a4c70(&var_58, rcx_2 + rsi, 0)
        memcpy(var_58, rdi_1, rsi * 2)
    else
        int32_t var_4c_1 = 0
    
    r14 = arg2
    sub_140a20ba0(&var_58, *r14, r14_1)
    rsi_2 = var_58
    rdi = rsi
    var_58 = nullptr
    var_50.q = 0
else
    int64_t rsi_1 = *arg2
    var_48 = 0
    var_40 = rdi
    
    if (rdi != 0)
        sub_1405a4c70(&var_48, rdi, 0)
        rsi_2 = var_48
        memcpy(rsi_2, rsi_1, rdi * 2)
        rdi = var_40
    else
        rsi_2 = 0

int16_t* const r15 = &data_142d40450
int16_t* const r8_5 = &data_142d40450

if (rdi != 0)
    r8_5 = rsi_2

sub_1419c6ab0(arg1 + 8, arg3, r8_5, 0)

if (rsi_2 != 0)
    sub_140a74f90(rsi_2)

int32_t rsi_3 = (data_143ce0638.q).d
int32_t rdi_2 = r14[1].d
int16_t* rsi_5

if (rsi_3 s> 1)
    int32_t r14_2 = rdi_2 - 1
    
    if (rdi_2 == 0)
        r14_2 = 0
    
    int32_t rax_2
    
    if (rsi_3 == 0)
        rax_2 = rsi_3 + 1
    
    if (rsi_3 != 0 || r14_2 == 0)
        rax_2 = 0
    
    int64_t rdi_3 = data_143ce0630
    int32_t rcx_10 = rax_2 + r14_2
    var_58 = nullptr
    
    if (rsi_3 != 0 || rcx_10 != 0)
        sub_1405a4c70(&var_58, rsi_3 + rcx_10, 0)
        memcpy(var_58, rdi_3, rsi_3 * 2)
    else
        int32_t var_4c_2 = 0
    
    r14 = arg2
    sub_140a20ba0(&var_58, *r14, r14_2)
    rsi_5 = var_58
    rdi_2 = rsi_3
    var_58 = nullptr
    var_50.q = 0
else
    int64_t rsi_4 = *r14
    var_48 = 0
    var_40 = rdi_2
    
    if (rdi_2 != 0)
        sub_1405a4c70(&var_48, rdi_2, 0)
        rsi_5 = var_48
        memcpy(rsi_5, rsi_4, rdi_2 * 2)
        rdi_2 = var_40
    else
        rsi_5 = nullptr

int16_t* r8_11 = &data_142d40450

if (rdi_2 != 0)
    r8_11 = rsi_5

sub_1419c6ab0(arg1 + 0xe, arg3, r8_11, 0)

if (rsi_5 != 0)
    sub_140a74f90(rsi_5)

int32_t rsi_6 = (data_143ce0648.q).d
int32_t rdi_4 = r14[1].d
int16_t* rsi_8

if (rsi_6 s> 1)
    int32_t r14_3 = rdi_4 - 1
    
    if (rdi_4 == 0)
        r14_3 = 0
    
    int32_t rax_3
    
    if (rsi_6 == 0)
        rax_3 = rsi_6 + 1
    
    if (rsi_6 != 0 || r14_3 == 0)
        rax_3 = 0
    
    int64_t rdi_5 = data_143ce0640
    int32_t rcx_18 = rax_3 + r14_3
    var_58 = nullptr
    
    if (rsi_6 != 0 || rcx_18 != 0)
        sub_1405a4c70(&var_58, rsi_6 + rcx_18, 0)
        memcpy(var_58, rdi_5, rsi_6 * 2)
    else
        int32_t var_4c_3 = 0
    
    r14 = arg2
    sub_140a20ba0(&var_58, *r14, r14_3)
    rsi_8 = var_58
    rdi_4 = rsi_6
    var_58 = nullptr
    var_50.q = 0
else
    int64_t rsi_7 = *r14
    var_48 = 0
    var_40 = rdi_4
    
    if (rdi_4 != 0)
        sub_1405a4c70(&var_48, rdi_4, 0)
        rsi_8 = var_48
        memcpy(rsi_8, rsi_7, rdi_4 * 2)
        rdi_4 = var_40
    else
        rsi_8 = nullptr

int16_t* r8_17 = &data_142d40450

if (rdi_4 != 0)
    r8_17 = rsi_8

sub_1419c6ab0(arg1 + 0x14, arg3, r8_17, 0)

if (rsi_8 != 0)
    sub_140a74f90(rsi_8)

int32_t rsi_9 = (data_143ce0658.q).d
int32_t rdi_6 = r14[1].d
int16_t* rsi_11

if (rsi_9 s> 1)
    int32_t r14_4 = rdi_6 - 1
    
    if (rdi_6 == 0)
        r14_4 = 0
    
    int32_t rax_4
    
    if (rsi_9 == 0)
        rax_4 = rsi_9 + 1
    
    if (rsi_9 != 0 || r14_4 == 0)
        rax_4 = 0
    
    int64_t rdi_7 = data_143ce0650
    int32_t rcx_26 = r14_4 + rax_4
    var_58 = nullptr
    
    if (rsi_9 != 0 || rcx_26 != 0)
        sub_1405a4c70(&var_58, rsi_9 + rcx_26, 0)
        memcpy(var_58, rdi_7, rsi_9 * 2)
    else
        int32_t var_4c_4 = 0
    
    r14 = arg2
    sub_140a20ba0(&var_58, *r14, r14_4)
    rsi_11 = var_58
    rdi_6 = rsi_9
    var_58 = nullptr
    var_50.q = 0
else
    int64_t rsi_10 = *r14
    var_48 = 0
    var_40 = rdi_6
    
    if (rdi_6 != 0)
        sub_1405a4c70(&var_48, rdi_6, 0)
        rsi_11 = var_48
        memcpy(rsi_11, rsi_10, rdi_6 * 2)
        rdi_6 = var_40
    else
        rsi_11 = nullptr

int16_t* r8_23 = &data_142d40450

if (rdi_6 != 0)
    r8_23 = rsi_11

sub_1419c7530(arg1 + 0x1a, arg3, r8_23, 0)

if (rsi_11 != 0)
    sub_140a74f90(rsi_11)

int32_t rsi_12 = (data_143ce0668.q).d
int32_t rdi_8 = r14[1].d
int16_t* rsi_14

if (rsi_12 s> 1)
    int32_t r14_5 = rdi_8 - 1
    
    if (rdi_8 == 0)
        r14_5 = 0
    
    int32_t rax_5
    
    if (rsi_12 == 0)
        rax_5 = rsi_12 + 1
    
    if (rsi_12 != 0 || r14_5 == 0)
        rax_5 = 0
    
    int64_t rdi_9 = data_143ce0660
    int32_t rcx_34 = r14_5 + rax_5
    var_58 = nullptr
    
    if (rsi_12 != 0 || rcx_34 != 0)
        sub_1405a4c70(&var_58, rsi_12 + rcx_34, 0)
        memcpy(var_58, rdi_9, rsi_12 * 2)
    else
        int32_t var_4c_5 = 0
    
    r14 = arg2
    sub_140a20ba0(&var_58, *r14, r14_5)
    rsi_14 = var_58
    rdi_8 = rsi_12
    var_58 = nullptr
    var_50.q = 0
else
    int64_t rsi_13 = *r14
    var_48 = 0
    var_40 = rdi_8
    
    if (rdi_8 != 0)
        sub_1405a4c70(&var_48, rdi_8, 0)
        rsi_14 = var_48
        memcpy(rsi_14, rsi_13, rdi_8 * 2)
        rdi_8 = var_40
    else
        rsi_14 = nullptr

int16_t* r8_29 = &data_142d40450

if (rdi_8 != 0)
    r8_29 = rsi_14

sub_1419c7530(arg1 + 0x1e, arg3, r8_29, 0)

if (rsi_14 != 0)
    sub_140a74f90(rsi_14)

int32_t rsi_15 = (data_143ce0678.q).d
int32_t rdi_10 = r14[1].d
int16_t* rsi_17

if (rsi_15 s> 1)
    int32_t r14_6 = rdi_10 - 1
    
    if (rdi_10 == 0)
        r14_6 = 0
    
    int32_t rax_6
    
    if (rsi_15 == 0)
        rax_6 = rsi_15 + 1
    
    if (rsi_15 != 0 || r14_6 == 0)
        rax_6 = 0
    
    int64_t rdi_11 = data_143ce0670
    int32_t rcx_42 = rax_6 + r14_6
    var_58 = nullptr
    
    if (rsi_15 != 0 || rcx_42 != 0)
        sub_1405a4c70(&var_58, rcx_42 + rsi_15, 0)
        memcpy(var_58, rdi_11, rsi_15 * 2)
    else
        int32_t var_4c_6 = 0
    
    r14 = arg2
    sub_140a20ba0(&var_58, *r14, r14_6)
    rsi_17 = var_58
    rdi_10 = rsi_15
    var_58 = nullptr
    var_50.q = 0
else
    int64_t rsi_16 = *r14
    var_48 = 0
    var_40 = rdi_10
    
    if (rdi_10 != 0)
        sub_1405a4c70(&var_48, rdi_10, 0)
        rsi_17 = var_48
        memcpy(rsi_17, rsi_16, rdi_10 * 2)
        rdi_10 = var_40
    else
        rsi_17 = nullptr

int16_t* r8_35 = &data_142d40450

if (rdi_10 != 0)
    r8_35 = rsi_17

sub_1419c7530(arg1 + 0x22, arg3, r8_35, 0)

if (rsi_17 != 0)
    sub_140a74f90(rsi_17)

int32_t rsi_18 = (data_143ce0688.q).d
int32_t rdi_12 = r14[1].d
int16_t* rsi_20

if (rsi_18 s> 1)
    int32_t r14_7 = rdi_12 - 1
    
    if (rdi_12 == 0)
        r14_7 = 0
    
    int32_t rax_7
    
    if (rsi_18 == 0)
        rax_7 = rsi_18 + 1
    
    if (rsi_18 != 0 || r14_7 == 0)
        rax_7 = 0
    
    int64_t rdi_13 = data_143ce0680
    int32_t rcx_50 = rax_7 + r14_7
    var_58 = nullptr
    
    if (rsi_18 != 0 || rcx_50 != 0)
        sub_1405a4c70(&var_58, rsi_18 + rcx_50, 0)
        memcpy(var_58, rdi_13, rsi_18 * 2)
    else
        int32_t var_4c_7 = 0
    
    r14 = arg2
    sub_140a20ba0(&var_58, *r14, r14_7)
    rsi_20 = var_58
    rdi_12 = rsi_18
    var_58 = nullptr
    var_50.q = 0
else
    int64_t rsi_19 = *r14
    var_48 = 0
    var_40 = rdi_12
    
    if (rdi_12 != 0)
        sub_1405a4c70(&var_48, rdi_12, 0)
        rsi_20 = var_48
        memcpy(rsi_20, rsi_19, rdi_12 * 2)
        rdi_12 = var_40
    else
        rsi_20 = nullptr

int16_t* r8_41 = &data_142d40450

if (rdi_12 != 0)
    r8_41 = rsi_20

sub_1419c7530(arg1 + 0x26, arg3, r8_41, 0)

if (rsi_20 != 0)
    sub_140a74f90(rsi_20)

int32_t rsi_21 = (data_143ce0698.q).d
int32_t rdi_14 = r14[1].d
int16_t* rsi_23

if (rsi_21 s> 1)
    int32_t r14_8 = rdi_14 - 1
    
    if (rdi_14 == 0)
        r14_8 = 0
    
    int32_t rax_8
    
    if (rsi_21 == 0)
        rax_8 = rsi_21 + 1
    
    if (rsi_21 != 0 || r14_8 == 0)
        rax_8 = 0
    
    int64_t rdi_15 = data_143ce0690
    int32_t rcx_58 = rax_8 + r14_8
    var_58 = nullptr
    
    if (rsi_21 != 0 || rcx_58 != 0)
        sub_1405a4c70(&var_58, rcx_58 + rsi_21, 0)
        memcpy(var_58, rdi_15, rsi_21 * 2)
    else
        int32_t var_4c_8 = 0
    
    r14 = arg2
    sub_140a20ba0(&var_58, *r14, r14_8)
    rsi_23 = var_58
    rdi_14 = rsi_21
    var_58 = nullptr
    var_50.q = 0
else
    int64_t rsi_22 = *r14
    var_48 = 0
    var_40 = rdi_14
    
    if (rdi_14 != 0)
        sub_1405a4c70(&var_48, rdi_14, 0)
        rsi_23 = var_48
        memcpy(rsi_23, rsi_22, rdi_14 * 2)
        rdi_14 = var_40
    else
        rsi_23 = nullptr

int16_t* r8_47 = &data_142d40450

if (rdi_14 != 0)
    r8_47 = rsi_23

sub_1419c6ab0(arg1 + 0x2a, arg3, r8_47, 0)

if (rsi_23 != 0)
    sub_140a74f90(rsi_23)

int32_t rsi_24 = (data_143ce06a8.q).d
int32_t rdi_16 = r14[1].d
int16_t* rsi_26

if (rsi_24 s> 1)
    int32_t r14_9 = rdi_16 - 1
    
    if (rdi_16 == 0)
        r14_9 = 0
    
    int32_t rax_9
    
    if (rsi_24 == 0)
        rax_9 = rsi_24 + 1
    
    if (rsi_24 != 0 || r14_9 == 0)
        rax_9 = 0
    
    int64_t rdi_17 = data_143ce06a0
    int32_t rcx_66 = r14_9 + rax_9
    var_58 = nullptr
    
    if (rsi_24 != 0 || rcx_66 != 0)
        sub_1405a4c70(&var_58, rcx_66 + rsi_24, 0)
        memcpy(var_58, rdi_17, rsi_24 * 2)
    else
        int32_t var_4c_9 = 0
    
    r14 = arg2
    sub_140a20ba0(&var_58, *r14, r14_9)
    rsi_26 = var_58
    rdi_16 = rsi_24
    var_58 = nullptr
    var_50.q = 0
else
    int64_t rsi_25 = *r14
    var_48 = 0
    var_40 = rdi_16
    
    if (rdi_16 != 0)
        sub_1405a4c70(&var_48, rdi_16, 0)
        rsi_26 = var_48
        memcpy(rsi_26, rsi_25, rdi_16 * 2)
        rdi_16 = var_40
    else
        rsi_26 = nullptr

int16_t* r8_53 = &data_142d40450

if (rdi_16 != 0)
    r8_53 = rsi_26

sub_1419c6ab0(arg1 + 0x30, arg3, r8_53, 0)

if (rsi_26 != 0)
    sub_140a74f90(rsi_26)

int32_t rsi_27 = (data_143ce06b8.q).d
int32_t rdi_18 = r14[1].d
int16_t* rsi_29

if (rsi_27 s> 1)
    int32_t r14_10 = rdi_18 - 1
    
    if (rdi_18 == 0)
        r14_10 = 0
    
    int32_t rax_10
    
    if (rsi_27 == 0)
        rax_10 = rsi_27 + 1
    
    if (rsi_27 != 0 || r14_10 == 0)
        rax_10 = 0
    
    int64_t rdi_19 = data_143ce06b0
    int32_t rcx_74 = rax_10 + r14_10
    var_58 = nullptr
    
    if (rsi_27 != 0 || rcx_74 != 0)
        sub_1405a4c70(&var_58, rsi_27 + rcx_74, 0)
        memcpy(var_58, rdi_19, rsi_27 * 2)
    else
        int32_t var_4c_10 = 0
    
    r14 = arg2
    sub_140a20ba0(&var_58, *r14, r14_10)
    rsi_29 = var_58
    rdi_18 = rsi_27
    var_58 = nullptr
    var_50.q = 0
else
    int64_t rsi_28 = *r14
    var_48 = 0
    var_40 = rdi_18
    
    if (rdi_18 != 0)
        sub_1405a4c70(&var_48, rdi_18, 0)
        rsi_29 = var_48
        memcpy(rsi_29, rsi_28, rdi_18 * 2)
        rdi_18 = var_40
    else
        rsi_29 = nullptr

int16_t* r8_59 = &data_142d40450

if (rdi_18 != 0)
    r8_59 = rsi_29

sub_1419c6ab0(arg1 + 0x36, arg3, r8_59, 0)

if (rsi_29 != 0)
    sub_140a74f90(rsi_29)

int32_t rcx_80 = (data_143ce06c8.q).d
int32_t rax_11
uint64_t rdi_20

if (rcx_80 s> 1)
    int32_t rax_12 = r14[1].d
    int32_t rdi_21 = rax_12 - 1
    
    if (rax_12 == 0)
        rdi_21 = 0
    
    int32_t rax_13
    
    if (rcx_80 == 0)
        rax_13 = rcx_80 + 1
    
    if (rcx_80 != 0 || rdi_21 == 0)
        rax_13 = 0
    
    int64_t rdx_61 = data_143ce06c0
    var_58 = nullptr
    sub_140596860(&var_58, rdx_61, rcx_80, 0, rax_13 + rdi_21)
    sub_140a20ba0(&var_58, *r14, rdi_21)
    rax_11 = var_50
    rdi_20 = var_58
    var_50.q = 0
    var_58 = nullptr
else
    sub_140596d10(&var_48, r14)
    rax_11 = var_40
    rdi_20 = var_48

if (rax_11 != 0)
    r15 = rdi_20

void* result = sub_1419c6ab0(arg1 + 0x3c, arg3, r15, 0)

if (rdi_20 != 0)
    result = sub_140a74f90(rdi_20)

int64_t rsi_30 = sx.q(*(arg1 + 0x50))
int64_t rdi_22 = sx.q(r14[5].d)

if (rdi_22.d s> rsi_30.d)
    *(arg1 + 0x50) = rdi_22.d
    
    if (rdi_22.d s> *(arg1 + 0x54))
        sub_1407c3d10(arg1 + 0x48, rsi_30.d)
    
    void* rcx_88 = *(arg1 + 0x48)
    
    if ((rcx_88.b & 1) != 0)
        rcx_88 = (rcx_88 s>> 1) + arg1 + 0x48
    
    result = memset(rcx_88 + (rsi_30 << 3), 0, sx.q(rdi_22.d - rsi_30.d) << 3)
else if (rdi_22.d s< rsi_30.d)
    result = sub_1407c2aa0(arg1 + 0x48, rdi_22.d, rsi_30.d - rdi_22.d, 1)

int64_t rsi_32 = sx.q(*(arg1 + 0x60))

if (rdi_22.d s> rsi_32.d)
    *(arg1 + 0x60) = rdi_22.d
    
    if (rdi_22.d s> *(arg1 + 0x64))
        sub_1407c3da0(arg1 + 0x58, rsi_32.d)
    
    void* rax_16 = *(arg1 + 0x58)
    
    if ((rax_16.b & 1) != 0)
        rax_16 = (rax_16 s>> 1) + arg1 + 0x58
    
    result = memset(rax_16 + rsi_32, 0, sx.q(rdi_22.d - rsi_32.d))
else if (rdi_22.d s< rsi_32.d)
    result = sub_1407c2b20(arg1 + 0x58, rdi_22.d, rsi_32.d - rdi_22.d, 1)

int64_t r8_68 = rdi_22

if (rdi_22.d s> 0)
    char* rsi_34 = nullptr
    int64_t r13_1 = 0
    TEB* gsbase
    int32_t* rcx_96 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14
    int32_t* arg_20 = rcx_96
    
    do
        void** rdi_23 = arg2[4]
        
        if (data_143ce1720 s> *rcx_96)
            _Init_thread_header(&data_143ce1720)
            
            if (data_143ce1720 == 0xffffffff)
                sub_140b58170(&data_143ce1718, "Attribute", 1)
                _Init_thread_footer(&data_143ce1720)
            
            r8_68 = rdi_22
        
        int64_t* rcx_97 = *(rdi_23 + r13_1 + 0x18)
        void* rdx_70 = &rcx_97[sx.q(*(rdi_23 + r13_1 + 0x20)) * 2]
        
        if (rcx_97 == rdx_70)
        label_140785be3:
            void* rcx_99 = *(arg1 + 0x48)
            
            if ((rcx_99.b & 1) != 0)
                rcx_99 = (rcx_99 s>> 1) + arg1 + 0x48
            
            *(rcx_99 + (rsi_34 << 3)) = 0
            result = *(arg1 + 0x58)
            
            if ((result.b & 1) != 0)
                result = (result s>> 1) + arg1 + 0x58
            
            *(rsi_34 + result) = 0
        else
            while (*rcx_97 != data_143ce1718)
                rcx_97 = &rcx_97[2]
                
                if (rcx_97 == rdx_70)
                    goto label_140785be3
            
            if (rcx_97 == -8)
                goto label_140785be3
            
            void* rcx_100 = *(arg1 + 0x48)
            
            if ((rcx_100.b & 1) != 0)
                rcx_100 = (rcx_100 s>> 1) + arg1 + 0x48
            
            *(rcx_100 + (rsi_34 << 3)) = rcx_97[1]
            result = *(rdi_23 + r13_1)
            
            if (result == data_143ce0590 || result == data_143ce05d8)
                result.b = 1
            else if (result == data_143ce0598 || result == data_143ce05e0)
                result.b = 6
            else if (result == data_143ce05a0 || result == data_143ce05e8)
                result.b = 2
            else if (result == data_143ce05a8 || result == data_143ce05f0)
                result.b = 3
            else if (result == data_143ce05b0 || result == data_143ce05f8)
                result.b = 4
            else if (result == data_143ce05b8 || result == data_143ce0600)
                result.b = 5
            else if (result == data_143ce05c0 || result == data_143ce0608)
                result.b = 7
            else if (result == data_143ce05c8 || result == data_143ce0610)
                result.b = 8
            else if (result == data_143ce05d0 || result == data_143ce0618)
                result.b = 9
            else
                result.b = 0
            
            void* rcx_102 = *(arg1 + 0x58)
            
            if ((rcx_102.b & 1) != 0)
                rcx_102 = (rcx_102 s>> 1) + arg1 + 0x58
            
            *(rcx_102 + rsi_34) = result.b
        
        rcx_96 = arg_20
        rsi_34 = &rsi_34[1]
        r13_1 += 0x28
    while (rsi_34 s< r8_68)

return result
