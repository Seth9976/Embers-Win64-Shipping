// 函数: sub_140f89d30
// 地址: 0x140f89d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

Dbg1::Reset(&arg1[0x95])
uint128_t zmm1 = _mm_cvtps_pd(_mm_max_ss(_mm_cvtepi32_ps(zx.o((*(*arg1 + 0x290))(arg1))).d, 0).q)

if (not(zmm1.q f== arg1[0x7e]))
    arg1[0x7e] = zmm1.q
    sub_140f44620(&arg1[0x78], zmm1)
    sub_140f89930(arg1)

return sub_140f89930(arg1) __tailcall
