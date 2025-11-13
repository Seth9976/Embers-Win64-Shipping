// 函数: sub_142b40880
// 地址: 0x142b40880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = sx.q(arg5)
int32_t rdi_1 = arg6 - r14.d
int32_t rsi_2 = rdi_1 - arg3 + arg2
int32_t rax

if (rsi_2 s<= 0)
    rax = sub_142b407b0(arg1, arg2, neg.d(rsi_2))
else
    rax = sub_142b40440(arg1, arg2, rsi_2, arg8)

if (*arg8 s<= 0 && rdi_1 s> 0)
    int64_t rcx_1 = sx.q(rax)
    int64_t i = 0
    int64_t rbp_1 = rcx_1 * 2
    int64_t rdx = (r14 - rcx_1) * 2
    int64_t var_38_1 = rdx
    
    do
        int16_t rcx_2 = *(arg4 + 8)
        int32_t rax_4
        
        if (rcx_2 s< 0)
            rax_4 = *(arg4 + 0xc)
        else
            rax_4 = sx.d(rcx_2) s>> 5
        
        int16_t rdi_2
        
        if (r14.d u>= rax_4)
            rdi_2 = -1
        else
            void* rcx_3 = arg4 + 0xa
            
            if ((rcx_2.b & 2) == 0)
                rcx_3 = *(arg4 + 0x18)
            
            rdi_2 = *(rdx + rbp_1 + rcx_3)
        
        *(sub_142b3f8b0(arg1) + rbp_1) = rdi_2
        rdx = var_38_1
        r14 = zx.q(r14.d + 1)
        rbp_1 += 2
        *(sub_142b3f8c0(arg1) + rcx_1 + i) = arg7
        i += 1
    while (i s< sx.q(rdi_1))

return zx.q(rsi_2)
