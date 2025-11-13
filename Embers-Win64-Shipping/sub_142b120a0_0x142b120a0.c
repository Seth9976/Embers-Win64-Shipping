// 函数: sub_142b120a0
// 地址: 0x142b120a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0xd8) & 1) == 0)
    int16_t rax_1 = *(arg1 + 0xd8)
    int32_t r9_2
    
    if (rax_1 s< 0)
        r9_2 = *(arg1 + 0xdc)
    else
        r9_2 = sx.d(rax_1) s>> 5
    
    int32_t rax_2 = sub_142a49270(arg1 + 0xd0, 0x5f, 0, r9_2)
    
    if (rax_2 != 0xffffffff)
        if (rax_2 s> 0)
            sub_142a49390(arg1 + 0xd0, rax_2, 0x7fffffff, 0, 0, 0)
            void* rax_4
            rax_4.b = 1
            return rax_4
        
        if ((*(arg1 + 0xd8) & 1) == 0)
            *(arg1 + 0xd8) &= 0x1f
            rax_2.b = 1
            return rax_2
        
        *(arg1 + 0xd8) = 2
        int64_t rax_3
        rax_3.b = 1
        return 1
    
    if ((*(arg1 + 0x98) & 1) == 0)
        sub_142a48100(arg1 + 0xd0, arg1 + 0x90)
        sub_142a4ab40(arg1 + 0x90)
        int64_t rax_5
        rax_5.b = 1
        return 1
    
    int16_t rax_6 = *(arg1 + 0xd8)
    int32_t rax_8
    
    if (rax_6 s< 0)
        rax_8 = *(arg1 + 0xdc)
    else
        rax_8 = sx.d(rax_6) s>> 5
    
    if (rax_8 s> 0)
        if ((*(arg1 + 0xd8) & 1) == 0)
            *(arg1 + 0xd8) &= 0x1f
            rax_8.b = 1
            return rax_8
        
        *(arg1 + 0xd8) = 2
        int64_t rax_9
        rax_9.b = 1
        return 1
    
    sub_142a4ab40(arg1 + 0xd0)

int64_t rax
rax.b = 0
return rax
