// 函数: sub_142627f00
// 地址: 0x142627f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* r9 = arg5
int64_t r8 = sx.q(arg6)
float zmm13[0x4] = arg3
float zmm9[0x4] = *(r9 + 8)
float zmm10[0x4] = zmm9
float zmm11[0x4] = *r9
float zmm12[0x4] = zmm11
float zmm14[0x4] = *(r9 + 4)
float zmm4[0x4]

if (r8 s> 1)
    void* rdx = 1
    
    if (r8 s>= 5)
        int64_t i_2 = ((r8 - 5) u>> 2) + 1
        float zmm8[0x4]
        float var_78_1[0x4] = zmm8
        void* rax_1 = &r9[2]
        rdx = (i_2 << 2) + 1
        int64_t i
        
        do
            zmm4 = *(rax_1 - 0x14)
            zmm8 = *(rax_1 - 0xc)
            float temp0_1[0x4] = _mm_min_ss(zmm4[0], zmm11[0])
            float temp0_2[0x4] = _mm_max_ss(zmm4[0], zmm12[0])
            rax_1 += 0x30
            float temp0_3[0x4] = _mm_min_ss(zmm8[0], zmm9[0])
            float temp0_4[0x4] = _mm_max_ss(zmm8[0], zmm10[0])
            float temp0_5[0x4] = __minss_xmmss_memss(temp0_1[0], *(rax_1 - 0x38))
            float temp0_6[0x4] = __maxss_xmmss_memss(temp0_2[0], *(rax_1 - 0x38))
            float temp0_7[0x4] = _mm_max_ss((*(rax_1 - 0x40))[0], zmm14[0])
            float temp0_8[0x4] = __minss_xmmss_memss(temp0_3[0], *(rax_1 - 0x30))
            float temp0_9[0x4] = __maxss_xmmss_memss(temp0_4[0], *(rax_1 - 0x30))
            float temp0_10[0x4] = __minss_xmmss_memss(temp0_5[0], *(rax_1 - 0x2c))
            float temp0_11[0x4] = __maxss_xmmss_memss(temp0_6[0], *(rax_1 - 0x2c))
            float temp0_12[0x4] = __maxss_xmmss_memss(temp0_7[0], *(rax_1 - 0x34))
            float temp0_13[0x4] = __minss_xmmss_memss(temp0_8[0], *(rax_1 - 0x24))
            float temp0_14[0x4] = __maxss_xmmss_memss(temp0_9[0], *(rax_1 - 0x24))
            zmm11 = __minss_xmmss_memss(temp0_10[0], *(rax_1 - 0x20))
            zmm12 = __maxss_xmmss_memss(temp0_11[0], *(rax_1 - 0x20))
            float temp0_17[0x4] = __maxss_xmmss_memss(temp0_12[0], *(rax_1 - 0x28))
            zmm9 = __minss_xmmss_memss(temp0_13[0], *(rax_1 - 0x18))
            zmm10 = __maxss_xmmss_memss(temp0_14[0], *(rax_1 - 0x18))
            zmm14 = __maxss_xmmss_memss(temp0_17[0], *(rax_1 - 0x1c))
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    if (rdx s< r8)
        void* i_3 = r8 - rdx
        void* rcx_2 = r9 + rdx * 0xc
        void* i_1
        
        do
            arg3 = *rcx_2
            zmm9 = __minss_xmmss_memss(zmm9[0], *(rcx_2 + 8))
            zmm10 = __maxss_xmmss_memss(zmm10[0], *(rcx_2 + 8))
            rcx_2 += 0xc
            zmm11 = _mm_min_ss(arg3[0], zmm11[0])
            zmm12 = _mm_max_ss(arg3[0], zmm12[0])
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)

void* rax_3 = *arg1
arg3 = 0x3f800000
int32_t zmm5 = *arg2
zmm11[0] = zmm11[0] f- zmm5
arg3[0] = 1f / zmm13[0]
uint64_t r10 = zx.q(*(rax_3 + 0x30))
uint32_t rsi = zx.d(*(rax_3 + 0x32))
arg4.d = 1f f/ arg4.d
zmm11[0] = zmm11[0] * arg3[0]
int32_t rcx_3 = int.d(zmm11[0])

if (rcx_3 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_3))[0] == zmm11[0]))
    zmm11 = _mm_cvtepi32_ps(zx.o(rcx_3 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm11, zmm11[0].q)) & 1)))

zmm4 = arg2[1]
uint128_t zmm1
zmm1.d = arg7.d f- zmm4[0]
int32_t rbx = int.d(zmm11[0])
zmm1.d = zmm1.d f* arg4.d
int32_t rcx_5 = int.d(zmm1.d)

if (rcx_5 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_5))[0] f== zmm1.d))
    zmm1 = _mm_cvtepi32_ps(zx.o(rcx_5 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1.q)) & 1)))

int128_t zmm6 = arg2[2]
zmm9[0] = zmm9[0] f- zmm6.d
int32_t r8_1 = int.d(zmm1.d)
zmm9[0] = zmm9[0] * arg3[0]
int32_t arg_18 = r8_1
int32_t rcx_7 = int.d(zmm9[0])

if (rcx_7 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_7))[0] == zmm9[0]))
    zmm9 = _mm_cvtepi32_ps(zx.o(rcx_7 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm9, zmm9[0].q)) & 1)))

zmm12[0] = zmm12[0] f- zmm5
int32_t rdi = int.d(zmm9[0])
zmm12[0] = zmm12[0] * arg3[0]
int32_t rcx_9 = int.d(zmm12[0])

if (rcx_9 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_9))[0] == zmm12[0]))
    zmm12 = _mm_cvtepi32_ps(zx.o(rcx_9 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm12, zmm12[0].q)) & 1)))

zmm1.d = arg8.d f- zmm4[0]
int32_t r11 = int.d(zmm12[0])
zmm1.d = zmm1.d f* arg4.d
int32_t rcx_11 = int.d(zmm1.d)

if (rcx_11 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_11))[0] f== zmm1.d))
    zmm1 = _mm_cvtepi32_ps(zx.o(rcx_11 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1.q)) & 1)))

zmm10[0] = zmm10[0] f- zmm6.d
int32_t rdx_1 = int.d(zmm1.d)
zmm10[0] = zmm10[0] * arg3[0]
arg8 = rdx_1
int32_t rcx_13 = int.d(zmm10[0])

if (rcx_13 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_13))[0] == zmm10[0]))
    zmm10 =
        _mm_cvtepi32_ps(zx.o(rcx_13 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm10, zmm10[0].q)) & 1)))

int32_t rax_16 = int.d(zmm10[0])

if (r11 s>= 0 && rbx s< r10.d && rax_16 s>= 0 && rdi s< rsi)
    int32_t rcx_15 = rsi - 1
    int32_t r12_1 = 0
    int32_t rbp_1 = 0
    
    if (rbx s>= 0)
        rbp_1 = rbx
    
    int32_t rbx_1 = (r10 - 1).d
    int32_t arg_8 = rbp_1
    
    if (r11 s< r10.d)
        rbx_1 = r11
    
    if (rax_16 s< rsi)
        rcx_15 = rax_16
    
    int32_t arg_20 = rcx_15
    
    if (rdi s>= 0)
        r12_1 = rdi
    
    if (r12_1 s<= rcx_15)
        int64_t rdi_1 = sx.q(rbx_1)
        int64_t r15_1 = sx.q(r12_1 * r10.d)
        uint64_t rax_19 = r10
        uint64_t arg_10 = rax_19
        
        do
            int64_t rbx_2 = sx.q(rbp_1)
            
            if (rbx_2 s<= rdi_1)
                int32_t rax_20 = rbx_1
                int64_t rsi_2 = (rbx_2 + r15_1) * 2
                
                do
                    char* rdi_3 = arg1[3] + r15_1
                    
                    if (rdi_3[rbx_2] != 0)
                        uint32_t rcx_16 = zx.d(*(arg1[2] + rsi_2))
                        
                        if (rcx_16 s>= r8_1 && rcx_16 s<= rdx_1)
                            float temp0_49[0x4] = _mm_cvtepi32_ps(zx.o(rbp_1))
                            int32_t var_f4_1 = 0
                            zmm1 = _mm_cvtepi32_ps(zx.o(r12_1))
                            temp0_49[0] = temp0_49[0] + 0.5f
                            zmm1.d = zmm1.d f+ 0.5f
                            temp0_49[0] = temp0_49[0] * zmm13[0]
                            zmm1.d = zmm1.d f* zmm13[0]
                            temp0_49[0] = temp0_49[0] f+ *arg2
                            zmm1.d = zmm1.d f+ arg2[2]
                            float var_f8 = temp0_49[0]
                            int32_t var_f0_1 = zmm1.d
                            int32_t rax_22 = sub_14262dce0(arg6, r9, &var_f8)
                            rdx_1 = arg8
                            r8_1 = arg_18
                            r9 = arg5
                            
                            if (rax_22 != 0)
                                rdi_3[rbx_2] = arg9
                        
                        rax_20 = rbx_1
                    
                    rbp_1 += 1
                    rdi_1 = sx.q(rax_20)
                    rbx_2 += 1
                    rsi_2 += 2
                while (rbx_2 s<= rdi_1)
                
                rcx_15 = arg_20
                rax_19 = arg_10
            
            rbp_1 = arg_8
            r12_1 += 1
            r15_1 += rax_19
        while (r12_1 s<= rcx_15)

return 0x40000000
