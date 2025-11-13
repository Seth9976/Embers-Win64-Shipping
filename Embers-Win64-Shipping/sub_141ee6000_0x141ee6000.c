// 函数: sub_141ee6000
// 地址: 0x141ee6000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8 = arg1[3]
uint64_t var_38
sub_140b63b70(&arg_8, &var_38)
void* rax_1 = arg1[0x14]
int32_t rbx = 0
uint64_t var_58
int64_t var_50
int32_t rcx_4

if (rax_1 != 0)
    int64_t arg_10 = *(rax_1 + 0x18)
    rcx_4 = sub_140b63b70(&arg_10, &var_58)
else
    var_58 = 0
    var_50 = 0
    sub_1405947f0(&var_58, (rax_1 + 5).d)
    int32_t rax_2 = var_50.d + 5
    var_50.d = rax_2
    
    if (rax_2 s> 0)
        sub_140594770(&var_58)
    
    rcx_4 = UnDecorator::getReferenceType(var_58, u"None", 0xa)

int32_t rdx_4 = var_50.d
uint64_t var_48 = var_58
int32_t rax_6 = var_50:4.d
int32_t rdx_5 = rdx_4 + sbb.d(rcx_4, rcx_4, rdx_4 != 0) + 2
var_58 = 0
int64_t var_50_1 = 0

if (rdx_5 s> rax_6)
    sub_1405947f0(&var_48, rdx_5)

sub_140a20ba0(&var_48, &data_142d404c4, 1)
uint64_t rcx_10 = var_48
var_48 = 0
int32_t var_40
var_40.q = 0
int32_t var_30

if (rdx_4 s> 1)
    int32_t rsi_2
    
    if (var_30 == 0)
        rsi_2 = 0
    else
        rsi_2 = var_30 - 1
    
    if (rdx_4 == 0 && rsi_2 != 0)
        rbx = 1
    
    uint64_t var_28 = rcx_10
    int32_t rdx_7 = rdx_4 + rbx + rsi_2
    
    if (rdx_7 s> rax_6)
        sub_1405947f0(&var_28, rdx_7)
    
    sub_140a20ba0(&var_28, var_38, rsi_2)
    *arg2 = var_28
    arg2[1].d = rdx_4
    *(arg2 + 0xc) = rax_6
else
    *arg2 = var_38
    arg2[1].d = var_30
    int32_t var_2c
    *(arg2 + 0xc) = var_2c
    var_30.q = 0
    var_38 = 0
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)
uint64_t rcx_13 = var_58

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

uint64_t rcx_14 = var_38

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

void* rax_15 = (*(*arg1 + 0x390))(arg1)

if (rax_15 != 0)
    sub_140a20ba0(arg2, &data_142d404d4, 1)
    arg_8 = *(rax_15 + 0x18)
    sub_140b5c770(&arg_8, arg2)

return arg2
