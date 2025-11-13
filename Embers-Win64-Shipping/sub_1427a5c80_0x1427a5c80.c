// 函数: sub_1427a5c80
// 地址: 0x1427a5c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_1 = *(arg1 + 0xc0)
int32_t zmm1 = (zx.o(0)).d
float zmm0 = *(rax_1 + 0x50) - 0.0250000004f

if (not(zmm0 < 0f))
    zmm1 = __minss_xmmss_memss(zmm0, 0x3f800000)

*(rax_1 + 0x50) = zmm1
return sub_1427b2430(arg1) __tailcall
