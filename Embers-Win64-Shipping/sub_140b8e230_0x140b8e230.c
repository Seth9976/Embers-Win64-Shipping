// 函数: sub_140b8e230
// 地址: 0x140b8e230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = 0
int64_t var_48 = 0
int32_t var_40 = 0
sub_1405947f0(&var_48, 0xc)
int32_t rax = var_40 + 0xc
var_40 = rax

if (rax s> 0)
    sub_140594770(&var_48)

UnDecorator::getReferenceType(var_48, u"FileVersion", 0x18)
sub_140b771c0(arg2, &var_48, 3)
int64_t rcx_4 = var_48

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

var_48 = 0
int32_t var_40_1 = 0
sub_1405947f0(&var_48, 8)
int32_t rax_1 = var_40_1 + 8
var_40_1 = rax_1

if (rax_1 s> 0)
    sub_140594770(&var_48)

UnDecorator::getReferenceType(var_48, u"Version", 0x10)
int32_t rcx_8 = arg2[4].d
int64_t r12 = sx.q(*arg1)
int16_t arg_8

if (((rcx_8 - 2) & 0xfffffff5) != 0 || rcx_8 == 0xa)
    int64_t* rcx_9 = arg2[1]
    arg_8 = 0x2c
    (*(*rcx_9 + 0x150))(rcx_9, &arg_8, 2)

sub_14067f880(arg2[1])
int32_t i_4 = *(arg2 + 0x24)
int64_t* r15 = arg2[1]

if (i_4 s> 0)
    uint64_t i_3 = zx.q(i_4)
    uint64_t i
    
    do
        int64_t rax_4 = *r15
        arg_8 = 9
        (*(rax_4 + 0x150))(r15, &arg_8, 2)
        i = i_3
        i_3 -= 1
    while (i != 1)

(*(*arg2 + 0x10))(arg2, &var_48)
int64_t* rcx_13 = arg2[1]
arg_8 = 0x3a
(*(*rcx_13 + 0x150))(rcx_13, &arg_8, 2)
int64_t* rcx_14 = arg2[1]
arg_8 = 0x20
(*(*rcx_14 + 0x150))(rcx_14, &arg_8, 2)
int16_t* var_38
sub_140a2e390(&var_38, u"%lld", r12)
int64_t* r9 = arg2[1]
int32_t var_30
int32_t rcx_17
int16_t* const rdx_8

if (var_30 == 0)
    rcx_17 = 0
    rdx_8 = &data_142d40450
else
    rdx_8 = var_38
    rcx_17 = var_30 - 1

(*(*r9 + 0x150))(r9, rdx_8, sx.q(rcx_17) * 2)
int16_t* rcx_19 = var_38

if (rcx_19 != 0)
    sub_140a74f90(rcx_19)

int64_t rcx_20 = var_48
arg2[4].d = 8

if (rcx_20 != 0)
    sub_140a74f90(rcx_20)

var_48 = 0
int32_t var_40_2 = 0
sub_1405947f0(&var_48, 0xc)
int32_t rax_9 = var_40_2 + 0xc
var_40_2 = rax_9

if (rax_9 s> 0)
    sub_140594770(&var_48)

UnDecorator::getReferenceType(var_48, u"VersionName", 0x18)
sub_140918d50(arg2, &var_48, sub_140596d10(&var_38, &arg1[2]))
int64_t rcx_26 = var_48

if (rcx_26 != 0)
    sub_140a74f90(rcx_26)

var_48 = 0
int32_t var_40_3 = 0
sub_1405947f0(&var_48, 0xd)
int32_t rax_11 = var_40_3 + 0xd
var_40_3 = rax_11

if (rax_11 s> 0)
    sub_140594770(&var_48)

UnDecorator::getReferenceType(var_48, u"FriendlyName", 0x1a)
sub_140918d50(arg2, &var_48, sub_140596d10(&var_38, &arg1[6]))
int64_t rcx_32 = var_48

if (rcx_32 != 0)
    sub_140a74f90(rcx_32)

var_48 = 0
int32_t var_40_4 = 0
sub_1405947f0(&var_48, 0xc)
int32_t rax_13 = var_40_4 + 0xc
var_40_4 = rax_13

if (rax_13 s> 0)
    sub_140594770(&var_48)

UnDecorator::getReferenceType(var_48, u"Description", 0x18)
sub_140918d50(arg2, &var_48, sub_140596d10(&var_38, &arg1[0xa]))
int64_t rcx_38 = var_48

if (rcx_38 != 0)
    sub_140a74f90(rcx_38)

var_48 = 0
int32_t var_40_5 = 0
sub_1405947f0(&var_48, 9)
int32_t rax_15 = var_40_5 + 9
var_40_5 = rax_15

if (rax_15 s> 0)
    sub_140594770(&var_48)

UnDecorator::getReferenceType(var_48, u"Category", 0x12)
sub_140918d50(arg2, &var_48, sub_140596d10(&var_38, &arg1[0xe]))
int64_t rcx_44 = var_48

if (rcx_44 != 0)
    sub_140a74f90(rcx_44)

var_48 = 0
int32_t var_40_6 = 0
sub_1405947f0(&var_48, 0xa)
int32_t rax_17 = var_40_6 + 0xa
var_40_6 = rax_17

if (rax_17 s> 0)
    sub_140594770(&var_48)

UnDecorator::getReferenceType(var_48, u"CreatedBy", 0x14)
sub_140918d50(arg2, &var_48, sub_140596d10(&var_38, &arg1[0x12]))
int64_t rcx_50 = var_48

if (rcx_50 != 0)
    sub_140a74f90(rcx_50)

var_48 = 0
int32_t var_40_7 = 0
sub_1405947f0(&var_48, 0xd)
int32_t rax_19 = var_40_7 + 0xd
var_40_7 = rax_19

if (rax_19 s> 0)
    sub_140594770(&var_48)

UnDecorator::getReferenceType(var_48, u"CreatedByURL", 0x1a)
sub_140918d50(arg2, &var_48, sub_140596d10(&var_38, &arg1[0x16]))
int64_t rcx_56 = var_48

if (rcx_56 != 0)
    sub_140a74f90(rcx_56)

var_48 = 0
int32_t var_40_8 = 0
sub_1405947f0(&var_48, 8)
int32_t rax_21 = var_40_8 + 8
var_40_8 = rax_21

if (rax_21 s> 0)
    sub_140594770(&var_48)

UnDecorator::getReferenceType(var_48, u"DocsURL", 0x10)
sub_140918d50(arg2, &var_48, sub_140596d10(&var_38, &arg1[0x1a]))
int64_t rcx_62 = var_48

if (rcx_62 != 0)
    sub_140a74f90(rcx_62)

var_48 = 0
int32_t var_40_9 = 0
sub_1405947f0(&var_48, 0xf)
int32_t rax_23 = var_40_9 + 0xf
var_40_9 = rax_23

if (rax_23 s> 0)
    sub_140594770(&var_48)

UnDecorator::getReferenceType(var_48, u"MarketplaceURL", 0x1e)
sub_140918d50(arg2, &var_48, sub_140596d10(&var_38, &arg1[0x1e]))
int64_t rcx_68 = var_48

if (rcx_68 != 0)
    sub_140a74f90(rcx_68)

var_48 = 0
int32_t var_40_10 = 0
sub_1405947f0(&var_48, 0xb)
int32_t rax_25 = var_40_10 + 0xb
var_40_10 = rax_25

if (rax_25 s> 0)
    sub_140594770(&var_48)

UnDecorator::getReferenceType(var_48, u"SupportURL", 0x16)
sub_140918d50(arg2, &var_48, sub_140596d10(&var_38, &arg1[0x22]))
int64_t rcx_74 = var_48

if (rcx_74 != 0)
    sub_140a74f90(rcx_74)

int32_t rax_27 = arg1[0x28]

if (rax_27 != 0 && rax_27 - 1 s> 0)
    var_48 = 0
    int32_t var_40_11 = 0
    sub_1405947f0(&var_48, 0xe)
    int32_t rax_29 = var_40_11 + 0xe
    var_40_11 = rax_29
    
    if (rax_29 s> 0)
        sub_140594770(&var_48)
    
    UnDecorator::getReferenceType(var_48, u"EngineVersion", 0x1c)
    sub_140918d50(arg2, &var_48, sub_140596d10(&var_38, &arg1[0x26]))
    int64_t rcx_80 = var_48
    
    if (rcx_80 != 0)
        sub_140a74f90(rcx_80)

if (arg1[0x3e].b != 0)
    var_48 = 0
    int32_t var_40_12 = 0
    sub_1405947f0(&var_48, 0x11)
    int32_t rax_31 = var_40_12 + 0x11
    var_40_12 = rax_31
    
    if (rax_31 s> 0)
        sub_140594770(&var_48)
    
    UnDecorator::getReferenceType(var_48, u"EnabledByDefault", 0x22)
    sub_140668ff0(arg2, &var_48, arg1[0x3e].b == 1)
    int64_t rcx_85 = var_48
    
    if (rcx_85 != 0)
        sub_140a74f90(rcx_85)

var_48 = 0
int32_t var_40_13 = 0
sub_1405947f0(&var_48, 0x12)
int32_t rax_32 = var_40_13 + 0x12
var_40_13 = rax_32

if (rax_32 s> 0)
    sub_140594770(&var_48)

UnDecorator::getReferenceType(var_48, u"CanContainContent", 0x24)
sub_140668ff0(arg2, &var_48, *(arg1 + 0xf9))
int64_t rcx_90 = var_48

if (rcx_90 != 0)
    sub_140a74f90(rcx_90)

var_48 = 0
int32_t var_40_14 = 0
sub_1405947f0(&var_48, 0xe)
int32_t rax_33 = var_40_14 + 0xe
var_40_14 = rax_33

if (rax_33 s> 0)
    sub_140594770(&var_48)

UnDecorator::getReferenceType(var_48, u"IsBetaVersion", 0x1c)
sub_140668ff0(arg2, &var_48, *(arg1 + 0xfa))
int64_t rcx_95 = var_48

if (rcx_95 != 0)
    sub_140a74f90(rcx_95)

var_48 = 0
int32_t var_40_15 = 0
sub_1405947f0(&var_48, 0x16)
int32_t rax_34 = var_40_15 + 0x16
var_40_15 = rax_34

if (rax_34 s> 0)
    sub_140594770(&var_48)

UnDecorator::getReferenceType(var_48, u"IsExperimentalVersion", 0x2c)
sub_140668ff0(arg2, &var_48, *(arg1 + 0xfb))
int64_t rcx_100 = var_48

if (rcx_100 != 0)
    sub_140a74f90(rcx_100)

var_48 = 0
int32_t var_40_16 = 0
sub_1405947f0(&var_48, 0xa)
int32_t rax_35 = var_40_16 + 0xa
var_40_16 = rax_35

if (rax_35 s> 0)
    sub_140594770(&var_48)

UnDecorator::getReferenceType(var_48, u"Installed", 0x14)
sub_140668ff0(arg2, &var_48, arg1[0x3f].b)
int64_t rcx_105 = var_48

if (rcx_105 != 0)
    sub_140a74f90(rcx_105)

if (arg1[0x2c] s> 0)
    var_48 = 0
    int32_t var_40_17 = 0
    sub_1405947f0(&var_48, 0x19)
    int32_t rax_36 = var_40_17 + 0x19
    var_40_17 = rax_36
    
    if (rax_36 s> 0)
        sub_140594770(&var_48)
    
    UnDecorator::getReferenceType(var_48, u"SupportedTargetPlatforms", 0x32)
    sub_140b770a0(arg2, &var_48, &arg1[0x2a])
    int64_t rcx_110 = var_48
    
    if (rcx_110 != 0)
        sub_140a74f90(rcx_110)

if (arg1[0x30] s> 0)
    var_48 = 0
    int32_t var_40_18 = 0
    sub_1405947f0(&var_48, 0x12)
    int32_t rax_37 = var_40_18 + 0x12
    var_40_18 = rax_37
    
    if (rax_37 s> 0)
        sub_140594770(&var_48)
    
    UnDecorator::getReferenceType(var_48, u"SupportedPrograms", 0x24)
    sub_140b770a0(arg2, &var_48, &arg1[0x2e])
    int64_t rcx_115 = var_48
    
    if (rcx_115 != 0)
        sub_140a74f90(rcx_115)

if (arg1[0x40].b != 0)
    var_48 = 0
    int32_t var_40_19 = 0
    sub_1405947f0(&var_48, 0x13)
    int32_t rax_38 = var_40_19 + 0x13
    var_40_19 = rax_38
    
    if (rax_38 s> 0)
        sub_140594770(&var_48)
    
    UnDecorator::getReferenceType(var_48, u"bIsPluginExtension", 0x26)
    sub_140668ff0(arg2, &var_48, arg1[0x40].b)
    int64_t rcx_120 = var_48
    
    if (rcx_120 != 0)
        sub_140a74f90(rcx_120)

if (arg1[0x38] s> 0)
    var_48 = 0
    int32_t var_40_20 = 0
    sub_1405947f0(&var_48, 8)
    int32_t rax_39 = var_40_20 + 8
    var_40_20 = rax_39
    
    if (rax_39 s> 0)
        sub_140594770(&var_48)
    
    UnDecorator::getReferenceType(var_48, u"Modules", 0x10)
    sub_1409391d0(arg2, &var_48)
    int64_t rcx_125 = var_48
    
    if (rcx_125 != 0)
        sub_140a74f90(rcx_125)
    
    int32_t i_1 = 0
    
    if (arg1[0x38] s> 0)
        do
            sub_140b8d530(sx.q(i_1) * 0xa0 + *(arg1 + 0xd8), arg2)
            i_1 += 1
        while (i_1 s< arg1[0x38])
    
    sub_140938f70(arg2)

sub_140b90370(arg2, u"LocalizationTargets", &arg1[0x3a])

if (*(arg1 + 0xfd) != 0)
    var_48 = 0
    int32_t var_40_21 = 0
    sub_1405947f0(&var_48, 0x16)
    int32_t rax_41 = var_40_21 + 0x16
    var_40_21 = rax_41
    
    if (rax_41 s> 0)
        sub_140594770(&var_48)
    
    UnDecorator::getReferenceType(var_48, u"RequiresBuildPlatform", 0x2c)
    sub_140668ff0(arg2, &var_48, *(arg1 + 0xfd))
    int64_t rcx_135 = var_48
    
    if (rcx_135 != 0)
        sub_140a74f90(rcx_135)

if (*(arg1 + 0xfe) != 0)
    var_48 = 0
    int32_t var_40_22 = 0
    sub_1405947f0(&var_48, 7)
    int32_t rax_42 = var_40_22 + 7
    var_40_22 = rax_42
    
    if (rax_42 s> 0)
        sub_140594770(&var_48)
    
    UnDecorator::getReferenceType(var_48, u"Hidden", 0xe)
    sub_140668ff0(arg2, &var_48, *(arg1 + 0xfe))
    int64_t rcx_140 = var_48
    
    if (rcx_140 != 0)
        sub_140a74f90(rcx_140)

if (*(arg1 + 0xff) != 0)
    var_48 = 0
    int32_t var_40_23 = 0
    sub_1405947f0(&var_48, 0x11)
    int32_t rax_43 = var_40_23 + 0x11
    var_40_23 = rax_43
    
    if (rax_43 s> 0)
        sub_140594770(&var_48)
    
    UnDecorator::getReferenceType(var_48, u"ExplicitlyLoaded", 0x22)
    sub_140668ff0(arg2, &var_48, *(arg1 + 0xff))
    int64_t rcx_145 = var_48
    
    if (rcx_145 != 0)
        sub_140a74f90(rcx_145)

if (arg1[0x44] != arg1[0x4f])
    var_48 = 0
    int32_t var_40_24 = 0
    sub_1405947f0(&var_48, 0xe)
    int32_t rax_45 = var_40_24 + 0xe
    var_40_24 = rax_45
    
    if (rax_45 s> 0)
        sub_140594770(&var_48)
    
    UnDecorator::getReferenceType(var_48, u"PreBuildSteps", 0x1c)
    sub_140b8cf50(&arg1[0x42], arg2, &var_48)
    int64_t rcx_150 = var_48
    
    if (rcx_150 != 0)
        sub_140a74f90(rcx_150)

int32_t result = arg1[0x58]

if (result != arg1[0x63])
    var_48 = 0
    int32_t var_40_25 = 0
    sub_1405947f0(&var_48, 0xf)
    int32_t rax_46 = var_40_25 + 0xf
    var_40_25 = rax_46
    
    if (rax_46 s> 0)
        sub_140594770(&var_48)
    
    UnDecorator::getReferenceType(var_48, u"PostBuildSteps", 0x1e)
    result = sub_140b8cf50(&arg1[0x56], arg2, &var_48)
    int64_t rcx_155 = var_48
    
    if (rcx_155 != 0)
        result = sub_140a74f90(rcx_155)

if (arg1[0x6c] s<= 0)
    return result

var_48 = 0
int32_t var_40_26 = 0
sub_1405947f0(&var_48, 8)
int32_t rax_47 = var_40_26 + 8
var_40_26 = rax_47

if (rax_47 s> 0)
    sub_140594770(&var_48)

UnDecorator::getReferenceType(var_48, u"Plugins", 0x10)
sub_1409391d0(arg2, &var_48)
int64_t rcx_160 = var_48

if (rcx_160 != 0)
    sub_140a74f90(rcx_160)

if (arg1[0x6c] s> 0)
    do
        sub_140b8ef70(sx.q(i_2) * 0xa8 + *(arg1 + 0x1a8), arg2)
        i_2 += 1
    while (i_2 s< arg1[0x6c])

return sub_140938f70(arg2)
