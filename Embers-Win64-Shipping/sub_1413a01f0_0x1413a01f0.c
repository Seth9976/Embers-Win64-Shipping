// 函数: sub_1413a01f0
// 地址: 0x1413a01f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = *(arg1 + 4) & 0x80000001

if (rax_1 s< 0)
    rax_1 = ((rax_1 - 1) | 0xfffffffe) + 1

int64_t r8
r8.b = rax_1 == 1
sub_1405d3490(arg2 + 0x2a8, u"DIM_WAVE_OPS", r8)
sub_1405d3490(arg2 + 0x2a8, u"THREADGROUP_SIZE", 0x400)
uint64_t result = zx.q(*(arg1 + 4)) & 0x80000001

if (result.d s< 0)
    result = zx.q(((result.d - 1) | 0xfffffffe) + 1)

if (result.d == 1)
    int64_t rdi_1 = sx.q(*(arg2 + 0xb8))
    int32_t rax_7 = (rdi_1 + 1).d
    *(arg2 + 0xb8) = rax_7
    
    if (rax_7 s> *(arg2 + 0xbc))
        sub_1405a4cf0(arg2 + 0xb0)
    
    result = *(arg2 + 0xb0)
    *(result + (rdi_1 << 2)) = 0x13

return result
