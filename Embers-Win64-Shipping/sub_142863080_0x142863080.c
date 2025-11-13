// 函数: sub_142863080
// 地址: 0x142863080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
void var_48
int64_t rax_1 = __security_cookie ^ &var_48
int64_t result

if (arg1 == 0 || *arg3 == 0x1e || arg2 s> 0x13)
label_142863140:
    result = 0
else
    int64_t rdi_1 = sx.q(arg2)
    char var_28[0x18]
    memcpy(&var_28, arg1, rdi_1.d)
    
    if (rdi_1 u>= 0x14)
        __report_rangecheckfailure()
        noreturn
    
    var_28[rdi_1] = 0
    int32_t rax_2 = sub_1428c0320(&var_28)
    int32_t rdx_1 = rax_2
    
    if (rax_2 != 0)
    label_142863113:
        int64_t r8_1 = *arg3
        int64_t rcx_4 = 0
        
        if (r8_1 != 0)
            void* rax_5 = &arg3[1]
            
            do
                if (*rax_5 == rdx_1)
                    goto label_142863140_1
                
                rcx_4 += 1
                rax_5 += 4
            while (rcx_4 u< r8_1)
        
        *(arg3 + (r8_1 << 2) + 8) = rdx_1
        result = 1
        *arg3 += 1
    else
        int32_t rax_3 = sub_1428a9c80(&var_28)
        rdx_1 = rax_3
        
        if (rax_3 != 0)
            goto label_142863113
        
        int32_t rax_4 = sub_1428a9380(&var_28)
        rdx_1 = rax_4
        
        if (rax_4 != 0)
            goto label_142863113
        
    label_142863140_1:
        result = 0

__security_check_cookie(rax_1 ^ &var_48)
return result
