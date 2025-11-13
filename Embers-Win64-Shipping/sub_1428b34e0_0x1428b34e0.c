// 函数: sub_1428b34e0
// 地址: 0x1428b34e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t* rax = sub_142890ec0(arg1)

if (arg3 != 0)
    if (arg2 == 0)
        int64_t r8_2 = sx.q(rax[0xb8])
        
        if (rax[0x46] == 0)
            memcpy(*(rax + 0x2d8), arg3, r8_2.d)
        else
            sub_1428d27f0(&rax[0x48], arg3, r8_2)
        
        rax[0x47] = 1
        rax[0xba] = 0
    else
    label_1428b3539:
        int32_t rax_3 = sub_142901a10(arg2, sub_142890ee0(arg1) << 3, rax)
        sub_1428d26d0(&rax[0x48], rax, sub_142900fa0)
        
        if (rax_3 s< 0)
            sub_1428a5670(6, 0xb0, 0xb0, "crypto\evp\e_aria.c", 0xdd)
            return 0
        
        if (arg3 != 0)
            sub_1428d27f0(&rax[0x48], arg3, sx.q(rax[0xb8]))
            rax[0x47] = 1
        else if (rax[0x47] != arg3.d)
            int64_t* rsi = *(rax + 0x2d8)
            
            if (rsi != 0)
                sub_1428d27f0(&rax[0x48], rsi, sx.q(rax[0xb8]))
                rax[0x47] = 1
        
        rax[0x46] = 1
else if (arg2 != 0)
    goto label_1428b3539

return 1
