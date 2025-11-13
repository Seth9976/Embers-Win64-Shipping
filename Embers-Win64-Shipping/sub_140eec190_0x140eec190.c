// 函数: sub_140eec190
// 地址: 0x140eec190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t i_2 = zx.q(arg2)
*arg1 = 0
arg1[1] = 0

if (arg2 s> 0)
    int32_t rdx = (i_2 + 1).d
    
    if (rdx s> 0)
        sub_1405947f0(arg1, rdx)
    
    if (i_2.d s> 0)
        uint64_t i_1 = i_2
        uint64_t i
        
        do
            int32_t rdx_1 = arg1[1].d
            int32_t rax_1
            rax_1.b = rdx_1 s<= 0
            int32_t rdi = rdx_1 - 1
            
            if (rdx_1 s<= 0)
                rdi = 0
            
            int32_t rax_3 = rax_1 + 1 + rdx_1
            arg1[1].d = rax_3
            
            if (rax_3 s> *(arg1 + 0xc))
                sub_140594770(arg1)
            
            int64_t rcx_1 = sx.q(rdi)
            *(*arg1 + (rcx_1 << 1)) = 0x2022
            *(*arg1 + (rcx_1 << 1) + 2) = 0
            i = i_1
            i_1 -= 1
        while (i != 1)

return arg1
