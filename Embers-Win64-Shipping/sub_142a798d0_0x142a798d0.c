// 函数: sub_142a798d0
// 地址: 0x142a798d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg3 s<= 0)
    int32_t rax_1 = *(arg1 + 0x13c)
    
    if (rax_1 s> 0)
        *arg3 = rax_1
        return arg2
    
    int64_t r8 = *(arg1 + 0x30)
    int64_t rdx = *(arg1 + 0xa0)
    
    if (r8 s> rdx)
        void* rcx = *(arg1 + 0x20)
        
        if (*(rcx + 0x20) == 0 && r8 == *(rcx + 0x10) && r8 == sx.q(*(rcx + 0x1c)))
            int32_t* rax_4 = sub_142aea860(arg2)
            sub_142aeaca0(arg2, rax_4, rax_4, *(*(arg1 + 0x20) + 0x30) + (*(arg1 + 0xa0) << 1), 
                *(arg1 + 0x30) - *(arg1 + 0xa0), arg3)
            return arg2
        
        int32_t rbp_2
        
        if (*(*(rcx + 0x38) + 0x48) != 0)
            rbp_2 = sub_142aea690(rcx, rdx, r8, 0, 0, arg3)
            *arg3 = 0
        else
            rbp_2 = r8.d - rdx.d
        
        int64_t rax_8 = sub_142a7dd00(sx.q(rbp_2) * 2)
        
        if (rax_8 != 0)
            sub_142aea690(*(arg1 + 0x20), *(arg1 + 0xa0), *(arg1 + 0x30), rax_8, rbp_2, arg3)
            int32_t* rax_9 = sub_142aea860(arg2)
            sub_142aeaca0(arg2, rax_9, rax_9, rax_8, rbp_2, arg3)
            sub_142a7dcd0(rax_8)
        else
            *(arg1 + 0x13c) = 7

return arg2
