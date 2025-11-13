// 函数: sub_142aaa2d0
// 地址: 0x142aaa2d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int32_t rbx = arg3
int32_t var_fc = rbx
void* rdi = arg2
uint64_t result

if (*arg4 s> 0)
    result = 0
else if (rbx s< 0 || (arg2 == 0 && rbx s> 0))
    *arg4 = 1
    result = 0
else
    void* var_e0_1 = nullptr
    int32_t var_108 = 0
    void var_100
    int32_t rax_3 = sub_142a4d040(arg1, "currency", &var_100, 4, &var_108)
    bool cond:1_1 = var_108 s> 0
    int32_t var_104 = rax_3
    char rax_4
    
    if (not(cond:1_1) && rax_3 == 3)
        rax_4 = sub_142a8d8a0(&var_100, rax_3)
    
    if (cond:1_1 || rax_3 != 3 || rax_4 == 0)
        char string
        sub_142a4ff80(arg1, 0, &string, 0x9d, arg4)
        
        if (*arg4 s> 0)
            result = 0
        else
            int16_t* rax_5 = sub_142aa9380(&string)
            
            if (rax_5 == 0)
                char* rax_8 = strchr(&string, 0x5f)
                
                if (rax_8 != 0)
                    *rax_8 = 0
                
                int32_t r9_6
                
                if (string != 0)
                    var_108 = 0
                    char** rax_9 = sub_142a64160("icudt64l-curr", "supplementalData", &var_108)
                    char** rax_11 = sub_142a625a0(rax_9, &string, 
                        sub_142a625a0(rax_9, "CurrencyMap", rax_9, &var_108), &var_108)
                    char** rax_12 = sub_142a620c0(rax_11, 0, nullptr, &var_108)
                    var_e0_1 = sub_142a63dd0(rax_12, "id", &var_104, &var_108)
                    sub_142a5f860(rax_12)
                    sub_142a5f860(rax_11)
                    r9_6 = var_108
                    
                    if (r9_6 s<= 0)
                        goto label_142aaa550
                    
                    rbx = var_fc
                    rdi = arg2
                    goto label_142aaa505
                
                var_108 = 2
            label_142aaa505:
                
                if (strchr(&string, 0x5f) == 0)
                    r9_6 = var_108
                label_142aaa550:
                    
                    if (*arg4 == 0 || r9_6 != 0)
                        *arg4 = r9_6
                    
                    if (*arg4 s<= 0 && var_fc s> var_104)
                        sub_142a8c2c0(arg2, var_e0_1)
                    
                    result = sub_142a8c440(arg2, var_fc, var_104, arg4)
                else
                    sub_142a4d5b0(arg1, &string, 0x9d, arg4)
                    *arg4 = 0xffffff80
                    result = sub_142aaa2d0(&string, rdi, zx.q(rbx), arg4)
            else
                if (rbx s> std::_WChar_traits<wchar_t>::length(rax_5))
                    sub_142a8c2c0(rdi, rax_5)
                
                int32_t rax_7 = std::_WChar_traits<wchar_t>::length(rax_5)
                var_104 = rax_7
                result = sub_142a8c440(rdi, rbx, rax_7, arg4)
    else
        int32_t r8_1 = var_104
        
        if (r8_1 s< rbx)
            sub_142a861f0(&var_100)
            sub_142a8d750(&var_100, rdi, var_104)
            r8_1 = var_104
        
        result = sub_142a8c440(rdi, rbx, r8_1, arg4)

__security_check_cookie(rax_1 ^ &var_138)
return result
