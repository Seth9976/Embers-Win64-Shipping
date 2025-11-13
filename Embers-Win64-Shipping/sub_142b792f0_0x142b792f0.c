// 函数: sub_142b792f0
// 地址: 0x142b792f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r10 = zx.q(arg2)
int32_t rax
uint32_t r9

if (arg2 != 0)
    void* r9_1 = *arg1
    rax = 0x5000500
    int32_t rdx_1 = *(r9_1 + (sx.q(arg2 + 1) << 2))
    
    if (rdx_1.b s< 0)
        int32_t rdx_2 = rdx_1 & 0xffffff7f
        
        if (rdx_2 u> 0x5000500)
            rdx_2 = 0x5000500
        
        rax = rdx_2
    
    r9 = *(r9_1 + 0x10) u>> 8 & 0xff00
else
    void* rdx = *arg1
    r9 = 0x10000
    r10 = sx.q(*(rdx + 4))
    rax = *(rdx + (r10 << 2))

uint32_t rax_5 = rax u>> 0x10

if (rax_5 u> arg3)
    return rax_5

void* rdx_3 = *arg1 + (sx.q(r10.d) << 2)
uint32_t rax_4

do
    int32_t rax_3 = *(rdx_3 + 4)
    rdx_3 += 4
    
    if (rax_3.b s>= 0)
        return r9
    
    rax_4 = rax_3 u>> 0x10
while (rax_4 u<= arg3)

return rax_4
