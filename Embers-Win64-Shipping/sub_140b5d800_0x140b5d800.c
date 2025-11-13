// 函数: sub_140b5d800
// 地址: 0x140b5d800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140a405d0(arg1, arg2)
int16_t* const rbx = &data_142d40450
uint64_t var_48
int16_t* var_38
int32_t var_30

if (arg3 != 0)
    var_30 = 0x42e5b038
    var_38 = arg2
    var_48 = 0
    int32_t var_40_1 = 0
    sub_140b0f5f0(&var_48, &var_38, 2)
    int16_t* const r9_1 = &data_142d40450
    
    if (var_40_1 != 0)
        r9_1 = var_48
    
    sub_140b640f0(*(arg1 + 8), *(arg1 + 0x14), arg1, r9_1, arg3)
    uint64_t rcx_2 = var_48
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)

int16_t* var_28
int64_t* rax = sub_140b252d0(&var_28)
int32_t rdx_2 = rax[1].d
int32_t rdx_3 = neg.d(rdx_2)
int16_t* var_68 = *rax
*rax = 0
int32_t rcx_5 = rax[1].d
int32_t rcx_6 = *(rax + 0xc)
rax[1] = 0
int32_t rdx_6 = sbb.d(rdx_3, rdx_3, rdx_2 != 0) + 0x10 + rcx_5

if (rdx_6 s> rcx_6)
    sub_1405947f0(&var_68, rdx_6)

sub_140a2cf70(&var_68, u"CrashVideo.avi", 0xe)
int16_t* rcx_9 = var_28

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

sub_140a464c0()
int16_t* const rdx_7 = &data_142d40450

if (rcx_5 != 0)
    rdx_7 = var_68

char const (* r8_1)[0x4] = data_14399ea08

if ((*(r8_1 + 0x48))(&data_14399ea08, rdx_7, r8_1) != 0)
    sub_140b18970(&var_38, &var_68)
    int16_t* const rax_2 = &data_142d40450
    var_28 = arg2
    
    if (var_30 != 0)
        rax_2 = var_38
    
    int16_t* const var_20_1 = rax_2
    var_48 = 0
    int32_t var_40_2 = 0
    sub_140b0f5f0(&var_48, &var_28, 2)
    sub_140a464c0()
    int16_t* const r8_2 = &data_142d40450
    int16_t* const rdx_10 = &data_142d40450
    
    if (rcx_5 != 0)
        r8_2 = var_68
    
    int64_t r9_2
    r9_2.b = 1
    
    if (var_40_2 != 0)
        rdx_10 = var_48
    
    (*(data_14399ea08 + 0x38))(&data_14399ea08, rdx_10, r8_2, r9_2, 0, 0, 0, 0, 0)
    uint64_t rcx_12 = var_48
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)
    
    int16_t* rcx_13 = var_38
    
    if (rcx_13 != 0)
        sub_140a74f90(rcx_13)

int64_t* rax_3 = sub_140b252d0(&var_28)

if (rax_3[1].d == 0)
    var_38 = &data_142d40450
else
    var_38 = *rax_3

int32_t var_30_1 = 0x42e7a390
uint64_t var_58 = 0
int32_t var_50 = 0
sub_140b0f5f0(&var_58, &var_38, 2)
int16_t* rcx_16 = var_28

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)

sub_140a464c0()
uint64_t rdx_12 = &data_142d40450

if (var_50 != 0)
    rdx_12 = var_58

char const (* r8_3)[0x4] = data_14399ea08
char result = (*(r8_3 + 0x48))(&data_14399ea08, rdx_12, r8_3)

if (result != 0)
    sub_140b18970(&var_38, &var_58)
    int16_t* rax_5 = &data_142d40450
    var_28 = arg2
    
    if (var_30_1 != 0)
        rax_5 = var_38
    
    int16_t* var_20_2 = rax_5
    var_48 = 0
    int32_t var_40_3 = 0
    sub_140b0f5f0(&var_48, &var_28, 2)
    sub_140a464c0()
    uint64_t r8_4 = &data_142d40450
    int64_t r9_3
    r9_3.b = 1
    
    if (var_50 != 0)
        r8_4 = var_58
    
    if (var_40_3 != 0)
        rbx = var_48
    
    result = (*(data_14399ea08 + 0x38))(&data_14399ea08, rbx, r8_4, r9_3, 0, 0, 0, 0, 0)
    uint64_t rcx_19 = var_48
    
    if (rcx_19 != 0)
        result = sub_140a74f90(rcx_19)
    
    int16_t* rcx_20 = var_38
    
    if (rcx_20 != 0)
        result = sub_140a74f90(rcx_20)

uint64_t rcx_21 = var_58

if (rcx_21 != 0)
    result = sub_140a74f90(rcx_21)

int16_t* rcx_22 = var_68

if (rcx_22 == 0)
    return result

return sub_140a74f90(rcx_22)
