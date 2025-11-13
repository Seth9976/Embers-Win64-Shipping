// 函数: sub_1413eebd0
// 地址: 0x1413eebd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(*(arg1 + 4))
int32_t temp0 = divs.dp.d(temp2:temp3, 2)
uint64_t r14_2 = zx.q(temp0 s/ 3)
int32_t temp10
int32_t temp11
temp10:temp11 = sx.q(r14_2.d)
int32_t temp16
int32_t temp17
temp16:temp17 = sx.q(divs.dp.d(temp10:temp11, 2))
int32_t temp22
int32_t temp23
temp22:temp23 = sx.q(divs.dp.d(temp16:temp17, 2))
int64_t r8
r8.b = mods.dp.d(temp2:temp3, 2) == 1
sub_1405d3490(arg2 + 0x2a8, u"DIM_DENOISER_OUTPUT", r8)
sub_1410b3fe0(arg2, u"DIM_DEFERRED_MATERIAL_MODE", zx.q(temp0 - (r14_2 * 3).d))
int64_t r8_2
r8_2.b = mods.dp.d(temp10:temp11, 2) == 1
sub_1405d3490(arg2 + 0x2a8, u"DIM_HYBRID", r8_2)
int64_t r8_3
r8_3.b = mods.dp.d(temp16:temp17, 2) == 1
sub_1405d3490(arg2 + 0x2a8, u"ENABLE_TWO_SIDED_GEOMETRY", r8_3)
int64_t r8_4
r8_4.b = mods.dp.d(temp22:temp23, 2) == 1
sub_1405d3490(arg2 + 0x2a8, u"DIM_MISS_SHADER_LIGHTING", r8_4)
int32_t r15_1 = divs.dp.d(temp22:temp23, 2) & 0x80000001

if (r15_1 s< 0)
    r15_1 = ((r15_1 - 1) | 0xfffffffe) + 1

int64_t r8_5
r8_5.b = r15_1 == 1
sub_1405d3490(arg2 + 0x2a8, u"DIM_RAY_TRACE_SKY_LIGHT_CONTRIBUTION", r8_5)
int32_t temp28
int32_t temp29
temp28:temp29 = sx.q(*(arg1 + 4))
int32_t rax_13 = (temp29 - temp28) s>> 1
uint64_t rdx_11 = zx.q(rax_13 s/ 3)
int32_t temp32
int32_t temp33
temp32:temp33 = sx.q(rdx_11.d)
int32_t rbx_2 = rax_13 - (rdx_11 * 3).d
int32_t rax_18 = (temp33 + (temp32 & 3)) s>> 2 & 0x80000001

if (rax_18 s< 0)
    rax_18 = ((rax_18 - 1) | 0xfffffffe) + 1

int32_t r12
r12.b = rax_18 == 1
int32_t* result = sub_1405d3490(arg2 + 0x2a8, u"UE_RAY_TRACING_DYNAMIC_MISS_SHADER", zx.q(r12))
int16_t* rdx_14

if (rbx_2 != 2)
    if (rbx_2 != 1)
        return result
    
    rdx_14 = u"UE_RAY_TRACING_LIGHTWEIGHT_CLOSEST_HIT_SHADER"
else
    rdx_14 = u"UE_RAY_TRACING_DISPATCH_1D"

return sub_1410b3fe0(arg2, rdx_14, 1)
