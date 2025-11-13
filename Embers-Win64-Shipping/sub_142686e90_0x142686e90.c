// 函数: sub_142686e90
// 地址: 0x142686e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 8)
void* arg_8
int32_t* arg_20

if (rcx != 0 && ((sub_142610d20(rcx, arg2, &arg_20, &arg_8) u>> 0x1e).b & 1) != 0)
    uint128_t zmm2 = zx.o(0)
    uint32_t rbx = 0
    void* rsi = arg_8
    int32_t zmm4 = (zx.o(0)).d
    int128_t zmm3 = zx.o(0)
    int32_t* r14 = arg_20
    uint32_t r11 = zx.d(*(rsi + 0x1e))
    
    if (r11 u>= 4)
        int64_t r10_1 = *(r14 + 0x18)
        uint64_t rax_4 = zx.q(((r11 - 4) u>> 2) + 1)
        void* rdi_1 = rsi + 6
        uint64_t i_2 = zx.q(rax_4.d)
        rbx = (rax_4 << 2).d
        uint64_t i
        
        do
            uint64_t r9_2 = zx.q(*(rdi_1 - 2)) * 3
            zmm2.d = zmm2.d f+ *(r10_1 + (r9_2 << 2))
            zmm3.d = zmm3.d f+ *(r10_1 + (r9_2 << 2) + 8)
            uint64_t r8_1 = zx.q(*rdi_1) * 3
            zmm2.d = zmm2.d f+ *(r10_1 + (r8_1 << 2))
            zmm3.d = zmm3.d f+ *(r10_1 + (r8_1 << 2) + 8)
            uint64_t rdx = zx.q(*(rdi_1 + 2)) * 3
            uint64_t rax_8 = zx.q(*(rdi_1 + 4))
            rdi_1 += 8
            zmm2.d = zmm2.d f+ *(r10_1 + (rdx << 2))
            uint64_t rcx_1 = rax_8 * 3
            zmm3.d = zmm3.d f+ *(r10_1 + (rdx << 2) + 8)
            zmm2.d = zmm2.d f+ *(r10_1 + (rcx_1 << 2))
            zmm4 = zmm4 f+ *(r10_1 + (r9_2 << 2) + 4) f+ *(r10_1 + (r8_1 << 2) + 4) f+
                *(r10_1 + (rdx << 2) + 4) f+ *(r10_1 + (rcx_1 << 2) + 4)
            zmm3.d = zmm3.d f+ *(r10_1 + (rcx_1 << 2) + 8)
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    if (rbx u< r11)
        int64_t rdx_1 = *(r14 + 0x18)
        uint64_t i_3 = zx.q(r11 - rbx)
        void* r8_4 = rsi + ((zx.q(rbx) + 2) << 1)
        uint64_t i_1
        
        do
            uint64_t rax_9 = zx.q(*r8_4)
            r8_4 += 2
            uint64_t rcx_2 = rax_9 * 3
            zmm2.d = zmm2.d f+ *(rdx_1 + (rcx_2 << 2))
            zmm4 = zmm4 f+ *(rdx_1 + (rcx_2 << 2) + 4)
            zmm3.d = zmm3.d f+ *(rdx_1 + (rcx_2 << 2) + 8)
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    float zmm1 = 1f f/ _mm_cvtepi32_ps(zx.o(r11)).d
    zmm2.d = zmm2.d f* zmm1
    zmm3.d = zmm3.d f* zmm1
    *arg3 = (_mm_unpacklo_ps(zmm2 ^ data_142d3f780, (zmm3 ^ data_142d3f780).q)).q
    arg3[1].d = zmm4 f* zmm1
    int32_t result
    result.b = 1
    return result

return 0
