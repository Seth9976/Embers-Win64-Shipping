// 函数: sub_141a387f0
// 地址: 0x141a387f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg1[1].d)
int32_t rax = arg1[3].d
*arg2 = rbx.d
int32_t rax_1 = (rbx + 1).d
int32_t var_14 = 0
arg1[1].d = rax_1

if (rax_1 s> *(arg1 + 0xc))
    sub_14083a7e0(arg1)

int64_t rax_2 = *arg1
int64_t rcx = rbx * 3
*(rax_2 + (rcx << 2)) = rax.q
*(rax_2 + (rcx << 2) + 8) = arg3
int32_t rcx_2 = arg1[3].d + arg3
int64_t rdi_1 = sx.q(arg1[3].d)

if (rcx_2 s> rdi_1.d)
    arg1[3].d = rcx_2
    int32_t i_1 = rcx_2 - rdi_1.d
    
    if (rcx_2 s> *(arg1 + 0x1c))
        sub_14083a7e0(&arg1[2])
    
    int32_t* rax_4 = arg1[2] + rdi_1 * 0xc
    
    if (i_1 != 0)
        int32_t i
        
        do
            *rax_4 = 0xffffffff
            rax_4[1] = 0x80000000
            rax_4[2].b = 0
            rax_4 = &rax_4[3]
            i = i_1
            i_1 -= 1
        while (i != 1)
else if (rcx_2 s< rdi_1.d && rcx_2 != rdi_1.d)
    arg1[3].d = rcx_2
    sub_140775970(&arg1[2])

return arg2
