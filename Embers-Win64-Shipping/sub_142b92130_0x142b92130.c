// 函数: sub_142b92130
// 地址: 0x142b92130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = 0

if (arg1 == 0)
    return zx.q((arg1 + 0x23).d)

if (arg5 == 0)
    return zx.q((arg5 + 6).d)

void* rax_2 = *(arg1 + 0x90)
*arg5 = 0
int64_t r11 = *(*(rax_2 + 0x18) + 0x80)

if (r11 != 0)
    int32_t rax_4 = r11(arg1, arg2, arg3, arg5)
    r10 = rax_4
    
    if (rax_4 == 0 && arg4 != 2)
        int64_t rdx_1 = sx.q(*(*(arg1 + 0x80) + 0x1c)) * sx.q(*arg5)
        int32_t rdx_4 = ((rdx_1 - (rdx_1 u>> 0x3f) + 0x8000) s>> 0x10).d
        *arg5 = rdx_4
        int64_t r8_1 = sx.q(*(*(arg1 + 0x80) + 0x20)) * sx.q(*(arg5 + 4))
        int32_t r8_4 = ((r8_1 - (r8_1 u>> 0x3f) + 0x8000) s>> 0x10).d
        *(arg5 + 4) = r8_4
        
        if (arg4 != 1)
            int32_t r9_1 = r10 + 1
            int16_t rcx_4 = *(*(arg1 + 0x80) + 0x18)
            
            if (rcx_4 u< 0x19)
                int64_t rax_10 = sx.q(rdx_4)
                int32_t r11_1 = r9_1
                
                if (rdx_4 s< 0)
                    rax_10 = neg.q(rax_10)
                    r11_1 = -1
                
                uint32_t rcx_11 = ((zx.q(rcx_4) * rax_10 + 0xc) u/ 0x19).d
                
                if (r11_1 s< 0)
                    rcx_11 = neg.d(rcx_11)
                
                *arg5 = rcx_11
            
            int16_t rcx_12 = *(*(arg1 + 0x80) + 0x1a)
            
            if (rcx_12 u< 0x19)
                int64_t rdx_6 = sx.q(r8_4)
                
                if (r8_4 s< 0)
                    rdx_6 = neg.q(rdx_6)
                    r9_1 = -1
                
                uint32_t rcx_19 = ((zx.q(rcx_12) * rdx_6 + 0xc) u/ 0x19).d
                
                if (r9_1 s< 0)
                    rcx_19 = neg.d(rcx_19)
                
                *(arg5 + 4) = rcx_19
            
            *arg5 = (*arg5 + 0x20) & 0xffffffc0
            *(arg5 + 4) = (*(arg5 + 4) + 0x20) & 0xffffffc0

return zx.q(r10)
