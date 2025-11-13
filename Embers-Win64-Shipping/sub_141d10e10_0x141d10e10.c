// 函数: sub_141d10e10
// 地址: 0x141d10e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_140b21a10(arg3, u"NoPak") != 0)
    return 0

int64_t* var_18 = nullptr
int32_t i_5 = 0
sub_141d042a0(arg3, &var_18)
int64_t* var_28 = nullptr
int32_t i_4 = 0
int64_t var_38 = 0
int32_t var_30 = 0
sub_1405947f0(&var_38, 6)
int32_t rax_1 = var_30 + 6
var_30 = rax_1

if (rax_1 s> 0)
    sub_140594770(&var_38)

UnDecorator::getReferenceType(var_38, u"*.pak", 0xc)
sub_141d01db0(arg2, &var_18, &var_38, &var_28)
int64_t rcx_6 = var_38

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int32_t i_2 = i_4
int64_t* rbx_1 = var_28
int64_t r14
r14.b = i_2 s> 0

if (i_2 != 0)
    int32_t i
    
    do
        int64_t rcx_7 = *rbx_1
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
        
        rbx_1 = &rbx_1[2]
        i = i_2
        i_2 -= 1
    while (i != 1)
    rbx_1 = var_28

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

int32_t i_3 = i_5
int64_t* rsi = var_18
int64_t* rbx_2 = rsi

if (i_3 != 0)
    int32_t i_1
    
    do
        int64_t rcx_9 = *rbx_2
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        rbx_2 = &rbx_2[2]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

if (rsi != 0)
    sub_140a74f90(rsi)

return zx.q(r14.b)
