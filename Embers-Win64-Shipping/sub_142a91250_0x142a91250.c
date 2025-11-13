// 函数: sub_142a91250
// 地址: 0x142a91250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_318
int64_t rax_1 = __security_cookie ^ &var_318
int64_t rsi = sx.q(arg5)
int32_t rbp = arg7
void* result

if (*arg9 s> 0)
    result = nullptr
else if (rsi.d s< 0)
    *arg9 = 1
    result = nullptr
else if (arg4 != 0)
    if (arg6 != 0 && rbp s>= 0xffffffff)
        goto label_142a912e0
    
    *arg9 = 1
    result = nullptr
else if (rsi.d s> 0 || arg6 == 0 || rbp s< 0xffffffff)
    *arg9 = 1
    result = nullptr
else
label_142a912e0:
    
    if (rbp == 0xffffffff)
        rbp = std::_WChar_traits<wchar_t>::length(arg6)
    
    void var_2b8
    void* result_1
    
    if (arg4 == 0)
    label_142a9136c:
        result_1 = arg4
    label_142a91398:
        int32_t rax_6 = arg8(zx.q(arg1), zx.q(arg2), arg3, result_1, rsi.d, arg6, rbp, 0, arg9)
        
        if (result_1 != arg4)
            if (*arg9 s<= 0 && rax_6 s> 0 && rax_6 s<= rsi.d)
                sub_142a8bcd0(arg4, result_1, rax_6)
            
            if (result_1 != &var_2b8)
                sub_142a7dcd0(result_1)
        
        result = sub_142a8c440(arg4, rsi.d, rax_6, arg9)
    else
        if (arg4 u> arg6)
            if (arg4 u>= arg6 + (sx.q(rbp) << 1))
                goto label_142a9136c
        else if (arg6 u>= arg4 + (rsi << 1) && (arg4 u< arg6 || arg4 u>= arg6 + (sx.q(rbp) << 1)))
            goto label_142a9136c
        
        if (rsi.d s<= 0x12c)
            result_1 = &var_2b8
            goto label_142a91398
        
        result = sub_142a7dd00(sx.q((rsi * 2).d))
        result_1 = result
        
        if (result != 0)
            goto label_142a91398
        
        *arg9 = 7

__security_check_cookie(rax_1 ^ &var_318)
return result
