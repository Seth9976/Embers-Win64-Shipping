// 函数: sub_1428f51c0
// 地址: 0x1428f51c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
uint64_t result = 0

if (arg2 != 0)
    if (arg2 u<= 0x100000000)
        int32_t r8_4 = arg1[1].d
        int32_t r8_5 = r8_4 - 1
        
        if (r8_4 - 1 s>= 0)
            int64_t* r9_2 = *arg1 + (sx.q(r8_5) << 3)
            int32_t temp4_1
            
            do
                int64_t rcx_10 = *r9_2
                r9_2 = &r9_2[-1]
                temp4_1 = r8_5
                r8_5 -= 1
                result = modu.dp.q(
                    0:(modu.dp.q(0:(rcx_10 u>> 0x20 | result << 0x20), arg2) << 0x20
                        | zx.q(rcx_10.d)), 
                    arg2)
            while (temp4_1 - 1 s>= 0)
        
        return result
    
    int64_t* rax_1 = sub_1428900c0(arg1)
    
    if (rax_1 != 0)
        int64_t r14 = 0
        
        if (rax_1[1].d != 0)
            int32_t r8_1 = 0x40 - sub_142890660(arg2)
            char r12_1 = r8_1.b
            int64_t rbp_1 = arg2 << r12_1
            
            if (sub_1428f5510(rax_1, rax_1, r8_1) != 0)
                int32_t rcx_3 = rax_1[1].d
                int64_t r15_1 = sx.q(rcx_3 - 1)
                
                if (rcx_3 - 1 s>= 0)
                    int64_t temp5_1
                    
                    do
                        int64_t rbx_1 = *(*rax_1 + (r15_1 << 3))
                        uint64_t rax_6 = sub_14291cec0(r14, rbx_1, rbp_1)
                        *(*rax_1 + (r15_1 << 3)) = rax_6
                        r14 = rbx_1 - rax_6 * rbp_1
                        temp5_1 = r15_1
                        r15_1 -= 1
                    while (temp5_1 - 1 s>= 0)
                    rcx_3 = rax_1[1].d
                
                int32_t r8_3 = rcx_3
                
                if (rcx_3 s> 0 && *(*rax_1 + (sx.q(rcx_3) << 3) - 8) == 0)
                    rax_1[1].d = rcx_3 - 1
                    r8_3 = rcx_3 - 1
                
                if (r8_3 == 0)
                    rax_1[2].d = 0
                
                result = r14 u>> r12_1
            else
                result = -1
        
        sub_1428901a0(rax_1)
        return result

return -1
