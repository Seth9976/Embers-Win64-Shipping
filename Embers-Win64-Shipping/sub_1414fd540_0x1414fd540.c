// 函数: sub_1414fd540
// 地址: 0x1414fd540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t r8 = -1
int32_t r9 = (arg2 u>> 0x10 ^ arg2) * 0x85ebca6b
int32_t r9_1 = (r9 u>> 0xd ^ r9) * 0xc2b2ae35
uint64_t rax_9 = (zx.q(r9_1 u>> 0x10) ^ zx.q(r9_1)) & 0x1fff
uint64_t rdx = zx.q(*(arg1 + (rax_9 << 1) + 0xc))

while (rdx.d != 0xffff)
    if (*(arg1 + (rdx << 2) + 0x400c) == arg2)
        int32_t rax_12 = zx.d(*(arg1 + (rdx << 1) + 0x800c)) + arg3
        
        if (rax_12 u<= 0xffff)
            r8 = rax_12.w
        
        *(arg1 + (rdx << 1) + 0x800c) = r8
        return rax_12
    
    rax_9 = zx.q(rax_9.d + 1) & 0x1fff
    rdx = zx.q(*(arg1 + (rax_9 << 1) + 0xc))

uint64_t rdx_1 = zx.q(*(arg1 + 4))

if (rdx_1.d u< 0x1000)
    *(arg1 + 4) = (rdx_1 + 1).d
    *(arg1 + (rax_9 << 1) + 0xc) = rdx_1.w
    *(arg1 + (rdx_1 << 2) + 0x400c) = arg2
    *(arg1 + (rdx_1 << 1) + 0x800c) = arg3.w

return rax_9
