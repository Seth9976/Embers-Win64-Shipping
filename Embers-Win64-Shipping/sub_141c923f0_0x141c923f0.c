// 函数: sub_141c923f0
// 地址: 0x141c923f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg2
int64_t* var_148 = nullptr
void*** rax = sub_140a84c80(0, 0x30, 0)
var_148 = rax
int32_t var_140 = 3

if (rax != 0)
    *rax = &data_142d3fe58
    rax[1] = arg1
    rax[2] = sub_141ca2af0
    rax[4] = sub_140a387b0()
    *rax = &data_142d3feb0

void var_d8
int64_t* rax_3 = sub_140ac6680(
    _vfprintf_p_l(&var_d8, Query the asset registry for assets matching the supplied package name", 
    AssetRegistry"))
int16_t* const r14 = &data_142d40450
int16_t* const rbx_1

if (rax_3[1].d == 0)
    rbx_1 = &data_142d40450
else
    rbx_1 = *rax_3

int64_t* rcx_2 = data_143db18d0

if (rcx_2 == 0)
    sub_140a53c40()
    rcx_2 = data_143db18d0

arg1[2] = (*(*rcx_2 + 0x90))(rcx_2, u"AssetRegistry.GetByName", rbx_1, &var_148, 0)
arg1[1] = &data_142d3ff10
int64_t* var_d0

if (var_d0 != 0)
    var_d0[1].d -= 1
    
    if (var_d0[1].d == 1)
        (**var_d0)(var_d0)
        int32_t rax_8 = *(var_d0 + 0xc)
        *(var_d0 + 0xc) -= 1
        
        if (rax_8 == 1)
            (*(*var_d0 + 8))(var_d0, 1)

int64_t* rax_11

if (var_140 == 0)
    rax_11 = var_148
label_141c9256b:
    
    if (rax_11 != 0)
        sub_140a74f90(rax_11)
else
    int64_t* rcx_5 = var_148
    
    if (rcx_5 != 0)
        (*(*rcx_5 + 0x38))(rcx_5, 0)
        rax_11 = var_148
        
        if (rax_11 != 0)
            rax_11 = sub_140a84c80(rax_11, 0, 0)
            var_148 = rax_11
        
        int32_t var_140_1 = 0
        goto label_141c9256b
void*** var_138 = nullptr
void*** rax_12 = sub_140a84c80(0, 0x30, 0)
var_138 = rax_12
int32_t var_130 = 3

if (rax_12 != 0)
    *rax_12 = &data_142d3fe58
    rax_12[1] = arg1
    rax_12[2] = sub_141ca2bc0
    rax_12[4] = sub_140a387b0()
    *rax_12 = &data_142d3feb0

void var_c0
int64_t* rax_15 = sub_140ac6680(
    _vfprintf_p_l(&var_c0, Query the asset registry for assets matching the supplied package path", 
    AssetRegistry"))
int16_t* const rbx_4

if (rax_15[1].d == 0)
    rbx_4 = &data_142d40450
else
    rbx_4 = *rax_15

int64_t* rcx_10 = data_143db18d0

if (rcx_10 == 0)
    sub_140a53c40()
    rcx_10 = data_143db18d0

arg1[4] = (*(*rcx_10 + 0x90))(rcx_10, u"AssetRegistry.GetByPath", rbx_4, &var_138, 0)
arg1[3] = &data_142d3ff10
int64_t* var_b8

if (var_b8 != 0)
    var_b8[1].d -= 1
    
    if (var_b8[1].d == 1)
        (**var_b8)(var_b8)
        int32_t rax_20 = *(var_b8 + 0xc)
        *(var_b8 + 0xc) -= 1
        
        if (rax_20 == 1)
            (*(*var_b8 + 8))(var_b8, 1)

void*** rax_23

if (var_130 == 0)
    rax_23 = var_138
label_141c926b5:
    
    if (rax_23 != 0)
        sub_140a74f90(rax_23)
else
    void*** rcx_13 = var_138
    
    if (rcx_13 != 0)
        (*rcx_13)[7](rcx_13, 0)
        rax_23 = var_138
        
        if (rax_23 != 0)
            rax_23 = sub_140a84c80(rax_23, 0, 0)
            var_138 = rax_23
        
        int32_t var_130_1 = 0
        goto label_141c926b5
void*** var_128 = nullptr
void*** rax_24 = sub_140a84c80(0, 0x30, 0)
var_128 = rax_24
int32_t var_120 = 3

if (rax_24 != 0)
    *rax_24 = &data_142d3fe58
    rax_24[1] = arg1
    rax_24[2] = sub_141ca29c0
    rax_24[4] = sub_140a387b0()
    *rax_24 = &data_142d3feb0

void var_a8
int64_t* rax_27 = sub_140ac6680(
    _vfprintf_p_l(&var_a8, Query the asset registry for assets matching the supplied class", 
    AssetRegistry"))
int16_t* const rbx_7

if (rax_27[1].d == 0)
    rbx_7 = &data_142d40450
else
    rbx_7 = *rax_27

int64_t* rcx_18 = data_143db18d0

if (rcx_18 == 0)
    sub_140a53c40()
    rcx_18 = data_143db18d0

arg1[6] = (*(*rcx_18 + 0x90))(rcx_18, u"AssetRegistry.GetByClass", rbx_7, &var_128, 0)
arg1[5] = &data_142d3ff10
int64_t* var_a0

if (var_a0 != 0)
    var_a0[1].d -= 1
    
    if (var_a0[1].d == 1)
        (**var_a0)(var_a0)
        int32_t rax_32 = *(var_a0 + 0xc)
        *(var_a0 + 0xc) -= 1
        
        if (rax_32 == 1)
            (*(*var_a0 + 8))(var_a0, 1)

void*** rax_35

if (var_120 == 0)
    rax_35 = var_128
label_141c927ff:
    
    if (rax_35 != 0)
        sub_140a74f90(rax_35)
else
    void*** rcx_21 = var_128
    
    if (rcx_21 != 0)
        (*rcx_21)[7](rcx_21, 0)
        rax_35 = var_128
        
        if (rax_35 != 0)
            rax_35 = sub_140a84c80(rax_35, 0, 0)
            var_128 = rax_35
        
        int32_t var_120_1 = 0
        goto label_141c927ff
void*** var_118 = nullptr
void*** rax_36 = sub_140a84c80(0, 0x30, 0)
var_118 = rax_36
int32_t var_110 = 3

if (rax_36 != 0)
    *rax_36 = &data_142d3fe58
    rax_36[1] = arg1
    rax_36[2] = sub_141ca2c90
    rax_36[4] = sub_140a387b0()
    *rax_36 = &data_142d3feb0

void var_90
int64_t* rax_39 = sub_140ac6680(
    _vfprintf_p_l(&var_90, 
        Query the asset registry for assets matching the supplied tag and value", 
    AssetRegistry"))
int16_t* const rbx_10

if (rax_39[1].d == 0)
    rbx_10 = &data_142d40450
else
    rbx_10 = *rax_39

int64_t* rcx_26 = data_143db18d0

if (rcx_26 == 0)
    sub_140a53c40()
    rcx_26 = data_143db18d0

arg1[8] = (*(*rcx_26 + 0x90))(rcx_26, u"AssetRegistry.GetByTag", rbx_10, &var_118, 0)
arg1[7] = &data_142d3ff10
int64_t* var_88

if (var_88 != 0)
    var_88[1].d -= 1
    
    if (var_88[1].d == 1)
        (**var_88)(var_88)
        int32_t rax_44 = *(var_88 + 0xc)
        *(var_88 + 0xc) -= 1
        
        if (rax_44 == 1)
            (*(*var_88 + 8))(var_88, 1)

void*** rax_47

if (var_110 == 0)
    rax_47 = var_118
label_141c92949:
    
    if (rax_47 != 0)
        sub_140a74f90(rax_47)
else
    void*** rcx_29 = var_118
    
    if (rcx_29 != 0)
        (*rcx_29)[7](rcx_29, 0)
        rax_47 = var_118
        
        if (rax_47 != 0)
            rax_47 = sub_140a84c80(rax_47, 0, 0)
            var_118 = rax_47
        
        int32_t var_110_1 = 0
        goto label_141c92949
void*** var_108 = nullptr
void*** rax_48 = sub_140a84c80(0, 0x30, 0)
var_108 = rax_48
int32_t var_100 = 3

if (rax_48 != 0)
    *rax_48 = &data_142d3fe58
    rax_48[1] = arg1
    rax_48[2] = sub_141ca2f40
    rax_48[4] = sub_140a387b0()
    *rax_48 = &data_142d3feb0

void var_78
int64_t* rax_51 = sub_140ac6680(
    _vfprintf_p_l(&var_78, Query the asset registry for dependencies for the specified package", 
    AssetRegistry"))
int16_t* const rbx_13

if (rax_51[1].d == 0)
    rbx_13 = &data_142d40450
else
    rbx_13 = *rax_51

int64_t* rcx_34 = data_143db18d0

if (rcx_34 == 0)
    sub_140a53c40()
    rcx_34 = data_143db18d0

arg1[0xa] = (*(*rcx_34 + 0x90))(rcx_34, u"AssetRegistry.GetDependencies", rbx_13, &var_108, 0)
arg1[9] = &data_142d3ff10
int64_t* var_70

if (var_70 != 0)
    var_70[1].d -= 1
    
    if (var_70[1].d == 1)
        (**var_70)(var_70)
        int32_t rax_56 = *(var_70 + 0xc)
        *(var_70 + 0xc) -= 1
        
        if (rax_56 == 1)
            (*(*var_70 + 8))(var_70, 1)

void*** rax_59

if (var_100 == 0)
    rax_59 = var_108
label_141c92a93:
    
    if (rax_59 != 0)
        sub_140a74f90(rax_59)
else
    void*** rcx_37 = var_108
    
    if (rcx_37 != 0)
        (*rcx_37)[7](rcx_37, 0)
        rax_59 = var_108
        
        if (rax_59 != 0)
            rax_59 = sub_140a84c80(rax_59, 0, 0)
            var_108 = rax_59
        
        int32_t var_100_1 = 0
        goto label_141c92a93
void*** var_f8 = nullptr
void*** rax_60 = sub_140a84c80(0, 0x30, 0)
var_f8 = rax_60
int32_t var_f0 = 3

if (rax_60 != 0)
    *rax_60 = &data_142d3fe58
    rax_60[1] = arg1
    rax_60[2] = sub_141ca39d0
    rax_60[4] = sub_140a387b0()
    *rax_60 = &data_142d3feb0

void var_60
int64_t* rax_63 = sub_140ac6680(
    _vfprintf_p_l(&var_60, Query the asset registry for referencers for the specified package", 
    AssetRegistry"))
int16_t* const rbx_16

if (rax_63[1].d == 0)
    rbx_16 = &data_142d40450
else
    rbx_16 = *rax_63

int64_t* rcx_42 = data_143db18d0

if (rcx_42 == 0)
    sub_140a53c40()
    rcx_42 = data_143db18d0

arg1[0xc] = (*(*rcx_42 + 0x90))(rcx_42, u"AssetRegistry.GetReferencers", rbx_16, &var_f8, 0)
arg1[0xb] = &data_142d3ff10
int64_t* var_58

if (var_58 != 0)
    var_58[1].d -= 1
    
    if (var_58[1].d == 1)
        (**var_58)(var_58)
        int32_t rax_68 = *(var_58 + 0xc)
        *(var_58 + 0xc) -= 1
        
        if (rax_68 == 1)
            (*(*var_58 + 8))(var_58, 1)

void*** rax_71

if (var_f0 == 0)
    rax_71 = var_f8
label_141c92bd3:
    
    if (rax_71 != 0)
        sub_140a74f90(rax_71)
else
    void*** rcx_45 = var_f8
    
    if (rcx_45 != 0)
        (*rcx_45)[7](rcx_45, 0)
        rax_71 = var_f8
        
        if (rax_71 != 0)
            rax_71 = sub_140a84c80(rax_71, 0, 0)
            var_f8 = rax_71
        
        int32_t var_f0_1 = 0
        goto label_141c92bd3
void*** var_e8 = nullptr
void*** rax_72 = sub_140a84c80(0, 0x30, 0)
var_e8 = rax_72
int32_t var_e0 = 3

if (rax_72 != 0)
    *rax_72 = &data_142d3fe58
    rax_72[1] = arg1
    rax_72[2] = sub_141ca01f0
    rax_72[4] = sub_140a387b0()
    *rax_72 = &data_142d3feb0

void var_48
int16_t** rax_75 = sub_140ac6680(
    _vfprintf_p_l(&var_48, 
        Finds a list of all assets which are in UAsset files but do not share the name ", 
    AssetRegistry"))

if (rax_75[1].d != 0)
    r14 = *rax_75

int64_t* rcx_50 = data_143db18d0

if (rcx_50 == 0)
    sub_140a53c40()
    rcx_50 = data_143db18d0

arg1[0xe] = (*(*rcx_50 + 0x90))(rcx_50, u"AssetRegistry.Debug.FindInvalidUAssets", r14, &var_e8, 0)
arg1[0xd] = &data_142d3ff10
int64_t* var_40

if (var_40 != 0)
    var_40[1].d -= 1
    
    if (var_40[1].d == 1)
        (**var_40)(var_40)
        int32_t rdi_1 = *(var_40 + 0xc)
        *(var_40 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*var_40 + 8))(var_40, zx.q(rdi_1))

void*** rax_82

if (var_e0 == 0)
    rax_82 = var_e8
label_141c92d09:
    
    if (rax_82 != 0)
        sub_140a74f90(rax_82)
else
    void*** rcx_53 = var_e8
    
    if (rcx_53 != 0)
        (*rcx_53)[7](rcx_53, 0)
        rax_82 = var_e8
        
        if (rax_82 != 0)
            rax_82 = sub_140a84c80(rax_82, 0, 0)
            var_e8 = rax_82
        
        int32_t var_e0_1 = 0
        goto label_141c92d09
return arg1
