// 函数: sub_142b68ed0
// 地址: 0x142b68ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 8)
char rdi = *(arg1 + 0x10)
uint64_t result = sub_142af42a0(rbx, arg2)

if ((result.b & 1) != 0)
    if (rdi == 0 || result.w == 1)
        result.b = 1
        return result
    
    bool cond:0_1
    
    if (result.w u< *(rbx + 0x1a))
        cond:0_1 = *(*(rbx + 0x30) + (zx.q(result.w) u>> 1 << 1)) u<= 0x1ff
    else
        result.b &= 6
        cond:0_1 = result.b u<= 2
    
    int32_t rdx
    rdx.b = cond:0_1
    
    if (rdx != 0)
        result.b = 1
        return result

result.b = 0
return result
