// 函数: sub_142c92510
// 地址: 0x142c92510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
char* rbx = arg1
int32_t rbp = 0
char var_138[0x100]
char (* rcx)[0x100] = &var_138
char* rdi = arg2

while (true)
    memset(rcx, 0, 0x10f)
    void* var_148
    
    while (true)
        uint64_t result
        
        if (rbp == 0)
            char rcx_4 = *rbx
            
            if (rcx_4 == 0x2a)
                void* rax_4 = &rbx[1]
                
                if (rbx[1] == rcx_4)
                    do
                        rbx = rax_4
                        rax_4 += 1
                    while (*rax_4 == 0x2a)
                
                int32_t rax_5
                
                if (*rdi != 0 || rbx[1] != 0)
                    rax_5 = sub_142c92510(&rbx[1], rdi)
                
                if ((*rdi == 0 && rbx[1] == 0) || rax_5 == 0)
                    result = 0
                else
                    if (*rdi != 0)
                        rdi = &rdi[1]
                        continue
                    
                    result = 1
            else
                int32_t result_1
                
                if (rcx_4 == 0x3f)
                    if (isprint(zx.d(*rdi)) == 0)
                        result_1.b = *rdi != 0
                        result = zx.q(result_1 + 1)
                    else
                        rdi = &rdi[1]
                        rbx = &rbx[1]
                        continue
                else if (rcx_4 == 0)
                    result_1.b = *rdi != 0
                    result = zx.q(result_1)
                else if (rcx_4 == 0x5c)
                    rbp = 1
                    rbx = &rbx[1]
                    continue
                else if (rcx_4 != 0x5b)
                    char rax_11 = *rdi
                    rbx = &rbx[1]
                    rdi = &rdi[1]
                    
                    if (rcx_4 == rax_11)
                        continue
                    
                    result = 1
                else
                    var_148 = &rbx[1]
                    
                    if (sub_142c92ad0(&var_148, &var_138) == 0)
                        result = 2
                    else
                        uint64_t rax_8 = zx.q(*rdi)
                        int32_t rcx_8 = 0
                        char var_37
                        
                        if (var_138[rax_8] != 0)
                            rcx_8 = 1
                        else
                            char var_34
                            
                            if (var_37 != 0)
                                rcx_8 = isalnum(rax_8.d)
                            else
                                char var_36
                                
                                if (var_34 != 0)
                                    rcx_8 = isalpha(rax_8.d)
                                else
                                    char var_35
                                    
                                    if (var_36 != 0)
                                        rcx_8 = isdigit(rax_8.d)
                                    else
                                        char var_33
                                        
                                        if (var_35 != 0)
                                            rcx_8 = isxdigit(rax_8.d)
                                        else
                                            char var_2f
                                            
                                            if (var_33 != 0)
                                                rcx_8 = isprint(rax_8.d)
                                            else
                                                char var_2e
                                                
                                                if (var_2f != 0)
                                                    rcx_8 = isspace(rax_8.d)
                                                else
                                                    char var_31
                                                    
                                                    if (var_2e != 0)
                                                        rcx_8 = isupper(rax_8.d)
                                                    else
                                                        char var_32
                                                        
                                                        if (var_31 != 0)
                                                            rcx_8 = islower(rax_8.d)
                                                        else
                                                            char var_30
                                                            
                                                            if (var_32 == 0)
                                                                if (var_30 != 0)
                                                                    rcx_8 = isgraph(rax_8.d)
                                                            else if (rax_8.b == 0x20
                                                                    || rax_8.b == 9)
                                                                rcx_8 = 1
                        char var_38
                        
                        if (var_38 != 0)
                            int32_t rax_10
                            rax_10.b = rcx_8 == 0
                            rcx_8 = rax_10
                        
                        if (rcx_8 != 0)
                            break
                        
                        result = 1
        else if (rbp != 1)
            continue
        else if (isprint(zx.d(*rbx)) == 0)
            result = 2
        else
            char rcx_3 = *rbx
            rbx = &rbx[1]
            char rax_3 = *rdi
            rdi = &rdi[1]
            
            if (rcx_3 == rax_3)
                rbp = 0
                continue
            
            result = 1
        
        __security_check_cookie(rax_1 ^ &var_168)
        return result
    
    rcx = &var_138
    rbx = var_148 + 1
    rdi = &rdi[1]
