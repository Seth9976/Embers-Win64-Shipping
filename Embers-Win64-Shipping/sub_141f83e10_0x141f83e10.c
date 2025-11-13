// 函数: sub_141f83e10
// 地址: 0x141f83e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0

if (arg3 == 0)
    return arg1

int128_t zmm7 = zx.o(0)
int128_t zmm6
int128_t var_18_1 = zmm6
uint128_t zmm8
zmm8.d = _mm_cvtepi32_ps(zx.o(*(arg3 + 0x6c))).d f+ arg6
zmm8.d = zmm8.d f* arg4.d

while (true)
    int16_t* rax_1 = *(arg2 + 8)
    int16_t rdx = *rax_1
    
    if (rdx != 0 && (rdx != 0x3c || rax_1[1] != 0x62 || rax_1[2] != 0x72 || rax_1[3] != 0x3e))
        *(arg2 + 8) = &rax_1[1]
    
    if (rdx == 0 || (rdx == 0x3c && rax_1[1] == 0x62 && rax_1[2] == 0x72 && rax_1[3] == 0x3e)
            || rdx == 0xa)
        return arg1
    
    int16_t rax_2 = sub_14200d6b0(arg3, rdx)
    
    if (zx.d(rax_2) s< *(arg3 + 0x40))
        int64_t r8 = *(arg3 + 0x38)
        uint64_t rdx_1 = zx.q(rax_2) * 3
        uint32_t rax_4 = zx.d(*(r8 + (rdx_1 << 3) + 0x10))
        
        if (rax_4 s< *(arg3 + 0x50) && *(*(arg3 + 0x48) + (zx.q(rax_4) << 3)) != 0)
            wint_t _C = rax_1[1]
            zmm6.d = float.s(*(r8 + (rdx_1 << 3) + 8))
            int32_t zmm1 = float.s(*(r8 + (rdx_1 << 3) + 0xc)) f+ arg7.d
            zmm6.d = zmm6.d f* arg4.d
            *arg1 = __maxss_xmmss_memss(zmm6.d f+ zmm7.d, *arg1)
            *(arg1 + 4) = __maxss_xmmss_memss(
                (zmm1 f+ float.s(*(r8 + (rdx_1 << 3) + 0x14))) f* arg5.d, *(arg1 + 4))
            
            if (_C != 0 && (_C != 0x3c || rax_1[2] != 0x62 || rax_1[3] != 0x72 || rax_1[4] != 0x3e)
                    && _C != 0xa && iswspace(_C) == 0)
                zmm6.d = zmm6.d f+ zmm8.d
            
            zmm7.d = zmm7.d f+ zmm6.d
