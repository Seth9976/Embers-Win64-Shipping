// 函数: sub_140b58510
// 地址: 0x140b58510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

InitializeSRWLock(arg1)
int32_t rbx = 0
memset(&arg1[2], 0, 0x10000)
sub_140b673e0()
SRWLOCK* result = sub_140a82f70(0x20000, zx.q(data_1439a9580.d))
void* __offset(_RTL_SRWLOCK, 0x10040) SRWLock = 0x10040
int64_t i_6 = 0x10
int64_t i

do
    InitializeSRWLock(SRWLock)
    __builtin_memset(SRWLock + 8, 0, 0x20)
    SRWLock += 0x40
    i = i_6
    i_6 -= 1
while (i != 1)
void* __offset(_RTL_SRWLOCK, 0x10440) r12 = &result[0x2088]
void* __offset(_RTL_SRWLOCK, 0x10440) rax_1 = r12
uint64_t i_5 = zx.q((i_6 + 0x2b).d)
uint64_t i_1

do
    __builtin_memset(rax_1, 0, 0x40)
    rax_1 += 0x40
    i_1 = i_5
    i_5 -= 1
while (i_1 != 1)
__builtin_memset(rax_1, 0, 0x38)
void* __offset(_RTL_SRWLOCK, 0x12f50) rcx_2 = &result[0x25ea]
result = 0
result->__offset(0x12f48).d = 0
result->__offset(0x12f4c).d = 0x200
rcx_2 - 0x12f50 = 0
(rcx_2 - 0x12f50)->__offset(0x12f98).d = 0
(rcx_2 - 0x12f50)->__offset(0x12f9c).d = 0x200

if (rcx_2 != 0x12f50)
    rcx_2 -= 0x12f50

__builtin_memset(rcx_2, 0, 0x40)
result->__offset(0x12fa0).d = 0xffffffff
result->__offset(0x12fa4).d = 0
result = 0
result->__offset(0x133b0).d = 0

if (0 != 0x400)
    void* __offset(_RTL_SRWLOCK, 0x10050) rdi = &0x10[0x2008]
    
    do
        rdi - 0x10050 = result
        int64_t rax_3 = sub_140a82f30(0x400, 4)
        rdi - 0x10050 = rax_3
        memset(rax_3, 0, 0x400)
        (rdi - 0x10050)->__offset(0x1004c).d = 0xff
        rdi += 0x40
    while (rdi - 0x10 != &0x400[0x2008])

int32_t var_db0 = 4
char const* const var_db8 = "None"
char var_dac = 0
int128_t var_b08 = var_db8.o
int32_t var_db0_1 = 0xc
char var_dac_1 = 0
void arg_8
int32_t rcx_5 = *sub_140b637e0(result, &arg_8, &var_b08)
var_db8 = "ByteProperty"
int128_t zmm0_1 = var_db8.o
(r12 - 0x10440)->__offset(0x10440).d = rcx_5
int128_t var_af8 = zmm0_1
int32_t var_db0_2 = 0xb
char var_dac_2 = 0
void arg_10
int32_t rcx_7 = *sub_140b637e0(result, &arg_10, &var_af8)
var_db8 = "IntProperty"
int128_t zmm0_2 = var_db8.o
result->__offset(0x10444).d = rcx_7
int128_t var_ae8 = zmm0_2
int32_t var_db0_3 = 0xc
char var_dac_3 = 0
void arg_18
int32_t rcx_9 = *sub_140b637e0(result, &arg_18, &var_ae8)
var_db8 = "BoolProperty"
int128_t zmm0_3 = var_db8.o
result->__offset(0x10448).d = rcx_9
int128_t var_ad8 = zmm0_3
int32_t var_db0_4 = 0xd
char var_dac_4 = 0
void arg_20
int32_t rcx_11 = *sub_140b637e0(result, &arg_20, &var_ad8)
var_db8 = "FloatProperty"
int128_t zmm0_4 = var_db8.o
result->__offset(0x1044c).d = rcx_11
int128_t var_ac8 = zmm0_4
int32_t var_db0_5 = 0xe
char var_dac_5 = 0
void var_bb8
int32_t rcx_13 = *sub_140b637e0(result, &var_bb8, &var_ac8)
var_db8 = "ObjectProperty"
int128_t zmm0_5 = var_db8.o
result->__offset(0x10450).d = rcx_13
int128_t var_ab8 = zmm0_5
int32_t var_db0_6 = 0xc
char var_dac_6 = 0
void var_da8
int32_t rcx_15 = *sub_140b637e0(result, &var_da8, &var_ab8)
var_db8 = "NameProperty"
int128_t zmm0_6 = var_db8.o
result->__offset(0x10454).d = rcx_15
int128_t var_aa8 = zmm0_6
int32_t var_db0_7 = 0x10
char var_dac_7 = 0
void var_da4
int32_t rcx_17 = *sub_140b637e0(result, &var_da4, &var_aa8)
var_db8 = "DelegateProperty"
int128_t zmm0_7 = var_db8.o
result->__offset(0x10458).d = rcx_17
int128_t var_a98 = zmm0_7
int32_t var_db0_8 = 0xe
char var_dac_8 = 0
void var_da0
int32_t rcx_19 = *sub_140b637e0(result, &var_da0, &var_a98)
var_db8 = "DoubleProperty"
int128_t zmm0_8 = var_db8.o
result->__offset(0x1045c).d = rcx_19
int128_t var_a88 = zmm0_8
int32_t var_db0_9 = 0xd
char var_dac_9 = 0
void var_d9c
int32_t rcx_21 = *sub_140b637e0(result, &var_d9c, &var_a88)
var_db8 = "ArrayProperty"
int128_t zmm0_9 = var_db8.o
result->__offset(0x10460).d = rcx_21
int128_t var_a78 = zmm0_9
int32_t var_db0_10 = 0xe
char var_dac_10 = 0
void var_d98
int32_t rcx_23 = *sub_140b637e0(result, &var_d98, &var_a78)
var_db8 = "StructProperty"
int128_t zmm0_10 = var_db8.o
result->__offset(0x10464).d = rcx_23
int128_t var_a68 = zmm0_10
int32_t var_db0_11 = 0xe
char var_dac_11 = 0
void var_d94
int32_t rcx_25 = *sub_140b637e0(result, &var_d94, &var_a68)
var_db8 = "VectorProperty"
int128_t zmm0_11 = var_db8.o
result->__offset(0x10468).d = rcx_25
int128_t var_a58 = zmm0_11
int32_t var_db0_12 = 0xf
char var_dac_12 = 0
void var_d90
int32_t rcx_27 = *sub_140b637e0(result, &var_d90, &var_a58)
var_db8 = "RotatorProperty"
int128_t zmm0_12 = var_db8.o
result->__offset(0x1046c).d = rcx_27
int128_t var_a48 = zmm0_12
int32_t var_db0_13 = 0xb
char var_dac_13 = 0
void var_d8c
int32_t rcx_29 = *sub_140b637e0(result, &var_d8c, &var_a48)
var_db8 = "StrProperty"
int128_t var_a38 = var_db8.o
result->__offset(0x10470).d = rcx_29
int32_t var_db0_14 = 0xc
char var_dac_14 = 0
void var_d88
int32_t rcx_31 = *sub_140b637e0(result, &var_d88, &var_a38)
var_db8 = "TextProperty"
int128_t zmm0_14 = var_db8.o
result->__offset(0x10474).d = rcx_31
int128_t var_a28 = zmm0_14
int32_t var_db0_15 = 0x11
char var_dac_15 = 0
void var_d84
int32_t rcx_33 = *sub_140b637e0(result, &var_d84, &var_a28)
var_db8 = "InterfaceProperty"
int128_t zmm0_15 = var_db8.o
result->__offset(0x10478).d = rcx_33
int128_t var_a18 = zmm0_15
int32_t var_db0_16 = 0x19
char var_dac_16 = 0
void var_d80
int32_t rcx_35 = *sub_140b637e0(result, &var_d80, &var_a18)
var_db8 = "MulticastDelegateProperty"
int128_t zmm0_16 = var_db8.o
result->__offset(0x1047c).d = rcx_35
int128_t var_a08 = zmm0_16
int32_t var_db0_17 = 0x12
char var_dac_17 = 0
void var_d7c
int32_t rcx_37 = *sub_140b637e0(result, &var_d7c, &var_a08)
var_db8 = "LazyObjectProperty"
int128_t zmm0_17 = var_db8.o
result->__offset(0x10480).d = rcx_37
int128_t var_9f8 = zmm0_17
int32_t var_db0_18 = 0x12
char var_dac_18 = 0
void var_d78
int32_t rcx_39 = *sub_140b637e0(result, &var_d78, &var_9f8)
var_db8 = "SoftObjectProperty"
int128_t zmm0_18 = var_db8.o
result->__offset(0x10488).d = rcx_39
int128_t var_9e8 = zmm0_18
int32_t var_db0_19 = 0xd
char var_dac_19 = 0
void var_d74
int32_t rcx_41 = *sub_140b637e0(result, &var_d74, &var_9e8)
var_db8 = "Int64Property"
int128_t zmm0_19 = var_db8.o
result->__offset(0x1048c).d = rcx_41
int128_t var_9d8 = zmm0_19
int32_t var_db0_20 = 0xd
void var_d70
int32_t rcx_43 = *sub_140b637e0(result, &var_d70, &var_9d8)
var_db8 = "Int32Property"
result->__offset(0x10490).d = rcx_43
char var_dac_20 = 0
int128_t var_9c8 = var_db8.o
int32_t var_db0_21 = 0xd
char var_dac_21 = 0
void var_d6c
int32_t rcx_45 = *sub_140b637e0(result, &var_d6c, &var_9c8)
var_db8 = "Int16Property"
int128_t zmm0_21 = var_db8.o
result->__offset(0x10494).d = rcx_45
int128_t var_9b8 = zmm0_21
int32_t var_db0_22 = 0xc
char var_dac_22 = 0
void var_d68
int32_t rcx_47 = *sub_140b637e0(result, &var_d68, &var_9b8)
var_db8 = "Int8Property"
int128_t zmm0_22 = var_db8.o
result->__offset(0x10498).d = rcx_47
int128_t var_9a8 = zmm0_22
int32_t var_db0_23 = 0xe
char var_dac_23 = 0
void var_d64
int32_t rcx_49 = *sub_140b637e0(result, &var_d64, &var_9a8)
var_db8 = "UInt64Property"
int128_t zmm0_23 = var_db8.o
result->__offset(0x1049c).d = rcx_49
int128_t var_998 = zmm0_23
int32_t var_db0_24 = 0xe
char var_dac_24 = 0
void var_d60
int32_t rcx_51 = *sub_140b637e0(result, &var_d60, &var_998)
var_db8 = "UInt32Property"
int128_t zmm0_24 = var_db8.o
result->__offset(0x104a0).d = rcx_51
int128_t var_988 = zmm0_24
int32_t var_db0_25 = 0xe
char var_dac_25 = 0
void var_d5c
int32_t rcx_53 = *sub_140b637e0(result, &var_d5c, &var_988)
var_db8 = "UInt16Property"
int128_t zmm0_25 = var_db8.o
result->__offset(0x104a4).d = rcx_53
int128_t var_978 = zmm0_25
int32_t var_db0_26 = 0xb
char var_dac_26 = 0
void var_d58
int32_t rcx_55 = *sub_140b637e0(result, &var_d58, &var_978)
var_db8 = "MapProperty"
int128_t zmm0_26 = var_db8.o
result->__offset(0x104a8).d = rcx_55
int128_t var_968 = zmm0_26
void var_d54
result->__offset(0x104b0).d = *sub_140b637e0(result, &var_d54, &var_968)
int32_t var_db0_27 = 0xb
var_db8 = "SetProperty"
char var_dac_27 = 0
int128_t var_958 = var_db8.o
int32_t var_db0_28 = 4
char var_dac_28 = 0
void var_d50
int32_t rcx_59 = *sub_140b637e0(result, &var_d50, &var_958)
var_db8 = "Core"
int128_t zmm0_28 = var_db8.o
result->__offset(0x104b4).d = rcx_59
int128_t var_948 = zmm0_28
int32_t var_db0_29 = 6
char var_dac_29 = 0
void var_d4c
int32_t rcx_61 = *sub_140b637e0(result, &var_d4c, &var_948)
var_db8 = "Engine"
int128_t zmm0_29 = var_db8.o
result->__offset(0x104b8).d = rcx_61
int128_t var_938 = zmm0_29
int32_t var_db0_30 = 6
char var_dac_30 = 0
void var_d48
int32_t rcx_63 = *sub_140b637e0(result, &var_d48, &var_938)
var_db8 = "Editor"
int128_t zmm0_30 = var_db8.o
result->__offset(0x104bc).d = rcx_63
int128_t var_928 = zmm0_30
int32_t var_db0_31 = 0xb
char var_dac_31 = 0
void var_d44
int32_t rcx_65 = *sub_140b637e0(result, &var_d44, &var_928)
var_db8 = "CoreUObject"
int128_t zmm0_31 = var_db8.o
result->__offset(0x104c0).d = rcx_65
int128_t var_918 = zmm0_31
int32_t var_db0_32 = 0xc
char var_dac_32 = 0
void var_d40
int32_t rcx_67 = *sub_140b637e0(result, &var_d40, &var_918)
var_db8 = "EnumProperty"
int128_t zmm0_32 = var_db8.o
result->__offset(0x104c4).d = rcx_67
int128_t var_908 = zmm0_32
int32_t var_db0_33 = 8
char var_dac_33 = 0
void var_d3c
int32_t rcx_69 = *sub_140b637e0(result, &var_d3c, &var_908)
var_db8 = "Cylinder"
int128_t zmm0_33 = var_db8.o
result->__offset(0x104c8).d = rcx_69
int128_t var_8f8 = zmm0_33
int32_t var_db0_34 = 0xf
char var_dac_34 = 0
void var_d38
int32_t rcx_71 = *sub_140b637e0(result, &var_d38, &var_8f8)
var_db8 = "BoxSphereBounds"
int128_t zmm0_34 = var_db8.o
result->__offset(0x10508).d = rcx_71
int128_t var_8e8 = zmm0_34
int32_t var_db0_35 = 6
char var_dac_35 = 0
void var_d34
int32_t rcx_73 = *sub_140b637e0(result, &var_d34, &var_8e8)
var_db8 = "Sphere"
int128_t zmm0_35 = var_db8.o
result->__offset(0x1050c).d = rcx_73
int128_t var_8d8 = zmm0_35
int32_t var_db0_36 = 3
char var_dac_36 = 0
void var_d30
int32_t rcx_75 = *sub_140b637e0(result, &var_d30, &var_8d8)
var_db8 = &data_142e7b470
int128_t zmm0_36 = var_db8.o
result->__offset(0x10510).d = rcx_75
int128_t var_8c8 = zmm0_36
int32_t var_db0_37 = 8
char var_dac_37 = 0
void var_d2c
int32_t rcx_77 = *sub_140b637e0(result, &var_d2c, &var_8c8)
var_db8 = "Vector2D"
int128_t zmm0_37 = var_db8.o
result->__offset(0x10514).d = rcx_77
int128_t var_8b8 = zmm0_37
int32_t var_db0_38 = 7
char var_dac_38 = 0
void var_d28
int32_t rcx_79 = *sub_140b637e0(result, &var_d28, &var_8b8)
var_db8 = "IntRect"
int128_t zmm0_38 = var_db8.o
result->__offset(0x10518).d = rcx_79
int128_t var_8a8 = zmm0_38
int32_t var_db0_39 = 8
char var_dac_39 = 0
void var_d24
int32_t rcx_81 = *sub_140b637e0(result, &var_d24, &var_8a8)
var_db8 = "IntPoint"
int128_t zmm0_39 = var_db8.o
result->__offset(0x1051c).d = rcx_81
int128_t var_898 = zmm0_39
int32_t var_db0_40 = 7
char var_dac_40 = 0
void var_d20
int32_t rcx_83 = *sub_140b637e0(result, &var_d20, &var_898)
var_db8 = "Vector4"
int128_t var_888 = var_db8.o
result->__offset(0x10520).d = rcx_83
int32_t var_db0_41 = 4
char var_dac_41 = 0
void var_d1c
int32_t rcx_85 = *sub_140b637e0(result, &var_d1c, &var_888)
var_db8 = "Name"
int128_t zmm0_41 = var_db8.o
result->__offset(0x10524).d = rcx_85
int128_t var_878 = zmm0_41
int32_t var_db0_42 = 6
char var_dac_42 = 0
void var_d18
int32_t rcx_87 = *sub_140b637e0(result, &var_d18, &var_878)
var_db8 = "Vector"
int128_t zmm0_42 = var_db8.o
result->__offset(0x10528).d = rcx_87
int128_t var_868 = zmm0_42
int32_t var_db0_43 = 7
char var_dac_43 = 0
void var_d14
int32_t rcx_89 = *sub_140b637e0(result, &var_d14, &var_868)
var_db8 = "Rotator"
int128_t zmm0_43 = var_db8.o
result->__offset(0x1052c).d = rcx_89
int128_t var_858 = zmm0_43
int32_t var_db0_44 = 8
char var_dac_44 = 0
void var_d10
int32_t rcx_91 = *sub_140b637e0(result, &var_d10, &var_858)
var_db8 = "SHVector"
int128_t zmm0_44 = var_db8.o
result->__offset(0x10530).d = rcx_91
int128_t var_848 = zmm0_44
int32_t var_db0_45 = 5
char var_dac_45 = 0
void var_d0c
int32_t rcx_93 = *sub_140b637e0(result, &var_d0c, &var_848)
var_db8 = "Color"
int128_t zmm0_45 = var_db8.o
result->__offset(0x10534).d = rcx_93
int128_t var_838 = zmm0_45
int32_t var_db0_46 = 5
char var_dac_46 = 0
void var_d08
int32_t rcx_95 = *sub_140b637e0(result, &var_d08, &var_838)
var_db8 = "Plane"
int128_t zmm0_46 = var_db8.o
result->__offset(0x10538).d = rcx_95
int128_t var_828 = zmm0_46
int32_t var_db0_47 = 6
void var_d04
int32_t rcx_97 = *sub_140b637e0(result, &var_d04, &var_828)
var_db8 = "Matrix"
result->__offset(0x1053c).d = rcx_97
char var_dac_47 = 0
int128_t var_818 = var_db8.o
int32_t var_db0_48 = 0xb
char var_dac_48 = 0
void var_d00
int32_t rcx_99 = *sub_140b637e0(result, &var_d00, &var_818)
var_db8 = "LinearColor"
int128_t zmm0_48 = var_db8.o
result->__offset(0x10540).d = rcx_99
int128_t var_808 = zmm0_48
int32_t var_db0_49 = 0xc
char var_dac_49 = 0
void var_cfc
int32_t rcx_101 = *sub_140b637e0(result, &var_cfc, &var_808)
var_db8 = "AdvanceFrame"
int128_t zmm0_49 = var_db8.o
result->__offset(0x10544).d = rcx_101
int128_t var_7f8 = zmm0_49
int32_t var_db0_50 = 7
char var_dac_50 = 0
void var_cf8
int32_t rcx_103 = *sub_140b637e0(result, &var_cf8, &var_7f8)
var_db8 = "Pointer"
int128_t zmm0_50 = var_db8.o
result->__offset(0x10548).d = rcx_103
int128_t var_7e8 = zmm0_50
int32_t var_db0_51 = 6
char var_dac_51 = 0
void var_cf4
int32_t rcx_105 = *sub_140b637e0(result, &var_cf4, &var_7e8)
var_db8 = "Double"
int128_t zmm0_51 = var_db8.o
result->__offset(0x1054c).d = rcx_105
int128_t var_7d8 = zmm0_51
int32_t var_db0_52 = 4
char var_dac_52 = 0
void var_cf0
int32_t rcx_107 = *sub_140b637e0(result, &var_cf0, &var_7d8)
var_db8 = "Quat"
int128_t zmm0_52 = var_db8.o
result->__offset(0x10550).d = rcx_107
int128_t var_7c8 = zmm0_52
int32_t var_db0_53 = 4
char var_dac_53 = 0
void var_cec
int32_t rcx_109 = *sub_140b637e0(result, &var_cec, &var_7c8)
var_db8 = "Self"
int128_t zmm0_53 = var_db8.o
result->__offset(0x10554).d = rcx_109
int128_t var_7b8 = zmm0_53
void var_ce8
result->__offset(0x10558).d = *sub_140b637e0(result, &var_ce8, &var_7b8)
int32_t var_db0_54 = 9
var_db8 = "Transform"
char var_dac_54 = 0
int128_t var_7a8 = var_db8.o
int32_t var_db0_55 = 6
char var_dac_55 = 0
void var_ce4
int32_t rcx_113 = *sub_140b637e0(result, &var_ce4, &var_7a8)
var_db8 = "Object"
int128_t zmm0_55 = var_db8.o
result->__offset(0x1055c).d = rcx_113
int128_t var_798 = zmm0_55
int32_t var_db0_56 = 6
char var_dac_56 = 0
void var_ce0
int32_t rcx_115 = *sub_140b637e0(result, &var_ce0, &var_798)
var_db8 = "Camera"
int128_t zmm0_56 = var_db8.o
result->__offset(0x105d0).d = rcx_115
int128_t var_788 = zmm0_56
int32_t var_db0_57 = 5
char var_dac_57 = 0
void var_cdc
int32_t rcx_117 = *sub_140b637e0(result, &var_cdc, &var_788)
var_db8 = "Actor"
int128_t zmm0_57 = var_db8.o
result->__offset(0x105d4).d = rcx_117
int128_t var_778 = zmm0_57
int32_t var_db0_58 = 0x10
char var_dac_58 = 0
void var_cd8
int32_t rcx_119 = *sub_140b637e0(result, &var_cd8, &var_778)
var_db8 = "ObjectRedirector"
int128_t zmm0_58 = var_db8.o
result->__offset(0x105d8).d = rcx_119
int128_t var_768 = zmm0_58
int32_t var_db0_59 = 0xf
char var_dac_59 = 0
void var_cd4
int32_t rcx_121 = *sub_140b637e0(result, &var_cd4, &var_768)
var_db8 = "ObjectArchetype"
int128_t zmm0_59 = var_db8.o
result->__offset(0x105dc).d = rcx_121
int128_t var_758 = zmm0_59
int32_t var_db0_60 = 5
char var_dac_60 = 0
void var_cd0
int32_t rcx_123 = *sub_140b637e0(result, &var_cd0, &var_758)
var_db8 = "Class"
int128_t zmm0_60 = var_db8.o
result->__offset(0x105e0).d = rcx_123
int128_t var_748 = zmm0_60
int32_t var_db0_61 = 0xc
char var_dac_61 = 0
void var_ccc
int32_t rcx_125 = *sub_140b637e0(result, &var_ccc, &var_748)
var_db8 = "ScriptStruct"
int128_t zmm0_61 = var_db8.o
result->__offset(0x105e4).d = rcx_125
int128_t var_738 = zmm0_61
int32_t var_db0_62 = 8
char var_dac_62 = 0
void var_cc8
int32_t rcx_127 = *sub_140b637e0(result, &var_cc8, &var_738)
var_db8 = "Function"
int128_t zmm0_62 = var_db8.o
result->__offset(0x105e8).d = rcx_127
int128_t var_728 = zmm0_62
int32_t var_db0_63 = 5
char var_dac_63 = 0
void var_cc4
int32_t rcx_129 = *sub_140b637e0(result, &var_cc4, &var_728)
var_db8 = "State"
int128_t zmm0_63 = var_db8.o
result->__offset(0x105ec).d = rcx_129
int128_t var_718 = zmm0_63
int32_t var_db0_64 = 4
char var_dac_64 = 0
void var_cc0
int32_t rcx_131 = *sub_140b637e0(result, &var_cc0, &var_718)
var_db8 = "TRUE"
int128_t zmm0_64 = var_db8.o
result->__offset(0x10760).d = rcx_131
int128_t var_708 = zmm0_64
int32_t var_db0_65 = 5
char var_dac_65 = 0
void var_cbc
int32_t rcx_133 = *sub_140b637e0(result, &var_cbc, &var_708)
var_db8 = "FALSE"
int128_t zmm0_65 = var_db8.o
result->__offset(0x10764).d = rcx_133
int128_t var_6f8 = zmm0_65
int32_t var_db0_66 = 4
char var_dac_66 = 0
void var_cb8
int32_t rcx_135 = *sub_140b637e0(result, &var_cb8, &var_6f8)
var_db8 = "Enum"
int128_t zmm0_66 = var_db8.o
result->__offset(0x10768).d = rcx_135
int128_t var_6e8 = zmm0_66
int32_t var_db0_67 = 7
char var_dac_67 = 0
void var_cb4
int32_t rcx_137 = *sub_140b637e0(result, &var_cb4, &var_6e8)
var_db8 = "Default"
int128_t var_6d8 = var_db8.o
result->__offset(0x1076c).d = rcx_137
int32_t var_db0_68 = 4
char var_dac_68 = 0
void var_cb0
int32_t rcx_139 = *sub_140b637e0(result, &var_cb0, &var_6d8)
var_db8 = "Skip"
int128_t zmm0_68 = var_db8.o
result->__offset(0x10770).d = rcx_139
int128_t var_6c8 = zmm0_68
int32_t var_db0_69 = 5
char var_dac_69 = 0
void var_cac
int32_t rcx_141 = *sub_140b637e0(result, &var_cac, &var_6c8)
var_db8 = "Input"
int128_t zmm0_69 = var_db8.o
result->__offset(0x10774).d = rcx_141
int128_t var_6b8 = zmm0_69
int32_t var_db0_70 = 7
char var_dac_70 = 0
void var_ca8
int32_t rcx_143 = *sub_140b637e0(result, &var_ca8, &var_6b8)
var_db8 = "Package"
int128_t zmm0_70 = var_db8.o
result->__offset(0x10778).d = rcx_143
int128_t var_6a8 = zmm0_70
int32_t var_db0_71 = 6
char var_dac_71 = 0
void var_ca4
int32_t rcx_145 = *sub_140b637e0(result, &var_ca4, &var_6a8)
var_db8 = "Groups"
int128_t zmm0_71 = var_db8.o
result->__offset(0x1077c).d = rcx_145
int128_t var_698 = zmm0_71
int32_t var_db0_72 = 9
char var_dac_72 = 0
void var_ca0
int32_t rcx_147 = *sub_140b637e0(result, &var_ca0, &var_698)
var_db8 = "Interface"
int128_t zmm0_72 = var_db8.o
result->__offset(0x10780).d = rcx_147
int128_t var_688 = zmm0_72
int32_t var_db0_73 = 0xa
char var_dac_73 = 0
void var_c9c
int32_t rcx_149 = *sub_140b637e0(result, &var_c9c, &var_688)
var_db8 = "Components"
int128_t zmm0_73 = var_db8.o
result->__offset(0x10784).d = rcx_149
int128_t var_678 = zmm0_73
int32_t var_db0_74 = 6
void var_c98
int32_t rcx_151 = *sub_140b637e0(result, &var_c98, &var_678)
var_db8 = "Global"
result->__offset(0x10788).d = rcx_151
char var_dac_74 = 0
int128_t var_668 = var_db8.o
int32_t var_db0_75 = 5
char var_dac_75 = 0
void var_c94
int32_t rcx_153 = *sub_140b637e0(result, &var_c94, &var_668)
var_db8 = "Super"
int128_t zmm0_75 = var_db8.o
result->__offset(0x1078c).d = rcx_153
int128_t var_658 = zmm0_75
int32_t var_db0_76 = 5
char var_dac_76 = 0
void var_c90
int32_t rcx_155 = *sub_140b637e0(result, &var_c90, &var_658)
var_db8 = "Outer"
int128_t zmm0_76 = var_db8.o
result->__offset(0x10790).d = rcx_155
int128_t var_648 = zmm0_76
int32_t var_db0_77 = 3
char var_dac_77 = 0
void var_c8c
int32_t rcx_157 = *sub_140b637e0(result, &var_c8c, &var_648)
var_db8 = &data_142e7b5dc
int128_t zmm0_77 = var_db8.o
result->__offset(0x10794).d = rcx_157
int128_t var_638 = zmm0_77
int32_t var_db0_78 = 4
char var_dac_78 = 0
void var_c88
int32_t rcx_159 = *sub_140b637e0(result, &var_c88, &var_638)
var_db8 = "Role"
int128_t zmm0_78 = var_db8.o
result->__offset(0x10798).d = rcx_159
int128_t var_628 = zmm0_78
int32_t var_db0_79 = 0xa
char var_dac_79 = 0
void var_c84
int32_t rcx_161 = *sub_140b637e0(result, &var_c84, &var_628)
var_db8 = "RemoteRole"
int128_t zmm0_79 = var_db8.o
result->__offset(0x1079c).d = rcx_161
int128_t var_618 = zmm0_79
int32_t var_db0_80 = 0xf
char var_dac_80 = 0
void var_c80
int32_t rcx_163 = *sub_140b637e0(result, &var_c80, &var_618)
var_db8 = "PersistentLevel"
int128_t zmm0_80 = var_db8.o
result->__offset(0x107a0).d = rcx_163
int128_t var_608 = zmm0_80
void var_c7c
result->__offset(0x107a4).d = *sub_140b637e0(result, &var_c7c, &var_608)
int32_t var_db0_81 = 8
var_db8 = "TheWorld"
char var_dac_81 = 0
int128_t var_5f8 = var_db8.o
int32_t var_db0_82 = 0xf
char var_dac_82 = 0
void var_c78
int32_t rcx_167 = *sub_140b637e0(result, &var_c78, &var_5f8)
var_db8 = "PackageMetaData"
int128_t zmm0_82 = var_db8.o
result->__offset(0x107a8).d = rcx_167
int128_t var_5e8 = zmm0_82
int32_t var_db0_83 = 0xc
char var_dac_83 = 0
void var_c74
int32_t rcx_169 = *sub_140b637e0(result, &var_c74, &var_5e8)
var_db8 = "InitialState"
int128_t zmm0_83 = var_db8.o
result->__offset(0x107ac).d = rcx_169
int128_t var_5d8 = zmm0_83
int32_t var_db0_84 = 4
char var_dac_84 = 0
void var_c70
int32_t rcx_171 = *sub_140b637e0(result, &var_c70, &var_5d8)
var_db8 = "Game"
int128_t zmm0_84 = var_db8.o
result->__offset(0x107b0).d = rcx_171
int128_t var_5c8 = zmm0_84
int32_t var_db0_85 = 0xe
char var_dac_85 = 0
void var_c6c
int32_t rcx_173 = *sub_140b637e0(result, &var_c6c, &var_5c8)
var_db8 = "SelectionColor"
int128_t zmm0_85 = var_db8.o
result->__offset(0x107b4).d = rcx_173
int128_t var_5b8 = zmm0_85
int32_t var_db0_86 = 2
char var_dac_86 = 0
void var_c68
int32_t rcx_175 = *sub_140b637e0(result, &var_c68, &var_5b8)
var_db8 = &data_142e7b648
int128_t zmm0_86 = var_db8.o
result->__offset(0x107b8).d = rcx_175
int128_t var_5a8 = zmm0_86
int32_t var_db0_87 = 0x10
char var_dac_87 = 0
void var_c64
int32_t rcx_177 = *sub_140b637e0(result, &var_c64, &var_5a8)
var_db8 = "ExecuteUbergraph"
int128_t zmm0_87 = var_db8.o
result->__offset(0x107bc).d = rcx_177
int128_t var_598 = zmm0_87
int32_t var_db0_88 = 8
char var_dac_88 = 0
void var_c60
int32_t rcx_179 = *sub_140b637e0(result, &var_c60, &var_598)
var_db8 = "DeviceID"
int128_t zmm0_88 = var_db8.o
result->__offset(0x107c0).d = rcx_179
int128_t var_588 = zmm0_88
int32_t var_db0_89 = 8
char var_dac_89 = 0
void var_c5c
int32_t rcx_181 = *sub_140b637e0(result, &var_c5c, &var_588)
var_db8 = "RootStat"
int128_t zmm0_89 = var_db8.o
result->__offset(0x107c4).d = rcx_181
int128_t var_578 = zmm0_89
int32_t var_db0_90 = 9
char var_dac_90 = 0
void var_c58
int32_t rcx_183 = *sub_140b637e0(result, &var_c58, &var_578)
var_db8 = "MoveActor"
int128_t zmm0_90 = var_db8.o
result->__offset(0x107c8).d = rcx_183
int128_t var_568 = zmm0_90
int32_t var_db0_91 = 3
char var_dac_91 = 0
void var_c54
int32_t rcx_185 = *sub_140b637e0(result, &var_c54, &var_568)
var_db8 = &data_142e7b694
int128_t zmm0_91 = var_db8.o
result->__offset(0x107cc).d = rcx_185
int128_t var_558 = zmm0_91
int32_t var_db0_92 = 0x16
char var_dac_92 = 0
void var_c50
int32_t rcx_187 = *sub_140b637e0(result, &var_c50, &var_558)
var_db8 = "MeshEmitterVertexColor"
int128_t zmm0_92 = var_db8.o
result->__offset(0x107d8).d = rcx_187
int128_t var_548 = zmm0_92
int32_t var_db0_93 = 0x16
char var_dac_93 = 0
void var_c4c
int32_t rcx_189 = *sub_140b637e0(result, &var_c4c, &var_548)
var_db8 = "TextureOffsetParameter"
int128_t zmm0_93 = var_db8.o
result->__offset(0x107dc).d = rcx_189
int128_t var_538 = zmm0_93
int32_t var_db0_94 = 0x15
char var_dac_94 = 0
void var_c48
int32_t rcx_191 = *sub_140b637e0(result, &var_c48, &var_538)
var_db8 = "TextureScaleParameter"
int128_t var_528 = var_db8.o
result->__offset(0x107e0).d = rcx_191
int32_t var_db0_95 = 9
char var_dac_95 = 0
void var_c44
int32_t rcx_193 = *sub_140b637e0(result, &var_c44, &var_528)
var_db8 = "ImpactVel"
int128_t zmm0_95 = var_db8.o
result->__offset(0x107e4).d = rcx_193
int128_t var_518 = zmm0_95
int32_t var_db0_96 = 8
char var_dac_96 = 0
void var_c40
int32_t rcx_195 = *sub_140b637e0(result, &var_c40, &var_518)
var_db8 = "SlideVel"
int128_t zmm0_96 = var_db8.o
result->__offset(0x107e8).d = rcx_195
int128_t var_508 = zmm0_96
int32_t var_db0_97 = 0x17
char var_dac_97 = 0
void var_c3c
int32_t rcx_197 = *sub_140b637e0(result, &var_c3c, &var_508)
var_db8 = "TextureOffset1Parameter"
int128_t zmm0_97 = var_db8.o
result->__offset(0x107ec).d = rcx_197
int128_t var_4f8 = zmm0_97
int32_t var_db0_98 = 0x1b
char var_dac_98 = 0
void var_c38
int32_t rcx_199 = *sub_140b637e0(result, &var_c38, &var_4f8)
var_db8 = "MeshEmitterDynamicParameter"
int128_t zmm0_98 = var_db8.o
result->__offset(0x107f0).d = rcx_199
int128_t var_4e8 = zmm0_98
int32_t var_db0_99 = 0xf
char var_dac_99 = 0
void var_c34
int32_t rcx_201 = *sub_140b637e0(result, &var_c34, &var_4e8)
var_db8 = "ExpressionInput"
int128_t zmm0_99 = var_db8.o
result->__offset(0x107f4).d = rcx_201
int128_t var_4d8 = zmm0_99
int32_t var_db0_100 = 8
char var_dac_100 = 0
void var_c30
int32_t rcx_203 = *sub_140b637e0(result, &var_c30, &var_4d8)
var_db8 = "Untitled"
int128_t zmm0_100 = var_db8.o
result->__offset(0x107f8).d = rcx_203
int128_t var_4c8 = zmm0_100
int32_t var_db0_101 = 5
void var_c2c
int32_t rcx_205 = *sub_140b637e0(result, &var_c2c, &var_4c8)
var_db8 = "Timer"
result->__offset(0x107fc).d = rcx_205
char var_dac_101 = 0
int128_t var_4b8 = var_db8.o
int32_t var_db0_102 = 4
char var_dac_102 = 0
void var_c28
int32_t rcx_207 = *sub_140b637e0(result, &var_c28, &var_4b8)
var_db8 = "Team"
int128_t zmm0_102 = var_db8.o
result->__offset(0x10800).d = rcx_207
int128_t var_4a8 = zmm0_102
int32_t var_db0_103 = 3
char var_dac_103 = 0
void var_c24
int32_t rcx_209 = *sub_140b637e0(result, &var_c24, &var_4a8)
var_db8 = &data_142de8740
int128_t zmm0_103 = var_db8.o
result->__offset(0x10804).d = rcx_209
int128_t var_498 = zmm0_103
int32_t var_db0_104 = 4
char var_dac_104 = 0
void var_c20
int32_t rcx_211 = *sub_140b637e0(result, &var_c20, &var_498)
var_db8 = "High"
int128_t zmm0_104 = var_db8.o
result->__offset(0x10808).d = rcx_211
int128_t var_488 = zmm0_104
int32_t var_db0_105 = 0xb
char var_dac_105 = 0
void var_c1c
int32_t rcx_213 = *sub_140b637e0(result, &var_c1c, &var_488)
var_db8 = "NetworkGUID"
int128_t zmm0_105 = var_db8.o
result->__offset(0x1080c).d = rcx_213
int128_t var_478 = zmm0_105
int32_t var_db0_106 = 0xa
char var_dac_106 = 0
void var_c18
int32_t rcx_215 = *sub_140b637e0(result, &var_c18, &var_478)
var_db8 = "GameThread"
int128_t zmm0_106 = var_db8.o
result->__offset(0x10810).d = rcx_215
int128_t var_468 = zmm0_106
int32_t var_db0_107 = 0xc
char var_dac_107 = 0
void var_c14
int32_t rcx_217 = *sub_140b637e0(result, &var_c14, &var_468)
var_db8 = "RenderThread"
int128_t zmm0_107 = var_db8.o
result->__offset(0x10814).d = rcx_217
int128_t var_458 = zmm0_107
void var_c10
result->__offset(0x10818).d = *sub_140b637e0(result, &var_c10, &var_458)
int32_t var_db0_108 = 0xd
var_db8 = "OtherChildren"
char var_dac_108 = 0
int128_t var_448 = var_db8.o
int32_t var_db0_109 = 8
char var_dac_109 = 0
void var_c0c
int32_t rcx_221 = *sub_140b637e0(result, &var_c0c, &var_448)
var_db8 = "Location"
int128_t zmm0_109 = var_db8.o
result->__offset(0x1081c).d = rcx_221
int128_t var_438 = zmm0_109
int32_t var_db0_110 = 8
char var_dac_110 = 0
void var_c08
int32_t rcx_223 = *sub_140b637e0(result, &var_c08, &var_438)
var_db8 = "Rotation"
int128_t zmm0_110 = var_db8.o
result->__offset(0x10820).d = rcx_223
int128_t var_428 = zmm0_110
int32_t var_db0_111 = 3
char var_dac_111 = 0
void var_c04
int32_t rcx_225 = *sub_140b637e0(result, &var_c04, &var_428)
var_db8 = &data_142e7b7a8
int128_t zmm0_111 = var_db8.o
result->__offset(0x10824).d = rcx_225
int128_t var_418 = zmm0_111
int32_t var_db0_112 = 0xe
char var_dac_112 = 0
void var_c00
int32_t rcx_227 = *sub_140b637e0(result, &var_c00, &var_418)
var_db8 = "EditorSettings"
int128_t zmm0_112 = var_db8.o
result->__offset(0x10828).d = rcx_227
int128_t var_408 = zmm0_112
int32_t var_db0_113 = 0xb
char var_dac_113 = 0
void var_bfc
int32_t rcx_229 = *sub_140b637e0(result, &var_bfc, &var_408)
var_db8 = "AudioThread"
int128_t zmm0_113 = var_db8.o
result->__offset(0x1082c).d = rcx_229
int128_t var_3f8 = zmm0_113
int32_t var_db0_114 = 2
char var_dac_114 = 0
void var_bf8
int32_t rcx_231 = *sub_140b637e0(result, &var_bf8, &var_3f8)
var_db8 = &data_142d96d14
int128_t zmm0_114 = var_db8.o
result->__offset(0x10830).d = rcx_231
int128_t var_3e8 = zmm0_114
int32_t var_db0_115 = 0xf
char var_dac_115 = 0
void var_bf4
int32_t rcx_233 = *sub_140b637e0(result, &var_bf4, &var_3e8)
var_db8 = "UserDefinedEnum"
int128_t zmm0_115 = var_db8.o
result->__offset(0x10834).d = rcx_233
int128_t var_3d8 = zmm0_115
int32_t var_db0_116 = 7
char var_dac_116 = 0
void var_bf0
int32_t rcx_235 = *sub_140b637e0(result, &var_bf0, &var_3d8)
var_db8 = "Control"
int128_t zmm0_116 = var_db8.o
result->__offset(0x10838).d = rcx_235
int128_t var_3c8 = zmm0_116
int32_t var_db0_117 = 5
char var_dac_117 = 0
void var_bec
int32_t rcx_237 = *sub_140b637e0(result, &var_bec, &var_3c8)
var_db8 = "Voice"
int128_t zmm0_117 = var_db8.o
result->__offset(0x1083c).d = rcx_237
int128_t var_3b8 = zmm0_117
int32_t var_db0_118 = 4
char var_dac_118 = 0
void var_be8
int32_t rcx_239 = *sub_140b637e0(result, &var_be8, &var_3b8)
var_db8 = "Zlib"
int128_t zmm0_118 = var_db8.o
result->__offset(0x10840).d = rcx_239
int128_t var_3a8 = zmm0_118
int32_t var_db0_119 = 4
char var_dac_119 = 0
void var_be4
int32_t rcx_241 = *sub_140b637e0(result, &var_be4, &var_3a8)
var_db8 = "Gzip"
int128_t zmm0_119 = var_db8.o
result->__offset(0x10844).d = rcx_241
int128_t var_398 = zmm0_119
int32_t var_db0_120 = 3
char var_dac_120 = 0
void var_be0
int32_t rcx_243 = *sub_140b637e0(result, &var_be0, &var_398)
var_db8 = &data_142e7b7f0
int128_t zmm0_120 = var_db8.o
result->__offset(0x10848).d = rcx_243
int128_t var_388 = zmm0_120
int32_t var_db0_121 = 5
char var_dac_121 = 0
void var_bdc
int32_t rcx_245 = *sub_140b637e0(result, &var_bdc, &var_388)
var_db8 = "DGram"
int128_t var_378 = var_db8.o
result->__offset(0x1084c).d = rcx_245
int32_t var_db0_122 = 6
char var_dac_122 = 0
void var_bd8
int32_t rcx_247 = *sub_140b637e0(result, &var_bd8, &var_378)
var_db8 = "Stream"
int128_t zmm0_122 = var_db8.o
result->__offset(0x108a0).d = rcx_247
int128_t var_368 = zmm0_122
int32_t var_db0_123 = 0xd
char var_dac_123 = 0
void var_bd4
int32_t rcx_249 = *sub_140b637e0(result, &var_bd4, &var_368)
var_db8 = "GameNetDriver"
int128_t zmm0_123 = var_db8.o
result->__offset(0x108a4).d = rcx_249
int128_t var_358 = zmm0_123
int32_t var_db0_124 = 0x10
char var_dac_124 = 0
void var_bd0
int32_t rcx_251 = *sub_140b637e0(result, &var_bd0, &var_358)
var_db8 = "PendingNetDriver"
int128_t zmm0_124 = var_db8.o
result->__offset(0x108a8).d = rcx_251
int128_t var_348 = zmm0_124
int32_t var_db0_125 = 0xf
char var_dac_125 = 0
void var_bcc
int32_t rcx_253 = *sub_140b637e0(result, &var_bcc, &var_348)
var_db8 = "BeaconNetDriver"
int128_t zmm0_125 = var_db8.o
result->__offset(0x108ac).d = rcx_253
int128_t var_338 = zmm0_125
int32_t var_db0_126 = 0x10
char var_dac_126 = 0
void var_bc8
int32_t rcx_255 = *sub_140b637e0(result, &var_bc8, &var_338)
var_db8 = "FlushNetDormancy"
int128_t zmm0_126 = var_db8.o
result->__offset(0x108b0).d = rcx_255
int128_t var_328 = zmm0_126
int32_t var_db0_127 = 0xd
char var_dac_127 = 0
void var_bc4
int32_t rcx_257 = *sub_140b637e0(result, &var_bc4, &var_328)
var_db8 = "DemoNetDriver"
int128_t zmm0_127 = var_db8.o
result->__offset(0x108b4).d = rcx_257
int128_t var_318 = zmm0_127
int32_t var_db0_128 = 0xb
void var_bc0
int32_t rcx_259 = *sub_140b637e0(result, &var_bc0, &var_318)
var_db8 = "GameSession"
result->__offset(0x108b8).d = rcx_259
char var_dac_128 = 0
int128_t var_308 = var_db8.o
int32_t var_db0_129 = 0xc
char var_dac_129 = 0
void var_bbc
int32_t rcx_261 = *sub_140b637e0(result, &var_bbc, &var_308)
var_db8 = "PartySession"
int128_t zmm0_129 = var_db8.o
result->__offset(0x108bc).d = rcx_261
int128_t var_2f8 = zmm0_129
int32_t var_db0_130 = 8
char var_dac_130 = 0
void var_b64
int32_t rcx_263 = *sub_140b637e0(result, &var_b64, &var_2f8)
var_db8 = "GamePort"
int128_t zmm0_130 = var_db8.o
result->__offset(0x108c0).d = rcx_263
int128_t var_2e8 = zmm0_130
int32_t var_db0_131 = 0xa
char var_dac_131 = 0
void var_bb4
int32_t rcx_265 = *sub_140b637e0(result, &var_bb4, &var_2e8)
var_db8 = "BeaconPort"
int128_t zmm0_131 = var_db8.o
result->__offset(0x108c4).d = rcx_265
int128_t var_2d8 = zmm0_131
int32_t var_db0_132 = 8
char var_dac_132 = 0
void var_bb0
int32_t rcx_267 = *sub_140b637e0(result, &var_bb0, &var_2d8)
var_db8 = "MeshPort"
int128_t zmm0_132 = var_db8.o
result->__offset(0x108c8).d = rcx_267
int128_t var_2c8 = zmm0_132
int32_t var_db0_133 = 0xd
char var_dac_133 = 0
void var_bac
int32_t rcx_269 = *sub_140b637e0(result, &var_bac, &var_2c8)
var_db8 = "MeshNetDriver"
int128_t zmm0_133 = var_db8.o
result->__offset(0x108cc).d = rcx_269
int128_t var_2b8 = zmm0_133
int32_t var_db0_134 = 0xf
char var_dac_134 = 0
void var_ba8
int32_t rcx_271 = *sub_140b637e0(result, &var_ba8, &var_2b8)
var_db8 = "LiveStreamVoice"
int128_t zmm0_134 = var_db8.o
result->__offset(0x108d0).d = rcx_271
int128_t var_2a8 = zmm0_134
void var_ba4
result->__offset(0x108d4).d = *sub_140b637e0(result, &var_ba4, &var_2a8)
int32_t var_db0_135 = 6
var_db8 = "Linear"
char var_dac_135 = 0
int128_t var_298 = var_db8.o
int32_t var_db0_136 = 5
char var_dac_136 = 0
void var_ba0
int32_t rcx_275 = *sub_140b637e0(result, &var_ba0, &var_298)
var_db8 = "Point"
int128_t zmm0_136 = var_db8.o
result->__offset(0x108f0).d = rcx_275
int128_t var_288 = zmm0_136
int32_t var_db0_137 = 5
char var_dac_137 = 0
void var_b9c
int32_t rcx_277 = *sub_140b637e0(result, &var_b9c, &var_288)
var_db8 = "Aniso"
int128_t zmm0_137 = var_db8.o
result->__offset(0x108f4).d = rcx_277
int128_t var_278 = zmm0_137
int32_t var_db0_138 = 0x12
char var_dac_138 = 0
void var_b98
int32_t rcx_279 = *sub_140b637e0(result, &var_b98, &var_278)
var_db8 = "LightMapResolution"
int128_t zmm0_138 = var_db8.o
result->__offset(0x108f8).d = rcx_279
int128_t var_268 = zmm0_138
int32_t var_db0_139 = 9
char var_dac_139 = 0
void var_b94
int32_t rcx_281 = *sub_140b637e0(result, &var_b94, &var_268)
var_db8 = "UnGrouped"
int128_t zmm0_139 = var_db8.o
result->__offset(0x108fc).d = rcx_281
int128_t var_258 = zmm0_139
int32_t var_db0_140 = 9
char var_dac_140 = 0
void var_b90
int32_t rcx_283 = *sub_140b637e0(result, &var_b90, &var_258)
var_db8 = "VoiceChat"
int128_t zmm0_140 = var_db8.o
result->__offset(0x1091c).d = rcx_283
int128_t var_248 = zmm0_140
int32_t var_db0_141 = 7
char var_dac_141 = 0
void var_b8c
int32_t rcx_285 = *sub_140b637e0(result, &var_b8c, &var_248)
var_db8 = "Playing"
int128_t zmm0_141 = var_db8.o
result->__offset(0x10920).d = rcx_285
int128_t var_238 = zmm0_141
int32_t var_db0_142 = 0xa
char var_dac_142 = 0
void var_b88
int32_t rcx_287 = *sub_140b637e0(result, &var_b88, &var_238)
var_db8 = "Spectating"
int128_t zmm0_142 = var_db8.o
result->__offset(0x10940).d = rcx_287
int128_t var_228 = zmm0_142
int32_t var_db0_143 = 8
char var_dac_143 = 0
void var_b84
int32_t rcx_289 = *sub_140b637e0(result, &var_b84, &var_228)
var_db8 = "Inactive"
int128_t zmm0_143 = var_db8.o
result->__offset(0x10948).d = rcx_289
int128_t var_218 = zmm0_143
int32_t var_db0_144 = 0xb
char var_dac_144 = 0
void var_b80
int32_t rcx_291 = *sub_140b637e0(result, &var_b80, &var_218)
var_db8 = "PerfWarning"
int128_t zmm0_144 = var_db8.o
result->__offset(0x10954).d = rcx_291
int128_t var_208 = zmm0_144
int32_t var_db0_145 = 4
char var_dac_145 = 0
void var_b7c
int32_t rcx_293 = *sub_140b637e0(result, &var_b7c, &var_208)
var_db8 = "Info"
int128_t zmm0_145 = var_db8.o
result->__offset(0x109b8).d = rcx_293
int128_t var_1f8 = zmm0_145
int32_t var_db0_146 = 4
char var_dac_146 = 0
void var_b78
int32_t rcx_295 = *sub_140b637e0(result, &var_b78, &var_1f8)
var_db8 = "Init"
int128_t zmm0_146 = var_db8.o
result->__offset(0x109bc).d = rcx_295
int128_t var_1e8 = zmm0_146
int32_t var_db0_147 = 4
char var_dac_147 = 0
void var_b74
int32_t rcx_297 = *sub_140b637e0(result, &var_b74, &var_1e8)
var_db8 = "Exit"
int128_t zmm0_147 = var_db8.o
result->__offset(0x109c0).d = rcx_297
int128_t var_1d8 = zmm0_147
int32_t var_db0_148 = 3
char var_dac_148 = 0
void var_b70
int32_t rcx_299 = *sub_140b637e0(result, &var_b70, &var_1d8)
var_db8 = &data_142d7acf0
int128_t var_1c8 = var_db8.o
result->__offset(0x109c4).d = rcx_299
int32_t var_db0_149 = 7
char var_dac_149 = 0
void var_b6c
int32_t rcx_301 = *sub_140b637e0(result, &var_b6c, &var_1c8)
var_db8 = "Warning"
int128_t zmm0_149 = var_db8.o
result->__offset(0x109c8).d = rcx_301
int128_t var_1b8 = zmm0_149
int32_t var_db0_150 = 5
char var_dac_150 = 0
void var_b68
int32_t rcx_303 = *sub_140b637e0(result, &var_b68, &var_1b8)
var_db8 = "Error"
int128_t zmm0_150 = var_db8.o
result->__offset(0x109cc).d = rcx_303
int128_t var_1a8 = zmm0_150
int32_t var_db0_151 = 0xd
char var_dac_151 = 0
void var_b10
int32_t rcx_305 = *sub_140b637e0(result, &var_b10, &var_1a8)
var_db8 = "FontCharacter"
int128_t zmm0_151 = var_db8.o
result->__offset(0x109d0).d = rcx_305
int128_t var_198 = zmm0_151
int32_t var_db0_152 = 0x13
char var_dac_152 = 0
void var_b60
int32_t rcx_307 = *sub_140b637e0(result, &var_b60, &var_198)
var_db8 = "InitChild2StartBone"
int128_t zmm0_152 = var_db8.o
result->__offset(0x10a80).d = rcx_307
int128_t var_188 = zmm0_152
int32_t var_db0_153 = 0x11
char var_dac_153 = 0
void var_b5c
int32_t rcx_309 = *sub_140b637e0(result, &var_b5c, &var_188)
var_db8 = "SoundCueLocalized"
int128_t zmm0_153 = var_db8.o
result->__offset(0x10a84).d = rcx_309
int128_t var_178 = zmm0_153
int32_t var_db0_154 = 8
char var_dac_154 = 0
void var_b58
int32_t rcx_311 = *sub_140b637e0(result, &var_b58, &var_178)
var_db8 = "SoundCue"
int128_t zmm0_154 = var_db8.o
result->__offset(0x10a88).d = rcx_311
int128_t var_168 = zmm0_154
int32_t var_db0_155 = 0x14
void var_b54
int32_t rcx_313 = *sub_140b637e0(result, &var_b54, &var_168)
var_db8 = "RawDistributionFloat"
result->__offset(0x10a8c).d = rcx_313
char var_dac_155 = 0
int128_t var_158 = var_db8.o
int32_t var_db0_156 = 0x15
char var_dac_156 = 0
void var_b50
int32_t rcx_315 = *sub_140b637e0(result, &var_b50, &var_158)
var_db8 = "RawDistributionVector"
int128_t zmm0_156 = var_db8.o
result->__offset(0x10a90).d = rcx_315
int128_t var_148 = zmm0_156
int32_t var_db0_157 = 0x10
char var_dac_157 = 0
void var_b4c
int32_t rcx_317 = *sub_140b637e0(result, &var_b4c, &var_148)
var_db8 = "InterpCurveFloat"
int128_t zmm0_157 = var_db8.o
result->__offset(0x10a94).d = rcx_317
int128_t var_138 = zmm0_157
int32_t var_db0_158 = 0x13
char var_dac_158 = 0
void var_b48
int32_t rcx_319 = *sub_140b637e0(result, &var_b48, &var_138)
var_db8 = "InterpCurveVector2D"
int128_t zmm0_158 = var_db8.o
result->__offset(0x10a98).d = rcx_319
int128_t var_128 = zmm0_158
int32_t var_db0_159 = 0x11
char var_dac_159 = 0
void var_b44
int32_t rcx_321 = *sub_140b637e0(result, &var_b44, &var_128)
var_db8 = "InterpCurveVector"
int128_t zmm0_159 = var_db8.o
result->__offset(0x10a9c).d = rcx_321
int128_t var_118 = zmm0_159
int32_t var_db0_160 = 0x15
char var_dac_160 = 0
void var_b40
int32_t rcx_323 = *sub_140b637e0(result, &var_b40, &var_118)
var_db8 = "InterpCurveTwoVectors"
int128_t zmm0_160 = var_db8.o
result->__offset(0x10aa0).d = rcx_323
int128_t var_108 = zmm0_160
int32_t var_db0_161 = 0xf
char var_dac_161 = 0
void var_b3c
int32_t rcx_325 = *sub_140b637e0(result, &var_b3c, &var_108)
var_db8 = "InterpCurveQuat"
int128_t zmm0_161 = var_db8.o
result->__offset(0x10aa4).d = rcx_325
int128_t var_f8 = zmm0_161
void var_b38
result->__offset(0x10aa8).d = *sub_140b637e0(result, &var_b38, &var_f8)
int32_t var_db0_162 = 2
var_db8 = &data_142e7ba68
char var_dac_162 = 0
int128_t var_e8 = var_db8.o
int32_t var_db0_163 = 7
char var_dac_163 = 0
void var_b34
int32_t rcx_329 = *sub_140b637e0(result, &var_b34, &var_e8)
var_db8 = "NavMesh"
int128_t zmm0_163 = var_db8.o
result->__offset(0x10b48).d = rcx_329
int128_t var_d8 = zmm0_163
int32_t var_db0_164 = 0x12
char var_dac_164 = 0
void var_b30
int32_t rcx_331 = *sub_140b637e0(result, &var_b30, &var_d8)
var_db8 = "PerformanceCapture"
int128_t zmm0_164 = var_db8.o
result->__offset(0x10b4c).d = rcx_331
int128_t var_c8 = zmm0_164
int32_t var_db0_165 = 0xc
char var_dac_165 = 0
void var_b2c
int32_t rcx_333 = *sub_140b637e0(result, &var_b2c, &var_c8)
var_db8 = "EditorLayout"
int128_t zmm0_165 = var_db8.o
result->__offset(0x10c10).d = rcx_333
int128_t var_b8 = zmm0_165
int32_t var_db0_166 = 0x11
char var_dac_166 = 0
void var_b28
int32_t rcx_335 = *sub_140b637e0(result, &var_b28, &var_b8)
var_db8 = "EditorKeyBindings"
int128_t zmm0_166 = var_db8.o
result->__offset(0x10da0).d = rcx_335
int128_t var_a8 = zmm0_166
int32_t var_db0_167 = 0x10
char var_dac_167 = 0
void var_b24
int32_t rcx_337 = *sub_140b637e0(result, &var_b24, &var_a8)
var_db8 = "GameUserSettings"
int128_t zmm0_167 = var_db8.o
result->__offset(0x10da4).d = rcx_337
int128_t var_98 = zmm0_167
int32_t var_db0_168 = 8
char var_dac_168 = 0
void var_b20
int32_t rcx_339 = *sub_140b637e0(result, &var_b20, &var_98)
var_db8 = "Filename"
int128_t zmm0_168 = var_db8.o
result->__offset(0x10da8).d = rcx_339
int128_t var_88 = zmm0_168
int32_t var_db0_169 = 4
char var_dac_169 = 0
void var_b1c
int32_t rcx_341 = *sub_140b637e0(result, &var_b1c, &var_88)
var_db8 = "Lerp"
int128_t zmm0_169 = var_db8.o
result->__offset(0x10f30).d = rcx_341
int128_t var_78 = zmm0_169
int32_t i_2 = 0
void var_b18
result->__offset(0x10f34).d = *sub_140b637e0(result, &var_b18, &var_78)
result->__offset(0x10f38).d = 0

do
    if (i_2 == 0 || (r12 - 0x10440)->__offset(0x10440).d != 0)
        sub_140b5c3a0(&result[0x21e8], &var_db8)
        int32_t* r9_1 = var_db0_169.q
        *r9_1 = *(result + (zx.q(i_2) << 2) + 0x10440)
        r9_1[1] = i_2
        r9_1[2] = 0xffffffff
        int32_t rax_177 = *r9_1
        uint32_t rcx_345 = zx.d(rax_177.w)
        uint64_t rdx_173 = zx.q(rax_177 u>> 0x10)
        void var_b14
        sub_140b5de10(&result[0x21e8], &var_b14, 
            (rcx_345 u>> 4) + ((rcx_345 + (rdx_173 << 3).d) << 0x10) + rcx_345 + rdx_173.d, r9_1, 
            var_db8.d, nullptr)
        int32_t rcx_347 = (r12 - 0x10440)->__offset(0x10440).d
        int32_t rax_182 = result->__offset(0x10f38).d
        
        if (rax_182 u>= rcx_347)
            rcx_347 = rax_182
        
        result->__offset(0x10f38).d = rcx_347
    
    i_2 += 1
    r12 += 4
while (i_2 u< 0x2be)

void* __offset(_RTL_SRWLOCK, 0x10040) i_4 = &result[0x2008]
int32_t rcx_348 = 0
void* __offset(_RTL_SRWLOCK, 0x10040) i_3 = i_4

if (i_4 != &0x400[0x2008])
    do
        rcx_348 += (i_3 - 0x10040)->__offset(0x10060).d
        i_3 += 0x40
    while (i_3 != &0x400[0x2008])
    
    for (; i_4 != &0x400[0x2008]; i_4 += 0x40)
        rbx += (i_4 - 0x10040)->__offset(0x10064).d

if (rcx_348 - rbx != result->__offset(0x12f48).d - result->__offset(0x12fa4).d)
    void var_68
    sub_140b21610(0, _vfprintf_p_l(&var_68, u"Duplicate hardcoded name", u"UnrealEd"), nullptr)
    int64_t* var_60
    
    if (var_60 != 0)
        var_60[1].d -= 1
        
        if (var_60[1].d == 1)
            (**var_60)(var_60)
            int32_t rdi_2 = *(var_60 + 0xc)
            *(var_60 + 0xc) -= 1
            
            if (rdi_2 == 1)
                (*(*var_60 + 8))(var_60, zx.q(rdi_2))
    
    sub_140b721f0(0)

return result
