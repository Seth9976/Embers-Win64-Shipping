// 函数: sub_1405b2ba0
// 地址: 0x1405b2ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = *(arg1 + 0x18)
void* rbx = arg1
int32_t rax = *(arg1 + 0x1c)
int32_t rcx = rdi

if (rdi + 1 s> rax)
    uint64_t rcx_1 = 4
    uint64_t rsi_2 = zx.q((rdi + 0x20) u>> 5)
    int32_t rdx
    
    if (rsi_2.d u> 4)
        if (rax + 0x1f u>= 0x20 || zx.q(rsi_2.d) u> 4)
            rcx_1 = rsi_2 + 0x10 + ((rsi_2 * 3) u>> 3)
        
        int64_t rax_4 = sub_140a846a0(rcx_1 << 2, 0)
        rdx = *(rbx + 0x18)
        uint32_t rax_5 = (rax_4 u>> 2).d
        
        if (rsi_2.d s> rax_5)
            rax_5 = 0x7fffffff
        
        rcx_1 = zx.q(rax_5)
    else
        rdx = rdi
    
    *(rbx + 0x1c) = rcx_1.d << 5
    sub_1405a4410(rbx, rdx)
    rcx = *(rbx + 0x18)

*(rbx + 0x18) = rcx + 1
void* rax_7 = *(rbx + 0x10)

if (rax_7 != 0)
    rbx = rax_7

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rdi)
void* rax_12 = rbx + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
int32_t rdx_4 = 1 << (rdi.b & 0x1f)
int32_t rcx_9 = *rax_12
int32_t rdx_5

if (arg2 == 0)
    rdx_5 = not.d(rdx_4) & rcx_9
else
    rdx_5 = rdx_4 | rcx_9

*rax_12 = rdx_5
return zx.q(rdi)
