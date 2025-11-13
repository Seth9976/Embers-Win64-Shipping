// 函数: sub_140379940
// 地址: 0x140379940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0

if (sub_1403794b4(arg2) != 0)
    if (sub_140378d54(arg2) != 3)
        rdi = -0x7768ffff
        
        if (arg3 != 0)
            if (*arg2 != 0xfffe)
                *arg2 = 3
            else
                *(arg2 + 0x18) = 3
    
    int16_t rax_2 = 1
    
    if (arg2[1] u>= 1)
        rax_2 = 0x40
    
    if (arg2[1] u< 1 || arg2[1] u> 0x40)
        rdi = -0x7768ffff
        
        if (arg3 != 0)
            arg2[1] = rax_2
    
    if (*(arg2 + 4) u< 0x3e8)
        rdi = -0x7768ffff
        
        if (arg3 != 0)
            *(arg2 + 4) = 0x3e8
    else if (*(arg2 + 4) u> 0x30d40)
        int32_t rax_3 = *(arg2 + 4)
        rdi = -0x7768ffff
        
        if (arg3 != 0)
            rax_3 = 0x30d40
        
        *(arg2 + 4) = rax_3
    
    if (arg2[7] != 0x20)
        rdi = -0x7768ffff
        
        if (arg3 != 0)
            arg2[7] = 0x20
    
    if (*arg2 == 0xfffe && arg2[9] != 0x20)
        rdi = -0x7768ffff
        
        if (arg3 != 0)
            arg2[9] = 0x20
else
    rdi = -0x7ff8ffa9

return zx.q(rdi)
