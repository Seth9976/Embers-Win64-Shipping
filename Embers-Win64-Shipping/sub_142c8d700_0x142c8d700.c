// 函数: sub_142c8d700
// 地址: 0x142c8d700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
int64_t rax_2 = -1
int64_t rcx = -1
bool cond:0_1

do
    cond:0_1 = arg1[rcx + 1] != 0
    rcx += 1
while (cond:0_1)

if (arg1[rcx - 1] == 0x2e)
    arg1[rcx - 1] = 0

bool cond:1_1

do
    cond:1_1 = arg2[rax_2 + 1] != 0
    rax_2 += 1
while (cond:1_1)

if (arg2[rax_2 - 1] == 0x2e)
    arg2[rax_2 - 1] = 0

char* rax_3 = strchr(arg2, 0x2a)
uint64_t result

if (rax_3 != 0)
    void var_48
    int32_t rax_5 = sub_142c70d80(2, arg1, &var_48)
    int32_t rax_6
    void var_38
    
    if (rax_5 s<= 0)
        rax_6 = sub_142c70d80(0x17, arg1, &var_38)
    
    if (rax_5 s> 0 || rax_6 s> 0)
        result = 0
    else
        char* rax_7 = strchr(arg2, 0x2e)
        int32_t result_3
        
        if (rax_7 == 0)
            result_3.b = sub_142c70460(arg2, arg1) != 0
            result = zx.q(result_3)
        else if (strchr(&rax_7[1], 0x2e) == 0 || rax_3 u> rax_7)
            result_3.b = sub_142c70460(arg2, arg1) != 0
            result = zx.q(result_3)
        else
            int32_t rax_9 = sub_142c704d0(arg2, "xn--", 4)
            
            if (rax_9 != 0)
                result_3.b = sub_142c70460(arg2, arg1) != 0
                result = zx.q(result_3)
            else
                char* rax_10 = strchr(arg1, rax_9 + 0x2e)
                int32_t rax_11
                
                if (rax_10 != 0)
                    rax_11 = sub_142c70460(rax_7, rax_10)
                
                if (rax_10 == 0 || rax_11 == 0 || rax_10 - arg1 s< rax_7 - arg2)
                    result = 0
                else
                    int32_t rax_12 = sub_142c704d0(arg2, arg1, rax_3 - arg2)
                    int32_t rax_13
                    
                    if (rax_12 != 0)
                        rax_13 = sub_142c704d0(&rax_3[1], rax_10 - (rax_7 - rax_3 - 1), 
                            rax_7 - rax_3 - 1)
                    
                    int32_t result_2
                    
                    if (rax_12 == 0 || rax_13 == 0)
                        result_2 = 0
                    else
                        result_2 = 1
                    
                    result = zx.q(result_2)
else
    int32_t result_1
    result_1.b = sub_142c70460(arg2, arg1) != 0
    result = zx.q(result_1)

__security_check_cookie(rax_1 ^ &var_68)
return result
