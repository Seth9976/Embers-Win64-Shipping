// 函数: sub_141dfbf20
// 地址: 0x141dfbf20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = *(arg2 + 0x10)
int64_t rax_1 = *(r10 + 0x10)
int64_t rdx = sx.q(*(rax_1 + (sx.q(arg3 * 2) << 2) + 4))

if (rdx.d == 0xffffffff)
    *arg1 = data_14399f720
    return rax_1

int32_t* rax_2 = *(r10 + 0x38)
int32_t rcx = *(rax_2 + rdx)
void* rsi_1 = &rax_2[1] + rdx
uint32_t r13 = 1
uint32_t r8_1 = 1
uint128_t zmm6 = zx.o(0)
int32_t r15_1 = rcx s>> 0x18
uint64_t rcx_2 = zx.q(rcx s>> 0x1c) & 0xf
uint64_t r11_1 = zx.q(rcx) & 0xffffff
uint64_t r14 = zx.q(rcx_2.d)
uint32_t rax_5 = zx.d(*((zx.q((rcx_2 << 3).d) | (zx.q(r15_1) & 7)) + 0x143240fb8))

if (r14.d != 3)
    r8_1 = rax_5

int32_t i_10 = 0
int32_t r8_2 = r8_1 * *((r14 << 2) + 0x143240f38)
uint32_t r12 = 0
int32_t arg_18 = 0
int32_t i_8 = 0

if (r14.d == 3)
    r12 = rax_5

uint64_t r12_1 = zx.q(r12 << 2)
int32_t arg_10 = r8_2
uint128_t zmm0
uint128_t zmm2
uint128_t zmm3

if (r11_1.d u> 1)
    if ((r15_1.b & 8) != 0)
        int32_t r8_3 = *(r10 + 8)
        int32_t i_11 = (r11_1 - 1).d
        arg_18.b = *(arg2 + 4)
        void* rcx_11 = (sx.q(r11_1.d * r8_2) + 3 + rsi_1 + zx.q(r12_1.d)) & 0xfffffffffffffffc
        
        if (r11_1.d u< 2)
            zmm2 = zx.o(0)
        else
            zmm0 = *(arg2 + 0x1c)
            
            if (zmm0.d f<= 0f)
                zmm2 = zx.o(0)
            else if (zmm0.d f< 1f)
                int32_t rdx_5 = r8_3 - 2
                zmm2.d = _mm_cvtepi32_ps(zx.o(r8_3 - 1)).d f* zmm0.d
                zmm3.d = _mm_cvtepi32_ps(zx.o(i_11)).d f* zmm0.d
                int32_t rax_17 = int.d(zmm2.d)
                
                if (rax_17 s< 0)
                    rdx_5 = 0
                else if (rax_17 s< rdx_5)
                    rdx_5 = rax_17
                
                int32_t i_13 = int.d(zmm3.d)
                int32_t i_12
                
                if (i_13 s>= 0)
                    i_12 = i_11
                    
                    if (i_13 s< i_11)
                        i_12 = i_13
                else
                    i_12 = 0
                
                int64_t i_14 = sx.q(i_12)
                uint32_t rdx_6
                uint32_t r8_4
                
                if (r8_3 s<= 0xff)
                    if (zx.d(*(i_14 + rcx_11)) s> rdx_5)
                        int32_t i_7 = i_12 - 1
                        int64_t i = sx.q(i_7)
                        
                        if (i_7 s> 0)
                            do
                                if (zx.d(*(i + rcx_11)) s<= rdx_5)
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
                            if (zx.d(*(i_1 + rcx_11)) s> rdx_5)
                                i_8 = i_6 - 1
                                break
                            
                            i_6 += 1
                    
                    i_10 = i_11
                    r8_4 = zx.d(*(sx.q(i_8) + rcx_11))
                    
                    if (i_8 + 1 s<= i_11)
                        i_10 = i_8 + 1
                    
                    rdx_6 = zx.d(*(sx.q(i_10) + rcx_11))
                else
                    if (zx.d(*(rcx_11 + (i_14 << 1))) s> rdx_5)
                        int32_t i_5 = i_12 - 1
                        int64_t i_2 = sx.q(i_5)
                        
                        if (i_5 s> 0)
                            do
                                if (zx.d(*(rcx_11 + (i_2 << 1))) s<= rdx_5)
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
                            if (zx.d(*(rcx_11 + (i_3 << 1))) s> rdx_5)
                                i_8 = i_4 - 1
                                break
                            
                            i_4 += 1
                    
                    i_10 = i_11
                    r8_4 = zx.d(*(rcx_11 + (sx.q(i_8) << 1)))
                    
                    if (i_8 + 1 s<= i_11)
                        i_10 = i_8 + 1
                    
                    rdx_6 = zx.d(*(rcx_11 + (sx.q(i_10) << 1)))
                
                uint32_t rdx_7 = rdx_6 - r8_4
                
                if (arg_18.b != 1)
                    zmm0 = _mm_cvtepi32_ps(zx.o(r8_4))
                    
                    if (rdx_7 s>= 1)
                        r13 = rdx_7
                    
                    zmm2.d = zmm2.d f- zmm0.d
                    zmm2.d = zmm2.d f/ _mm_cvtepi32_ps(zx.o(r13)).d
                else
                    zmm2 = zx.o(0)
            else
                i_8 = i_11
                i_10 = i_11
                zmm2 = zx.o(0)
        
        r8_2 = arg_10
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

uint128_t zmm7
uint128_t var_58 = zmm7
void* rdx_4 = sx.q(i_8 * r8_2) + r12_1 + rsi_1
int32_t var_108
int32_t var_104
int32_t var_100
int32_t var_fc
uint128_t zmm1
uint128_t zmm4
uint128_t zmm5

if (r14.d == 2)
    void* rcx_12 = rdx_4
    
    if ((r15_1.b & 1) == 0)
        zmm2 = 0x46fffe00
    else
        rcx_12 = rdx_4 + 2
        zmm2 = _mm_cvtepi32_ps(zx.o(*rdx_4))
    
    if ((r15_1.b & 2) == 0)
        zmm1 = 0x46fffe00
    else
        uint32_t rax_30 = zx.d(*rcx_12)
        rcx_12 += 2
        zmm1 = _mm_cvtepi32_ps(zx.o(rax_30))
    
    if ((r15_1.b & 4) == 0)
        zmm0 = 0x46fffe00
    else
        zmm0 = _mm_cvtepi32_ps(zx.o(*rcx_12))
    
    zmm2.d = zmm2.d f- 32767f
    zmm1.d = zmm1.d f- 32767f
    zmm0.d = zmm0.d f- 32767f
    zmm4 = zmm2
    zmm2.d = zmm2.d f* zmm2.d
    zmm5 = zmm1
    zmm4.d = zmm4.d f* 3.05185094e-05f
    zmm7 = zmm0
    zmm1.d = zmm1.d f* zmm1.d
    zmm2.d = zmm2.d f* 9.31379418e-10f
    zmm1.d = zmm1.d f* 9.31379418e-10f
    zmm3.d = 1f f- zmm2.d
    zmm0.d = zmm0.d f* zmm0.d
    zmm5.d = zmm5.d f* 3.05185094e-05f
    zmm0.d = zmm0.d f* 9.31379418e-10f
    zmm3.d = zmm3.d f- zmm1.d
    zmm7.d = zmm7.d f* 3.05185094e-05f
    zmm3.d = zmm3.d f- zmm0.d
    
    if (zmm3.d f< 0f)
        zmm0 = zx.o(0)
    else
        zmm0 = _mm_sqrt_ss(0, zmm3.d)
    
    var_108 = zmm4.d
    var_104 = zmm5.d
    var_100 = zmm7.d
    var_fc = zmm0.d
else if (r14.d == 1)
    zmm3 = *rdx_4
    zmm4 = *(rdx_4 + 4)
    zmm5 = *(rdx_4 + 8)
    zmm0.d = zmm3.d f* zmm3.d
    zmm1.d = zmm4.d f* zmm4.d
    zmm2.d = 1f f- zmm0.d
    zmm0.d = zmm5.d f* zmm5.d
    zmm2.d = zmm2.d f- zmm1.d
    zmm2.d = zmm2.d f- zmm0.d
    
    if (zmm2.d f<= 0f)
        zmm0 = zx.o(0)
    else
        zmm0 = _mm_sqrt_ss(0, zmm2.d)
    
    var_108 = zmm3.d
    var_104 = zmm4.d
    var_100 = zmm5.d
    var_fc = zmm0.d
else if (r14.d != 3)
    if (r14.d == 5)
        int32_t var_e8[0x4]
        int32_t* rax_41
        rax_41, zmm6 = sub_141df20c0(&var_e8, rdx_4)
        zmm0 = *rax_41
        r8_2 = arg_10
    else if (r14.d == 4)
        void var_d8
        int32_t* rax_42
        rax_42, zmm6 = sub_141df1fe0(&var_d8, rdx_4)
        zmm0 = *rax_42
        r8_2 = arg_10
    else if (r14.d != 6)
        sub_140af98a0("Unknown", 0x3e2, %i: unknown or unsupported animation compression format", 
            zx.q(r14.d))
        sub_140afbb40()
        zmm0 = data_14399f720
        r8_2 = arg_10
    else
        zmm0 = data_14399f720
    
    var_108.o = zmm0
else
    uint128_t* rax_32 = rsi_1
    zmm0 = zx.o(0)
    zmm1 = zx.o(0)
    zmm5 = zx.o(0)
    zmm3 = zx.o(0)
    zmm4 = zx.o(0)
    zmm7 = zx.o(0)
    
    if ((r15_1.b & 1) != 0)
        zmm3 = *(rsi_1 + 4)
        zmm0 = *rsi_1
        rax_32 = rsi_1 + 8
    
    if ((r15_1.b & 2) != 0)
        zmm1 = *rax_32
        zmm4 = *(rax_32 + 4)
        rax_32 += 8
    
    if ((r15_1.b & 4) != 0)
        zmm5 = *rax_32
        zmm7 = *(rax_32 + 4)
    
    int32_t rcx_13 = *rdx_4
    zmm2.d = float.s((rcx_13 u>> 0x15) - 0x3ff)
    zmm2.d = zmm2.d f* 0.000977517106f
    zmm2.d = zmm2.d f* zmm3.d
    zmm3.d = float.s((rcx_13 u>> 0xa & 0x7ff) - 0x3ff)
    zmm2.d = zmm2.d f+ zmm0.d
    zmm3.d = zmm3.d f* 0.000977517106f
    zmm3.d = zmm3.d f* zmm4.d
    zmm0.d = zmm2.d f* zmm2.d
    zmm4.d = float.s((rcx_13 & 0x3ff) - 0x1ff)
    zmm3.d = zmm3.d f+ zmm1.d
    zmm4.d = zmm4.d f* 0.00195694715f
    zmm4.d = zmm4.d f* zmm7.d
    zmm1.d = zmm3.d f* zmm3.d
    zmm4.d = zmm4.d f+ zmm5.d
    zmm5.d = 1f f- zmm0.d
    zmm5.d = zmm5.d f- zmm1.d
    zmm0.d = zmm4.d f* zmm4.d
    zmm5.d = zmm5.d f- zmm0.d
    
    if (zmm5.d f<= 0f)
        zmm0 = zx.o(0)
    else
        zmm0 = _mm_sqrt_ss(0, zmm5.d)
    
    var_108 = zmm2.d
    var_104 = zmm3.d
    var_100 = zmm4.d
    var_fc = zmm0.d

uint128_t* rax_54

if (i_8 == i_10)
    zmm6 = var_108.o
    rax_54 = arg1
    zmm1 = _mm_mul_ps(zmm6, zmm6)
    *rax_54 = zmm6
    zmm5 = data_143f39360
    zmm1 = _mm_add_ps(zmm1, _mm_shuffle_ps(zmm1, zmm1, 0x4e))
    zmm4 = _mm_add_ps(_mm_shuffle_ps(zmm1, zmm1, 0x39), zmm1)
    zmm1 = _mm_rsqrt_ps(zmm4)
    zmm3 = _mm_mul_ps(zmm4, zmm5)
    zmm2 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(zmm1, zmm1), zmm3)), zmm1), 
        zmm1)
    zmm5 = _mm_mul_ps(
        _mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(zmm2, zmm2), zmm3)), zmm2), 
            zmm2), 
        zmm6)
else
    void* rdx_10 = sx.q(i_10 * r8_2) + r12_1 + rsi_1
    
    if (r14.d == 2)
        void* rcx_18 = rdx_10
        
        if ((r15_1.b & 1) == 0)
            zmm2 = 0x46fffe00
        else
            rcx_18 = rdx_10 + 2
            zmm2 = _mm_cvtepi32_ps(zx.o(*rdx_10))
        
        if ((r15_1.b & 2) == 0)
            zmm1 = 0x46fffe00
        else
            uint32_t rax_44 = zx.d(*rcx_18)
            rcx_18 += 2
            zmm1 = _mm_cvtepi32_ps(zx.o(rax_44))
        
        if ((r15_1.b & 4) == 0)
            zmm0 = 0x46fffe00
        else
            zmm0 = _mm_cvtepi32_ps(zx.o(*rcx_18))
        
        zmm2.d = zmm2.d f- 32767f
        zmm1.d = zmm1.d f- 32767f
        zmm0.d = zmm0.d f- 32767f
        zmm7 = zmm2
        zmm2.d = zmm2.d f* zmm2.d
        zmm3 = zmm1
        zmm7.d = zmm7.d f* 3.05185094e-05f
        zmm4 = zmm0
        zmm1.d = zmm1.d f* zmm1.d
        zmm2.d = zmm2.d f* 9.31379418e-10f
        zmm1.d = zmm1.d f* 9.31379418e-10f
        zmm5.d = 1f f- zmm2.d
        zmm0.d = zmm0.d f* zmm0.d
        zmm3.d = zmm3.d f* 3.05185094e-05f
        zmm0.d = zmm0.d f* 9.31379418e-10f
        zmm5.d = zmm5.d f- zmm1.d
        zmm4.d = zmm4.d f* 3.05185094e-05f
        zmm5.d = zmm5.d f- zmm0.d
        
        if (zmm5.d f< zmm6.d)
            zmm5 = zmm6
        else
            zmm5 = _mm_sqrt_ss(zmm5.d, zmm5.d)
    else if (r14.d != 1)
        if (r14.d == 3)
            zmm3 = zmm6
            zmm2 = zmm6
            zmm0 = zmm6
            zmm5 = zmm6
            zmm4 = zmm6
            zmm1 = zmm6
            
            if ((r15_1.b & 1) != 0)
                zmm3 = *rsi_1
                zmm5 = *(rsi_1 + 4)
                rsi_1 += 8
            
            if ((r15_1.b & 2) != 0)
                zmm2 = *rsi_1
                zmm4 = *(rsi_1 + 4)
                rsi_1 += 8
            
            if ((r15_1.b & 4) != 0)
                zmm0 = *rsi_1
                zmm1 = *(rsi_1 + 4)
            
            int32_t rcx_19 = *rdx_10
            zmm7.d = float.s((rcx_19 u>> 0x15) - 0x3ff)
            zmm7.d = zmm7.d f* 0.000977517106f
            zmm7.d = zmm7.d f* zmm5.d
            zmm7.d = zmm7.d f+ zmm3.d
            zmm3.d = float.s((rcx_19 u>> 0xa & 0x7ff) - 0x3ff)
            zmm3.d = zmm3.d f* 0.000977517106f
            zmm3.d = zmm3.d f* zmm4.d
            zmm4.d = float.s((rcx_19 & 0x3ff) - 0x1ff)
            zmm3.d = zmm3.d f+ zmm2.d
            zmm4.d = zmm4.d f* 0.00195694715f
            zmm4.d = zmm4.d f* zmm1.d
            zmm4.d = zmm4.d f+ zmm0.d
            goto label_141dfc68e
        
        int32_t* rax_53
        
        if (r14.d != 5)
            if (r14.d == 4)
                void var_b8
                rax_53, zmm6 = sub_141df1fe0(&var_b8, rdx_10)
                goto label_141dfc7a7
            
            if (r14.d != 6)
                sub_140af98a0("Unknown", 0x3e2, 
                    %i: unknown or unsupported animation compression format", zx.q(r14.d))
                sub_140afbb40()
            
            zmm5 = data_14399f720:0xc.d
            zmm4 = data_14399f720:8.d
            zmm3 = data_14399f720:4.d
            zmm7 = data_14399f720.d
        else
            int32_t var_c8[0x4]
            rax_53, zmm6 = sub_141df20c0(&var_c8, rdx_10)
        label_141dfc7a7:
            zmm1 = *rax_53
            int96_t var_f8_1 = zmm1.12
            zmm4 = var_f8_1:8.d
            zmm3 = var_f8_1:4.d
            zmm7 = var_f8_1.d
            zmm5 = _mm_shuffle_ps(zmm1, zmm1, 0xff)
    else
        zmm7 = *rdx_10
        zmm3 = *(rdx_10 + 4)
        zmm4 = *(rdx_10 + 8)
    label_141dfc68e:
        zmm0.d = zmm7.d f* zmm7.d
        zmm1.d = zmm3.d f* zmm3.d
        zmm2.d = 1f f- zmm0.d
        zmm0.d = zmm4.d f* zmm4.d
        zmm2.d = zmm2.d f- zmm1.d
        zmm2.d = zmm2.d f- zmm0.d
        
        if (zmm2.d f<= zmm6.d)
            zmm5 = zmm6
        else
            zmm5 = _mm_sqrt_ss(0, zmm2.d)
    
    int128_t zmm12 = arg_18
    uint128_t zmm8 = var_108
    uint128_t zmm10 = var_104
    uint128_t zmm11 = var_100
    zmm2.d = zmm8.d f* zmm7.d
    zmm0.d = zmm10.d f* zmm3.d
    zmm1.d = zmm11.d f* zmm4.d
    zmm2.d = zmm2.d f+ zmm0.d
    zmm2.d = zmm2.d f+ zmm1.d
    zmm1 = var_fc
    zmm0.d = zmm1.d f* zmm5.d
    zmm2.d = zmm2.d f+ zmm0.d
    
    if (zmm2.d f< zmm6.d)
        zmm0 = 0xbf800000
    else
        zmm0 = 0x3f800000
    
    rax_54 = arg1
    int128_t zmm9
    zmm9.d = 1f f- zmm12.d
    zmm7.d = zmm7.d f* zmm12.d
    zmm5.d = zmm5.d f* zmm12.d
    zmm9.d = zmm9.d f* zmm0.d
    zmm4.d = zmm4.d f* zmm12.d
    zmm1.d = zmm1.d f* zmm9.d
    zmm3.d = zmm3.d f* zmm12.d
    zmm5.d = zmm5.d f+ zmm1.d
    zmm8.d = zmm8.d f* zmm9.d
    zmm10.d = zmm10.d f* zmm9.d
    zmm7.d = zmm7.d f+ zmm8.d
    zmm11.d = zmm11.d f* zmm9.d
    zmm3.d = zmm3.d f+ zmm10.d
    zmm4.d = zmm4.d f+ zmm11.d
    _mm_shuffle_ps(zmm7, zmm7, 0xe1)
    zmm7.d = zmm3.d
    _mm_shuffle_ps(zmm7, zmm7, 0xc6)
    zmm7.d = zmm4.d
    _mm_shuffle_ps(zmm7, zmm7, 0x27)
    zmm7.d = zmm5.d
    zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0x39)
    *rax_54 = zmm7
    zmm5 = data_143f39360
    zmm1 = _mm_mul_ps(zmm7, zmm7)
    zmm1 = _mm_add_ps(zmm1, _mm_shuffle_ps(zmm1, zmm1, 0x4e))
    zmm4 = _mm_add_ps(_mm_shuffle_ps(zmm1, zmm1, 0x39), zmm1)
    zmm1 = _mm_rsqrt_ps(zmm4)
    zmm3 = _mm_mul_ps(zmm4, zmm5)
    zmm2 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(zmm1, zmm1), zmm3)), zmm1), 
        zmm1)
    zmm5 = _mm_mul_ps(
        _mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(zmm2, zmm2), zmm3)), zmm2), 
            zmm2), 
        zmm7)

*rax_54 = _mm_and_ps(zmm5 ^ data_143f39350, _mm_cmpeq_ps(data_143f393a0, zmm4, 2)) ^ data_143f39350
return rax_54
