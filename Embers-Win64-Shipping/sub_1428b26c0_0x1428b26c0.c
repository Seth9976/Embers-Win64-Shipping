// 函数: sub_1428b26c0
// 地址: 0x1428b26c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)
void var_68
int64_t rax_1 = __security_cookie ^ &var_68
int32_t var_38 = 0
uint64_t result

if (arg2 == 0)
    result = 0
else
    uint32_t rax_2 = sub_142890ed0(arg1)
    
    if (rax_2 u> 0x10)
        sub_1428bc530()
        noreturn
    
    void var_30
    int32_t result_1 = sub_1428cddf0(arg2, &var_38, &var_30, rax_2)
    
    if (result_1 != rax_2)
        result = 0xffffffff
    else
        int32_t rcx_2 = var_38
        int32_t rbx_2
        
        if (rcx_2 != 0x3a)
            if (rcx_2 == 0x78)
                rbx_2 = rcx_2 - 0x38
                goto label_1428b2762
            
            if (rcx_2 == 0xa0)
                rbx_2 = rcx_2 - 0x78
                goto label_1428b2762
            
            sub_1428a5670(6, 0x6d, 0x6c, "crypto\evp\e_rc2.c", 0x73)
            result = 0xffffffff
        else
            rbx_2 = rcx_2 + 0x46
        label_1428b2762:
            int32_t rax_3
            
            if (result_1 s> 0)
                int32_t var_48
                var_48.q = &var_30
                rax_3 = sub_142892480(arg1, nullptr, nullptr, 0, var_48, 0xffffffff)
            
            if (result_1 s> 0 && rax_3 == 0)
                result = 0xffffffff
            else
                sub_142892150(arg1)
                
                if (sub_142892370(arg1, rbx_2 u>> 3) s<= 0)
                    result = 0xffffffff
                else
                    result = zx.q(result_1)

__security_check_cookie(rax_1 ^ &var_68)
return result
