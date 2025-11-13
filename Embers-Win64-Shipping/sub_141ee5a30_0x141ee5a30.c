// 函数: sub_141ee5a30
// 地址: 0x141ee5a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f17060(arg1, arg2, arg3)
void* rax = arg1[0x29]

if (rax != 0)
    char rsi_1 = *(rax + 0xf0)
    uint128_t zmm6
    
    if (rsi_1 != 1)
        zmm6 = arg1[0x55].d
    else
        zmm6 = *(arg1 + 0x2ac)
    
    void* rax_1 = sub_140d3c6e0(arg3 + 0x68)
    
    if (rax_1 != 0)
        void* rax_2 = sub_14255d000()
        void* rdx = *(rax_1 + 0x10)
        int64_t rax_3 = sx.q(*(rax_2 + 0x38))
        
        if (rax_3.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_3 << 3)) == rax_2 + 0x30)
            if (rsi_1 != 1)
                zmm6 = arg1[0x56].d
            else
                zmm6 = *(arg1 + 0x2b4)
    
    int32_t rax_5
    uint128_t zmm1_1
    uint128_t zmm0_1
    uint128_t zmm3
    
    if (zmm6.d f>= 9.99999975e-05f)
        uint128_t zmm7 = *arg2
        uint128_t zmm8 = *(arg2 + 4)
        uint128_t zmm2_1
        zmm2_1.d = zmm7.d f* zmm7.d
        zmm0_1.d = zmm8.d f* zmm8.d
        uint128_t zmm9 = arg2[1].d
        zmm2_1.d = zmm2_1.d f+ zmm0_1.d
        zmm1_1.d = zmm9.d f* zmm9.d
        zmm0_1.d = zmm6.d f* zmm6.d
        zmm2_1.d = zmm2_1.d f+ zmm1_1.d
        
        if (zmm2_1.d f<= zmm0_1.d)
            zmm1_1 = zx.o(*arg2)
            rax_5 = arg2[1].d
        else
            uint128_t zmm5_1 = _mm_rsqrt_ss(zmm2_1.d, zmm2_1.d)
            zmm3.d = zmm2_1.d f* 0.5f
            zmm0_1.d = zmm5_1.d f* zmm5_1.d
            zmm1_1.d = zmm3.d f* zmm0_1.d
            zmm2_1.d = 0.5f f- zmm1_1.d
            zmm0_1.d = zmm5_1.d f* zmm2_1.d
            zmm5_1.d = zmm5_1.d f+ zmm0_1.d
            zmm1_1.d = zmm5_1.d f* zmm5_1.d
            zmm3.d = zmm3.d f* zmm1_1.d
            zmm0_1.d = zmm5_1.d f* (0.5f f- zmm3.d)
            zmm5_1.d = zmm5_1.d f+ zmm0_1.d
            zmm5_1.d = zmm5_1.d f* zmm6.d
            zmm7.d = zmm7.d f* zmm5_1.d
            zmm8.d = zmm8.d f* zmm5_1.d
            zmm1_1.d = zmm7.d
            zmm9.d = zmm9.d f* zmm5_1.d
            _mm_shuffle_ps(zmm1_1, zmm1_1, 0xe1)
            zmm1_1.d = zmm8.d
            rax_5 = zmm9.d
            zmm1_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xe1)
    else
        zmm3 = data_143dbb1fc
        zmm1_1.d = data_143dbb1f8.d
        rax_5 = data_143dbb200.d
        _mm_shuffle_ps(zmm1_1, zmm1_1, 0xe1)
        zmm0_1.d = zmm3.d
        zmm1_1 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0xe1)
    *arg2 = zmm1_1.q
    arg2[1].d = rax_5

return arg2
