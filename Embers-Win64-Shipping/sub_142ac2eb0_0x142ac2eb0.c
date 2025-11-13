// 函数: sub_142ac2eb0
// 地址: 0x142ac2eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r15 = arg5

if (*r15 s> 0)
    return 0

int32_t rbp = 0
uint32_t rax_1

if (arg3 != 0)
    rax_1 = arg4 u>> 0x1f
else
    rax_1.b = arg4 != 0

if (rax_1 != 0)
    *r15 = 1
    return 0

int64_t r14 = sx.q(arg2[2].d)

if (r14.d == 0)
    return 0

if (r14.d s> arg4)
    *r15 = 0xf
    return zx.q(r14.d)

int64_t rbx_1 = 0

if (r14.d s> 0)
    do
        int64_t rax_5 = *arg2
        int32_t rdx_1
        
        if (rax_5 == 0)
            rdx_1 = *(arg2[1] + (rbx_1 << 2))
        else
            uint32_t rdx = zx.d(*(rax_5 + (rbx_1 << 1)))
            int32_t rcx = *(arg1 + 0x34)
            
            if (rdx s>= rcx)
                rdx += *(arg1 + 0x30) - rcx
            
            rdx_1 = rdx | 0x60000000
        
        void* rax_9 = sub_142ac3aa0(arg1, rdx_1, &arg5)
        
        if (rax_9 == 0)
            *r15 = 0x11
            return 0
        
        rdx_1.b = 1
        sub_142a4aa20((sx.q(rbp) << 6) + arg3, rdx_1.b, rax_9, arg5.d)
        rbp += 1
        rbx_1 += 1
    while (rbx_1 s< r14)

return zx.q(r14.d)
