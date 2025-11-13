// 函数: sub_142ae73d0
// 地址: 0x142ae73d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = arg2
int64_t rbx = sx.q(arg3)

if (*(arg1 + 0x20) == 0)
    int64_t rcx_2 = sx.q(*(arg1 + 8))
    
    if (rbx.d s< rcx_2.d)
        int64_t rdx_2 = rbx
        
        while (true)
            int64_t rcx_3 = *(arg1 + 0x10)
            bool cond:1_1
            
            if ((arg4 & 1) == 0)
                cond:1_1 = rax.d == *(rcx_3 + (rdx_2 << 3))
            else
                cond:1_1 = rax == *(rcx_3 + (rdx_2 << 3))
            
            if (cond:1_1)
                return zx.q(rbx.d)
            
            rbx = zx.q(rbx.d + 1)
            rdx_2 += 1
            
            if (rdx_2 s>= rcx_2)
                return 0xffffffff
else if (rbx.d s< *(arg1 + 8))
    while (true)
        if ((*(arg1 + 0x20))(rax, *(*(arg1 + 0x10) + (sx.q(rbx.d) << 3))) != 0)
            return zx.q(rbx.d)
        
        rbx = zx.q(rbx.d + 1)
        
        if (rbx.d s>= *(arg1 + 8))
            break
        
        rax = arg2

return 0xffffffff
