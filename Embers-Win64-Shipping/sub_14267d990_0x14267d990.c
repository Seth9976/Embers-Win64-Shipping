// 函数: sub_14267d990
// 地址: 0x14267d990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t* rsi = arg3
int64_t* r12 = arg4
int64_t* r15 = arg2
float var_58[0x4] = arg6
float var_68[0x4] = arg7
float var_78[0x4] = arg8
float var_88[0x4] = arg9
float var_98[0x4] = arg10
float var_a8[0x4] = arg11
float var_b8[0x4] = arg12
float var_c8[0x4] = arg13
float var_d8[0x4] = arg14
(*(*arg1 + 0x260))()
int32_t rdi = 0
void* var_1f0 = nullptr
int64_t var_1e8 = 0
int32_t rbx = 0
void var_1dc
int64_t var_1c8
float var_1b8
float zmm0_1[0x4]
float zmm2[0x4]
float zmm3[0x4]
float zmm4_1[0x4]
float zmm5_1[0x4]

if (*sub_142230430(arg1, &var_1dc, arg5) == 3)
    int64_t* rcx_1 = arg1[0x1a]
    int64_t* var_128_1 = rcx_1
    void* rax_3 = &rcx_1[sx.q(arg1[0x1b].d)]
    
    if (rcx_1 != rax_3)
        char var_1a0
        char r12_1 = var_1a0
        int32_t var_1a4
        arg9 = var_1a4
        int32_t var_1a8
        arg10 = var_1a8
        int32_t var_1ac
        arg11 = var_1ac
        int32_t var_1b0
        arg12 = var_1b0
        int32_t var_1b4
        arg8 = var_1b4
        arg7 = var_1b8
        
        do
            int64_t* r15_1 = *rcx_1
            int64_t rax_5 = (*(*r15_1 + 0x58))(r15_1, &var_1dc)
            int64_t r8 = *(*r15_1 + 0x30)
            
            if ((*rax_5 & 2) == 0)
                int32_t temp5_1
                int32_t temp6_1
                temp5_1:temp6_1 = muls.dp.d(0x55555556, rbx)
                int64_t rax_26 = r8(r15_1)
                int64_t r14_6 = rax_26
                int32_t i_14 = (*(*r15_1 + 0x48))(r15_1)
                int64_t rax_27 = (*(*r15_1 + 0x50))(r15_1)
                int64_t r15_4 = rax_27
                int64_t var_198_2 = rax_27
                uint32_t rax_29 = i_14 * 3
                int32_t rdx_17 = rbx + rax_29
                
                if (rdx_17 s> rdi)
                    sub_1405dadb0(&var_1f0, rdx_17)
                    rdi = var_1e8:4.d
                    rbx = var_1e8.d
                
                int32_t rdx_19 = rsi[1].d + rax_29
                
                if (rdx_19 s> *(rsi + 0xc))
                    sub_1405dadb0(rsi, rdx_19)
                
                zmm0_1 = arg17[2]
                uint64_t i_12 = zx.q(i_14)
                arg5.o = zmm0_1
                arg5.o = _mm_shuffle_ps(arg5.o, zmm0_1, 0x55)
                arg5.d = arg5.d f* zmm0_1[0]
                var_1c8 = 0
                int32_t var_1c0_2 = 0
                arg5.d = arg5.d f* _mm_shuffle_ps(zmm0_1, zmm0_1, 0xaa)[0]
                
                if (i_12.d != 0)
                    uint64_t i_6 = i_12
                    int32_t var_1f8_4 = (temp5_1 u>> 0x1f) + temp5_1 + 1
                    arg5.d f- 0f
                    int32_t rax_32 = 1
                    
                    if (arg5.d f< 0f)
                        rax_32 = -1
                    
                    int32_t rax_33 = -1
                    
                    if (arg5.d f< 0f)
                        rax_33 = 1
                    
                    uint64_t i
                    
                    do
                        for (int64_t j = 0; j s< 3; )
                            zmm5_1 = *arg17
                            uint64_t rax_34 = zx.q(*(r15_4 + (j << 2)))
                            zmm3 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
                            arg5.o = zmm5_1
                            arg5.o = _mm_shuffle_ps(arg5.o, zmm5_1, 0xc9)
                            zmm5_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
                            uint64_t rcx_30 = rax_34 * 3
                            arg6 = __mulps_xmmps_memps(
                                _mm_unpacklo_ps(
                                    _mm_unpacklo_ps(*(r14_6 + (rcx_30 << 2)), 
                                        (*(r14_6 + (rcx_30 << 2) + 8))[0].q), 
                                    _mm_unpacklo_ps(*(r14_6 + (rcx_30 << 2) + 4), 0)[0].q), 
                                arg17[2])
                            zmm0_1 = _mm_shuffle_ps(arg6, arg6, 0xc9)
                            zmm4_1 = _mm_shuffle_ps(arg6, arg6, 0xd2)
                            zmm0_1 = _mm_mul_ps(zmm0_1, zmm3)
                            zmm4_1 = _mm_sub_ps(_mm_mul_ps(zmm4_1, arg5.o), zmm0_1)
                            zmm4_1 = _mm_add_ps(zmm4_1, zmm4_1)
                            zmm5_1 = _mm_mul_ps(zmm5_1, zmm4_1)
                            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0xd2), arg5.o)
                            zmm0_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xc9)
                            zmm5_1 = _mm_add_ps(zmm5_1, arg6)
                            var_1c8.o = __addps_xmmps_memps(
                                _mm_add_ps(_mm_sub_ps(zmm2, _mm_mul_ps(zmm0_1, zmm3)), zmm5_1), 
                                arg17[1])
                            arg6 = var_1c8.d
                            float var_1a4_2
                            
                            if (r12_1 == 0)
                                arg14 = var_1c8:4.d
                                arg11 = arg6
                                arg13 = var_1c0_2
                                arg10 = arg14
                                float var_1a8_4 = arg14[0]
                                arg8 = arg14
                                float var_1b4_4 = arg14[0]
                                arg12 = arg13
                                float var_1b0_4 = arg13[0]
                                arg7 = arg6
                                float var_1ac_4 = arg6[0]
                                r12_1 = 1
                                var_1b8 = arg6[0]
                                var_1a4_2 = arg13[0]
                                arg9 = arg13
                            else
                                if (not(arg7[0] <= arg6[0]))
                                    var_1b8 = arg6[0]
                                    arg7 = arg6
                                
                                arg14 = var_1c8:4.d
                                
                                if (not(arg8[0] <= arg14[0]))
                                    float var_1b4_3 = arg14[0]
                                    arg8 = arg14
                                
                                arg13 = var_1c0_2
                                
                                if (not(arg12[0] <= arg13[0]))
                                    float var_1b0_3 = arg13[0]
                                    arg12 = arg13
                                
                                if (not(arg11[0] >= arg6[0]))
                                    float var_1ac_3 = arg6[0]
                                    arg11 = arg6
                                
                                if (not(arg10[0] >= arg14[0]))
                                    float var_1a8_3 = arg14[0]
                                    arg10 = arg14
                                
                                if (not(arg9[0] >= arg13[0]))
                                    var_1a4_2 = arg13[0]
                                    arg9 = arg13
                            int32_t r14_7 = rbx + 1
                            var_1e8.d = r14_7
                            
                            if (r14_7 s> rdi)
                                sub_1406105e0(&var_1f0)
                                rdi = var_1e8:4.d
                                r14_7 = var_1e8.d
                            
                            int32_t r15_5 = r14_7 + 1
                            var_1e8.d = r15_5
                            *(var_1f0 + (sx.q(rbx) << 2)) = arg6[0]
                            
                            if (r15_5 s> rdi)
                                sub_1406105e0(&var_1f0)
                                rdi = var_1e8:4.d
                                r15_5 = var_1e8.d
                            
                            rbx = r15_5 + 1
                            var_1e8.d = rbx
                            *(var_1f0 + (sx.q(r14_7) << 2)) = arg14[0]
                            
                            if (rbx s> rdi)
                                sub_1406105e0(&var_1f0)
                                rdi = var_1e8:4.d
                                rbx = var_1e8.d
                            
                            j += 1
                            r14_6 = rax_26
                            r15_4 = var_198_2
                            *(var_1f0 + (sx.q(r15_5) << 2)) = arg13[0]
                        
                        rsi = arg3
                        r15_4 += 0xc
                        char var_1a0_2 = r12_1
                        var_198_2 = r15_4
                        int64_t r14_8 = sx.q(rsi[1].d)
                        int32_t rax_38 = (r14_8 + 1).d
                        rsi[1].d = rax_38
                        
                        if (rax_38 s> *(rsi + 0xc))
                            sub_1405a4cf0(rsi)
                        
                        int32_t r8_7 = var_1f8_4
                        *(*rsi + (r14_8 << 2)) = rax_32 + r8_7
                        int64_t r14_9 = sx.q(rsi[1].d)
                        int32_t rax_40 = (r14_9 + 1).d
                        rsi[1].d = rax_40
                        
                        if (rax_40 s> *(rsi + 0xc))
                            sub_1405a4cf0(rsi)
                            r8_7 = var_1f8_4
                        
                        *(*rsi + (r14_9 << 2)) = r8_7
                        int64_t r14_10 = sx.q(rsi[1].d)
                        int32_t rax_42 = (r14_10 + 1).d
                        rsi[1].d = rax_42
                        
                        if (rax_42 s> *(rsi + 0xc))
                            sub_1405a4cf0(rsi)
                            r8_7 = var_1f8_4
                        
                        i = i_6
                        i_6 -= 1
                        var_1f8_4 = r8_7 + 3
                        *(*rsi + (r14_10 << 2)) = rax_33 + r8_7
                        r14_6 = rax_26
                    while (i != 1)
            else
                int32_t temp7_1
                int32_t temp8_1
                temp7_1:temp8_1 = muls.dp.d(0x55555556, rbx)
                int64_t rax_7 = r8(r15_1)
                int64_t r14_1 = rax_7
                int32_t i_13 = (*(*r15_1 + 0x48))(r15_1)
                int64_t rax_8 = (*(*r15_1 + 0x50))(r15_1)
                int64_t r15_2 = rax_8
                int64_t var_198_1 = rax_8
                uint32_t rax_10 = i_13 * 3
                int32_t rdx_3 = rbx + rax_10
                
                if (rdx_3 s> rdi)
                    sub_1405dadb0(&var_1f0, rdx_3)
                    rdi = var_1e8:4.d
                    rbx = var_1e8.d
                
                int32_t rdx_5 = rsi[1].d + rax_10
                
                if (rdx_5 s> *(rsi + 0xc))
                    sub_1405dadb0(rsi, rdx_5)
                
                zmm0_1 = arg17[2]
                uint64_t i_11 = zx.q(i_13)
                arg5.o = zmm0_1
                arg5.o = _mm_shuffle_ps(arg5.o, zmm0_1, 0x55)
                arg5.d = arg5.d f* zmm0_1[0]
                var_1c8 = 0
                int32_t var_1c0_1 = 0
                arg5.d = arg5.d f* _mm_shuffle_ps(zmm0_1, zmm0_1, 0xaa)[0]
                
                if (i_11.d != 0)
                    uint64_t i_5 = i_11
                    int32_t var_1f8_2 = (temp7_1 u>> 0x1f) + temp7_1 + 1
                    arg5.d f- 0f
                    int32_t rax_13 = 1
                    
                    if (arg5.d f< 0f)
                        rax_13 = -1
                    
                    int32_t rax_14 = -1
                    
                    if (arg5.d f< 0f)
                        rax_14 = 1
                    
                    uint64_t i_1
                    
                    do
                        for (int64_t j_1 = 0; j_1 s< 3; )
                            zmm5_1 = *arg17
                            uint64_t rax_15 = zx.q(*(r15_2 + (j_1 << 1)))
                            zmm3 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
                            arg5.o = zmm5_1
                            arg5.o = _mm_shuffle_ps(arg5.o, zmm5_1, 0xc9)
                            zmm5_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
                            uint64_t rcx_12 = rax_15 * 3
                            arg6 = __mulps_xmmps_memps(
                                _mm_unpacklo_ps(
                                    _mm_unpacklo_ps(*(r14_1 + (rcx_12 << 2)), 
                                        (*(r14_1 + (rcx_12 << 2) + 8))[0].q), 
                                    _mm_unpacklo_ps(*(r14_1 + (rcx_12 << 2) + 4), 0)[0].q), 
                                arg17[2])
                            zmm0_1 = _mm_shuffle_ps(arg6, arg6, 0xc9)
                            zmm4_1 = _mm_shuffle_ps(arg6, arg6, 0xd2)
                            zmm0_1 = _mm_mul_ps(zmm0_1, zmm3)
                            zmm4_1 = _mm_sub_ps(_mm_mul_ps(zmm4_1, arg5.o), zmm0_1)
                            zmm4_1 = _mm_add_ps(zmm4_1, zmm4_1)
                            zmm5_1 = _mm_mul_ps(zmm5_1, zmm4_1)
                            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0xd2), arg5.o)
                            zmm0_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xc9)
                            zmm5_1 = _mm_add_ps(zmm5_1, arg6)
                            var_1c8.o = __addps_xmmps_memps(
                                _mm_add_ps(_mm_sub_ps(zmm2, _mm_mul_ps(zmm0_1, zmm3)), zmm5_1), 
                                arg17[1])
                            arg6 = var_1c8.d
                            float var_1a4_1
                            
                            if (r12_1 == 0)
                                arg14 = var_1c8:4.d
                                arg11 = arg6
                                arg13 = var_1c0_1
                                arg10 = arg14
                                float var_1a8_2 = arg14[0]
                                arg8 = arg14
                                float var_1b4_2 = arg14[0]
                                arg12 = arg13
                                float var_1b0_2 = arg13[0]
                                arg7 = arg6
                                float var_1ac_2 = arg6[0]
                                r12_1 = 1
                                var_1b8 = arg6[0]
                                var_1a4_1 = arg13[0]
                                arg9 = arg13
                            else
                                if (not(arg7[0] <= arg6[0]))
                                    var_1b8 = arg6[0]
                                    arg7 = arg6
                                
                                arg14 = var_1c8:4.d
                                
                                if (not(arg8[0] <= arg14[0]))
                                    float var_1b4_1 = arg14[0]
                                    arg8 = arg14
                                
                                arg13 = var_1c0_1
                                
                                if (not(arg12[0] <= arg13[0]))
                                    float var_1b0_1 = arg13[0]
                                    arg12 = arg13
                                
                                if (not(arg11[0] >= arg6[0]))
                                    float var_1ac_1 = arg6[0]
                                    arg11 = arg6
                                
                                if (not(arg10[0] >= arg14[0]))
                                    float var_1a8_1 = arg14[0]
                                    arg10 = arg14
                                
                                if (not(arg9[0] >= arg13[0]))
                                    var_1a4_1 = arg13[0]
                                    arg9 = arg13
                            int32_t r14_2 = rbx + 1
                            var_1e8.d = r14_2
                            
                            if (r14_2 s> rdi)
                                sub_1406105e0(&var_1f0)
                                rdi = var_1e8:4.d
                                r14_2 = var_1e8.d
                            
                            int32_t r15_3 = r14_2 + 1
                            var_1e8.d = r15_3
                            *(var_1f0 + (sx.q(rbx) << 2)) = arg6[0]
                            
                            if (r15_3 s> rdi)
                                sub_1406105e0(&var_1f0)
                                rdi = var_1e8:4.d
                                r15_3 = var_1e8.d
                            
                            rbx = r15_3 + 1
                            var_1e8.d = rbx
                            *(var_1f0 + (sx.q(r14_2) << 2)) = arg14[0]
                            
                            if (rbx s> rdi)
                                sub_1406105e0(&var_1f0)
                                rdi = var_1e8:4.d
                                rbx = var_1e8.d
                            
                            j_1 += 1
                            r14_1 = rax_7
                            r15_2 = var_198_1
                            *(var_1f0 + (sx.q(r15_3) << 2)) = arg13[0]
                        
                        rsi = arg3
                        r15_2 += 6
                        char var_1a0_1 = r12_1
                        var_198_1 = r15_2
                        int64_t r14_3 = sx.q(rsi[1].d)
                        int32_t rax_19 = (r14_3 + 1).d
                        rsi[1].d = rax_19
                        
                        if (rax_19 s> *(rsi + 0xc))
                            sub_1405a4cf0(rsi)
                        
                        int32_t r8_3 = var_1f8_2
                        *(*rsi + (r14_3 << 2)) = rax_13 + r8_3
                        int64_t r14_4 = sx.q(rsi[1].d)
                        int32_t rax_21 = (r14_4 + 1).d
                        rsi[1].d = rax_21
                        
                        if (rax_21 s> *(rsi + 0xc))
                            sub_1405a4cf0(rsi)
                            r8_3 = var_1f8_2
                        
                        *(*rsi + (r14_4 << 2)) = r8_3
                        int64_t r14_5 = sx.q(rsi[1].d)
                        int32_t rax_23 = (r14_5 + 1).d
                        rsi[1].d = rax_23
                        
                        if (rax_23 s> *(rsi + 0xc))
                            sub_1405a4cf0(rsi)
                            r8_3 = var_1f8_2
                        
                        i_1 = i_5
                        i_5 -= 1
                        var_1f8_2 = r8_3 + 3
                        *(*rsi + (r14_5 << 2)) = rax_14 + r8_3
                        r14_1 = rax_7
                    while (i_1 != 1)
            
            rcx_1 = &var_128_1[1]
            var_128_1 = rcx_1
        while (rcx_1 != rax_3)
        
        r12 = arg4
        r15 = arg2

int32_t rdx_32 = rbx s/ 3 + r15[1].d

if (rdx_32 s> *(r15 + 0xc))
    sub_140638cc0(r15, rdx_32)

void* var_188

if (rbx s> 0)
    void* rsi_2 = var_1f0 + 8
    uint64_t i_9 = zx.q((rbx - 1) u/ 3 + 1)
    uint64_t i_2
    
    do
        int64_t rbx_1 = sx.q(r15[1].d)
        arg5.o = *(rsi_2 - 4)
        var_188.d = (*(rsi_2 - 8))[0]
        int32_t rax_47 = (rbx_1 + 1).d
        var_188:4.d = arg5.d
        float var_180_1 = (*rsi_2)[0]
        r15[1].d = rax_47
        
        if (rax_47 s> *(r15 + 0xc))
            sub_140638a00(r15)
        
        int64_t rcx_44 = *r15
        int64_t rdx_36 = rbx_1 * 3
        rsi_2 += 0xc
        *(rcx_44 + (rdx_36 << 2)) = var_188
        *(rcx_44 + (rdx_36 << 2) + 8) = var_180_1
        i_2 = i_9
        i_9 -= 1
    while (i_2 != 1)

int32_t rsi_6 = r12[1].d
var_1e8.d = 0

if (rdi s< 0 && rdi != 0)
    sub_1405dadb0(&var_1f0, 0)

int64_t* rcx_55 = arg1
int32_t i_10 = rcx_55[0xc].d
void* rbx_2 = rcx_55[0xb]
arg13 = data_14399f720
arg8 = data_142fc92c0
arg9 = _mm_unpacklo_ps(_mm_unpacklo_ps(data_143dbb1f8, data_143dbb200[0].q), 
    _mm_unpacklo_ps(data_143dbb1fc, 0)[0].q)
var_188.o = arg9

if (i_10 s> 0)
    uint64_t i_8 = zx.q(i_10)
    uint64_t i_3
    
    do
        int64_t r14_11 = sx.q(arg16[1].d)
        int32_t rax_49 = (r14_11 + 1).d
        arg16[1].d = rax_49
        
        if (rax_49 s> *(arg16 + 0xc))
            sub_1405a4cf0(arg16)
        
        *(*arg16 + (r14_11 << 2)) = var_1e8.d s/ 3
        int64_t rax_51 = sub_140a54cc0(rbx_2)
        int64_t rax_52
        
        if (rax_51 == 0)
            rax_52 = Concurrency::details::VirtualProcessor::GetExecutingContext(rbx_2)
        
        int64_t* rax_54
        int128_t* rdx_40
        
        if (rax_51 != 0 || rax_52 == 0)
            rax_54 = sub_140a54cc0(rbx_2)
            rdx_40 = arg17
        else
            arg7 = arg17[2]
            arg6 = *arg17
            float var_118[0x4]
            
            if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(arg8, arg7), data_143f71890, 1)) == 0)
                zmm0_1 = _mm_shuffle_ps(arg6, arg6, 0)
                zmm5_1 = _mm_shuffle_ps(arg6, arg6, 0xff)
                arg5.o = arg13
                zmm3 = _mm_mul_ps(_mm_shuffle_ps(arg13, arg13, 0x1b), zmm0_1)
                arg5.o = _mm_shuffle_ps(arg5.o, arg13, 0x4e)
                zmm0_1 = _mm_mul_ps(zmm5_1, arg13)
                zmm3 = __mulps_xmmps_memps(zmm3, data_143f71850)
                zmm2 = _mm_shuffle_ps(arg13, arg13, 0xb1)
                zmm4_1 = _mm_mul_ps(arg7, arg9)
                zmm3 = _mm_add_ps(zmm3, zmm0_1)
                arg7 = _mm_mul_ps(arg7, arg8)
                arg5.o = _mm_mul_ps(arg5.o, _mm_shuffle_ps(arg6, arg6, 0x55))
                zmm2 = _mm_mul_ps(zmm2, _mm_shuffle_ps(arg6, arg6, 0xaa))
                arg5.o = __mulps_xmmps_memps(arg5.o, data_143f71840)
                zmm0_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xc9)
                zmm2 = __mulps_xmmps_memps(zmm2, data_143f71830)
                float var_f8_2[0x4] = arg7
                zmm3 = _mm_add_ps(_mm_add_ps(zmm3, arg5.o), zmm2)
                zmm2 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xd2)
                var_118 = zmm3
                zmm3 = _mm_shuffle_ps(arg6, arg6, 0xd2)
                zmm0_1 = _mm_mul_ps(zmm0_1, zmm3)
                arg6 = _mm_shuffle_ps(arg6, arg6, 0xc9)
                zmm2 = _mm_sub_ps(_mm_mul_ps(zmm2, arg6), zmm0_1)
                zmm2 = _mm_add_ps(zmm2, zmm2)
                arg5.o = zmm2
                zmm5_1 = _mm_mul_ps(zmm5_1, zmm2)
                arg5.o = _mm_shuffle_ps(arg5.o, zmm2, 0xd2)
                arg5.o = _mm_mul_ps(arg5.o, arg6)
                zmm0_1 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
                zmm5_1 = _mm_add_ps(zmm5_1, zmm4_1)
                arg5.o = _mm_sub_ps(arg5.o, _mm_mul_ps(zmm0_1, zmm3))
                arg5.o = _mm_add_ps(arg5.o, zmm5_1)
                arg5.o = __addps_xmmps_memps(arg5.o, arg17[1])
                int128_t var_108_2 = arg5.o
                rax_54 = Concurrency::details::VirtualProcessor::GetExecutingContext(rbx_2)
                rdx_40 = &var_118
            else
                arg10 = data_143f717b0
                zmm0_1 = _mm_shuffle_ps(arg6, arg6, 4)
                zmm2 = _mm_add_ps(arg6, arg6)
                zmm4_1 = _mm_shuffle_ps(arg7, arg7, 0xc9)
                arg12 = arg8
                arg8 = arg17[1]
                _mm_mul_ps(arg12, arg7)
                arg5.o = zmm2
                arg5.o = _mm_shuffle_ps(arg5.o, zmm2, 0x29)
                arg5.o = _mm_mul_ps(arg5.o, zmm0_1)
                zmm3 = _mm_mul_ps(zmm2, arg6)
                zmm2 =
                    _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x12), _mm_shuffle_ps(arg6, arg6, 0xff))
                zmm0_1 = _mm_add_ps(_mm_shuffle_ps(zmm3, zmm3, 0x1a), _mm_shuffle_ps(zmm3, zmm3, 1))
                arg11 = _mm_add_ps(zmm2, arg5.o)
                arg5.o = _mm_sub_ps(arg5.o, zmm2)
                zmm2 = _mm_shuffle_ps(arg13, arg13, 4)
                arg11 = _mm_mul_ps(arg11, arg7)
                zmm4_1 = _mm_mul_ps(zmm4_1, arg5.o)
                arg5.o = arg10
                arg5.o = _mm_sub_ps(arg5.o, zmm0_1)
                arg5.o = _mm_mul_ps(arg5.o, arg7)
                arg5.o = __andps_xmmxud_memxud(arg5.o, data_143f717c0)
                zmm0_1 = _mm_shuffle_ps(zmm4_1, arg5.o, 0x32)
                arg9 = _mm_shuffle_ps(_mm_shuffle_ps(arg11, arg5.o, 0), zmm0_1, 0x82)
                zmm0_1 = _mm_shuffle_ps(arg11, arg5.o, 0x31)
                arg7 = _mm_shuffle_ps(_mm_shuffle_ps(zmm4_1, arg5.o, 0x10), zmm0_1, 0x88)
                arg11 = _mm_shuffle_ps(_mm_shuffle_ps(arg11, zmm4_1, 0x12), arg5.o, 0xe8)
                arg5.o = arg13
                arg5.o = _mm_add_ps(arg5.o, arg13)
                arg10[0].q = arg8 u>> 0x40
                arg8 = _mm_shuffle_ps(arg8, arg10, 0xc4)
                zmm3 = _mm_mul_ps(arg13, arg5.o)
                zmm2 = _mm_mul_ps(zmm2, _mm_shuffle_ps(arg5.o, arg5.o, 0x29))
                zmm0_1 = _mm_shuffle_ps(arg13, arg13, 0xff)
                arg5.o = _mm_shuffle_ps(arg5.o, arg5.o, 0x12)
                zmm0_1 = _mm_mul_ps(zmm0_1, arg5.o)
                arg5.o = data_142fc92c0
                zmm4_1 = _mm_shuffle_ps(arg5.o, arg5.o, 0xc9)
                arg6 = _mm_add_ps(zmm0_1, zmm2)
                zmm2 = _mm_sub_ps(zmm2, zmm0_1)
                zmm0_1 = _mm_add_ps(_mm_shuffle_ps(zmm3, zmm3, 0x1a), _mm_shuffle_ps(zmm3, zmm3, 1))
                arg6 = _mm_mul_ps(arg6, arg5.o)
                arg5.o = arg10
                zmm4_1 = _mm_mul_ps(zmm4_1, zmm2)
                arg5.o = _mm_sub_ps(arg5.o, zmm0_1)
                arg5.o = __mulps_xmmps_memps(arg5.o, data_142fc92c0)
                arg5.o = __andps_xmmxud_memxud(arg5.o, data_143f717c0)
                zmm0_1 = _mm_shuffle_ps(zmm4_1, arg5.o, 0x32)
                zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(arg6, arg5.o, 0), zmm0_1, 0x82)
                zmm5_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm4_1, arg5.o, 0x10), 
                    _mm_shuffle_ps(arg6, arg5.o, 0x31), 0x88)
                zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0x55), arg7)
                arg6 = _mm_shuffle_ps(arg6, zmm4_1, 0x12)
                zmm4_1 = var_188.o
                arg6 = _mm_shuffle_ps(arg6, arg5.o, 0xe8)
                arg5.o = zmm3
                arg5.o = _mm_shuffle_ps(arg5.o, zmm3, 0xaa)
                arg5.o = _mm_mul_ps(arg5.o, arg11)
                arg10[0].q = zmm4_1 u>> 0x40
                zmm4_1 = _mm_shuffle_ps(zmm4_1, arg10, 0xc4)
                zmm0_1 = _mm_shuffle_ps(zmm3, zmm3, 0)
                zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xff), arg8)
                zmm2 = _mm_add_ps(zmm2, _mm_mul_ps(zmm0_1, arg9))
                zmm0_1 = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0), arg9)
                zmm2 = _mm_add_ps(zmm2, arg5.o)
                arg5.o = zmm5_1
                arg5.o = _mm_shuffle_ps(arg5.o, zmm5_1, 0xaa)
                arg5.o = _mm_mul_ps(arg5.o, arg11)
                zmm2 = _mm_add_ps(zmm2, zmm3)
                zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0x55), arg7)
                zmm5_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
                float var_168[0x4] = zmm2
                zmm2 = _mm_shuffle_ps(arg6, arg6, 0x55)
                zmm3 = _mm_add_ps(zmm3, zmm0_1)
                zmm2 = _mm_mul_ps(zmm2, arg7)
                zmm5_1 = _mm_mul_ps(zmm5_1, arg8)
                zmm0_1 = _mm_shuffle_ps(arg6, arg6, 0)
                zmm3 = _mm_add_ps(zmm3, arg5.o)
                zmm0_1 = _mm_mul_ps(zmm0_1, arg9)
                arg5.o = arg6
                arg5.o = _mm_shuffle_ps(arg5.o, arg6, 0xaa)
                arg5.o = _mm_mul_ps(arg5.o, arg11)
                zmm3 = _mm_add_ps(zmm3, zmm5_1)
                arg6 = _mm_shuffle_ps(arg6, arg6, 0xff)
                zmm2 = _mm_add_ps(zmm2, zmm0_1)
                arg6 = _mm_mul_ps(arg6, arg8)
                zmm0_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0)
                int96_t var_158_1 = zmm3[0].12
                zmm3 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
                zmm2 = _mm_add_ps(zmm2, arg5.o)
                zmm3 = _mm_mul_ps(zmm3, arg7)
                arg5.o = zmm4_1
                arg5.o = _mm_shuffle_ps(arg5.o, zmm4_1, 0xaa)
                arg5.o = _mm_mul_ps(arg5.o, arg11)
                zmm0_1 = _mm_mul_ps(zmm0_1, arg9)
                zmm2 = _mm_add_ps(zmm2, arg6)
                zmm4_1 = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0xff), arg8)
                zmm3 = _mm_add_ps(zmm3, zmm0_1)
                int96_t var_148_1 = zmm2[0].12
                zmm3 = _mm_add_ps(zmm3, arg5.o)
                arg5.o = 0x322bcc77
                int96_t var_138_1 = _mm_add_ps(zmm3, zmm4_1)[0].12
                int512_t zmm8
                int64_t zmm15_1
                zmm8, arg10, arg12, arg13, arg14, zmm15_1 = sub_1407740e0(&var_168, arg5.o)
                float zmm2_1[0x4] = var_168[0]
                float zmm1 = var_168[1]
                arg14 = _mm_and_ps(_mm_cmpeq_ps(arg14, arg12, 2), data_143f71880 ^ arg10)
                uint32_t zmm0_2[0x4] = var_168[2]
                arg14 ^= data_143f71880
                zmm2_1[0] = zmm2_1[0] * arg14[0]
                zmm1 = zmm1 * arg14[0]
                zmm0_2[0] = zmm0_2[0] f* arg14[0]
                var_168[0] = zmm2_1[0]
                zmm2_1 = _mm_shuffle_ps(arg14, arg14, 0x55)
                var_168[2] = zmm0_2[0]
                zmm0_2 = var_158_1:8.d
                zmm0_2[0] = zmm0_2[0] f* zmm2_1[0]
                var_168[1] = zmm1
                zmm1 = var_158_1:4.d * zmm2_1[0]
                float zmm3_1 = var_158_1.d * zmm2_1[0]
                zmm2_1 = var_148_1.d
                var_158_1:8.d = zmm0_2[0]
                zmm0_2 = var_148_1:8.d
                var_158_1:4.d = zmm1
                arg14 = _mm_shuffle_ps(arg14, arg14, 0xaa)
                zmm0_2[0] = zmm0_2[0] f* arg14[0]
                zmm2_1[0] = zmm2_1[0] * arg14[0]
                zmm1 = var_148_1:4.d * arg14[0]
                var_148_1:8.d = zmm0_2[0]
                var_158_1.d = zmm3_1
                var_148_1.d = zmm2_1[0]
                var_148_1:4.d = zmm1
                sub_14077e4a0(&var_1c8, &var_168)
                float zmm5_2[0x4] = var_1c8.o
                float zmm6[0x4] = data_143f71870
                arg5.o = zmm5_2
                zmm8.o = data_142fc92c0
                arg9 = var_188.o
                arg5.o = _mm_mul_ps(arg5.o, zmm5_2)
                int64_t* arg_10
                arg_10.d = 0x322bcc77
                float var_f8_1[0x4] = arg12
                arg5.o = _mm_add_ps(arg5.o, _mm_shuffle_ps(arg5.o, arg5.o, 0x4e))
                float zmm4_2[0x4] = _mm_add_ps(_mm_shuffle_ps(arg5.o, arg5.o, 0x39), arg5.o)
                arg5.o = _mm_rsqrt_ps(zmm4_2)
                float zmm3_2[0x4] = _mm_mul_ps(zmm4_2, zmm6)
                float zmm2_2[0x4] = _mm_add_ps(
                    _mm_mul_ps(_mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(arg5.o, arg5.o), zmm3_2)), 
                        arg5.o), 
                    arg5.o)
                zmm6 = _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(zmm2_2, zmm2_2), zmm3_2))
                float zmm0_3[0x4] =
                    _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_2, 2)
                zmm6 = _mm_add_ps(_mm_mul_ps(zmm6, zmm2_2), zmm2_2)
                zmm2_2 = _mm_unpacklo_ps(var_138_1:4.d, zmm15_1)
                zmm6 =
                    _mm_and_ps(_mm_mul_ps(zmm6, zmm5_2) ^ data_143f71860, zmm0_3) ^ data_143f71860
                float var_108_1[0x4] =
                    _mm_unpacklo_ps(_mm_unpacklo_ps(var_138_1.d, var_138_1:8.d[0].q), zmm2_2[0].q)
                var_1c8.o = zmm6
                var_118 = zmm6
                rax_54 = Concurrency::details::VirtualProcessor::GetExecutingContext(rbx_2)
                rdx_40 = &var_118
        
        arg5, arg8 = sub_14267b990(rax_54, rdx_40, &var_1f0, arg15, arg5.o, &var_1b8)
        rbx_2 += 0xb0
        i_3 = i_8
        i_8 -= 1
    while (i_3 != 1)
    r12 = arg4
    rcx_55 = arg1

sub_14267ca60(&rcx_55[5], &var_1f0, arg15, arg16, &var_1b8, arg17, rsi_6)
sub_142680550(&rcx_55[5], &var_1f0, arg15, arg16, &var_1b8, arg17, rsi_6)
int512_t zmm6_1
int512_t zmm7
int512_t zmm8_1
int512_t zmm9
int512_t zmm10
int512_t zmm11
int512_t zmm12
int512_t zmm13
int512_t zmm14
zmm6_1, zmm7, zmm8_1, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14 =
    sub_14267f940(&rcx_55[5], &var_1f0, arg15, arg16, &var_1b8, arg17, rsi_6)
int32_t rdi_2 = var_1e8.d
zmm14.o = var_d8
zmm13.o = var_c8
zmm12.o = var_b8
zmm11.o = var_a8
zmm10.o = var_98
zmm9.o = var_88
zmm8_1.o = var_78
zmm7.o = var_68
zmm6_1.o = var_58
int32_t temp9
int32_t temp10
temp9:temp10 = muls.dp.d(0x55555556, rdi_2)
uint32_t result = temp9 u>> 0x1f
int32_t rdx_46 = rdi_2 s/ 3 + r12[1].d

if (rdx_46 s> *(r12 + 0xc))
    result = sub_140638cc0(r12, rdx_46)

void* r14_12 = var_1f0

if (rdi_2 s> 0)
    void* rbx_4 = r14_12 + 8
    uint64_t i_7 = zx.q((rdi_2 - 1) u/ 3 + 1)
    uint64_t i_4
    
    do
        int64_t rdi_3 = sx.q(r12[1].d)
        var_188.d = (*(rbx_4 - 8)).d
        int32_t rax_57 = (rdi_3 + 1).d
        var_188:4.d = *(rbx_4 - 4)
        uint32_t result_1 = (*rbx_4).d
        r12[1].d = rax_57
        
        if (rax_57 s> *(r12 + 0xc))
            sub_140638a00(r12)
        
        int64_t rdx_50 = *r12
        int64_t r8_13 = rdi_3 * 3
        rbx_4 += 0xc
        result = result_1
        *(rdx_50 + (r8_13 << 2)) = var_188
        *(rdx_50 + (r8_13 << 2) + 8) = result
        i_4 = i_7
        i_7 -= 1
    while (i_4 != 1)

if (r14_12 == 0)
    return result

return sub_140a74f90(r14_12)
