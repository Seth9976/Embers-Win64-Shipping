// 函数: sub_142bb33c0
// 地址: 0x142bb33c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
uint64_t r11 = zx.q(*(arg1 + 0x434))
int32_t i_1 = 0
int32_t rsi = 0
int32_t i = 0
uint64_t result

if (r11.d == 0)
    result = 0
else
    uint32_t rbx_1 = *(arg1 + 0x400)
    uint64_t r14_1 = 0
    int32_t r15_1 = 0
    
    do
        uint32_t rax_5 = 0
        uint32_t r9_1 = 0
        
        if (i u>= r11.d)
            goto label_142bb34fc
        
        int64_t r8_1 = *(arg1 + 0x438)
        
        if (*(arg1 + 0x132) == 0)
            uint32_t r9_10 = zx.d(*(r14_1 + r8_1)) << 8 | zx.d(*(r14_1 + r8_1 + 1))
            void* rdi_3 = r8_1 + 4 + zx.q(r14_1.d)
            uint32_t rax_13 = r9_10
            
            if (rdi_3 u<= zx.q((r11 * 2).d) + r8_1)
                rax_13 = zx.d(*(rdi_3 - 2)) << 8 | zx.d(*(rdi_3 - 1))
            
            r9_1 = r9_10 * 2
            rax_5 = rax_13 * 2
        else
            char* rcx_1 = zx.q(r15_1) + r8_1
            r9_1 =
                ((zx.d(*rcx_1) << 8 | zx.d(rcx_1[1])) << 8 | zx.d(rcx_1[2])) << 8 | zx.d(rcx_1[3])
            rax_5 = r9_1
            
            if (&rcx_1[8] u<= zx.q((r11 << 2).d) + r8_1)
                rax_5 = ((zx.d(rcx_1[4]) << 8 | zx.d(rcx_1[5])) << 8 | zx.d(rcx_1[6])) << 8
                    | zx.d(rcx_1[7])
        
        if (r9_1 u<= rbx_1)
            if (rax_5 u<= rbx_1)
                goto label_142bb34f5
            
            if (i == (r11 - 2).d)
                rax_5 = rbx_1
            label_142bb34f5:
                
                if (rax_5 u< r9_1)
                    rax_5 = rbx_1
                
            label_142bb34fc:
                
                if (rax_5 - r9_1 != 0)
                    rsi += 1
                    
                    if (rsi u> 1)
                        break
                    
                    i_1 = i
        
        i += 1
        r15_1 += 4
        r14_1 = zx.q(r14_1.d + 2)
    while (i u< r11.d)
    
    if (rsi != 1)
        result = 0
    else if (i_1 != 0)
        char _Str1
        int32_t rax_18 = sub_142b92050(arg1, i_1, &_Str1, 8)
        
        if (rax_18 != 0 || _Str1 != 0x2e)
            result = 0
        else
            char result_1 = 0
            
            if (strncmp(&_Str1, ".notdef", zx.q(rax_18 + 8)) == 0)
                result_1 = 1
            
            result = zx.q(result_1)
    else
        result = zx.q(rsi.b)

__security_check_cookie(rax_1 ^ &var_58)
return result
