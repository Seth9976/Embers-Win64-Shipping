// 函数: sub_142157160
// 地址: 0x142157160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
int64_t* rcx = *(arg1 + 8)
char rax_2

if (rcx != 0)
    rax_2 = (*(*rcx + 0x28))(rcx)

int64_t var_58
int64_t var_48
int64_t var_38
int64_t var_28
int64_t* rcx_5
int32_t rbx_2

if (rcx == 0 || rax_2 == 0)
    rbx_2 = 8
    var_58 = 0
    int32_t var_50_1 = 0
    sub_1405947f0(&var_58, 8)
    int32_t rax_8 = var_50_1 + 8
    var_50_1 = rax_8
    
    if (rax_8 s> 0)
        sub_140594770(&var_58)
    
    UnDecorator::getReferenceType(var_58, u"INVALID", 0x10)
    rcx_5 = &var_58
else
    int64_t* r14_1 = *(arg1 + 8)
    int64_t* rax_4 = (*(*r14_1 + 0x38))(r14_1, &var_28)
    int16_t* const rbx_1 = &data_142d40450
    
    if (rax_4[1].d != 0)
        *rax_4
    
    int64_t* rax_7 = sub_140b63b70((*(*r14_1 + 0x10))(r14_1, &arg_8), &var_38)
    
    if (rax_7[1].d != 0)
        rbx_1 = *rax_7
    
    sub_140a2e390(&var_48, u"%s:%s", rbx_1)
    rcx_5 = &var_48
    rbx_2 = 7

*arg2 = *rcx_5
*rcx_5 = 0
arg2[1].d = rcx_5[1].d
int32_t rax_11 = *(rcx_5 + 0xc)
rcx_5[1] = 0
*(arg2 + 0xc) = rax_11

if ((rbx_2.b & 8) != 0)
    int64_t rcx_9 = var_58
    rbx_2 &= 0xfffffff7
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)

if ((rbx_2.b & 4) != 0)
    int64_t rcx_10 = var_48
    rbx_2 &= 0xfffffffb
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)

if ((rbx_2.b & 2) != 0)
    int64_t rcx_11 = var_38
    rbx_2 &= 0xfffffffd
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)

if ((rbx_2.b & 1) != 0)
    int64_t rcx_12 = var_28
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)

return arg2
