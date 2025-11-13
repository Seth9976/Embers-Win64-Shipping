// 函数: sub_1418a6a70
// 地址: 0x1418a6a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_20 = arg4
int16_t* rax = sub_141851680(&arg_20)
int32_t rcx_1 = 0
int64_t var_18 = 0
int32_t rdx = 0
int64_t var_10 = 0

if (rax != 0 && *rax != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (rax[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_18, rbx_1.d + 1)
        rdx = var_10:4.d
        rcx_1 = var_10.d
    
    int32_t rax_1 = rcx_1 + rbx_1.d + 1
    var_10.d = rax_1
    
    if (rax_1 s> rdx)
        sub_140594770(&var_18)
    
    UnDecorator::getReferenceType(var_18, rax, (rbx_1.d + 1) * 2)

int64_t* rcx_5 = *(arg1 + 8)
int64_t result = (*(*rcx_5 + 8))(rcx_5, arg3, 0xffffffff, &var_18)
int64_t rcx_6 = var_18

if (rcx_6 != 0)
    result = sub_140a74f90(rcx_6)

*(arg1 + 0x30) += 1
return result
