// 函数: sub_140af5690
// 地址: 0x140af5690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int16_t* const r14 = &data_142d40450
char r15 = arg3
int16_t* rbx

if (arg5[1].d == 0)
    rbx = &data_142d40450
else
    rbx = *arg5

sub_140b3ac40(&data_1439a90f0, rbx)
int64_t* result = sub_140aefb30(arg1, arg5, r15)

if (result != 0)
    int64_t var_100 = 0
    int64_t rsi_1 = 0
    int64_t var_f8_1 = 0
    int32_t rdx_2 = 0
    int32_t rcx_1 = 0
    
    if (arg2 != 0 && *arg2 != 0)
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (arg2[rbx_1] != 0)
        
        if (rbx_1.d + 1 s> 0)
            sub_1405947f0(&var_100, rbx_1.d + 1)
            rcx_1 = var_f8_1:4.d
            rdx_2 = var_f8_1.d
            rsi_1 = var_100
        
        int32_t rax_2 = rbx_1.d + 1 + rdx_2
        var_f8_1.d = rax_2
        
        if (rax_2 s> rcx_1)
            sub_140594770(&var_100)
            rsi_1 = var_100
        
        UnDecorator::getReferenceType(rsi_1, arg2, (rbx_1.d + 1) * 2)
    
    int32_t var_f0
    sub_140a452d0(result, &var_f0, &var_100)
    int64_t rax_3 = sx.q(var_f0)
    int64_t rbx_3
    
    if (rax_3.d != 0xffffffff)
        rbx_3 = rax_3 * 0xb8
    
    int64_t* result_1
    
    if (rax_3.d == 0xffffffff || rbx_3 == neg.q(*result))
        result_1 = nullptr
    else
        result_1 = rbx_3 + *result + 0x10
    
    if (rsi_1 != 0)
        sub_140a74f90(rsi_1)
    
    if (result_1 != 0)
        goto label_140af59a2
    
    if (r15 != 0)
        int64_t var_b0_1 = 0
        int64_t r14_1 = 0
        int32_t var_9c_1 = 0
        int32_t rsi_2 = 0
        int64_t var_60_1 = 0
        int32_t r15_1 = 0
        int32_t var_4c_1 = 0
        var_100 = 0
        int64_t* var_f8_2 = nullptr
        
        if (arg2 != 0 && *arg2 != 0)
            int64_t rbx_5 = -1
            
            do
                rbx_5 += 1
            while (arg2[rbx_5] != 0)
            
            if (rbx_5.d + 1 s> 0)
                sub_1405947f0(&var_100, rbx_5.d + 1)
                r15_1 = var_f8_2:4.d
                rsi_2 = var_f8_2.d
                r14_1 = var_100
            
            rsi_2 += rbx_5.d + 1
            var_f8_2.d = rsi_2
            
            if (rsi_2 s> r15_1)
                sub_140594770(&var_100)
                r15_1 = var_f8_2:4.d
                rsi_2 = var_f8_2.d
                r14_1 = var_100
            
            UnDecorator::getReferenceType(r14_1, arg2, (rbx_5.d + 1) * 2)
        
        int64_t var_e8
        __builtin_memset(&var_e8, 0, 0x2c)
        int32_t var_bc_1 = 0x80
        int32_t var_b8_1 = 0xffffffff
        int32_t var_b4_1 = 0
        int64_t var_a8_1 = 0
        int32_t var_a0_1 = 0
        int64_t var_98
        __builtin_memset(&var_98, 0, 0x2c)
        int32_t var_6c_1 = 0x80
        int32_t var_68_1 = 0xffffffff
        int32_t var_64_1 = 0
        int64_t var_58_1 = 0
        int32_t var_50_1 = 0
        sub_140a3f040(result, &var_100)
        *var_f8_2 = r14_1
        var_f8_2[1].d = rsi_2
        *(var_f8_2 + 0xc) = r15_1
        sub_140a3b380(&var_f8_2[2], &var_e8)
        var_f8_2[0x16].d = 0xffffffff
        r14 = &data_142d40450
        int32_t rax_4 = var_f8_2[1].d
        int16_t* rdx_11
        
        if (rax_4 == 0)
            rdx_11 = &data_142d40450
        else
            rdx_11 = *var_f8_2
        
        int32_t rcx_12 = rax_4 - 1
        
        if (rax_4 == 0)
            rcx_12 = 0
        
        sub_140a42a90(result, &var_f0, sub_1405969c0(rcx_12, rdx_11), var_f8_2, var_100.d, nullptr)
        result_1 = *result + sx.q(var_f0) * 0xb8 + 0x10
        sub_140a3c110(&var_e8)
        
        if (result_1 != 0)
            r15 = arg3
        label_140af59a2:
            
            if (r15 != 0 || arg4 == r15)
                result[0xa].b = 1
            
            if (result_1 != 0)
                if (arg5[1].d != 0)
                    r14 = *arg5
                
                sub_140aeb3d0(&data_14399fec8, r14, arg2)
    
    result = result_1

__security_check_cookie(rax_1 ^ &var_138)
return result
