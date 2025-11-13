// 函数: sub_141e5f660
// 地址: 0x141e5f660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
int64_t var_28
int64_t var_18
int64_t* rcx_7
int32_t rbx_3

if (arg2 == 0)
    var_28 = 0
    int32_t var_20_1 = 0
    sub_1405947f0(&var_28, 8)
    int32_t rax_2 = var_20_1 + 8
    var_20_1 = rax_2
    
    if (rax_2 s> 0)
        sub_140594770(&var_28)
    
    sub_1405a7220(var_28, 8, "Windows", 8, 0x3f)
    rcx_7 = &var_28
    rbx_3 = 2
else
    int32_t rdx = 0
    int32_t rcx = 0
    int32_t var_10_1 = 0
    int32_t var_c_1 = 0
    var_18 = 0
    
    if (*arg2 != 0)
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (arg2[rbx_1] != 0)
        
        if (rbx_1.d + 1 s> 0)
            sub_1405947f0(&var_18, rbx_1.d + 1)
            rcx = var_c_1
            rdx = var_10_1
        
        int32_t rax_1 = rbx_1.d + 1 + rdx
        int32_t var_10_2 = rax_1
        
        if (rax_1 s> rcx)
            sub_140594770(&var_18)
        
        UnDecorator::getReferenceType(var_18, arg2, (rbx_1.d + 1) * 2)
    
    rcx_7 = &var_18
    rbx_3 = 1

*arg1 = *rcx_7
*rcx_7 = 0
arg1[1].d = rcx_7[1].d
*(arg1 + 0xc) = *(rcx_7 + 0xc)
rcx_7[1] = 0

if ((rbx_3.b & 2) != 0)
    int64_t rcx_8 = var_28
    rbx_3 &= 0xfffffffd
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)

if ((rbx_3.b & 1) != 0)
    int64_t rcx_9 = var_18
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)

return arg1
