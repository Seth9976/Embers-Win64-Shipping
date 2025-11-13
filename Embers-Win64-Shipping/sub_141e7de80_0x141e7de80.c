// 函数: sub_141e7de80
// 地址: 0x141e7de80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1[0x4] = data_143f39c10
int64_t rdi = sx.q(arg2)
zmm1[0].q = zx.o(0) u>> 0x40
*arg3 = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
arg3[1] = zx.o(0)
arg3[2] = __andps_xmmxud_memxud(data_143f39c10, data_143f39c20)

if (rdi.d != 0xffffffff)
    if (sub_140a80ea0() == 0)
        if (rdi.d s< *(arg1 + 0x88))
            float (* rax_4)[0x4] = (rdi << 6) + *(arg1 + 0x80)
            *arg3 = *rax_4
            arg3[1] = rax_4[1]
            float zmm0[0x4] = rax_4[2]
            rax_4.b = 1
            arg3[2] = zmm0
            return rax_4
    else if (rdi.d s< *(arg1 + 0x138))
        int64_t rax_1
        rax_1.b = 1
        float (* rcx_2)[0x4] = rdi * 0xc0 + *(arg1 + 0x130)
        *arg3 = *rcx_2
        arg3[1] = rcx_2[1]
        arg3[2] = rcx_2[2]
        return rax_1

return 0
