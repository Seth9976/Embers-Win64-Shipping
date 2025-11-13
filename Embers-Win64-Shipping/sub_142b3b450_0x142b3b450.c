// 函数: sub_142b3b450
// 地址: 0x142b3b450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int64_t rsi = sx.q(arg5)
void* r12 = nullptr
int64_t r14 = sx.q(arg2)
uint64_t result

if (rsi.d != 0)
    uint32_t rcx_2
    
    if (rsi.d s> 0x31)
        rcx_2 = rsi.d
    else
        rcx_2 = zx.d(*(rsi + &data_14366c490))
    
    if (r14.d s> rcx_2 + arg4)
    label_142b3b495:
        result = 1
    else
        uint32_t rcx_3
        
        if (rsi.d s> 0x31)
            rcx_3 = rsi.d
        else
            rcx_3 = zx.d(*(rsi + &data_14366c490))
        
        if ((r14 + 1).d s< rcx_3 + arg4)
        label_142b3b4a1:
            result = 0xffffffff
        else
            uint32_t rcx_5
            
            if (rsi.d s> 0x31)
                rcx_5 = rsi.d
            else
                rcx_5 = zx.d(*(rsi + &data_14366c490))
            
            int32_t rcx_6 = rcx_5 + arg4
            void var_a8
            void* rbx_1 = &var_a8
            int32_t rax_6 = r14.d
            
            if (rcx_6 s>= r14.d)
                rax_6 = rcx_6
            
            if (rax_6 + 2 u<= 0x49)
                goto label_142b3b55a
            
            void* rax_8 = sub_142a7dd00(sx.q(rax_6 + 2))
            r12 = rax_8
            
            if (rax_8 != 0)
                rbx_1 = rax_8
            label_142b3b55a:
                int32_t result_1 = -1
                int32_t rax_9 = sub_142b3b1a0(arg1, r14.d, arg3, arg4, rsi.d, rbx_1, 0xffffffff)
                
                if (rax_9 s>= 0)
                    void* rcx_11 = sx.q(rax_9) - 1 + rbx_1
                    
                    if (rbx_1 u< rcx_11)
                        while (*rbx_1 == 0)
                            rbx_1 += 1
                            
                            if (rbx_1 u>= rcx_11)
                                break
                    
                    result_1.b = *rbx_1 != 0
                
                if (r12 != 0)
                    sub_142a7dcd0(r12)
                
                result = zx.q(result_1)
            else
                result = 0x80000000
else if (r14.d s> arg4)
label_142b3b495_1:
    result = 1
else if (r14.d s>= arg4)
    char* rcx_1 = arg1 - 1 + r14
    
    if (rcx_1 u>= arg1)
        char* r8_2 = arg3 - 1 + r14 - rcx_1
        
        do
            char rax_3 = *(r8_2 + rcx_1)
            char rdx = *rcx_1
            
            if (rdx u> rax_3)
                goto label_142b3b495_1
            
            if (rdx u< rax_3)
                goto label_142b3b4a1_1
            
            rcx_1 -= 1
        while (rcx_1 u>= arg1)
    
    result = 0
else
label_142b3b4a1_1:
    result = 0xffffffff

__security_check_cookie(rax_1 ^ &var_e8)
return result
