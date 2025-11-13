// 函数: sub_142b13c70
// 地址: 0x142b13c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rax = *(arg1 + 8)
int64_t r9 = sx.q(*arg2)
void* rbx

if ((rax.b & 0x11) == 0)
    rbx = arg1 + 0xa
    
    if ((rax.b & 2) == 0)
        rbx = *(arg1 + 0x18)
else
    rbx = nullptr

int32_t rdx_1

if (rax s< 0)
    rdx_1 = *(arg1 + 0xc)
else
    rdx_1 = sx.d(rax) s>> 5

int32_t result = ((sub_142b138d0(rbx + (r9 << 1), rdx_1 - r9.d) - rbx) s>> 1).d

if (arg3 != 0)
    *arg2 = result

return result
