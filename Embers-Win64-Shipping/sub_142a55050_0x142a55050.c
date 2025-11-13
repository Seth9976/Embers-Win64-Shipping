// 函数: sub_142a55050
// 地址: 0x142a55050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_330 = -2
void var_368
int64_t rax_1 = __security_cookie ^ &var_368
char var_348 = 0
int16_t var_347 = 0
char var_345 = 0
int16_t var_31c
void* var_328 = &var_31c:1
int32_t var_320 = 0x28
var_31c = 0
struct icu_64::BreakIterator::icu_64::RuleBasedBreakIterator::VTable** result_1 = nullptr
int32_t var_2f0 = 0
char* var_2e8
char** r13 = &var_2e8
char* var_218
char** r12 = &var_218
struct icu_64::BreakIterator::icu_64::RuleBasedBreakIterator::VTable** result

if (*arg3 s<= 0)
    sub_142a63fc0(&var_2e8)
    sub_142a63fc0(&var_218)
    char** rax_2 = sub_142a64190("icudt64l-brkitr", *(arg1 + 0x28), arg3)
    char var_148[0x100]
    
    if (*arg3 s<= 0)
        char** rax_3 = sub_142a62230(rax_2, "boundaries", &var_2e8, arg3)
        r13 = rax_3
        char** rax_4 = sub_142a62230(rax_3, arg2, &var_218, arg3)
        r12 = rax_4
        int32_t var_344
        void* rax_5 = sub_142a63f30(rax_4, &var_344, arg3)
        
        if (sx.q(var_344) u>= 0x100)
            var_344 = 0
            
            if (*arg3 s<= 0)
                *arg3 = 0xf
        else if (*arg3 s<= 0 && rax_5 != 0)
            sub_142a8cbd0(&var_328, sub_142a637e0(r12, arg3), 0xffffffff, arg3)
            int16_t* rax_7 = sub_142a8c220(rax_5, 0x2e)
            int32_t rbx_1 = 0
            
            if (rax_7 != 0)
                rbx_1 = ((rax_7 - rax_5) s>> 1).d
                sub_142a8d6e0(&rax_7[1], &var_348, 4)
                sub_142a8d6e0(rax_5, &var_148, rbx_1)
            
            int64_t rax_8 = sx.q(rbx_1)
            
            if (rax_8 u>= 0x100)
                __report_rangecheckfailure()
                noreturn
            
            var_148[rax_8] = 0
    
    sub_142a5f860(r13)
    sub_142a5f860(r12)
    void* rax_9 = sub_142a7f8f0("icudt64l-brkitr", &var_348, &var_148, arg3)
    
    if (*arg3 s<= 0)
        struct icu_64::UObject::icu_64::BreakIterator::VTable** rax_10 = j_sub_142a7dd00(0x280)
        void* var_340 = rax_10
        
        if (rax_10 != 0)
            result_1 = sub_142a96050(rax_10, rax_9, arg3)
        
        if (*arg3 s<= 0 && result_1 != 0)
            var_340 = result_1 + 0xa5
            void* var_338_1 = &result_1[1]
            sub_142a9ba50(&var_340, sub_142a637a0(rax_2, 1, arg3), var_328)
        
        sub_142a5f860(rax_2)
        
        if (*arg3 s<= 0)
            if (result_1 == 0)
            label_142a552fa:
                sub_142a95ec0(rax_9)
                
                if (*arg3 s<= 0)
                    *arg3 = 7
                
                goto label_142a5530f
            
        label_142a5530f:
            
            if (var_31c.b != 0)
                sub_142a7dcd0(var_328)
            
            result = result_1
        else
            if (result_1 == 0)
                goto label_142a552fa
            
            (*result_1)->__offset(0x0).q(result_1, 1)
            
            if (var_31c.b == 0)
                result = nullptr
            else
                sub_142a7dcd0(var_328)
                result = nullptr
    else
        sub_142a5f860(rax_2)
        
        if (var_31c.b != 0)
            sub_142a7dcd0(var_328)
        
        result = nullptr
else
    result = nullptr

__security_check_cookie(rax_1 ^ &var_368)
return result
