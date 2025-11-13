// 函数: sub_141ed2c10
// 地址: 0x141ed2c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm7[0x4] = arg3
uint32_t arg_8 = 0
int128_t zmm6 = sub_1422883b0(arg1, arg2, 0)
*arg1 = &data_143260c38
*(arg1 + 0x164) = *(arg2 + 0x414)
arg1[0x2e].d = arg2[0x83].d
arg1[0x2f].d = arg2[0x84].d
*(arg1 + 0x180) = data_14399f5c0
int32_t rax_4 = arg2[0x82].d ^ arg1[0x32].d
*(arg1 + 0x39) &= 0xfe
arg1[0x32].d ^= rax_4 & 1
uint32_t temp0[0x4] = __andps_xmmxud_memxud(*(arg2 + 0x1e0), data_143f3a9d0)
int64_t rax_6 = arg2[0x81]
uint32_t zmm0[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc9)
uint32_t zmm1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xd2)
arg_8 = _mm_max_ps(_mm_max_ps(temp0, zmm0), zmm1)[0]
float zmm3
uint32_t zmm4

if (rax_6 == 0)
    arg1[0x2d] = 0
    zmm3 = (zx.o(0)).d
    *(arg1 + 0x174) = 0
    zmm4 = (zx.o(0)).d
    arg3 = zx.o(0)
else
    int128_t var_18_1 = zmm6
    arg1[0x2d] = rax_6
    arg3 = *(arg2 + 0x41c)
    
    if (not(arg3[0] f!= 0f))
        int64_t* rcx = arg2[0x81]
        (*(*rcx + 0x338))(rcx)
        arg3 = zmm0
    
    *(arg1 + 0x174) = arg3[0]
    zmm4 = *(arg2 + 0x424)
    
    if (not(zmm4 f!= 0f))
        int64_t* rcx_1 = arg2[0x81]
        (*(*rcx_1 + 0x340))(rcx_1)
        arg3 = *(arg1 + 0x174)
        zmm4 = zmm0[0]
    
    arg3[0] = arg3[0] f* arg_8
    arg3[0] = arg3[0] f* zmm7[0]
    zmm3 = zmm4 f* arg_8 f* zmm7[0]
    arg3[0] = arg3[0] f* 0.25f
    zmm3 = zmm3 * 0.25f

*(arg1 + 0x15c) = arg3[0]
*(arg1 + 0x17c) = zmm4
arg1[0x2c].d = zmm3
void* rsi = arg2[0x14]
float var_38[0x4]

if (rsi != 0)
    void* rax_9 = sub_14252e610()
    void* rdx = *(rsi + 0x10)
    int64_t rax_10 = sx.q(*(rax_9 + 0x38))
    
    if (rax_10.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_10 << 3)) == rax_9 + 0x30)
        void* rcx_3 = *(rsi + 0x220)
        
        if (rcx_3 != 0)
            float zmm4_1[0x4] = zx.o(0)
            zmm1 = zx.o(0)
            arg3 = zx.o(0)
            zmm4_1[0] = float.s(zx.d(*(rcx_3 + 0x20a)))
            zmm1[0] = float.s(zx.d(*(rcx_3 + 0x209)))
            uint32_t rax_14 = zx.d(*(rcx_3 + 0x208))
            zmm4_1[0] = zmm4_1[0] * 0.00392156886f
            arg3[0] = float.s(rax_14)
            int32_t rax_15 = zx.d(*(rcx_3 + 0x20b))
            float temp0_5[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xe1)
            zmm1[0] = zmm1[0] f* 0.00392156886f
            temp0_5[0] = zmm1[0]
            arg3[0] = arg3[0] f* 0.00392156886f
            float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xc6)
            zmm3 = float.s(rax_15) * 0.00392156886f
            temp0_6[0] = arg3[0]
            float temp0_7[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0x27)
            temp0_7[0] = zmm3
            float temp0_8[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0x39)
            *(arg1 + 0x180) = temp0_8
            *(arg1 + 0x18c) = 0x437f0000
            var_38 = temp0_8
    
    arg1[0x32].d &= 0xfffffffd
    sub_1420e3ab0(sub_141dc9840(rsi))

int64_t* rcx_6 = data_143f5b298
void arg_10

if ((*(*rcx_6 + 0x300))(rcx_6, zmm1, &arg_10, zmm3) != 0)
    sub_140acc920(&var_38, &arg_10)

return arg1
