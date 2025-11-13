// 函数: sub_142a9e9d0
// 地址: 0x142a9e9d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_48
int64_t rax_1 = __security_cookie ^ &var_48
int32_t rax_2 = 0

if (arg2 s< 0)
    arg2 = 0
else if (arg2 s> 0x10ffff)
    arg2 = 0x10ffff

if (arg3 s>= 0)
    rax_2 = arg3
    
    if (arg3 s> 0x10ffff)
        rax_2 = 0x10ffff

if (arg2 s< rax_2)
    int32_t r8 = *(arg1 + 0x1c)
    int32_t rax_3
    
    if ((r8.b & 1) != 0)
        if (r8 != 1)
            rax_3 = *(*(arg1 + 0x10) + (sx.q(r8 - 2) << 2))
        else
            rax_3 = r8 - 3
    
    if ((r8.b & 1) == 0 || rax_3 s> arg2 || *(arg1 + 0x28) != 0 || *(arg1 + 0x58) != 0
            || (*(arg1 + 0x20) & 1) != 0)
        int32_t var_28 = arg2
        int32_t var_24_1 = rax_2 + 1
        int32_t var_20_1 = 0x110000
        sub_142a9e420(arg1, &var_28, 2, 0)
    else if (rax_3 != arg2)
        *(*(arg1 + 0x10) + (sx.q(r8 - 1) << 2)) = arg2
        int32_t rdx = *(arg1 + 0x1c)
        
        if (rax_2 + 1 s>= 0x110000)
            if (sub_142a9f6f0(arg1, rdx + 1) != 0)
                *(*(arg1 + 0x10) + (sx.q(*(arg1 + 0x1c)) << 2)) = 0x110000
                *(arg1 + 0x1c) += 1
            
            sub_142aa0000(arg1)
        else if (sub_142a9f6f0(arg1, rdx + 2) == 0)
            sub_142aa0000(arg1)
        else
            *(*(arg1 + 0x10) + (sx.q(*(arg1 + 0x1c)) << 2)) = rax_2 + 1
            *(arg1 + 0x1c) += 1
            *(*(arg1 + 0x10) + (sx.q(*(arg1 + 0x1c)) << 2)) = 0x110000
            *(arg1 + 0x1c) += 1
            sub_142aa0000(arg1)
    else
        *(*(arg1 + 0x10) + (sx.q(r8 - 2) << 2)) = rax_2 + 1
        
        if (rax_2 != 0x10ffff)
            sub_142aa0000(arg1)
        else
            *(arg1 + 0x1c) -= 1
            sub_142aa0000(arg1)
else if (arg2 == rax_2)
    sub_142a9e7d0(arg1, arg2)

__security_check_cookie(rax_1 ^ &var_48)
return arg1
