// 函数: sub_14174e100
// 地址: 0x14174e100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(*(arg1 + 0x20))
int32_t r9 = 0

if (rax.d s<= 0)
    return rax

int64_t r8 = 0
void* rcx = *(arg1 + 0x18)

while (true)
    int64_t rax_1 = *(rcx + 8)
    int64_t rdx
    
    if (rax_1 != 0)
        rdx = arg2[1]
    
    bool cond:0_1
    
    if (rax_1 == 0 || rdx == 0)
        cond:0_1 = *rcx == *arg2
    else
        cond:0_1 = rax_1 == rdx
    
    rax_1.b = cond:0_1
    
    if (rax_1.b != 0)
        break
    
    r9 += 1
    r8 += 1
    rcx += 0x40
    
    if (r8 s>= rax)
        return rax_1

int32_t rcx_1 = *(arg1 + 0x20)
int32_t rax_4 = rcx_1 - r9 - 1

if (rax_4 s>= 1)
    rax_4 = 1

if (rax_4 != 0)
    memcpy((sx.q(r9) << 6) + *(arg1 + 0x18), (sx.q(rcx_1 - rax_4) << 6) + *(arg1 + 0x18), 
        rax_4 << 6)
    rcx_1 = *(arg1 + 0x20)

*(arg1 + 0x20) = rcx_1 - 1
return sub_1407c3fe0(arg1 + 0x18) __tailcall
