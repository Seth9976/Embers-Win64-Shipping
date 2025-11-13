// 函数: sub_1425d9410
// 地址: 0x1425d9410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_38
int64_t* rax = sub_140b13b30(&var_38)
int16_t* rsi = nullptr
int32_t r8 = rax[1].d
int64_t var_68 = *rax
*rax = 0
int32_t rdx_1 = rax[1].d
int32_t rcx_1 = *(rax + 0xc)
rax[1] = 0
int32_t rdx_4 = sbb.d(rdx_1, rdx_1, r8 != 0) + 0x1d + rdx_1

if (rdx_4 s> rcx_1)
    sub_1405947f0(&var_68, rdx_4)

sub_140a2cf70(&var_68, u"Binaries/ThirdParty/PhysX3/", 0x1b)
int16_t* rcx_4 = var_38

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t var_78 = 0
int32_t var_70 = 0
sub_1405947f0(&var_78, 8)
int32_t r14 = var_70 + 8

if (r14 s> 0)
    sub_140594770(&var_78)

int64_t r15 = var_78
int32_t rcx_8 = UnDecorator::getReferenceType(r15, u"VS2015/", 0x10)
int64_t rbx = var_68
int16_t* var_88 = nullptr
sub_1405a4c70(&var_88, sbb.d(rcx_8, rcx_8, rdx_1 != 0) + 7 + rdx_1, 0)
memcpy(var_88, rbx, rdx_1 * 2)
sub_140a20ba0(&var_88, u"Win64/", 6)
int32_t r13 = 1
int16_t* rbx_1 = var_88
var_88 = nullptr
int32_t var_80
var_80.q = 0
int32_t var_7c
int16_t* var_58
int16_t* var_48
int16_t* rdi_1

if (rdx_1 s> 1)
    int32_t r14_1
    
    if (r14 == 0)
        r14_1 = 0
    else
        r14_1 = r14 - 1
    
    int32_t rcx_16
    
    if (rdx_1 == 0)
        rcx_16 = 1
    
    if (rdx_1 != 0 || r14_1 == 0)
        rcx_16 = 0
    
    var_58 = rbx_1
    int32_t rdx_12 = rdx_1 + rcx_16 + r14_1
    int32_t var_4c_1 = var_7c
    
    if (rdx_12 s> var_7c)
        sub_1405947f0(&var_58, rdx_12)
    
    sub_140a20ba0(&var_58, r15, r14_1)
    rdi_1 = var_58
    r14 = rdx_1
else
    var_48 = nullptr
    rdi_1 = nullptr
    
    if (r14 != 0)
        sub_1405a4c70(&var_48, r14, 0)
        rdi_1 = var_48
        memcpy(rdi_1, r15, r14 * 2)
    
    if (rbx_1 != 0)
        sub_140a74f90(rbx_1)

var_78 = 0
int32_t var_70_1 = 0
sub_1405947f0(&var_78, 5)
int32_t rbx_2 = var_70_1 + 5

if (rbx_2 s> 0)
    sub_140594770(&var_78)

int32_t rcx_22 = UnDecorator::getReferenceType(var_78, u"_x64", 0xa)
var_58 = nullptr
sub_1405a4c70(&var_58, sbb.d(rcx_22, rcx_22, rbx_2 != 0) + 5 + rbx_2, 0)
memcpy(var_58, var_78, rbx_2 * 2)
int32_t rcx_27 = sub_140a20ba0(&var_58, u".dll", 4)
var_88 = nullptr
sub_1405a4c70(&var_88, sbb.d(rcx_27, rcx_27, r14 != 0) + 8 + r14, 0)
memcpy(var_88, rdi_1, r14 * 2)
sub_140a20ba0(&var_88, u"NvCloth", 7)
int16_t* r12 = var_88
var_88 = nullptr
int32_t var_80_1
var_80_1.q = 0
int32_t rbx_3
int16_t* r14_2

if (r14 s> 1)
    int32_t rbx_5
    
    if (rbx_2 == 0)
        rbx_5 = 0
    else
        rbx_5 = rbx_2 - 1
    
    if (r14 != 0 || rbx_5 == 0)
        r13 = 0
    
    var_48 = r12
    int32_t rdx_24 = r14 + rbx_5 + r13
    int32_t var_3c_1 = var_7c
    
    if (rdx_24 s> var_7c)
        sub_1405947f0(&var_48, rdx_24)
    
    r14_2 = var_58
    sub_140a20ba0(&var_48, r14_2, rbx_5)
    rbx_3 = r14
    rsi = var_48
else
    rbx_3 = rbx_2
    r14_2 = var_58
    var_38 = nullptr
    
    if (rbx_3 != 0)
        sub_1405a4c70(&var_38, rbx_3, 0)
        rsi = var_38
        memcpy(rsi, r14_2, rbx_3 * 2)
    
    if (r12 != 0)
        sub_140a74f90(r12)

int16_t* const rcx_38 = &data_142d40450

if (rbx_3 != 0)
    rcx_38 = rsi

HMODULE result = sub_140b67ab0(rcx_38)
*(arg1 + 0x20) = result

if (rsi != 0)
    result = sub_140a74f90(rsi)

if (r14_2 != 0)
    result = sub_140a74f90(r14_2)

int64_t rcx_42 = var_78

if (rcx_42 != 0)
    result = sub_140a74f90(rcx_42)

if (rdi_1 != 0)
    result = sub_140a74f90(rdi_1)

if (r15 != 0)
    result = sub_140a74f90(r15)

int64_t rcx_45 = var_68

if (rcx_45 == 0)
    return result

return sub_140a74f90(rcx_45)
