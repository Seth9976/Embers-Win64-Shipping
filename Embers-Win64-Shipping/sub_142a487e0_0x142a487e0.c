// 函数: sub_142a487e0
// 地址: 0x142a487e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int32_t rsi = arg3
int32_t rbp = arg2
int32_t r12 = 0x1b

if (arg2 == 0xffffffff)
    rbp = 0x1b
    
    if ((*(arg1 + 8) & 2) == 0)
        rbp = *(arg1 + 0x10)

uint64_t result = zx.q(*(arg1 + 8))

if ((result.b & 0x11) != 0)
    result.b = 0
else if (arg6 != 0 || (result.b & 8) != 0 || ((result.b & 4) != 0 && *(*(arg1 + 0x18) - 4) s> 1))
label_142a4888a:
    
    if (rsi s< 0)
        rsi = rbp
    else if (rbp s<= 0x1b && rsi s> 0x1b)
        rsi = 0x1b
    
    int16_t r15_1 = *(arg1 + 8)
    int32_t rdi_2
    
    if (r15_1 s< 0)
        rdi_2 = *(arg1 + 0xc)
    else
        rdi_2 = sx.d(r15_1) s>> 5
    
    int16_t r13_1 = r15_1 & 2
    void* r14_1
    
    if (r13_1 == 0)
        r14_1 = *(arg1 + 0x18)
    else if (arg4 == 0 || rsi s<= 0x1b)
        r14_1 = nullptr
    else
        void var_78
        
        if (rdi_2 s> 0)
            memmove(&var_78, arg1 + 0xa, rdi_2 * 2)
        
        r14_1 = &var_78
    
    result = sub_142a48460(arg1, rsi)
    
    if (result.b != 0)
    label_142a48934:
        
        if (arg4 == 0)
            *(arg1 + 8) &= 0x1f
        else
            result.w = *(arg1 + 8) & 2
            
            if (result.w == 0)
                r12 = *(arg1 + 0x10)
            
            if (r12 s< rdi_2)
                rdi_2 = r12
            
            if (r14_1 != 0)
                void* rcx_4 = arg1 + 0xa
                
                if (result.w == 0)
                    rcx_4 = *(arg1 + 0x18)
                
                if (rdi_2 s> 0)
                    memmove(rcx_4, r14_1, rdi_2 * 2)
            
            if (rdi_2 s> 0x3ff)
                *(arg1 + 8) |= 0xffe0
                *(arg1 + 0xc) = rdi_2
            else
                *(arg1 + 8) &= 0x1f
                rdi_2.w <<= 5
                *(arg1 + 8) |= rdi_2.w
        
        if ((r15_1.b & 4) == 0)
            result.b = 1
        else
            int32_t rax_5 = *(r14_1 - 4)
            *(r14_1 - 4) -= 1
            
            if (rax_5 == 1)
                if (arg5 != 0)
                    *arg5 = r14_1 - 4
                else
                    sub_142a7dcd0(r14_1 - 4)
            
            result.b = 1
    else
        if (rbp s< rsi)
            result = sub_142a48460(arg1, rbp)
        
        if (rbp s< rsi && result.b != 0)
            goto label_142a48934
        
        if (r13_1 == 0)
            *(arg1 + 0x18) = r14_1
        
        *(arg1 + 8) = r15_1
        sub_142a4ab40(arg1)
        result.b = 0
else
    result = 0x1b
    
    if ((*(arg1 + 8) & 2) == 0)
        result = zx.q(*(arg1 + 0x10))
    
    if (rbp s> result.d)
        goto label_142a4888a
    
    result.b = 1

__security_check_cookie(rax_1 ^ &var_a8)
return result
