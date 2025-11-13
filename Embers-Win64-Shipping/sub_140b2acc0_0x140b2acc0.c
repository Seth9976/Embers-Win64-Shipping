// 函数: sub_140b2acc0
// 地址: 0x140b2acc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x2050)
void var_2088
void* var_48 = __security_cookie ^ &var_2088
void* result

if (arg1 == 0)
    result.b = 0
else
    int64_t rbx_1 = -1
    int64_t rax_1 = -1
    
    do
        rax_1 += 1
    while (arg1[rax_1] != 0)
    
    if (rax_1.d s>= 0x1000)
        wchar16* rdi_2 = nullptr
        int32_t r15_1 = (rax_1 + 1).d
        wchar16* var_2058 = nullptr
        int32_t var_204c_1 = 0
        int32_t rbx_3 = r15_1
        int32_t var_2050_1 = rbx_3
        int32_t rbp_1 = 0
        
        if (r15_1 s> 0)
            sub_140594770(&var_2058)
            rbp_1 = var_204c_1
            rbx_3 = var_2050_1
            rdi_2 = var_2058
        
        if (sub_140b2b020(arg1, arg2, rdi_2, r15_1, arg4).b == 0)
            if (rdi_2 != 0)
                sub_140a74f90(rdi_2)
            
            result.b = 0
        else
            if (rbp_1 != rbx_3)
                sub_1405947f0(&var_2058, rbx_3)
                rbp_1 = var_204c_1
                rbx_3 = var_2050_1
                rdi_2 = var_2058
            
            if (arg3 == &var_2058)
                if (rdi_2 != 0)
                    sub_140a74f90(rdi_2)
                
                result.b = 1
            else
                int64_t rcx_8 = *arg3
                
                if (rcx_8 != 0)
                    sub_140a74f90(rcx_8)
                
                *arg3 = rdi_2
                result.b = 1
                arg3[1].d = rbx_3
                *(arg3 + 0xc) = rbp_1
    else
        wchar16 var_2048[0x1000]
        memset(&var_2048, 0, 0x2000)
        
        if (sub_140b2b020(arg1, arg2, &var_2048, 0x1000, arg4).b == 0)
            result.b = 0
        else if (*arg3 == &var_2048)
            result.b = 1
        else
            int32_t rdi_1 = 0
            int32_t rbx_2
            
            if (var_2048[0] == 0)
                rbx_2 = 0
            else
                do
                    rbx_1 += 1
                while (var_2048[rbx_1] != 0)
                
                rbx_2 = rbx_1.d + 1
            
            arg3[1].d = 0
            
            if (*(arg3 + 0xc) != rbx_2)
                sub_1405947f0(arg3, rbx_2)
                rdi_1 = arg3[1].d
            
            result = zx.q(rdi_1 + rbx_2)
            arg3[1].d = result.d
            
            if (result.d s> *(arg3 + 0xc))
                sub_140594770(arg3)
            
            if (rbx_2 == 0)
                result.b = 1
            else
                memcpy(*arg3, &var_2048, rbx_2 * 2)
                result.b = 1

__security_check_cookie(var_48 ^ &var_2088)
return result
