// 函数: sub_1406d1400
// 地址: 0x1406d1400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
uint64_t var_88
arg_8.q = &var_88
var_88 = 0
int32_t rbx = arg2[1].d
int64_t r14 = *arg2

if (rbx != 0)
    sub_1405a4c70(&var_88, rbx, 0)
    memcpy(var_88, r14, rbx * 2)
else
    int32_t var_7c_1 = 0

int16_t* var_98
arg_8.q = &var_98
var_98 = nullptr
int32_t rbx_1 = arg1[1].d
int64_t rdi_1 = *arg1
int32_t var_8c

if (rbx_1 != 0)
    sub_1405a4c70(&var_98, rbx_1, 0)
    memcpy(var_98, rdi_1, rbx_1 * 2)
else
    var_8c = 0

int64_t var_a8 = 0
int64_t var_a0 = 0
sub_1405947f0(&var_a8, 7)
int32_t rax = var_a0.d + 7
var_a0.d = rax

if (rax s> 0)
    sub_140594770(&var_a8)

UnDecorator::getReferenceType(var_a8, u".style", 0xe)
int16_t* const rbx_2 = &data_142d40450
int16_t* const rax_1 = &data_142d40450

if (rbx != 0)
    rax_1 = var_88

arg_8.q = rax_1
uint64_t var_58
sub_1406b35b0(&var_58, &data_143cdf120, &arg_8)
uint64_t var_48
sub_1406b37a0(&var_48, arg3, &var_a8)
int16_t* var_68
sub_1406c8f40(&var_68, &var_58, &var_48)
uint64_t rcx_10 = var_48

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

int64_t var_38
sub_1406b37a0(&var_38, &var_98, &var_a8)
uint64_t var_78
sub_1406c8f40(&var_78, &var_58, &var_38)
int64_t rcx_13 = var_38

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

int32_t var_70
int32_t var_60

if (rbx_1 s<= 1)
    uint64_t r14_1 = var_88
    
    if (rbx != 0 || var_8c != 0)
        sub_1405a4c70(&var_98, rbx, var_8c)
        memcpy(var_98, r14_1, rbx * 2)
    else
        int32_t var_8c_1 = 0
    
    if (var_a8 != &data_142d40450)
        var_a0.d = 0
        
        if (0 s> 0)
            sub_140594770(&var_a8)
    
    int16_t* const rax_3 = &data_142d40450
    
    if (data_143cdf128 != 0)
        rax_3 = data_143cdf120
    
    int16_t* const arg_10 = rax_3
    uint64_t var_b8 = 0
    int64_t var_b0_1 = 0
    arg_8 = 0x92
    sub_140b0f5f0(&var_b8, &arg_10, 1)
    uint64_t rcx_19 = var_58
    
    if (rcx_19 != 0)
        sub_140a74f90(rcx_19)
    
    uint64_t rdx_13 = var_b8
    var_58 = rdx_13
    int32_t rcx_20 = var_b0_1.d
    int32_t var_4c_1 = var_b0_1:4.d
    uint64_t rax_5 = &data_142d40450
    
    if (rcx_20 != 0)
        rax_5 = rdx_13
    
    var_48 = rax_5
    
    if (arg3[1].d == 0)
        int16_t* const var_40_2 = &data_142d40450
    else
        int64_t var_40_1 = *arg3
    
    var_b8 = 0
    int64_t var_b0_2 = 0
    arg_8 = 0x112
    sub_140b0f5f0(&var_b8, &var_48, 2)
    int16_t* rcx_22 = var_68
    
    if (rcx_22 != 0)
        sub_140a74f90(rcx_22)
    
    var_68 = var_b8
    var_60 = var_b0_2.d
    int32_t var_5c_1 = var_b0_2:4.d
    uint64_t rax_10 = &data_142d40450
    
    if (rcx_20 != 0)
        rax_10 = var_58
    
    var_48 = rax_10
    int16_t* const rax_11 = &data_142d40450
    
    if (rbx != 0)
        rax_11 = var_98
    
    int16_t* const var_40_3 = rax_11
    var_b8 = 0
    int64_t var_b0_3 = 0
    arg_8 = 0x212
    sub_140b0f5f0(&var_b8, &var_48, 2)
    uint64_t rcx_24 = var_78
    
    if (rcx_24 != 0)
        sub_140a74f90(rcx_24)
    
    var_78 = var_b8
    var_70 = var_b0_3.d
    int32_t var_6c_1 = var_b0_3:4.d

sub_140a464c0()
uint64_t r8_12 = &data_142d40450

if (var_70 != 0)
    r8_12 = var_78

if (var_60 != 0)
    rbx_2 = var_68

char result = (*(data_14399ea08 + 0x40))(&data_14399ea08, rbx_2, r8_12, 0, 1, 0, 1)
*arg4 = result
uint64_t rcx_25 = var_78

if (rcx_25 != 0)
    result = sub_140a74f90(rcx_25)

int16_t* rcx_26 = var_68

if (rcx_26 != 0)
    result = sub_140a74f90(rcx_26)

uint64_t rcx_27 = var_58

if (rcx_27 != 0)
    result = sub_140a74f90(rcx_27)

int64_t rcx_28 = var_a8

if (rcx_28 != 0)
    result = sub_140a74f90(rcx_28)

int16_t* rcx_29 = var_98

if (rcx_29 != 0)
    result = sub_140a74f90(rcx_29)

uint64_t rcx_30 = var_88

if (rcx_30 == 0)
    return result

return sub_140a74f90(rcx_30)
