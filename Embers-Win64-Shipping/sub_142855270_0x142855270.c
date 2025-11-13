// 函数: sub_142855270
// 地址: 0x142855270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x60)
void var_68
int64_t rax_1 = __security_cookie ^ &var_68
*arg2 = 0x73
int64_t rax_2 = *(arg1 + 0x788)
int32_t result

if (rax_2 != 0)
    result = rax_2(arg1, arg3, *(arg1 + 0x780))

if (rax_2 == 0 || result == 0)
    *arg2 = 0x50
    char var_48[0x30]
    int32_t rax_3
    
    if (*(arg1 + 0x7a8) != 0 && *(arg1 + 0x7b0) != 0 && *(arg1 + 0x7b8) != 0
            && *(arg1 + 0x7e0) != 0)
        rax_3 = sub_142897c20(&var_48, 0x30)
    
    if (*(arg1 + 0x7a8) == 0 || *(arg1 + 0x7b0) == 0 || *(arg1 + 0x7b8) == 0 || *(arg1 + 0x7e0) == 0
            || rax_3 s<= 0)
        result = 2
    else
        *(arg1 + 0x7d8) = sub_14288fa60(&var_48, 0x30, nullptr)
        sub_1428b8960(&var_48, 0x30)
        int64_t* rax_5 =
            sub_1428b8a30(*(arg1 + 0x7d8), *(arg1 + 0x7a8), *(arg1 + 0x7b0), *(arg1 + 0x7e0))
        *(arg1 + 0x7c0) = rax_5
        int32_t result_1 = 2
        
        if (rax_5 != 0)
            result_1 = 0
        
        result = result_1

__security_check_cookie(rax_1 ^ &var_68)
return result
