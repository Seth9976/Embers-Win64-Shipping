// 函数: sub_1409b31b0
// 地址: 0x1409b31b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm8 = data_143dbb1fc
uint128_t zmm11 = zmm8
uint128_t zmm12 = data_143dbb1f8
uint128_t zmm10 = zmm12
int128_t zmm13 = data_143dbb200
int128_t zmm9 = zmm13
int32_t var_90 = zmm13.d
TEB* gsbase

if (data_143cee070 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143cee070)
    
    if (data_143cee070 == 0xffffffff)
        atexit(sub_142cb91f0)
        _Init_thread_footer(&data_143cee070)

sub_1409c3d60(arg1, arg3, &data_143cee060)
void* arg_8
sub_14090aa40(*(arg1 + 0x28) + 0x150, &arg_8, data_143f35cc8)
int32_t i_2 = data_143cee068
uint128_t zmm0_1
uint128_t zmm3
uint128_t zmm4_1
uint128_t zmm5_1

if (i_2 s> 0)
    void* r9_1 = nullptr
    int64_t r11_1 = data_143cee060
    uint64_t i_1 = zx.q(i_2)
    uint128_t zmm6
    uint128_t var_18_1 = zmm6
    uint128_t zmm7
    uint128_t var_28_1 = zmm7
    int64_t r8_1 = **(arg_8 + 0x18)
    int64_t rcx_7 = sx.q(i_2 - 1) << 2
    uint64_t i
    
    do
        int64_t rcx_8 = sx.q(*(rcx_7 + r11_1)) * 3
        float rax_5 = *(r8_1 + (rcx_8 << 2) + 8)
        zmm5_1 = zx.o(*(r8_1 + (rcx_8 << 2)))
        int64_t rax_6 = sx.q(*(r9_1 + r11_1))
        zmm4_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0x55)
        uint32_t var_a8_1 = zmm5_1.d
        int64_t rcx_9 = rax_6 * 3
        zmm7 = zx.o(*(r8_1 + (rcx_9 << 2)))
        zmm12.d = zmm12.d f+ zmm7.d
        rcx_7 = r9_1
        zmm6 = zmm7.q:4.d
        r9_1 += 4
        zmm3 = *(r8_1 + (rcx_9 << 2) + 8)
        zmm0_1.d = zmm6.d f- zmm4_1.d
        zmm13.d = zmm13.d f+ zmm3.d
        zmm4_1.d = zmm4_1.d f+ zmm6.d
        zmm8.d = zmm8.d f+ zmm6.d
        float zmm1 = zmm3.d + rax_5
        zmm3.d = zmm3.d f- rax_5
        zmm1 = zmm1 f* zmm0_1.d
        zmm0_1.d = zmm7.d f+ var_a8_1
        zmm7.d = zmm7.d f- var_a8_1
        zmm10.d = zmm10.d f+ zmm1
        zmm0_1.d = zmm0_1.d f* zmm3.d
        zmm7.d = zmm7.d f* zmm4_1.d
        zmm11.d = zmm11.d f+ zmm0_1.d
        zmm9.d = zmm9.d f+ zmm7.d
        i = i_1
        i_1 -= 1
    while (i != 1)
    var_90 = zmm9.d

uint128_t zmm2
zmm2.d = zmm11.d f* zmm11.d
zmm0_1.d = zmm10.d f* zmm10.d
zmm2.d = zmm2.d f+ zmm0_1.d
zmm2.d = zmm2.d f+ zmm9.d f* zmm9.d

if (not(zmm2.d f<= 9.99999994e-09f))
    zmm3.d = zmm2.d
    zmm4_1 = _mm_rsqrt_ss(zmm3.d, zmm3.d)
    zmm3.d = zmm3.d f* 0.5f
    zmm0_1.d = zmm4_1.d f* zmm4_1.d
    zmm2.d = 0.5f - zmm3.d f* zmm0_1.d
    zmm0_1.d = zmm4_1.d f* zmm2.d
    zmm4_1.d = zmm4_1.d f+ zmm0_1.d
    zmm3.d = zmm3.d f* zmm4_1.d f* zmm4_1.d
    zmm5_1.d = 0.5f f- zmm3.d
    zmm0_1.d = zmm4_1.d f* zmm5_1.d
    zmm4_1.d = zmm4_1.d f+ zmm0_1.d
    zmm9.d = zmm9.d f* zmm4_1.d
    zmm10.d = zmm10.d f* zmm4_1.d
    var_90 = zmm9.d
    zmm11.d = zmm11.d f* zmm4_1.d

zmm8.d = zmm8.d f* zmm11.d
zmm12.d = zmm12.d f* zmm10.d
zmm13.d = zmm13.d f* zmm9.d
zmm8.d = zmm8.d f+ zmm12.d
*arg2 = (_mm_unpacklo_ps(zmm10, zmm11.q)).q
zmm0_1.d = float.s(i_2)
arg2[1].d = var_90
zmm8.d = zmm8.d f+ zmm13.d
zmm8.d = zmm8.d f/ zmm0_1.d
*(arg2 + 0xc) = zmm8.d
return arg2
