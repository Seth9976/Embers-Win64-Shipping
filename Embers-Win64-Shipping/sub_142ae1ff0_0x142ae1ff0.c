// 函数: sub_142ae1ff0
// 地址: 0x142ae1ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i = arg4

if (arg4 != 0)
    do
        int16_t rdx = *(i + 0x10)
        int32_t rcx_1
        
        if (rdx s< 0)
            rcx_1 = *(i + 0x14)
        else
            rcx_1 = sx.d(rdx) s>> 5
        
        int16_t rax_1 = *(arg2 + 8)
        int32_t r8_1
        
        if (rax_1 s< 0)
            r8_1 = *(arg2 + 0xc)
        else
            r8_1 = sx.d(rax_1) s>> 5
        
        char rax_2
        
        if ((*(i + 0x10) & 1) == 0)
            int32_t rax_4
            
            if (rdx s< 0)
                rax_4 = *(i + 0x14)
            else
                rax_4 = sx.d(rdx) s>> 5
            
            int32_t r10_1 = 0
            
            if (rax_4 s< 0)
                r10_1 = rax_4
            
            if (rcx_1 s>= 0)
                int32_t rax_5 = rax_4 - r10_1
                
                if (rcx_1 s> rax_5)
                    rcx_1 = rax_5
            else
                rcx_1 = 0
            
            void* r9 = i + 0x12
            
            if ((rdx.b & 2) == 0)
                r9 = *(i + 0x20)
            
            rax_2 = sub_142a48fb0(arg2, 0, r8_1, r9, r10_1, rcx_1)
        else
            rax_2 = not.b(*(arg2 + 8)) & 1
        
        if (rax_2 == 0)
            int32_t* rax_6 = arg3 + 8
            int64_t rdx_1 = 0
            
            while (*(*(i + 0x48) - arg3 + rax_6) == *rax_6)
                rdx_1 += 1
                rax_6 = &rax_6[1]
                
                if (rdx_1 s>= 0x10)
                    return i
        
        i = *(i + 0x98)
    while (i != 0)

return 0
