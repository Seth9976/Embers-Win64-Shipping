// 函数: sub_1428f50a0
// 地址: 0x1428f50a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t rsi = 0

if (arg2 != 0)
    if (arg1[1].d == 0)
        return 0
    
    int32_t r8_1 = 0x40 - sub_142890660(arg2)
    char r15_1 = r8_1.b
    int64_t rbp_1 = arg2 << r15_1
    
    if (sub_1428f5510(arg1, arg1, r8_1) != 0)
        int32_t rcx_3 = arg1[1].d
        int64_t r14 = sx.q(rcx_3 - 1)
        
        if (rcx_3 - 1 s>= 0)
            int64_t temp0_1
            
            do
                int64_t rbx_1 = *(*arg1 + (r14 << 3))
                uint64_t rax_6 = sub_14291cec0(rsi, rbx_1, rbp_1)
                rsi = rbx_1 - rax_6 * rbp_1
                *(*arg1 + (r14 << 3)) = rax_6
                temp0_1 = r14
                r14 -= 1
            while (temp0_1 - 1 s>= 0)
            rcx_3 = arg1[1].d
        
        int32_t r8_3 = rcx_3
        
        if (rcx_3 s> 0 && *(*arg1 + (sx.q(rcx_3) << 3) - 8) == 0)
            arg1[1].d = rcx_3 - 1
            r8_3 = rcx_3 - 1
        
        if (r8_3 == 0)
            arg1[2].d = r8_3
        
        return rsi u>> r15_1

return -1
