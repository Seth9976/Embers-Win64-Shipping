// 函数: sub_142441a80
// 地址: 0x142441a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x98)
int64_t* rax = rcx
void* r9 = &rcx[sx.q(*(arg1 + 0xa0))]

if (rcx != r9)
    do
        if (*rax == arg2)
            rax = (rax - rcx) s>> 3
            
            if (rax.d s< 0 || rax.d s>= *(arg1 + 0xa0))
                break
            
            int64_t r10 = sx.q(rax.d) << 3
            void* rsi = *(r10 + *(arg1 + 0x98))
            
            if (rsi != 0 && *(rsi + 0xb8) == 3)
                *(arg1 + 0x56a) -= 1
            
            int32_t rdx = *(arg1 + 0xa0)
            int32_t rcx_4 = rdx - rax.d
            
            if (rcx_4 != 1)
                int64_t r9_1 = *(arg1 + 0x98)
                memmove(r9_1 + r10, r9_1 + (sx.q(rax.d + 1) << 3), (rcx_4 - 1) << 3)
                rdx = *(arg1 + 0xa0)
            
            *(arg1 + 0xa0) = rdx - 1
            sub_1405c53d0(arg1 + 0x98)
            sub_142440650(arg1 + 0xa8, rsi)
            sub_1420e7830(rsi)
            int64_t rax_5
            rax_5.b = 1
            return rax_5
        
        rax = &rax[1]
    while (rax != r9)

rax.b = 0
return rax
