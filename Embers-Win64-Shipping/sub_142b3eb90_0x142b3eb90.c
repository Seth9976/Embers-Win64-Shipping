// 函数: sub_142b3eb90
// 地址: 0x142b3eb90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r12 = arg4
int32_t rdi = 0
int32_t rbx = 0
int32_t rsi_1 = neg.d(sub_142ab3840(arg2))

if (rsi_1 s> 0)
    do
        char rax_1 = sub_142ab37c0(arg2, not.d(rbx))
        void* r8 = *(arg1 + 0x68)
        int32_t rdx_2 = rdi + r12
        int32_t rcx_2 = *(r8 + 0x748)
        int32_t rax_2
        
        if (rcx_2 == 0xffffffff)
            int32_t rcx_4 = sx.d(rax_1)
            void* r8_3
            
            if (rcx_4 - 1 u<= 8)
                r8_3 = r8 + 8 + (sx.q(rcx_4 + 0x11) << 6)
            else
                r8_3 = r8 + 0x108
            
            arg4.b = 1
            rax_2, arg4 = sub_142b3fb40(arg3, rdx_2, r8_3, arg4.b, arg5)
        else
            arg4.b = 1
            rax_2, arg4 = sub_142b3fd70(arg3, rdx_2, sx.d(rax_1) + rcx_2, arg4.b, arg5)
        
        rdi += rax_2
        rbx += 1
    while (rbx s< rsi_1)

return zx.q(rdi)
