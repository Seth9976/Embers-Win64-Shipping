// 函数: sub_142004010
// 地址: 0x142004010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8 = *(sub_140d21d80(arg1 - 0x28) + 0x18)
uint64_t var_68
sub_140b63b70(&arg_8, &var_68)
uint64_t var_48
uint64_t* rax_1 = sub_140baa220(&var_48, &var_68)

if (&var_68 != rax_1)
    uint64_t rcx_3 = var_68
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    var_68 = *rax_1
    *rax_1 = 0
    int32_t var_60_1 = rax_1[1].d
    int32_t var_5c_1 = *(rax_1 + 0xc)
    rax_1[1] = 0

uint64_t rcx_5 = var_48

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t var_78 = 0
int64_t var_70 = 0
sub_1405947f0(&var_78, 8)
int32_t rax_4 = var_70.d + 8
var_70.d = rax_4

if (rax_4 s> 0)
    sub_140594770(&var_78)

UnDecorator::getReferenceType(var_78, u".uasset", 0x10)
int64_t var_38
sub_140baee70(&var_38, &var_68, &var_78)
int64_t rcx_10 = var_78

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

arg_8 = *(arg1 - 0x10)
sub_140b63b70(&arg_8, &var_48)
int64_t var_28
int64_t* rax_6 = sub_140b1a780(&var_28, &var_38)
int32_t var_40
int32_t rbx_2

if (var_40 == 0)
    rbx_2 = 0
else
    rbx_2 = var_40 - 1

int32_t rdx_6

if (rax_6[1].d == 0)
    rdx_6 = 2

if (rax_6[1].d != 0 || rbx_2 == 0xffffffff)
    rdx_6 = 1

var_78 = *rax_6
*rax_6 = 0
var_70.d = rax_6[1].d
var_70:4.d = *(rax_6 + 0xc)
rax_6[1] = 0
int32_t rdx_8 = rdx_6 + var_70.d + rbx_2

if (rdx_8 s> var_70:4.d)
    sub_1405947f0(&var_78, rdx_8)

int32_t rcx_16 = sub_140a2cf70(&var_78, var_48, rbx_2)
int32_t rdx_10 = var_70.d
int64_t var_58 = var_78
int32_t rax_13 = var_70:4.d
int32_t rdx_11 = rdx_10 + sbb.d(rcx_16, rcx_16, rdx_10 != 0) + 7
var_78 = 0
int64_t var_70_1 = 0

if (rdx_11 s> rax_13)
    sub_1405947f0(&var_58, rdx_11)

sub_140a20ba0(&var_58, u".ufont", 6)
int64_t rcx_21 = var_78
*arg2 = var_58
arg2[1].d = rdx_10
*(arg2 + 0xc) = rax_13

if (rcx_21 != 0)
    sub_140a74f90(rcx_21)

int64_t rcx_22 = var_28

if (rcx_22 != 0)
    sub_140a74f90(rcx_22)

uint64_t rcx_23 = var_48

if (rcx_23 != 0)
    sub_140a74f90(rcx_23)

int64_t rcx_24 = var_38

if (rcx_24 != 0)
    sub_140a74f90(rcx_24)

uint64_t rcx_25 = var_68

if (rcx_25 != 0)
    sub_140a74f90(rcx_25)

return arg2
