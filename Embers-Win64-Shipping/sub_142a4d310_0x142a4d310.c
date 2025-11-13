// 函数: sub_142a4d310
// 地址: 0x142a4d310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1f8
int64_t rax_1 = __security_cookie ^ &var_1f8
int32_t var_1c8[0x4]
var_1c8[0] = 0
uint32_t result

if (arg1 == 0)
    result = 0
else
    int64_t rax_2 = -1
    
    do
        rax_2 += 1
    while (arg1[rax_2] != 0)
    
    if (rax_2 u< 2)
        result = 0
    else
        result = sub_142a93e00(arg1, &var_1c8)
        
        if (var_1c8[0] s> 0)
            result = 0
        else if (result == 0)
            char var_b8[0xa0]
            sub_142a8c3f0(&var_b8, 0x9d, sub_142a4e610(arg1, &var_b8, 0x9d, nullptr), &var_1c8)
            int32_t rax_4 = var_1c8[0]
            
            if (rax_4 s> 0 || rax_4 == 0xffffff84)
                result = 0
            else
                char* rdx_6
                
                if (strchr(arg1, 0x40) == 0)
                    rdx_6 = arg1
                else
                    char var_1b8[0x60]
                    int32_t rax_6 = sub_142a4d040(arg1, "collation", &var_1b8, 0x5f, &var_1c8)
                    
                    if (var_1c8[0] s> 0 || rax_6 s<= 0)
                        var_1c8[0] = 0
                        rdx_6 = arg1
                    else
                        int64_t rcx_4 = sx.q(rax_6)
                        
                        if (rcx_4 u>= 0x60)
                            __report_rangecheckfailure()
                            noreturn
                        
                        var_1b8[rcx_4] = 0
                        char var_158[0x60]
                        int32_t rax_7 = sub_142a4bee0(arg1, &var_158, 0x9c, 2, &var_1c8)
                        
                        if (var_1c8[0] s> 0 || rax_7 s<= 0)
                            var_1c8[0] = 0
                            rdx_6 = arg1
                        else
                            int64_t rdx_4 = sx.q(rax_7)
                            
                            if (rdx_4 u>= 0x9d)
                                __report_rangecheckfailure()
                                noreturn
                            
                            var_158[rdx_4] = 0
                            int32_t rax_8 = sub_142a4dce0("collation", &var_1b8, &var_158, 
                                0x9c - rax_7, &var_1c8)
                            
                            if (var_1c8[0] s> 0 || rax_8 s<= 0)
                                var_1c8[0] = 0
                                rdx_6 = arg1
                            else
                                int64_t rax_9 = sx.q(rax_8)
                                
                                if (rax_9 u>= 0x9d)
                                    __report_rangecheckfailure()
                                    noreturn
                                
                                var_158[rax_9] = 0
                                rdx_6 = &var_158
                
                result = sub_142a94020(&var_b8, rdx_6, &var_1c8)

__security_check_cookie(rax_1 ^ &var_1f8)
return result
