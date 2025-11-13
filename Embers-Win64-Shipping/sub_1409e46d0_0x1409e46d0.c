// 函数: sub_1409e46d0
// 地址: 0x1409e46d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r8 = zx.q(*arg1)
int32_t arg_8 = 0
int64_t var_28
int64_t var_18
int64_t* rcx_3
int32_t rdi

if (r8.d != data_143a1c6b0)
    sub_140a2e390(&var_18, u"%d", r8)
    rcx_3 = &var_18
    rdi = 2
else
    var_28 = 0
    int32_t var_20_1 = 0
    sub_1405947f0(&var_28, 8)
    int32_t rax_1 = var_20_1 + 8
    var_20_1 = rax_1
    
    if (rax_1 s> 0)
        sub_140594770(&var_28)
    
    UnDecorator::getReferenceType(var_28, u"Invalid", 0x10)
    rcx_3 = &var_28
    rdi = 1

*arg2 = *rcx_3
*rcx_3 = 0
arg2[1].d = rcx_3[1].d
*(arg2 + 0xc) = *(rcx_3 + 0xc)
rcx_3[1] = 0

if ((rdi.b & 2) != 0)
    int64_t rcx_5 = var_18
    rdi &= 0xfffffffd
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)

if ((rdi.b & 1) != 0)
    int64_t rcx_6 = var_28
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)

return arg2
