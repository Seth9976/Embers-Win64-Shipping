// 函数: sub_141dcb120
// 地址: 0x141dcb120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
int64_t var_28
int64_t var_18
int64_t* rcx_1
int32_t rdi

if (*(arg1 + 0x38) u<= 0)
    var_28 = 0
    int32_t var_20_1 = 0
    sub_1405947f0(&var_28, 5)
    int32_t rax_1 = var_20_1 + 5
    var_20_1 = rax_1
    
    if (rax_1 s> 0)
        sub_140594770(&var_28)
    
    UnDecorator::getReferenceType(var_28, u"None", 0xa)
    rcx_1 = &var_28
    rdi = 2
else
    rcx_1 = sub_140b63b70(arg1 + 0x44, &var_18)
    rdi = 1

*arg2 = 0
*arg2 = *rcx_1
*rcx_1 = 0
arg2[1].d = rcx_1[1].d
*(arg2 + 0xc) = *(rcx_1 + 0xc)
rcx_1[1] = 0

if ((rdi.b & 2) != 0)
    int64_t rcx_5 = var_28
    rdi &= 0xfffffffd
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)

if ((rdi.b & 1) != 0)
    int64_t rcx_6 = var_18
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)

return arg2
