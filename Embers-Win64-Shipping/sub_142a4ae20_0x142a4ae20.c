// 函数: sub_142a4ae20
// 地址: 0x142a4ae20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_488
int64_t rax_1 = __security_cookie ^ &var_488
uint64_t result = zx.q(*(arg1 + 8))
uint64_t rdi_1

if (result.w s< 0)
    rdi_1 = zx.q(*(arg1 + 0xc))
else
    rdi_1 = zx.q(sx.d(result.w) s>> 5)

if (rdi_1.d != 0)
    int64_t rax_2 = *arg2
    uint64_t rdx = 0x400
    int32_t var_440
    int32_t* var_460_1 = &var_440
    int64_t rbp
    rbp.b = 0
    var_440 = 0x400
    
    if (rdi_1.d s< 0x400)
        rdx = zx.q(rdi_1.d)
    
    void var_438
    char* result_2 = (*(rax_2 + 0x10))(arg2, rdx, zx.q((rdi_1 * 3).d), &var_438, 0x400, var_460_1)
    char rax_4 = (*(arg1 + 8)).b
    int32_t var_444 = 0
    int32_t result_1 = 0
    int16_t* r9_2
    
    if ((rax_4 & 0x11) == 0)
        r9_2 = arg1 + 0xa
        
        if ((rax_4 & 2) == 0)
            r9_2 = *(arg1 + 0x18)
    else
        r9_2 = nullptr
    
    var_460_1.d = 0xfffd
    sub_142a8e1d0(result_2, var_440, &var_444, r9_2, rdi_1.d, var_460_1.d, nullptr, &result_1)
    result = zx.q(result_1)
    
    if (result.d != 0xf)
    label_142a4af74:
        
        if (result.d s<= 0)
            (*(*arg2 + 8))(arg2, result_2, zx.q(var_444))
            result = (*(*arg2 + 0x18))(arg2)
        
        if (rbp.b != 0)
            result = sub_142a7dcd0(result_2)
    else
        result = sub_142a7dd00(sx.q(var_444))
        result_2 = result
        
        if (result != 0)
            char rax_5 = (*(arg1 + 8)).b
            rbp.b = 1
            result_1 = 0
            void* r9_3
            
            if ((rax_5 & 0x11) == 0)
                r9_3 = arg1 + 0xa
                
                if ((rax_5 & 2) == 0)
                    r9_3 = *(arg1 + 0x18)
            else
                r9_3 = nullptr
            
            var_460_1.d = 0xfffd
            sub_142a8e1d0(result_2, var_444, &var_444, r9_3, rdi_1.d, var_460_1.d, nullptr, 
                &result_1)
            result = zx.q(result_1)
            goto label_142a4af74

__security_check_cookie(rax_1 ^ &var_488)
return result
