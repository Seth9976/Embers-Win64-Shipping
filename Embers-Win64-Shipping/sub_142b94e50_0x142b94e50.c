// 函数: sub_142b94e50
// 地址: 0x142b94e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t count = sx.q(arg2)
int64_t* r13 = arg1

if (arg1 == 0)
    return zx.q((arg1 + 0x21).d)

int64_t r12 = *arg1

if (arg4 != 0 && r12 != 0)
    __builtin_memset(arg4, 0, 0x20)
    *(arg4 + 0x20) = 0
    
    if (arg3 s>= 0 && arg3 u<= count.d)
        if (count.d u> 0x7fff)
            return 0xa
        
        int64_t rbp = 0
        int32_t rdi = 0
        int64_t r15 = 0
        
        if (arg2 s< 0)
            rdi = 6
        else if (arg2 != 0)
            if (count.d s<= 0xfffffff)
                int32_t r13_1 = (count << 3).d
                int64_t rax_3 = (*(r12 + 8))(r12, zx.q(r13_1))
                r15 = rax_3
                
                if (rax_3 == 0)
                    rdi = 0x40
                else if (count.d s> 0)
                    memset(rax_3, 0, sx.q(r13_1))
                
                r13 = arg1
            else
                rdi = 0xa
        
        *(arg4 + 8) = r15
        
        if (rdi == 0)
            int64_t r15_1 = 0
            rdi = 0
            int32_t temp1_1 = count.d
            
            if (temp1_1 s< 0)
                rdi = 6
            else if (temp1_1 != 0)
                int64_t rax_4 = (*(r12 + 8))(r12, zx.q(count.d))
                r15_1 = rax_4
                
                if (rax_4 == 0)
                    rdi = (rax_4 + 0x40).d
                else if (count.d s> 0)
                    memset(rax_4, 0, count)
            
            *(arg4 + 0x10) = r15_1
            
            if (rdi == 0)
                rdi = 0
                
                if (arg3 != 0)
                    if (arg3 s<= 0x3fffffff)
                        int32_t r15_2 = arg3 * 2
                        int64_t rax_5 = (*(r12 + 8))(r12, zx.q(r15_2))
                        rbp = rax_5
                        
                        if (rax_5 == 0)
                            rdi = (rax_5 + 0x40).d
                        else if (arg3 s> 0)
                            memset(rax_5, 0, sx.q(r15_2))
                    else
                        rdi = 0xa
                
                *(arg4 + 0x18) = rbp
                
                if (rdi == 0)
                    *(arg4 + 0x20) |= 1
                    arg4[1] = count.w
                    *arg4 = arg3.w
                    return 0
        
        *(arg4 + 0x20) |= 1
        sub_142b946e0(r13, arg4)
        return zx.q(rdi)

return 6
