// 函数: sub_140b33240
// 地址: 0x140b33240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = arg1[1]
int64_t rbx = sx.q(arg3)

if (r9 + (rbx << 1) u>= arg1[2])
    sub_140b38e20(arg1, rbx)
    r9 = arg1[1]

int32_t i_1 = 0
arg1[1] = r9 + (rbx << 1)

if (rbx.d s> 0 && rbx.d u>= 0x20)
    int32_t rax_3 = rbx.d & 0x8000001f
    
    if (rax_3 s< 0)
        rax_3 = ((rax_3 - 1) | 0xffffffe0) + 1
    
    int64_t* rdx_1 = arg2 + 8
    void* r8 = r9 + 0x20
    
    do
        uint128_t zmm0 = zx.o(rdx_1[-1])
        i_1 += 0x20
        uint128_t zmm1 = zx.o(*rdx_1)
        rdx_1 = &rdx_1[4]
        zmm0 = _mm_unpacklo_epi8(zmm0, zmm0.q)
        zmm1 = _mm_unpacklo_epi8(zmm1, zmm1.q)
        r8 += 0x40
        zmm0 = _mm_srai_epi16(zmm0, 8)
        zmm1 = _mm_srai_epi16(zmm1, 8)
        *(r8 - 0x60) = zmm0
        zmm0 = zx.o(rdx_1[-3])
        zmm0 = _mm_srai_epi16(_mm_unpacklo_epi8(zmm0, zmm0.q), 8)
        *(r8 - 0x50) = zmm1
        zmm1 = zx.o(rdx_1[-2])
        zmm1 = _mm_srai_epi16(_mm_unpacklo_epi8(zmm1, zmm1.q), 8)
        *(r8 - 0x40) = zmm0
        *(r8 - 0x30) = zmm1
    while (-8 - arg2 + rdx_1 s< sx.q(rbx.d - rax_3))

for (int64_t i = sx.q(i_1); i s< rbx; i += 1)
    *(r9 + (i << 1)) = sx.w(*(i + arg2))

return arg1
