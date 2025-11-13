// 函数: sub_140eb6630
// 地址: 0x140eb6630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = *arg2
int32_t arg_8 = 0
int64_t var_28
int64_t var_18
int64_t* rcx_1
int32_t rbx

if (r8 == 0)
    var_28 = 0
    int32_t var_20_1 = 0
    sub_1405947f0(&var_28, 8)
    int32_t rax_1 = var_20_1 + 8
    var_20_1 = rax_1
    
    if (rax_1 s> 0)
        sub_140594770(&var_28)
    
    UnDecorator::getReferenceType(var_28, u"nullptr", 0x10)
    rcx_1 = &var_28
    rbx = 2
else
    sub_140a2e390(&var_18, u"0x%08x", r8)
    rcx_1 = &var_18
    rbx = 1

*arg1 = *rcx_1
*rcx_1 = 0
arg1[1].d = rcx_1[1].d
*(arg1 + 0xc) = *(rcx_1 + 0xc)
rcx_1[1] = 0

if ((rbx.b & 2) != 0)
    int64_t rcx_5 = var_28
    rbx &= 0xfffffffd
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)

if ((rbx.b & 1) != 0)
    int64_t rcx_6 = var_18
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)

int64_t* rbx_1 = arg2[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

return arg1
