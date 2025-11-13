// 函数: sub_142afcd10
// 地址: 0x142afcd10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg2

if (arg1[3].d s> 0 || arg2 == 0)
    return 

if (arg2 s< 0)
    arg1[3].d = 1
    return 

uint64_t rax = zx.q(*(arg1 + 0xc))

if (rax.d s> 0)
    int64_t rcx = sx.q(rax.d - 1)
    int64_t rax_2 = *arg1
    int16_t* rdx = rax_2 + (rcx << 1)
    rax = zx.q(*(rax_2 + (rcx << 1)))
    
    if (rax.d s< 0xfff)
        if (0xfff - rax.d s>= rdi)
            rax.w += rdi.w
            *rdx = rax.w
            return 
        
        *rdx = 0xfff
        rdi -= 0xfff - rax.d

if (rdi s>= 0x1000)
    uint64_t i_1 = zx.q(rdi) u>> 0xc
    rdi += neg.d(i_1.d) << 0xc
    uint64_t i
    
    do
        if (*(arg1 + 0xc) s>= arg1[1].d)
            rax = sub_142afce60(arg1)
        
        if (*(arg1 + 0xc) s< arg1[1].d || rax.b != 0)
            *(*arg1 + (sx.q(*(arg1 + 0xc)) << 1)) = 0xfff
            *(arg1 + 0xc) += 1
        
        i = i_1
        i_1 -= 1
    while (i != 1)

if (rdi s> 0)
    sub_142afce00(arg1, rdi.w - 1)
