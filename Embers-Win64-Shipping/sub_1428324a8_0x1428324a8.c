// 函数: sub_1428324a8
// 地址: 0x1428324a8
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2)

if (rdi.d s< 0 || rdi.d s>= *(arg1 + 0x18))
    sub_142833a04(2, "Channel out of range", arg3)
else
    if (arg4 == 0)
        return sub_142832370(arg1, rdi.d, arg3.d)
    
    void* r14_1 = *(*(arg1 + 0x58) + (rdi << 3))
    
    if (*(r14_1 + 0x10) != 0)
        sub_14283299c(arg1, rdi.d, arg3.d)
        int32_t rdx_2 = *(arg1 + 0x70)
        *(arg1 + 0x70) = rdx_2 + 1
        return sub_142832fdc(arg1, rdx_2, *(r14_1 + 0x10), 0, rdi.d, arg3.d, arg4)
    
    if (*(arg1 + 0xe) != 0)
        int64_t zmm0
        zmm0.d = float.s(zx.q(*(arg1 + 0x2c)))
        char const* const var_10_1 = "channel has no preset"
        int64_t var_18_1 = 0
        zmm0.d = zmm0.d f/ 44100f
        int64_t var_20_1 = (zx.o(0)).q
        int32_t var_28
        var_28.q = _mm_cvtps_pd(zmm0)
        int32_t var_30
        var_30.q = 0
        int32_t var_38_1 = arg4
        sub_142833a04(3, "noteon\t%d\t%d\t%d\t%05d\t%.3f\t\t%.3f\t%d\t%s", zx.q(rdi.d))

return 0xffffffff
