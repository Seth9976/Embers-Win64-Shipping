// 函数: sub_142620ee0
// 地址: 0x142620ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_5c8
int64_t rax_1 = __security_cookie ^ &var_5c8
int32_t rsi = 0
int32_t* r13 = arg10
int64_t r9 = 0
int128_t* rbx = arg9
float zmm14[0x4] = arg4
int64_t* r15 = arg11
int128_t* r10 = arg1
int64_t* rdi = arg13
int64_t i_12 = sx.q(arg2)
int64_t var_540 = arg8
int64_t i_14 = i_12
*r13 = 0
float var_568 = arg4[0]
float var_56c = arg3[0]
int32_t var_564 = i_12.d
int128_t* var_520 = rbx
int32_t* var_528 = r13
int64_t* var_560 = r15
int32_t** var_558 = rdi
int32_t var_57c = 0
int64_t i_13 = i_12

if (i_12 s>= 4)
    int32_t* rdx_1 = r10 - rbx
    int64_t i_9 = ((i_12 - 4) u>> 2) + 1
    void* rcx = &rbx[1]
    r9 = i_9 << 2
    int64_t i
    
    do
        *(rcx - 0x10) = *(rdx_1 + rcx - 0x10)
        *(rcx - 0xc) = *(rdx_1 + rcx - 0xc)
        *(rcx - 8) = *(rdx_1 + rcx - 8)
        *(rcx - 4) = *(rdx_1 + rcx - 4)
        *rcx = *(rdx_1 + rcx)
        *(rcx + 4) = *(rdx_1 + rcx + 4)
        *(rcx + 8) = *(rdx_1 + rcx + 8)
        *(rcx + 0xc) = *(rdx_1 + rcx + 0xc)
        *(rcx + 0x10) = *(rdx_1 + rcx + 0x10)
        *(rcx + 0x14) = *(rdx_1 + rcx + 0x14)
        *(rcx + 0x18) = *(rdx_1 + rcx + 0x18)
        *(rcx + 0x1c) = *(rdx_1 + rcx + 0x1c)
        rcx += 0x30
        i = i_9
        i_9 -= 1
    while (i != 1)

if (r9 s< i_12)
    int64_t rdx_3 = r10 - rbx
    int64_t i_10 = i_12 - r9
    void* rcx_3 = rbx + ((r9 * 3 + 1) << 2)
    int64_t i_1
    
    do
        *(rcx_3 - 4) = *(rcx_3 + rdx_3 - 4)
        *rcx_3 = *(rcx_3 + rdx_3)
        *(rcx_3 + 4) = *(rcx_3 + rdx_3 + 4)
        rcx_3 += 0xc
        i_1 = i_10
        i_10 -= 1
    while (i_1 != 1)

float zmm15[0x4] = 0x3f800000
float zmm13[0x4] = zx.o(0)
float zmm12[0x4] = arg6
bool cond:0 = zmm12[0] <= 0f
uint64_t r12 = 2
*r13 = i_12.d
uint128_t zmm6
float var_48[0x4] = zmm6
uint128_t zmm7
float var_58[0x4] = zmm7
uint128_t zmm8
uint128_t var_68 = zmm8
uint128_t zmm1
zmm1.d = 1f / arg3[0]
float zmm9[0x4]
float var_78[0x4] = zmm9
float var_88 = arg5.d
int32_t var_570 = zmm1.d
float zmm11
float var_98 = zmm11
void var_2e8

if (not(cond:0))
    int32_t var_580_1 = 0
    int32_t r8_4 = (i_12 - 1).d
    int32_t var_578_1 = r8_4
    
    if (i_12.d s> 0)
        arg4 = 0x3f800000
        arg4[0] = 1f / zmm12[0]
        int64_t r14 = 0
        int64_t i_7 = i_12
        uint128_t* rax_20 = r10
        int64_t rcx_5 = sx.q(r8_4) * 0xc
        uint128_t* var_510_1 = rax_20
        float var_574_1 = arg4[0]
        int64_t i_2
        
        do
            zmm1 = *rax_20
            int128_t* rcx_6 = rcx_5 + r10
            uint128_t* rdx_4 = rax_20
            bool var_588_1 = false
            zmm6 = *rcx_6
            uint128_t zmm0
            zmm0.d = zmm6.d f- zmm1.d
            
            if (__andps_xmmxud_memxud(zmm0, data_142d3f770).d f>= 9.99999997e-07f)
                zmm7 = zmm1
                
                if (not(zmm6.d f<= zmm1.d))
                    zmm7 = zmm6
                    var_588_1 = true
                    zmm6 = zmm1
                    rdx_4 = rcx_6
                    rcx_6 = rax_20
            else
                zmm1 = *(rcx_6 + 8)
                rdx_4 = rcx_6
                float temp2_1 = *(rax_20 + 8)
                zmm1.d f- temp2_1
                
                if (zmm1.d f<= temp2_1)
                    rdx_4 = rax_20
                
                var_588_1 = zmm1.d f> temp2_1
                
                if (zmm1.d f<= temp2_1)
                    rax_20 = rcx_6
                
                zmm7 = *rdx_4
                zmm6 = *rax_20
                rcx_6 = rax_20
            
            zmm12 = *(rcx_6 + 8)
            zmm7.d = zmm7.d f- zmm6.d
            zmm11 = *(rcx_6 + 4)
            zmm8.d = (*(rdx_4 + 8)).d f- zmm12[0]
            arg5.d = (*(rdx_4 + 4)).d f- zmm11
            zmm0.d = zmm7.d f* zmm7.d
            zmm1.d = zmm8.d f* zmm8.d
            zmm1.d = zmm1.d f+ zmm0.d
            arg3 = _mm_sqrt_ss(zx.o(0)[0], zmm1.d)
            arg3[0] = arg3[0] * arg4[0]
            int32_t rcx_7 = int.d(arg3[0])
            
            if (rcx_7 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_7)).d f== arg3[0]))
                arg3 = _mm_cvtepi32_ps(zx.o(rcx_7
                    - (_mm_movemask_ps(_mm_unpacklo_ps(arg3, arg3[0].q)) & 1)))
            
            int32_t rax_23 = *r13
            int32_t rdx_6 = int.d(arg3[0]) + 1
            
            if (rdx_6 s>= 0x20)
                rdx_6 = 0x1f
            
            int32_t rsi_1 = 0x7e - rax_23
            
            if (rax_23 + rdx_6 s< 0x7f)
                rsi_1 = rdx_6
            
            int32_t rdi_1 = 0
            void var_474
            
            if (rsi_1 s>= 0)
                void* rbx_1 = &var_474
                int64_t r13_1 = var_540
                zmm0 = _mm_cvtepi32_ps(zx.o(rsi_1))
                zmm15[0] = zmm15[0] f/ zmm0.d
                
                do
                    zmm1 = _mm_cvtepi32_ps(zx.o(rdi_1))
                    int64_t var_598_1 = r13_1
                    int64_t* var_5a0
                    var_5a0.d = zmm14[0]
                    zmm1.d = zmm1.d f* zmm15[0]
                    float var_5a8 = var_570[0]
                    arg3 = zmm1
                    zmm0.d = zmm1.d f* zmm7.d
                    arg3[0] = arg3[0] f* zmm8.d
                    zmm1.d = zmm1.d f* arg5.d
                    zmm0.d = zmm0.d f+ zmm6.d
                    arg3[0] = arg3[0] + zmm12[0]
                    zmm1.d = zmm1.d f+ zmm11
                    *(rbx_1 - 4) = zmm0.d
                    *(rbx_1 + 4) = arg3[0]
                    int16_t rax_24
                    rax_24, r9 = sub_14262bc60(zmm0, zmm1, arg3, r9.d, var_5a8, var_5a0)
                    rdi_1 += 1
                    zmm0.d = _mm_cvtepi32_ps(zx.o(rax_24)).d f* zmm14[0]
                    *rbx_1 = zmm0.d
                    rbx_1 += 0xc
                while (rdi_1 s<= rsi_1)
                
                zmm15 = 0x3f800000
                zmm13 = zx.o(0)
                rbx = var_520
            
            int32_t var_4f8 = 0
            int32_t var_4f4 = rsi_1
            void var_4f0
            memset(&var_4f0, 0, 0x78)
            int32_t rsi_2 = 0
            int32_t r13_2 = 2
            int32_t var_584_1 = 0
            int64_t r9_1 = 0
            int32_t r15_1 = 1
            void var_478
            int32_t var_470[0x62]
            
            do
                uint64_t rcx_11 = zx.q((&var_4f8)[r9_1])
                arg4 = zmm13
                uint64_t rdi_2 = zx.q((&var_4f4)[r9_1])
                int32_t j_7 = -1
                int64_t r10_1 = sx.q((rcx_11 * 3).d)
                int32_t j = (rcx_11 + 1).d
                int64_t r11 = sx.q((rdi_2 * 3).d)
                
                if (j s>= rdi_2.d)
                label_142621800:
                    rsi_2 += 1
                    var_584_1 = rsi_2
                    r9_1 += 1
                else
                    float zmm4_1
                    float zmm5_1[0x4]
                    
                    if (rdi_2.d - j s>= 4)
                        zmm9 = *(&var_474 + (r11 << 2))
                        arg5 = var_470[r11]
                        zmm11 = *(&var_478 + (r10_1 << 2))
                        zmm12 = *(&var_474 + (r10_1 << 2))
                        zmm8.d = (*(&var_478 + (r11 << 2))).d f- zmm11
                        zmm14 = var_470[r10_1]
                        zmm9[0] = zmm9[0] - zmm12[0]
                        arg5.d = arg5.d f- zmm14[0]
                        zmm0.d = zmm8.d f* zmm8.d
                        void* rcx_12 = &var_470[sx.q(j) * 3]
                        zmm1.d = arg5.d f* arg5.d
                        zmm4_1 = zmm9[0] * zmm9[0] f+ zmm0.d f+ zmm1.d
                        
                        do
                            bool cond:14_1 = zmm4_1 <= zmm13[0]
                            zmm6 = *(rcx_12 - 4)
                            zmm5_1 = *(rcx_12 - 8)
                            zmm7 = *rcx_12
                            zmm0.d = zmm6.d f- zmm12[0]
                            zmm5_1[0] = zmm5_1[0] - zmm11
                            zmm1.d = zmm7.d f- zmm14[0]
                            zmm0.d = zmm0.d f* zmm9[0]
                            zmm5_1[0] = zmm5_1[0] f* zmm8.d
                            zmm1.d = zmm1.d f* arg5.d
                            zmm5_1[0] = zmm5_1[0] f+ zmm0.d
                            zmm5_1[0] = zmm5_1[0] f+ zmm1.d
                            
                            if (not(cond:14_1))
                                zmm5_1[0] = zmm5_1[0] / zmm4_1
                            
                            if (zmm5_1[0] >= zmm13[0])
                                arg3 = _mm_min_ss(zmm5_1[0], zmm15[0])
                            else
                                arg3 = zmm13
                            
                            zmm1.d = zmm8.d f* arg3[0]
                            int32_t j_4 = j
                            zmm0.d = arg5.d f* arg3[0]
                            zmm1.d = zmm1.d f+ zmm11
                            zmm0.d = zmm0.d f+ zmm14[0]
                            zmm1.d = zmm1.d f- zmm5_1[0]
                            zmm9[0] = zmm9[0] * arg3[0]
                            arg3 = *(rcx_12 + 4)
                            zmm0.d = zmm0.d f- zmm7.d
                            zmm7 = *(rcx_12 + 0xc)
                            zmm9[0] = zmm9[0] + zmm12[0]
                            zmm1.d = zmm1.d f* zmm1.d
                            zmm0.d = zmm0.d f* zmm0.d
                            zmm9[0] = zmm9[0] f- zmm6.d
                            zmm6 = *(rcx_12 + 8)
                            zmm9[0] = zmm9[0] * zmm9[0]
                            zmm9[0] = zmm9[0] f+ zmm1.d
                            zmm1.d = zmm7.d f- zmm14[0]
                            zmm9[0] = zmm9[0] f+ zmm0.d
                            zmm0.d = zmm6.d f- zmm12[0]
                            zmm1.d = zmm1.d f* arg5.d
                            bool cond:6_1 = zmm9[0] <= arg4[0]
                            zmm5_1 = _mm_max_ss(zmm9[0], arg4[0])
                            zmm0.d = zmm0.d f* zmm9[0]
                            
                            if (cond:6_1)
                                j_4 = j_7
                            
                            bool cond:7_1 = zmm4_1 <= zmm13[0]
                            arg3[0] = arg3[0] - zmm11
                            arg3[0] = arg3[0] f* zmm8.d
                            arg3[0] = arg3[0] f+ zmm0.d
                            arg3[0] = arg3[0] f+ zmm1.d
                            
                            if (not(cond:7_1))
                                arg3[0] = arg3[0] / zmm4_1
                            
                            if (arg3[0] >= zmm13[0])
                                arg4 = _mm_min_ss(arg3[0], zmm15[0])
                            else
                                arg4 = zmm13
                            
                            int32_t j_8 = j + 1
                            zmm1.d = zmm8.d f* arg4[0]
                            zmm0.d = arg5.d f* arg4[0]
                            zmm1.d = zmm1.d f+ zmm11
                            zmm0.d = zmm0.d f+ zmm14[0]
                            zmm1.d = zmm1.d f- arg3[0]
                            zmm9[0] = zmm9[0] * arg4[0]
                            zmm0.d = zmm0.d f- zmm7.d
                            zmm7 = *(rcx_12 + 0x18)
                            zmm9[0] = zmm9[0] + zmm12[0]
                            zmm1.d = zmm1.d f* zmm1.d
                            zmm0.d = zmm0.d f* zmm0.d
                            zmm9[0] = zmm9[0] f- zmm6.d
                            zmm6 = *(rcx_12 + 0x14)
                            zmm9[0] = zmm9[0] * zmm9[0]
                            zmm9[0] = zmm9[0] f+ zmm1.d
                            zmm1.d = zmm7.d f- zmm14[0]
                            zmm9[0] = zmm9[0] f+ zmm0.d
                            zmm0.d = zmm6.d f- zmm12[0]
                            zmm1.d = zmm1.d f* arg5.d
                            bool cond:10_1 = zmm9[0] <= zmm5_1[0]
                            zmm0.d = zmm0.d f* zmm9[0]
                            arg4 = _mm_max_ss(zmm9[0], zmm5_1[0])
                            zmm5_1 = *(rcx_12 + 0x10)
                            
                            if (cond:10_1)
                                j_8 = j_4
                            
                            bool cond:11_1 = zmm4_1 <= zmm13[0]
                            zmm5_1[0] = zmm5_1[0] - zmm11
                            zmm5_1[0] = zmm5_1[0] f* zmm8.d
                            zmm5_1[0] = zmm5_1[0] f+ zmm0.d
                            zmm5_1[0] = zmm5_1[0] f+ zmm1.d
                            
                            if (not(cond:11_1))
                                zmm5_1[0] = zmm5_1[0] / zmm4_1
                            
                            if (zmm5_1[0] >= zmm13[0])
                                arg3 = _mm_min_ss(zmm5_1[0], zmm15[0])
                            else
                                arg3 = zmm13
                            
                            int32_t j_9 = j + 2
                            zmm1.d = zmm8.d f* arg3[0]
                            zmm0.d = arg5.d f* arg3[0]
                            zmm1.d = zmm1.d f+ zmm11
                            zmm0.d = zmm0.d f+ zmm14[0]
                            zmm1.d = zmm1.d f- zmm5_1[0]
                            zmm9[0] = zmm9[0] * arg3[0]
                            zmm0.d = zmm0.d f- zmm7.d
                            zmm7 = *(rcx_12 + 0x24)
                            zmm9[0] = zmm9[0] + zmm12[0]
                            zmm1.d = zmm1.d f* zmm1.d
                            zmm0.d = zmm0.d f* zmm0.d
                            zmm9[0] = zmm9[0] f- zmm6.d
                            zmm6 = *(rcx_12 + 0x20)
                            zmm9[0] = zmm9[0] * zmm9[0]
                            zmm9[0] = zmm9[0] f+ zmm1.d
                            zmm1.d = zmm7.d f- zmm14[0]
                            zmm9[0] = zmm9[0] f+ zmm0.d
                            zmm0.d = zmm6.d f- zmm12[0]
                            zmm1.d = zmm1.d f* arg5.d
                            bool cond:12_1 = zmm9[0] <= arg4[0]
                            zmm5_1 = _mm_max_ss(zmm9[0], arg4[0])
                            zmm0.d = zmm0.d f* zmm9[0]
                            arg4 = *(rcx_12 + 0x1c)
                            
                            if (cond:12_1)
                                j_9 = j_8
                            
                            bool cond:13_1 = zmm4_1 <= zmm13[0]
                            arg4[0] = arg4[0] - zmm11
                            arg4[0] = arg4[0] f* zmm8.d
                            arg4[0] = arg4[0] f+ zmm0.d
                            arg4[0] = arg4[0] f+ zmm1.d
                            
                            if (not(cond:13_1))
                                arg4[0] = arg4[0] / zmm4_1
                            
                            if (arg4[0] >= zmm13[0])
                                arg3 = _mm_min_ss(arg4[0], zmm15[0])
                            else
                                arg3 = zmm13
                            
                            j_7 = j + 3
                            zmm0.d = arg5.d f* arg3[0]
                            zmm1.d = zmm8.d f* arg3[0]
                            zmm0.d = zmm0.d f+ zmm14[0]
                            zmm1.d = zmm1.d f+ zmm11
                            zmm0.d = zmm0.d f- zmm7.d
                            zmm1.d = zmm1.d f- arg4[0]
                            zmm9[0] = zmm9[0] * arg3[0]
                            zmm0.d = zmm0.d f* zmm0.d
                            zmm9[0] = zmm9[0] + zmm12[0]
                            zmm1.d = zmm1.d f* zmm1.d
                            zmm9[0] = zmm9[0] f- zmm6.d
                            zmm9[0] = zmm9[0] * zmm9[0]
                            zmm9[0] = zmm9[0] f+ zmm1.d
                            zmm9[0] = zmm9[0] f+ zmm0.d
                            arg4 = _mm_max_ss(zmm9[0], zmm5_1[0])
                            
                            if (zmm9.d f<= zmm5_1[0])
                                j_7 = j_9
                            
                            rcx_12 += 0x30
                            j += 4
                        while (j s< (rdi_2 - 3).d)
                        
                        rsi_2 = var_584_1
                    
                    if (j s< rdi_2.d)
                        zmm5_1 = *(&var_478 + (r11 << 2))
                        zmm6 = *(&var_474 + (r11 << 2))
                        zmm7 = var_470[r11]
                        zmm11 = *(&var_478 + (r10_1 << 2))
                        zmm12 = *(&var_474 + (r10_1 << 2))
                        zmm5_1[0] = zmm5_1[0] - zmm11
                        zmm14 = var_470[r10_1]
                        zmm6.d = zmm6.d f- zmm12[0]
                        zmm7.d = zmm7.d f- zmm14[0]
                        zmm0.d = zmm5_1.d f* zmm5_1[0]
                        uint128_t* rcx_13 = &var_470[sx.q(j) * 3]
                        zmm1.d = zmm7.d f* zmm7.d
                        zmm4_1 = zmm6.d f* zmm6.d f+ zmm0.d f+ zmm1.d
                        
                        do
                            bool cond:8_1 = zmm4_1 <= zmm13[0]
                            zmm8 = *(rcx_13 - 4)
                            zmm9 = *(rcx_13 - 8)
                            arg5 = *rcx_13
                            zmm0.d = zmm8.d f- zmm12[0]
                            zmm9[0] = zmm9[0] - zmm11
                            zmm1.d = arg5.d f- zmm14[0]
                            zmm0.d = zmm0.d f* zmm6.d
                            zmm9[0] = zmm9[0] * zmm5_1[0]
                            zmm1.d = zmm1.d f* zmm7.d
                            zmm9[0] = zmm9[0] f+ zmm0.d
                            zmm9[0] = zmm9[0] f+ zmm1.d
                            
                            if (not(cond:8_1))
                                zmm9[0] = zmm9[0] / zmm4_1
                            
                            if (zmm9[0] >= zmm13[0])
                                arg3 = _mm_min_ss(zmm9[0], zmm15[0])
                            else
                                arg3 = zmm13
                            
                            zmm1.d = arg3.d f* zmm6.d
                            int32_t j_5 = j
                            zmm0.d = arg3.d f* zmm5_1[0]
                            zmm1.d = zmm1.d f+ zmm12[0]
                            arg3[0] = arg3[0] f* zmm7.d
                            zmm0.d = zmm0.d f+ zmm11
                            arg3[0] = arg3[0] + zmm14[0]
                            zmm1.d = zmm1.d f- zmm8.d
                            zmm0.d = zmm0.d f- zmm9[0]
                            arg3[0] = arg3[0] f- arg5.d
                            zmm1.d = zmm1.d f* zmm1.d
                            zmm0.d = zmm0.d f* zmm0.d
                            arg3[0] = arg3[0] * arg3[0]
                            zmm1.d = zmm1.d f+ zmm0.d
                            zmm1.d = zmm1.d f+ arg3[0]
                            bool cond:9_1 = zmm1.d f<= arg4[0]
                            zmm1 = _mm_max_ss(zmm1.d, arg4[0])
                            
                            if (cond:9_1)
                                j_5 = j_7
                            
                            rcx_13 += 0xc
                            j += 1
                            j_7 = j_5
                            arg4 = zmm1
                        while (j s< rdi_2.d)
                    
                    if (j_7 == 0xffffffff)
                        goto label_142621800
                    
                    arg3 = arg7
                    zmm0.d = arg3.d f* arg3[0]
                    
                    if (arg4[0] f<= zmm0.d)
                        goto label_142621800
                    
                    uint64_t rcx_14 = r12
                    
                    if (r12 s> r9_1)
                        do
                            void var_4fc
                            (&var_4f8)[rcx_14] = *(&var_4fc + (rcx_14 << 2))
                            rcx_14 -= 1
                        while (rcx_14 s> r9_1)
                    
                    r13_2 += 1
                    (&var_4f4)[r9_1] = j_7
                    r15_1 += 1
                    r12 += 1
            while (rsi_2 s< r15_1)
            
            rsi = var_57c + 1
            *(&var_2e8 + (r14 << 2)) = var_578_1
            r14 += 1
            r13 = var_528
            var_57c = rsi
            void var_2e4
            void var_2e0
            int32_t var_2dc[0x7d]
            
            if (var_588_1 == 0)
                int64_t j_1 = 1
                int64_t r10_3 = sx.q(r13_2 - 1)
                
                if (r10_3 s> 1)
                    if (r10_3 s>= 5)
                        rsi = rsi + ((r10_3 - 5) u>> 2 << 2).d + 4
                        var_57c = rsi
                        
                        do
                            int64_t r8_10 = sx.q((&var_4f8)[j_1] * 3)
                            int64_t rdx_12 = sx.q(*r13 * 3)
                            *(rbx + (rdx_12 << 2)) = *(&var_478 + (r8_10 << 2))
                            *(rbx + (rdx_12 << 2) + 4) = *(&var_474 + (r8_10 << 2))
                            *(rbx + (rdx_12 << 2) + 8) = var_470[r8_10]
                            int32_t rax_78 = *r13
                            *(&var_2e8 + (r14 << 2)) = rax_78
                            uint64_t rdx_13 = zx.q(rax_78 + 1)
                            uint64_t rax_79 = zx.q((&var_4f4)[j_1])
                            *r13 = rdx_13.d
                            int64_t r8_11 = sx.q((rax_79 * 3).d)
                            int64_t rcx_28 = sx.q((rdx_13 * 3).d)
                            *(rbx + (rcx_28 << 2)) = *(&var_478 + (r8_11 << 2))
                            *(rbx + (rcx_28 << 2) + 4) = *(&var_474 + (r8_11 << 2))
                            *(rbx + (rcx_28 << 2) + 8) = var_470[r8_11]
                            int32_t rax_84 = *r13
                            *(&var_2e4 + (r14 << 2)) = rax_84
                            uint64_t rdx_14 = zx.q(rax_84 + 1)
                            uint64_t rax_85 = zx.q(*(&var_4f0 + (j_1 << 2)))
                            *r13 = rdx_14.d
                            int64_t r8_12 = sx.q((rax_85 * 3).d)
                            int64_t rcx_30 = sx.q((rdx_14 * 3).d)
                            *(rbx + (rcx_30 << 2)) = *(&var_478 + (r8_12 << 2))
                            *(rbx + (rcx_30 << 2) + 4) = *(&var_474 + (r8_12 << 2))
                            *(rbx + (rcx_30 << 2) + 8) = var_470[r8_12]
                            int32_t rax_90 = *r13
                            *(&var_2e0 + (r14 << 2)) = rax_90
                            uint64_t rdx_15 = zx.q(rax_90 + 1)
                            int32_t var_4ec[0x9]
                            uint64_t rax_91 = zx.q(var_4ec[j_1])
                            *r13 = rdx_15.d
                            j_1 += 4
                            int64_t r8_13 = sx.q((rax_91 * 3).d)
                            int64_t rcx_32 = sx.q((rdx_15 * 3).d)
                            *(rbx + (rcx_32 << 2)) = *(&var_478 + (r8_13 << 2))
                            *(rbx + (rcx_32 << 2) + 4) = *(&var_474 + (r8_13 << 2))
                            *(rbx + (rcx_32 << 2) + 8) = var_470[r8_13]
                            int32_t rax_96 = *r13
                            var_2dc[r14] = rax_96
                            r14 += 4
                            *r13 = rax_96 + 1
                        while (j_1 s< r10_3 - 3)
                    
                    if (j_1 s< r10_3)
                        rsi += r10_3.d - j_1.d
                        var_57c = rsi
                        
                        do
                            uint64_t rax_100 = zx.q((&var_4f8)[j_1])
                            j_1 += 1
                            int64_t r8_14 = sx.q((rax_100 * 3).d)
                            int64_t rdx_16 = sx.q(*r13 * 3)
                            *(rbx + (rdx_16 << 2)) = *(&var_478 + (r8_14 << 2))
                            *(rbx + (rdx_16 << 2) + 4) = *(&var_474 + (r8_14 << 2))
                            *(rbx + (rdx_16 << 2) + 8) = var_470[r8_14]
                            int32_t rax_105 = *r13
                            *(&var_2e8 + (r14 << 2)) = rax_105
                            r14 += 1
                            *r13 = rax_105 + 1
                        while (j_1 s< r10_3)
            else
                int64_t j_3 = r12 - 2
                
                if (j_3 s>= 4)
                    void var_4c8
                    void* r10_2 = &var_4c8 + (j_3 << 2) - 0x38
                    int64_t j_6 = ((r12 - 6) u>> 2) + 1
                    rsi += (j_6 << 2).d
                    var_57c = rsi
                    j_3 -= j_6 << 2
                    int64_t j_2
                    
                    do
                        uint64_t rax_37 = zx.q(*(r10_2 + 8))
                        r10_2 -= 0x10
                        int64_t r8_5 = sx.q((rax_37 * 3).d)
                        int64_t rdx_7 = sx.q(*r13 * 3)
                        *(rbx + (rdx_7 << 2)) = *(&var_478 + (r8_5 << 2))
                        *(rbx + (rdx_7 << 2) + 4) = *(&var_474 + (r8_5 << 2))
                        *(rbx + (rdx_7 << 2) + 8) = var_470[r8_5]
                        int32_t rax_42 = *r13
                        *(&var_2e8 + (r14 << 2)) = rax_42
                        uint64_t rdx_8 = zx.q(rax_42 + 1)
                        uint64_t rax_43 = zx.q(*(r10_2 + 0x14))
                        *r13 = rdx_8.d
                        int64_t r8_6 = sx.q((rax_43 * 3).d)
                        int64_t rcx_18 = sx.q((rdx_8 * 3).d)
                        *(rbx + (rcx_18 << 2)) = *(&var_478 + (r8_6 << 2))
                        *(rbx + (rcx_18 << 2) + 4) = *(&var_474 + (r8_6 << 2))
                        *(rbx + (rcx_18 << 2) + 8) = var_470[r8_6]
                        int32_t rax_48 = *r13
                        *(&var_2e4 + (r14 << 2)) = rax_48
                        uint64_t rdx_9 = zx.q(rax_48 + 1)
                        uint64_t rax_49 = zx.q(*(r10_2 + 0x10))
                        *r13 = rdx_9.d
                        int64_t r8_7 = sx.q((rax_49 * 3).d)
                        int64_t rcx_20 = sx.q((rdx_9 * 3).d)
                        *(rbx + (rcx_20 << 2)) = *(&var_478 + (r8_7 << 2))
                        *(rbx + (rcx_20 << 2) + 4) = *(&var_474 + (r8_7 << 2))
                        *(rbx + (rcx_20 << 2) + 8) = var_470[r8_7]
                        int32_t rax_54 = *r13
                        *(&var_2e0 + (r14 << 2)) = rax_54
                        uint64_t rdx_10 = zx.q(rax_54 + 1)
                        uint64_t rax_55 = zx.q(*(r10_2 + 0xc))
                        *r13 = rdx_10.d
                        int64_t r8_8 = sx.q((rax_55 * 3).d)
                        int64_t rcx_22 = sx.q((rdx_10 * 3).d)
                        *(rbx + (rcx_22 << 2)) = *(&var_478 + (r8_8 << 2))
                        *(rbx + (rcx_22 << 2) + 4) = *(&var_474 + (r8_8 << 2))
                        *(rbx + (rcx_22 << 2) + 8) = var_470[r8_8]
                        int32_t rax_60 = *r13
                        var_2dc[r14] = rax_60
                        r14 += 4
                        *r13 = rax_60 + 1
                        j_2 = j_6
                        j_6 -= 1
                    while (j_2 != 1)
                
                if (j_3 s> 0)
                    rsi += j_3.d
                    var_57c = rsi
                    
                    do
                        uint64_t rax_62 = zx.q((&var_4f8)[j_3])
                        j_3 -= 1
                        int64_t r8_9 = sx.q((rax_62 * 3).d)
                        int64_t rdx_11 = sx.q(*r13 * 3)
                        *(rbx + (rdx_11 << 2)) = *(&var_478 + (r8_9 << 2))
                        *(rbx + (rdx_11 << 2) + 4) = *(&var_474 + (r8_9 << 2))
                        *(rbx + (rdx_11 << 2) + 8) = var_470[r8_9]
                        int32_t rax_67 = *r13
                        *(&var_2e8 + (r14 << 2)) = rax_67
                        r14 += 1
                        *r13 = rax_67 + 1
                    while (j_3 s> 0)
            r12 = 2
            r10 = arg1
            rax_20 = var_510_1 + 0xc
            zmm14 = var_568
            rcx_5 = var_510_1 - r10
            arg4 = var_574_1
            var_578_1 = var_580_1
            r9 = zx.q(var_580_1 + 1)
            i_2 = i_7
            i_7 -= 1
            var_580_1 = r9.d
            var_510_1 = rax_20
        while (i_2 != 1)
        zmm12 = arg6
        rdi = var_558
        r15 = var_560
        i_14 = i_13

sub_142616290(arg12, 0)
sub_142616290(r15, 0)
sub_1426239e0(zx.q(*r13), rbx, rsi, &var_2e8, r15, arg12)
void** result

if (r15[1].d != 0)
    if (not(zmm12[0] <= zmm13[0]))
        int128_t* rbx_2 = arg1
        float zmm7_1[0x4] = *(rbx_2 + 4)
        zmm14 = *rbx_2
        float zmm9_1[0x4] = zmm7_1
        zmm15 = *(rbx_2 + 8)
        float zmm5_2[0x4] = zmm14
        float var_584_3 = zmm5_2[0]
        float zmm6_1[0x4] = zmm15
        float var_574_2 = zmm6_1[0]
        float var_580_2 = zmm7_1[0]
        float var_578_2 = zmm7_1[0]
        float zmm1_1[0x4]
        float zmm2[0x4]
        
        if (i_14 s> 1)
            void* rdx_27 = 1
            float zmm0_1[0x4]
            
            if (i_14 s>= 5)
                zmm13 = zmm5_2
                void* rax_112 = &rbx_2[2]
                int64_t i_8 = ((i_14 - 5) u>> 2) + 1
                rdx_27 = (i_8 << 2) + 1
                int64_t i_3
                
                do
                    zmm6_1 = *(rax_112 - 0x14)
                    zmm12 = *(rax_112 - 0xc)
                    zmm9_1 = *(rax_112 - 0x10)
                    zmm0_1 = _mm_min_ss(zmm6_1[0], zmm14[0])
                    zmm6_1 = _mm_max_ss(zmm6_1[0], zmm13[0])
                    rax_112 += 0x30
                    zmm14 = zmm0_1
                    zmm0_1 = __minss_xmmss_memss(zmm9_1[0], var_580_2)
                    zmm9_1 = __maxss_xmmss_memss(zmm9_1[0], var_578_2)
                    zmm14 = __minss_xmmss_memss(zmm14[0], *(rax_112 - 0x38))
                    zmm13 = __maxss_xmmss_memss(zmm6_1[0], *(rax_112 - 0x38))
                    zmm0_1 = __minss_xmmss_memss(zmm0_1[0], *(rax_112 - 0x34))
                    zmm9_1 = __maxss_xmmss_memss(zmm9_1[0], *(rax_112 - 0x34))
                    zmm14 = __minss_xmmss_memss(zmm14[0], *(rax_112 - 0x2c))
                    zmm13 = __maxss_xmmss_memss(zmm13[0], *(rax_112 - 0x2c))
                    zmm0_1 = __minss_xmmss_memss(zmm0_1[0], *(rax_112 - 0x28))
                    zmm9_1 = __maxss_xmmss_memss(zmm9_1[0], *(rax_112 - 0x28))
                    zmm14 = __minss_xmmss_memss(zmm14[0], *(rax_112 - 0x20))
                    zmm13 = __maxss_xmmss_memss(zmm13[0], *(rax_112 - 0x20))
                    zmm0_1 = __minss_xmmss_memss(zmm0_1[0], *(rax_112 - 0x1c))
                    zmm9_1 = __maxss_xmmss_memss(zmm9_1[0], *(rax_112 - 0x1c))
                    var_580_2 = zmm0_1[0]
                    var_578_2 = zmm9_1[0]
                    zmm0_1 = _mm_min_ss(zmm12[0], zmm15[0])
                    zmm6_1 = __maxss_xmmss_memss(__maxss_xmmss_memss(zmm12[0], var_574_2)[0], 
                        *(rax_112 - 0x30))
                    zmm15 = __minss_xmmss_memss(zmm0_1[0], *(rax_112 - 0x30))
                    zmm6_1 = __maxss_xmmss_memss(zmm6_1[0], *(rax_112 - 0x24))
                    zmm15 = __minss_xmmss_memss(zmm15[0], *(rax_112 - 0x24))
                    zmm6_1 = __maxss_xmmss_memss(zmm6_1[0], *(rax_112 - 0x18))
                    zmm15 = __minss_xmmss_memss(zmm15[0], *(rax_112 - 0x18))
                    var_574_2 = zmm6_1[0]
                    i_3 = i_8
                    i_8 -= 1
                while (i_3 != 1)
                zmm7_1 = var_580_2
                zmm12 = arg6
                float var_584_4 = zmm13[0]
                zmm13 = zx.o(0)
                zmm5_2 = var_584_4
            
            if (rdx_27 s< i_14)
                void* i_11 = i_14 - rdx_27
                float (* rcx_51)[0x4] = rbx_2 + ((rdx_27 + ((rdx_27 + 1) << 1)) << 2)
                float zmm3[0x4]
                void* i_4
                
                do
                    float zmm4_2[0x4] = (*rcx_51)[-2]
                    zmm3 = (*rcx_51)[-1]
                    zmm2 = *rcx_51
                    zmm0_1 = _mm_min_ss(zmm4_2[0], zmm14[0])
                    zmm4_2 = _mm_max_ss(zmm4_2[0], zmm5_2[0])
                    zmm1_1 = _mm_min_ss(zmm3[0], zmm7_1[0])
                    zmm3 = _mm_max_ss(zmm3[0], zmm9_1[0])
                    rcx_51 = &(*rcx_51)[3]
                    zmm14 = zmm0_1
                    zmm5_2 = zmm4_2
                    zmm7_1 = zmm1_1
                    zmm9_1 = zmm3
                    zmm15 = _mm_min_ss(zmm2[0], zmm15[0])
                    zmm6_1 = _mm_max_ss(zmm2[0], zmm6_1[0])
                    i_4 = i_11
                    i_11 -= 1
                while (i_4 != 1)
                var_578_2 = zmm3[0]
                var_580_2 = zmm1_1[0]
        
        uint128_t zmm8_1
        zmm8_1.d = 1f / zmm12[0]
        zmm1_1 = zmm8_1
        zmm1_1[0] = zmm1_1[0] * zmm14[0]
        int32_t rcx_52 = int.d(zmm1_1[0])
        
        if (rcx_52 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_52))[0] == zmm1_1[0]))
            zmm1_1 = _mm_cvtepi32_ps(zx.o(rcx_52
                - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1_1, zmm1_1[0].q)) & 1)))
        
        int32_t r15_2 = int.d(zmm1_1[0])
        zmm1_1 = zmm8_1
        zmm1_1[0] = zmm1_1[0] * zmm5_2[0]
        int32_t var_574_3 = r15_2
        int32_t rcx_54 = int.d(zmm1_1[0])
        
        if (rcx_54 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_54))[0] == zmm1_1[0]))
            zmm1_1 = _mm_cvtepi32_ps(zx.o(rcx_54
                + ((_mm_movemask_ps(_mm_unpacklo_ps(zmm1_1, zmm1_1[0].q)) & 1) ^ 1)))
        
        zmm2 = zmm8_1
        zmm2[0] = zmm2[0] * zmm6_1[0]
        int32_t r14_1 = int.d(zmm1_1[0])
        int32_t rcx_56 = int.d(zmm2[0])
        
        if (rcx_56 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_56))[0] == zmm2[0]))
            zmm2 = _mm_cvtepi32_ps(zx.o(rcx_56
                + ((_mm_movemask_ps(_mm_unpacklo_ps(zmm2, zmm2[0].q)) & 1) ^ 1)))
        
        int32_t r12_1 = int.d(zmm2[0])
        int32_t var_584_5 = r12_1
        sub_142616290(rdi, 0)
        zmm8_1.d = zmm8_1.d f* zmm15[0]
        int32_t rcx_59 = int.d(zmm8_1.d)
        
        if (rcx_59 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_59)).d f== zmm8_1.d))
            zmm8_1 = _mm_cvtepi32_ps(zx.o(rcx_59
                - (_mm_movemask_ps(_mm_unpacklo_ps(zmm8_1, zmm8_1.q)) & 1)))
        
        int32_t rsi_6 = int.d(zmm8_1.d)
        int64_t* var_5a8_1
        uint128_t zmm0_2
        float zmm10
        float zmm11_1
        
        if (rsi_6 s< r12_1)
            zmm10 = 0.5f
            zmm11_1 = -0.5f
            
            do
                int32_t rdi_3 = r15_2
                
                if (r15_2 s< r14_1)
                    int64_t r12_2 = var_540
                    zmm7_1[0] = zmm7_1[0] + zmm9_1[0]
                    zmm8_1 = _mm_cvtepi32_ps(zx.o(rsi_6))
                    zmm7_1[0] = zmm7_1[0] * zmm10
                    zmm8_1.d = zmm8_1.d f* zmm12[0]
                    i_13:4.d = zmm7_1[0]
                    zmm12[0] = zmm12[0] * zmm11_1
                    int32_t var_548_1 = zmm8_1.d
                    
                    do
                        zmm6_1 = _mm_cvtepi32_ps(zx.o(rdi_3))
                        zmm6_1[0] = zmm6_1[0] * zmm12[0]
                        i_13.d = zmm6_1[0]
                        int512_t zmm3_1
                        zmm0_2, zmm3_1, zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm10, zmm11_1, zmm12, 
                            zmm13, zmm14 = sub_142624160(var_564, rbx_2, &i_13)
                        
                        if (not(zmm0_2.d f> zmm9_1[0]))
                            int32_t r9_4 = sub_142616290(var_558, var_558[1].d + 1)
                            zmm3_1.o = zmm14
                            int64_t var_598_2 = r12_2
                            int64_t* var_5a0_1
                            var_5a0_1.d = var_568[0]
                            var_5a8_1.d = zmm13[0]
                            (*var_558)[sx.q(var_558[1].d) - 1] = rdi_3
                            int16_t rax_124 =
                                sub_14262bc60(zmm6_1, zmm7_1, zmm8_1, r9_4, var_5a8_1.d, var_5a0_1)
                            sub_142616290(var_558, var_558[1].d + 1)
                            (*var_558)[sx.q(var_558[1].d) - 1] = zx.d(rax_124)
                            sub_142616290(var_558, var_558[1].d + 1)
                            (*var_558)[sx.q(var_558[1].d) - 1] = rsi_6
                            sub_142616290(var_558, var_558[1].d + 1)
                            rbx_2 = arg1
                            (*var_558)[sx.q(var_558[1].d) - 1] = 0
                        
                        rdi_3 += 1
                    while (rdi_3 s< r14_1)
                    
                    r15_2 = var_574_3
                    r12_1 = var_584_5
                
                zmm7_1 = var_580_2
                rsi_6 += 1
                zmm9_1 = var_578_2
            while (rsi_6 s< r12_1)
            
            r13 = var_528
            zmm13 = zx.o(0)
        
        int32_t** rcx_70 = var_558
        int32_t i_5 = 0
        int32_t i_6 = 0
        int32_t temp5_1
        int32_t temp6_1
        temp5_1:temp6_1 = sx.q(rcx_70[1].d)
        result = zx.q((temp6_1 + (temp5_1 & 3)) s>> 2)
        int64_t rsi_7 = sx.q(result.d)
        
        if (result.d s> 0)
            zmm14 = 0x364ccd9a
            int64_t r12_3 = rsi_7
            zmm15 = 0x3dcccccd
            int64_t* r14_2 = var_560
            
            do
                int32_t r13_4 = *r13
                
                if (r13_4 s>= 0x7f)
                    break
                
                int64_t rdi_4 = 0
                zmm10 = zmm13[0]
                zmm11_1 = zmm13[0]
                zmm12 = zmm13
                zmm9_1 = zmm13
                int64_t r15_4 = -1
                
                if (r12_3 s> 0)
                    int32_t* rbx_4 = *rcx_70
                    int32_t r14_3 = 0
                    int32_t rsi_8 = 0
                    
                    do
                        if (rbx_4[3] == 0)
                            zmm6_1 = zx.o(0)
                            zmm7_1 = zx.o(0)
                            zmm8_1 = zx.o(rbx_4[1])
                            zmm0_2 = _mm_cvtepi32_ps(zx.o(*rbx_4))
                            void* r9_5 = *var_560
                            zmm0_2.d = zmm0_2.d f* arg6
                            zmm8_1.d = _mm_cvtepi32_ps(zmm8_1).d f* var_568
                            zmm6_1[0] = float.s(zx.q(rsi_8.w))
                            zmm7_1[0] = float.s(zx.q(r14_3.w))
                            int32_t temp7_1
                            int32_t temp8_1
                            temp7_1:temp8_1 = sx.q(var_560[1].d)
                            zmm6_1[0] = zmm6_1[0] * zmm14[0]
                            zmm7_1[0] = zmm7_1[0] * zmm14[0]
                            var_5a8_1.d = (temp8_1 + (temp7_1 & 3)) s>> 2
                            zmm6_1[0] = zmm6_1[0] - zmm15[0]
                            var_540:4.d = zmm8_1.d
                            zmm7_1[0] = zmm7_1[0] - zmm15[0]
                            zmm6_1[0] = zmm6_1[0] * var_56c
                            zmm7_1[0] = zmm7_1[0] * var_56c
                            zmm6_1[0] = zmm6_1[0] f+ zmm0_2.d
                            zmm0_2 = _mm_cvtepi32_ps(zx.o(rbx_4[2]))
                            var_540.d = zmm6_1[0]
                            zmm0_2.d = zmm0_2.d f* arg6
                            zmm7_1[0] = zmm7_1[0] f+ zmm0_2.d
                            float var_538_1 = zmm7_1[0]
                            result, zmm0_2, zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm10, zmm11_1, zmm12, 
                                zmm13, zmm14, zmm15 =
                                sub_142624730(&var_540, var_520, zx.q(r13_4), r9_5, var_5a8_1.d)
                            
                            if (not(zmm0_2.d f< zmm13[0]) && not(zmm0_2.d f<= zmm9_1[0]))
                                zmm9_1 = zmm0_2
                                r15_4 = rdi_4
                                zmm10 = zmm6_1[0]
                                zmm11_1 = zmm8_1.d
                                zmm12 = zmm7_1
                        
                        rsi_8 -= 0x4cbd
                        r14_3 += 0x3841
                        rdi_4 += 1
                        rbx_4 = &rbx_4[4]
                    while (rdi_4 s< r12_3)
                    
                    i_5 = i_6
                    rsi_7 = zx.q(r12_3.d)
                    rcx_70 = var_558
                    r14_2 = var_560
                
                if (zmm9_1[0] f<= arg7)
                    break
                
                if (r15_4 == -1)
                    break
                
                r13 = var_528
                (*rcx_70)[r15_4 * 4 + 3] = 1
                int64_t rax_140 = sx.q(*r13 * 3)
                *(var_520 + (rax_140 << 2)) = zmm10
                *(var_520 + (rax_140 << 2) + 4) = zmm11_1
                *(var_520 + (rax_140 << 2) + 8) = zmm12[0]
                *r13 += 1
                sub_142616290(arg12, 0)
                sub_142616290(r14_2, 0)
                sub_1426239e0(zx.q(*r13), var_520, var_57c, &var_2e8, r14_2, arg12)
                rcx_70 = var_558
                i_5 += 1
                i_6 = i_5
            while (i_5 s< rsi_7.d)
        
        r15 = var_560
    
    if (r15[1].d s>= 0x400)
        sub_142616290(r15, 0x3fc)
else if (*r13 s> 2)
    do
        sub_142616290(r15, r15[1].d + 1)
        *(*r15 + (sx.q(r15[1].d) << 2) - 4) = 0
        sub_142616290(r15, r15[1].d + 1)
        *(*r15 + (sx.q(r15[1].d) << 2) - 4) = (r12 - 1).d
        sub_142616290(r15, r15[1].d + 1)
        *(*r15 + (sx.q(r15[1].d) << 2) - 4) = r12.d
        sub_142616290(r15, r15[1].d + 1)
        r12 = zx.q(r12.d + 1)
        *(*r15 + (sx.q(r15[1].d) << 2) - 4) = 0
    while (r12.d s< *r13)

result.b = 1
__security_check_cookie(rax_1 ^ &var_5c8)
return result
