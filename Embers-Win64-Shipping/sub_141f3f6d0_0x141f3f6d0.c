// 函数: sub_141f3f6d0
// 地址: 0x141f3f6d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
arg1[2] = arg2
int32_t rcx = 0

if (arg2 != 0)
    int64_t i_1 = sx.q(arg2[1].d)
    
    if (i_1 s> 0)
        void* rdx = *arg2
        int64_t i
        
        do
            int32_t rax_1 = rcx
            rdx += 2
            rcx += 1
            
            if (*(rdx - 2) == 0xffff)
                rcx = rax_1
            
            i = i_1
            i_1 -= 1
        while (i != 1)

arg1[3].w = rcx.w
int32_t rax_2 = *(arg1 + 0xc)
arg1[1].d = 0

if (rax_2 s< 0 && rax_2 != 0)
    sub_1405c5570(arg1, 0)
    rdi = arg1[1].d

uint64_t rsi = zx.q(arg1[3].w)
int32_t rax_3 = rdi + rsi.d
arg1[1].d = rax_3

if (rax_3 s> *(arg1 + 0xc))
    sub_1405a4d70(arg1)

int64_t result = memset(*arg1 + (sx.q(rdi) << 3), 0, rsi << 3)
*(arg1 + 0x1a) = 1
return result
