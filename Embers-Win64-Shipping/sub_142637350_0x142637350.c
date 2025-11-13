// 函数: sub_142637350
// 地址: 0x142637350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_208
int64_t rax_1 = __security_cookie ^ &var_208
float result_36[0x4] = *arg1
int128_t zmm12 = arg9
float result_23[0x4] = result_36
arg12 &= 1
int32_t* r9 = arg6
int64_t r12 = *(arg5 + 0x40)
int32_t* var_198 = r9
int32_t zmm4 = *r9
int32_t zmm5 = r9[1]
result_23[0] = result_23[0] f- zmm4
int64_t var_190 = r12
uint128_t result_30
result_30.d = (*(arg7 + 4)).d f- zmm5
result_23[0] = result_23[0] f* zmm12.d
int32_t rcx = int.d(result_23[0])

if (rcx != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx)).d f== result_23[0]))
    result_23 = _mm_cvtepi32_ps(zx.o(rcx
        - (_mm_movemask_ps(_mm_unpacklo_ps(result_23, result_23[0].q)) & 1)))

float result_35[0x4] = *(arg1 + 8)
float result_24[0x4] = r9[2]
int32_t rcx_2 = int.d(result_23[0])
result_23 = result_35
result_23[0] = result_23[0] - result_24[0]
int32_t var_170[0x2]
var_170[0] = rcx_2
result_23[0] = result_23[0] f* zmm12.d
int32_t rdx = int.d(result_23[0])

if (rdx != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rdx)).d f== result_23[0]))
    result_23 = _mm_cvtepi32_ps(zx.o(rdx
        - (_mm_movemask_ps(_mm_unpacklo_ps(result_23, result_23[0].q)) & 1)))

float result_34[0x4] = *arg2
int32_t rax_7 = int.d(result_23[0])
result_23 = result_34
result_23[0] = result_23[0] f- zmm4
var_170[1] = rax_7
result_23[0] = result_23[0] f* zmm12.d
int32_t rdx_2 = int.d(result_23[0])

if (rdx_2 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rdx_2)).d f== result_23[0]))
    result_23 = _mm_cvtepi32_ps(zx.o(rdx_2
        - (_mm_movemask_ps(_mm_unpacklo_ps(result_23, result_23[0].q)) & 1)))

float result_33[0x4] = *(arg2 + 8)
int32_t rdx_4 = int.d(result_23[0])
result_23 = result_33
result_23[0] = result_23[0] - result_24[0]
int32_t var_168 = rdx_4
result_23[0] = result_23[0] f* zmm12.d
int32_t r8 = int.d(result_23[0])

if (r8 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(r8)).d f== result_23[0]))
    result_23 = _mm_cvtepi32_ps(zx.o(r8
        - (_mm_movemask_ps(_mm_unpacklo_ps(result_23, result_23[0].q)) & 1)))

float result_32[0x4] = *arg3
int32_t result_5 = int.d(result_23[0])
result_23 = result_32
result_23[0] = result_23[0] f- zmm4
result_23[0] = result_23[0] f* zmm12.d
int32_t r8_2 = int.d(result_23[0])

if (r8_2 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(r8_2)).d f== result_23[0]))
    result_23 = _mm_cvtepi32_ps(zx.o(r8_2
        - (_mm_movemask_ps(_mm_unpacklo_ps(result_23, result_23[0].q)) & 1)))

float result_31[0x4] = *(arg3 + 8)
int32_t r10 = int.d(result_23[0])
result_23 = result_31
result_23[0] = result_23[0] - result_24[0]
int32_t var_160 = r10
result_23[0] = result_23[0] f* zmm12.d
int32_t r8_4 = int.d(result_23[0])

if (r8_4 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(r8_4)).d f== result_23[0]))
    result_23 = _mm_cvtepi32_ps(zx.o(r8_4
        - (_mm_movemask_ps(_mm_unpacklo_ps(result_23, result_23[0].q)) & 1)))

int32_t result_27 = var_170[1]
int32_t result_13 = int.d(result_23[0])
int32_t r13 = r10

if (rdx_4 s< r10)
    r13 = rdx_4

if (rcx_2 s< r13)
    r13 = rcx_2

if (rdx_4 s< r10)
    rdx_4 = r10

int32_t r14 = result_13

if (rcx_2 s< rdx_4)
    rcx_2 = rdx_4

int32_t result_2 = int.d(result_23[0])

if (result_5 s< result_13)
    r14 = result_5

uint64_t result = zx.q(result_5)

if (result_27 s< r14)
    r14 = result_27

if (result_5 s< result_2)
    result = zx.q(result_2)

int32_t result_19 = result_27

if (result_27 s< result.d)
    result_19 = result.d

if (rcx_2 s>= 0)
    int32_t r10_1 = *arg5
    
    if (r13 s< r10_1 && result_19 s>= 0 && r14 s< arg5[1])
        int128_t zmm6 = *(arg2 + 4)
        float zmm7[0x4] = *(arg1 + 4)
        int128_t zmm8 = *(arg3 + 4)
        float temp0_25[0x4] = _mm_max_ss(zmm7[0], zmm6.d)
        float temp0_26[0x4] = _mm_min_ss(zmm7[0], zmm6.d)
        result_24 = _mm_max_ss(temp0_25[0], zmm8.d)
        result_23 = _mm_min_ss(temp0_26[0], zmm8.d)
        result_24[0] = result_24[0] f- zmm5
        result_23[0] = result_23[0] f- zmm5
        
        if (not(result_24[0] < 0f) && not(result_23[0] f> result_30.d))
            if (r13 != rcx_2 || r14 != result_19)
                result_23[0] = result_23[0] f* arg10
                int32_t r8_7 = int.d(result_23[0])
                
                if (r8_7 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(r8_7)).d f== result_23[0]))
                    result_23 = _mm_cvtepi32_ps(zx.o(r8_7
                        - (_mm_movemask_ps(_mm_unpacklo_ps(result_23, result_23[0].q)) & 1)))
                
                int32_t rdi_1 = int.d(result_23[0])
                
                if (rdi_1 s< 0xffff8300)
                    rdi_1 = 0x8300
                else if (rdi_1 s> 0x7d00)
                    rdi_1.w = 0x7d00
                
                result_24[0] = result_24[0] f* arg10
                int16_t result_6 = rdi_1.w
                int32_t r8_9 = int.d(result_24[0])
                
                if (r8_9 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(r8_9)).d f== result_24[0]))
                    result_24 = _mm_cvtepi32_ps(zx.o(r8_9
                        - (_mm_movemask_ps(_mm_unpacklo_ps(result_24, result_24[0].q)) & 1)))
                
                int32_t rax_29 = int.d(result_24[0])
                
                if (rax_29 s< 0xffff8300)
                    rax_29 = 0x8300
                else if (rax_29 s> 0x7d00)
                    rax_29.w = 0x7d00
                
                int16_t r15_1 = 0
                int32_t var_148_1 = zmm6.d
                int32_t r8_11 = r10_1
                int32_t var_158[0x3]
                var_158[0] = result_36[0]
                
                if (r13 s< 0)
                    r13 = 0
                
                var_158[1] = zmm7[0]
                var_158[2] = result_35[0]
                float var_14c_1 = result_34[0]
                
                if (rcx_2 s< r10_1)
                    r8_11 = rcx_2
                
                float var_144_1 = result_33[0]
                int32_t r8_12 = r10_1 - 1
                float var_140_1 = result_32[0]
                int32_t var_13c_1 = zmm8.d
                
                if (rcx_2 s< r8_12)
                    r8_12 = rcx_2
                
                float var_138_1 = result_31[0]
                int32_t result_17 = arg5[1]
                int32_t result_11 = result_17
                
                if (r14 s< 0)
                    r14 = 0
                
                int32_t var_1c0_1 = r13
                int32_t result_29 = result_17 - 1
                
                if (result_19 s< result_17)
                    result_11 = result_19
                
                if (result_19 s< result_29)
                    result_29 = result_19
                
                int64_t result_40 = sx.q(result_29)
                int32_t result_37 = result_29
                int32_t var_1a8
                var_16c
                var_154
                var_150
                int32_t var_128[0x8]
                var_124
                var_120
                int32_t var_104[0xb]
                var_100
                var_fc
                uint128_t result_12
                
                if (rdi_1.w != rax_29.w)
                    result_34 = arg8
                    int32_t i = 0
                    int32_t i_4 = 0
                    int32_t var_1b0_2
                    int32_t r10_6
                    
                    do
                        int32_t rax_73
                        int32_t rdi_5
                        
                        if (i != 2)
                            rax_73 = i + 1
                            rdi_5 = 2
                            var_1b0_2 = rax_73
                            
                            if (i != 0)
                                rdi_5 = i - 1
                        else
                            rax_73 = 0
                            var_1b0_2 = 0
                            rdi_5 = i - 1
                        
                        int64_t i_6 = sx.q(i)
                        int64_t rcx_54 = sx.q(rdi_5)
                        int64_t rax_75 = sx.q(rax_73) * 3
                        int64_t rdx_29 = i_6 * 3
                        result_12.d = (*(&var_154 + (rax_75 << 2))).d f- *(&var_154 + (rdx_29 << 2))
                        result_24 = var_158[rax_75]
                        int64_t r13_2 = rcx_54 * 3
                        result_23 = *(&var_150 + (rax_75 << 2))
                        int64_t rax_76 = rcx_54 * 3
                        result_23[0] = result_23[0] f- *(&var_150 + (rdx_29 << 2))
                        zmm8 = var_158[rdx_29]
                        int32_t r10_5 = (&var_170)[i_6][0]
                        result_24[0] = result_24[0] f- zmm8.d
                        *(&var_124 + (r13_2 << 2)) = result_12.d
                        *(&var_120 + (r13_2 << 2)) = result_23[0]
                        result_23 = 0x3f800000
                        var_1a8 = r10_5
                        var_128[r13_2] = result_24[0]
                        result_23[0] = 1f f/ *(&var_124 + (r13_2 << 2))
                        result_12.d = 1f / result_24[0]
                        *(&var_100 + (rax_76 << 2)) = result_23[0]
                        var_104[rax_76] = result_12.d
                        result_12.d = 1f f/ *(&var_120 + (r13_2 << 2))
                        *(&var_fc + (rax_76 << 2)) = result_12.d
                        
                        if (r10_5 s>= var_1c0_1 && r10_5 s<= r8_12)
                            int32_t rax_77 = *(&var_16c + (i_6 << 3))
                            
                            if (rax_77 s>= r14 && rax_77 s<= result_29)
                                result_23 = *(&var_154 + (rdx_29 << 2))
                                result_23[0] = result_23[0] f- r9[1]
                                result_23[0] = result_23[0] f* arg10
                                int32_t rcx_55 = int.d(result_23[0])
                                
                                if (rcx_55 != 0x80000000
                                        && not(_mm_cvtepi32_ps(zx.o(rcx_55)).d f== result_23[0]))
                                    result_23 = _mm_cvtepi32_ps(zx.o(rcx_55 - (
                                        _mm_movemask_ps(_mm_unpacklo_ps(result_23, result_23[0].q))
                                        & 1)))
                                
                                int32_t rax_80 = int.d(result_23[0])
                                
                                if (rax_80 s< 0xffff8300)
                                    rax_80 = 0x8300
                                else if (rax_80 s> 0x7d00)
                                    rax_80.w = 0x7d00
                                
                                sub_142635de0(arg5, r10_5, *(&var_16c + (i_6 << 3)), rax_80.w)
                                r10_5 = var_1a8
                                r9 = var_198
                                i = i_4
                        
                        int32_t result_42 = *(&var_16c + (i_6 << 3))
                        int64_t rsi_3 = sx.q(var_1b0_2)
                        int32_t result_39 = *(&var_16c + (rsi_3 << 3))
                        
                        if (result_42 != result_39)
                            int32_t result_26 = result_42
                            
                            if (result_42 s< result_39)
                                result_26 = result_39
                            
                            if (result_42 s< result_39)
                                result_39 = result_42
                            
                            rdi_5.b <<= 2
                            int32_t j_3 = result_39 + 1
                            rdi_5.b |= rsi_3.b
                            rdi_5.b <<= 2
                            rdi_5.b |= i.b
                            
                            if (j_3 s< r14)
                                j_3 = r14
                            
                            int64_t j = sx.q(j_3)
                            int32_t result_16 = result_11
                            
                            if (result_26 s< result_16)
                                result_16 = result_26
                            
                            while (j s<= sx.q(result_16))
                                int64_t rax_81 = j * 2
                                void* rcx_58
                                rcx_58.b = *(rax_81 + r12) != 0
                                j += 1
                                (rcx_58 + rax_81)[r12] = rdi_5.b
                        
                        int32_t rsi_4 = (&var_170)[rsi_3][0]
                        
                        if (r10_5 == rsi_4)
                            r10_6 = var_1c0_1
                        else
                            int32_t rcx_60 = r8_11
                            int32_t rax_82 = r10_5
                            
                            if (r10_5 s< rsi_4)
                                rax_82 = rsi_4
                            
                            if (r10_5 s< rsi_4)
                                rsi_4 = r10_5
                            
                            r10_6 = var_1c0_1
                            int32_t rsi_5 = rsi_4 + 1
                            
                            if (rsi_5 s< r10_6)
                                rsi_5 = r10_6
                            
                            if (rax_82 s< rcx_60)
                                rcx_60 = rax_82
                            
                            var_1a8 = rcx_60
                            result_30.d = _mm_cvtepi32_ps(zx.o(rsi_5)).d f* result_34[0]
                            result_30.d = result_30.d f+ *r9
                            
                            if (rsi_5 s<= rcx_60)
                                zmm7 = var_104[r13_2]
                                
                                do
                                    result_23 = result_30
                                    result_23[0] = result_23[0] f- zmm8.d
                                    result_23[0] = result_23[0] * zmm7[0]
                                    
                                    if (result_23[0] >= 0f)
                                        result_23 = _mm_min_ss(result_23[0], 0x3f800000)
                                    else
                                        result_23 = zx.o(0)
                                    
                                    result_24 = result_23
                                    result_23[0] = result_23[0] f* *(&var_120 + (r13_2 << 2))
                                    result_24[0] = result_24[0] f* *(&var_124 + (r13_2 << 2))
                                    result_23[0] = result_23[0] f+ *(&var_150 + (rdx_29 << 2))
                                    result_24[0] = result_24[0] f+ *(&var_154 + (rdx_29 << 2))
                                    result_23[0] = result_23[0] f- r9[2]
                                    result_23[0] = result_23[0] f* zmm12.d
                                    int32_t rcx_61 = int.d(result_23[0])
                                    
                                    if (rcx_61 != 0x80000000 &&
                                            not(_mm_cvtepi32_ps(zx.o(rcx_61)).d f== result_23[0]))
                                        result_23 = _mm_cvtepi32_ps(zx.o(rcx_61 - (_mm_movemask_ps(
                                            _mm_unpacklo_ps(result_23, result_23[0].q)) & 1)))
                                    
                                    int32_t r8_22 = int.d(result_23[0])
                                    
                                    if (r8_22 s>= r14 && r8_22 s<= result_37)
                                        result_24[0] = result_24[0] f- r9[1]
                                        result_24[0] = result_24[0] f* arg10
                                        int32_t rcx_63 = int.d(result_24[0])
                                        
                                        if (rcx_63 != 0x80000000 && not(
                                                _mm_cvtepi32_ps(zx.o(rcx_63)).d f== result_24[0]))
                                            result_24 = _mm_cvtepi32_ps(zx.o(rcx_63 - (
                                                _mm_movemask_ps(_mm_unpacklo_ps(result_24, 
                                                result_24[0].q)) & 1)))
                                        
                                        int32_t rdi_6 = int.d(result_24[0])
                                        
                                        if (rdi_6 s< 0xffff8300)
                                            rdi_6 = 0x8300
                                        else if (rdi_6 s> 0x7d00)
                                            rdi_6.w = 0x7d00
                                        
                                        int16_t r9_6 = rdi_6.w
                                        sub_142635de0(arg5, rsi_5, r8_22, r9_6)
                                        sub_142635de0(arg5, rsi_5 - 1, r8_22, r9_6)
                                        r9 = var_198
                                    
                                    rsi_5 += 1
                                    result_30.d = result_30.d f+ result_34[0]
                                while (rsi_5 s<= var_1a8)
                                
                                r12 = var_190
                                r10_6 = var_1c0_1
                        
                        result_29 = result_37
                        i = i_4 + 1
                        i_4 = i
                    while (i s< 3)
                    
                    int32_t result_21 = result_13
                    int32_t result_20 = var_170[1]
                    int32_t result_9 = result_5
                    int32_t result_4 = result_11
                    
                    if (result_9 s< result_13)
                        result_21 = result_9
                    
                    if (result_9 s< result_13)
                        result_9 = result_13
                    
                    int32_t result_7 = result_20
                    
                    if (result_20 s< result_9)
                        result_7 = result_9
                    
                    if (result_20 s< result_21)
                        result_21 = result_20
                    
                    int32_t rdi_7 = result_21 + 1
                    
                    if (rdi_7 s< r14)
                        rdi_7 = r14
                    
                    int64_t r13_3 = sx.q(rdi_7)
                    
                    if (result_7 s< result_4)
                        result_4 = result_7
                    
                    int32_t var_1c4_1 = rdi_7
                    result = sx.q(result_4)
                    var_1b0_2.q = r13_3
                    uint64_t result_1 = result
                    float temp0_78[0x4] = _mm_cvtepi32_ps(zx.o(rdi_7))
                    temp0_78[0] = temp0_78[0] * result_34[0]
                    temp0_78[0] = temp0_78[0] f+ r9[2]
                    
                    if (r13_3 s<= result)
                        char* r14_2 = r12 + (r13_3 << 1)
                        char* var_190_1 = r14_2
                        
                        do
                            if (*r14_2 != 0)
                                int64_t i_1 = 0
                                int32_t* r13_4 = &var_168
                                
                                do
                                    uint32_t rcx_67 = zx.d(r14_2[i_1])
                                    uint64_t rdx_33 = (zx.q(rcx_67) u>> 4) * 3
                                    uint64_t rax_90 = (zx.q(rcx_67) & 3) * 3
                                    result_30 = *(&var_150 + (rax_90 << 2))
                                    result_12.d = temp0_78.d f- result_30.d
                                    result_12.d = result_12.d f* *(&var_fc + (rdx_33 << 2))
                                    
                                    if (result_12.d f>= 0f)
                                        result_12 = _mm_min_ss(result_12.d, 0x3f800000)
                                    else
                                        result_12 = zx.o(0)
                                    
                                    result_24 = result_12
                                    result_23 = result_12
                                    result_24[0] = result_24[0] f* var_128[rdx_33]
                                    result_23[0] = result_23[0] f* *(&var_124 + (rdx_33 << 2))
                                    result_24[0] = result_24[0] f+ var_158[rax_90]
                                    result_12.d = result_12.d f* *(&var_120 + (rdx_33 << 2))
                                    result_23[0] = result_23[0] f+ *(&var_154 + (rax_90 << 2))
                                    r13_4[-2] = result_24[0]
                                    result_12.d = result_12.d f+ result_30.d
                                    result_24[0] = result_24[0] f- *r9
                                    r13_4[-1] = result_23[0]
                                    *r13_4 = result_12.d
                                    result_24[0] = result_24[0] f* zmm12.d
                                    int32_t rcx_69 = int.d(result_24[0])
                                    
                                    if (rcx_69 != 0x80000000 &&
                                            not(_mm_cvtepi32_ps(zx.o(rcx_69)).d f== result_24[0]))
                                        result_24 = _mm_cvtepi32_ps(zx.o(rcx_69 - (_mm_movemask_ps(
                                            _mm_unpacklo_ps(result_24, result_24[0].q)) & 1)))
                                    
                                    int32_t rsi_6 = int.d(result_24[0])
                                    (&var_1a8)[i_1] = rsi_6
                                    
                                    if (rsi_6 s>= r10_6 && rsi_6 s<= r8_12)
                                        result_23[0] = result_23[0] f- r9[1]
                                        result_23[0] = result_23[0] f* arg10
                                        int32_t rcx_71 = int.d(result_23[0])
                                        
                                        if (rcx_71 != 0x80000000 && not(
                                                _mm_cvtepi32_ps(zx.o(rcx_71)).d f== result_23[0]))
                                            result_23 = _mm_cvtepi32_ps(zx.o(rcx_71 - (
                                                _mm_movemask_ps(_mm_unpacklo_ps(result_23, 
                                                result_23[0].q)) & 1)))
                                        
                                        int32_t rdi_8 = int.d(result_23[0])
                                        
                                        if (rdi_8 s< 0xffff8300)
                                            rdi_8 = 0x8300
                                        else if (rdi_8 s> 0x7d00)
                                            rdi_8.w = 0x7d00
                                        
                                        int16_t r9_7 = rdi_8.w
                                        sub_142635de0(arg5, rsi_6, var_1c4_1, r9_7)
                                        sub_142635de0(arg5, rsi_6, var_1c4_1 - 1, r9_7)
                                        r10_6 = var_1c0_1
                                        r9 = var_198
                                    
                                    i_1 += 1
                                    r13_4 = &r13_4[3]
                                while (i_1 s< 2)
                                
                                int32_t var_1a4
                                
                                if (var_1a8 == var_1a4)
                                    rdi_7 = var_1c4_1
                                    r13_3 = var_1b0_2.q
                                else
                                    result_23 = var_170[0]
                                    result_12 = result_5
                                    int64_t rax_96 = 0
                                    int32_t r12_5 = r8_11
                                    result_24 = zx.o(0)
                                    result_32 = *r9
                                    
                                    if (result_23[0] f> result_12.d)
                                        rax_96 = 4
                                    
                                    int64_t rax_97 = 4
                                    int32_t rsi_8 = *(&var_1a8 + rax_96) + 1
                                    
                                    if (rsi_8 s< r10_6)
                                        rsi_8 = r10_6
                                    
                                    bool cond:28_1 = result_23[0] f> result_12.d
                                    result_30 = _mm_cvtepi32_ps(zx.o(rsi_8))
                                    
                                    if (cond:28_1)
                                        rax_97 = 0
                                    
                                    int32_t rcx_75 = *(&var_1a8 + rax_97)
                                    result_30.d = result_30.d f* result_34[0]
                                    int64_t rax_98 = 0
                                    
                                    if (rcx_75 s< r12_5)
                                        r12_5 = rcx_75
                                    
                                    int64_t rcx_76 = 0xc
                                    result_23[0] f- result_12.d
                                    bool cond:30_1 = result_23[0] f> result_12.d
                                    bool cond:31_1 = result_23[0] f> result_12.d
                                    result_30.d = result_30.d f+ result_32[0]
                                    result_23 = 0x3f800000
                                    
                                    if (cond:30_1)
                                        rcx_76 = 0
                                    
                                    if (cond:31_1)
                                        rax_98 = 0xc
                                    
                                    zmm8 = *(&var_170 + rax_98)
                                    result_30.d = result_30.d f- zmm8.d
                                    zmm7 = *(&var_16c + rax_98)
                                    result_12.d = (*(&var_170 + rcx_76)).d f- zmm8.d
                                    result_23[0] = 1f f/ result_12.d
                                    result_30.d = result_30.d f* result_23[0]
                                    result_12.d = (*(&var_16c + rcx_76)).d f- zmm7[0]
                                    
                                    if (result_30.d f>= 0f)
                                        result_30 = _mm_min_ss(result_30.d, 0x3f800000)
                                    else
                                        result_30 = zx.o(0)
                                    
                                    result_31 = r9[1]
                                    result_30.d = result_30.d f* result_12.d
                                    int32_t rax_100 = r12_5 - rsi_8
                                    result_30.d = result_30.d f+ zmm7[0]
                                    result_30.d = result_30.d f- result_31[0]
                                    
                                    if (rax_100 s> 0)
                                        float temp0_90[0x4] = _mm_cvtepi32_ps(zx.o(r12_5))
                                        temp0_90[0] = temp0_90[0] * result_34[0]
                                        temp0_90[0] = temp0_90[0] + result_32[0]
                                        temp0_90[0] = temp0_90[0] f- zmm8.d
                                        temp0_90[0] = temp0_90[0] * result_23[0]
                                        
                                        if (temp0_90[0] >= 0f)
                                            result_24 = _mm_min_ss(temp0_90[0], 0x3f800000)
                                        else
                                            result_24 = zx.o(0)
                                        
                                        result_24[0] = result_24[0] f* result_12.d
                                        result_12 = _mm_cvtepi32_ps(zx.o(rax_100))
                                        result_24[0] = result_24[0] + zmm7[0]
                                        result_24[0] = result_24[0] - result_31[0]
                                        result_24[0] = result_24[0] f- result_30.d
                                        result_24[0] = result_24[0] f/ result_12.d
                                    
                                    rdi_7 = var_1c4_1
                                    r13_3 = var_1b0_2.q
                                    
                                    if (rsi_8 s<= r12_5)
                                        do
                                            result_23 = result_30
                                            result_23[0] = result_23[0] f* arg10
                                            int32_t rcx_77 = int.d(result_23[0])
                                            
                                            if (rcx_77 != 0x80000000 && not(
                                                    _mm_cvtepi32_ps(zx.o(rcx_77)).d
                                                    f== result_23[0]))
                                                result_23 = _mm_cvtepi32_ps(zx.o(rcx_77 - (
                                                    _mm_movemask_ps(_mm_unpacklo_ps(result_23, 
                                                    result_23[0].q)) & 1)))
                                            
                                            int32_t r11_6 = int.d(result_23[0])
                                            
                                            if (r11_6 s< 0xffff8300)
                                                r11_6 = 0x8300
                                            else if (r11_6 s> 0x7d00)
                                                r11_6.w = 0x7d00
                                            
                                            int64_t rdx_36 = *(arg5 + 0x48)
                                            int32_t rcx_79 = rsi_8
                                            
                                            if (*(rdx_36 + (r13_3 << 3) + 8) s< rsi_8)
                                                rcx_79 = *(rdx_36 + (r13_3 << 3) + 8)
                                            
                                            *(rdx_36 + (r13_3 << 3) + 8) = rcx_79
                                            int64_t rcx_80 = *(arg5 + 0x48)
                                            int32_t rax_103 = *(rcx_80 + (r13_3 << 3) + 0xc)
                                            
                                            if (rax_103 s< rsi_8)
                                                rax_103 = rsi_8
                                            
                                            *(rcx_80 + (r13_3 << 3) + 0xc) = rax_103
                                            int32_t rcx_81 = rsi_8 - 1
                                            int64_t rdx_37 = *(arg5 + 0x50)
                                            int64_t r8_26 = sx.q((*arg5 + 2) * (rdi_7 + 1) + rsi_8)
                                            int16_t rax_108 = r11_6.w
                                            
                                            if (*(rdx_37 + (r8_26 << 2) + 4) s<= r11_6.w)
                                                rax_108 = *(rdx_37 + (r8_26 << 2) + 4)
                                            
                                            bool cond:33_1 =
                                                *(rdx_37 + (r8_26 << 2) + 6) s>= r11_6.w
                                            *(rdx_37 + (r8_26 << 2) + 4) = rax_108
                                            int16_t rax_109 = r11_6.w
                                            
                                            if (cond:33_1)
                                                rax_109 = *(rdx_37 + (r8_26 << 2) + 6)
                                            
                                            *(rdx_37 + (r8_26 << 2) + 6) = rax_109
                                            int64_t rdx_38 = *(arg5 + 0x48)
                                            
                                            if (*(rdx_38 + (r13_3 << 3) + 8) s< rsi_8 - 1)
                                                rcx_81 = *(rdx_38 + (r13_3 << 3) + 8)
                                            
                                            *(rdx_38 + (r13_3 << 3) + 8) = rcx_81
                                            int64_t rcx_82 = *(arg5 + 0x48)
                                            int32_t rax_110 = *(rcx_82 + (r13_3 << 3) + 0xc)
                                            
                                            if (rax_110 s< rsi_8 - 1)
                                                rax_110 = rsi_8 - 1
                                            
                                            *(rcx_82 + (r13_3 << 3) + 0xc) = rax_110
                                            int32_t rcx_83 = rsi_8
                                            int64_t rdx_39 = *(arg5 + 0x50)
                                            int64_t r8_27 = sx.q((*arg5 + 2) * (rdi_7 + 1) + rsi_8)
                                            int16_t rax_115 = r11_6.w
                                            
                                            if (*(rdx_39 + (r8_27 << 2)) s<= r11_6.w)
                                                rax_115 = *(rdx_39 + (r8_27 << 2))
                                            
                                            bool cond:34_1 =
                                                *(rdx_39 + (r8_27 << 2) + 2) s>= r11_6.w
                                            *(rdx_39 + (r8_27 << 2)) = rax_115
                                            int16_t rax_116 = r11_6.w
                                            
                                            if (cond:34_1)
                                                rax_116 = *(rdx_39 + (r8_27 << 2) + 2)
                                            
                                            *(rdx_39 + (r8_27 << 2) + 2) = rax_116
                                            int64_t rdx_40 = *(arg5 + 0x48)
                                            
                                            if (*(rdx_40 + (r13_3 << 3)) s< rsi_8)
                                                rcx_83 = *(rdx_40 + (r13_3 << 3))
                                            
                                            *(rdx_40 + (r13_3 << 3)) = rcx_83
                                            int64_t rcx_84 = *(arg5 + 0x48)
                                            int32_t rax_117 = *(rcx_84 + (r13_3 << 3) + 4)
                                            
                                            if (rax_117 s< rsi_8)
                                                rax_117 = rsi_8
                                            
                                            *(rcx_84 + (r13_3 << 3) + 4) = rax_117
                                            int32_t rcx_85 = rsi_8 - 1
                                            int64_t rdx_41 = *(arg5 + 0x50)
                                            int64_t r8_28 = sx.q((*arg5 + 2) * rdi_7 + rsi_8)
                                            int16_t rax_122 = r11_6.w
                                            
                                            if (*(rdx_41 + (r8_28 << 2) + 4) s<= r11_6.w)
                                                rax_122 = *(rdx_41 + (r8_28 << 2) + 4)
                                            
                                            bool cond:35_1 =
                                                *(rdx_41 + (r8_28 << 2) + 6) s>= r11_6.w
                                            *(rdx_41 + (r8_28 << 2) + 4) = rax_122
                                            int16_t rax_123 = r11_6.w
                                            
                                            if (cond:35_1)
                                                rax_123 = *(rdx_41 + (r8_28 << 2) + 6)
                                            
                                            *(rdx_41 + (r8_28 << 2) + 6) = rax_123
                                            int64_t rdx_42 = *(arg5 + 0x48)
                                            
                                            if (*(rdx_42 + (r13_3 << 3)) s< rsi_8 - 1)
                                                rcx_85 = *(rdx_42 + (r13_3 << 3))
                                            
                                            *(rdx_42 + (r13_3 << 3)) = rcx_85
                                            int64_t rcx_86 = *(arg5 + 0x48)
                                            int32_t rax_124 = *(rcx_86 + (r13_3 << 3) + 4)
                                            result_30.d = result_30.d f+ result_24[0]
                                            
                                            if (rax_124 s< rsi_8 - 1)
                                                rax_124 = rsi_8 - 1
                                            
                                            *(rcx_86 + (r13_3 << 3) + 4) = rax_124
                                            int64_t rdx_43 = *(arg5 + 0x50)
                                            int64_t r8_29 = sx.q((*arg5 + 2) * rdi_7 + rsi_8)
                                            int16_t rax_129 = r11_6.w
                                            
                                            if (*(rdx_43 + (r8_29 << 2)) s<= r11_6.w)
                                                rax_129 = *(rdx_43 + (r8_29 << 2))
                                            
                                            bool cond:37_1 =
                                                *(rdx_43 + (r8_29 << 2) + 2) s>= r11_6.w
                                            *(rdx_43 + (r8_29 << 2)) = rax_129
                                            
                                            if (cond:37_1)
                                                r11_6.w = *(rdx_43 + (r8_29 << 2) + 2)
                                            
                                            rsi_8 += 1
                                            *(rdx_43 + (r8_29 << 2) + 2) = r11_6.w
                                        while (rsi_8 s<= r12_5)
                                        
                                        r14_2 = var_190_1
                                
                                r9 = var_198
                                result = result_1
                                *r14_2 = 0
                            
                            r10_6 = var_1c0_1
                            temp0_78[0] = temp0_78[0] + result_34[0]
                            rdi_7 += 1
                            r13_3 += 1
                            r14_2 = &r14_2[2]
                            var_1c4_1 = rdi_7
                            var_1b0_2.q = r13_3
                            var_190_1 = r14_2
                        while (r13_3 s<= result)
                    
                    int64_t r13_5 = sx.q(r14)
                    int64_t var_190_2 = r13_5
                    
                    if (r13_5 s<= result_40)
                        int32_t rdx_44 = r8_12
                        
                        do
                            int64_t rcx_94 = *(arg5 + 0x48)
                            int32_t r12_6 = rdx_44
                            int32_t rdi_9 = *(rcx_94 + (r13_5 << 3) + 8)
                            
                            if (*(rcx_94 + (r13_5 << 3) + 0xc) s< rdx_44)
                                r12_6 = *(rcx_94 + (r13_5 << 3) + 0xc)
                            
                            if (rdi_9 s< var_1c0_1)
                                rdi_9 = var_1c0_1
                            
                            if (rdi_9 s<= r12_6)
                                do
                                    int64_t rax_132 = *(arg5 + 0x50)
                                    int64_t rdx_45 = sx.q((r14 + 1) * (*arg5 + 2) + rdi_9)
                                    int16_t r9_9 = *(rax_132 + (rdx_45 << 2) + 4)
                                    int16_t rcx_90 = *(rax_132 + (rdx_45 << 2) + 6)
                                    *(rax_132 + (rdx_45 << 2) + 4) = 0x83007d00
                                    
                                    if (r9_9 s< 0x1fff && rcx_90 s>= 0)
                                        if (arg12 != 0)
                                            r9_9 = 0
                                        else if (r9_9 s< 0)
                                            r9_9 = 0
                                        
                                        int32_t rcx_91 = sx.d(rcx_90)
                                        
                                        if (rcx_91 s< sx.d(r9_9) + 1)
                                            rcx_91 = sx.d(r9_9) + 1
                                        
                                        int16_t rax_135 = 0x1fff
                                        
                                        if (rcx_91 s< 0x1fff)
                                            rax_135 = rcx_91.w
                                        
                                        sub_142635bb0(arg5, rdi_9, r14, r9_9, rax_135, arg4, arg11)
                                    
                                    rdi_9 += 1
                                while (rdi_9 s<= r12_6)
                                
                                rcx_94 = *(arg5 + 0x48)
                                r13_5 = var_190_2
                                rdx_44 = r8_12
                            
                            r14 += 1
                            *(rcx_94 + (r13_5 << 3) + 8) = *arg5 + 2
                            result = *(arg5 + 0x48)
                            *(result + (r13_5 << 3) + 0xc) = 0xfffffffe
                            r13_5 += 1
                            var_190_2 = r13_5
                        while (r13_5 s<= result_40)
                else
                    zmm8 = arg8
                    
                    for (int32_t i_2 = 0; i_2 s< 3; i_2 += 1)
                        int32_t var_1b8_1
                        int32_t rax_30
                        int32_t r10_2
                        
                        if (i_2 != 2)
                            rax_30 = i_2 + 1
                            r10_2 = 2
                            var_1b8_1 = rax_30
                            
                            if (i_2 != 0)
                                r10_2 = i_2 - 1
                        else
                            rax_30 = 0
                            var_1b8_1 = 0
                            r10_2 = i_2 - 1
                        
                        int64_t i_7 = sx.q(i_2)
                        int64_t rdx_8 = sx.q(r10_2)
                        int64_t rax_32 = sx.q(rax_30) * 3
                        int64_t rcx_8 = i_7 * 3
                        result_12.d = (*(&var_154 + (rax_32 << 2))).d f- *(&var_154 + (rcx_8 << 2))
                        result_24 = var_158[rax_32]
                        int64_t rdi_2 = rdx_8 * 3
                        result_23 = *(&var_150 + (rax_32 << 2))
                        int64_t rax_33 = rdx_8 * 3
                        zmm5 = var_158[rcx_8]
                        zmm7 = *(&var_150 + (rcx_8 << 2))
                        result_24[0] = result_24[0] f- zmm5
                        int32_t r11_1 = (&var_170)[i_7][0]
                        result_23[0] = result_23[0] - zmm7[0]
                        *(&var_124 + (rdi_2 << 2)) = result_12.d
                        var_128[rdi_2] = result_24[0]
                        *(&var_120 + (rdi_2 << 2)) = result_23[0]
                        result_23 = 0x3f800000
                        result_23[0] = 1f f/ *(&var_124 + (rdi_2 << 2))
                        result_12.d = 1f / result_24[0]
                        *(&var_100 + (rax_33 << 2)) = result_23[0]
                        var_104[rax_33] = result_12.d
                        result_12.d = 1f f/ *(&var_120 + (rdi_2 << 2))
                        *(&var_fc + (rax_33 << 2)) = result_12.d
                        
                        if (r11_1 s>= r13 && r11_1 s<= r8_12)
                            int64_t rax_34 = sx.q(*(&var_16c + (i_7 << 3)))
                            
                            if (rax_34.d s>= r14 && rax_34.d s<= result_37)
                                int64_t rdx_9 = *(arg5 + 0x48)
                                int32_t rcx_9 = r11_1
                                
                                if (*(rdx_9 + (rax_34 << 3) + 8) s< r11_1)
                                    rcx_9 = *(rdx_9 + (rax_34 << 3) + 8)
                                
                                *(rdx_9 + (rax_34 << 3) + 8) = rcx_9
                                int64_t rcx_10 = *(arg5 + 0x48)
                                int32_t rax_35 = *(rcx_10 + (rax_34 << 3) + 0xc)
                                
                                if (rax_35 s< r11_1)
                                    rax_35 = r11_1
                                
                                *(rcx_10 + (rax_34 << 3) + 0xc) = rax_35
                                i_7 = sx.q(i_2)
                        
                        int32_t result_41 = *(&var_16c + (i_7 << 3))
                        int64_t r8_14 = sx.q(var_1b8_1)
                        int32_t result_38 = *(&var_16c + (r8_14 << 3))
                        
                        if (result_41 != result_38)
                            int32_t result_25 = result_41
                            
                            if (result_41 s< result_38)
                                result_25 = result_38
                            
                            if (result_41 s< result_38)
                                result_38 = result_41
                            
                            r10_2.b <<= 2
                            int32_t j_2 = result_38 + 1
                            r10_2.b |= r8_14.b
                            r10_2.b <<= 2
                            r10_2.b |= i_2.b
                            
                            if (j_2 s< r14)
                                j_2 = r14
                            
                            int64_t j_1 = sx.q(j_2)
                            int32_t result_14 = result_11
                            
                            if (result_25 s< result_14)
                                result_14 = result_25
                            
                            while (j_1 s<= sx.q(result_14))
                                int64_t rax_36 = j_1 * 2
                                void* rcx_11
                                rcx_11.b = *(rax_36 + r12) != 0
                                j_1 += 1
                                (rcx_11 + rax_36)[r12] = r10_2.b
                        
                        int32_t r10_3 = (&var_170)[sx.q(var_1b8_1)][0]
                        
                        if (r11_1 != r10_3)
                            int32_t rax_37 = r11_1
                            
                            if (r11_1 s< r10_3)
                                rax_37 = r10_3
                            
                            if (r11_1 s< r10_3)
                                r10_3 = r11_1
                            
                            int32_t r11_2 = r8_11
                            int32_t r10_4 = r10_3 + 1
                            
                            if (r10_4 s< r13)
                                r10_4 = r13
                            
                            if (rax_37 s< r11_2)
                                r11_2 = rax_37
                            
                            float temp0_47[0x4] = _mm_cvtepi32_ps(zx.o(r10_4))
                            temp0_47[0] = temp0_47[0] f* zmm8.d
                            temp0_47[0] = temp0_47[0] f+ *r9
                            
                            if (r10_4 s<= r11_2)
                                result_30 = var_104[rdi_2]
                                
                                do
                                    temp0_47[0] = temp0_47[0] f- zmm5
                                    temp0_47[0] = temp0_47[0] f* result_30.d
                                    
                                    if (temp0_47[0] >= 0f)
                                        result_23 = _mm_min_ss(temp0_47[0], 0x3f800000)
                                    else
                                        result_23 = zx.o(0)
                                    
                                    result_23[0] = result_23[0] f* *(&var_120 + (rdi_2 << 2))
                                    result_23[0] = result_23[0] + zmm7[0]
                                    result_23[0] = result_23[0] f- r9[2]
                                    result_23[0] = result_23[0] f* zmm12.d
                                    int32_t rcx_13 = int.d(result_23[0])
                                    
                                    if (rcx_13 != 0x80000000 &&
                                            not(_mm_cvtepi32_ps(zx.o(rcx_13)).d f== result_23[0]))
                                        result_23 = _mm_cvtepi32_ps(zx.o(rcx_13 - (_mm_movemask_ps(
                                            _mm_unpacklo_ps(result_23, result_23[0].q)) & 1)))
                                    
                                    int32_t rax_40 = int.d(result_23[0])
                                    
                                    if (rax_40 s>= r14 && rax_40 s<= result_37)
                                        int64_t rdx_11 = *(arg5 + 0x48)
                                        int64_t r9_2 = sx.q(rax_40)
                                        int32_t rcx_15 = r10_4
                                        
                                        if (*(rdx_11 + (r9_2 << 3) + 8) s< r10_4)
                                            rcx_15 = *(rdx_11 + (r9_2 << 3) + 8)
                                        
                                        *(rdx_11 + (r9_2 << 3) + 8) = rcx_15
                                        int64_t rcx_16 = *(arg5 + 0x48)
                                        int32_t rax_41 = *(rcx_16 + (r9_2 << 3) + 0xc)
                                        
                                        if (rax_41 s< r10_4)
                                            rax_41 = r10_4
                                        
                                        *(rcx_16 + (r9_2 << 3) + 0xc) = rax_41
                                        int32_t rcx_17 = r10_4 - 1
                                        int64_t rdx_12 = *(arg5 + 0x48)
                                        
                                        if (*(rdx_12 + (r9_2 << 3) + 8) s< r10_4 - 1)
                                            rcx_17 = *(rdx_12 + (r9_2 << 3) + 8)
                                        
                                        *(rdx_12 + (r9_2 << 3) + 8) = rcx_17
                                        int64_t rcx_18 = *(arg5 + 0x48)
                                        int32_t rax_42 = *(rcx_18 + (r9_2 << 3) + 0xc)
                                        
                                        if (rax_42 s< r10_4 - 1)
                                            rax_42 = r10_4 - 1
                                        
                                        *(rcx_18 + (r9_2 << 3) + 0xc) = rax_42
                                        r9 = var_198
                                    
                                    r10_4 += 1
                                    temp0_47[0] = temp0_47[0] f+ zmm8.d
                                while (r10_4 s<= r11_2)
                                
                                r12 = var_190
                    
                    int32_t result_28 = var_170[1]
                    int32_t result_18 = result_13
                    int32_t result_10 = result_5
                    
                    if (result_10 s< result_13)
                        result_18 = result_10
                    
                    if (result_10 s< result_13)
                        result_10 = result_13
                    
                    int32_t result_15 = result_28
                    
                    if (result_28 s< result_10)
                        result_15 = result_10
                    
                    if (result_28 s< result_18)
                        result_18 = result_28
                    
                    int32_t result_22 = result_11
                    int32_t i_5 = result_18 + 1
                    
                    if (i_5 s< r14)
                        i_5 = r14
                    
                    int64_t i_3 = sx.q(i_5)
                    
                    if (result_15 s< result_22)
                        result_22 = result_15
                    
                    float temp0_53[0x4] = _mm_cvtepi32_ps(zx.o(i_5))
                    temp0_53[0] = temp0_53[0] f* zmm8.d
                    temp0_53[0] = temp0_53[0] f+ r9[2]
                    
                    while (i_3 s<= sx.q(result_22))
                        char rax_44 = *(r12 + (i_3 << 1))
                        
                        if (rax_44 != 0)
                            uint32_t rcx_19 = zx.d(rax_44)
                            uint64_t rdx_13 = (zx.q(rcx_19) u>> 4) * 3
                            uint64_t rax_47 = (zx.q(rcx_19) & 3) * 3
                            temp0_53[0] = temp0_53[0] f- *(&var_150 + (rax_47 << 2))
                            temp0_53[0] = temp0_53[0] f* *(&var_fc + (rdx_13 << 2))
                            
                            if (temp0_53[0] >= 0f)
                                result_24 = _mm_min_ss(temp0_53[0], 0x3f800000)
                            else
                                result_24 = zx.o(0)
                            
                            result_24[0] = result_24[0] f* var_128[rdx_13]
                            zmm5 = *r9
                            result_24[0] = result_24[0] f+ var_158[rax_47]
                            result_23 = result_24
                            result_23[0] = result_23[0] f- zmm5
                            result_23[0] = result_23[0] f* zmm12.d
                            int32_t rcx_21 = int.d(result_23[0])
                            
                            if (rcx_21 != 0x80000000
                                    && not(_mm_cvtepi32_ps(zx.o(rcx_21)).d f== result_23[0]))
                                result_23 = _mm_cvtepi32_ps(zx.o(rcx_21 - (
                                    _mm_movemask_ps(_mm_unpacklo_ps(result_23, result_23[0].q))
                                    & 1)))
                            
                            int32_t r11_3 = int.d(result_23[0])
                            var_1a8 = r11_3
                            
                            if (r11_3 s>= r13 && r11_3 s<= r8_12)
                                int64_t rdx_14 = *(arg5 + 0x48)
                                int32_t rcx_23 = r11_3
                                
                                if (*(rdx_14 + (i_3 << 3) + 8) s< r11_3)
                                    rcx_23 = *(rdx_14 + (i_3 << 3) + 8)
                                
                                *(rdx_14 + (i_3 << 3) + 8) = rcx_23
                                int64_t rcx_24 = *(arg5 + 0x48)
                                int32_t rax_50 = *(rcx_24 + (i_3 << 3) + 0xc)
                                
                                if (rax_50 s< r11_3)
                                    rax_50 = r11_3
                                
                                *(rcx_24 + (i_3 << 3) + 0xc) = rax_50
                                int32_t rcx_25 = r11_3
                                int64_t rdx_15 = *(arg5 + 0x48)
                                
                                if (*(rdx_15 + (i_3 << 3)) s< r11_3)
                                    rcx_25 = *(rdx_15 + (i_3 << 3))
                                
                                *(rdx_15 + (i_3 << 3)) = rcx_25
                                int64_t rcx_26 = *(arg5 + 0x48)
                                int32_t rax_51 = *(rcx_26 + (i_3 << 3) + 4)
                                
                                if (rax_51 s< r11_3)
                                    rax_51 = r11_3
                                
                                *(rcx_26 + (i_3 << 3) + 4) = rax_51
                                zmm5 = *r9
                            
                            uint32_t rcx_27 = zx.d(*(r12 + (i_3 << 1) + 1))
                            uint64_t rdx_16 = (zx.q(rcx_27) u>> 4) * 3
                            uint64_t rax_54 = (zx.q(rcx_27) & 3) * 3
                            temp0_53[0] = temp0_53[0] f- *(&var_150 + (rax_54 << 2))
                            temp0_53[0] = temp0_53[0] f* *(&var_fc + (rdx_16 << 2))
                            
                            if (temp0_53[0] >= 0f)
                                result_23 = _mm_min_ss(temp0_53[0], 0x3f800000)
                            else
                                result_23 = zx.o(0)
                            
                            result_23[0] = result_23[0] f* var_128[rdx_16]
                            result_23[0] = result_23[0] f+ var_158[rax_54]
                            result_30.d = result_23.d f- zmm5
                            result_30.d = result_30.d f* zmm12.d
                            int32_t rcx_29 = int.d(result_30.d)
                            
                            if (rcx_29 != 0x80000000
                                    && not(_mm_cvtepi32_ps(zx.o(rcx_29)).d f== result_30.d))
                                result_30 = _mm_cvtepi32_ps(zx.o(rcx_29 -
                                    (_mm_movemask_ps(_mm_unpacklo_ps(result_30, result_30.q)) & 1)))
                            
                            int32_t r8_17 = int.d(result_30.d)
                            int32_t var_1a4_1 = r8_17
                            
                            if (r8_17 s>= r13 && r8_17 s<= r8_12)
                                int64_t rdx_17 = *(arg5 + 0x48)
                                int32_t rcx_31 = r8_17
                                
                                if (*(rdx_17 + (i_3 << 3) + 8) s< r8_17)
                                    rcx_31 = *(rdx_17 + (i_3 << 3) + 8)
                                
                                *(rdx_17 + (i_3 << 3) + 8) = rcx_31
                                int64_t rcx_32 = *(arg5 + 0x48)
                                int32_t rax_57 = *(rcx_32 + (i_3 << 3) + 0xc)
                                
                                if (rax_57 s< r8_17)
                                    rax_57 = r8_17
                                
                                *(rcx_32 + (i_3 << 3) + 0xc) = rax_57
                                int32_t rcx_33 = r8_17
                                int64_t rdx_18 = *(arg5 + 0x48)
                                
                                if (*(rdx_18 + (i_3 << 3)) s< r8_17)
                                    rcx_33 = *(rdx_18 + (i_3 << 3))
                                
                                *(rdx_18 + (i_3 << 3)) = rcx_33
                                int64_t rcx_34 = *(arg5 + 0x48)
                                int32_t rax_58 = *(rcx_34 + (i_3 << 3) + 4)
                                
                                if (rax_58 s< r8_17)
                                    rax_58 = r8_17
                                
                                *(rcx_34 + (i_3 << 3) + 4) = rax_58
                            
                            if (r11_3 != r8_17)
                                int64_t rax_59 = 0
                                
                                if (result_24[0] > result_23[0])
                                    rax_59 = 4
                                
                                int64_t rax_60 = 4
                                int32_t r11_5 = *(&var_1a8 + rax_59) + 1
                                int32_t rdi_3 = r8_12
                                
                                if (r11_5 s< r13)
                                    r11_5 = r13
                                
                                if (result_24[0] > result_23[0])
                                    rax_60 = 0
                                
                                int32_t rcx_35 = *(&var_1a8 + rax_60)
                                
                                if (rcx_35 s< r8_12)
                                    rdi_3 = rcx_35
                                
                                if (r11_5 s<= rdi_3)
                                    int64_t rdx_19 = *(arg5 + 0x48)
                                    int32_t rcx_36 = r11_5
                                    
                                    if (*(rdx_19 + (i_3 << 3) + 8) s< r11_5)
                                        rcx_36 = *(rdx_19 + (i_3 << 3) + 8)
                                    
                                    *(rdx_19 + (i_3 << 3) + 8) = rcx_36
                                    int64_t rcx_37 = *(arg5 + 0x48)
                                    int32_t rax_61 = *(rcx_37 + (i_3 << 3) + 0xc)
                                    
                                    if (rax_61 s< r11_5)
                                        rax_61 = r11_5
                                    
                                    *(rcx_37 + (i_3 << 3) + 0xc) = rax_61
                                    int32_t rcx_38 = rdi_3
                                    int64_t rdx_20 = *(arg5 + 0x48)
                                    
                                    if (*(rdx_20 + (i_3 << 3) + 8) s< rdi_3)
                                        rcx_38 = *(rdx_20 + (i_3 << 3) + 8)
                                    
                                    *(rdx_20 + (i_3 << 3) + 8) = rcx_38
                                    int64_t rcx_39 = *(arg5 + 0x48)
                                    int32_t rax_62 = *(rcx_39 + (i_3 << 3) + 0xc)
                                    
                                    if (rax_62 s< rdi_3)
                                        rax_62 = rdi_3
                                    
                                    *(rcx_39 + (i_3 << 3) + 0xc) = rax_62
                                    int32_t rcx_40 = r11_5 - 1
                                    int64_t rdx_21 = *(arg5 + 0x48)
                                    
                                    if (*(rdx_21 + (i_3 << 3) + 8) s< r11_5 - 1)
                                        rcx_40 = *(rdx_21 + (i_3 << 3) + 8)
                                    
                                    *(rdx_21 + (i_3 << 3) + 8) = rcx_40
                                    int64_t rcx_41 = *(arg5 + 0x48)
                                    int32_t rax_63 = *(rcx_41 + (i_3 << 3) + 0xc)
                                    
                                    if (rax_63 s< r11_5 - 1)
                                        rax_63 = r11_5 - 1
                                    
                                    *(rcx_41 + (i_3 << 3) + 0xc) = rax_63
                                    int32_t rcx_42 = rdi_3 - 1
                                    int64_t rdx_22 = *(arg5 + 0x48)
                                    
                                    if (*(rdx_22 + (i_3 << 3) + 8) s< rdi_3 - 1)
                                        rcx_42 = *(rdx_22 + (i_3 << 3) + 8)
                                    
                                    *(rdx_22 + (i_3 << 3) + 8) = rcx_42
                                    int64_t rcx_43 = *(arg5 + 0x48)
                                    int32_t rax_64 = *(rcx_43 + (i_3 << 3) + 0xc)
                                    
                                    if (rax_64 s< rdi_3 - 1)
                                        rax_64 = rdi_3 - 1
                                    
                                    *(rcx_43 + (i_3 << 3) + 0xc) = rax_64
                                    int32_t rcx_44 = r11_5
                                    int64_t rdx_23 = *(arg5 + 0x48)
                                    
                                    if (*(rdx_23 + (i_3 << 3)) s< r11_5)
                                        rcx_44 = *(rdx_23 + (i_3 << 3))
                                    
                                    *(rdx_23 + (i_3 << 3)) = rcx_44
                                    int64_t rcx_45 = *(arg5 + 0x48)
                                    int32_t rax_65 = *(rcx_45 + (i_3 << 3) + 4)
                                    
                                    if (rax_65 s< r11_5)
                                        rax_65 = r11_5
                                    
                                    *(rcx_45 + (i_3 << 3) + 4) = rax_65
                                    int32_t rcx_46 = rdi_3
                                    int64_t rdx_24 = *(arg5 + 0x48)
                                    
                                    if (*(rdx_24 + (i_3 << 3)) s< rdi_3)
                                        rcx_46 = *(rdx_24 + (i_3 << 3))
                                    
                                    *(rdx_24 + (i_3 << 3)) = rcx_46
                                    int64_t rcx_47 = *(arg5 + 0x48)
                                    int32_t rax_66 = *(rcx_47 + (i_3 << 3) + 4)
                                    
                                    if (rax_66 s< rdi_3)
                                        rax_66 = rdi_3
                                    
                                    *(rcx_47 + (i_3 << 3) + 4) = rax_66
                                    int32_t rcx_48 = r11_5 - 1
                                    int64_t rdx_25 = *(arg5 + 0x48)
                                    
                                    if (*(rdx_25 + (i_3 << 3)) s< r11_5 - 1)
                                        rcx_48 = *(rdx_25 + (i_3 << 3))
                                    
                                    *(rdx_25 + (i_3 << 3)) = rcx_48
                                    int64_t rcx_49 = *(arg5 + 0x48)
                                    int32_t rax_67 = *(rcx_49 + (i_3 << 3) + 4)
                                    
                                    if (rax_67 s< r11_5 - 1)
                                        rax_67 = r11_5 - 1
                                    
                                    *(rcx_49 + (i_3 << 3) + 4) = rax_67
                                    int32_t rcx_50 = rdi_3 - 1
                                    int64_t rdx_26 = *(arg5 + 0x48)
                                    
                                    if (*(rdx_26 + (i_3 << 3)) s< rdi_3 - 1)
                                        rcx_50 = *(rdx_26 + (i_3 << 3))
                                    
                                    *(rdx_26 + (i_3 << 3)) = rcx_50
                                    int64_t rcx_51 = *(arg5 + 0x48)
                                    int32_t rax_68 = *(rcx_51 + (i_3 << 3) + 4)
                                    
                                    if (rax_68 s< rdi_3 - 1)
                                        rax_68 = rdi_3 - 1
                                    
                                    r9 = var_198
                                    *(rcx_51 + (i_3 << 3) + 4) = rax_68
                            
                            *(r12 + (i_3 << 1)) = 0
                        
                        i_3 += 1
                        temp0_53[0] = temp0_53[0] f+ zmm8.d
                    
                    int16_t result_3 = result_6
                    int32_t result_8 = sx.d(result_3)
                    
                    if (arg12 == 0 && result_8 s>= 0)
                        r15_1 = result_8.w
                        
                        if (result_8 s> 0x1fff)
                            r15_1 = 0x1fff
                    
                    result = zx.q(zx.d(r15_1) + 1)
                    int16_t var_1b0_1 = result.w
                    
                    if (result_8 s>= result.d)
                        if (result_8 s> 0x1fff)
                            result_3 = 0x1fff
                        
                        result = zx.q(result_3)
                        var_1b0_1 = result.w
                    
                    int64_t r12_2 = sx.q(r14)
                    int64_t var_198_1 = r12_2
                    
                    if (r12_2 s<= result_40)
                        int32_t rdx_27 = r8_12
                        
                        do
                            int64_t rcx_53 = *(arg5 + 0x48)
                            int32_t rsi_2 = rdx_27
                            int32_t rdi_4 = *(rcx_53 + (r12_2 << 3) + 8)
                            
                            if (*(rcx_53 + (r12_2 << 3) + 0xc) s< rdx_27)
                                rsi_2 = *(rcx_53 + (r12_2 << 3) + 0xc)
                            
                            if (rdi_4 s< r13)
                                rdi_4 = r13
                            
                            if (rdi_4 s<= rsi_2)
                                do
                                    sub_142635bb0(arg5, rdi_4, r14, r15_1, var_1b0_1, arg4, arg11)
                                    rdi_4 += 1
                                while (rdi_4 s<= rsi_2)
                                
                                rcx_53 = *(arg5 + 0x48)
                                r12_2 = var_198_1
                                r13 = var_1c0_1
                                rdx_27 = r8_12
                            
                            r14 += 1
                            *(rcx_53 + (r12_2 << 3) + 8) = *arg5 + 2
                            result = *(arg5 + 0x48)
                            *(result + (r12_2 << 3) + 0xc) = 0xfffffffe
                            r12_2 += 1
                            var_198_1 = r12_2
                        while (r12_2 s<= result_40)
            else
                result_24 = _mm_min_ss(result_24[0], result_30.d)
                result_30 = arg10
                int16_t r15
                
                if (arg12 == 0)
                    result_23 = _mm_max_ss(result_23[0], 0)
                    result_23[0] = result_23[0] f* result_30.d
                    int32_t rcx_3 = int.d(result_23[0])
                    
                    if (rcx_3 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_3)).d f== result_23[0]))
                        result_23 = _mm_cvtepi32_ps(zx.o(rcx_3
                            - (_mm_movemask_ps(_mm_unpacklo_ps(result_23, result_23[0].q)) & 1)))
                    
                    int32_t rax_18 = int.d(result_23[0])
                    
                    if (rax_18 s>= 0)
                        if (rax_18 s> 0x1fff)
                            rax_18 = 0x1fff
                        
                        r15 = rax_18.w
                    else
                        r15 = 0
                else
                    r15 = 0
                
                result_24[0] = result_24[0] f* result_30.d
                uint32_t rdx_6 = zx.d(r15) + 1
                int32_t rcx_5 = int.d(result_24[0])
                
                if (rcx_5 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_5)).d f== result_24[0]))
                    result_24 = _mm_cvtepi32_ps(zx.o(rcx_5
                        + ((_mm_movemask_ps(_mm_unpacklo_ps(result_24, result_24[0].q)) & 1) ^ 1)))
                
                int32_t rax_22 = int.d(result_24[0])
                
                if (rax_22 s>= rdx_6)
                    if (rax_22 s> 0x1fff)
                        rax_22.w = 0x1fff
                    
                    rdx_6 = zx.d(rax_22.w)
                
                result = sub_142635bb0(arg5, r13, r14, r15, rdx_6.w, arg4, arg11)

__security_check_cookie(rax_1 ^ &var_208)
return result
