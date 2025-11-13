// 函数: sub_1406cda50
// 地址: 0x1406cda50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
int64_t var_68
int64_t* arg_10 = &var_68
var_68 = 0
int32_t rbx = arg2[1].d
int64_t rdi = *arg2
int32_t var_60 = rbx

if (rbx != 0)
    sub_1405a4c70(&var_68, rbx, 0)
    memcpy(var_68, rdi, rbx * 2)
else
    int32_t var_5c_1 = 0

int64_t var_78 = 0
int64_t var_70 = 0
int64_t var_58 = 0
int32_t var_50 = 0
int512_t zmm2 = sub_141d49a40(sub_140a1ae20(), arg1, &var_58, 0, 0, 0, nullptr, 1)
int64_t var_88
arg_10 = &var_88
var_88 = 0
int64_t rdi_1 = var_58
int32_t var_80 = var_50

if (var_50 != 0)
    sub_1405a4c70(&var_88, var_50, 0)
    memcpy(var_88, rdi_1, var_50 * 2)
else
    int32_t var_7c_1 = 0

arg_10 = &var_88
int64_t var_38
int64_t* rax_1 = sub_140686770(&var_38, &var_88, zmm2)
arg_8 = 1
int64_t rcx_6 = var_88

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

if (&var_78 != rax_1)
    int64_t rcx_7 = var_78
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    var_78 = *rax_1
    *rax_1 = 0
    var_70.d = rax_1[1].d
    var_70:4.d = *(rax_1 + 0xc)
    rax_1[1] = 0

int64_t rcx_8 = var_38

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int64_t rcx_9 = var_58

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

int64_t var_48
sub_1406c8f40(&var_48, &var_68, arg1)
int64_t* rax_5 = sub_140b20ee0(&var_38, &var_48, 0)
int16_t* const rbx_3

if (rax_5[1].d == 0)
    rbx_3 = &data_142d40450
else
    rbx_3 = *rax_5

sub_140a464c0()
char result = sub_140b27210(&var_78, rbx_3, 0, &data_14399ea08, 0)
*arg3 = result
int64_t rcx_13 = var_38

if (rcx_13 != 0)
    result = sub_140a74f90(rcx_13)

int64_t rcx_14 = var_48

if (rcx_14 != 0)
    result = sub_140a74f90(rcx_14)

int64_t rcx_15 = var_78

if (rcx_15 != 0)
    result = sub_140a74f90(rcx_15)

int64_t rcx_16 = var_68

if (rcx_16 == 0)
    return result

return sub_140a74f90(rcx_16)
