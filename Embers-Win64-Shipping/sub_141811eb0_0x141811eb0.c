// 函数: sub_141811eb0
// 地址: 0x141811eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[6].b != 0)
    (*(*arg1 + 8))()

int64_t pguid = 0
int64_t var_20 = 0
CoCreateGuid(&pguid)
int64_t var_38
int64_t* rax_2 = sub_140b291e0(&pguid, &var_38, 2)

if (&arg1[0x17] != rax_2)
    int64_t rcx_2 = arg1[0x17]
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    arg1[0x17] = *rax_2
    *rax_2 = 0
    arg1[0x18].d = rax_2[1].d
    *(arg1 + 0xc4) = *(rax_2 + 0xc)
    rax_2[1] = 0

int64_t rcx_4 = var_38

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

void* rax_5 = *arg2
*arg2 = 0
void* var_48 = rax_5
int32_t rax_6 = arg2[1].d
int32_t rax_7 = *(arg2 + 0xc)
arg2[1] = 0
var_38 = 0
int64_t var_30 = 0
sub_1405947f0(&var_38, 8)
int32_t r14_1 = var_30:4.d
int32_t rsi_1 = var_30.d + 8
var_30.d = rsi_1

if (rsi_1 s> r14_1)
    sub_140594770(&var_38)
    r14_1 = var_30:4.d
    rsi_1 = var_30.d

int64_t r15 = var_38
sub_1405a7220(r15, 8, "Windows", 8, 0x3f)
int64_t rbx_1 = sx.q(rax_6)
int32_t i_2 = (rbx_1 + 1).d

if (i_2 s> rax_7)
    sub_1405c4f50(&var_48)

int64_t* rbx_4 = rbx_1 * 0x30 + var_48
*rbx_4 = 0
rbx_4[1] = 0
sub_1405947f0(rbx_4, 9)
int32_t rax_8 = rbx_4[1].d + 9
rbx_4[1].d = rax_8

if (rax_8 s> *(rbx_4 + 0xc))
    sub_140594770(rbx_4)

UnDecorator::getReferenceType(*rbx_4, u"Platform", 0x12)
rbx_4[2] = r15
rbx_4[3].d = rsi_1
*(rbx_4 + 0x1c) = r14_1
rbx_4[4] = 0
rbx_4[5].b = 0
*(rbx_4 + 0x2c) = 0
var_38 = 0
int32_t var_30_1 = 0
sub_1405947f0(&var_38, 0xd)
int32_t rax_9 = var_30_1 + 0xd
var_30_1 = rax_9

if (rax_9 s> 0)
    sub_140594770(&var_38)

UnDecorator::getReferenceType(var_38, u"SessionStart", 0x1a)
(*(*arg1 + 0xc8))(arg1, &var_38, &var_48)
void* rbx_5 = var_48
arg1[6].b = 1
int32_t i_1 = i_2

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_16 = *(rbx_5 + 0x10)
        
        if (rcx_16 != 0)
            sub_140a74f90(rcx_16)
        
        int64_t rcx_17 = *rbx_5
        
        if (rcx_17 != 0)
            sub_140a74f90(rcx_17)
        
        rbx_5 += 0x30
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx_5 = var_48

if (rbx_5 != 0)
    sub_140a74f90(rbx_5)

int64_t result
result.b = 1
return result
