// 函数: sub_14219ba50
// 地址: 0x14219ba50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm1 = sub_1421bfdf0(arg1, arg2, arg3)
int64_t* r8 = arg2[1]
int32_t* rcx = *r8

if (&rcx[1] u<= r8[1])
    *(arg1 + 0xd0) = *rcx
    int64_t* rax_2 = arg2[1]
    *rax_2 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0xd0, zmm1)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0xd0, 4)

int64_t* rcx_2 = arg2[1]
int32_t* r8_1 = *rcx_2

if (&r8_1[1] u<= rcx_2[1])
    *(arg1 + 0xd4) = *r8_1
    int64_t* rax_6 = arg2[1]
    *rax_6 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0xd4, zmm1)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0xd4, 4)

int64_t* rcx_4 = arg2[1]
int32_t* r8_2 = *rcx_4

if (&r8_2[1] u<= rcx_4[1])
    *(arg1 + 0xd8) = *r8_2
    int64_t* rax_10 = arg2[1]
    *rax_10 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0xd8, zmm1)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0xd8, 4)

(*(*arg2 + 8))(arg2, sx.q(*(arg1 + 0xe8)) << 2, sx.q(*(arg1 + 0xec)) << 2)
int32_t rax_13 = 0

if ((arg2[5].b & 1) == 0)
    rax_13 = *(arg1 + 0xe8)

int64_t* rcx_7 = arg2[1]
int32_t arg_8 = rax_13
int32_t* rdx_5 = *rcx_7

if (&rdx_5[1] u> rcx_7[1])
    int32_t* rdx_6 = &arg_8
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, rdx_6, zmm1)
    else
        (*(*arg2 + 0x150))(arg2, rdx_6, 4)
else
    arg_8 = *rdx_5
    *rcx_7 += 4

int32_t rcx_11 = arg_8

if (rcx_11 != 0)
    char rax_17 = *(arg2 + 0x29)
    
    if ((rax_17 & 1) != 0 || rcx_11 s<= 0 || ((*(arg2 + 0x2b) & 8) != 0 && rcx_11 s> 0x400000))
        *(arg2 + 0x29) = rax_17 | 1
    else
        *(arg1 + 0xe8) = rcx_11
        
        if ((arg2[5].b & 1) != 0)
            sub_140638750(arg1 + 0xe0, rcx_11, *(arg1 + 0xec))
            rcx_11 = *(arg1 + 0xe8)
        
        (*(*arg2 + 0x150))(arg2, *(arg1 + 0xe0), sx.q(rcx_11) << 2)
else if ((arg2[5].b & 1) != 0)
    *(arg1 + 0xe8) = 0
    
    if (*(arg1 + 0xec) != 0)
        sub_1405dadb0(arg1 + 0xe0, 0)

int64_t* rcx_13 = arg2[1]
int32_t* r8_8 = *rcx_13

if (&r8_8[1] u<= rcx_13[1])
    *(arg1 + 0xf0) = *r8_8
    int64_t* rax_21 = arg2[1]
    *rax_21 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0xf0, zmm1)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0xf0, 4)

int64_t* rcx_15 = arg2[1]
int32_t* r8_9 = *rcx_15

if (&r8_9[1] u<= rcx_15[1])
    *(arg1 + 0xf4) = *r8_9
    int64_t* rax_25 = arg2[1]
    *rax_25 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0xf4, zmm1)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0xf4, 4)

int64_t* rcx_17 = arg2[1]
int32_t* r8_10 = *rcx_17

if (&r8_10[1] u<= rcx_17[1])
    *(arg1 + 0xf8) = *r8_10
    int64_t* rax_29 = arg2[1]
    *rax_29 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0xf8, zmm1)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0xf8, 4)

int64_t* rcx_19 = arg2[1]
int32_t* r8_11 = *rcx_19

if (&r8_11[1] u<= rcx_19[1])
    *(arg1 + 0xfc) = *r8_11
    int64_t* rax_33 = arg2[1]
    *rax_33 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0xfc, zmm1)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0xfc, 4)

int64_t* rcx_21 = arg2[1]
int32_t* r8_12 = *rcx_21

if (&r8_12[1] u<= rcx_21[1])
    *(arg1 + 0x100) = *r8_12
    int64_t* rax_37 = arg2[1]
    *rax_37 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x100, zmm1)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x100, 4)

int64_t* rcx_23 = arg2[1]
int32_t* r8_13 = *rcx_23

if (&r8_13[1] u<= rcx_23[1])
    *(arg1 + 0x104) = *r8_13
    int64_t* rax_41 = arg2[1]
    *rax_41 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x104, zmm1)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x104, 4)

int64_t* rcx_25 = arg2[1]
int32_t* r8_14 = *rcx_25

if (&r8_14[1] u<= rcx_25[1])
    *(arg1 + 0x108) = *r8_14
    int64_t* rax_45 = arg2[1]
    *rax_45 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x108, zmm1)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x108, 4)

int64_t* rcx_27 = arg2[1]
int32_t* r8_15 = *rcx_27

if (&r8_15[1] u<= rcx_27[1])
    *(arg1 + 0x10c) = *r8_15
    int64_t* rax_49 = arg2[1]
    *rax_49 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x10c, zmm1)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x10c, 4)

int64_t* rcx_29 = arg2[1]
int32_t* r8_16 = *rcx_29

if (&r8_16[1] u<= rcx_29[1])
    *(arg1 + 0x110) = *r8_16
    int64_t* rax_53 = arg2[1]
    *rax_53 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x110, zmm1)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x110, 4)

int64_t* rcx_31 = arg2[1]
int32_t* rdx_18 = *rcx_31

if (&rdx_18[1] u> rcx_31[1])
    int32_t rax_57
    rax_57.b = *(arg1 + 0x114) != 0
    arg_8 = rax_57
    (*(*arg2 + 0x150))(arg2, &arg_8, 4)
    *(arg1 + 0x114) = arg_8 != 0
else
    void* rax_55
    rax_55.b = *rdx_18 != 0
    *(arg1 + 0x114) = rax_55.b
    int64_t* rax_56 = arg2[1]
    *rax_56 += 4

int64_t* rcx_33 = arg2[1]
int32_t* rdx_20 = *rcx_33

if (&rdx_20[1] u> rcx_33[1])
    int32_t rax_62
    rax_62.b = *(arg1 + 0x115) != 0
    arg_8 = rax_62
    (*(*arg2 + 0x150))(arg2, &arg_8, 4)
    *(arg1 + 0x115) = arg_8 != 0
else
    void* rax_60
    rax_60.b = *rdx_20 != 0
    *(arg1 + 0x115) = rax_60.b
    int64_t* rax_61 = arg2[1]
    *rax_61 += 4

int64_t* rcx_35 = arg2[1]
int32_t* rdx_22 = *rcx_35

if (&rdx_22[1] u> rcx_35[1])
    int32_t rax_67
    rax_67.b = *(arg1 + 0x116) != 0
    arg_8 = rax_67
    (*(*arg2 + 0x150))(arg2, &arg_8, 4)
    *(arg1 + 0x116) = arg_8 != 0
else
    void* rax_65
    rax_65.b = *rdx_22 != 0
    *(arg1 + 0x116) = rax_65.b
    int64_t* rax_66 = arg2[1]
    *rax_66 += 4

int64_t* rcx_37 = arg2[1]
int32_t* rdx_24 = *rcx_37

if (&rdx_24[1] u> rcx_37[1])
    int32_t rax_72
    rax_72.b = *(arg1 + 0x117) != 0
    arg_8 = rax_72
    (*(*arg2 + 0x150))(arg2, &arg_8, 4)
    *(arg1 + 0x117) = arg_8 != 0
else
    void* rax_70
    rax_70.b = *rdx_24 != 0
    *(arg1 + 0x117) = rax_70.b
    int64_t* rax_71 = arg2[1]
    *rax_71 += 4

int64_t* rcx_39 = arg2[1]
int32_t* rdx_26 = *rcx_39

if (&rdx_26[1] u> rcx_39[1])
    int32_t rax_77
    rax_77.b = *(arg1 + 0x118) != 0
    arg_8 = rax_77
    (*(*arg2 + 0x150))(arg2, &arg_8, 4)
    *(arg1 + 0x118) = arg_8 != 0
else
    void* rax_75
    rax_75.b = *rdx_26 != 0
    *(arg1 + 0x118) = rax_75.b
    int64_t* rax_76 = arg2[1]
    *rax_76 += 4

int64_t* rcx_41 = arg2[1]
int32_t* rdx_28 = *rcx_41

if (&rdx_28[1] u> rcx_41[1])
    int32_t rax_82
    rax_82.b = *(arg1 + 0x119) != 0
    arg_8 = rax_82
    (*(*arg2 + 0x150))(arg2, &arg_8, 4)
    *(arg1 + 0x119) = arg_8 != 0
else
    void* rax_80
    rax_80.b = *rdx_28 != 0
    *(arg1 + 0x119) = rax_80.b
    int64_t* rax_81 = arg2[1]
    *rax_81 += 4

int64_t* rcx_43 = arg2[1]
int32_t* r8_17 = *rcx_43

if (&r8_17[1] u<= rcx_43[1])
    *(arg1 + 0x11c) = *r8_17
    int64_t* rax_87 = arg2[1]
    *rax_87 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x11c, zmm1)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x11c, 4)

int64_t* rcx_45 = arg2[1]
int32_t* r8_18 = *rcx_45

if (&r8_18[1] u<= rcx_45[1])
    *(arg1 + 0x120) = *r8_18
    int64_t* rax_91 = arg2[1]
    *rax_91 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x120, zmm1)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x120, 4)

int64_t* rcx_47 = arg2[1]
int32_t* r8_19 = *rcx_47

if (&r8_19[1] u<= rcx_47[1])
    *(arg1 + 0x124) = *r8_19
    int64_t* rax_95 = arg2[1]
    *rax_95 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x124, zmm1)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x124, 4)

int64_t* rcx_49 = arg2[1]
int32_t* r8_20 = *rcx_49

if (&r8_20[1] u<= rcx_49[1])
    *(arg1 + 0x128) = *r8_20
    int64_t* rax_99 = arg2[1]
    *rax_99 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x128, zmm1)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x128, 4)

int64_t* rcx_51 = arg2[1]
int32_t* r8_21 = *rcx_51

if (&r8_21[1] u<= rcx_51[1])
    *(arg1 + 0x12c) = *r8_21
    int64_t* rax_103 = arg2[1]
    *rax_103 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x12c, zmm1)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x12c, 4)

sub_1408d9160(arg2, arg1 + 0x130, zmm1)
int64_t* rcx_54 = arg2[1]
int32_t* r8_22 = *rcx_54

if (&r8_22[1] u<= rcx_54[1])
    *(arg1 + 0x13c) = *r8_22
    int64_t* rax_107 = arg2[1]
    *rax_107 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x13c, zmm1)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x13c, 4)

int64_t* rcx_56 = arg2[1]
int32_t* r8_23 = *rcx_56

if (&r8_23[1] u<= rcx_56[1])
    *(arg1 + 0x140) = *r8_23
    int64_t* rax_111 = arg2[1]
    *rax_111 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x140, zmm1)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x140, 4)

int64_t* rcx_58 = arg2[1]
int32_t* r8_24 = *rcx_58

if (&r8_24[1] u<= rcx_58[1])
    *(arg1 + 0x144) = *r8_24
    int64_t* rax_115 = arg2[1]
    *rax_115 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x144, zmm1)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x144, 4)

int64_t* rcx_60 = arg2[1]
int32_t* r8_25 = *rcx_60

if (&r8_25[1] u<= rcx_60[1])
    *(arg1 + 0x148) = *r8_25
    int64_t* rax_119 = arg2[1]
    *rax_119 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x148, zmm1)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x148, 4)

int64_t* rcx_62 = arg2[1]
int32_t* r8_26 = *rcx_62

if (&r8_26[1] u<= rcx_62[1])
    *(arg1 + 0x14c) = *r8_26
    int64_t* rax_123 = arg2[1]
    *rax_123 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x14c, zmm1)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x14c, 4)

int64_t* rcx_64 = arg2[1]
char* rdx_41 = *rcx_64

if (&rdx_41[1] u> rcx_64[1])
    (*(*arg2 + 0x150))(arg2, arg1 + 0x150, 1)
else
    *(arg1 + 0x150) = *rdx_41
    int64_t* rax_127 = arg2[1]
    *rax_127 += 1

int64_t* rcx_66 = arg2[1]
int32_t* r8_27 = *rcx_66

if (&r8_27[1] u<= rcx_66[1])
    *(arg1 + 0x154) = *r8_27
    int64_t* rax_131 = arg2[1]
    *rax_131 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x154, zmm1)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x154, 4)

int64_t* rcx_68 = arg2[1]
int32_t* rdx_44 = *rcx_68

if (&rdx_44[1] u> rcx_68[1])
    int32_t rax_135
    rax_135.b = *(arg1 + 0x158) != 0
    arg_8 = rax_135
    (*(*arg2 + 0x150))(arg2, &arg_8, 4)
    *(arg1 + 0x158) = arg_8 != 0
else
    void* rax_133
    rax_133.b = *rdx_44 != 0
    *(arg1 + 0x158) = rax_133.b
    int64_t* rax_134 = arg2[1]
    *rax_134 += 4

int64_t* rcx_70 = arg2[1]
int32_t* rdx_46 = *rcx_70

if (&rdx_46[1] u> rcx_70[1])
    int32_t rax_140
    rax_140.b = *(arg1 + 0x159) != 0
    arg_8 = rax_140
    (*(*arg2 + 0x150))(arg2, &arg_8, 4)
    *(arg1 + 0x159) = arg_8 != 0
else
    void* rax_138
    rax_138.b = *rdx_46 != 0
    *(arg1 + 0x159) = rax_138.b
    int64_t* rax_139 = arg2[1]
    *rax_139 += 4

int64_t* rcx_72 = arg2[1]
int32_t* rdx_48 = *rcx_72

if (&rdx_48[1] u> rcx_72[1])
    int32_t rax_145
    rax_145.b = *(arg1 + 0x15a) != 0
    arg_8 = rax_145
    (*(*arg2 + 0x150))(arg2, &arg_8, 4)
    *(arg1 + 0x15a) = arg_8 != 0
else
    void* rax_143
    rax_143.b = *rdx_48 != 0
    *(arg1 + 0x15a) = rax_143.b
    int64_t* rax_144 = arg2[1]
    *rax_144 += 4

int64_t* rcx_74 = arg2[1]
int32_t* rdx_50 = *rcx_74
int64_t* result

if (&rdx_50[1] u> rcx_74[1])
    int64_t rax_149 = *arg2
    int32_t r14
    r14.b = *(arg1 + 0x15b) != 0
    arg_8 = r14
    (*(rax_149 + 0x150))(arg2, &arg_8, 4)
    result.b = arg_8 != 0
    *(arg1 + 0x15b) = result.b
else
    void* rax_148
    rax_148.b = *rdx_50 != 0
    *(arg1 + 0x15b) = rax_148.b
    result = arg2[1]
    *result += 4

return result
