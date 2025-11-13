// 函数: sub_142bf9540
// 地址: 0x142bf9540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = arg1[5].d
int32_t r10 = 0
int64_t rsi = arg1[1]
int64_t rdi = *arg1
int32_t r9 = rbp - 1
uint32_t result

if (r9 s< 0)
labelid_1:
    result.b = 0
else
    uint64_t rdx
    
    while (true)
        uint64_t rax_1 = zx.q((r9 + r10) u>> 1)
        rdx = zx.q(rax_1.d)
        
        if (arg2 u>= (zx.d(*(rsi + (rax_1 << 1))) << 8) + zx.d(*(rsi + (rax_1 << 1) + 1)))
            if (arg2 u<= (zx.d(*(rdi + (rdx << 1))) << 8) + zx.d(*(rdi + (rdx << 1) + 1)))
                break
            
            r10 = (rdx + 1).d
        else
            r9 = (rdx - 1).d
        
        if (r10 s> r9)
            goto label_142bf95bd_2
    
    int64_t rax_2 = arg1[3]
    uint64_t r8 = rdx * 2
    uint32_t rax_3 = zx.d(*(r8 + rax_2 + 1))
    uint32_t rcx_7 = zx.d(*(r8 + rax_2)) << 8
    int16_t result_1
    
    if (rcx_7 != neg.d(rax_3))
        uint64_t rcx_16 = zx.q(((rcx_7 + rax_3) u>> 1) - (zx.d(*(r8 + rsi)) << 8)
            - zx.d(*(r8 + rsi + 1)) - rbp + rdx.d + arg2)
        
        if (rcx_16.d u>= *(arg1 + 0x2c))
        label_142bf95bd:
            result.b = 0
        else
            int64_t rax_8 = arg1[4]
            result = zx.d(*(rax_8 + (rcx_16 << 1) + 1))
            uint32_t rdx_3 = zx.d(*(rax_8 + (rcx_16 << 1))) << 8
            
            if (rdx_3 != neg.d(result))
                int64_t rax_9 = arg1[2]
                result_1 =
                    rdx_3.w + result.w + zx.w(*(r8 + rax_9 + 1)) + (zx.d(*(r8 + rax_9)) << 8).w
                goto label_142bf9658
            
        label_142bf95bd_1:
            result.b = 0
    else
        int64_t rax_4 = arg1[2]
        result_1 = zx.w(*(r8 + rax_4 + 1)) + arg2.w + (zx.d(*(r8 + rax_4)) << 8).w
    label_142bf9658:
        result = zx.d(result_1)
        
        if (result == 0)
        label_142bf95bd_2:
            result.b = 0
        else
            *arg3 = result
            result.b = 1

return result
