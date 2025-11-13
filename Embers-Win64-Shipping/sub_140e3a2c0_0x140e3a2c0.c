// 函数: sub_140e3a2c0
// 地址: 0x140e3a2c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x3530)
int64_t var_3510 = -2
int64_t rbx
int64_t arg_8 = rbx
void var_3568
int64_t rax_1 = __security_cookie ^ &var_3568
int64_t rdi = arg3
void* result

if (arg1 != 0)
    result = *arg2

if (arg1 == 0 || result == 0)
    result.b = 0
else
    void** const var_3530 = &data_142ed6778
    int64_t var_3528_1 = arg1
    void* result_1 = result
    int64_t r15_1 = 0
    int64_t var_3518_1 = 0
    *arg2 = 0
    int32_t var_3500_1 = 0x55
    int32_t var_34fc_1 = 3
    int16_t var_34f8_1 = 0
    int64_t var_34c0_1 = 0
    int16_t var_54_1 = 0x100
    sub_140a74f90(0)
    int64_t var_34c0_2 = 0
    int16_t var_54_2 = 0x100
    
    if (rdi s< 1 || arg4 s< 1 || ((arg5 - 1) & 0xfffffffffffffffc) != 0 || arg5 == 2
            || *arg7 - 1 u> 0x63 || arg7[1] u> 3)
        rbx.b = 0
    else
        void** const* var_3508 = &var_3530
        var_3500_1.q = *arg7
        var_34f8_1.d = arg7[2]
        
        if (sub_140e3fb60(&var_3508, rdi.d, arg4.d, arg5.d) == 0)
        label_140e3a49d:
            r15_1 = var_34c0_2
            rbx.b = 0
        else
            int32_t i = 0
            int32_t rax_9
            
            do
                rbx = 0
                
                if (arg4 s> 0)
                    void* rdi_1 = arg6
                    
                    do
                        if (sub_140e425c0(&var_3508, rdi_1) == 0)
                            goto label_140e3a49d
                        
                        rbx += 1
                        rdi_1 += arg5 * rdi
                    while (rbx s< arg4)
                    
                    rdi = arg3
                
                if (sub_140e425c0(&var_3508, nullptr) == 0)
                    goto label_140e3a49d
                
                i += 1
                rax_9.b = var_34f8_1:1.b != 0
            while (i u< rax_9 + 1)
            sub_140a74f90(var_34c0_2)
            int64_t var_34c0_3 = 0
            int16_t var_54_3 = 0x100
            *arg2 = var_3518_1
            rbx.b = 1
    
    sub_140a74f90(r15_1)
    result = zx.q(rbx.b)

__security_check_cookie(rax_1 ^ &var_3568)
return result
