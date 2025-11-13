// 函数: sub_142b0cf10
// 地址: 0x142b0cf10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
int64_t* result = sub_142a7dd00(0xa8)
*(arg1 + 0x10) = result
int64_t* result_1 = result

if (result == 0)
    *arg3 = 7
else
    int64_t var_148 = 0x28
    int64_t var_140
    __builtin_memset(&var_140, 0, 0x20)
    *result = 0
    void var_118
    result_1[1] = sub_142a92100("icu-internal-compound-s1", &var_118, &var_148, arg3)
    result_1[2] = sub_142a92100("icu-internal-compound-s2", &var_118, &var_148, arg3)
    result_1[3] = sub_142a92100("icu-internal-compound-s3", &var_118, &var_148, arg3)
    result_1[4] = sub_142a92100("icu-internal-compound-d1", &var_118, &var_148, arg3)
    result_1[5] = sub_142a92100("icu-internal-compound-d2", &var_118, &var_148, arg3)
    result_1[6] = sub_142a92100("icu-internal-compound-d3", &var_118, &var_148, arg3)
    result_1[7] = sub_142a92100("icu-internal-compound-d4", &var_118, &var_148, arg3)
    result_1[8] = sub_142a92100("icu-internal-compound-d5", &var_118, &var_148, arg3)
    result_1[9] = sub_142a92100("icu-internal-compound-d6", &var_118, &var_148, arg3)
    result_1[0xa] = sub_142a92100("icu-internal-compound-d7", &var_118, &var_148, arg3)
    result_1[0xb] = sub_142a92100("icu-internal-compound-t", &var_118, &var_148, arg3)
    result_1[0xc] = sub_142a92100("ibm-915_P100-1995", &var_118, &var_148, arg3)
    result_1[0xd] = sub_142a92100("ibm-916_P100-1995", &var_118, &var_148, arg3)
    result_1[0xe] = sub_142a92100("ibm-914_P100-1995", &var_118, &var_148, arg3)
    result_1[0xf] = sub_142a92100("ibm-874_P100-1995", &var_118, &var_148, arg3)
    result_1[0x10] = sub_142a92100("ibm-912_P100-1995", &var_118, &var_148, arg3)
    result_1[0x11] = sub_142a92100("ibm-913_P100-2000", &var_118, &var_148, arg3)
    result_1[0x12] = sub_142a92100("iso-8859_14-1998", &var_118, &var_148, arg3)
    result = sub_142a92100("ibm-923_P100-1998", &var_118, &var_148, arg3)
    result_1[0x13] = result
    
    if (*arg3 s> 0 || *(arg2 + 8) != 0)
        int64_t* rbx = *(arg1 + 0x10)
        
        if (rbx != 0)
            int64_t i_1 = 0x14
            int64_t i
            
            do
                void* rcx_2 = *rbx
                
                if (rcx_2 != 0)
                    sub_142a92480(rcx_2)
                
                rbx = &rbx[1]
                i = i_1
                i_1 -= 1
            while (i != 1)
            result = sub_142a7dcd0(*(arg1 + 0x10))
            *(arg1 + 0x10) = 0
    else
        result_1[0x14].d = 0

__security_check_cookie(rax_1 ^ &var_168)
return result
