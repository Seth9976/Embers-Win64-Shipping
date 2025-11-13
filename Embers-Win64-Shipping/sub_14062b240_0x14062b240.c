// 函数: sub_14062b240
// 地址: 0x14062b240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3 = *arg1
int32_t zmm2 = (zx.o(0)).d

if (not(zmm3 != 0f) && not(0f f!= arg1[1]) && not(0f f!= arg1[2]))
    return (zx.o(0)).d

uint64_t rax = zx.q(arg2)

if (rax.d u<= 0xb)
    switch (rax)
        case 0
            zmm2 = 0x3f800000
        case 1
            zmm2 = 0x3d06621a
        case 2
            zmm2 = 0x3c23d70a
        case 3
            zmm2 = 0x3f19999a
        case 4, 5
            zmm2 = 0x3a1d4952
        case 6
            zmm2 = 0x3d1374bc
        case 7
            zmm2 = 0x3cb73ff4
        case 8
            zmm2 = 0x3c9f3d60
        case 9
            zmm2 = 0x37f490da
        case 0xa
            zmm2 = 0x2e12b3fa
        case 0xb
            zmm2 = 0x3c332d77

float zmm0 = arg1[2]
float zmm1 = arg1[1]
return _mm_sqrt_ss(0, zmm1 * zmm1 + zmm3 * zmm3 + zmm0 * zmm0) f* zmm2
