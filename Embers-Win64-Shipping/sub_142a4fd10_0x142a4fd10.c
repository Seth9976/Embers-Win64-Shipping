// 函数: sub_142a4fd10
// 地址: 0x142a4fd10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
uint32_t result_1 = 0
void var_c8
int32_t rax_2 = sub_142a4d690(arg1, &var_c8, 8, &result_1)
uint32_t result_3 = result_1
uint32_t result

if (result_3 s> 0 || result_3 == 0xffffff84 || rax_2 == 0)
    result_1 = 0
    void str2
    int64_t rbx_1 = sx.q(sub_142a4d500(arg1, &str2, 8, &result_1))
    result = result_1
    
    if (result s> 0 || result == 0xffffff84)
        result.b = 0
    else if (rbx_1.d s<= 0)
    label_142a4fdcc:
        result_1 = 0
        int16_t var_fc
        char* var_108 = &var_fc:1
        int32_t var_100_1 = 0x28
        var_fc = 0
        int32_t var_d0_1 = 0
        void var_120
        Concurrency::details::GlobalCore::TopologyObject::TopologyObject(&var_120, &var_108)
        void var_b8
        sub_142a4cc30(arg1, &var_b8, 0x9d, &result_1)
        uint32_t result_2 = result_1
        
        if (result_2 == 0xffffff84 || result_2 == 0xf)
            result_1 = 1
        else if (result_2 s<= 0)
            sub_142a4e960(&var_b8, &var_120, &result_1)
        
        sub_142a8cff0(&var_120)
        result = result_1
        
        if (result s> 0 || result == 0xffffff84)
        label_142a4feab:
            
            if (var_fc.b == 0)
                result.b = 0
            else
                sub_142a7dcd0(var_108)
                result.b = 0
        else
            result = sub_142a4d690(var_108, &var_c8, 8, &result_1)
            uint32_t result_4 = result_1
            
            if (result_4 s> 0 || result_4 == 0xffffff84 || result == 0)
                goto label_142a4feab
            
            if (var_fc.b != 0)
                sub_142a7dcd0(var_108)
            
            result = sub_142a95180(j_sub_142a94e30(0x100a, &var_c8))
    else
        char* rax_4 = strstr("root-en-es-pt-zh-ja-ko-de-fr-it-ar+he+fa+ru-nl-pl-th-tr-", &str2)
        
        if (rax_4 == 0)
            goto label_142a4fdcc
        
        result = zx.d(rax_4[rbx_1])
        
        if (result.b == 0x2b)
            result.b = 1
        else
            if (result.b != 0x2d)
                goto label_142a4fdcc
            
            result.b = 0
else
    result = sub_142a95180(j_sub_142a94e30(0x100a, &var_c8))

__security_check_cookie(rax_1 ^ &var_148)
return result
