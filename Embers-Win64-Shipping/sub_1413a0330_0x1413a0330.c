// 函数: sub_1413a0330
// 地址: 0x1413a0330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *(arg1 + 4)
uint64_t rbx_2 = zx.q(r8 s/ 5)
sub_1410b3fe0(arg2, u"DIM_SORT_SIZE", zx.q(r8 - (rbx_2 * 5).d))
int32_t rbx_3 = rbx_2.d & 0x80000001

if (rbx_3 s< 0)
    rbx_3 = ((rbx_3 - 1) | 0xfffffffe) + 1

int64_t r8_2
r8_2.b = rbx_3 == 1
sub_1405d3490(arg2 + 0x2a8, u"DIM_WAVE_OPS", r8_2)
int32_t temp2
int32_t temp3
temp2:temp3 = muls.dp.d(0x66666667, *(arg1 + 4))
int32_t rdx_2 = temp2 s>> 1
uint64_t result = zx.q(rdx_2 u>> 0x1f)
int32_t rdx_4 = (rdx_2 + result.d) & 0x80000001

if (rdx_4 s< 0)
    rdx_4 = ((rdx_4 - 1) | 0xfffffffe) + 1

if (rdx_4 == 1)
    int64_t rdi_1 = sx.q(*(arg2 + 0xb8))
    int32_t rax_4 = (rdi_1 + 1).d
    *(arg2 + 0xb8) = rax_4
    
    if (rax_4 s> *(arg2 + 0xbc))
        sub_1405a4cf0(arg2 + 0xb0)
    
    result = *(arg2 + 0xb0)
    *(result + (rdi_1 << 2)) = 0x13

return result
