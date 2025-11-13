// 函数: sub_142c8e270
// 地址: 0x142c8e270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x48)
void var_58
int64_t rax_1 = __security_cookie ^ &var_58
int32_t* rsi = arg1
void* rdi = *(arg2 + 8)
void* result

if (*arg2 != 0)
    int32_t rax_2
    int32_t rbx_1
    int64_t* rdi_1
    
    if (*rdi == 0x14)
        rdi_1 = *(rdi + 8)
        rbx_1 = 0
        rax_2 = sub_142898c70(arg1)
    
    if (*rdi != 0x14 || rax_2 s<= 0)
    label_142c8e314:
        result = nullptr
    else
        while (true)
            void* result_1 = sub_142898ea0(rsi, rbx_1)
            int64_t var_38
            sub_1428a23a0(result_1, &data_1434e9110, &var_38, nullptr)
            int64_t var_30
            int32_t var_28
            
            if (*rdi_1 == var_38 && rdi_1[1] == var_30 && rdi_1[2].d == var_28)
                result = result_1
                break
            
            rbx_1 += 1
            
            if (rbx_1 s>= sub_142898c70(rsi))
                goto label_142c8e314
else
    result = sub_1428a37f0(arg1, rdi)

__security_check_cookie(rax_1 ^ &var_58)
return result
