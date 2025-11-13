// 函数: sub_142a9d4f0
// 地址: 0x142a9d4f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_238 = -2
void var_258
int64_t rax_1 = __security_cookie ^ &var_258
int32_t* rdi = arg2
int64_t* result_1 = sub_142aa6ac0(arg2)
int64_t* result

if (*rdi s<= 0)
    char* rdx = *(arg1 + 0x28)
    
    if (*rdx == 0)
    label_142a9d5d4:
        sub_142aa6d40(result_1)
    else
        int64_t rax_3 = 0
        
        while (true)
            char rcx_1 = rdx[rax_3]
            rax_3 += 1
            
            if (rcx_1 != *(rax_3 + 0x143613e9b))
                *rdi = 0
                void var_228
                sub_142a9c240(&var_228, result_1, arg1, rdi)
                result_1 = sub_142a9c6c0(&var_228, rdi)
                void* var_20
                sub_142a5f860(var_20)
                void* var_28
                sub_142a5f860(var_28)
                void* var_30
                sub_142a5f860(var_30)
                struct icu_64::UObject::icu_64::Locale::VTable* var_138
                sub_142a45a20(&var_138)
                struct icu_64::UObject::icu_64::Locale::VTable* var_218
                sub_142a45a20(&var_218)
                break
            
            if (rax_3 == 5)
                goto label_142a9d5d4
    
    result = result_1
else
    result = nullptr

__security_check_cookie(rax_1 ^ &var_258)
return result
