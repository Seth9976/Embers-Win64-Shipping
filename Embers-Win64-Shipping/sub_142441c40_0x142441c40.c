// 函数: sub_142441c40
// 地址: 0x142441c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = arg1[1].d
int32_t rbx = 0
int32_t rax = rbp

if (rbp s> 0)
    do
        int64_t rsi_1 = sx.q(rbx) << 3
        
        if (sub_14077a170(*arg1 + rsi_1, arg2) != 0)
            int32_t rdx_1 = arg1[1].d
            int32_t rax_5 = rdx_1 - rbx - 1
            
            if (rax_5 s>= 1)
                rax_5 = 1
            
            if (rax_5 != 0)
                int64_t rcx_2 = *arg1
                memcpy(rcx_2 + rsi_1, rcx_2 + (sx.q(rdx_1 - rax_5) << 3), rax_5 << 3)
                rdx_1 = arg1[1].d
            
            arg1[1].d = rdx_1 - 1
            sub_1405c53d0(arg1)
            rbx -= 1
        
        rax = arg1[1].d
        rbx += 1
    while (rbx s< rax)

return zx.q(rbp - rax)
