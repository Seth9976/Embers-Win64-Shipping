// 函数: sub_1429daf40
// 地址: 0x1429daf40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
uint64_t rsi = zx.q(arg2)
int32_t result_1 = 0
void* rdx = arg1
uint64_t result

if (rdx + rsi u> rdx)
    if (arg4 != 0)
        uint64_t r9 = zx.q(rsi.d)
        
        if (rsi.d u> 0xa)
            r9 = 0xa
        
        void var_38
        arg4(arg6, arg5, &var_38, r9)
        rdx = &var_38
    
    *(arg3 + 0xc) = 0
    
    if (rsi.d u< 0xa || (*rdx & 1) != 0)
        result = 5
    else
        *(arg3 + 0xc) = 1
        
        if (*(rdx + 3) != 0x9d || *(rdx + 4) != 1 || *(rdx + 5) != 0x2a)
            result = 5
        else
            int32_t r8_4 = (zx.d(*(rdx + 7)) << 8 | zx.d(*(rdx + 6))) & 0x3fff
            *(arg3 + 4) = r8_4
            int32_t rcx_4 = (zx.d(*(rdx + 9)) << 8 | zx.d(*(rdx + 8))) & 0x3fff
            *(arg3 + 8) = rcx_4
            
            if (rcx_4 == 0 || r8_4 == 0)
                result_1 = 7
            
            result = zx.q(result_1)
else
    result = 8

__security_check_cookie(rax_1 ^ &var_58)
return result
