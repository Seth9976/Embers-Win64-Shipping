// 函数: sub_141e00ec0
// 地址: 0x141e00ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = *(arg2 + 0x10)
void* r13 = arg1
int64_t rax_1 = *(r10 + 0x10)
int64_t rdx = sx.q(*(rax_1 + (sx.q(arg3 * 2) << 2)))

if (rdx.d == 0xffffffff)
    *(arg1 + 0x10) = _mm_unpacklo_ps(_mm_unpacklo_ps(data_143dbb1f8, data_143dbb200.q), 
        _mm_unpacklo_ps(data_143dbb1fc, 0).q)
    return rax_1

int32_t* rax_2 = *(r10 + 0x38)
int32_t rcx = *(rax_2 + rdx)
uint32_t r12 = 1
uint32_t r8_1 = 1
void* r14_1 = &rax_2[1] + rdx
int32_t rsi_1 = rcx s>> 0x18
uint64_t rcx_2 = zx.q(rcx s>> 0x1c) & 0xf
uint64_t r15 = zx.q(rcx_2.d)
uint64_t r11_1 = zx.q(rcx) & 0xffffff
uint32_t rax_5 = zx.d(*((zx.q((rcx_2 << 3).d) | (zx.q(rsi_1) & 7)) + 0x143240fb8))

if (r15.d != 3)
    r8_1 = rax_5

int32_t i_10 = 0
int32_t r8_2 = r8_1 * *((r15 << 2) + 0x143240f38)
int32_t i_8 = 0
int32_t arg_18 = 0
uint32_t rdx_1 = 0

if (r15.d == 3)
    rdx_1 = rax_5

uint64_t rdx_2 = zx.q(rdx_1 << 2)
int32_t arg_10 = r8_2
uint128_t zmm0
uint128_t zmm2
uint128_t zmm3

if (r11_1.d u> 1)
    if ((rsi_1.b & 8) != 0)
        char r13_1 = *(arg2 + 4)
        int32_t r8_3 = *(r10 + 8)
        int32_t i_11 = (r11_1 - 1).d
        void* rcx_11 = (sx.q(r11_1.d * r8_2) + 3 + r14_1 + rdx_2) & 0xfffffffffffffffc
        
        if (r11_1.d u< 2)
            zmm2 = zx.o(0)
        else
            zmm0 = *(arg2 + 0x1c)
            
            if (zmm0.d f<= 0f)
                zmm2 = zx.o(0)
            else if (zmm0.d f< 1f)
                int32_t rdx_3 = r8_3 - 2
                zmm2.d = _mm_cvtepi32_ps(zx.o(r8_3 - 1)).d f* zmm0.d
                zmm3.d = _mm_cvtepi32_ps(zx.o(i_11)).d f* zmm0.d
                int32_t rax_15 = int.d(zmm2.d)
                
                if (rax_15 s< 0)
                    rdx_3 = 0
                else if (rax_15 s< rdx_3)
                    rdx_3 = rax_15
                
                int32_t i_13 = int.d(zmm3.d)
                int32_t i_12
                
                if (i_13 s>= 0)
                    i_12 = i_11
                    
                    if (i_13 s< i_11)
                        i_12 = i_13
                else
                    i_12 = 0
                
                int64_t i_14 = sx.q(i_12)
                uint32_t rdx_4
                uint32_t r8_4
                
                if (r8_3 s<= 0xff)
                    if (zx.d(*(i_14 + rcx_11)) s> rdx_3)
                        int32_t i_7 = i_12 - 1
                        void* i = sx.q(i_7)
                        
                        if (i_7 s> 0)
                            do
                                if (zx.d(*(i + rcx_11)) s<= rdx_3)
                                    i_8 = i_7
                                    break
                                
                                i_7 -= 1
                                i -= 1
                            while (i s> 0)
                    else
                        int32_t i_6 = i_12 + 1
                        void* i_1 = sx.q(i_6)
                        i_8 = i_11
                        
                        for (; i_1 s<= r11_1 - 1; i_1 += 1)
                            if (zx.d(*(i_1 + rcx_11)) s> rdx_3)
                                i_8 = i_6 - 1
                                break
                            
                            i_6 += 1
                    
                    i_10 = i_11
                    r8_4 = zx.d(*(sx.q(i_8) + rcx_11))
                    
                    if (i_8 + 1 s<= i_11)
                        i_10 = i_8 + 1
                    
                    rdx_4 = zx.d(*(sx.q(i_10) + rcx_11))
                else
                    if (zx.d(*(rcx_11 + (i_14 << 1))) s> rdx_3)
                        int32_t i_5 = i_12 - 1
                        int64_t i_2 = sx.q(i_5)
                        
                        if (i_5 s> 0)
                            do
                                if (zx.d(*(rcx_11 + (i_2 << 1))) s<= rdx_3)
                                    i_8 = i_5
                                    break
                                
                                i_5 -= 1
                                i_2 -= 1
                            while (i_2 s> 0)
                    else
                        int32_t i_4 = i_12 + 1
                        int64_t i_3 = sx.q(i_4)
                        i_8 = i_11
                        
                        for (; i_3 s<= r11_1 - 1; i_3 += 1)
                            if (zx.d(*(rcx_11 + (i_3 << 1))) s> rdx_3)
                                i_8 = i_4 - 1
                                break
                            
                            i_4 += 1
                    
                    i_10 = i_11
                    r8_4 = zx.d(*(rcx_11 + (sx.q(i_8) << 1)))
                    
                    if (i_8 + 1 s<= i_11)
                        i_10 = i_8 + 1
                    
                    rdx_4 = zx.d(*(rcx_11 + (sx.q(i_10) << 1)))
                
                uint32_t rdx_5 = rdx_4 - r8_4
                
                if (r13_1 != 1)
                    zmm0 = _mm_cvtepi32_ps(zx.o(r8_4))
                    
                    if (rdx_5 s>= 1)
                        r12 = rdx_5
                    
                    zmm2.d = zmm2.d f- zmm0.d
                    zmm2.d = zmm2.d f/ _mm_cvtepi32_ps(zx.o(r12)).d
                else
                    zmm2 = zx.o(0)
            else
                i_8 = i_11
                i_10 = i_11
                zmm2 = zx.o(0)
        
        rdx_2 = zx.q(rdx_2.d)
        r8_2 = arg_10
        r13 = arg1
    else if (r11_1.d u>= 2)
        zmm0 = *(arg2 + 0x1c)
        
        if (zmm0.d f> 0f)
            i_10 = (r11_1 - 1).d
            
            if (zmm0.d f< 1f)
                zmm2.d = _mm_cvtepi32_ps(zx.o(i_10)).d f* zmm0.d
                zmm3 = zmm2
                int32_t rcx_5 = int.d(zmm3.d)
                
                if (rcx_5 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_5)).d f== zmm3.d))
                    zmm3 = _mm_cvtepi32_ps(zx.o(rcx_5
                        - (_mm_movemask_ps(_mm_unpacklo_ps(zmm3, zmm3.q)) & 1)))
                
                i_8 = i_10
                int32_t i_9 = int.d(zmm3.d)
                
                if (i_9 s<= i_10)
                    i_8 = i_9
                
                if (*(arg2 + 4) != 1)
                    zmm2.d = zmm2.d f- zmm3.d
                    
                    if (i_8 + 1 s<= i_10)
                        i_10 = i_8 + 1
                else
                    zmm2 = zx.o(0)
                    
                    if (i_8 + 1 s<= i_10)
                        i_10 = i_8 + 1
            else
                i_8 = i_10
                zmm2 = zx.o(0)
        else
            zmm2 = zx.o(0)
    else
        zmm2 = zx.o(0)
    
    arg_18 = zmm2.d

int32_t rax_14 = i_8 * r8_2
uint64_t r12_1 = zx.q(rdx_2.d)
void* rcx_14 = sx.q(rax_14) + r12_1 + r14_1
uint64_t var_c8
int32_t var_c0
uint128_t zmm1
uint128_t zmm4
int32_t zmm5
uint128_t zmm7
uint128_t zmm8
uint128_t zmm9

if (r15.d != 1)
    if (r15.d == 3)
        uint128_t* rax_28 = r14_1
        zmm0 = zx.o(0)
        zmm1 = zx.o(0)
        zmm2 = zx.o(0)
        zmm3 = zx.o(0)
        zmm4 = zx.o(0)
        zmm5 = (zx.o(0)).d
        
        if ((rsi_1.b & 1) != 0)
            zmm3 = *(r14_1 + 4)
            zmm0 = *r14_1
            rax_28 = r14_1 + 8
        
        if ((rsi_1.b & 2) != 0)
            zmm1 = *rax_28
            zmm4 = *(rax_28 + 4)
            rax_28 += 8
        
        if ((rsi_1.b & 4) != 0)
            zmm2 = *rax_28
            zmm5 = *(rax_28 + 4)
        
        int32_t rcx_15 = *rcx_14
        rax_14 = (rcx_15 u>> 0xa & 0x7ff) - 0x3ff
        zmm9.d = _mm_cvtepi32_ps(zx.o((rcx_15 & 0x3ff) - 0x1ff)).d f* 0.00195694715f
        zmm9.d = zmm9.d f* zmm3.d
        zmm8.d = _mm_cvtepi32_ps(zx.o((rcx_15 u>> 0x15) - 0x3ff)).d f* 0.000977517106f
        zmm9.d = zmm9.d f+ zmm0.d
        zmm8.d = zmm8.d f* zmm5
        zmm0.d = _mm_cvtepi32_ps(zx.o(rax_14)).d f* 0.000977517106f
        zmm8.d = zmm8.d f+ zmm2.d
        zmm0.d = zmm0.d f* zmm4.d
        zmm0.d = zmm0.d f+ zmm1.d
        var_c8:4.d = zmm0.d
        zmm7 = zmm0
        var_c8.d = zmm9.d
        var_c0 = zmm8.d
    else if (r15.d != 2)
        if (r15.d != 6)
            sub_140af98a0("Unknown", 0x398, 
                %i: unknown or unsupported animation compression format", zx.q(r15.d))
            rax_14 = sub_140afbb40()
            r8_2 = arg_10
        
        zmm7 = data_143dbb1fc
        zmm8 = data_143dbb200
        zmm9 = data_143dbb1f8
        var_c8:4.d = zmm7.d
        var_c8.d = zmm9.d
        var_c0 = zmm8.d
    else
        if ((rsi_1.b & 1) == 0)
            var_c8.d = 0
            zmm9 = zx.o(0)
        else
            rax_14 = zx.d(*rcx_14) - 0xff
            rcx_14 += 2
            zmm9 = _mm_cvtepi32_ps(zx.o(rax_14))
            var_c8.d = zmm9.d
        
        if ((rsi_1.b & 2) == 0)
            var_c8:4.d = 0
            zmm7 = zx.o(0)
        else
            rax_14 = zx.d(*rcx_14) - 0xff
            rcx_14 += 2
            zmm7 = _mm_cvtepi32_ps(zx.o(rax_14))
            var_c8:4.d = zmm7.d
        
        if ((rsi_1.b & 4) == 0)
            var_c0 = 0
            zmm8 = zx.o(0)
        else
            rax_14 = zx.d(*rcx_14) - 0xff
            zmm8 = _mm_cvtepi32_ps(zx.o(rax_14))
            var_c0 = zmm8.d
else if ((rsi_1.b & 7) != 0)
    if ((rsi_1.b & 1) == 0)
        var_c8.d = 0
        zmm9 = zx.o(0)
    else
        zmm9 = *rcx_14
        rcx_14 += 4
        var_c8.d = zmm9.d
    
    if ((rsi_1.b & 2) == 0)
        var_c8:4.d = 0
        zmm7 = zx.o(0)
    else
        zmm7 = *rcx_14
        rcx_14 += 4
        var_c8:4.d = zmm7.d
    
    if ((rsi_1.b & 4) == 0)
        var_c0 = 0
        zmm8 = zx.o(0)
    else
        zmm8 = *rcx_14
        var_c0 = zmm8.d
else
    zmm0 = zx.o(*rcx_14)
    rax_14 = *(rcx_14 + 8)
    var_c0 = rax_14
    zmm8 = var_c0
    var_c8 = zmm0.q
    zmm9 = var_c8.d
    zmm7 = _mm_shuffle_ps(zmm0, zmm0, 0x55)

if (i_8 == i_10)
    zmm2 = zmm7
    zmm3 = _mm_unpacklo_ps(zmm9, zmm8.q)
else
    void* rcx_20 = sx.q(i_10 * r8_2) + r12_1 + r14_1
    
    if (r15.d != 1)
        if (r15.d == 3)
            int128_t zmm10 = zx.o(0)
            zmm0 = zx.o(0)
            zmm4 = zx.o(0)
            zmm1 = zx.o(0)
            zmm5 = (zx.o(0)).d
            zmm3 = zx.o(0)
            
            if ((rsi_1.b & 1) != 0)
                zmm0 = *r14_1
                zmm10 = *(r14_1 + 4)
                r14_1 += 8
            
            if ((rsi_1.b & 2) != 0)
                zmm4 = *r14_1
                zmm5 = *(r14_1 + 4)
                r14_1 += 8
            
            if ((rsi_1.b & 4) != 0)
                zmm1 = *r14_1
                zmm3 = *(r14_1 + 4)
            
            int32_t rcx_21 = *rcx_20
            zmm2.d = float.s((rcx_21 & 0x3ff) - 0x1ff)
            rax_14 = (rcx_21 u>> 0xa & 0x7ff) - 0x3ff
            zmm2.d = zmm2.d f* 0.00195694715f
            zmm2.d = zmm2.d f* zmm10.d
            zmm2.d = zmm2.d f+ zmm0.d
            zmm0.d = float.s(rax_14)
            zmm0.d = zmm0.d f* 0.000977517106f
            zmm0.d = zmm0.d f* zmm5
            zmm0.d = zmm0.d f+ zmm4.d
            zmm4.d = float.s((rcx_21 u>> 0x15) - 0x3ff)
            zmm4.d = zmm4.d f* 0.000977517106f
            zmm4.d = zmm4.d f* zmm3.d
            zmm4.d = zmm4.d f+ zmm1.d
            zmm1 = zmm0
        else if (r15.d != 2)
            if (r15.d != 6)
                sub_140af98a0("Unknown", 0x398, 
                    %i: unknown or unsupported animation compression format", zx.q(r15.d))
                rax_14 = sub_140afbb40()
            
            zmm4 = data_143dbb200
            zmm1 = data_143dbb1fc
            zmm2 = data_143dbb1f8
        else
            if ((rsi_1.b & 1) == 0)
                zmm2 = zx.o(0)
            else
                rax_14 = zx.d(*rcx_20) - 0xff
                rcx_20 += 2
                zmm2 = _mm_cvtepi32_ps(zx.o(rax_14))
            
            if ((rsi_1.b & 2) == 0)
                zmm1 = zx.o(0)
            else
                rax_14 = zx.d(*rcx_20) - 0xff
                rcx_20 += 2
                zmm1 = _mm_cvtepi32_ps(zx.o(rax_14))
            
            if ((rsi_1.b & 4) == 0)
                zmm4 = zx.o(0)
            else
                rax_14 = zx.d(*rcx_20) - 0xff
                zmm4 = _mm_cvtepi32_ps(zx.o(rax_14))
    else if ((rsi_1.b & 7) != 0)
        if ((rsi_1.b & 1) == 0)
            zmm2 = zx.o(0)
        else
            zmm2 = *rcx_20
            rcx_20 += 4
        
        if ((rsi_1.b & 2) == 0)
            zmm1 = zx.o(0)
        else
            zmm1 = *rcx_20
            rcx_20 += 4
        
        if ((rsi_1.b & 4) == 0)
            zmm4 = zx.o(0)
        else
            zmm4 = *rcx_20
    else
        zmm0 = zx.o(*rcx_20)
        rax_14 = *(rcx_20 + 8)
        zmm4 = rax_14
        zmm2 = zmm0.d
        zmm1 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
    
    zmm0 = arg_18
    zmm2.d = zmm2.d f- zmm9.d
    zmm4.d = zmm4.d f- zmm8.d
    zmm1.d = zmm1.d f- zmm7.d
    zmm3.d = zmm0.d f* zmm2.d
    zmm2 = zmm0
    zmm0.d = zmm0.d f* zmm4.d
    zmm3.d = zmm3.d f+ var_c8.d
    zmm2.d = zmm2.d f* zmm1.d
    zmm0.d = zmm0.d f+ var_c0
    zmm2.d = zmm2.d f+ var_c8:4.d
    zmm3 = _mm_unpacklo_ps(zmm3, zmm0.q)

*(r13 + 0x10) = _mm_unpacklo_ps(zmm3, _mm_unpacklo_ps(zmm2, 0).q)
return rax_14
