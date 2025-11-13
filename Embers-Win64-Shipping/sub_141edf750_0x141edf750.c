// 函数: sub_141edf750
// 地址: 0x141edf750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x28)
int32_t arg_18 = 0

if (arg3 == 0)
    *arg2 = *(*(rax + 0x10) + 0x18)
    return arg2

void* rax_1 = *(rax + 0xa0)
int64_t var_78
int16_t* var_58
int64_t arg_20
int64_t* rax_3
int32_t rbx

if (rax_1 == 0)
    var_78 = 0
    int32_t var_70_1 = 0
    sub_1405947f0(&var_78, 5)
    int32_t rax_4 = var_70_1 + 5
    var_70_1 = rax_4
    
    if (rax_4 s> 0)
        sub_140594770(&var_78)
    
    UnDecorator::getReferenceType(var_78, u"None", 0xa)
    rax_3 = &var_78
    rbx = 2
else
    arg_20 = *(*(rax_1 + 0x10) + 0x18)
    sub_140b63b70(&arg_20, &var_58)
    rax_3 = &var_58
    rbx = 1

int16_t* r15 = *rax_3
*rax_3 = 0
rax_3[1].d
rax_3[1] = 0

if ((rbx.b & 2) != 0)
    int64_t rcx_5 = var_78
    rbx &= 0xfffffffd
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)

if ((rbx.b & 1) != 0)
    int16_t* rcx_6 = var_58
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)

arg_20 = *(*(arg1 + 0x28) + 0x18)
sub_140b63b70(&arg_20, &var_58)
int16_t* const r14 = &data_142d40450
int16_t* const rdi = &data_142d40450
int32_t var_50

if (var_50 != 0)
    rdi = var_58

var_78 = *(*(*(arg1 + 0x28) + 0x10) + 0x18)
int16_t* var_68
sub_140b63b70(&var_78, &var_68)
int16_t* const r8 = &data_142d40450
int16_t* const var_88 = rdi
int32_t var_60

if (var_60 != 0)
    r8 = var_68

int16_t* var_48
sub_140a2e390(&var_48, u"%s/%s/%s", r8)
int16_t* rcx_12 = var_68

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

int16_t* rcx_13 = var_58

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

int32_t var_40

if (var_40 != 0)
    r14 = var_48

sub_140b58260(arg2, r14, 1)
int16_t* rcx_15 = var_48

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

if (r15 != 0)
    sub_140a74f90(r15)

return arg2
