// 函数: sub_140977470
// 地址: 0x140977470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
int64_t* result = sub_140d3c6e0(&arg_18)

if (result != 0 && *(result + 0x134) u> 1 && result[0xb] != 0)
    char rcx_1 = *arg2
    
    if (rcx_1 == 1)
        sub_142142020(result, &arg2[0x28])
        return sub_1409775a0(arg1, result)
    
    int16_t* rax_1 = sub_140968270(rcx_1)
    int32_t rcx_4 = 0
    uint64_t var_18 = 0
    int32_t rdx_2 = 0
    int64_t var_10_1 = 0
    
    if (rax_1 != 0 && *rax_1 != 0)
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (rax_1[rbx_1] != 0)
        
        if (rbx_1.d + 1 s> 0)
            sub_1405947f0(&var_18, rbx_1.d + 1)
            rdx_2 = var_10_1:4.d
            rcx_4 = var_10_1.d
        
        int32_t rax_2 = rcx_4 + rbx_1.d + 1
        var_10_1.d = rax_2
        
        if (rax_2 s> rdx_2)
            sub_140594770(&var_18)
        
        UnDecorator::getReferenceType(var_18, rax_1, (rbx_1.d + 1) * 2)
    
    sub_140947d60(result, &var_18, arg4)
    result = (*(*result + 0x2a8))(result, 0)
    uint64_t rcx_10 = var_18
    
    if (rcx_10 != 0)
        return sub_140a74f90(rcx_10)

return result
