// 函数: sub_142b10120
// 地址: 0x142b10120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = sx.q(*(arg1 + 0x10))
int32_t rbx = *(arg1 + (r8 << 2) + 0x20)
int32_t rax

if (arg2 s>= rbx)
    int64_t r9_1 = sx.q(*(arg1 + 0x14))
    rax = *(arg1 + (r9_1 << 2) + 0x20)
    
    if (arg2 s<= rax)
        if (arg2 == rbx)
            *(arg1 + 0x1c) = r8.d
            *(arg1 + 0x18) = *(arg1 + (r8 << 2) + 0x20)
            int32_t rax_1
            rax_1.b = 1
            return rax_1
        
        if (arg2 == rax)
            *(arg1 + 0x1c) = r9_1.d
            *(arg1 + 0x18) = *(arg1 + (r9_1 << 2) + 0x20)
            int32_t rax_2
            rax_2.b = 1
            return rax_2
        
        while (r8.d != r9_1.d)
            int32_t rax_3 = 0
            
            if (r8.d s> r9_1.d)
                rax_3 = 0x80
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(rax_3 + r9_1.d + r8.d)
            uint64_t rax_9 = zx.q((temp1_1 - temp0_1) s>> 1) & 0x7f
            
            if (*(arg1 + (rax_9 << 2) + 0x20) s<= arg2)
                r8 = zx.q((rax_9 + 1).d) & 0x7f
            else
                r9_1 = zx.q(rax_9.d)
        
        int32_t rax_11 = (r9_1 - 1).d & 0x7f
        *(arg1 + 0x1c) = rax_11
        int64_t rax_12
        rax_12.b = 1
        *(arg1 + 0x18) = *(arg1 + (sx.q(rax_11) << 2) + 0x20)
        return rax_12

rax.b = 0
return rax
