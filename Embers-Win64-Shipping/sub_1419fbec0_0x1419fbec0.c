// 函数: sub_1419fbec0
// 地址: 0x1419fbec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
*(arg1 + 4) = 0
void*** var_38 = nullptr
void*** rax = sub_140a84c80(0, 0x30, 0)
var_38 = rax
int32_t var_30 = 3

if (rax != 0)
    *rax = &data_142d3fe58
    rax[1] = arg1
    rax[2] = &data_141a11990
    rax[4] = sub_140a387b0()
    *rax = &data_142d3feb0

int64_t* rcx = data_143db18d0

if (rcx == 0)
    sub_140a53c40()
    rcx = data_143db18d0

*(arg1 + 0x10) = (*(*rcx + 0x98))(rcx, Landscape.Patches", Show/hide Landscape patches", &var_38, 0)
*(arg1 + 8) = &data_142d3ff10
void*** rax_5

if (var_30 == 0)
    rax_5 = var_38
label_1419fbfc2:
    
    if (rax_5 != 0)
        sub_140a74f90(rax_5)
else
    void*** rcx_1 = var_38
    
    if (rcx_1 != 0)
        (*rcx_1)[7](rcx_1, 0)
        rax_5 = var_38
        
        if (rax_5 != 0)
            rax_5 = sub_140a84c80(rax_5, 0, 0)
            var_38 = rax_5
        
        int32_t var_30_1 = 0
        goto label_1419fbfc2
var_38 = nullptr
void*** rax_6 = sub_140a84c80(0, 0x30, 0)
var_38 = rax_6
int32_t var_30_2 = 3

if (rax_6 != 0)
    *rax_6 = &data_142d3fe58
    rax_6[1] = arg1
    rax_6[2] = sub_141a16af0
    rax_6[4] = sub_140a387b0()
    *rax_6 = &data_142d3feb0

int64_t* rcx_4 = data_143db18d0

if (rcx_4 == 0)
    sub_140a53c40()
    rcx_4 = data_143db18d0

*(arg1 + 0x20) =
    (*(*rcx_4 + 0x98))(rcx_4, Landscape.Static", Enable/disable Landscape static drawlists"
    , &var_38, 0)
*(arg1 + 0x18) = &data_142d3ff10
void*** rax_11

if (var_30_2 == 0)
    rax_11 = var_38
label_1419fc08a:
    
    if (rax_11 != 0)
        sub_140a74f90(rax_11)
else
    void*** rcx_5 = var_38
    
    if (rcx_5 != 0)
        (*rcx_5)[7](rcx_5, 0)
        rax_11 = var_38
        
        if (rax_11 != 0)
            rax_11 = sub_140a84c80(rax_11, 0, 0)
            var_38 = rax_11
        
        int32_t var_30_3 = 0
        goto label_1419fc08a
var_38 = nullptr
void*** rax_12 = sub_140a84c80(0, 0x30, 0)
var_38 = rax_12
int32_t var_30_4 = 3

if (rax_12 != 0)
    *rax_12 = &IDelegateInstance::`vftable'
    *rax_12 = &data_142d3fe58
    rax_12[2] = sub_141a05d60
    rax_12[1] = arg1
    rax_12[4] = sub_140a387b0()
    *rax_12 = &data_142d3feb0

int64_t* rcx_8 = data_143db18d0

if (rcx_8 == 0)
    sub_140a53c40()
    rcx_8 = data_143db18d0

*(arg1 + 0x30) = (*(*rcx_8 + 0x90))(rcx_8, Landscape.Combine", 
    Set landscape component combining mode : 0 = Default, 1 = Combine All, 2 = Disabled", &var_38, 0)
*(arg1 + 0x28) = &data_142d3ff10
void*** rax_17

if (var_30_4 == 0)
    rax_17 = var_38
label_1419fc163:
    
    if (rax_17 != 0)
        sub_140a74f90(rax_17)
else
    void*** rcx_9 = var_38
    
    if (rcx_9 != 0)
        (*rcx_9)[7](rcx_9, 0)
        rax_17 = var_38
        
        if (rax_17 != 0)
            rax_17 = sub_140a84c80(rax_17, 0, 0)
            var_38 = rax_17
        
        int32_t var_30_5 = 0
        goto label_1419fc163
return arg1
