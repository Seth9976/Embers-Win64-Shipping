// 函数: sub_142b79370
// 地址: 0x142b79370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rax_1
int64_t r8
int32_t r9

if (arg2 != 0)
    r9 = 0x100
    r8 = sx.q(sub_142b790c0(arg1, arg2) + 1) << 2
    int32_t rcx = *(r8 + *arg1)
    int32_t rax_6 = 0x5000500
    
    if (rcx.b s< 0)
        int32_t rcx_1 = rcx & 0xffffff7f
        
        if (rcx_1 u> 0x5000500)
            rcx_1 = 0x5000500
        
        rax_6 = rcx_1
    
    rax_1 = rax_6 u>> 0x10
else
    void* rdx = *arg1
    r9 = 0
    r8 = sx.q(*(rdx + 4)) << 2
    rax_1 = zx.d(*(r8 + rdx + 2))

if (arg3 u<= rax_1)
    return zx.q(r9)

void* rdx_2 = *arg1 + r8
uint32_t rcx_2

do
    rcx_2 = rax_1
    rax_1 = zx.d(*(rdx_2 + 2))
    rdx_2 += 4
while (arg3 u> rax_1)

return zx.q(rcx_2)
