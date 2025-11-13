// 函数: sub_14108da20
// 地址: 0x14108da20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = *(arg1 + 0x18)
void* rbx = arg1
int32_t rax = *(arg1 + 0x1c)
int32_t rcx = rdi

if (rdi + 1 s> rax)
    int32_t rcx_1 = 4
    uint64_t r8_2 = zx.q((rdi + 0x20) u>> 5)
    
    if (r8_2.d u> 4)
        if (rax + 0x1f u>= 0x20 || zx.q(r8_2.d) u> 4)
            rcx_1 = r8_2.d + 0x10 + ((r8_2 * 3) u>> 3).d
        
        if (r8_2.d u> rcx_1)
            rcx_1 = 0x7fffffff
    
    *(rbx + 0x1c) = rcx_1 << 5
    sub_1410ae4a0(rbx, rdi)
    rcx = *(rbx + 0x18)

*(rbx + 0x18) = rcx + 1
void* rax_5 = *(rbx + 0x10)

if (rax_5 != 0)
    rbx = rax_5

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rdi)
void* rax_10 = rbx + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
int32_t rdx_4 = 1 << (rdi.b & 0x1f)
int32_t rcx_8 = *rax_10
int32_t rdx_5

if (arg2 == 0)
    rdx_5 = not.d(rdx_4) & rcx_8
else
    rdx_5 = rdx_4 | rcx_8

*rax_10 = rdx_5
return zx.q(rdi)
