// 函数: sub_141cc6790
// 地址: 0x141cc6790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r10 = *arg1
int64_t r11 = sx.q(arg1[1].d)
int64_t* rax = r10
void* r9 = &r10[r11]

if (r10 != r9)
    do
        if (*rax == arg2)
            rax = (rax - r10) s>> 3
            
            if (rax.d == 0xffffffff)
                break
            
            void* rcx_1 = &r10[sx.q(rax.d)]
            memmove(rcx_1, rcx_1 + 8, (r11.d - rax.d - 1) << 3)
            arg1[1].d -= 1
            sub_141cc23c0(arg1)
            int64_t rax_2
            rax_2.b = 1
            return rax_2
        
        rax = &rax[1]
    while (rax != r9)

rax.b = 0
return rax
