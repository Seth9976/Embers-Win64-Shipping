// 函数: sub_142bb9f50
// 地址: 0x142bb9f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_7d8
int64_t rax_1 = __security_cookie ^ &var_7d8
void* rbp = *(arg1 + 0x2a0)
int64_t (* var_798)(void* arg1, int32_t arg2) = sub_142bbac80
int32_t i = 0
*arg2 = 0
void var_768
int32_t result =
    (**(rbp + 0x18))(&var_768, arg1, 0, 0, *(arg1 + 0x248), *(arg1 + 0x2e0), 0, 0, var_798)

if (result == 0)
    int32_t var_f4_1 = *(arg1 + 0x220)
    int64_t var_f0_1 = *(arg1 + 0x228)
    int64_t var_e8_1 = *(arg1 + 0x230)
    int64_t var_e0_1 = *(arg1 + 0x238)
    int64_t var_48_1 = *(arg1 + 0x2f8)
    int32_t rax_9 = *(arg1 + 0x2f0)
    *arg2 = 0
    char var_70a_1 = 1
    char var_70c_1 = 0
    int32_t var_40_1 = rax_9
    
    if (*(arg1 + 0x240) s> 0)
        do
            char var_788 = 0
            void var_780
            
            if (sub_142bbace0(&var_768, i, &var_780, &var_788) == 0)
                void* var_760
                int64_t* rcx_3 = *(*(var_760 + 0xd0) + 0x50)
                
                if (rcx_3 != 0)
                    (*(*rcx_3 + 8))(rcx_3[1], &var_780)
            
            int32_t var_728
            
            if (i == 0 || var_728 s> *arg2)
                *arg2 = var_728
            
            i += 1
        while (i s< *(arg1 + 0x240))
    
    (*(*(rbp + 0x18) + 8))(&var_768)
    result = 0

__security_check_cookie(rax_1 ^ &var_7d8)
return result
