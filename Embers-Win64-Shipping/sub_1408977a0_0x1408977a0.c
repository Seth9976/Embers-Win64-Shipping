// 函数: sub_1408977a0
// 地址: 0x1408977a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx_4 = *(arg1 + 0x10)
int64_t r8 = *(arg1 + 0x38)
float zmm1[0x4] = zx.o(0)

if (rdx_4 + 1 s< 0)
    zmm1[0] = float.s((rdx_4 + 1) u>> 1 | (zx.q((rdx_4 + 1).d) & 1))
    zmm1[0] = zmm1[0] + zmm1[0]
else
    zmm1[0] = float.s(rdx_4 + 1)

zmm1[0] = zmm1[0] f/ *arg1
int32_t rcx = int.d(zmm1[0])

if (rcx != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx)).d f== zmm1[0]))
    zmm1 =
        _mm_cvtepi32_ps(zx.o(rcx + ((_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0].q)) & 1) ^ 1)))

int64_t rcx_2 = 0

if (not(zmm1[0] < 9.22337204e+18f))
    zmm1[0] = zmm1[0] - 9.22337204e+18f
    
    if (not(zmm1[0] >= 9.22337204e+18f))
        rcx_2 = -0x8000000000000000

int64_t rax_8 = int.q(zmm1[0]) + rcx_2
int64_t rcx_3 = 8

if (rax_8 u> 8)
    rcx_3 = rax_8

if (r8 u< rcx_3)
    if (r8 u>= 0x200)
        r8 = rcx_3
    else
        r8 <<= 3
        
        if (r8 u< rcx_3)
            r8 = rcx_3

return sub_1408975e0(arg1, r8) __tailcall
