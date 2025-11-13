// 函数: sub_142b03dc0
// 地址: 0x142b03dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
void* rbp = *(arg1 + 8)
char var_38
char* rcx = &var_38
void* rsi = *(rbp + 0x10)
char* rdx = *(rbp + 0x28)
int32_t r9 = sx.d(*(rbp + 0x59))
int32_t r8 = sx.d(*(rsi + 0x8f))
void* result
void var_37

if (r8 == 0x63)
    if (*(rsi + 0x66) == 0)
        goto label_142b03f61
    
    *(rsi + 0x66) = 0
label_142b03f54:
    var_38 = 0xf
    rcx = &var_37
label_142b03f61:
    *rcx = *rdx
    result = sub_142b6b230(arg1, &var_38, (&rcx[1]).d - &var_38, arg2, arg3)
else
    if (r8 == 0x6a)
        if (*(rsi + 0x66) == 1)
            *(rsi + 0x66) = 0
            rcx = &var_37
            var_38 = 0xf
        
        char rax_12 = *(rsi + 0x62)
        
        if (rax_12 != 0 && rax_12 != 3)
            *(rsi + 0x62) = 0
            *rcx = 0x281b
            rcx[2] = 0x42
            rcx = &rcx[3]
        
        goto label_142b03f61
    
    if (r8 != 0x6b)
        result = sub_142b6b230(arg1, &var_38, rcx.d - &var_38, arg2, arg3)
    else if (*(rsi + 0x6c) != 0)
        void* rax_4 = *(rsi + 0x50)
        int64_t rbx_1 = *(rax_4 + 0x28)
        char rdi_1 = *(rax_4 + 0x59)
        *(rax_4 + 0x28) = rdx
        *(*(rsi + 0x50) + 0x59) = r9.b
        *(arg1 + 8) = *(rsi + 0x50)
        *(*(rsi + 0x50) + 0x54) = *(rbp + 0x54)
        sub_142b6b270(arg1, 0, arg3)
        *(rbp + 0x54) = *(*(rsi + 0x50) + 0x54)
        *(arg1 + 8) = rbp
        *(*(rsi + 0x50) + 0x28) = rbx_1
        result = *(rsi + 0x50)
        *(result + 0x59) = rdi_1
        
        if (*arg3 == 0xf)
            void* rdx_1 = *(rsi + 0x50)
            char rax_10 = *(rdx_1 + 0x5b)
            
            if (rax_10 s> 0)
                memcpy(rbp + 0x68, rdx_1 + 0x68, sx.d(rax_10))
            
            *(rbp + 0x5b) = *(*(rsi + 0x50) + 0x5b)
            result = *(rsi + 0x50)
            *(result + 0x5b) = 0
    else
        if (r9 == r8 - 0x6a)
            if (*(rbp + 0x50) == 0)
                goto label_142b03f61
            
            *(rbp + 0x50) = 0
            goto label_142b03f54
        
        if (*(rbp + 0x50) == 0)
            *(rbp + 0x50) = 1
            rcx = &var_37
            var_38 = 0xe
        
        *rcx = *rdx
        rcx[1] = rdx[1]
        result = sub_142b6b230(arg1, &var_38, (&rcx[2]).d - &var_38, arg2, arg3)
__security_check_cookie(rax_1 ^ &var_68)
return result
