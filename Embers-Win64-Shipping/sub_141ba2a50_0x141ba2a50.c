// 函数: sub_141ba2a50
// 地址: 0x141ba2a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
int64_t var_38
int64_t var_28
int64_t var_18
int64_t* rcx_2
int32_t rbx_1

if (arg2 == 0)
    var_38 = 0
    int32_t var_30_1 = 0
    sub_1405947f0(&var_38, 8)
    int32_t rax_1 = var_30_1 + 8
    var_30_1 = rax_1
    
    if (rax_1 s> 0)
        sub_140594770(&var_38)
    
    UnDecorator::getReferenceType(var_38, u"nullptr", 0x10)
    rcx_2 = &var_38
    rbx_1 = 4
else
    arg_8.q = *(arg2 + 0x18)
    sub_140b63b70(&arg_8, &var_28)
    sub_140a2e390(&var_18, u"0x%08x [%s]", arg2)
    rcx_2 = &var_18
    rbx_1 = 3

*arg1 = *rcx_2
*rcx_2 = 0
arg1[1].d = rcx_2[1].d
*(arg1 + 0xc) = *(rcx_2 + 0xc)
rcx_2[1] = 0

if ((rbx_1.b & 4) != 0)
    int64_t rcx_6 = var_38
    rbx_1 &= 0xfffffffb
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)

if ((rbx_1.b & 2) != 0)
    int64_t rcx_7 = var_18
    rbx_1 &= 0xfffffffd
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)

if ((rbx_1.b & 1) != 0)
    int64_t rcx_8 = var_28
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)

return arg1
