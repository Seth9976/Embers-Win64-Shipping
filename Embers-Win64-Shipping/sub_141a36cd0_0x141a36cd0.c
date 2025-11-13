// 函数: sub_141a36cd0
// 地址: 0x141a36cd0
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
            sub_1405c50f0(&arg1[2])
        
        int32_t* rcx_3 = rdi_1 * 0x1c + arg1[2]
        
        if (i_1 != 0)
            void* rax_5 = &rcx_3[4]
            int32_t i
            
            do
                *rcx_3 = 0xffffffff
                rcx_3 = &rcx_3[7]
                *(rax_5 - 0xc) = 0
                *(rax_5 - 4) = 0
                *(rax_5 + 4) = 0
                *(rax_5 + 8) = 0
                rax_5 += 0x1c
                i = i_1
                i_1 -= 1
            while (i != 1)
    else if (rax_4 s< rdi_1.d && rax_4 != rdi_1.d)
        arg1[3].d = rax_4
        sub_1405c5460(&arg1[2])
    
    memmove(r15 * 0x1c + arg1[2], sx.q(*r14) * 0x1c + arg1[2], r14[1] * 0x1c)
    *r14 = r15.d
    rdx_1 = r14[1]

int128_t* rcx_9 = sx.q(r15.d + rdx_1) * 0x1c + arg1[2]
*rcx_9 = *arg3
rcx_9[1].q = arg3[1].q
int32_t result = *(arg3 + 0x18)
*(rcx_9 + 0x18) = result
r14[1] += 1
return result
