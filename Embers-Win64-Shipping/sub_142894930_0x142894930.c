// 函数: sub_142894930
// 地址: 0x142894930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t* rax = sub_142890ec0(arg1)

if (arg3 != 0)
    if (arg2 == 0)
        int64_t r8_2 = sx.q(rax[0xb0])
        
        if (rax[0x3e] == 0)
            memcpy(*(rax + 0x2b8), arg3, r8_2.d)
        else
            sub_1428d27f0(&rax[0x40], arg3, r8_2)
        
        rax[0x3f] = 1
        rax[0xb2] = 0
    else
    label_14289497e:
        sub_1428cf200(arg2, *(arg1 + 0x68) << 3, rax)
        sub_1428d26d0(&rax[0x40], rax, sub_1428ce970)
        *(rax + 0x2d0) = 0
        
        if (arg3 != 0)
            sub_1428d27f0(&rax[0x40], arg3, sx.q(rax[0xb0]))
            rax[0x3f] = 1
        else if (rax[0x3f] != arg3.d)
            int64_t* rdi = *(rax + 0x2b8)
            
            if (rdi != 0)
                sub_1428d27f0(&rax[0x40], rdi, sx.q(rax[0xb0]))
                rax[0x3f] = 1
        
        rax[0x3e] = 1
else if (arg2 != 0)
    goto label_14289497e

return 1
