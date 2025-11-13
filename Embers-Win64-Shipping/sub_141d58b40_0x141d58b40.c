// 函数: sub_141d58b40
// 地址: 0x141d58b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141d5b790(arg1)
int32_t r14 = *(arg1 + 0xa8)
int32_t rsi = 0
int64_t rbx_1 = *(arg1 + 0xa0)
int64_t r15 = 0
int64_t var_48 = 0
int32_t var_3c
int32_t arg_8
int64_t arg_10

if (r14 != 0)
    sub_1405a4c70(&var_48, r14, 0)
    r15 = var_48
    memcpy(r15, rbx_1, r14 * 2)
    arg_8 = var_3c
    arg_10 = r15
else
    arg_8 = 0
    arg_10 = 0

var_48 = 0
int32_t var_40
var_40.q = 0
sub_1405947f0(&var_48, 8)
int32_t r13 = var_3c
int32_t rbx_2 = var_40 + 8

if (rbx_2 s> r13)
    sub_140594770(&var_48)
    r13 = var_3c

int64_t r12 = var_48
UnDecorator::getReferenceType(r12, u"file://", 0x10)

if (rbx_2 s> 1)
    int32_t r14_1
    
    if (r14 == 0)
        r14_1 = 0
    else
        r14_1 = r14 - 1
    
    if (rbx_2 == 0 && r14_1 != 0)
        rsi = 1
    
    var_48 = r12
    int32_t rdx_4 = rsi + rbx_2 + r14_1
    
    if (rdx_4 s> r13)
        sub_1405947f0(&var_48, rdx_4)
    
    sub_140a20ba0(&var_48, r15, r14_1)
    *arg2 = var_48
    arg2[1].d = rbx_2
    *(arg2 + 0xc) = r13
    
    if (r15 != 0)
        sub_140a74f90(r15)
else
    *arg2 = arg_10
    *(arg2 + 0xc) = arg_8
    arg2[1].d = r14
    
    if (r12 != 0)
        sub_140a74f90(r12)

return arg2
