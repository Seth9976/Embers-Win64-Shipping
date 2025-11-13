// 函数: sub_141deea30
// 地址: 0x141deea30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == arg1)
    return 

int64_t* rax = arg2[2]
arg1[2] = rax
int32_t rcx = 0

if (rax != 0)
    int64_t i_1 = sx.q(rax[1].d)
    
    if (i_1 s> 0)
        void* rdx = *rax
        int64_t i
        
        do
            rax = zx.q(rcx)
            rdx += 2
            rcx += 1
            
            if (*(rdx - 2) == 0xffff)
                rcx = rax.d
            
            i = i_1
            i_1 -= 1
        while (i != 1)

arg1[3].w = rcx.w
arg1[1].d = 0

if (*(arg1 + 0xc) s<= 0xffffffff)
    sub_14083ad10(arg1, 0)

int64_t rdi_1 = sx.q(arg2[1].d)

if (rdi_1.d != 0)
    int32_t rax_1 = arg1[1].d
    int32_t rdx_1 = rax_1 + rdi_1.d
    
    if (rdx_1 s> *(arg1 + 0xc))
        sub_14083ad10(arg1, rdx_1)
        rax_1 = arg1[1].d
    
    memcpy(*arg1 + (sx.q(rax_1) << 3), *arg2, (rdi_1 << 3).d)
    arg1[1].d += rdi_1.d

*(arg1 + 0x1a) = 1
