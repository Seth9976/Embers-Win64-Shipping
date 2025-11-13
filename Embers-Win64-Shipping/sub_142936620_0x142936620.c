// 函数: sub_142936620
// 地址: 0x142936620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xa0)
void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int32_t* result_2 = nullptr
int64_t rcx = 0
int32_t* result

while (true)
    char rax_2 = arg3[rcx]
    rcx += 1
    
    if (rax_2 != data_143539b18[0x17][rcx])
        int32_t* result_3 = sub_1428c35d0()
        
        if (result_3 != 0)
            int32_t var_80
            char* rax_8 = sub_1428a6e90(arg3, &var_80)
            *(result_3 + 8) = rax_8
            
            if (rax_8 != 0)
                result_2 = result_3
                *result_3 = var_80
            else
                sub_1428c3460(result_3)
        else
            sub_1428a5670((result_3 + 0x22).d, (&result_3[0x1c]).d, (result_3 + 0x41).d, 
                "crypto\x509v3\v3_skey.c", 0x28)
        
        result = result_2
        break
    
    if (rcx == 5)
        int32_t* result_1 = sub_1428c35d0()
        
        if (result_1 == 0)
            sub_1428a5670((result_1 + 0x22).d, (result_1 + 0x73).d, (result_1 + 0x41).d, 
                "crypto\x509v3\v3_skey.c", 0x45)
            result = nullptr
        else
            int32_t var_98_2
            int32_t r8_4
            
            if (arg2 == 0)
            label_14293675c:
                var_98_2 = 0x4d
            label_142936764:
                r8_4 = 0x72
            label_142936779:
                sub_1428a5670(0x22, 0x73, r8_4, "crypto\x509v3\v3_skey.c", var_98_2)
                sub_1428c3460(result_1)
                result = nullptr
            else if (*arg2 == 1)
                result = result_1
            else
                void* rax_3 = *(arg2 + 0x18)
                int64_t rax_5
                
                if (rax_3 != 0)
                    rax_5 = *(rax_3 + 0x20)
                else
                    void* rax_4 = *(arg2 + 0x10)
                    
                    if (rax_4 == 0)
                        goto label_14293675c
                    
                    rax_5 = *(rax_4 + 0x50)
                
                if (rax_5 == 0)
                    var_98_2 = 0x57
                    goto label_142936764
                
                int32_t var_98
                var_98.q = rax_5
                int32_t var_88
                int64_t var_78
                sub_1428a2700(nullptr, &var_78, &var_88, nullptr, var_98)
                var_98.q = &data_1434e9110
                int32_t var_84
                void var_68
                
                if (sub_142891710(var_78, sx.q(var_88), &var_68, &var_84, var_98, nullptr) == 0)
                    sub_1428c3460(result_1)
                    result = nullptr
                else
                    int32_t rax_7 = sub_1428e61a0(result_1, &var_68, var_84)
                    
                    if (rax_7 == 0)
                        var_98_2 = 0x61
                        r8_4 = rax_7 + 0x41
                        goto label_142936779
                    
                    result = result_1
        
        break

__security_check_cookie(rax_1 ^ &var_b8)
return result
