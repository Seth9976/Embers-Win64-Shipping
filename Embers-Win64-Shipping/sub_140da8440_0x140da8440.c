// 函数: sub_140da8440
// 地址: 0x140da8440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1

if (rcx == 0)
    return zx.o(0)

float zmm0[0x4] = sub_140da9cd0(rcx, arg2)
float zmm1[0x4] = zx.o(0)
int64_t rcx_1 = sx.q(arg1[1].d) * 3
int64_t rdx = *(*arg1 + 0x38)
zmm0[0] = zmm0[0] f- *(rdx + (rcx_1 << 2) + 4)
zmm0[0] = zmm0[0] f/ *(rdx + (rcx_1 << 2))
float zmm2[0x4]

if (zmm0[0] >= 0f)
    zmm2 = _mm_min_ss(zmm0[0], 0x3f800000)
else
    zmm2 = zx.o(0)

uint64_t rax_2 = zx.q(*(rdx + (rcx_1 << 2) + 8))

if (rax_2.d u<= 6)
    switch (rax_2)
        case 0
            return zmm2
        case 1
            zmm2[0] = zmm2[0] * zmm2[0]
            return zmm2
        case 2
            zmm1 = 0x40000000
            zmm1[0] = 2f - zmm2[0]
            zmm1[0] = zmm1[0] * zmm2[0]
        case 3
            if (not(zmm2[0] >= 0.5f))
                zmm2[0] = zmm2[0] + zmm2[0]
                zmm2[0] = zmm2[0] * 0.5f
                zmm2[0] = zmm2[0] * zmm2[0]
                return zmm2
            
            zmm2[0] = zmm2[0] - 0.5f
            zmm2[0] = zmm2[0] + zmm2[0]
            zmm2[0] = zmm2[0] - 0.5f
            zmm2[0] = zmm2[0] - 2f
            zmm2[0] = zmm2[0] * zmm2[0]
            zmm2[0] = zmm2[0] - 1f
            zmm2[0] = zmm2[0] * -0.5f
            return zmm2
        case 4
            zmm2[0] = zmm2[0] * zmm2[0]
            zmm2[0] = zmm2[0] * zmm2[0]
            return zmm2
        case 5
            zmm2[0] = zmm2[0] - 1f
            zmm2[0] = zmm2[0] * zmm2[0]
            zmm2[0] = zmm2[0] * zmm2[0]
            zmm2[0] = zmm2[0] + 1f
            return zmm2
        case 6
            zmm2[0] = zmm2[0] + zmm2[0]
            
            if (not(zmm2[0] >= 1f))
                zmm2[0] = zmm2[0] * 0.5f
                zmm2[0] = zmm2[0] * zmm2[0]
                zmm2[0] = zmm2[0] * zmm2[0]
                return zmm2
            
            zmm2[0] = zmm2[0] + -2f
            zmm1 = zmm2
            zmm1[0] = zmm1[0] * zmm2[0]
            zmm1[0] = zmm1[0] * zmm2[0]
            zmm1[0] = zmm1[0] * 0.5f
            zmm1[0] = zmm1[0] + 1f

return zmm1
