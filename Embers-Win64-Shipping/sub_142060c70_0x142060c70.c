// 函数: sub_142060c70
// 地址: 0x142060c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = sx.q(arg2[1].d)
uint32_t zmm8[0x4] = zx.o(0)
void* const* result

if (r14.d s> 0)
    int64_t rbx_1 = 0
    int64_t rbp_1 = *arg2
    int32_t rdi_1 = 1
    int128_t zmm7
    int128_t var_28_1 = zmm7
    int128_t zmm11 = *arg1
    int128_t zmm12 = *(arg1 + 4)
    
    do
        float zmm5 = *(rbp_1 + (rbx_1 << 3)) f- zmm11.d
        float zmm3 = *(rbp_1 + (rbx_1 << 3) + 4) f- zmm12.d
        int64_t rax_2 = sx.q(mods.dp.d(sx.q(rdi_1), r14.d))
        float zmm4 = *(rbp_1 + (rax_2 << 3)) f- zmm11.d
        float zmm2 = *(rbp_1 + (rax_2 << 3) + 4) f- zmm12.d
        float _X = zmm5 * zmm2 - zmm3 * zmm4
        _X - 0f
        
        if (not(_X <= 0f))
            zmm7 = 0x3f800000
        else if (_X >= 0f)
            zmm7 = zx.o(0)
        else
            zmm7 = 0xbf800000
        
        _X = (zmm3 * zmm2 + zmm5 * zmm4)
            / _mm_sqrt_ss(0, (zmm2 * zmm2 + zmm4 * zmm4) * (zmm3 * zmm3 + zmm5 * zmm5))
        
        if (_X >= -1f)
            _X = _mm_min_ss(_X, 0x3f800000)
            
            if (_X >= -1f)
                _X = _mm_min_ss(_X, 0x3f800000)
            else
                _X = -1f
        else
            _X = _mm_min_ss(-1f, 0x3f800000)
        
        float zmm0
        zmm0, result = acosf(_X)
        rdi_1 += 1
        rbx_1 += 1
        zmm8[0] = zmm8[0] f+ zmm0 f* zmm7.d
    while (rbx_1 s< r14)

result.b = __andps_xmmxud_memxud(zmm8, data_142d3f770)[0] f> 0.00100000005f
return result
