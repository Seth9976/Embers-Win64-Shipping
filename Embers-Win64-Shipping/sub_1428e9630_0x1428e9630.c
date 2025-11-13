// 函数: sub_1428e9630
// 地址: 0x1428e9630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)
void var_58
int64_t rax_1 = __security_cookie ^ &var_58
int32_t* result_1 = nullptr
char* rbp = arg1
char* rax_2 = strchr(arg1, 0x2f)
int32_t* result

if (rax_2 == 0)
    result = nullptr
else
    char* rax_3 = sub_1428a6ba0(rbp)
    char* rdi_1 = rax_3
    
    if (rax_3 == 0)
        result = nullptr
    else
        void* rsi_1 = rax_2 + rax_3 - rbp
        *rsi_1 = 0
        void var_38
        int32_t rax_5 = sub_1428e9750(&var_38, rdi_1)
        int64_t rbp_1 = sx.q(rax_5)
        
        if (rax_5 == 0)
        label_1428e971b:
            sub_1428a6780(rdi_1)
            sub_1428c3460(result_1)
            result = nullptr
        else
            int32_t rax_6 = sub_1428e9750(&var_38 + rbp_1, rsi_1 + 1)
            sub_1428a6780(rdi_1)
            rdi_1 = nullptr
            
            if (rax_6 == 0 || rbp_1.d != rax_6)
                goto label_1428e971b
            
            int32_t* result_2 = sub_1428c35d0()
            result_1 = result_2
            
            if (result_2 == 0)
                goto label_1428e971b
            
            if (sub_1428e61a0(result_2, &var_38, rax_6 + rbp_1.d) == 0)
                goto label_1428e971b
            
            result = result_1

__security_check_cookie(rax_1 ^ &var_58)
return result
