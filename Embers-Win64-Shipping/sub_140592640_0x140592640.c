// 函数: sub_140592640
// 地址: 0x140592640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rsi = arg4
int64_t rax = arg6
*arg5 = arg3
*arg8 = rax
char* r10 = *arg5

if (r10 != arg4)
    while (rax != arg7)
        uint32_t rcx = zx.d(*r10)
        uint32_t rax_2
        
        if (rcx u>= 0x80)
            if (rcx u>= 0xc0)
                if (rcx u< 0xe0)
                    rax_2 = rcx & 0x1f
                    arg4 = 1
                else if (rcx u< 0xf0)
                    rax_2 = rcx & 0xf
                    arg4 = 2
                else if (rcx u>= 0xf8)
                    rax_2 = rcx & 3
                    arg4 = zx.q(sbb.d(arg4.d, arg4.d, rcx u< 0xfc) + 5)
                else
                    rax_2 = rcx & 7
                    arg4 = 3
                
                if (rsi - r10 s< zx.q((arg4 + 1).d))
                    break
                
                void* r8_2 = &r10[1]
                *arg5 = r8_2
                
                do
                    uint32_t rdx_1 = zx.d(*r8_2)
                    
                    if (rdx_1 - 0x80 u> 0x3f)
                        return 2
                    
                    arg4 = zx.q(arg4.d - 1)
                    rax_2 = (rdx_1 & 0x3f) | rax_2 << 6
                    r8_2 += 1
                    *arg5 = r8_2
                while (arg4.d s> 0)
                
                goto label_140592749
            
            *arg5 = &r10[1]
        else
            *arg5 = &r10[1]
            rax_2 = rcx
        label_140592749:
            
            if (*arg2 == 0)
                *arg2 = 1
            
            if (rax_2 u<= 0x10ffff)
                **arg8 = rax_2.w
                *arg8 += 2
                r10 = *arg5
                rax = *arg8
                
                if (r10 == rsi)
                    break
                
                continue
        return 2

int64_t result
result.b = arg3 == r10
return result
