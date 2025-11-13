// 函数: sub_142a93e00
// 地址: 0x142a93e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_258
int64_t rax_1 = __security_cookie ^ &var_258
char* string = arg1
uint32_t result

if (*arg2 s> 0)
    result = 0
else
    void var_78
    memset(&var_78, 0, 0x60)
    char var_118[0xa0]
    memset(&var_118, 0, 0x9d)
    
    if (strchr(string, 0x40) == 0)
    label_142a93ee3:
        void var_228
        memset(&var_228, 0, 0x55)
        sub_142a8b250(string, &var_228, 0x55, 0, arg2)
        
        if (*arg2 s> 0)
            result = 0
        else
            void name
            memset(&name, 0, 0xaa)
            int32_t rcx_8 = 0
            
            for (int64_t i = 0; i s< 0x55; i += 5)
                char rax_6 = *(&var_228 + i)
                
                if (rax_6 == 0)
                    break
                
                *(&name + (i << 1)) = sx.w(rax_6)
                void var_227
                char rax_8 = *(&var_227 + i)
                
                if (rax_8 == 0)
                    rcx_8 += 1
                    break
                
                void var_1c6
                *(&var_1c6 + (i << 1)) = sx.w(rax_8)
                void var_226
                char rax_10 = *(&var_226 + i)
                
                if (rax_10 == 0)
                    rcx_8 += 2
                    break
                
                void var_1c4
                *(&var_1c4 + (i << 1)) = sx.w(rax_10)
                void var_225
                char rax_12 = *(&var_225 + i)
                
                if (rax_12 == 0)
                    rcx_8 += 3
                    break
                
                void var_1c2
                *(&var_1c2 + (i << 1)) = sx.w(rax_12)
                char var_224[0x5c]
                char rax_14 = var_224[i]
                
                if (rax_14 == 0)
                    rcx_8 += 4
                    break
                
                rcx_8 += 5
                int16_t var_1c0[0x54]
                var_1c0[i] = sx.w(rax_14)
            
            if (rcx_8 s>= 0x54)
                result = 0
            else
                int64_t rax_17 = sx.q(rcx_8) * 2
                
                if (rax_17 u>= 0xaa)
                    __report_rangecheckfailure()
                    noreturn
                
                *(&name + rax_17) = 0
                result = LocaleNameToLCID(&name, 0x8000000)
                
                if ((result & 0xffffefff) == 0)
                    result = 0
    else
        int32_t rax_3 = sub_142a4d040(string, "collation", &var_78, 0x5f, arg2)
        
        if (*arg2 s> 0 || rax_3 s<= 0)
            int32_t rax_4 = sub_142a4cc50(string, &var_118, 0x9c, arg2)
            
            if (*arg2 s<= 0 && rax_4 s> 0)
                int64_t rax_5 = sx.q(rax_4)
                
                if (rax_5 u>= 0x9d)
                    __report_rangecheckfailure()
                    noreturn
                
                var_118[rax_5] = 0
                string = &var_118
            
            goto label_142a93ee3
        
        result = 0

__security_check_cookie(rax_1 ^ &var_258)
return result
