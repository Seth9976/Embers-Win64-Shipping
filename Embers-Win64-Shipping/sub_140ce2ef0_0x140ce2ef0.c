// 函数: sub_140ce2ef0
// 地址: 0x140ce2ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_458
int64_t rax_1 = __security_cookie ^ &var_458
int16_t* var_428 = arg1
int16_t var_418[0x100]
int64_t result = sub_140b297e0(&var_428, &var_418, 0x100, 1)

if (result.b != 0)
    void var_218
    result = sub_140b297e0(&var_428, &var_218, 0x100, 1)
    
    if (result.b != 0)
        void* rax_3 = sub_140d2ee50(sub_140bdf2e0(), -ffffffffffffffff, &var_418, 0)
        int64_t var_420
        
        if (rax_3 == 0)
            result = sub_140d2ee50(sub_140d41340(), -ffffffffffffffff, &var_418, 0)
            int64_t result_1 = result
            
            if (result != 0)
                void* rbx_2 = *(result + 0x10)
                sub_140b58260(&var_420, &var_218, 0)
                result = sub_140bd3220(rbx_2, var_420)
                
                if (result != 0)
                    int16_t* rdx_7 = var_428
                    
                    while (*rdx_7 == 0x20)
                        rdx_7 = &rdx_7[1]
                        var_428 = rdx_7
                    
                    result = sub_140941070(result, rdx_7, sx.q(*(result + 0x4c)) + result_1, 0, 
                        result_1, data_143ddb418)
        else
            sub_140b58260(&var_420, &var_218, 0)
            result = sub_140bd3220(rax_3, var_420)
            
            if (result != 0)
                int16_t* rcx_5 = var_428
                
                while (*rcx_5 == 0x20)
                    rcx_5 = &rcx_5[1]
                    var_428 = rcx_5
                
                result = sub_140d22730(rcx_5, rax_3, result)

__security_check_cookie(rax_1 ^ &var_458)
return result
