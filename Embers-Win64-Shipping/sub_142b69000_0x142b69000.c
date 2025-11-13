// 函数: sub_142b69000
// 地址: 0x142b69000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 8)
char rdi = *(arg1 + 0x10)
uint64_t result = sub_142af42a0(rbx, arg2)

if (result.w u< *(rbx + 0x12) && (result.b & 1) != 0)
    uint64_t rcx_1
    
    if (rdi != 0 && result.w != 1)
        rcx_1 = zx.q(result.w)
    
    if (rdi == 0 || result.w == 1 || *(*(rbx + 0x30) + (rcx_1 u>> 1 << 1)) u<= 0x1ff)
        result.b = 1
        return result

result.b = 0
return result
