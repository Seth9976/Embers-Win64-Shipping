// 函数: sub_142c5a780
// 地址: 0x142c5a780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
void* rsi = *arg1
char* result
int512_t zmm2
result, zmm2 = sub_142c563e0("%s:%d", arg2, arg3)
char* result_1 = result

if (result != 0)
    if (*result != 0)
        do
            char rcx = *result_1
            
            if (rcx == 0x3a)
                break
            
            *result_1 = tolower(zx.d(rcx))
            result_1 = &result_1[1]
        while (*result_1 != 0)
    
    int64_t rax_3 = -1
    bool cond:1_1
    
    do
        cond:1_1 = result[rax_3 + 1] != 0
        rax_3 += 1
    while (cond:1_1)
    char* result_3 = sub_142c671a0(*(rsi + 0xb0), result, rax_3 + 1)
    char* result_2 = result_3
    
    if (result_3 != 0 && *(rsi + 0x594) != 0xffffffff)
        __time64_t _Time
        int64_t r8_2 = _time64(&_Time)
        int64_t rdx_1 = *(result_2 + 8)
        int64_t rax_4 = sx.q(*(rsi + 0x594))
        int32_t var_38_1 = rax_4.d
        
        if (rdx_1 != 0 && _Time - rdx_1 s>= rax_4)
            sub_142c64850(rsi, "Hostname in DNS cache was stale, zapped\n", r8_2, zmm2)
            result_2 = nullptr
            sub_142c66f30(*(rsi + 0xb0), result, rax_3 + 1)
    
    data_143ccb8a0(result)
    result = result_2

__security_check_cookie(rax_1 ^ &var_58)
return result
