// 函数: sub_1414fb1f0
// 地址: 0x1414fb1f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 1
__builtin_memset(&arg1[2], 0, 0xa0)
*(arg1 + 0xa8) = 0
*(arg1 + 0xb0) = 0
arg1[0x2e] = 0
sub_1414fde60(&arg1[0x26], 1)
*(*(arg1 + 0x98) + 0x5c) = 1
int64_t rbx_1 = sx.q(arg1[0x2c])
int32_t rax_1 = (rbx_1 + 2).d
arg1[0x2c] = rax_1

if (rax_1 s> arg1[0x2d])
    sub_1405c4e40(&arg1[0x2a])

__builtin_memset((rbx_1 << 5) + *(arg1 + 0xa8), 0, 0x40)
*(*(arg1 + 0xa8) + 0x14) = 0
void* rax_6 = *(arg1 + 0xa8)
*(rax_6 + 0x38) = 1
*(rax_6 + 0x34) = 1
InitializeCriticalSection(&arg1[0x30])
SetCriticalSectionSpinCount(&arg1[0x30], 0xfa0)
__builtin_memset(&arg1[0x3a], 0, 0x20)
void* rcx_4 = &arg1[0x42]
*(rcx_4 + 0x10) = 0
*(rcx_4 + 0x18) = 0
*(rcx_4 + 0x1c) = 0x80
void* rax_7 = *(rcx_4 + 0x10)
void*** var_38 = nullptr

if (rax_7 != 0)
    rcx_4 = rax_7

*rcx_4 = 0
*(rcx_4 + 8) = 0
arg1[0x4a] = 0xffffffff
arg1[0x4b] = 0
*(arg1 + 0x138) = 0
arg1[0x50] = 0
arg1[0x52].b = 0
void*** rax_8 = sub_140a84c80(0, 0x30, 0)
var_38 = rax_8
int32_t var_30 = 3

if (rax_8 != 0)
    *rax_8 = &data_142d3fe58
    rax_8[1] = arg1
    rax_8[2] = sub_140ba92b0
    rax_8[4] = sub_140a387b0()
    *rax_8 = &data_142d3feb0

int64_t* rcx_5 = data_143db18d0

if (rcx_5 == 0)
    sub_140a53c40()
    rcx_5 = data_143db18d0

*(arg1 + 0x158) =
    (*(*rcx_5 + 0x98))(rcx_5, r.VT.Flush", Flush all the physical caches in the VT system."
    , &var_38, 0)
*(arg1 + 0x150) = &data_142d3ff10
void*** rax_13

if (var_30 == 0)
    rax_13 = var_38
label_1414fb455:
    
    if (rax_13 != 0)
        sub_140a74f90(rax_13)
else
    void*** rcx_6 = var_38
    
    if (rcx_6 != 0)
        (*rcx_6)[7](rcx_6, 0)
        rax_13 = var_38
        
        if (rax_13 != 0)
            rax_13 = sub_140a84c80(rax_13, 0, 0)
            var_38 = rax_13
        
        int32_t var_30_1 = 0
        goto label_1414fb455
var_38 = nullptr
void*** rax_14 = sub_140a84c80(0, 0x30, 0)
var_38 = rax_14
int32_t var_30_2 = 3

if (rax_14 != 0)
    *rax_14 = &data_142d3fe58
    rax_14[1] = arg1
    rax_14[2] = sub_140594850
    rax_14[4] = sub_140a387b0()
    *rax_14 = &data_142d3feb0

int64_t* rcx_9 = data_143db18d0

if (rcx_9 == 0)
    sub_140a53c40()
    rcx_9 = data_143db18d0

*(arg1 + 0x168) =
    (*(*rcx_9 + 0x98))(rcx_9, r.VT.Dump", Lot a whole lot of info on the VT system state."
    , &var_38, 0)
*(arg1 + 0x160) = &data_142d3ff10
void*** rax_19

if (var_30_2 == 0)
    rax_19 = var_38
label_1414fb526:
    
    if (rax_19 != 0)
        sub_140a74f90(rax_19)
else
    void*** rcx_10 = var_38
    
    if (rcx_10 != 0)
        (*rcx_10)[7](rcx_10, 0)
        rax_19 = var_38
        
        if (rax_19 != 0)
            rax_19 = sub_140a84c80(rax_19, 0, 0)
            var_38 = rax_19
        
        int32_t var_30_3 = 0
        goto label_1414fb526
var_38 = nullptr
void*** rax_20 = sub_140a84c80(0, 0x30, 0)
var_38 = rax_20
int32_t var_30_4 = 3

if (rax_20 != 0)
    *rax_20 = &data_142d3fe58
    rax_20[1] = arg1
    rax_20[2] = sub_14150b240
    rax_20[4] = sub_140a387b0()
    *rax_20 = &data_142d3feb0

int64_t* rcx_13 = data_143db18d0

if (rcx_13 == 0)
    sub_140a53c40()
    rcx_13 = data_143db18d0

*(arg1 + 0x178) = (*(*rcx_13 + 0x98))(rcx_13, r.VT.ListPhysicalPools", 
    Lot a whole lot of info on the VT system state.", &var_38, 0)
*(arg1 + 0x170) = &data_142d3ff10
void*** rax_25

if (var_30_4 == 0)
    rax_25 = var_38
label_1414fb5f7:
    
    if (rax_25 != 0)
        sub_140a74f90(rax_25)
else
    void*** rcx_14 = var_38
    
    if (rcx_14 != 0)
        (*rcx_14)[7](rcx_14, 0)
        rax_25 = var_38
        
        if (rax_25 != 0)
            rax_25 = sub_140a84c80(rax_25, 0, 0)
            var_38 = rax_25
        
        int32_t var_30_5 = 0
        goto label_1414fb5f7
InitializeCriticalSection(&arg1[0x60])
SetCriticalSectionSpinCount(&arg1[0x60], 0xfa0)
__builtin_memset(&arg1[0x6a], 0, 0x20)
arg1[0x73].w = 0
*(arg1 + 0x1d8) = &data_14399e5d8
__builtin_memset(&arg1[0x78], 0, 0x38)
arg1[0x72] = 0x400
arg1[0x74] = 0
InitializeCriticalSection(&arg1[0x86])
SetCriticalSectionSpinCount(&arg1[0x86], 0xfa0)
void* rcx_21 = &arg1[0x94]
*(arg1 + 0x240) = 0
*(arg1 + 0x248) = 0
*(rcx_21 + 0x10) = 0
*(rcx_21 + 0x18) = 0
*(rcx_21 + 0x1c) = 0x80
void* rax_26 = *(rcx_21 + 0x10)

if (rax_26 != 0)
    rcx_21 = rax_26

*rcx_21 = 0
*(rcx_21 + 8) = 0
void* rcx_22 = &arg1[0xa8]
arg1[0x9c] = 0xffffffff
arg1[0x9d] = 0
*(arg1 + 0x280) = 0
arg1[0xa2] = 0
*(arg1 + 0x290) = 0
*(arg1 + 0x298) = 0
*(rcx_22 + 0x10) = 0
*(rcx_22 + 0x18) = 0
*(rcx_22 + 0x1c) = 0x80
void* rax_27 = *(rcx_22 + 0x10)

if (rax_27 != 0)
    rcx_22 = rax_27

*rcx_22 = 0
*(rcx_22 + 8) = 0
arg1[0xb0] = 0xffffffff
arg1[0xb1] = 0
*(arg1 + 0x2d0) = 0
arg1[0xb6] = 0
__builtin_memset(&arg1[0xb8], 0, 0x30)
return arg1
