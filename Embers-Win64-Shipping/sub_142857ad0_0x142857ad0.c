// 函数: sub_142857ad0
// 地址: 0x142857ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x220)
void var_248
int64_t rax_1 = __security_cookie ^ &var_248
void* rbp = *(arg1 + 0x738)
int64_t* result_1 = nullptr

if ((*(rbp + 0x48) & 0x100) != 0)
    goto label_142857ba8

int32_t var_218 = *arg1
int64_t* result

if (arg3 u<= 0x20)
    void var_180
    memcpy(&var_180, arg2, arg3.d)
    int64_t var_188_1 = arg3
    sub_1428a5c40(*(rbp + 0x378))
    int64_t* result_2 = sub_1428a8d10(*(*(arg1 + 0x738) + 0x28), &var_218)
    result_1 = result_2
    
    if (result_2 != 0)
        *(result_2 + 0x114)
        *(result_2 + 0x114) += 1
    
    sub_1428a5d00(*(*(arg1 + 0x738) + 0x378))
    
    if (result_1 != 0)
        result = result_1
    else
        void* rcx_6 = *(arg1 + 0x738)
        *(rcx_6 + 0x80)
        *(rcx_6 + 0x80) += 1
        rbp = *(arg1 + 0x738)
    label_142857ba8:
        int64_t rax_5 = *(rbp + 0x60)
        
        if (rax_5 != 0)
            int32_t var_228 = 1
            int64_t* result_3 = rax_5(arg1, arg2, zx.q(arg3.d), &var_228, var_228)
            result_1 = result_3
            
            if (result_3 != 0)
                void* rcx_8 = *(arg1 + 0x738)
                *(rcx_8 + 0x90)
                *(rcx_8 + 0x90) += 1
                
                if (var_228 != 0)
                    *(result_1 + 0x114)
                    *(result_1 + 0x114) += 1
                
                int64_t* rcx_9 = *(arg1 + 0x738)
                
                if ((rcx_9[9].d & 0x200) == 0)
                    sub_142857200(rcx_9, result_1)
        
        result = result_1
else
    result = nullptr

__security_check_cookie(rax_1 ^ &var_248)
return result
