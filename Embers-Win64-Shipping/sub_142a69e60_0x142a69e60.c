// 函数: sub_142a69e60
// 地址: 0x142a69e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t rax_1 = __security_cookie ^ &var_188
int32_t result_2 = 0
int32_t var_158 = 0
int32_t result_1 = -1
char var_128[0xa0]
int32_t rax_2 = sub_142a4cc30(arg1, &var_128, 0xff, &var_158)
int32_t result

if (var_158 s<= 0)
    int64_t rax_3 = sx.q(rax_2)
    
    if (rax_3 u>= 0x100)
        __report_rangecheckfailure()
        noreturn
    
    var_128[rax_3] = 0
    char var_148[0x20]
    int32_t rax_4 = sub_142a4d040(&var_128, "calendar", &var_148, 0x1f, &var_158)
    
    if (var_158 s> 0)
    label_142a69f21:
        var_158 = 0
        void var_150
        sub_142a4ff80(&var_128, 1, &var_150, 4, &var_158)
        
        if (var_158 s> 0)
            result = 0
        else
            char** rax_6 = sub_142a64160(nullptr, "supplementalData", &var_158)
            sub_142a625a0(rax_6, "calendarPreferenceData", rax_6, &var_158)
            char** rax_7 = sub_142a625a0(rax_6, &var_150, nullptr, &var_158)
            int32_t rcx_7 = var_158
            char** rsi_1 = rax_7
            
            if (rcx_7 == 2 && rax_6 != 0)
                var_158 = 0
                char** rax_8 = sub_142a625a0(rax_6, "001", nullptr, &var_158)
                rcx_7 = var_158
                rsi_1 = rax_8
            
            var_148[0] = 0
            
            if (rcx_7 s<= 0 && rsi_1 != 0)
                int32_t var_154 = 0
                void* rax_9 = sub_142a63b20(rsi_1, 0, &var_154, &var_158)
                int32_t r8_6 = var_154
                
                if (r8_6 s< 0x20)
                    sub_142a8d6e0(rax_9, &var_148, r8_6)
                    var_148[sx.q(var_154)] = 0
                    result_1 = sub_142a69df0(&var_148)
            
            sub_142a5f860(rsi_1)
            sub_142a5f860(rax_6)
            
            if (result_1 != 0xffffffff)
                result_2 = result_1
            
            result = result_2
    else
        int64_t rax_5 = sx.q(rax_4)
        
        if (rax_5 u>= 0x20)
            __report_rangecheckfailure()
            noreturn
        
        var_148[rax_5] = 0
        result = sub_142a69df0(&var_148)
        result_1 = result
        
        if (result == 0xffffffff)
            goto label_142a69f21
else
    result = 0

__security_check_cookie(rax_1 ^ &var_188)
return result
