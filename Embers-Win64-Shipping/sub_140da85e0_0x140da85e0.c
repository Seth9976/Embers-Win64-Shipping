// 函数: sub_140da85e0
// 地址: 0x140da85e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return zx.o(0)

float zmm0[0x4] = sub_140da9cd0(arg1, arg2)
int32_t* rax = *(arg1 + 0x38)
float zmm1[0x4] = zx.o(0)
zmm0[0] = zmm0[0] f- rax[1]
zmm0[0] = zmm0[0] f/ *rax
float zmm2[0x4]

if (zmm0[0] >= 0f)
    zmm2 = _mm_min_ss(zmm0[0], 0x3f800000)
else
    zmm2 = zx.o(0)

uint64_t rax_1 = zx.q(rax[2].b)

if (rax_1.d u<= 6)
    switch (rax_1)
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
