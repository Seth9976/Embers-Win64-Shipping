// 函数: sub_141a1ec80
// 地址: 0x141a1ec80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_148
int64_t rax_1 = __security_cookie ^ &var_148
int64_t rsi = 0
int64_t rdi = sx.q(arg1[1].d)
char rcx = arg1[2].b
int64_t rbx = sx.q(arg3)
int32_t rax_2 = (rdi - 1).d
int32_t rdx

if (rcx != 0)
    rdx = 0

if (rcx == 0 || rbx.d != rax_2)
    rdx = (rbx + 1).d

int32_t* r8
int64_t r9
uint128_t zmm14

if (rcx == 0 || rbx.d != rax_2)
    r8 = *arg1
    r9 = sx.q(rdx)
    zmm14 = *(r9 * 0x2c + r8)
else
    r8 = *arg1
    r9 = sx.q(rdx)
    zmm14.d = r8[rdi * 0xb - 0xb].d f+ *(arg1 + 0x14)

int128_t* rdx_1 = rbx * 0x2c
char rax_4 = *(r8 + rdx_1 + 0x28)
int32_t* result
uint128_t zmm0
uint128_t zmm1
uint128_t zmm2
uint128_t zmm5
uint128_t zmm6

if (rax_4 != 2)
    zmm14.d = zmm14.d f- *(r8 + rdx_1)
    int32_t var_120_1 = zmm14.d
    uint128_t zmm3
    uint128_t zmm4
    uint128_t zmm7
    uint128_t zmm8
    uint128_t zmm9
    uint128_t zmm10
    uint128_t zmm13
    
    if (rax_4 != 0)
        uint64_t var_e8
        int64_t* rcx_3 = &var_e8
        zmm2 = r8[r9 * 0xb + 5]
        zmm8.d = zmm14.d f* *(r8 + rdx_1 + 0x1c)
        int64_t i_1 = 3
        zmm1 = r8[r9 * 0xb + 4]
        zmm9.d = zmm14.d f* *(r8 + rdx_1 + 0x20)
        int32_t var_e0_1 = *(r8 + rdx_1 + 0xc)
        zmm13 = *(r8 + rdx_1 + 8)
        zmm10 = r8[r9 * 0xb + 6]
        var_e8 = *(r8 + rdx_1 + 4)
        zmm0.d = (*(r8 + rdx_1 + 4)).d f* 0.5f
        int32_t var_108 = 0
        zmm1.d = zmm1.d f* zmm14.d
        int32_t var_104_1 = 0x3f000000
        zmm2.d = zmm2.d f* zmm14.d
        int32_t var_100_1 = 0x3f800000
        zmm6.d = zmm8.d f* 0.125f
        int32_t var_138_1 = zmm1.d
        zmm1.d = zmm1.d f* -0.125f
        zmm6.d = zmm6.d f+ zmm0.d
        int32_t var_134_1 = zmm2.d
        zmm0.d = r8[r9 * 0xb + 1].d f* 0.5f
        zmm4.d = zmm9.d f* 0.125f
        zmm6.d = zmm6.d f+ zmm1.d
        zmm10.d = zmm10.d f* zmm14.d
        zmm1.d = zmm2.d f* -0.125f
        uint128_t zmm15
        zmm15.d = zmm14.d f* *(r8 + rdx_1 + 0x24)
        zmm6.d = zmm6.d f+ zmm0.d
        int32_t var_130_1 = zmm10.d
        zmm0.d = zmm13.d f* 0.5f
        int32_t var_144_1 = zmm8.d
        zmm2.d = zmm15.d f* 0.125f
        zmm4.d = zmm4.d f+ zmm0.d
        int32_t var_140_1 = zmm9.d
        zmm0.d = r8[r9 * 0xb + 2].d f* 0.5f
        var_148 = zmm15.d
        zmm4.d = zmm4.d f+ zmm1.d
        int32_t var_11c_1 = zmm13.d
        zmm1.d = zmm10.d f* -0.125f
        zmm4.d = zmm4.d f+ zmm0.d
        zmm0.d = (*(r8 + rdx_1 + 0xc)).d f* 0.5f
        zmm2.d = zmm2.d f+ zmm0.d
        zmm2.d = zmm2.d f+ zmm1.d
        zmm1 = r8[r9 * 0xb + 3]
        zmm0.d = zmm1.d f* 0.5f
        zmm2.d = zmm2.d f+ zmm0.d
        zmm0 = _mm_unpacklo_ps(zmm6, zmm4.q)
        zmm6.d = zmm14.d f+ zmm14.d
        uint64_t var_dc_1 = zmm0.q
        uint64_t var_d0_1 = *(r9 * 0x2c + r8 + 4)
        int32_t var_f0_1 = zmm2.d
        int32_t var_d4_1 = var_f0_1
        int32_t var_13c_1 = zmm6.d
        int32_t var_c8_1 = r8[r9 * 0xb + 3]
        zmm7 = 0x40c00000
        zmm5 = 0x40400000
        int32_t var_f8
        int64_t i
        
        do
            zmm13.d = zmm13.d f* -6f
            zmm3 = zmm1
            zmm1.d = zmm6.d f* r8[r9 * 0xb + 5]
            zmm10 = 0x3f800000
            result = 3
            zmm6 = *(r8 + rdx_1 + 0xc)
            zmm14.d = zmm6.d f* -6f
            uint64_t var_118_1 = *rcx_3
            zmm0.d = zmm9.d f* 4f
            zmm2.d = r8[r9 * 0xb + 2].d f* zmm7.d
            zmm13.d = zmm13.d f- zmm0.d
            zmm3.d = zmm3.d f* zmm7.d
            zmm4.d = r8[r9 * 0xb + 1].d f* zmm7.d
            zmm0.d = zmm15.d f* 4f
            zmm13.d = zmm13.d f- zmm1.d
            zmm15.d = var_134_1.d f+ zmm9.d
            zmm1.d = var_13c_1.d f* r8[r9 * 0xb + 6]
            zmm14.d = zmm14.d f- zmm0.d
            zmm9 = var_118_1.d
            zmm13.d = zmm13.d f+ zmm2.d
            zmm0.d = (*(r8 + rdx_1 + 8)).d f* zmm7.d
            zmm14.d = zmm14.d f- zmm1.d
            zmm15.d = zmm15.d f* zmm5.d
            zmm1.d = var_148.d f+ var_130_1
            zmm15.d = zmm15.d f+ zmm0.d
            zmm0 = zmm6
            zmm6 = *(&var_108 + rsi)
            zmm14.d = zmm14.d f+ zmm3.d
            zmm0.d = zmm0.d f* zmm7.d
            zmm1.d = zmm1.d f* zmm5.d
            zmm15.d = zmm15.d f- zmm2.d
            zmm1.d = zmm1.d f+ zmm0.d
            zmm0.d = zmm8.d f* 4f
            zmm1.d = zmm1.d f- zmm3.d
            zmm3 = *(r8 + rdx_1 + 4)
            zmm2.d = zmm3.d f* -6f
            int32_t var_12c_1 = zmm1.d
            zmm2.d = zmm2.d f- zmm0.d
            zmm1.d = r8[r9 * 0xb + 4].d f* var_13c_1
            zmm0.d = zmm3.d f* zmm7.d
            zmm7 = var_118_1:4.d
            zmm2.d = zmm2.d f- zmm1.d
            zmm1.d = var_138_1.d f+ zmm8.d
            zmm8 = rcx_3[1].d
            zmm2.d = zmm2.d f+ zmm4.d
            zmm1.d = zmm1.d f* zmm5.d
            int32_t var_128_1 = zmm2.d
            zmm1.d = zmm1.d f+ zmm0.d
            zmm1.d = zmm1.d f- zmm4.d
            int32_t var_124_1 = zmm1.d
            int32_t* j
            
            do
                zmm2.d = zmm6.d f* zmm6.d
                zmm3.d = zmm6.d f* var_128_1
                zmm5.d = zmm6.d f* zmm13.d
                zmm1 = zmm2
                zmm0.d = zmm2.d f* zmm15.d
                zmm2.d = zmm2.d f* var_124_1
                zmm1.d = zmm1.d f* var_12c_1
                zmm5.d = zmm5.d f+ zmm0.d
                zmm3.d = zmm3.d f+ zmm2.d
                zmm0.d = arg2[1].d f- zmm7.d
                zmm4.d = zmm6.d f* zmm14.d
                zmm2.d = (*arg2).d f- zmm9.d
                zmm5.d = zmm5.d f+ var_140_1
                zmm3.d = zmm3.d f+ var_144_1
                zmm4.d = zmm4.d f+ zmm1.d
                zmm1.d = arg2[2].d f- zmm8.d
                zmm7 = zmm5
                zmm5.d = zmm5.d f* zmm5.d
                zmm7.d = zmm7.d f* zmm0.d
                zmm0 = zmm10
                zmm4.d = zmm4.d f+ var_148
                zmm10.d = zmm10.d f* -0.75f
                zmm0.d = zmm0.d f* 0.75f
                zmm2.d = zmm2.d f* zmm3.d
                zmm1.d = zmm1.d f* zmm4.d
                zmm7.d = zmm7.d f+ zmm2.d
                zmm3.d = zmm3.d f* zmm3.d
                zmm4.d = zmm4.d f* zmm4.d
                zmm5.d = zmm5.d f+ zmm3.d
                zmm7.d = zmm7.d f+ zmm1.d
                zmm5.d = zmm5.d f+ zmm4.d
                zmm7.d = zmm7.d f/ zmm5.d
                
                if (not(zmm7.d f>= zmm10.d))
                    zmm7 = zmm10
                else if (not(zmm7.d f< zmm0.d))
                    zmm7 = zmm0
                
                zmm6.d = zmm6.d f+ zmm7.d
                
                if (zmm6.d f>= 0f)
                    zmm6 = _mm_min_ss(zmm6.d, 0x3f800000)
                else
                    zmm6 = zx.o(0)
                
                zmm8 = var_148
                zmm10 = __andps_xmmxud_memxud(zmm7, data_142d3f770)
                zmm1.d = zmm6.d f* zmm6.d
                zmm0.d = zmm1.d f* 3f
                zmm4.d = zmm1.d f* zmm6.d
                zmm2.d = zmm4.d f- zmm1.d
                zmm1.d = zmm1.d f+ zmm1.d
                zmm3.d = zmm4.d f+ zmm4.d
                zmm4.d = zmm4.d f- zmm1.d
                zmm1.d = var_138_1.d f* zmm2.d
                zmm5.d = zmm0.d f- zmm3.d
                zmm3.d = zmm3.d f- zmm0.d
                zmm4.d = zmm4.d f+ zmm6.d
                zmm3.d = zmm3.d f+ 1f
                zmm8.d = zmm8.d f* zmm4.d
                zmm9.d = zmm4.d f* var_144_1
                zmm7.d = zmm4.d f* var_140_1
                zmm0.d = (*(r8 + rdx_1 + 4)).d f* zmm3.d
                zmm9.d = zmm9.d f+ zmm0.d
                zmm0.d = zmm5.d f* r8[r9 * 0xb + 1]
                zmm9.d = zmm9.d f+ zmm1.d
                zmm1.d = var_134_1.d f* zmm2.d
                zmm9.d = zmm9.d f+ zmm0.d
                zmm0.d = (*(r8 + rdx_1 + 8)).d f* zmm3.d
                zmm3.d = zmm3.d f* *(r8 + rdx_1 + 0xc)
                zmm7.d = zmm7.d f+ zmm0.d
                zmm0.d = r8[r9 * 0xb + 2].d f* zmm5.d
                zmm8.d = zmm8.d f+ zmm3.d
                zmm7.d = zmm7.d f+ zmm1.d
                zmm1 = r8[r9 * 0xb + 3]
                zmm5.d = zmm5.d f* zmm1.d
                zmm7.d = zmm7.d f+ zmm0.d
                zmm0.d = var_130_1.d f* zmm2.d
                zmm8.d = zmm8.d f+ zmm0.d
                zmm8.d = zmm8.d f+ zmm5.d
                j = result
                result -= 1
            while (j != 1)
            zmm7.d = zmm7.d f- arg2[1]
            zmm9.d = zmm9.d f- *arg2
            zmm8.d = zmm8.d f- arg2[2]
            zmm6.d = zmm6.d f* var_120_1
            rcx_3 += 0xc
            zmm15 = var_148
            zmm5 = 0x40400000
            zmm6.d = zmm6.d f+ *(r8 + rdx_1)
            zmm13 = var_11c_1
            zmm7.d = zmm7.d f* zmm7.d
            zmm9.d = zmm9.d f* zmm9.d
            zmm8.d = zmm8.d f* zmm8.d
            zmm7.d = zmm7.d f+ zmm9.d
            *(&var_108 + rsi) = zmm6.d
            zmm9 = var_140_1
            zmm6 = var_13c_1
            zmm7.d = zmm7.d f+ zmm8.d
            zmm8 = var_144_1
            *(&var_f8 + rsi) = zmm7.d
            rsi += 4
            zmm7 = 0x40c00000
            i = i_1
            i_1 -= 1
        while (i != 1)
        zmm2 = var_f8
        int32_t var_f4
        zmm1 = var_f4
        zmm0 = var_f0_1
        
        if (not(zmm2.d f> zmm1.d) && not(zmm2.d f> zmm0.d))
            *arg4 = zmm2.d
        else if (zmm1.d f> zmm0.d)
            *arg4 = zmm0.d
        else
            *arg4 = zmm1.d
    else
        zmm8 = *(r8 + rdx_1 + 4)
        zmm9 = *(r8 + rdx_1 + 8)
        zmm5.d = r8[r9 * 0xb + 1].d f- zmm8.d
        zmm10 = *(r8 + rdx_1 + 0xc)
        zmm4.d = r8[r9 * 0xb + 2].d f- zmm9.d
        zmm6.d = r8[r9 * 0xb + 3].d f- zmm10.d
        int128_t zmm11 = *arg2
        int128_t zmm12 = arg2[1]
        zmm13 = arg2[2]
        zmm3.d = zmm9.d f- zmm12.d
        zmm0.d = zmm5.d f* zmm5.d
        zmm2.d = zmm4.d f* zmm4.d
        zmm1.d = zmm6.d f* zmm6.d
        zmm2.d = zmm2.d f+ zmm0.d
        zmm3.d = zmm3.d f* zmm4.d
        zmm0.d = zmm8.d f- zmm11.d
        zmm2.d = zmm2.d f+ zmm1.d
        zmm1.d = zmm10.d f- zmm13.d
        zmm0.d = zmm0.d f* zmm5.d
        zmm7.d = -1f f/ zmm2.d
        zmm3.d = zmm3.d f+ zmm0.d
        zmm1.d = zmm1.d f* zmm6.d
        zmm0 = zx.o(0)
        zmm3.d = zmm3.d f+ zmm1.d
        zmm7.d = zmm7.d f* zmm3.d
        
        if (not(zmm7.d f< 0f))
            zmm0 = __minss_xmmss_memss(zmm7.d, 0x3f800000)
        
        zmm4.d = zmm4.d f* zmm0.d
        zmm5.d = zmm5.d f* zmm0.d
        zmm6.d = zmm6.d f* zmm0.d
        zmm4.d = zmm4.d f+ zmm9.d
        zmm5.d = zmm5.d f+ zmm8.d
        zmm0.d = zmm0.d f* zmm14.d
        zmm6.d = zmm6.d f+ zmm10.d
        zmm4.d = zmm4.d f- zmm12.d
        zmm5.d = zmm5.d f- zmm11.d
        zmm6.d = zmm6.d f- zmm13.d
        zmm4.d = zmm4.d f* zmm4.d
        zmm5.d = zmm5.d f* zmm5.d
        zmm6.d = zmm6.d f* zmm6.d
        zmm4.d = zmm4.d f+ zmm5.d
        zmm4.d = zmm4.d f+ zmm6.d
        *arg4 = zmm4.d
        result = *arg1
        zmm0.d = zmm0.d f+ *(result + rdx_1)
else
    zmm1.d = (*(r8 + rdx_1 + 4)).d f- *arg2
    zmm6.d = (*(r8 + rdx_1 + 8)).d f- arg2[1]
    zmm0.d = (*(r8 + rdx_1 + 0xc)).d f- arg2[2]
    result = r9 * 0x2c
    zmm1.d = zmm1.d f* zmm1.d
    zmm6.d = zmm6.d f* zmm6.d
    zmm0.d = zmm0.d f* zmm0.d
    zmm6.d = zmm6.d f+ zmm1.d
    zmm5.d = (*(result + r8 + 8)).d f- arg2[1]
    zmm2.d = (*(result + r8 + 4)).d f- *arg2
    zmm6.d = zmm6.d f+ zmm0.d
    zmm1.d = (*(result + r8 + 0xc)).d f- arg2[2]
    zmm5.d = zmm5.d f* zmm5.d
    zmm2.d = zmm2.d f* zmm2.d
    zmm1.d = zmm1.d f* zmm1.d
    zmm5.d = zmm5.d f+ zmm2.d
    zmm5.d = zmm5.d f+ zmm1.d
    
    if (zmm6.d f>= zmm5.d)
        *arg4 = zmm5.d
    else
        *arg4 = zmm6.d
        result = *arg1
        *(rdx_1 + result)
__security_check_cookie(rax_1 ^ &var_148)
return result
