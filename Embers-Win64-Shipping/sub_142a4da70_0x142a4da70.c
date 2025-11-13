// 函数: sub_142a4da70
// 地址: 0x142a4da70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_238
int64_t rax_1 = __security_cookie ^ &var_238
int32_t* r14 = arg2
char* string_3 = arg1
int128_t* result

if (arg2 == 0 || *arg2 s> 0)
    result = nullptr
else
    char* string_1
    
    if (arg1 == 0)
        string_3 = sub_142a46ef0()
        string_1 = string_3
    else if (strstr(arg1, &data_143613e98) != 0)
        string_1 = string_3
    else if (sub_142a4ca80(string_3) != 1)
        string_1 = string_3
    else
        void var_1d8
        int32_t rax_4 = sub_142a8b1a0(string_3, &var_1d8, 0x9d, nullptr, r14)
        int32_t rax_5
        
        if (rax_4 s> 0)
            rax_5 = *r14
        
        if (rax_4 s<= 0 || rax_5 s> 0 || rax_5 == 0xffffff84)
            bool cond:2_1 = *r14 != 0xffffff84
            string_1 = string_3
            
            if (not(cond:2_1))
                *r14 = 0xf
        else
            string_3 = &var_1d8
            string_1 = string_3
    
    sub_142a4e610(string_3, nullptr, 0, &string_1)
    char* string = string_1
    char rax_7 = *string
    
    if (rax_7 == 0x5f || rax_7 == 0x2d)
        int32_t rsi_1 = 0
        void* string_2 = &string[1]
        
        if (string[1] != 0)
            void* rbx = &string[1]
            
            do
                char rcx_3 = *rbx
                
                if (rcx_3 - 0x2d u<= 0x32 && test_bit(0x4000000080003, sx.q(rcx_3 - 0x2d)))
                    break
                
                if (sub_142a86230(rcx_3) == 0)
                    break
                
                rbx += 1
                rsi_1 += 1
            while (*rbx != 0)
        
        if (rsi_1 == 4)
            string_2 = &string[5]
        
        if (string_2 != &string[1])
            string = string_2
        
        string_1 = string
        char rax_12 = *string
        
        if (rax_12 == 0x5f || rax_12 == 0x2d)
            sub_142a4e420(&string[1], nullptr, 0, &string_1)
            string = string_1
            char rdx_1 = *string
            
            if (rdx_1 == 0x5f || rdx_1 == 0x2d)
                int32_t* var_218
                var_218.b = 0
                sub_142a4c930(&string[1], rdx_1, 0, 0, var_218.b)
    
    char* rax_13 = strchr(string, 0x40)
    
    if (rax_13 == 0)
        result = nullptr
    else
        void var_138
        int32_t rax_14 = sub_142a4c490(&rax_13[1], 0x40, &var_138, 0x100, 0, 0, nullptr, 0, r14)
        
        if (rax_14 == 0)
            result = nullptr
        else
            result = sub_142a4d970(&var_138, rax_14, r14)

__security_check_cookie(rax_1 ^ &var_238)
return result
