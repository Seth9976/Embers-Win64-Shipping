// 函数: sub_14178e0d0
// 地址: 0x14178e0d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
int128_t zmm4 = arg6
int32_t var_168 = 0
float zmm3[0x4] = *arg3
float zmm1[0x4] = *(arg3 + 8)
int128_t zmm2 = *(arg3 + 4)
zmm1[0] = zmm1[0] f+ zmm4.d
zmm1[0] = zmm1[0] f- zmm4.d
int64_t zmm5 = zmm2.q
zmm2.d = zmm2.d f- zmm4.d
float var_158 = zmm1[0]
zmm3[0] = zmm3[0] f- zmm4.d
float var_170 = zmm1[0]
zmm3[0] = zmm3[0] f+ zmm4.d
zmm5.d = zmm5.d f+ zmm4.d
float var_148 = var_170
float var_13c = var_158
float temp0[0x4] = _mm_unpacklo_ps(zmm3, zmm2.q)
int32_t* var_138
var_168.q = &var_138
void* r13 = arg1
int64_t var_150 = temp0.q
void var_e8
void** var_108 = &var_e8
int16_t var_ec = 0
char var_ea = 0
int32_t* var_180 = &var_168
int64_t var_144 = (_mm_unpacklo_ps(zmm3, zmm5)).q
int64_t* var_188 = &var_150
int128_t zmm15
zmm15.d = zmm4.d f* zmm4.d
var_138 = nullptr
int32_t var_130 = 0
int64_t var_178 = var_178
sub_1416ed5f0(arg1 + 0xb0, arg2, arg3)
int32_t* rdi = var_138
int32_t r14 = arg5
void* r12 = &rdi[sx.q(var_130)]

if (rdi != r12)
    int128_t zmm9
    int128_t var_68_1 = zmm9
    int128_t zmm10
    int128_t var_78_1 = zmm10
    int128_t zmm11
    int128_t var_88_1 = zmm11
    int128_t zmm13 = 0x38d1b717
    int128_t zmm14 = 0x3f800000
    int128_t zmm7
    int128_t var_48_1 = zmm7
    int128_t zmm8
    int128_t var_58_1 = zmm8
    
    do
        int64_t r8 = *(r13 + 0x38)
        int64_t r15_1 = sx.q(*rdi)
        int64_t rdx = *arg2
        int64_t r9 = r15_1 * 3
        int32_t* r13_1 = r8 + sx.q(*(rdx + (r9 << 2))) * 0xc
        int64_t rcx_2 = sx.q(*(rdx + (r9 << 2) + 4)) * 3
        int64_t rax_9 = sx.q(*(rdx + (r9 << 2) + 8))
        float zmm6[0x4] = *(r8 + (rcx_2 << 2))
        int128_t* r10_1 = r8 + (rcx_2 << 2)
        zmm6[0] = zmm6[0] f- *r13_1
        float zmm5_1 = *(r10_1 + 4) f- r13_1[1]
        zmm3 = *(r10_1 + 8)
        int64_t rcx_3 = rax_9 * 3
        int128_t* rax_10 = r8 + (rcx_3 << 2)
        zmm10.d = (*(r8 + (rcx_3 << 2) + 4)).d f- r13_1[1]
        zmm2.d = (*(rax_10 + 8)).d f- r13_1[2]
        int128_t zmm4_1
        zmm4_1.d = (*rax_10).d f- *r13_1
        zmm3[0] = zmm3[0] f- r13_1[2]
        int64_t zmm0_1 = zmm10.q
        zmm11 = zmm2
        zmm10.d = zmm10.d f* zmm6[0]
        var_168.q = rax_10
        zmm2.d = zmm2.d f* zmm6[0]
        zmm0_1.d = zmm0_1.d f* zmm3[0]
        zmm11.d = zmm11.d f* zmm5_1
        zmm9.d = zmm4_1.d f* zmm3[0]
        zmm11.d = zmm11.d f- zmm0_1.d
        zmm4_1.d = zmm4_1.d f* zmm5_1
        zmm9.d = zmm9.d f- zmm2.d
        zmm10.d = zmm10.d f- zmm4_1.d
        zmm0_1.d = zmm11.q.d f* zmm11.d
        zmm2.d = zmm9.d f* zmm9.d
        zmm2.d = zmm2.d f+ zmm0_1.d
        zmm2.d = zmm2.d f+ zmm10.d f* zmm10.d
        
        if (zmm2.d f>= zmm13.d)
            float temp0_2 = _mm_sqrt_ss(0, zmm2.d)
            zmm0_1.d = zmm14.q.d f/ temp0_2
            zmm11.d = zmm11.d f* zmm0_1.d
            zmm9.d = zmm9.d f* zmm0_1.d
            zmm10.d = zmm10.d f* zmm0_1.d
            var_150.d = zmm11.d
            var_150:4.d = zmm9.d
            int32_t var_148_2 = zmm10.d
            
            if (not(temp0_2 f<= zmm13.d))
                r8.b = 2
                sub_1417048d0(&var_108, 0, r8.b)
                var_108 = &data_142fc47b8
                int64_t var_f8_1 = *r13_1
                float rax_11 = r13_1[2]
                var_ec.q = var_150
                int32_t var_e4_1 = var_148_2
                zmm6 = *arg3
                zmm7 = *(arg3 + 4)
                zmm6[0] = zmm6[0] f- var_f8_1.d
                zmm8 = *(arg3 + 8)
                zmm0_1.d = zmm7.q.d f- var_f8_1:4.d
                int128_t* rax_14 = var_168.q
                zmm6[0] = zmm6[0] f* zmm11.d
                zmm0_1.d = zmm0_1.d f* zmm9.d
                zmm6[0] = zmm6[0] f+ zmm0_1.d
                zmm0_1 = zmm6[0].q
                zmm6[0] = zmm6[0] + (zmm8.d - rax_11) f* zmm10.d
                zmm2.d = zmm9.d f* zmm6[0]
                zmm0_1.d = zmm0_1.d f- zmm11.d * zmm6[0]
                zmm6[0] = zmm6[0] f* zmm10.d
                int32_t var_160 = zmm0_1.d
                zmm0_1.d = zmm7.q.d f- zmm2.d
                int32_t var_15c_1 = zmm0_1.d
                zmm0_1.d = zmm8.q.d f- zmm6[0]
                int32_t var_158_1 = zmm0_1.d
                int32_t zmm12_1
                zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12_1, zmm13, zmm14 =
                    sub_1415c64e0(&var_178, &var_160, r13_1, r10_1, rax_14, arg3)
                float zmm1_1 = var_178.d - zmm6[0]
                zmm2.d = var_178:4.d.d f- zmm7.d
                zmm0_1.d = var_170.d f- zmm8.d
                zmm2.d = zmm2.d f* zmm2.d
                zmm0_1.d = zmm0_1.d f* zmm0_1.d
                zmm2.d = zmm2.d f+ zmm1_1 * zmm1_1
                zmm2.d = zmm2.d f+ zmm0_1.d
                
                if (not(zmm2.d f>= zmm15.d))
                    zmm9.d = zmm9.d f* arg4[1]
                    zmm11.d = zmm11.d f* *arg4
                    zmm10.d = zmm10.d f* arg4[2]
                    zmm9.d = zmm9.d f+ zmm11.d
                    zmm9.d = zmm9.d f+ zmm10.d
                    
                    if (not(zmm9.d f>= zmm12_1))
                        r14 = r15_1.d
                
                sub_141706890(&var_108)
        else
            var_150 = 0x3f800000
            int32_t var_148_1 = 0
        
        r13 = arg1
        rdi = &rdi[1]
    while (rdi != r12)
    
    rdi = var_138

if (rdi != 0)
    sub_140a74f90(rdi)

__security_check_cookie(rax_1 ^ &var_1a8)
return zx.q(r14)
