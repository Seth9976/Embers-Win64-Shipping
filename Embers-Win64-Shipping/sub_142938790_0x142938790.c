// 函数: sub_142938790
// 地址: 0x142938790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xc0)
void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int64_t* rbx = arg2
int64_t result

if (arg2 == 0 || (*arg2 == 0 && arg2[2] == 0 && arg2[1] == 0))
    result = 0
else if (sub_1428b6f70(arg3, "%*snamingAuthority: ", zx.q(arg4)) s<= 0)
    result = 0
else
    void* rcx_1 = *rbx
    
    if (rcx_1 == 0)
    label_1429388b1:
        
        if (rbx[2] == 0)
        label_142938900:
            
            if (rbx[1] == 0)
                result = 1
            else if (sub_1428b6f70(arg3, "%*s  namingAuthorityUrl: ", zx.q(arg4)) s<= 0)
                result = 0
            else
                int32_t rax_12
                int64_t r8_7
                rax_12, r8_7 = sub_14292ba90(arg3, rbx[1])
                
                if (rax_12 s<= 0)
                    result = 0
                else if (sub_1428b6f70(arg3, &data_14370209c, r8_7) s<= 0)
                    result = 0
                else
                    result = 1
        else if (sub_1428b6f70(arg3, "%*s  namingAuthorityText: ", zx.q(arg4)) s<= 0)
            result = 0
        else
            int32_t rax_9
            int64_t r8_5
            rax_9, r8_5 = sub_14292ba90(arg3, rbx[2])
            
            if (rax_9 s<= 0)
                result = 0
            else
                if (sub_1428b6f70(arg3, &data_14370209c, r8_5) s> 0)
                    goto label_142938900
                
                result = 0
    else
        char* rax_4 = sub_1428a94b0(sub_1428a96d0(rcx_1))
        
        if (sub_1428b6f70(arg3, "%*s  admissionAuthorityId: ", zx.q(arg4)) s<= 0)
            result = 0
        else
            void var_a8
            sub_1428a97f0(&var_a8, 0x80, *rbx, 1)
            char* const rax_6 = &data_1437020ab
            
            if (rax_4 != 0)
                rax_6 = &data_143702098
            
            char* const var_b0_1 = rax_6
            char* const r8_3 = &data_1437020ab
            void* var_b8_1 = &var_a8
            
            if (rax_4 != 0)
                r8_3 = rax_4
            
            if (sub_1428b6f70(arg3, "%s%s%s%s\n", r8_3) s> 0)
                goto label_1429388b1
            
            result = 0

__security_check_cookie(rax_1 ^ &var_d8)
return result
