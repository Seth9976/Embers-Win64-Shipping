// 函数: sub_1420c6760
// 地址: 0x1420c6760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = 0
uint64_t* result = arg1
uint128_t zmm2 = zx.o(0)
int64_t zmm4 = (zx.o(0)).q
int32_t zmm3 = (zx.o(0)).d
*arg1 = 0
arg1[1].d = 0

if (arg2[1].d s> 0)
    int64_t r8_1 = sx.q(arg2[1].d)
    
    if (r8_1 s>= 4)
        void* rax_1 = *arg2
        void* rcx = rax_1 + 8
        void* rax_2 = rax_1 + 0x14
        int64_t i_2 = ((r8_1 - 4) u>> 2) + 1
        r9 = i_2 << 2
        int64_t i
        
        do
            zmm2.d = zmm2.d f+ *(rcx - 8)
            zmm4.d = zmm4.d f+ *(rcx - 4)
            zmm2.d = zmm2.d f+ *(rcx + 4)
            zmm4.d = zmm4.d f+ *(rax_2 - 4)
            zmm2.d = zmm2.d f+ *(rcx + 0x10)
            zmm4.d = zmm4.d f+ *(rax_2 + 8)
            zmm2.d = zmm2.d f+ *(rcx + 0x1c)
            zmm4.d = zmm4.d f+ *(rax_2 + 0x14)
            zmm3 = zmm3 f+ *rcx f+ *rax_2 f+ *(rax_2 + 0xc) f+ *(rax_2 + 0x18)
            rcx += 0x30
            rax_2 += 0x30
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    if (r9 s< r8_1)
        int64_t i_3 = r8_1 - r9
        int32_t* rdx_2 = *arg2 + r9 * 0xc
        int64_t i_1
        
        do
            zmm2.d = zmm2.d f+ *rdx_2
            zmm4.d = zmm4.d f+ rdx_2[1]
            zmm3 = zmm3 f+ rdx_2[2]
            rdx_2 = &rdx_2[3]
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    float zmm1 = 1f f/ _mm_cvtepi32_ps(zx.o(arg2[1].d)).d
    zmm2.d = zmm2.d f* zmm1
    zmm4.d = zmm4.d f* zmm1
    *result = (_mm_unpacklo_ps(zmm2, zmm4)).q
    result[1].d = zmm3 f* zmm1

return result
