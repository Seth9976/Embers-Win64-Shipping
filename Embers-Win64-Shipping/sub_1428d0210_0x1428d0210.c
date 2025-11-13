// 函数: sub_1428d0210
// 地址: 0x1428d0210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

__chkstk(0x58)
void var_88
uint64_t var_40_1 = __security_cookie ^ &var_88
int64_t i_5 = arg3
int64_t* rsi_1 = arg2
int64_t* rbx_1 = arg1
int64_t var_50
uint64_t rax

if (arg1 != arg2)
    int64_t* r15_1 = arg5
    
    if (arg3 u>= 0x10)
        uint64_t i_3 = arg3 u>> 4
        i_5 -= i_3 * 0x10
        uint64_t i
        
        do
            arg6(rbx_1, rsi_1, arg4)
            *rsi_1 ^= *r15_1
            rax = r15_1[1]
            r15_1 = rbx_1
            rsi_1[1] ^= rax
            rbx_1 = &rbx_1[2]
            rsi_1 = &rsi_1[2]
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    *arg5 = *r15_1
else if (i_5 u>= 0x10)
    uint64_t i_4 = i_5 u>> 4
    i_5 -= i_4 * 0x10
    uint64_t i_1
    
    do
        arg6(rbx_1, &var_50, arg4)
        int64_t rcx_2 = *rbx_1
        *rsi_1 = *arg5 ^ var_50
        int64_t var_48
        rax = *(arg5 + 8) ^ var_48
        *arg5 = rcx_2
        int64_t rcx_3 = rbx_1[1]
        rbx_1 = &rbx_1[2]
        rsi_1[1] = rax
        rsi_1 = &rsi_1[2]
        *(arg5 + 8) = rcx_3
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)

if (i_5 != 0)
    char* rax_9 = arg5 - &var_50
    void* rsi_2 = rsi_1 + 1
    int64_t r15_2 = neg.q(&var_50:1)
    int64_t i_2
    
    do
        arg6(rbx_1, &var_50, arg4)
        rax = 0
        
        while (rax u< i_5)
            char* r8_3 = &var_50 + rax
            char rdx_3 = *(r8_3 + rbx_1 + r15_2 + 1)
            *(r8_3 + r15_2 + rsi_2) = *r8_3 ^ *(rax_9 + r8_3)
            *(rax_9 + r8_3) = rdx_3
            
            if (1 - &var_50 + r8_3 u>= i_5)
                rax += 1
                break
            
            char rdx_4 = *(rax + rbx_1 + 1)
            *(rsi_2 + rax) = r8_3[1] ^ *(arg5 + rax + 1)
            *(arg5 + rax + 1) = rdx_4
            
            if (2 - &var_50 + r8_3 u>= i_5)
                rax += 2
                break
            
            char rdx_5 = *(rbx_1 + rax + 2)
            *(rsi_2 + rax + 1) = r8_3[2] ^ *(arg5 + rax + 2)
            *(arg5 + rax + 2) = rdx_5
            
            if (r8_3 + 3 - &var_50 u>= i_5)
                rax += 3
                break
            
            char rdx_6 = *(rbx_1 + rax + 3)
            *(rsi_2 + rax + 2) = r8_3[3] ^ *(arg5 + rax + 3)
            *(arg5 + rax + 3) = rdx_6
            rax += 4
            
            if (rax u>= 0x10)
                break
        
        if (i_5 u<= 0x10)
            if (rax u< 0x10)
                char* rcx_15 = arg5 + rax
                int64_t j_1 = 0x10 - rax
                int64_t j
                
                do
                    *rcx_15 = *(rbx_1 - arg5 + rcx_15)
                    rcx_15 = &rcx_15[1]
                    j = j_1
                    j_1 -= 1
                while (j != 1)
            
            break
        
        rbx_1 = &rbx_1[2]
        rsi_2 += 0x10
        i_2 = i_5
        i_5 -= 0x10
    while (i_2 != 0x10)

__security_check_cookie(var_40_1 ^ &var_88)
