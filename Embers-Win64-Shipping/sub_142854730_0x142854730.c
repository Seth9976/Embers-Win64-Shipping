// 函数: sub_142854730
// 地址: 0x142854730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t rax

if (arg2 == 0)
    rax = sub_14284fcc0(arg1)
else
    rax = sub_14284e230(arg2)

int32_t rdx = rax

if (rax s> 0)
    if (rdx s> 5)
        rdx = 5
    
    int32_t rcx_1 = *((sx.q(rdx) << 2) + 0x1434d9f64)
    bool cond:1_1
    
    if (arg3 == 9)
        int32_t rax_8 = arg5
        
        if ((*(*(*(arg1 + 8) + 0xc0) + 0x60) & 8) != 0)
            if (rax_8 == 0x100)
                rax_8 = 0xff00
            
            if (rax_8 s<= 0xfefd)
                return 1
            
        label_1428548bd:
            cond:1_1 = rdx s< 4
            goto label_1428548c0
        
        if ((rax_8 s> 0x300 || rdx s< 2) && (rax_8 s> 0x301 || rdx s< 3))
            if (rax_8 s> 0x302)
                return 1
            
            goto label_1428548bd
    else if (arg3 == 0xa)
        cond:1_1 = rdx s< 3
    label_1428548c0:
        
        if (cond:1_1)
            return 1
    else
        if (arg3 == 0xf)
            cond:1_1 = rdx s< 2
            goto label_1428548c0
        
        if (arg3 - 0x10001 u> 2)
            if (arg4 s< rcx_1)
                return 0
            
            return 1
        
        if (arg4 s>= rcx_1 && (*(arg6 + 0x20) & 4) == 0)
            char r8 = (*(arg6 + 0x28)).b
            
            if ((r8 & 1) == 0 && (rcx_1 s<= 0xa0 || (r8 & 2) == 0)
                    && (rdx s< 2 || *(arg6 + 0x24) != 4))
                if (rdx s< 3)
                    return 1
                
                if (*(arg6 + 0x2c) == 0x304)
                    if ((*(arg6 + 0x1c) & 6) == 0)
                        return 0
                    
                    return 1
else if (arg3 != 0x40007 || arg4 s>= 0x50)
    return 1

return 0
