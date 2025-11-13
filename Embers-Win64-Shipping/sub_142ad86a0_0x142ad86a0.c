// 函数: sub_142ad86a0
// 地址: 0x142ad86a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12
int64_t var_10 = r12
int32_t rsi = arg4
int32_t rbx = 0

if (sub_142a4a1f0(arg2) s> 0)
    int32_t rax_22
    
    do
        int32_t rax_1 = sub_142a486d0(arg2, rbx)
        int32_t r14_1 = rax_1
        int32_t rdi_1
        rdi_1.b = rax_1 u> 0xffff
        int32_t rdi_2 = rdi_1 + 1
        
        if (sub_142b13730(rax_1) == 0)
            if (rsi s>= sub_142a4a1f0(arg3))
                return 0xffffffff
            
            if (sub_142a486d0(arg3, rsi) != r14_1)
                return 0xffffffff
            
            rbx += rdi_2
            rsi += rdi_2
        else
            r12.b = 0
            
            if (rsi s< sub_142a4a1f0(arg3))
                int32_t rax_8
                
                do
                    if (sub_142a486d0(arg3, rsi) != r14_1)
                        break
                    
                    r12.b = 1
                    rbx += rdi_2
                    rsi += rdi_2
                    
                    if (rbx == sub_142a4a1f0(arg2))
                        break
                    
                    int32_t rax_6 = sub_142a486d0(arg2, rbx)
                    r14_1 = rax_6
                    int32_t rdi_3
                    rdi_3.b = rax_6 u> 0xffff
                    rdi_2 = rdi_3 + 1
                    
                    if (sub_142b13730(rax_6) == 0)
                        break
                    
                    rax_8 = sub_142a4a1f0(arg3)
                while (rsi s< rax_8)
            
            int16_t rax_9 = *(arg2 + 8)
            void* rdi_4
            
            if ((rax_9.b & 0x11) == 0)
                rdi_4 = arg2 + 0xa
                
                if ((rax_9.b & 2) == 0)
                    rdi_4 = *(arg2 + 0x18)
            else
                rdi_4 = nullptr
            
            int32_t rdx_4
            
            if (rax_9 s< 0)
                rdx_4 = *(arg2 + 0xc)
            else
                rdx_4 = sx.d(rax_9) s>> 5
            
            int32_t r14_2 = rsi
            rbx = ((sub_142b138d0(rdi_4 + (sx.q(rbx) << 1), rdx_4 - rbx) - rdi_4) s>> 1).d
            int32_t rdi_5 = rsi
            
            if (rsi s< sub_142a4a1f0(arg3))
                int32_t rax_15
                
                do
                    int32_t rax_13 = sub_142a486d0(arg3, rdi_5)
                    
                    if (sub_142a54330(rax_13) == 0)
                        break
                    
                    int32_t rcx_13
                    rcx_13.b = rax_13 u> 0xffff
                    rdi_5 += rcx_13 + 1
                    rax_15 = sub_142a4a1f0(arg3)
                while (rdi_5 s< rax_15)
            
            rsi = rdi_5
            
            if (rdi_5 == r14_2 && r12.b == 0)
                return 0xffffffff
            
            if (rbx s< sub_142a4a1f0(arg2))
                int32_t rax_19
                
                do
                    int32_t rax_17 = sub_142a486d0(arg2, rbx)
                    
                    if (sub_142a54330(rax_17) == 0)
                        break
                    
                    int32_t rcx_19
                    rcx_19.b = rax_17 u> 0xffff
                    rbx += rcx_19 + 1
                    rax_19 = sub_142a4a1f0(arg2)
                while (rbx s< rax_19)
        
        rax_22 = sub_142a4a1f0(arg2)
    while (rbx s< rax_22)

return zx.q(rsi - arg4)
