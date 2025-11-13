// 函数: sub_140de1d00
// 地址: 0x140de1d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r12 = nullptr
int32_t rbx = *arg3
int128_t* rsi = nullptr
int32_t* r8 = arg2
uint128_t zmm10 = zx.o(arg6)
uint128_t zmm13 = zx.o(0)
uint128_t zmm14 = zx.o(0)
void* rax = *arg1
uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(*arg2))
uint32_t var_148 = 0xffffffff
void* r15 = rax
arg6.b = 0
zmm10 = _mm_cvtepi32_ps(zmm10)
bool cond:0 = zmm0.d f> 0f
int32_t var_134 = zmm10.d
int32_t var_144 = 0
float var_140 = 0f
int32_t var_128 = 0
int32_t var_12c = 0
float var_158
int32_t var_150
int64_t var_120
int128_t var_108
uint128_t zmm6
uint128_t zmm8

if (*(rax + 8) s> 0xc8)
    void* rcx = arg1[2]
    void* const rdi_1 = *(rcx + 0x38)
    
    if (rdi_1 != 0)
    label_140de1e08:
        
        if (*(rdi_1 + 0x34) != 0 && (*(rdi_1 + 0x30) & 1) != 0 && sub_140e1a9c0(arg1[3]) != 0)
            arg6.b = 1
            int32_t* rax_2 = sub_140da32d0(rdi_1 + 0x10, &var_120)
            zmm6, zmm8, zmm10 = sub_140dd5a90(&var_158, sub_140e1a100(arg1[3], &var_108), rax_2)
            zmm14 = var_158
            zmm13 = var_150
            r15 = *arg1
            var_128 = zmm14.d
            var_12c = zmm13.d
    else
        int64_t rdx = sx.q(*(rcx + 0x40))
        void* rcx_1
        
        if (rdx.d s>= 0)
            rcx_1 = *(arg1[1] + 0x10)
        
        if (rdx.d s< 0 || rdx.d s>= *(rcx_1 + 8))
            rdi_1 = nullptr
        else
            rdi_1 = (rdx << 6) + *rcx_1
        
        if (rdi_1 != 0)
            goto label_140de1e08
    
    r8 = arg2

uint64_t result = zx.q(*(r15 + 8))
int32_t rdi_5 = 0
int32_t var_130 = result.d
int32_t var_164 = 0

if (result.d s> 0)
    uint128_t var_78_1 = zmm8
    uint32_t r15_2 = (result * 3).d * 2
    int64_t r13_1 = 0
    uint128_t zmm12 = zx.o(0)
    uint128_t var_58_1 = zmm6
    int32_t var_13c_1 = 0
    var_120 = 0
    uint32_t var_138_1 = r15_2
    uint32_t var_160_1 = (result << 2).d
    uint128_t zmm15
    uint128_t var_e8_1 = zmm15
    
    do
        int64_t** r13_2 = r13_1 + **arg1
        
        if (*(r13_2 + 0x24) != 0)
            uint128_t zmm7_1
            float zmm9_1
            uint128_t zmm11_1
            zmm7_1, zmm8, zmm9_1, zmm10, zmm11_1, zmm12 =
                sub_140da9d40(arg1[4], &var_158, r13_2, r8)
            char var_14b
            char var_14a
            
            if (var_14a != 0 && (cond:0 == 0 || var_14b != 0))
                int32_t rax_7 = sx.d(*(r13_2 + 0x1c))
                zmm6.d = _mm_cvtepi32_ps(zx.o(sx.d(var_158:2.w))).d f+ zmm10.d
                zmm6.d = zmm6.d f+ _mm_cvtepi32_ps(zx.o(rax_7)).d
                
                if (arg6.b == 0)
                label_140de1f8c:
                    char var_14c
                    
                    if (r12 == 0 || zx.d(var_14c) != var_148)
                        uint32_t rdi_6 = zx.d(var_14c)
                        var_148 = rdi_6
                        int64_t* rbx_1 = *(*(arg1[4] + 0x110) + zx.q(rdi_6) * 0x10)
                        int64_t* rax_11 = (*(*rbx_1 + 8))(rbx_1)
                        int64_t* rcx_10 = arg1[5]
                        r12 = rax_11
                        char var_1c8
                        bool var_1c0
                        char var_1b8
                        char var_1b0
                        void* var_1a8
                        int64_t rax_12 = (*(*rcx_10 + 0x18))(rcx_10, zx.q(rdi_6), rax_11, arg4, 
                            var_1c8, var_1c0, var_1b8, var_1b0, var_1a8)
                        int64_t rdx_8 = *rbx_1
                        char rax_13 = (*(rdx_8 + 0x18))(rbx_1, rdx_8)
                        rbx = data_14399f630
                        var_1a8 = arg1[2]
                        
                        if (rax_13 != 0)
                            rbx = *arg3
                        
                        char* rcx_13 = arg1[6]
                        var_1b0 = 0
                        __builtin_memset(&var_108, 0, 0x20)
                        var_1b8 = *rcx_13
                        var_1c0 = (rax_13 == 0) + 2
                        var_1c8 = 2
                        int128_t* rax_16 = sub_140e0db30(arg1[1], arg5, &var_108, rax_12, 2, 
                            var_1c0, var_1b8, 0, var_1a8)
                        rsi = rax_16
                        int64_t* rcx_15 = rax_16[4].q
                        int32_t rdx_12 = rcx_15[1].d + var_160_1
                        
                        if (rdx_12 s> *(rcx_15 + 0xc))
                            sub_1405c5660(rcx_15, rdx_12)
                        
                        uint64_t* rcx_16 = *(rsi + 0x48)
                        int32_t rdx_14 = rcx_16[1].d + r15_2
                        
                        if (rdx_14 s> *(rcx_16 + 0xc))
                            sub_1405dadb0(rcx_16, rdx_14)
                        
                        zmm7_1.d = zmm8.d f/ float.s(zx.q((**r12)(r12)))
                        var_144 = zmm7_1.d
                        rdi_5 = var_164
                        zmm9_1 = zmm8.d / float.s(zx.q((*(*r12 + 8))(r12)))
                        var_140 = zmm9_1
                    
                    zmm0 = sub_140da32b0(r13_2)
                    zmm8 = zmm12
                    int32_t r8_6 = *(rsi + 0x64)
                    zmm10 = zmm11_1
                    zmm12 = zmm11_1
                    uint32_t rdx_15 = zx.d(*arg1[7])
                    int32_t rax_25 = sx.d(*(r13_2 + 0x1e))
                    uint128_t zmm1_1 = _mm_cvtepi32_ps(zx.o(sx.d(var_158.w)))
                    int16_t* rax_26 = arg1[8]
                    zmm8.d = zmm8.d f- zmm1_1.d
                    zmm8.d = zmm8.d f+ _mm_cvtepi32_ps(zx.o(rax_25)).d
                    zmm1_1.d = _mm_cvtepi32_ps(zx.o(sx.d(*rax_26) + rdx_15)).d f/ zmm0.d
                    zmm8.d = zmm8.d f+ zmm1_1.d
                    zmm13 = _mm_cvtepi32_ps(zx.o(var_150.w))
                    float zmm5_1 = zmm13.d
                    zmm13.d = zmm13.d f* zmm0.d
                    zmm5_1 = zmm5_1 f* zmm7_1.d
                    int16_t var_154
                    zmm14.d = _mm_cvtepi32_ps(zx.o(var_154)).d f* zmm7_1.d
                    zmm13.d = zmm13.d f+ zmm6.d
                    zmm7_1 = _mm_cvtepi32_ps(zx.o(var_150:2.w))
                    zmm1_1.d = zmm7_1.d f* zmm9_1
                    zmm7_1.d = zmm7_1.d f* zmm0.d
                    int16_t var_152
                    zmm15.d = _mm_cvtepi32_ps(zx.o(var_152)).d f* zmm9_1
                    zmm9_1 = zmm11_1.d
                    int32_t var_15c_1 = zmm1_1.d
                    zmm7_1.d = zmm7_1.d f+ zmm8.d
                    uint128_t zmm2_1
                    
                    if (arg4 != 0)
                        zmm0.d = float.s(var_130)
                        zmm1_1.d = float.s(rdx_15)
                        zmm2_1.d = 1f f/ zmm0.d
                        zmm0.d = 1f f/ zmm1_1.d
                        zmm10.d = float.s(rdi_5)
                        zmm12.d = float.s(rdi_5 + 1)
                        zmm10.d = zmm10.d f* zmm2_1.d
                        zmm9_1 = zmm0.d f* zmm8.d
                        zmm12.d = zmm12.d f* zmm2_1.d
                        zmm11_1.d = zmm7_1.d f* zmm0.d
                    
                    int32_t* rcx_22 = arg1[3]
                    zmm1_1.d = zmm6.d f+ zmm6.d
                    int32_t var_18c_1 = zmm15.d
                    int32_t var_188_1 = zmm10.d
                    zmm2_1.d = zmm8.d f* rcx_22[2]
                    zmm1_1.d = zmm1_1.d f* *rcx_22
                    float zmm4_1 = zmm6.d f* rcx_22[1]
                    zmm1_1.d = zmm1_1.d f+ zmm2_1.d
                    float var_184_1 = zmm9_1
                    zmm1_1.d = zmm1_1.d f+ rcx_22[4]
                    zmm1_1.d = zmm1_1.d f+ zmm2_1.d
                    zmm1_1.d = zmm1_1.d f+ rcx_22[4]
                    zmm1_1.d = zmm1_1.d f+ 0.5f
                    int32_t rax_32 = int.d(zmm1_1.d)
                    zmm1_1.d = zmm8.d f+ zmm8.d
                    zmm1_1.d = zmm1_1.d f* rcx_22[3]
                    zmm1_1.d = zmm1_1.d f+ zmm4_1
                    int32_t var_178_1 = _mm_cvtepi32_ps(zx.o(rax_32 s>> 1)).d
                    zmm1_1.d = zmm1_1.d f+ rcx_22[5]
                    zmm1_1.d = zmm1_1.d f+ zmm4_1
                    zmm1_1.d = zmm1_1.d f+ rcx_22[5]
                    int64_t* rcx_23 = rsi[4].q
                    int64_t rdi_8 = sx.q(rcx_23[1].d)
                    zmm1_1.d = zmm1_1.d f+ 0.5f
                    int32_t rax_36 = (rdi_8 + 1).d
                    zmm0 = _mm_cvtepi32_ps(zx.o(int.d(zmm1_1.d) s>> 1))
                    rcx_23[1].d = rax_36
                    int32_t var_174_1 = zmm0.d
                    
                    if (rax_36 s> *(rcx_23 + 0xc))
                        sub_1405c4ec0(rcx_23)
                    
                    int64_t rdx_17 = rdi_8 * 5
                    int64_t rcx_24 = *rsi[4].q
                    float var_184_2 = zmm9_1
                    zmm5_1 = zmm5_1 f+ zmm14.d
                    int32_t var_18c_2 = zmm15.d
                    *(rcx_24 + (rdx_17 << 3)) = zmm14.d.o
                    *(rcx_24 + (rdx_17 << 3) + 0x10) = 0.o
                    *(rcx_24 + (rdx_17 << 3) + 0x20) = rbx.q
                    *(rsi + 0x64) += 1
                    uint128_t* rcx_25 = arg1[3]
                    int32_t var_188_2 = zmm12.d
                    zmm1_1.d = zmm8.d f* *(rcx_25 + 8)
                    zmm2_1 = *rcx_25
                    zmm8.d = zmm8.d f* *(rcx_25 + 0xc)
                    zmm2_1.d = zmm2_1.d f+ zmm2_1.d
                    zmm2_1.d = zmm2_1.d f* zmm13.d
                    zmm2_1.d = zmm2_1.d f+ zmm1_1.d
                    zmm2_1.d = zmm2_1.d f+ rcx_25[1].d
                    zmm2_1.d = zmm2_1.d f+ zmm1_1.d
                    zmm1_1.d = zmm13.d f+ zmm13.d
                    zmm2_1.d = zmm2_1.d f+ rcx_25[1].d
                    zmm1_1.d = zmm1_1.d f* *(rcx_25 + 4)
                    zmm1_1.d = zmm1_1.d f+ zmm8.d
                    zmm2_1.d = zmm2_1.d f+ 0.5f
                    zmm1_1.d = zmm1_1.d f+ *(rcx_25 + 0x14)
                    zmm1_1.d = zmm1_1.d f+ zmm8.d
                    zmm1_1.d = zmm1_1.d f+ *(rcx_25 + 0x14)
                    int64_t* rcx_26 = rsi[4].q
                    zmm0 = _mm_cvtepi32_ps(zx.o(int.d(zmm2_1.d) s>> 1))
                    int64_t rdi_9 = sx.q(rcx_26[1].d)
                    zmm1_1.d = zmm1_1.d f+ 0.5f
                    int32_t var_178_2 = zmm0.d
                    int32_t rax_42 = (rdi_9 + 1).d
                    zmm0 = _mm_cvtepi32_ps(zx.o(int.d(zmm1_1.d) s>> 1))
                    rcx_26[1].d = rax_42
                    int32_t var_174_2 = zmm0.d
                    
                    if (rax_42 s> *(rcx_26 + 0xc))
                        sub_1405c4ec0(rcx_26)
                    
                    int64_t rdx_19 = rdi_9 * 5
                    int64_t rcx_27 = *rsi[4].q
                    zmm8.d = var_15c_1.d f+ zmm15.d
                    int32_t var_188_3 = zmm10.d
                    *(rcx_27 + (rdx_19 << 3)) = zmm5_1.o
                    int64_t var_180_2
                    var_180_2.d = 0
                    *(rcx_27 + (rdx_19 << 3) + 0x10) = 0x3f800000.o
                    var_180_2:4.d = 0x3f800000
                    *(rcx_27 + (rdx_19 << 3) + 0x20) = rbx.q
                    *(rsi + 0x64) += 1
                    int128_t* rcx_28 = arg1[3]
                    int32_t var_18c_3 = zmm8.d
                    int32_t var_184_3 = zmm11_1.d
                    zmm2_1 = *rcx_28
                    zmm1_1.d = zmm7_1.d f* *(rcx_28 + 8)
                    zmm2_1.d = zmm2_1.d f+ zmm2_1.d
                    zmm4_1 = zmm7_1.d f* *(rcx_28 + 0xc)
                    zmm2_1.d = zmm2_1.d f* zmm6.d
                    zmm6.d = zmm6.d f+ zmm6.d
                    zmm2_1.d = zmm2_1.d f+ zmm1_1.d
                    zmm6.d = zmm6.d f* *(rcx_28 + 4)
                    zmm2_1.d = zmm2_1.d f+ rcx_28[1].d
                    zmm6.d = zmm6.d f+ zmm4_1
                    zmm2_1.d = zmm2_1.d f+ zmm1_1.d
                    zmm6.d = zmm6.d f+ *(rcx_28 + 0x14)
                    zmm2_1.d = zmm2_1.d f+ rcx_28[1].d
                    zmm6.d = zmm6.d f+ zmm4_1
                    zmm2_1.d = zmm2_1.d f+ 0.5f
                    zmm6.d = zmm6.d f+ *(rcx_28 + 0x14)
                    int64_t* rcx_29 = rsi[4].q
                    int64_t rdi_10 = sx.q(rcx_29[1].d)
                    zmm6.d = zmm6.d f+ 0.5f
                    int32_t var_178_3 = _mm_cvtepi32_ps(zx.o(int.d(zmm2_1.d) s>> 1)).d
                    int32_t rax_48 = (rdi_10 + 1).d
                    zmm0 = _mm_cvtepi32_ps(zx.o(int.d(zmm6.d) s>> 1))
                    rcx_29[1].d = rax_48
                    int32_t var_174_3 = zmm0.d
                    
                    if (rax_48 s> *(rcx_29 + 0xc))
                        sub_1405c4ec0(rcx_29)
                    
                    int64_t rdx_21 = rdi_10 * 5
                    int64_t rcx_30 = *rsi[4].q
                    int32_t var_18c_4 = zmm8.d
                    int32_t var_188_4 = zmm12.d
                    int32_t var_184_4 = zmm11_1.d
                    *(rcx_30 + (rdx_21 << 3)) = zmm14.d.o
                    var_180_2.d = 0x3f800000
                    *(rcx_30 + (rdx_21 << 3) + 0x10) = 0
                    var_180_2:4.d = 0x3f800000
                    *(rcx_30 + (rdx_21 << 3) + 0x20) = rbx.q
                    zmm1_1 = zmm7_1
                    *(rsi + 0x64) += 1
                    zmm7_1.d = zmm7_1.d f+ zmm7_1.d
                    uint128_t* rcx_31 = arg1[3]
                    zmm7_1.d = zmm7_1.d f* *(rcx_31 + 0xc)
                    zmm2_1 = *rcx_31
                    zmm1_1.d = zmm1_1.d f* *(rcx_31 + 8)
                    zmm2_1.d = zmm2_1.d f+ zmm2_1.d
                    zmm4_1 = zmm13.d f* *(rcx_31 + 4)
                    zmm2_1.d = zmm2_1.d f* zmm13.d
                    zmm7_1.d = zmm7_1.d f+ zmm4_1
                    zmm2_1.d = zmm2_1.d f+ zmm1_1.d
                    zmm7_1.d = zmm7_1.d f+ *(rcx_31 + 0x14)
                    zmm2_1.d = zmm2_1.d f+ rcx_31[1].d
                    zmm7_1.d = zmm7_1.d f+ zmm4_1
                    zmm2_1.d = zmm2_1.d f+ zmm1_1.d
                    zmm7_1.d = zmm7_1.d f+ *(rcx_31 + 0x14)
                    zmm2_1.d = zmm2_1.d f+ rcx_31[1].d
                    int64_t* rcx_32 = rsi[4].q
                    zmm7_1.d = zmm7_1.d f+ 0.5f
                    int64_t rdi_11 = sx.q(rcx_32[1].d)
                    zmm2_1.d = zmm2_1.d f+ 0.5f
                    int32_t var_178_4 = _mm_cvtepi32_ps(zx.o(int.d(zmm2_1.d) s>> 1)).d
                    int32_t rax_54 = (rdi_11 + 1).d
                    zmm0 = _mm_cvtepi32_ps(zx.o(int.d(zmm7_1.d) s>> 1))
                    rcx_32[1].d = rax_54
                    int32_t var_174_4 = zmm0.d
                    
                    if (rax_54 s> *(rcx_32 + 0xc))
                        sub_1405c4ec0(rcx_32)
                    
                    int64_t rdx_23 = rdi_11 * 5
                    int64_t rcx_33 = *rsi[4].q
                    *(rcx_33 + (rdx_23 << 3)) = zmm5_1.d.o
                    *(rcx_33 + (rdx_23 << 3) + 0x10) = 0x3f800000
                    *(rcx_33 + (rdx_23 << 3) + 0x20) = rbx.q
                    int64_t* rdi_12 = *(rsi + 0x48)
                    *(rsi + 0x64) += 1
                    int64_t r15_3 = sx.q(rdi_12[1].d)
                    int32_t rax_56 = (r15_3 + 1).d
                    rdi_12[1].d = rax_56
                    
                    if (rax_56 s> *(rdi_12 + 0xc))
                        sub_1405a4cf0(rdi_12)
                    
                    int32_t r8_7 = r8_6
                    *(*rdi_12 + (r15_3 << 2)) = r8_7
                    int64_t* rdi_13 = *(rsi + 0x48)
                    *(rsi + 0x68) += 1
                    int64_t r15_4 = sx.q(rdi_13[1].d)
                    int32_t rax_58 = (r15_4 + 1).d
                    rdi_13[1].d = rax_58
                    
                    if (rax_58 s> *(rdi_13 + 0xc))
                        sub_1405a4cf0(rdi_13)
                        r8_7 = r8_6
                    
                    *(*rdi_13 + (r15_4 << 2)) = r8_7 + 1
                    int64_t* rdi_14 = *(rsi + 0x48)
                    *(rsi + 0x68) += 1
                    int64_t r15_5 = sx.q(rdi_14[1].d)
                    int32_t rax_60 = (r15_5 + 1).d
                    rdi_14[1].d = rax_60
                    
                    if (rax_60 s> *(rdi_14 + 0xc))
                        sub_1405a4cf0(rdi_14)
                        r8_7 = r8_6
                    
                    *(*rdi_14 + (r15_5 << 2)) = r8_7 + 2
                    int64_t* rdi_15 = *(rsi + 0x48)
                    *(rsi + 0x68) += 1
                    int64_t r15_6 = sx.q(rdi_15[1].d)
                    int32_t rax_62 = (r15_6 + 1).d
                    rdi_15[1].d = rax_62
                    
                    if (rax_62 s> *(rdi_15 + 0xc))
                        sub_1405a4cf0(rdi_15)
                        r8_7 = r8_6
                    
                    *(*rdi_15 + (r15_6 << 2)) = r8_7 + 1
                    int64_t* rdi_16 = *(rsi + 0x48)
                    *(rsi + 0x68) += 1
                    int64_t r15_7 = sx.q(rdi_16[1].d)
                    int32_t rax_65 = (r15_7 + 1).d
                    rdi_16[1].d = rax_65
                    
                    if (rax_65 s> *(rdi_16 + 0xc))
                        sub_1405a4cf0(rdi_16)
                    
                    *(*rdi_16 + (r15_7 << 2)) = r8_7 + 3
                    int64_t* rdi_17 = *(rsi + 0x48)
                    *(rsi + 0x68) += 1
                    int64_t r15_8 = sx.q(rdi_17[1].d)
                    int32_t rax_67 = (r15_8 + 1).d
                    rdi_17[1].d = rax_67
                    
                    if (rax_67 s> *(rdi_17 + 0xc))
                        sub_1405a4cf0(rdi_17)
                    
                    zmm10 = var_134
                    zmm12 = var_13c_1
                    rdi_5 = var_164
                    *(*rdi_17 + (r15_8 << 2)) = r8_6 + 2
                    *(rsi + 0x68) += 1
                    r15_2 = var_138_1
                else
                    result = zx.q(var_150.w)
                    zmm0.d = _mm_cvtepi32_ps(zx.o(result.d)).d f+ zmm6.d
                    
                    if (not(zmm0.d f< zmm14.d))
                        if (zmm6.d f> zmm13.d)
                            break
                        
                        goto label_140de1f8c
        
        rdi_5 += 1
        var_160_1 -= 4
        r15_2 -= 6
        zmm13 = var_12c
        zmm14 = var_128
        r8 = arg2
        result = zx.q(sx.d(r13_2[3].w))
        int64_t r13_3 = var_120
        zmm0 = _mm_cvtepi32_ps(zx.o(sx.d(*(r13_2 + 0x1a))))
        r13_1 = r13_3 + 0x68
        var_164 = rdi_5
        var_138_1 = r15_2
        var_120 = r13_1
        zmm0.d = zmm0.d f+ zmm12.d
        zmm12 = zmm0
        var_13c_1 = zmm0.d
        zmm10.d = zmm10.d f+ _mm_cvtepi32_ps(zx.o(result.d)).d
        var_134 = zmm10.d
    while (rdi_5 s< var_130)

return result
