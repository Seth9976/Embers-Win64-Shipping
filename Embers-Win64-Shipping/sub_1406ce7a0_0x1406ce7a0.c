// 函数: sub_1406ce7a0
// 地址: 0x1406ce7a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10 = arg2
int128_t* arg_8 = arg1
int32_t var_78 = 0
sub_1406caa40(arg1)
int32_t var_78_1 = 1
uint64_t var_58 = 0
int32_t var_50 = 0
int16_t* const rdx

if (arg2[1].d == 0)
    rdx = &data_142d40450
else
    rdx = *arg2

if (sub_140b1f370(&var_58, rdx, 0, 0) == 0)
    int32_t exceptionObject = 0
    _CxxThrowException(&exceptionObject, &data_143946050)
    noreturn

int64_t var_68
int64_t* arg_18 = &var_68
var_68 = 0
uint64_t r14 = var_58
int32_t var_60 = var_50

if (var_50 != 0)
    sub_1405a4c70(&var_68, var_50, 0)
    memcpy(var_68, r14, var_50 * 2)
else
    int32_t var_5c_1 = 0

arg_18 = &var_68
int64_t var_48
int64_t* rax_1 = sub_140686ab0(&var_48, &var_68, arg3)
int32_t var_78_2 = 3
int64_t rcx_4 = var_68

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t* rdi_1
rdi_1.b = sub_1406c9770(rax_1, arg1, 0, 0) == 0
int32_t var_78_3 = 1
int64_t rcx_6 = var_48

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

if (rdi_1.b != 0)
    int32_t exceptionObject_1 = 1
    _CxxThrowException(&exceptionObject_1, &data_143946050)
    noreturn

int64_t* rax_3 = sub_140b18720(&var_48, arg2, 1)

if (arg1 != rax_3)
    int64_t rcx_8 = *arg1
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)
    
    *arg1 = *rax_3
    *rax_3 = 0
    *(arg1 + 8) = rax_3[1].d
    *(arg1 + 0xc) = *(rax_3 + 0xc)
    rax_3[1] = 0

int64_t rcx_9 = var_48

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

uint64_t rcx_10 = var_58

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

int64_t rcx_11 = *arg2

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

return arg1
