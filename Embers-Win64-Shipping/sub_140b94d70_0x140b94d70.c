// 函数: sub_140b94d70
// 地址: 0x140b94d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg1, 0, 0x150)

if (*arg1 != u"/Config/")
    int32_t rdx_1 = 0
    arg1[1].d = 0
    
    if (*(arg1 + 0xc) != 9)
        sub_1405947f0(arg1, 9)
        rdx_1 = arg1[1].d
    
    arg1[1].d = rdx_1 + 9
    
    if (rdx_1 + 9 s> *(arg1 + 0xc))
        sub_140594770(arg1)
    
    __builtin_wcscpy(*arg1, u"/Config/")

if (arg1[2] != u"/Engine/")
    int32_t rdx_2 = 0
    arg1[3].d = 0
    
    if (*(arg1 + 0x1c) != 9)
        sub_1405947f0(&arg1[2], 9)
        rdx_2 = arg1[3].d
    
    arg1[3].d = rdx_2 + 9
    
    if (rdx_2 + 9 s> *(arg1 + 0x1c))
        sub_140594770(&arg1[2])
    
    __builtin_wcscpy(arg1[2], u"/Engine/")

if (arg1[4] != u"/Game/")
    int32_t rdx_3 = 0
    arg1[5].d = 0
    
    if (*(arg1 + 0x2c) != 7)
        sub_1405947f0(&arg1[4], 7)
        rdx_3 = arg1[5].d
    
    arg1[5].d = rdx_3 + 7
    
    if (rdx_3 + 7 s> *(arg1 + 0x2c))
        sub_140594770(&arg1[4])
    
    uint64_t* rcx_8 = arg1[4]
    *rcx_8 = 0x6d00610047002f
    rcx_8[1].d = 0x2f0065
    *(rcx_8 + 0xc) = 0

if (arg1[6] != u"/Script/")
    int32_t rdx_4 = 0
    arg1[7].d = 0
    
    if (*(arg1 + 0x3c) != 9)
        sub_1405947f0(&arg1[6], 9)
        rdx_4 = arg1[7].d
    
    arg1[7].d = rdx_4 + 9
    
    if (rdx_4 + 9 s> *(arg1 + 0x3c))
        sub_140594770(&arg1[6])
    
    __builtin_wcscpy(arg1[6], u"/Script/")

if (arg1[8] != u"/Memory/")
    int32_t rdx_5 = 0
    arg1[9].d = 0
    
    if (*(arg1 + 0x4c) != 9)
        sub_1405947f0(&arg1[8], 9)
        rdx_5 = arg1[9].d
    
    arg1[9].d = rdx_5 + 9
    
    if (rdx_5 + 9 s> *(arg1 + 0x4c))
        sub_140594770(&arg1[8])
    
    __builtin_wcscpy(arg1[8], u"/Memory/")

if (arg1[0xa] != u"/Temp/")
    int32_t rdx_6 = 0
    arg1[0xb].d = 0
    
    if (*(arg1 + 0x5c) != 7)
        sub_1405947f0(&arg1[0xa], 7)
        rdx_6 = arg1[0xb].d
    
    arg1[0xb].d = rdx_6 + 7
    
    if (rdx_6 + 7 s> *(arg1 + 0x5c))
        sub_140594770(&arg1[0xa])
    
    uint64_t* rcx_17 = arg1[0xa]
    *rcx_17 = 0x6d00650054002f
    rcx_17[1].d = 0x2f0070
    *(rcx_17 + 0xc) = 0

void*** var_58
int64_t* rax_7 = sub_140b139e0(&var_58)

if (&arg1[0xe] != rax_7)
    int64_t rcx_19 = arg1[0xe]
    
    if (rcx_19 != 0)
        sub_140a74f90(rcx_19)
    
    arg1[0xe] = *rax_7
    *rax_7 = 0
    arg1[0xf].d = rax_7[1].d
    *(arg1 + 0x7c) = *(rax_7 + 0xc)
    rax_7[1] = 0

void*** rcx_21 = var_58

if (rcx_21 != 0)
    sub_140a74f90(rcx_21)

if (arg1[0x10] != u"../../Content/")
    int32_t rdx_7 = 0
    arg1[0x11].d = 0
    
    if (*(arg1 + 0x8c) != 0xf)
        sub_1405947f0(&arg1[0x10], 0xf)
        rdx_7 = arg1[0x11].d
    
    arg1[0x11].d = rdx_7 + 0xf
    
    if (rdx_7 + 0xf s> *(arg1 + 0x8c))
        sub_140594770(&arg1[0x10])
    
    __builtin_wcscpy(arg1[0x10], u"../../Content/")

int64_t var_38
int64_t* rax_11 = sub_140b13b30(&var_38)
int32_t rdx_8 = rax_11[1].d
int32_t rdx_9 = neg.d(rdx_8)
var_58 = *rax_11
*rax_11 = 0
int32_t rcx_27 = rax_11[1].d
int32_t rcx_28 = *(rax_11 + 0xc)
rax_11[1] = 0
int32_t rdx_12 = sbb.d(rdx_9, rdx_9, rdx_8 != 0) + 0xa + rcx_27

if (rdx_12 s> rcx_28)
    sub_1405947f0(&var_58, rdx_12)

sub_140a2cf70(&var_58, u"Shaders/", 8)

if (&arg1[0x12] == &var_58)
    void*** rcx_32 = var_58
    
    if (rcx_32 != 0)
        sub_140a74f90(rcx_32)
else
    int64_t rcx_31 = arg1[0x12]
    
    if (rcx_31 != 0)
        sub_140a74f90(rcx_31)
    
    arg1[0x12] = var_58
    arg1[0x13].d = rcx_27
    *(arg1 + 0x9c) = rcx_28
    int32_t var_50
    var_50.q = 0
    var_58 = nullptr

int64_t rcx_33 = var_38

if (rcx_33 != 0)
    sub_140a74f90(rcx_33)

if (arg1[0x14] != u"../../Shaders/")
    int32_t rdx_13 = 0
    arg1[0x15].d = 0
    
    if (*(arg1 + 0xac) != 0xf)
        sub_1405947f0(&arg1[0x14], 0xf)
        rdx_13 = arg1[0x15].d
    
    arg1[0x15].d = rdx_13 + 0xf
    
    if (rdx_13 + 0xf s> *(arg1 + 0xac))
        sub_140594770(&arg1[0x14])
    
    __builtin_wcscpy(arg1[0x14], u"../../Shaders/")

int64_t* rax_16 = sub_140b25050(&var_38)

if (&arg1[0x16] != rax_16)
    int64_t rcx_38 = arg1[0x16]
    
    if (rcx_38 != 0)
        sub_140a74f90(rcx_38)
    
    arg1[0x16] = *rax_16
    *rax_16 = 0
    arg1[0x17].d = rax_16[1].d
    *(arg1 + 0xbc) = *(rax_16 + 0xc)
    rax_16[1] = 0

int64_t rcx_40 = var_38

if (rcx_40 != 0)
    sub_140a74f90(rcx_40)

int64_t* rax_19 = sub_140b24f00(&var_38)

if (&arg1[0x18] != rax_19)
    int64_t rcx_42 = arg1[0x18]
    
    if (rcx_42 != 0)
        sub_140a74f90(rcx_42)
    
    arg1[0x18] = *rax_19
    *rax_19 = 0
    arg1[0x19].d = rax_19[1].d
    *(arg1 + 0xcc) = *(rax_19 + 0xc)
    rax_19[1] = 0

int64_t rcx_44 = var_38

if (rcx_44 != 0)
    sub_140a74f90(rcx_44)

int64_t* rax_22 = sub_140b251a0(&var_38)
int32_t rdx_14 = rax_22[1].d
int32_t rdx_15 = neg.d(rdx_14)
var_58 = *rax_22
*rax_22 = 0
int32_t rcx_47 = rax_22[1].d
int32_t rcx_48 = *(rax_22 + 0xc)
rax_22[1] = 0
int32_t rdx_18 = sbb.d(rdx_15, rdx_15, rdx_14 != 0) + 9 + rcx_47

if (rdx_18 s> rcx_48)
    sub_1405947f0(&var_58, rdx_18)

sub_140a2cf70(&var_58, u"Script/", 7)

if (&arg1[0x1a] == &var_58)
    void*** rcx_52 = var_58
    
    if (rcx_52 != 0)
        sub_140a74f90(rcx_52)
else
    int64_t rcx_51 = arg1[0x1a]
    
    if (rcx_51 != 0)
        sub_140a74f90(rcx_51)
    
    arg1[0x1a] = var_58
    arg1[0x1b].d = rcx_47
    *(arg1 + 0xdc) = rcx_48
    int32_t var_50_1
    var_50_1.q = 0
    var_58 = nullptr

int64_t rcx_53 = var_38

if (rcx_53 != 0)
    sub_140a74f90(rcx_53)

sub_140597df0(&arg1[0x1c], sub_140b257f0())
int64_t var_48
int32_t rcx_56 = sub_140a2e390(&var_48, u"../../../%s/", u"Embers")
int64_t rbx_6 = var_48
var_58 = nullptr
int32_t var_40
sub_1405a4c70(&var_58, sbb.d(rcx_56, rcx_56, var_40 != 0) + 0xa + var_40, 0)
memcpy(var_58, rbx_6, var_40 * 2)
sub_140a2cf70(&var_58, u"Content/", 8)
void*** rcx_61

if (&arg1[0x1e] == &var_58)
    rcx_61 = var_58
    
    if (rcx_61 != 0)
        rcx_61 = sub_140a74f90(rcx_61)
else
    rcx_61 = arg1[0x1e]
    
    if (rcx_61 != 0)
        rcx_61 = sub_140a74f90(rcx_61)
    
    arg1[0x1e] = var_58
    arg1[0x1f].d = var_40
    *(arg1 + 0xfc) = rcx_48

int64_t rbx_8 = var_48
var_58 = nullptr
sub_1405a4c70(&var_58, sbb.d(rcx_61.d, rcx_61.d, var_40 != 0) + 9 + var_40, 0)
memcpy(var_58, rbx_8, var_40 * 2)
sub_140a2cf70(&var_58, u"Config/", 7)
void*** rcx_66

if (&arg1[0x20] == &var_58)
    rcx_66 = var_58
    
    if (rcx_66 != 0)
        rcx_66 = sub_140a74f90(rcx_66)
else
    rcx_66 = arg1[0x20]
    
    if (rcx_66 != 0)
        rcx_66 = sub_140a74f90(rcx_66)
    
    arg1[0x20] = var_58
    arg1[0x21].d = var_40
    *(arg1 + 0x10c) = rcx_48

int64_t rbx_10 = var_48
var_58 = nullptr
sub_1405a4c70(&var_58, sbb.d(rcx_66.d, rcx_66.d, var_40 != 0) + 9 + var_40, 0)
memcpy(var_58, rbx_10, var_40 * 2)
sub_140a2cf70(&var_58, u"Script/", 7)
void*** rcx_71

if (&arg1[0x22] == &var_58)
    rcx_71 = var_58
    
    if (rcx_71 != 0)
        rcx_71 = sub_140a74f90(rcx_71)
else
    rcx_71 = arg1[0x22]
    
    if (rcx_71 != 0)
        rcx_71 = sub_140a74f90(rcx_71)
    
    arg1[0x22] = var_58
    arg1[0x23].d = var_40
    *(arg1 + 0x11c) = rcx_48

int64_t rbx_12 = var_48
var_58 = nullptr
sub_1405a4c70(&var_58, sbb.d(rcx_71.d, rcx_71.d, var_40 != 0) + 8 + var_40, 0)
memcpy(var_58, rbx_12, var_40 * 2)
sub_140a2cf70(&var_58, u"Saved/", 6)

if (&arg1[0x24] == &var_58)
    void*** rcx_77 = var_58
    
    if (rcx_77 != 0)
        sub_140a74f90(rcx_77)
else
    int64_t rcx_76 = arg1[0x24]
    
    if (rcx_76 != 0)
        sub_140a74f90(rcx_76)
    
    arg1[0x24] = var_58
    arg1[0x25].d = var_40
    *(arg1 + 0x12c) = rcx_48

EnterCriticalSection(&data_143e1a450)
sub_140ba25b0(&arg1[0x28], 0xb)
int64_t rbx_14 = sx.q(arg1[0x29].d)
int32_t rax_47 = (rbx_14 + 1).d
arg1[0x29].d = rax_47

if (rax_47 s> *(arg1 + 0x14c))
    sub_1405c4e40(&arg1[0x28])

int64_t* rbx_16 = (rbx_14 << 5) + arg1[0x28]
sub_140596d10(rbx_16, &arg1[2])
sub_140596d10(&rbx_16[2], &arg1[0xe])
char rax_48 = sub_140b1d930(&arg1[0x16], &arg1[0x10])
int64_t rbx_17 = sx.q(arg1[0x29].d)
int32_t rax_49 = (rbx_17 + 1).d
arg1[0x29].d = rax_49
int64_t* rdx_37
int64_t* rdi_7

if (rax_48 == 0)
    if (rax_49 s> *(arg1 + 0x14c))
        sub_1405c4e40(&arg1[0x28])
    
    rdx_37 = &arg1[2]
    rdi_7 = &arg1[4]
else
    if (rax_49 s> *(arg1 + 0x14c))
        sub_1405c4e40(&arg1[0x28])
    
    rdi_7 = &arg1[4]
    rdx_37 = rdi_7

int64_t* rbx_19 = (rbx_17 << 5) + arg1[0x28]
sub_140596d10(rbx_19, rdx_37)
sub_140596d10(&rbx_19[2], &arg1[0x10])
int64_t rbx_20 = sx.q(arg1[0x29].d)
int32_t rax_50 = (rbx_20 + 1).d
arg1[0x29].d = rax_50

if (rax_50 s> *(arg1 + 0x14c))
    sub_1405c4e40(&arg1[0x28])

int64_t* rbx_22 = (rbx_20 << 5) + arg1[0x28]
sub_140596d10(rbx_22, &arg1[2])
sub_140596d10(&rbx_22[2], &arg1[0x12])
int64_t rbx_23 = sx.q(arg1[0x29].d)
int32_t rax_51 = (rbx_23 + 1).d
arg1[0x29].d = rax_51

if (rax_51 s> *(arg1 + 0x14c))
    sub_1405c4e40(&arg1[0x28])

int64_t* rbx_25 = (rbx_23 << 5) + arg1[0x28]
sub_140596d10(rbx_25, &arg1[2])
sub_140596d10(&rbx_25[2], &arg1[0x14])
int64_t rbx_26 = sx.q(arg1[0x29].d)
int32_t rax_52 = (rbx_26 + 1).d
arg1[0x29].d = rax_52

if (rax_52 s> *(arg1 + 0x14c))
    sub_1405c4e40(&arg1[0x28])

int64_t* rbx_28 = (rbx_26 << 5) + arg1[0x28]
sub_140596d10(rbx_28, rdi_7)
sub_140596d10(&rbx_28[2], &arg1[0x16])
int64_t rbx_29 = sx.q(arg1[0x29].d)
int32_t rax_53 = (rbx_29 + 1).d
arg1[0x29].d = rax_53

if (rax_53 s> *(arg1 + 0x14c))
    sub_1405c4e40(&arg1[0x28])

int64_t* rbx_31 = (rbx_29 << 5) + arg1[0x28]
sub_140596d10(rbx_31, &arg1[6])
sub_140596d10(&rbx_31[2], &arg1[0x1a])
int64_t rbx_32 = sx.q(arg1[0x29].d)
int32_t rax_54 = (rbx_32 + 1).d
arg1[0x29].d = rax_54

if (rax_54 s> *(arg1 + 0x14c))
    sub_1405c4e40(&arg1[0x28])

int64_t* rbx_34 = (rbx_32 << 5) + arg1[0x28]
sub_140596d10(rbx_34, &arg1[6])
sub_140596d10(&rbx_34[2], &arg1[0x1a])
int64_t rbx_35 = sx.q(arg1[0x29].d)
int32_t rax_55 = (rbx_35 + 1).d
arg1[0x29].d = rax_55

if (rax_55 s> *(arg1 + 0x14c))
    sub_1405c4e40(&arg1[0x28])

int64_t* rbx_37 = (rbx_35 << 5) + arg1[0x28]
sub_140596d10(rbx_37, &arg1[0xa])
sub_140596d10(&rbx_37[2], &arg1[0x1c])
int64_t rbx_38 = sx.q(arg1[0x29].d)
int32_t rax_56 = (rbx_38 + 1).d
arg1[0x29].d = rax_56

if (rax_56 s> *(arg1 + 0x14c))
    sub_1405c4e40(&arg1[0x28])

int64_t* rbx_40 = (rbx_38 << 5) + arg1[0x28]
sub_140596d10(rbx_40, rdi_7)
sub_140596d10(&rbx_40[2], &arg1[0x1e])
int64_t rbx_41 = sx.q(arg1[0x29].d)
int32_t rax_57 = (rbx_41 + 1).d
arg1[0x29].d = rax_57

if (rax_57 s> *(arg1 + 0x14c))
    sub_1405c4e40(&arg1[0x28])

int64_t* rbx_43 = (rbx_41 << 5) + arg1[0x28]
sub_140596d10(rbx_43, &arg1[6])
sub_140596d10(&rbx_43[2], &arg1[0x22])
int64_t rbx_44 = sx.q(arg1[0x29].d)
int32_t rax_58 = (rbx_44 + 1).d
arg1[0x29].d = rax_58

if (rax_58 s> *(arg1 + 0x14c))
    sub_1405c4e40(&arg1[0x28])

int64_t* rbx_46 = (rbx_44 << 5) + arg1[0x28]
sub_140596d10(rbx_46, &arg1[0xa])
sub_140596d10(&rbx_46[2], &arg1[0x24])
int64_t rbx_47 = sx.q(arg1[0x29].d)
int32_t rax_59 = (rbx_47 + 1).d
arg1[0x29].d = rax_59

if (rax_59 s> *(arg1 + 0x14c))
    sub_1405c4e40(&arg1[0x28])

int64_t* rbx_49 = (rbx_47 << 5) + arg1[0x28]
sub_140596d10(rbx_49, arg1)
sub_140596d10(&rbx_49[2], &arg1[0x18])
sub_140ba25b0(&arg1[0x26], 9)
int64_t rbx_50 = sx.q(arg1[0x27].d)
int32_t rax_60 = (rbx_50 + 1).d
arg1[0x27].d = rax_60

if (rax_60 s> *(arg1 + 0x13c))
    sub_1405c4e40(&arg1[0x26])

int64_t* rbx_52 = (rbx_50 << 5) + arg1[0x26]
sub_140596d10(rbx_52, &arg1[2])
sub_140596d10(&rbx_52[2], &arg1[0xe])
int64_t rbx_53 = sx.q(arg1[0x27].d)
int32_t rax_61 = (rbx_53 + 1).d
arg1[0x27].d = rax_61

if (rax_61 s> *(arg1 + 0x13c))
    sub_1405c4e40(&arg1[0x26])

int64_t* rbx_55 = (rbx_53 << 5) + arg1[0x26]
sub_140596d10(rbx_55, &arg1[2])
sub_140596d10(&rbx_55[2], &arg1[0x12])
int64_t rbx_56 = sx.q(arg1[0x27].d)
int32_t rax_62 = (rbx_56 + 1).d
arg1[0x27].d = rax_62

if (rax_62 s> *(arg1 + 0x13c))
    sub_1405c4e40(&arg1[0x26])

int64_t* rbx_58 = (rbx_56 << 5) + arg1[0x26]
sub_140596d10(rbx_58, rdi_7)
sub_140596d10(&rbx_58[2], &arg1[0x16])
int64_t rbx_59 = sx.q(arg1[0x27].d)
int32_t rax_63 = (rbx_59 + 1).d
arg1[0x27].d = rax_63

if (rax_63 s> *(arg1 + 0x13c))
    sub_1405c4e40(&arg1[0x26])

int64_t* rbx_61 = (rbx_59 << 5) + arg1[0x26]
sub_140596d10(rbx_61, &arg1[6])
sub_140596d10(&rbx_61[2], &arg1[0x1a])
int64_t rbx_62 = sx.q(arg1[0x27].d)
int32_t rax_64 = (rbx_62 + 1).d
arg1[0x27].d = rax_64

if (rax_64 s> *(arg1 + 0x13c))
    sub_1405c4e40(&arg1[0x26])

int64_t* rbx_64 = (rbx_62 << 5) + arg1[0x26]
sub_140596d10(rbx_64, &arg1[0xa])
sub_140596d10(&rbx_64[2], &arg1[0x1c])
int64_t rbx_65 = sx.q(arg1[0x27].d)
int32_t rax_65 = (rbx_65 + 1).d
arg1[0x27].d = rax_65

if (rax_65 s> *(arg1 + 0x13c))
    sub_1405c4e40(&arg1[0x26])

int64_t* rbx_67 = (rbx_65 << 5) + arg1[0x26]
sub_140596d10(rbx_67, rdi_7)
sub_140596d10(&rbx_67[2], &arg1[0x1e])
int64_t rbx_68 = sx.q(arg1[0x27].d)
int32_t rax_66 = (rbx_68 + 1).d
arg1[0x27].d = rax_66

if (rax_66 s> *(arg1 + 0x13c))
    sub_1405c4e40(&arg1[0x26])

int64_t* rbx_70 = (rbx_68 << 5) + arg1[0x26]
sub_140596d10(rbx_70, &arg1[6])
sub_140596d10(&rbx_70[2], &arg1[0x22])
int64_t rbx_71 = sx.q(arg1[0x27].d)
int32_t rax_67 = (rbx_71 + 1).d
arg1[0x27].d = rax_67

if (rax_67 s> *(arg1 + 0x13c))
    sub_1405c4e40(&arg1[0x26])

int64_t* rbx_73 = (rbx_71 << 5) + arg1[0x26]
sub_140596d10(rbx_73, &arg1[0xa])
sub_140596d10(&rbx_73[2], &arg1[0x24])
int64_t rbx_74 = sx.q(arg1[0x27].d)
int32_t rax_68 = (rbx_74 + 1).d
arg1[0x27].d = rax_68

if (rax_68 s> *(arg1 + 0x13c))
    sub_1405c4e40(&arg1[0x26])

int64_t* rbx_76 = (rbx_74 << 5) + arg1[0x26]
sub_140596d10(rbx_76, arg1)
sub_140596d10(&rbx_76[2], &arg1[0x20])
sub_140b7c510()
var_58 = nullptr
void*** rax_69 = sub_140a84c80(0, 0x20, 0)
var_58 = rax_69
int32_t var_50_6 = 2

if (rax_69 != 0)
    *rax_69 = &data_142e85898
    rax_69[1] = sub_140bb4e90
    rax_69[3] = sub_140a387b0()
    *rax_69 = &data_142e858f0

(*(data_143e19eb0 + 0x28))(&data_143e19eb0, &var_58)
void*** rax_73

if (var_50_6 == 0)
    rax_73 = var_58
label_140b95c5a:
    
    if (rax_73 != 0)
        sub_140a74f90(rax_73)
else
    void*** rcx_145 = var_58
    
    if (rcx_145 != 0)
        (*rcx_145)[7](rcx_145, 0)
        rax_73 = var_58
        
        if (rax_73 != 0)
            rax_73 = sub_140a84c80(rax_73, 0, 0)
            var_58 = rax_73
        
        int32_t var_50_7 = 0
        goto label_140b95c5a
LeaveCriticalSection(&data_143e1a450)
int64_t rcx_148 = var_48

if (rcx_148 != 0)
    sub_140a74f90(rcx_148)

return arg1
