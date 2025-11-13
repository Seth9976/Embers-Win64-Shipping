// 函数: sub_1429dcc80
// 地址: 0x1429dcc80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
int32_t temp2
int32_t temp3
temp0, temp1, temp2, temp3 = __cpuid(0, 0)
int32_t r8

if (temp0 u>= 1)
    int32_t temp0_1
    int32_t temp1_1
    int32_t temp2_1
    int32_t temp3_1
    temp0_1, temp1_1, temp2_1, temp3_1 = __cpuid(1, 0)
    int32_t rbx_3 = temp3_1 u>> 0x17 & 1
    int32_t rdx_3 = rbx_3 | 2
    
    if ((temp3_1 & 0x2000000) == 0)
        rdx_3 = rbx_3
    
    int32_t rcx_3 = rdx_3 | 4
    
    if ((temp3_1 & 0x4000000) == 0)
        rcx_3 = rdx_3
    
    int32_t rdx_5 = rcx_3 | 8
    
    if ((temp2_1.b & 1) == 0)
        rdx_5 = rcx_3
    
    int32_t rcx_5 = rdx_5 | 0x10
    
    if ((temp2_1 & 0x200) == 0)
        rcx_5 = rdx_5
    
    int32_t rbx_5 = rcx_5 | 0x20
    
    if ((temp2_1 & 0x80000) == 0)
        rbx_5 = rcx_5
    
    r8 = rbx_5
    
    if ((temp2_1 & 0x18000000) == 0x18000000)
        int32_t temp0_2
        char temp1_2
        temp0_2, temp1_2 = _xgetbv(0, arg1)
        
        if ((((zx.q(temp0_2) << 0x20).b | temp1_2) & 6) == 6)
            r8 |= 0x40
            
            if (temp0 u>= 7)
                int32_t temp0_3
                char temp1_3
                int32_t temp2_2
                int32_t temp3_2
                temp0_3, temp1_3, temp2_2, temp3_2 = __cpuid(7, 0)
                
                if ((temp1_3 & 0x20) != 0)
                    r8 |= 0x80
else
    r8 = 0

int32_t rdx_11 = r8 & 0x10
int64_t (* rax_10)(void* arg1, int64_t arg2, void* arg3, int32_t arg4, int128_t* arg5, 
    int32_t arg6, int32_t arg7, int32_t arg8, int32_t arg9, int32_t arg10) = sub_1429eaba0

if (rdx_11 != 0)
    rax_10 = sub_1429ec2c0

int32_t rbx_8 = r8 & 0x80

if (rbx_8 != 0)
    rax_10 = sub_1429eca50

data_144020e48 = rax_10
int64_t (* rax_11)(void* arg1, int64_t arg2, void* arg3, int32_t arg4, int128_t* arg5, 
    int32_t arg6, int32_t arg7, int32_t arg8, int32_t arg9, int32_t arg10) = sub_1429ea6f0

if (rdx_11 != 0)
    rax_11 = sub_1429ebe10

data_144020e08 = rax_11
int64_t (* rax_12)(void* arg1, int32_t arg2, void* arg3, int32_t arg4, int128_t* arg5, 
    int32_t arg6, int32_t arg7) = __crt_strtox::assemble_floating_point_value_from_big_integer

if (rdx_11 != 0)
    rax_12 = sub_1429ebc70

data_144020dc8 = rax_12
int64_t (* rax_13)(int128_t* arg1, int64_t arg2, void* arg3, int32_t arg4, int128_t* arg5, 
    int32_t arg6, int32_t arg7) = sub_1429ea820

if (rdx_11 != 0)
    rax_13 = sub_1429ebf40

data_144020d98 = rax_13
int64_t (* rax_14)(void* arg1, int32_t arg2, void* arg3, int32_t arg4, int128_t* arg5, 
    int32_t arg6, int32_t arg7) = sub_1429eaa00

if (rdx_11 != 0)
    rax_14 = sub_1429ec120

if (rbx_8 != 0)
    rax_14 = sub_1429ecb80

data_144021030 = rax_14
int64_t (* rax_15)(int128_t* arg1, int64_t arg2, void* arg3, int32_t arg4, int128_t* arg5, 
    int32_t arg6, int32_t arg7) = sub_1429eacd0

if (rdx_11 != 0)
    rax_15 = sub_1429ec3f0

if (rbx_8 != 0)
    rax_15 = sub_1429ecd20

data_144020ff0 = rax_15
void* (* rax_16)(uint8_t* arg1, int64_t arg2, char* arg3, char* arg4) = sub_1429ee290

if (rdx_11 != 0)
    rax_16 = sub_14038d6b0

data_144020f70 = rax_16
void* (* rax_17)(uint8_t* arg1, int64_t arg2, char* arg3, char* arg4) = sub_1429ee480

if (rdx_11 != 0)
    rax_17 = sub_14038d870

data_144020f68 = rax_17
uint8_t (* rax_18)(uint8_t* arg1, int64_t arg2, char* arg3, char* arg4) = sub_1429ee5e0

if (rdx_11 != 0)
    rax_18 = sub_14038d530

data_144020f40 = rax_18
void* (* rax_19)(uint8_t* arg1, int64_t arg2, char* arg3, char* arg4) = sub_1429ee6f0

if (rdx_11 != 0)
    rax_19 = sub_14038d5b0

data_144020f38 = rax_19
void* (* rax_20)(void* arg1, int64_t arg2, int64_t arg3, void* arg4) = sub_1429ee9a0

if (rdx_11 != 0)
    rax_20 = sub_14038de20

data_144020f30 = rax_20
void* (* rax_21)(uint8_t* arg1, void* arg2, int64_t arg3, char* arg4) = sub_1429eeb40

if (rdx_11 != 0)
    rax_21 = sub_14038df30

data_144020f08 = rax_21
void* (* rax_22)(uint8_t* arg1, int64_t arg2, int64_t arg3, char* arg4) = sub_1429eeca0

if (rdx_11 != 0)
    rax_22 = sub_14038dd70

data_144020ef0 = rax_22
int64_t (* rax_23)(void* arg1, int64_t arg2, void* arg3) = sub_1429eeef0

if (rdx_11 != 0)
    rax_23 = sub_14038d040

data_144020eb8 = rax_23
int64_t (* rax_24)(void* arg1, int64_t arg2, void* arg3) = sub_1429eefc0

if (rdx_11 != 0)
    rax_24 = sub_14038d100

data_144020ea0 = rax_24
int64_t (* rax_25)(int64_t arg1, int64_t arg2, void* arg3) = sub_1429ef190

if (rdx_11 != 0)
    rax_25 = sub_14038d3a0

data_144020e58 = rax_25
int64_t (* rax_26)(int64_t arg1, int64_t arg2, void* arg3) = sub_1429ef300

if (rdx_11 != 0)
    rax_26 = sub_14038d420

data_144020e38 = rax_26
uint8_t (* rax_27)(uint8_t* arg1, int64_t arg2, char* arg3) = sub_1429ef470

if (rdx_11 != 0)
    rax_27 = sub_14038d290

data_144020e28 = rax_27
int64_t (* rax_28)(uint8_t* arg1, void* arg2, char* arg3) = sub_1429ef570

if (rdx_11 != 0)
    rax_28 = sub_14038d2f0

data_144020e10 = rax_28
void* (* rax_29)(int64_t arg1, void* arg2, int32_t arg3) = sub_1429f21b0

if (rbx_8 != 0)
    rax_29 = sub_1429fa200

data_144020ff8 = rax_29
void* (* rax_30)(int64_t arg1, int16_t (* arg2)[0x8], int32_t arg3) = sub_1429efa70

if (rbx_8 != 0)
    rax_30 = sub_142a00db0

data_144020fd0 = rax_30
int64_t (* rax_31)(int128_t* arg1, uint16_t (* arg2)[0x8], int64_t arg3) = sub_1429f9cf0

if (rdx_11 != 0)
    rax_31 = sub_14038e290

data_144020fa8 = rax_31
int32_t* (* rax_32)(int128_t* arg1, int32_t arg2, int128_t* arg3, int32_t arg4, int32_t* arg5, 
    int32_t* arg6) = sub_142a02fc0

if (rbx_8 != 0)
    rax_32 = sub_142a061f0

data_144020f88 = rax_32
int64_t (* rax_33)(int128_t* arg1, int32_t arg2, int128_t* arg3) = sub_142a07640

if (rdx_11 != 0)
    rax_33 = sub_14038e960

void* (* rcx_7)(int128_t* arg1, int64_t* arg2, int32_t arg3) = sub_142a0cf50
data_144020f18 = rax_33
void* (* rax_34)(int128_t* arg1, int64_t* arg2, int32_t arg3) = sub_142a0cf50

if (rdx_11 != 0)
    rax_34 = sub_1403938f0

data_144020ed8 = rax_34

if (rdx_11 != 0)
    rcx_7 = sub_140391530

int64_t* (* rax_35)(int32_t (* arg1)[0x4], int64_t* arg2, int32_t arg3) = sub_142a10f00
data_144020ec8 = rcx_7

if (rdx_11 != 0)
    rax_35 = sub_14038f650

data_144020e98 = rax_35
int32_t (* rax_36)(int128_t* arg1, int64_t* arg2, int64_t arg3)[0x4] = sub_142a13780

if (rdx_11 != 0)
    rax_36 = sub_14038f290

data_144020e70 = rax_36
int32_t (* rax_37)(int128_t* arg1, int64_t* arg2, int64_t arg3) = sub_142a13e90

if (rdx_11 != 0)
    rax_37 = sub_14038ebe0

data_144020e50 = rax_37
int64_t* (* rax_38)(int128_t* arg1, int32_t arg2, int32_t (* arg3)[0x4], int32_t (* arg4)[0x4], 
    int32_t (* arg5)[0x4]) = sub_142a15680

if (rbx_8 != 0)
    rax_38 = sub_142a18980

data_144020df8 = rax_38
int16_t (* rax_39)(int32_t (* arg1)[0x4], int32_t arg2, int32_t (* arg3)[0x4], 
    int32_t (* arg4)[0x4], int32_t (* arg5)[0x4])[0x8] = sub_142a143d0

if (rbx_8 != 0)
    rax_39 = sub_142a19270

data_144020de0 = rax_39
uint64_t (* rax_40)(int128_t* arg1, int32_t arg2, int128_t* arg3, int32_t arg4, int32_t* arg5) =
    sub_142a03190

if (rbx_8 != 0)
    rax_40 = sub_142a19e60

data_144020fc8 = rax_40
int16_t* (* rax_41)(int64_t arg1, int64_t arg2, int32_t arg3, int128_t* arg4, int128_t* arg5, 
    int128_t* arg6, int128_t* arg7, int64_t arg8, int64_t arg9, int128_t* arg10, int16_t* arg11, 
    int64_t arg12) = sub_142a1a4d0

if (rdx_11 != 0)
    rax_41 = sub_1403968b0

int32_t rcx_9 = r8 & 0x40

if (rcx_9 != 0)
    rax_41 = sub_140397030

data_144020f10 = rax_41
int16_t* (* rax_42)(int64_t arg1, int64_t arg2, int32_t arg3, int16_t* arg4, int64_t arg5, 
    int64_t arg6, int64_t arg7, int64_t arg8, uint64_t arg9, int64_t arg10, int16_t* arg11, 
    int16_t* arg12) = sub_142a1a850

if (rdx_11 != 0)
    rax_42 = sub_140396c20

if (rcx_9 != 0)
    rax_42 = sub_140397600

int32_t rcx_11 = r8 & 8
data_144020ec0 = rax_42
int32_t* (* rax_43)(int64_t arg1, int32_t arg2, int32_t* arg3, int32_t arg4, void* arg5) =
    sub_142a1aa80

if (rcx_11 != 0)
    rax_43 = sub_140397a40

if (rdx_11 != 0)
    rax_43 = sub_140398460

int32_t r8_3 = r8 & 0x20
data_144020e80 = rax_43
int32_t* (* rax_44)(int64_t arg1, int32_t arg2, int32_t* arg3, int32_t arg4, void* arg5) =
    sub_142a1ac50

if (r8_3 != 0)
    rax_44 = sub_14039eaa0

data_144020e40 = rax_44
int32_t* (* rax_45)(int64_t arg1, int32_t arg2, int32_t* arg3, int32_t arg4, void* arg5) =
    sub_142a1ae20

if (rcx_11 != 0)
    rax_45 = sub_140397db5

if (rdx_11 != 0)
    rax_45 = sub_14039c84d

data_144020dd8 = rax_45
int32_t* (* rax_46)(int64_t arg1, int32_t arg2, int32_t* arg3, int32_t arg4, void* arg5) =
    sub_142a1aff0

if (r8_3 != 0)
    rax_46 = sub_14039f036

data_144020db8 = rax_46
uint64_t (* rax_47)(int32_t (* arg1)[0x4], int32_t arg2, int128_t* arg3, int32_t arg4) =
    sub_14039fbc0

if (rbx_8 != 0)
    rax_47 = sub_142a1bc20

data_144020db0 = rax_47
uint64_t (* rax_48)(void* arg1, int32_t arg2, int128_t* arg3, int32_t arg4, 
    uint8_t (* arg5)[0x10]) = sub_14039fd50

if (rbx_8 != 0)
    rax_48 = sub_142a1bb80

data_144020d90 = rax_48
uint64_t (* rax_49)(int32_t (* arg1)[0x4], int32_t arg2, int128_t* arg3, int32_t arg4) =
    sub_14039fb50

if (rbx_8 != 0)
    rax_49 = sub_142a1bd40

data_144021038 = rax_49
uint64_t (* rax_50)(void* arg1, int32_t arg2, int128_t* arg3, int32_t arg4, 
    uint8_t (* arg5)[0x10]) = sub_14039fcc0

if (rbx_8 != 0)
    rax_50 = sub_142a1bca0

data_144021018 = rax_50
int32_t (* rax_51)(int128_t* arg1, int32_t arg2, int64_t* arg3, int32_t arg4, 
    int32_t (* arg5)[0x4])[0x4] = sub_1403a87b0

if (rbx_8 != 0)
    rax_51 = sub_142a1c0c0

data_144021000 = rax_51
uint64_t (* rax_52)(int32_t (* arg1)[0x4], int32_t arg2, int128_t* arg3, int32_t arg4) =
    sub_14039fae0

if (rbx_8 != 0)
    rax_52 = sub_142a1be60

data_144020fe8 = rax_52
uint64_t (* rax_53)(void* arg1, int32_t arg2, int128_t* arg3, int32_t arg4, 
    uint8_t (* arg5)[0x10]) = sub_14039fc30

if (rbx_8 != 0)
    rax_53 = sub_142a1bdc0

data_144020fc0 = rax_53
int32_t* (* rax_54)(int32_t* arg1, int32_t arg2, int32_t* arg3, int32_t arg4, void* arg5) =
    sub_142a1b1c0

if (rcx_11 != 0)
    rax_54 = sub_1403983a4

data_144020f80 = rax_54
int32_t* (* rax_55)(int32_t* arg1, int32_t arg2, int32_t* arg3, int32_t arg4, void* arg5) =
    sub_142a1b340

if (r8_3 != 0)
    rax_55 = sub_14039f80c

data_144020f60 = rax_55
uint64_t (* rax_56)(int32_t (* arg1)[0x4], int32_t arg2, int128_t* arg3, int32_t arg4) =
    sub_14039f950

if (rbx_8 != 0)
    rax_56 = sub_142a1bf60

data_144020f00 = rax_56
uint64_t (* rax_57)(int32_t (* arg1)[0x4], int32_t arg2, int128_t* arg3, int32_t arg4, 
    uint8_t (* arg5)[0x10]) = sub_14039fa50

if (rbx_8 != 0)
    rax_57 = sub_142a1bee0

data_144020ee8 = rax_57
uint64_t (* rax_58)(int32_t (* arg1)[0x4], int32_t arg2, int128_t* arg3, int32_t arg4) =
    sub_14039f8e0

if (rbx_8 != 0)
    rax_58 = sub_142a1c050

data_144020eb0 = rax_58
uint64_t (* rax_59)(int32_t (* arg1)[0x4], int32_t arg2, int128_t* arg3, int32_t arg4, 
    uint8_t (* arg5)[0x10]) = sub_14039f9c0

if (rbx_8 != 0)
    rax_59 = sub_142a1bfd0

data_144020e88 = rax_59
int32_t (* rax_60)(int128_t* arg1, int32_t arg2, int64_t* arg3, int32_t arg4, 
    int32_t (* arg5)[0x4])[0x4] = sub_1403a05d0

if (rbx_8 != 0)
    rax_60 = sub_142a1c190

data_144020e68 = rax_60
int32_t* (* rax_61)(int32_t* arg1, int32_t arg2, int32_t* arg3, int32_t arg4, void* arg5) =
    sub_142a1b4c0

if (rcx_11 != 0)
    rax_61 = sub_140397f92

data_144020e18 = rax_61
int32_t* (* rax_62)(int32_t* arg1, int32_t arg2, int32_t* arg3, int32_t arg4, void* arg5) =
    sub_142a1b670

if (r8_3 != 0)
    rax_62 = sub_14039f4de

data_144020de8 = rax_62
int32_t* (* rax_63)(int32_t* arg1, int32_t arg2, int32_t* arg3, int32_t arg4, void* arg5) =
    sub_142a1b820

if (rcx_11 != 0)
    rax_63 = sub_14039823f

data_144020da0 = rax_63
int32_t* (* rax_64)(int32_t* arg1, int32_t arg2, int32_t* arg3, int32_t arg4, void* arg5) =
    sub_142a1b9d0

if (r8_3 != 0)
    rax_64 = sub_14039f324

data_144021048 = rax_64
uint64_t (* rax_65)(int64_t arg1, int64_t arg2, char* arg3, int64_t arg4, int64_t arg5, 
    int32_t arg6, int64_t arg7, int32_t arg8, int32_t arg9, int32_t arg10) = sub_142a1cb10

if (rdx_11 != 0)
    rax_65 = sub_1429ec9c0

data_144021020 = rax_65
uint64_t (* rax_66)(int128_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int128_t* arg5, 
    int32_t arg6, int32_t* arg7, uint8_t (* arg8)[0x10]) = sub_142a031c0

if (rdx_11 != 0)
    rax_66 = sub_142a03240

data_144020fb0 = rax_66
uint64_t (* rax_67)(int128_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int128_t* arg5, 
    int32_t arg6, int32_t* arg7, uint8_t (* arg8)[0x10]) = sub_142a032c0

if (rdx_11 != 0)
    rax_67 = sub_142a03340

data_144020f90 = rax_67
uint64_t (* rax_68)(int128_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int128_t* arg5, 
    int32_t arg6, int32_t* arg7, uint8_t (* arg8)[0x10]) = sub_142a033c0

if (rdx_11 != 0)
    rax_68 = sub_142a03440

data_144020f50 = rax_68
uint64_t (* rax_69)(int128_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int128_t* arg5, 
    int32_t arg6, int32_t* arg7, uint8_t (* arg8)[0x10]) = sub_142a034c0

if (rdx_11 != 0)
    rax_69 = sub_142a035d0

data_144020f20 = rax_69
uint64_t (* rax_70)(int128_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int128_t* arg5, 
    int32_t arg6, int32_t* arg7, uint8_t (* arg8)[0x10]) = sub_142a036e0

if (rdx_11 != 0)
    rax_70 = sub_142a037f0

if (rbx_8 != 0)
    rax_70 = sub_142a19e90

data_144020ee0 = rax_70
uint64_t (* rax_71)(int128_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int128_t* arg5, 
    int32_t arg6, int32_t* arg7, uint8_t (* arg8)[0x10]) = sub_142a03900

if (rdx_11 != 0)
    rax_71 = sub_142a03a10

data_144020ea8 = rax_71
uint64_t (* rax_72)(int32_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t* arg5, 
    int32_t arg6, int32_t* arg7, int64_t* arg8) = sub_142a03b20

if (rdx_11 != 0)
    rax_72 = sub_142a03ba0

data_144020e78 = rax_72
uint64_t (* rax_73)(int32_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t* arg5, 
    int32_t arg6, int32_t* arg7, int64_t* arg8) = sub_142a03c20

if (rdx_11 != 0)
    rax_73 = sub_142a03ca0

data_144020e30 = rax_73
uint64_t (* rax_74)(int128_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int128_t* arg5, 
    int32_t arg6, int32_t* arg7, uint8_t (* arg8)[0x10]) = sub_142a03d20

if (rdx_11 != 0)
    rax_74 = sub_142a03f00

data_144020e00 = rax_74
uint64_t (* rax_75)(int128_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int128_t* arg5, 
    int32_t arg6, int32_t* arg7, uint8_t (* arg8)[0x10]) = sub_142a040e0

if (rdx_11 != 0)
    rax_75 = sub_142a042c0

if (rbx_8 != 0)
    rax_75 = sub_142a19f00

data_144020dc0 = rax_75
uint64_t (* rax_76)(int64_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int64_t* arg5, 
    int32_t arg6, int32_t* arg7, uint8_t (* arg8)[0x10]) = sub_142a044a0

if (rdx_11 != 0)
    rax_76 = sub_142a04520

data_144020da8 = rax_76
uint64_t (* rax_77)(int64_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int64_t* arg5, 
    int32_t arg6, int32_t* arg7, uint8_t (* arg8)[0x10]) = sub_142a045a0

if (rdx_11 != 0)
    rax_77 = sub_142a04620

data_144021040 = rax_77
uint64_t (* rax_78)(int64_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int64_t* arg5, 
    int32_t arg6, int32_t* arg7, uint8_t (* arg8)[0x10]) = sub_142a046a0

if (rdx_11 != 0)
    rax_78 = sub_142a04720

data_144021028 = rax_78
uint64_t (* rax_79)(int128_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int128_t* arg5, 
    int32_t arg6, int32_t* arg7) = sub_142a047a0

if (rdx_11 != 0)
    rax_79 = sub_142a04810

data_144021008 = rax_79
uint64_t (* rax_80)(int128_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int128_t* arg5, 
    int32_t arg6, int32_t* arg7) = sub_142a04880

if (rdx_11 != 0)
    rax_80 = sub_142a048f0

data_144020fd8 = rax_80
uint64_t (* rax_81)(int128_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int128_t* arg5, 
    int32_t arg6, int32_t* arg7) = sub_142a04960

if (rdx_11 != 0)
    rax_81 = sub_142a049d0

data_144020fa0 = rax_81
uint64_t (* rax_82)(int128_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int128_t* arg5, 
    int32_t arg6, int32_t* arg7) = sub_142a04a40

if (rdx_11 != 0)
    rax_82 = sub_142a04b30

data_144020f98 = rax_82
uint64_t (* rax_83)(int128_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int128_t* arg5, 
    int32_t arg6, int32_t* arg7) = sub_142a04c20

if (rdx_11 != 0)
    rax_83 = sub_142a04d10

if (rbx_8 != 0)
    rax_83 = sub_142a1a000

data_144020f48 = rax_83
uint64_t (* rax_84)(int128_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int128_t* arg5, 
    int32_t arg6, int32_t* arg7) = sub_142a04e00

if (rdx_11 != 0)
    rax_84 = sub_142a04ef0

data_144020f28 = rax_84
uint64_t (* rax_85)(int32_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t* arg5, 
    int32_t arg6, int32_t* arg7) = sub_142a04fe0

if (rdx_11 != 0)
    rax_85 = sub_142a05050

data_144020ef8 = rax_85
uint64_t (* rax_86)(int32_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t* arg5, 
    int32_t arg6, int32_t* arg7) = sub_142a050c0

if (rdx_11 != 0)
    rax_86 = sub_142a05130

data_144020ed0 = rax_86
uint64_t (* rax_87)(int128_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int128_t* arg5, 
    int32_t arg6, int32_t* arg7) = sub_142a051a0

if (rdx_11 != 0)
    rax_87 = sub_142a05330

data_144020e90 = rax_87
uint64_t (* rax_88)(int128_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int128_t* arg5, 
    int32_t arg6, int32_t* arg7) = sub_142a054c0

if (rdx_11 != 0)
    rax_88 = sub_142a05650

if (rbx_8 != 0)
    rax_88 = sub_142a1a050

data_144020e60 = rax_88
uint64_t (* rax_89)(int64_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int64_t* arg5, 
    int32_t arg6, int32_t* arg7) = sub_142a057e0

if (rdx_11 != 0)
    rax_89 = sub_142a05850

data_144020e20 = rax_89
uint64_t (* rax_90)(int64_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int64_t* arg5, 
    int32_t arg6, int32_t* arg7) = sub_142a058c0

if (rdx_11 != 0)
    rax_90 = sub_142a05930

data_144020df0 = rax_90
uint64_t (* rax_91)(int64_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int64_t* arg5, 
    int32_t arg6, int32_t* arg7) = sub_142a059a0

if (rdx_11 != 0)
    rax_91 = sub_142a05a10

data_144020dd0 = rax_91
uint64_t (* rax_92)(int128_t* arg1, int32_t arg2, int128_t* arg3, int32_t arg4, int32_t* arg5) =
    sub_142a05a80

if (rbx_8 != 0)
    rax_92 = sub_142a1a120

data_144021010 = rax_92
uint64_t (* rax_93)(int128_t* arg1, int32_t arg2, int64_t arg3, int32_t arg4, int32_t* arg5) =
    sub_142a05ac0

if (rbx_8 != 0)
    rax_93 = sub_142a1a170

data_144020fe0 = rax_93
uint64_t (* rax_94)(int128_t* arg1, int32_t arg2, int64_t arg3, int32_t arg4, int64_t arg5) =
    sub_142a05c10

if (rbx_8 != 0)
    rax_94 = __FrameHandler3::GetRangeOfTrysToCheck

data_144020fb8 = rax_94
uint64_t (* rax_95)(int128_t* arg1, int32_t arg2, int64_t arg3, int32_t arg4, int64_t arg5) =
    sub_142a05e90

if (rbx_8 != 0)
    rax_95 = sub_142a1a290

data_144020f78 = rax_95
uint64_t (* result)(int128_t* arg1, int32_t arg2, int64_t arg3, int32_t arg4, int64_t arg5) =
    sub_142a06020

if (rbx_8 != 0)
    result = sub_142a1a3b0

data_144020f58 = result
return result
