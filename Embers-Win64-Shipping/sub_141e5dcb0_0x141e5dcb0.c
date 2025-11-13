// 函数: sub_141e5dcb0
// 地址: 0x141e5dcb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r10 = *arg1
int64_t* rax = r10
void* r9 = &r10[sx.q(arg1[1].d)]

if (r10 != r9)
    do
        if (*rax == arg2)
            rax = (rax - r10) s>> 3
            
            if (rax.w == 0xffff)
                break
            
            *arg3 = arg2
            arg3[1].d = rax.w.d
            int32_t rax_2
            rax_2.b = 1
            return rax_2
        
        rax = &rax[1]
    while (rax != r9)

rax.b = 0
return rax
