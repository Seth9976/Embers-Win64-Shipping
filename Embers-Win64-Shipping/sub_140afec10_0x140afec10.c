// 函数: sub_140afec10
// 地址: 0x140afec10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* r14 = arg3
arg3.b = 1
int64_t* result = sub_140aefb30(arg1, arg4, arg3.b)
int64_t* result_1 = result

if (result != 0)
    int64_t var_30 = 0
    int32_t rdx_1 = 0
    int32_t var_28_1 = 0
    int32_t rcx = 0
    int32_t var_24_1 = 0
    int64_t rsi_1 = 0
    
    if (arg2 != 0 && *arg2 != 0)
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (arg2[rbx_1] != 0)
        
        if (rbx_1.d + 1 s> 0)
            sub_1405947f0(&var_30, rbx_1.d + 1)
            rcx = var_24_1
            rdx_1 = var_28_1
            rsi_1 = var_30
        
        int32_t rax = rbx_1.d + 1 + rdx_1
        int32_t var_28_2 = rax
        
        if (rax s> rcx)
            sub_140594770(&var_30)
            rsi_1 = var_30
        
        UnDecorator::getReferenceType(rsi_1, arg2, (rbx_1.d + 1) * 2)
    
    int32_t var_38
    sub_140a452d0(result_1, &var_38, &var_30)
    int64_t rax_1 = sx.q(var_38)
    
    if (rax_1.d == 0xffffffff)
        result = nullptr
    else
        result = rax_1 * 0xb8 + *result_1
    
    void* rbx_3 = &result[2]
    
    if (result == 0)
        rbx_3 = nullptr
    
    if (rsi_1 != 0)
        sub_140a74f90(rsi_1)
    
    if (rbx_3 != 0 && sub_140a4f230(rbx_3, *sub_140b58260(&var_38, r14, 1)).d s> 0)
        result_1[0xa].b = 1
        result.b = 1
        return result

result.b = 0
return result
