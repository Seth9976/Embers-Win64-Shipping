// 函数: sub_141d5a150
// 地址: 0x141d5a150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141d54070(arg1)

if (arg2 != 0 && (*(*arg2 + 0x268))(arg2) != 0)
    sub_141d534c0(*(arg1 + 0xc8), arg2)
    char rax_3 = sub_141d4ee50(*(arg1 + 0x110))
    *(arg1 + 0x130) |= rax_3
    void* rcx_3 = *(arg1 + 0xc8)
    int32_t rdx_1 = *(rcx_3 + 0x30)
    int32_t rdx_3
    
    if (rdx_1 s<= 0)
        rdx_3 = -1
    else
        int32_t rax_4 = *(arg1 + 0xd0)
        int32_t rdx_2 = rdx_1 - 1
        
        if (rax_4 s>= 0xffffffff)
            if (rax_4 s< rdx_2)
                rdx_2 = rax_4
            
            *(arg1 + 0xd0) = rdx_2 + 1
            *(rcx_3 + 0x30)
            rdx_3 = mods.dp.d(sx.q(rdx_2 + 1), *(rcx_3 + 0x30))
        else
            *(arg1 + 0xd0) = 0
            *(rcx_3 + 0x30)
            rdx_3 = mods.dp.d(0:0, *(rcx_3 + 0x30))
    
    *(arg1 + 0xd0) = rdx_3
    sub_141d5a8d0(arg1)
    int64_t var_18
    char rax_11 = sub_141d4ef40(*(arg1 + 0x110), (*(*arg2 + 0x260))(arg2, &var_18), &arg2[5], arg3)
    int64_t rcx_7 = var_18
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    return zx.q(rax_11)

return 0
