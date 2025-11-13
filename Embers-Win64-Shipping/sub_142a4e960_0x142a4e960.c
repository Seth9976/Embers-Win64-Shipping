// 函数: sub_142a4e960
// 地址: 0x142a4e960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int32_t r14 = *arg3
uint32_t result = 0xc
uint32_t var_5c = 0xc
uint32_t r15 = 6
uint32_t r12 = 4

if (r14 s<= 0)
    if (arg1 == 0)
    label_142a4eacf:
        
        if (r14 s<= 0)
            *arg3 = 1
    else
        char* var_68 = arg1
        void var_50
        uint32_t rax_2 = sub_142a4e610(arg1, &var_50, 0xc, &var_68)
        result = sub_142a8c3f0(&var_50, 0xc, rax_2, arg3)
        void var_60
        void var_58
        char* rcx_7
        
        if (*arg3 s> 0)
            rcx_7 = var_68
        else
            char* rcx_1 = var_68
            var_5c = rax_2
            char rax_3 = *rcx_1
            
            if (rax_3 == 0x5f || rax_3 == 0x2d)
                rcx_1 = &rcx_1[1]
                var_68 = rcx_1
            
            uint32_t rax_4 = sub_142a4e860(rcx_1, &var_58, 6, &var_68)
            result = sub_142a8c3f0(&var_58, 6, rax_4, arg3)
            
            if (*arg3 s> 0)
                rcx_7 = var_68
            else
                r15 = rax_4
                char* rcx_4
                
                if (rax_4 s<= 0)
                    rcx_4 = var_68
                else
                    int32_t rax_5 = sub_142a86320(&var_58, "Zzzz", rax_4, result)
                    rcx_4 = var_68
                    
                    if (rax_5 == 0)
                        r15 = 0
                    
                    char rax_6 = *rcx_4
                    
                    if (rax_6 == 0x5f || rax_6 == 0x2d)
                        rcx_4 = &rcx_4[1]
                        var_68 = rcx_4
                
                uint32_t rax_7 = sub_142a4e420(rcx_4, &var_60, 4, &var_68)
                result = sub_142a8c3f0(&var_60, 4, rax_7, arg3)
                
                if (*arg3 s> 0)
                    rcx_7 = var_68
                else
                    r12 = rax_7
                    
                    if (rax_7 s<= 0)
                        rcx_7 = var_68
                        
                        if ((*rcx_7 & 0xbf) != 0)
                            rcx_7 -= 1
                            var_68 = rcx_7
                    else
                        result = sub_142a86320(&var_60, "ZZ", rax_7, result)
                        
                        if (result == 0)
                            r12 = 0
                        
                        rcx_7 = var_68
        
        r14 = *arg3
        int32_t rcx_8 = rcx_7.d - arg1.d
        
        if (r14 s<= 0)
            void* rdx_3 = &arg1[sx.q(rcx_8)]
            
            while (true)
                char rax_9 = *rdx_3
                
                if (rax_9 != 0x5f && rax_9 != 0x2d)
                    break
                
                rcx_8 += 1
                rdx_3 += 1
            
            int64_t rbx_4 = -1
            int64_t r8_5 = -1
            char* r9_7 = &arg1[sx.q(rcx_8)]
            
            do
                r8_5 += 1
            while (r9_7[r8_5] != 0)
            
            int32_t rcx_11 = 0
            
            if (r8_5.d s> 0)
                char* rdx_4 = r9_7
                
                while (true)
                    result = zx.d(*rdx_4)
                    
                    if (result.b == 0x2d || result.b == 0x5f)
                        rcx_11 = 0
                    else
                        if (result.b == 0x40)
                            goto label_142a4ebba
                        
                        if (rcx_11 s> 8)
                            break
                        
                        rcx_11 += 1
                    
                    rdx_4 = &rdx_4[1]
                    
                    if (&rdx_4[neg.q(r9_7)] s>= sx.q(r8_5.d))
                        goto label_142a4ebba
                
                goto label_142a4eacf
            
        label_142a4ebba:
            result =
                sub_142a4f280(&var_50, var_5c, &var_58, r15, &var_60, r12, r9_7, r8_5.d, arg2, arg3)
            
            if (result.b == 0)
                do
                    rbx_4 += 1
                while (arg1[rbx_4] != 0)
                
                result = (*(*arg2 + 8))(arg2, arg1, rbx_4)
        else if (r14 == 0xf || r14 s<= 0)
            *arg3 = 1

__security_check_cookie(rax_1 ^ &var_b8)
return result
