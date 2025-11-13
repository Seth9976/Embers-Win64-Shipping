// 函数: sub_140747f00
// 地址: 0x140747f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = sx.q(arg2[1].d)
int32_t r9 = 0
int64_t* rax

if (r10.d s> 0)
    rax = *arg2
    int64_t rcx = 0
    
    do
        if (*rax == arg3)
            int32_t rax_3 = r10.d - r9 - 1
            
            if (rax_3 s>= 1)
                rax_3 = 1
            
            if (rax_3 != 0)
                memcpy((sx.q(r9) << 4) + *arg2, (sx.q(r10.d - rax_3) << 4) + *arg2, rax_3 << 4)
                r10 = zx.q(arg2[1].d)
            
            arg2[1].d = (r10 - 1).d
            int32_t rax_4
            rax_4.b = 1
            return rax_4
        
        r9 += 1
        rcx += 1
        rax = &rax[2]
    while (rcx s< r10)

rax.b = 0
return rax
