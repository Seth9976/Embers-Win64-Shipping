// 函数: sub_140b00d80
// 地址: 0x140b00d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* r14 = arg3
arg3.b = 1
int64_t* result = sub_140aefb30(arg1, arg5, arg3.b)
int64_t* result_1 = result

if (result != 0)
    int64_t var_60 = 0
    int32_t rdx_1 = 0
    int32_t var_58_1 = 0
    int32_t rcx = 0
    int32_t var_54_1 = 0
    
    if (arg2 != 0 && *arg2 != 0)
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (arg2[rbx_1] != 0)
        
        if (rbx_1.d + 1 s> 0)
            sub_1405947f0(&var_60, rbx_1.d + 1)
            rcx = var_54_1
            rdx_1 = var_58_1
        
        int32_t rax = rdx_1 + rbx_1.d + 1
        int32_t var_58_2 = rax
        
        if (rax s> rcx)
            sub_140594770(&var_60)
        
        UnDecorator::getReferenceType(var_60, arg2, (rbx_1.d + 1) * 2)
    
    int64_t* rax_1 = sub_140af00b0(result_1, &var_60)
    int64_t rcx_5 = var_60
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    int32_t var_68
    sub_14093f560(rax_1, &var_68, *sub_140b58260(&var_60, r14, 1))
    int64_t rax_3 = sx.q(var_68)
    void* const rax_6
    
    if (rax_3.d == 0xffffffff)
        rax_6 = nullptr
    else
        rax_6 = rax_3 * 0x30 + *rax_1
    
    int64_t* rbx_3 = rax_6 + 8
    
    if (rax_6 == 0)
        rbx_3 = nullptr
    
    if (rbx_3 != 0)
        if (rbx_3[1].d == 0)
            result = &data_142d40450
        else
            result = *rbx_3
        
        void* r9_1 = arg4 - result
        uint32_t i
        uint32_t r8_5
        
        do
            r8_5 = zx.d(*result)
            i = zx.d(*(result + r9_1))
            
            if (r8_5 != i)
                break
            
            result += 2
        while (i != 0)
        
        if (r8_5 - i != 0)
            result_1[0xa].b = 1
            int64_t var_40
            result = sub_140ae7d20(rbx_3, sub_140ae6c10(&var_40, arg4))
            int64_t var_30
            
            if (var_30 != 0)
                result = sub_140a74f90(var_30)
            
            int64_t rcx_16 = var_40
            
            if (rcx_16 != 0)
                return sub_140a74f90(rcx_16)
    else
        sub_140ae6c10(&var_60, arg4)
        sub_140b58260(&var_68, r14, (rbx_3 + 1).d)
        result = sub_140ae49f0(rax_1, &var_68, &var_60)
        int64_t var_50
        
        if (var_50 != 0)
            result = sub_140a74f90(var_50)
        
        int64_t rcx_12 = var_60
        
        if (rcx_12 != 0)
            result = sub_140a74f90(rcx_12)
        
        result_1[0xa].b = 1

return result
