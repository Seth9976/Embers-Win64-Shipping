// 函数: sub_140386030
// 地址: 0x140386030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i_4 = sx.q(arg6)
int64_t r12 = sx.q(arg3)
int64_t r15 = arg4
int64_t r8 = arg1
int64_t r13 = sx.q(arg2)

if (arg4 != 0)
    int64_t rax = sx.q(arg5)
    int64_t r11_1 = 0
    
    if (i_4 s>= 4)
        int32_t* rdx = r15 + (rax << 3)
        int32_t* r8_1 = r8 + ((r12 + (r13 << 1)) << 2)
        int64_t i_3 = ((i_4 - 4) u>> 2) + 1
        r11_1 = i_3 << 2
        int64_t i
        
        do
            r8_1[neg.q(r13) * 2] = rdx[neg.q(rax) * 2]
            r8_1[neg.q(r13)] = rdx[neg.q(rax)]
            *r8_1 = *rdx
            int32_t rax_6 = rdx[rax]
            rdx = &rdx[rax * 4]
            r8_1[r13] = rax_6
            r8_1 = &r8_1[r13 * 4]
            i = i_3
            i_3 -= 1
        while (i != 1)
        r15 = arg4
        r12 = zx.q(arg3)
        r8 = arg1
        rax = zx.q(arg5)
    
    if (r11_1 s< i_4)
        int64_t rax_7 = sx.q(rax.d)
        int32_t* rdx_1 = r15 + ((rax_7 * r11_1) << 2)
        int64_t i_5 = i_4 - r11_1
        int32_t* r8_2 = r8 + ((r13 * r11_1 + sx.q(r12.d)) << 2)
        int64_t i_1
        
        do
            int32_t rax_10 = *rdx_1
            rdx_1 = &rdx_1[rax_7]
            *r8_2 = rax_10
            r8_2 = &r8_2[r13]
            i_1 = i_5
            i_5 -= 1
        while (i_1 != 1)
else if (i_4 s> 0)
    int32_t* rcx_6 = arg1 + (r12 << 2)
    int64_t i_2
    
    do
        *rcx_6 = 0
        rcx_6 = &rcx_6[r13]
        i_2 = i_4
        i_4 -= 1
    while (i_2 != 1)
