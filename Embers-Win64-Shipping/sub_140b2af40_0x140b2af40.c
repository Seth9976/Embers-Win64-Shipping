// 函数: sub_140b2af40
// 地址: 0x140b2af40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x2040)
void var_2058
int64_t rax_1 = __security_cookie ^ &var_2058
int64_t var_2028
memset(&var_2028, 0, 0x2000)
void* result

if (sub_140b2b020(arg1, arg2, &var_2028, 0x1000, 1).b == 0)
    result.b = 0
else
    int16_t r9_1 = var_2028.w
    result = nullptr
    *arg3 = 0
    int64_t rcx_2 = 0
    
    if (r9_1 == 0x2d)
        rcx_2 = 2
    
    void* r8_1 = &var_2028 + rcx_2
    int16_t i = *r8_1
    
    if (i u>= 0x30)
        while (i u<= 0x39)
            r8_1 += 2
            uint64_t i_1 = zx.q(i)
            i = *r8_1
            result = i_1 + *arg3 * 0xa - 0x30
            *arg3 = result
            
            if (i u< 0x30)
                break
    
    if (r9_1 == 0x2d)
        *arg3 = neg.q(result)
    
    result.b = 1

__security_check_cookie(rax_1 ^ &var_2058)
return result
