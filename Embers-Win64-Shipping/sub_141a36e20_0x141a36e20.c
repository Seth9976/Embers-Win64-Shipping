// 函数: sub_141a36e20
// 地址: 0x141a36e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = sx.q(arg2) * 3
int64_t rax_1 = *arg1
int32_t r9 = *(rax_1 + (rdx << 2) + 8)
int32_t* r14 = rax_1 + (rdx << 2)
int32_t rdx_1 = *(rax_1 + (rdx << 2) + 4)
int64_t r15

if (rdx_1 + 1 s<= r9)
    r15 = zx.q(*r14)
else
    int32_t rax_3 = r9 * 2
    int32_t rcx = 2
    
    if (rax_3 s>= 2)
        rcx = rax_3
    
    r14[2] = rcx
    r15 = sx.q(arg1[3].d)
    int64_t rdi_1 = sx.q(arg1[3].d)
    int32_t rax_4 = r15.d + rcx
    
    if (rax_4 s> rdi_1.d)
        arg1[3].d = rax_4
        int32_t i_1 = rax_4 - rdi_1.d
        
        if (rax_4 s> *(arg1 + 0x1c))
            sub_14083a7e0(&arg1[2])
        
        int32_t* rdx_3 = arg1[2] + rdi_1 * 0xc
        
        if (i_1 != 0)
            int32_t i
            
            do
                *rdx_3 = 0xffffffff
                rdx_3[1] = 0x80000000
                rdx_3[2].b = 0
                rdx_3 = &rdx_3[3]
                i = i_1
                i_1 -= 1
            while (i != 1)
    else if (rax_4 s< rdi_1.d && rax_4 != rdi_1.d)
        arg1[3].d = rax_4
        sub_140775970(&arg1[2])
    
    int64_t r9_1 = arg1[2]
    memmove(r9_1 + r15 * 0xc, r9_1 + sx.q(*r14) * 0xc, r14[1] * 0xc)
    *r14 = r15.d
    rdx_1 = r14[1]

int64_t* rcx_8 = arg1[2] + sx.q(r15.d + rdx_1) * 0xc
*rcx_8 = *arg3
int32_t result = arg3[1].d
rcx_8[1].d = result
r14[1] += 1
return result
