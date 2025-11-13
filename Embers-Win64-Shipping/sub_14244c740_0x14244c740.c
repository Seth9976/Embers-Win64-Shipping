// 函数: sub_14244c740
// 地址: 0x14244c740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm0 = zx.o(*arg4)
uint128_t zmm5 = zx.o(*arg3)
void* rbx = *(arg1 + 8)
float zmm6[0x4] = *(rbx + 0x10)
int32_t rax = arg4[1].d
uint128_t zmm7 = _mm_shuffle_ps(zmm5, zmm5, 0x55)
uint128_t zmm9 = zmm0.d
uint128_t zmm3 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
zmm0.d = zmm9.d f* zmm9.d
uint128_t zmm2 = rax
float rax_1 = arg3[1].d
uint128_t zmm1
zmm1.d = zmm2.d f* zmm2.d
uint128_t zmm10
zmm10.d = zmm3.d f* zmm3.d
zmm3.d = zmm3.d f* zmm7.d
zmm9.d = zmm9.d f* zmm5.d
zmm10.d = zmm10.d f+ zmm0.d
zmm7.d = zmm7.d f* zmm7.d
zmm3.d = zmm3.d f+ zmm3.d
zmm9.d = zmm9.d f+ zmm9.d
zmm2.d = zmm2.d f* rax_1
zmm10.d = zmm10.d f+ zmm1.d
zmm5.d = zmm5.d f* zmm5.d
zmm2.d = zmm2.d f+ zmm2.d
zmm9.d = zmm9.d f+ zmm3.d
zmm6[0] = zmm6[0] * zmm6[0]
zmm7.d = zmm7.d f+ zmm5.d
zmm0.d = zmm10.d f* 4f
zmm9.d = zmm9.d f+ zmm2.d
zmm7.d = zmm7.d f+ rax_1 * rax_1
zmm1.d = zmm9.d f* zmm9.d
zmm7.d = zmm7.d f- zmm6[0]
zmm7.d = zmm7.d f* zmm0.d
zmm1.d = zmm1.d f- zmm7.d

if (zmm1.d f< 0f)
    zmm7 = 0xbf800000
else
    zmm7 = _mm_sqrt_ss(0, zmm1.d)
    zmm0.d = 0.5f f/ zmm10.d
    zmm1.d = (zmm9 ^ 0x80000000).d f- zmm7.d
    zmm7.d = zmm7.d f- zmm9.d
    zmm1.d = zmm1.d f* zmm0.d
    zmm7.d = zmm7.d f* zmm0.d
    
    if (zmm1.d f>= 0f)
        if (zmm7.d f>= 0f)
            zmm7 = _mm_max_ss(_mm_min_ss(zmm7.d, zmm1.d).d, 0)
        else
            zmm7 = _mm_max_ss(zmm1.d, 0)
    else if (zmm7.d f< 0f)
        zmm7 = 0xbf800000
    else
        zmm7 = _mm_max_ss(zmm7.d, 0)

*arg2 = 0
arg2[1] = 0

if (not(zmm7.d f<= 0f))
    uint128_t zmm12 = zx.o(0)
    uint128_t zmm15 = *(rbx + 0x64)
    uint128_t zmm11
    zmm11.d = zmm7.d f* 0.0666666701f
    
    do
        zmm1.d = zmm12.d f* zmm7.d
        zmm2.d = (*(arg4 + 4)).d f* zmm1.d
        zmm0.d = arg4[1].d.d f* zmm1.d
        zmm2.d = zmm2.d f+ *(arg3 + 4)
        zmm3.d = (*arg4).d f* zmm1.d
        zmm0.d = zmm0.d f+ arg3[1].d
        zmm3.d = zmm3.d f+ *arg3
        zmm2 ^= 0x80000000
        zmm2.d = zmm2.d f* zmm2.d
        zmm0 ^= 0x80000000
        zmm0.d = zmm0.d f* zmm0.d
        zmm3 ^= 0x80000000
        zmm3.d = zmm3.d f* zmm3.d
        zmm2.d = zmm2.d f+ zmm3.d
        zmm2.d = zmm2.d f+ zmm0.d
        zmm0 = *(rbx + 0x5c)
        float temp0_7[0x4] = _mm_sqrt_ss(zx.o(0)[0], zmm2.d)
        temp0_7[0] = temp0_7[0] f- *(rbx + 0xc)
        zmm0.d = zmm0.d f* temp0_7[0]
        zmm10 = expf(zmm0.d)
        uint128_t zmm0_1
        zmm0_1.d = (*(rbx + 0x28)).d f* temp0_7[0]
        zmm10 = _mm_max_ss(zmm10.d, 0)
        zmm0 = expf(zmm0_1.d)
        bool cond:1_1 = temp0_7[0] f>= *(rbx + 0x74)
        int32_t temp0_9 = _mm_max_ss(zmm0.d, 0)
        
        if (cond:1_1)
            temp0_7[0] = temp0_7[0] f* *(rbx + 0x84)
            temp0_7[0] = temp0_7[0] f+ *(rbx + 0x80)
        else
            temp0_7[0] = temp0_7[0] f* *(rbx + 0x7c)
            temp0_7[0] = temp0_7[0] f+ *(rbx + 0x78)
        
        if (temp0_7[0] >= 0f)
            zmm6 = _mm_min_ss(temp0_7[0], 0x3f800000)
        else
            zmm6 = zx.o(0)
        
        zmm12.d = zmm12.d f+ 0.0666666701f
        zmm2.d = (*(rbx + 0x3c)).d f* zmm10.d
        zmm3.d = (*(rbx + 0x40)).d f* zmm10.d
        zmm0.d = (*(rbx + 0x18)).d f* temp0_9
        zmm1.d = zmm15.d f* zmm6[0]
        zmm2.d = zmm2.d f+ zmm0.d
        zmm0.d = (*(rbx + 0x1c)).d f* temp0_9
        zmm2.d = zmm2.d f+ zmm1.d
        zmm3.d = zmm3.d f+ zmm0.d
        zmm1.d = (*(rbx + 0x68)).d f* zmm6[0]
        zmm0.d = (*(rbx + 0x20)).d f* temp0_9
        zmm3.d = zmm3.d f+ zmm1.d
        zmm2.d = zmm2.d f* zmm11.d
        zmm1.d = (*(rbx + 0x6c)).d f* zmm6[0]
        zmm2.d = zmm2.d f+ *arg2
        zmm3.d = zmm3.d f* zmm11.d
        *arg2 = zmm2.d
        zmm3.d = zmm3.d f+ *(arg2 + 4)
        zmm2.d = (*(rbx + 0x44)).d f* zmm10.d
        *(arg2 + 4) = zmm3.d
        zmm2.d = zmm2.d f+ zmm0.d
        zmm3.d = (*(rbx + 0x48)).d f* zmm10.d
        zmm0.d = (*(rbx + 0x24)).d f* temp0_9
        zmm2.d = zmm2.d f+ zmm1.d
        zmm1.d = (*(rbx + 0x70)).d f* zmm6[0]
        zmm3.d = zmm3.d f+ zmm0.d
        zmm2.d = zmm2.d f* zmm11.d
        zmm3.d = zmm3.d f+ zmm1.d
        zmm2.d = zmm2.d f+ arg2[1].d
        zmm3.d = zmm3.d f* zmm11.d
        arg2[1].d = zmm2.d
        zmm3.d = zmm3.d f+ *(arg2 + 0xc)
        *(arg2 + 0xc) = zmm3.d
    while (zmm12.d f< 1f)

return arg2
