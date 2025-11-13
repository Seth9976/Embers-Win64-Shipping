// 函数: sub_142aca7d0
// 地址: 0x142aca7d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int32_t rax_2 = *(arg2 + 8)
int32_t rbx = 0
int32_t r12 = *(arg2 + 8)
int32_t rdi = 0
int32_t rbp = -1
int32_t var_4c = 0xffffffff
int32_t r14 = -1
int32_t var_48 = 0xffffffff
int32_t rsi = 0
int32_t r15 = 0
int64_t var_40 = 0
int32_t var_38 = 0
int32_t var_50 = 0
int32_t rax_3 = sub_142a4a1f0(arg1)
int64_t r8 = sx.q(rax_2)

if (r8.d s< rax_3)
    int64_t r10_1 = r8
    int64_t r9 = 0
    
    while (r15 s<= arg5)
        int16_t rcx = *(arg1 + 8)
        int32_t rax_5
        
        if (rcx s< 0)
            rax_5 = *(arg1 + 0xc)
        else
            rax_5 = sx.d(rcx) s>> 5
        
        int16_t rcx_1
        
        if (r12 u>= rax_5)
            rcx_1 = -1
        else
            void* rax_6 = arg1 + 0xa
            
            if ((rcx.b & 2) == 0)
                rax_6 = *(arg1 + 0x18)
            
            rcx_1 = *(rax_6 + (r10_1 << 1))
        
        if (rcx_1 != arg3)
            int32_t r8_1 = *(&var_50 + r9)
            
            if (r8_1 == 0xffffffff)
                break
            
            if (rcx_1 - 0x30 u> 9)
                break
            
            uint32_t rdx = zx.d(rcx_1)
            
            if (rdx - 0x30 s< 0)
                break
            
            *(&var_40 + r9) = rdx - 0x30 + *(&var_40 + r9) * 0xa
            *(&var_50 + r9) = r8_1 + 1
            
            if (r8_1 + 1 s>= 2)
                r15 += 1
                r9 += 4
        else if (r15 != 0)
            if (*(&var_50 + r9) != 0xffffffff)
                break
            
            *(&var_50 + r9) = 0
        else if (var_50 == 0)
            break
        
        r12 += 1
        r10_1 += 1
        
        if (r10_1 s>= sx.q(rax_3))
            break
    
    rdi = var_38
    rsi = var_40:4.d
    rbx = var_40.d
    r14 = var_48
    rbp = var_4c
    r8 = zx.q(rax_2)

int32_t result_1 = 0
int32_t rcx_3 = 0
int32_t rax_13

if (var_50 == 0)
    rax_13 = -1
else if (rbx s<= 0x17)
    rcx_3 = var_50
    rax_13 = 0
    result_1 = rbx * 0x36ee80
    
    if (rbp == 2 && rsi s<= 0x3b)
        rcx_3 += 3
        result_1 += rsi * 0xea60
        rax_13 = rbp - 1
        
        if (r14 == rbp && rdi s<= 0x3b)
            result_1 += rdi * 0x3e8
            rax_13 = rbp
            rcx_3 += 3
else
    result_1 = rbx s/ 0xa * 0x36ee80
    rax_13 = 0
    rcx_3 = 1

uint64_t result

if (rax_13 s>= arg4)
    *(arg2 + 8) = rcx_3 + r8.d
    result = zx.q(result_1)
else
    *(arg2 + 0xc) = r8.d
    result = 0

__security_check_cookie(rax_1 ^ &var_88)
return result
