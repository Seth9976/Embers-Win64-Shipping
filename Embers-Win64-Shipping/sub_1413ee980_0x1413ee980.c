// 函数: sub_1413ee980
// 地址: 0x1413ee980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(*(arg1 + 4))
int32_t rdx_1 = temp2 & 3
int32_t rax_2 = temp3 + rdx_1
int32_t r14_1 = rax_2 s>> 2
uint64_t rbx_2 = zx.q(r14_1 s/ 3)
int32_t temp6
int32_t temp7
temp6:temp7 = sx.q(rbx_2.d)
int32_t temp12
int32_t temp13
temp12:temp13 = sx.q(divs.dp.d(temp6:temp7, 2))
int32_t temp18
int32_t temp19
temp18:temp19 = sx.q(divs.dp.d(temp12:temp13, 2))
sub_1410b3fe0(arg2, u"LIGHT_TYPE", zx.q((rax_2 & 3) - rdx_1))
sub_1410b3fe0(arg2, u"DIM_DENOISER_OUTPUT", zx.q(r14_1 - (rbx_2 * 3).d))
int64_t r8_2
r8_2.b = mods.dp.d(temp6:temp7, 2) == 1
sub_1405d3490(arg2 + 0x2a8, u"ENABLE_TWO_SIDED_GEOMETRY", r8_2)
sub_1410b3fe0(arg2, u"USE_HAIR_LIGHTING", zx.q(mods.dp.d(temp12:temp13, 2)))
int64_t r8_4
r8_4.b = mods.dp.d(temp18:temp19, 2) == 1
sub_1405d3490(arg2 + 0x2a8, u"ENABLE_MULTIPLE_SAMPLES_PER_PIXEL", r8_4)
int32_t r15_1 = divs.dp.d(temp18:temp19, 2) & 0x80000001

if (r15_1 s< 0)
    r15_1 = ((r15_1 - 1) | 0xfffffffe) + 1

sub_1410b3fe0(arg2, u"ENABLE_TRANSMISSION", zx.q(r15_1))
sub_1410b3fe0(arg2, u"UE_RAY_TRACING_DYNAMIC_CLOSEST_HIT_SHADER", 0)
int32_t rbx_3 = 1
sub_1410b3fe0(arg2, u"UE_RAY_TRACING_DYNAMIC_ANY_HIT_SHADER", 1)
sub_1410b3fe0(arg2, u"UE_RAY_TRACING_DYNAMIC_MISS_SHADER", 0)
int32_t rcx_9 = *(arg1 + 4)
int32_t rcx_10 = rcx_9 & 0x80000003

if (rcx_10 s< 0)
    rcx_10 = ((rcx_10 - 1) | 0xfffffffc) + 1

if (rcx_10 != 0 || (1 & (rcx_9 s/ 0x18).b) != 0)
    rbx_3 = 0

return sub_1410b3fe0(arg2, u"UE_RAY_TRACING_COHERENT_RAYS", zx.q(rbx_3)) __tailcall
