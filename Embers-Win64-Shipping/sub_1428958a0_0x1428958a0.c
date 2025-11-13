// 函数: sub_1428958a0
// 地址: 0x1428958a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t rsi = arg3
int32_t* rax = sub_142890ec0(arg1)

if (rsi != 0)
    if (arg2 == 0)
        int64_t r8_4 = sx.q(rax[0xba])
        
        if (rax[0x7c] == 0)
            memcpy(*(rax + 0x2a8), rsi, r8_4.d)
        else
            sub_1428d4fa0(&rax[0x7e], rsi, r8_4, sx.q(rax[0xbb]))
        
        rax[0x7d] = 1
    else
    label_1428958ff:
        sub_1428cf200(arg2, sub_142890ee0(arg1) << 3, rax)
        sub_1428cef80(arg2, sub_142890ee0(arg1) << 3, &rax[0x3e])
        
        if (sub_1428d4de0(&rax[0x7e], rax, &rax[0x3e], sub_1428ce970, sub_1428ce380, 0) == 0)
            return 0
        
        if (rsi != 0)
        label_14289598c:
            int32_t rax_6 = sub_1428d4fa0(&rax[0x7e], rsi, sx.q(rax[0xba]), sx.q(rax[0xbb]))
            
            if (rax_6 != 1)
                return 0
            
            rax[0x7d] = rax_6
        else if (rax[0x7d] != rsi.d)
            rsi = *(rax + 0x2a8)
            
            if (rsi != 0)
                goto label_14289598c
        
        rax[0x7c] = 1
else if (arg2 != 0)
    goto label_1428958ff

return 1
