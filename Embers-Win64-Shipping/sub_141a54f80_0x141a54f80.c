// 函数: sub_141a54f80
// 地址: 0x141a54f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int128_t* rdi = arg4
int64_t rdx = sx.q(arg2) * 3
int64_t rax_1 = *arg1
int32_t r8 = *(rax_1 + (rdx << 2) + 8)
int32_t* r14 = rax_1 + (rdx << 2)
int32_t rdx_1 = *(rax_1 + (rdx << 2) + 4)
int64_t r12

if (rdx_1 + 1 s<= r8)
    r12 = zx.q(*r14)
else
    int32_t rax_3 = r8 * 2
    int32_t rcx = 2
    
    if (rax_3 s>= 2)
        rcx = rax_3
    
    r14[2] = rcx
    r12 = sx.q(arg1[3].d)
    int64_t rsi_1 = sx.q(arg1[3].d)
    int32_t rax_4 = r12.d + rcx
    
    if (rax_4 s> rsi_1.d)
        arg1[3].d = rax_4
        int32_t i_1 = rax_4 - rsi_1.d
        
        if (rax_4 s> *(arg1 + 0x1c))
            sub_1405c4e40(&arg1[2])
        
        void* rcx_4 = (rsi_1 << 5) + arg1[2]
        
        if (i_1 != 0)
            int32_t i
            
            do
                rcx_4 += 0x20
                int32_t arg_c = 0
                *(rcx_4 - 0x20) = 0.q
                int32_t var_44_1 = 0
                *(rcx_4 - 0x18) = 0.q
                *(rcx_4 - 0x10) = -1
                *(rcx_4 - 8) = -1
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        rdi = arg4
    else if (rax_4 s< rsi_1.d && rax_4 != rsi_1.d)
        arg1[3].d = rax_4
        sub_1405dad20(&arg1[2])
    
    memmove((r12 << 5) + arg1[2], (sx.q(*r14) << 5) + arg1[2], r14[1] << 5)
    *r14 = r12.d
    rdx_1 = r14[1]

if (arg3 s>= 0)
    rbx = r14[2] - 1
    
    if (arg3 s< rbx)
        rbx = arg3

if (rbx s<= rdx_1 - 1)
    int32_t rax_8 = r12.d + rbx
    memmove((sx.q(rax_8 + 1) << 5) + arg1[2], (sx.q(rax_8) << 5) + arg1[2], (rdx_1 - rbx) << 5)
    rdx_1 = r14[1]
    r12 = zx.q(*r14)

r14[1] = rdx_1 + 1
int64_t result = arg1[2]
int64_t rcx_13 = sx.q(r12.d + rbx) << 5
*(rcx_13 + result) = *rdi
*(rcx_13 + result + 0x10) = rdi[1]
return result
