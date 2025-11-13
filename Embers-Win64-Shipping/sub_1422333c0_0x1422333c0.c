// 函数: sub_1422333c0
// 地址: 0x1422333c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_3 = 0
int32_t i = 0
int128_t zmm6 = zx.o(0)
float zmm1

while (i s>= 0)
    if (i s>= *(arg1 + 0x30))
        break
    
    int64_t rcx_1 = sx.q(i) << 6
    i += 1
    zmm1 = __minss_xmmss_memss(__minss_xmmss_memss((*arg2)[1], *arg2), (*arg2)[2]) f*
        *(rcx_1 + *(arg1 + 0x28) + 0x3c)
    zmm6.d = zmm6.d f+ zmm1 * zmm1 * zmm1 * 4.18868542f

int32_t i_1 = 0

while (i_1 s>= 0)
    if (i_1 s>= *(arg1 + 0x40))
        break
    
    float temp0_4 = __minss_xmmss_memss(__minss_xmmss_memss((*arg2)[1], *arg2), (*arg2)[2])
    void* rcx_3 = sx.q(i_1) * 0x58 + *(arg1 + 0x38)
    i_1 += 1
    zmm6.d = zmm6.d f+ temp0_4 f* *(rcx_3 + 0x4c) * temp0_4 f* *(rcx_3 + 0x48) * temp0_4 f*
        *(rcx_3 + 0x50)

int32_t i_2 = 0

while (i_2 s>= 0)
    if (i_2 s>= *(arg1 + 0x50))
        break
    
    float temp0_6 = __minss_xmmss_memss(__minss_xmmss_memss((*arg2)[1], *arg2), (*arg2)[2])
    void* rcx_6 = sx.q(i_2) * 0x50 + *(arg1 + 0x48)
    i_2 += 1
    zmm1 = temp0_6 f* *(rcx_6 + 0x48)
    zmm6.d = zmm6.d f+ (temp0_6 f* *(rcx_6 + 0x4c) + zmm1 * 1.33329999f) * zmm1 * zmm1 * 3.14159274f

for (; i_3 s>= 0; i_3 += 1)
    if (i_3 s>= *(arg1 + 0x60))
        break
    
    float zmm0
    zmm0, zmm6 = sub_142232f90(sx.q(i_3) * 0xb0 + *(arg1 + 0x58), arg2)
    zmm6.d = zmm6.d f+ zmm0

return zmm6.d
