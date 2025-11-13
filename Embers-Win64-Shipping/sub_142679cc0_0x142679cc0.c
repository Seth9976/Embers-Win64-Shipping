// 函数: sub_142679cc0
// 地址: 0x142679cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm1
zmm1.o = zx.o(data_143dbb1f8.q)
int64_t rbx
rbx.b = 0
int32_t var_1bc = 0x3f800000
uint32_t r14 = 0
void** const var_1f8 = &data_143459b08
int32_t rax = data_143dbb200
int32_t var_1b0 = rax
int64_t var_1ac = (zmm1.o).q
uint64_t var_1e8
__builtin_memset(&var_1e8, 0, 0x21)
int64_t var_1c4 = 0
int32_t var_1a4 = rax
uint128_t zmm0
zmm0.q = (zmm1.o).q
*(arg2 + 0x30) = zmm0
uint128_t var_1b8 = zmm0
*(arg2 + 0x40) = var_1ac
*(arg2 + 0x48) = 0.d
int64_t var_1e0_1
uint64_t var_1d8

if (arg1 != 0)
    void* rax_2 = sub_142577430()
    void* rdx = arg1[2]
    int64_t rax_3 = sx.q(*(rax_2 + 0x38))
    
    if (rax_3.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_3 << 3)) == rax_2 + 0x30
            && (*(*arg1 + 0x3e0))(arg1, rdx) != 0)
        char rax_7 = *(arg1 + 0x20f)
        
        if (rax_7 != 3)
            if (rax_7 != 0)
                rbx = 0
                
                if ((*(*arg1 + 0x858))(arg1, &var_1f8) == 0)
                    rbx = 1
            
            int64_t* rax_11 = (*(*arg1 + 0x690))(arg1)
            int64_t* r15_1 = rax_11
            
            if (rax_11 != 0)
                if (rbx.b == 0)
                    int64_t rdx_2 = *rax_11
                    float var_78_1[0x4] = arg5
                    (*(rdx_2 + 0x260))(rax_11, rdx_2)
                    TEB* gsbase
                    
                    if (data_143f71978 s> *(0x14
                            + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                        _Init_thread_header(&data_143f71978)
                        
                        if (data_143f71978 == 0xffffffff)
                            data_143f71968 = 0
                            data_143f71970 = 0
                            atexit(&data_142d123e0)
                            _Init_thread_footer(&data_143f71978)
                    
                    float var_58_1[0x4] = arg3
                    float var_68_1[0x4] = arg4
                    int32_t arg_8
                    float zmm0_1[0x4]
                    float zmm2[0x4]
                    float zmm3[0x4]
                    float zmm4_1[0x4]
                    float zmm5_1[0x4]
                    
                    if (*sub_142230430(r15_1, &arg_8, zmm1) == 3)
                        int64_t* rcx_8 = r15_1[0x1a]
                        int64_t* var_138_1 = rcx_8
                        void* rax_16 = &rcx_8[sx.q(r15_1[0x1b].d)]
                        
                        if (rcx_8 != rax_16)
                            do
                                int64_t* rbx_1 = *rcx_8
                                int64_t var_1d0_1
                                int32_t arg_18
                                
                                if ((*(*(*rbx_1 + 0x58))(rbx_1, &arg_8) & 2) == 0)
                                    int64_t rax_41 = (*(*rbx_1 + 0x30))(rbx_1)
                                    int32_t rax_42 = (*(*rbx_1 + 0x48))(rbx_1)
                                    uint64_t r13_4 = zx.q(rax_42)
                                    int32_t rbx_8 = (r13_4 << 1).d + r13_4.d
                                    int64_t r12_2 = (*(*rbx_1 + 0x50))(rbx_1)
                                    int32_t rdx_24 = var_1e0_1.d + rbx_8
                                    
                                    if (rdx_24 s> var_1e0_1:4.d)
                                        sub_1405dadb0(&var_1e8, rdx_24)
                                    
                                    int32_t rdx_26 = var_1d0_1.d + rbx_8
                                    
                                    if (rdx_26 s> var_1d0_1:4.d)
                                        sub_1405dadb0(&var_1d8, rdx_26)
                                    
                                    zmm0_1 = *(arg1 + 0x1e0)
                                    zmm1.o = zmm0_1
                                    var_1b8.q = 0
                                    zmm1.o = _mm_shuffle_ps(zmm1.o, zmm0_1, 0x55)
                                    zmm1.d = zmm1.d f* zmm0_1[0]
                                    int32_t var_1b0_2 = 0
                                    zmm1.d = zmm1.d f* _mm_shuffle_ps(zmm0_1, zmm0_1, 0xaa)[0]
                                    zmm1.d f- 0f
                                    int64_t rax_43
                                    rax_43.b = zmm1.d f< 0f
                                    
                                    if (r13_4.d != 0)
                                        int32_t r13_6 = var_1e0_1.d s/ 3 + 1
                                        arg_18.q = zx.q(rax_42)
                                        int64_t i
                                        
                                        do
                                            for (int64_t j = 0; j s< 3; )
                                                bool cond:2_1 = *(arg2 + 0x48) == 0
                                                zmm4_1 = *(arg1 + 0x1c0)
                                                uint64_t rax_47 = zx.q(*(r12_2 + (j << 2)))
                                                zmm3 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xc9)
                                                zmm1.o = zmm4_1
                                                zmm1.o = _mm_shuffle_ps(zmm1.o, zmm4_1, 0xd2)
                                                zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xff)
                                                uint64_t rcx_39 = rax_47 * 3
                                                zmm5_1 = __mulps_xmmps_memps(
                                                    _mm_unpacklo_ps(
                                                        _mm_unpacklo_ps(*(rax_41 + (rcx_39 << 2)), 
                                                            (*(rax_41 + (rcx_39 << 2) + 8))[0].q), 
                                                        _mm_unpacklo_ps(
                                                        *(rax_41 + (rcx_39 << 2) + 4), 0)[0].q), 
                                                    *(arg1 + 0x1e0))
                                                zmm0_1 = _mm_mul_ps(
                                                    _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9), zmm1.o)
                                                zmm2 = _mm_sub_ps(
                                                    _mm_mul_ps(
                                                        _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2), 
                                                        zmm3), 
                                                    zmm0_1)
                                                zmm2 = _mm_add_ps(zmm2, zmm2)
                                                zmm4_1 = _mm_mul_ps(zmm4_1, zmm2)
                                                zmm0_1 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
                                                arg3 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xd2), 
                                                    zmm3)
                                                zmm0_1 = _mm_mul_ps(zmm0_1, zmm1.o)
                                                zmm4_1 = _mm_add_ps(zmm4_1, zmm5_1)
                                                arg3 = __addps_xmmps_memps(
                                                    _mm_add_ps(_mm_sub_ps(arg3, zmm0_1), zmm4_1), 
                                                    *(arg1 + 0x1d0))
                                                int96_t var_198
                                                var_198.d = arg3[0]
                                                arg4 = _mm_shuffle_ps(arg3, arg3, 0x55)
                                                arg5 = _mm_shuffle_ps(arg3, arg3, 0xaa)
                                                var_198:4.d = arg4[0]
                                                var_198:8.d = arg5[0]
                                                
                                                if (cond:2_1)
                                                    zmm1.o = zx.o(var_198.q)
                                                    int32_t rax_48 = var_198:8.d
                                                    *(arg2 + 0x3c) = (zmm1.o).q
                                                    *(arg2 + 0x30) = (zmm1.o).q
                                                    *(arg2 + 0x44) = rax_48
                                                    *(arg2 + 0x38) = rax_48
                                                    *(arg2 + 0x48) = 1
                                                else
                                                    zmm1.o = arg4
                                                    zmm0_1 =
                                                        __minss_xmmss_memss(arg3[0], *(arg2 + 0x30))
                                                    zmm1.o =
                                                        __minss_xmmss_memss(zmm1.d, *(arg2 + 0x34))
                                                    *(arg2 + 0x30) = zmm0_1[0]
                                                    zmm0_1 = *(arg2 + 0x38)
                                                    *(arg2 + 0x34) = zmm1.d
                                                    zmm0_1 = _mm_min_ss(zmm0_1[0], arg5[0])
                                                    zmm1.o = arg3
                                                    zmm1.o =
                                                        __maxss_xmmss_memss(zmm1.d, *(arg2 + 0x3c))
                                                    *(arg2 + 0x38) = zmm0_1[0]
                                                    zmm0_1 =
                                                        __maxss_xmmss_memss(arg4[0], *(arg2 + 0x40))
                                                    *(arg2 + 0x3c) = zmm1.d
                                                    zmm1.o = *(arg2 + 0x44)
                                                    zmm1.o = _mm_max_ss(zmm1.d, arg5[0])
                                                    *(arg2 + 0x40) = zmm0_1[0]
                                                    *(arg2 + 0x44) = zmm1.d
                                                
                                                int64_t r14_4 = sx.q(var_1e0_1.d)
                                                int32_t rax_49 = (r14_4 + 1).d
                                                var_1e0_1.d = rax_49
                                                
                                                if (rax_49 s> var_1e0_1:4.d)
                                                    sub_1406105e0(&var_1e8)
                                                
                                                *(var_1e8 + (r14_4 << 2)) = arg3[0]
                                                int64_t r14_5 = sx.q(var_1e0_1.d)
                                                int32_t rax_51 = (r14_5 + 1).d
                                                var_1e0_1.d = rax_51
                                                
                                                if (rax_51 s> var_1e0_1:4.d)
                                                    sub_1406105e0(&var_1e8)
                                                
                                                *(var_1e8 + (r14_5 << 2)) = arg4[0]
                                                int64_t r14_6 = sx.q(var_1e0_1.d)
                                                int32_t rax_53 = (r14_6 + 1).d
                                                var_1e0_1.d = rax_53
                                                
                                                if (rax_53 s> var_1e0_1:4.d)
                                                    sub_1406105e0(&var_1e8)
                                                
                                                j += 1
                                                *(var_1e8 + (r14_6 << 2)) = arg5[0]
                                            
                                            int64_t rbx_9 = sx.q(var_1d0_1.d)
                                            r12_2 += 0xc
                                            int32_t rax_55 = (rbx_9 + 1).d
                                            var_1d0_1.d = rax_55
                                            
                                            if (rax_55 s> var_1d0_1:4.d)
                                                sub_1405a4cf0(&var_1d8)
                                            
                                            *(var_1d8 + (rbx_9 << 2)) =
                                                (zx.d(rax_43.b) ^ 1) * 2 - 1 + r13_6
                                            int64_t rbx_10 = sx.q(var_1d0_1.d)
                                            int32_t rax_57 = (rbx_10 + 1).d
                                            var_1d0_1.d = rax_57
                                            
                                            if (rax_57 s> var_1d0_1:4.d)
                                                sub_1405a4cf0(&var_1d8)
                                            
                                            *(var_1d8 + (rbx_10 << 2)) = r13_6
                                            int64_t rbx_11 = sx.q(var_1d0_1.d)
                                            int32_t rax_59 = (rbx_11 + 1).d
                                            var_1d0_1.d = rax_59
                                            
                                            if (rax_59 s> var_1d0_1:4.d)
                                                sub_1405a4cf0(&var_1d8)
                                            
                                            r14 = 0
                                            int32_t rdx_38 = zx.d(rax_43.b) * 2 - 1 + r13_6
                                            r13_6 += 3
                                            i = arg_18.q
                                            arg_18.q -= 1
                                            *(var_1d8 + (rbx_11 << 2)) = rdx_38
                                        while (i != 1)
                                else
                                    int64_t rax_20 = (*(*rbx_1 + 0x30))(rbx_1)
                                    int32_t rax_21 = (*(*rbx_1 + 0x48))(rbx_1)
                                    uint64_t r13_1 = zx.q(rax_21)
                                    int32_t rbx_3 = (r13_1 << 1).d + r13_1.d
                                    int64_t r12_1 = (*(*rbx_1 + 0x50))(rbx_1)
                                    int32_t rdx_7 = var_1e0_1.d + rbx_3
                                    
                                    if (rdx_7 s> var_1e0_1:4.d)
                                        sub_1405dadb0(&var_1e8, rdx_7)
                                    
                                    int32_t rdx_9 = var_1d0_1.d + rbx_3
                                    
                                    if (rdx_9 s> var_1d0_1:4.d)
                                        sub_1405dadb0(&var_1d8, rdx_9)
                                    
                                    zmm0_1 = *(arg1 + 0x1e0)
                                    zmm1.o = zmm0_1
                                    var_1b8.q = 0
                                    zmm1.o = _mm_shuffle_ps(zmm1.o, zmm0_1, 0x55)
                                    zmm1.d = zmm1.d f* zmm0_1[0]
                                    int32_t var_1b0_1 = 0
                                    zmm1.d = zmm1.d f* _mm_shuffle_ps(zmm0_1, zmm0_1, 0xaa)[0]
                                    zmm1.d f- 0f
                                    int64_t rax_22
                                    rax_22.b = zmm1.d f< 0f
                                    
                                    if (r13_1.d != 0)
                                        int32_t r13_3 = var_1e0_1.d s/ 3 + 1
                                        arg_18.q = zx.q(rax_21)
                                        int64_t i_1
                                        
                                        do
                                            for (int64_t j_1 = 0; j_1 s< 3; )
                                                bool cond:3_1 = *(arg2 + 0x48) == 0
                                                zmm4_1 = *(arg1 + 0x1c0)
                                                uint64_t rax_26 = zx.q(*(r12_1 + (j_1 << 1)))
                                                zmm3 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xc9)
                                                zmm1.o = zmm4_1
                                                zmm1.o = _mm_shuffle_ps(zmm1.o, zmm4_1, 0xd2)
                                                zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xff)
                                                uint64_t rcx_21 = rax_26 * 3
                                                zmm5_1 = __mulps_xmmps_memps(
                                                    _mm_unpacklo_ps(
                                                        _mm_unpacklo_ps(*(rax_20 + (rcx_21 << 2)), 
                                                            (*(rax_20 + (rcx_21 << 2) + 8))[0].q), 
                                                        _mm_unpacklo_ps(
                                                        *(rax_20 + (rcx_21 << 2) + 4), 0)[0].q), 
                                                    *(arg1 + 0x1e0))
                                                zmm0_1 = _mm_mul_ps(
                                                    _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9), zmm1.o)
                                                zmm2 = _mm_sub_ps(
                                                    _mm_mul_ps(
                                                        _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2), 
                                                        zmm3), 
                                                    zmm0_1)
                                                zmm2 = _mm_add_ps(zmm2, zmm2)
                                                zmm4_1 = _mm_mul_ps(zmm4_1, zmm2)
                                                zmm0_1 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
                                                arg3 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xd2), 
                                                    zmm3)
                                                zmm0_1 = _mm_mul_ps(zmm0_1, zmm1.o)
                                                zmm4_1 = _mm_add_ps(zmm4_1, zmm5_1)
                                                arg3 = __addps_xmmps_memps(
                                                    _mm_add_ps(_mm_sub_ps(arg3, zmm0_1), zmm4_1), 
                                                    *(arg1 + 0x1d0))
                                                float var_148_1 = arg3[0]
                                                arg4 = _mm_shuffle_ps(arg3, arg3, 0x55)
                                                arg5 = _mm_shuffle_ps(arg3, arg3, 0xaa)
                                                float var_144_1 = arg4[0]
                                                float var_140_1 = arg5[0]
                                                
                                                if (cond:3_1)
                                                    zmm1.o = zx.o(var_148_1.q)
                                                    *(arg2 + 0x3c) = (zmm1.o).q
                                                    *(arg2 + 0x30) = (zmm1.o).q
                                                    *(arg2 + 0x44) = var_140_1
                                                    *(arg2 + 0x38) = var_140_1
                                                    *(arg2 + 0x48) = 1
                                                else
                                                    zmm1.o = arg4
                                                    zmm0_1 =
                                                        __minss_xmmss_memss(arg3[0], *(arg2 + 0x30))
                                                    zmm1.o =
                                                        __minss_xmmss_memss(zmm1.d, *(arg2 + 0x34))
                                                    *(arg2 + 0x30) = zmm0_1[0]
                                                    zmm0_1 = *(arg2 + 0x38)
                                                    *(arg2 + 0x34) = zmm1.d
                                                    zmm0_1 = _mm_min_ss(zmm0_1[0], arg5[0])
                                                    zmm1.o = arg3
                                                    zmm1.o =
                                                        __maxss_xmmss_memss(zmm1.d, *(arg2 + 0x3c))
                                                    *(arg2 + 0x38) = zmm0_1[0]
                                                    zmm0_1 =
                                                        __maxss_xmmss_memss(arg4[0], *(arg2 + 0x40))
                                                    *(arg2 + 0x3c) = zmm1.d
                                                    zmm1.o = *(arg2 + 0x44)
                                                    zmm1.o = _mm_max_ss(zmm1.d, arg5[0])
                                                    *(arg2 + 0x40) = zmm0_1[0]
                                                    *(arg2 + 0x44) = zmm1.d
                                                
                                                int64_t r14_1 = sx.q(var_1e0_1.d)
                                                int32_t rax_28 = (r14_1 + 1).d
                                                var_1e0_1.d = rax_28
                                                
                                                if (rax_28 s> var_1e0_1:4.d)
                                                    sub_1406105e0(&var_1e8)
                                                
                                                *(var_1e8 + (r14_1 << 2)) = arg3[0]
                                                int64_t r14_2 = sx.q(var_1e0_1.d)
                                                int32_t rax_30 = (r14_2 + 1).d
                                                var_1e0_1.d = rax_30
                                                
                                                if (rax_30 s> var_1e0_1:4.d)
                                                    sub_1406105e0(&var_1e8)
                                                
                                                *(var_1e8 + (r14_2 << 2)) = arg4[0]
                                                int64_t r14_3 = sx.q(var_1e0_1.d)
                                                int32_t rax_32 = (r14_3 + 1).d
                                                var_1e0_1.d = rax_32
                                                
                                                if (rax_32 s> var_1e0_1:4.d)
                                                    sub_1406105e0(&var_1e8)
                                                
                                                j_1 += 1
                                                *(var_1e8 + (r14_3 << 2)) = arg5[0]
                                            
                                            int64_t rbx_4 = sx.q(var_1d0_1.d)
                                            r12_1 += 6
                                            int32_t rax_34 = (rbx_4 + 1).d
                                            var_1d0_1.d = rax_34
                                            
                                            if (rax_34 s> var_1d0_1:4.d)
                                                sub_1405a4cf0(&var_1d8)
                                            
                                            *(var_1d8 + (rbx_4 << 2)) =
                                                (zx.d(rax_22.b) ^ 1) * 2 - 1 + r13_3
                                            int64_t rbx_5 = sx.q(var_1d0_1.d)
                                            int32_t rax_36 = (rbx_5 + 1).d
                                            var_1d0_1.d = rax_36
                                            
                                            if (rax_36 s> var_1d0_1:4.d)
                                                sub_1405a4cf0(&var_1d8)
                                            
                                            *(var_1d8 + (rbx_5 << 2)) = r13_3
                                            int64_t rbx_6 = sx.q(var_1d0_1.d)
                                            int32_t rax_38 = (rbx_6 + 1).d
                                            var_1d0_1.d = rax_38
                                            
                                            if (rax_38 s> var_1d0_1:4.d)
                                                sub_1405a4cf0(&var_1d8)
                                            
                                            r14 = 0
                                            int32_t rdx_21 = zx.d(rax_22.b) * 2 - 1 + r13_3
                                            r13_3 += 3
                                            i_1 = arg_18.q
                                            arg_18.q -= 1
                                            *(var_1d8 + (rbx_6 << 2)) = rdx_21
                                        while (i_1 != 1)
                                rcx_8 = &var_138_1[1]
                                var_138_1 = rcx_8
                            while (rcx_8 != rax_16)
                            
                            r15_1 = rax_11
                    
                    int32_t i_8 = r15_1[0xc].d
                    void* rbx_12 = r15_1[0xb]
                    float zmm14[0x4] = data_14399f720
                    arg5 = data_142fc92c0
                    float zmm9[0x4] = _mm_unpacklo_ps(
                        _mm_unpacklo_ps(data_143dbb1f8, data_143dbb200[0].q), 
                        _mm_unpacklo_ps(data_143dbb1fc, 0)[0].q)
                    float var_198_1[0x4] = zmm9
                    
                    if (i_8 s> 0)
                        float zmm10[0x4]
                        float var_98_1[0x4] = zmm10
                        uint64_t i_7 = zx.q(i_8)
                        float zmm11[0x4]
                        float var_a8_1[0x4] = zmm11
                        float zmm12[0x4]
                        float var_b8_1[0x4] = zmm12
                        float zmm15[0x4]
                        float var_e8_1[0x4] = zmm15
                        uint64_t i_2
                        
                        do
                            int64_t r13_7 = sx.q(data_143f71970.d)
                            int32_t rax_61 = (r13_7 + 1).d
                            data_143f71970.d = rax_61
                            
                            if (rax_61 s> data_143f71970:4.d)
                                sub_1405a4cf0(&data_143f71968)
                            
                            *(data_143f71968 + (r13_7 << 2)) = var_1e0_1.d s/ 3
                            int64_t rax_63 = sub_140a54cc0(rbx_12)
                            int64_t rax_64
                            
                            if (rax_63 == 0)
                                rax_64 =
                                    Concurrency::details::VirtualProcessor::GetExecutingContext(
                                    rbx_12)
                            
                            int64_t* rax_66
                            int128_t* rdx_42
                            
                            if (rax_63 != 0 || rax_64 == 0)
                                rax_66 = sub_140a54cc0(rbx_12)
                                rdx_42 = &arg1[0x38]
                            else
                                arg4 = *(arg1 + 0x1e0)
                                arg3 = *(arg1 + 0x1c0)
                                float var_118[0x4]
                                
                                if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(arg5, arg4), 
                                        data_143f71890, 1)) == 0)
                                    zmm0_1 = _mm_shuffle_ps(arg3, arg3, 0)
                                    zmm4_1 = _mm_mul_ps(arg4, zmm9)
                                    zmm1.o = zmm14
                                    zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm14, zmm14, 0x1b), zmm0_1)
                                    zmm1.o = _mm_shuffle_ps(zmm1.o, zmm14, 0x4e)
                                    zmm2 = _mm_shuffle_ps(zmm14, zmm14, 0xb1)
                                    zmm5_1 = _mm_shuffle_ps(arg3, arg3, 0xff)
                                    zmm3 = __mulps_xmmps_memps(zmm3, data_143f71850)
                                    zmm0_1 = _mm_mul_ps(zmm14, zmm5_1)
                                    arg4 = _mm_mul_ps(arg4, arg5)
                                    zmm3 = _mm_add_ps(zmm3, zmm0_1)
                                    zmm1.o = _mm_mul_ps(zmm1.o, _mm_shuffle_ps(arg3, arg3, 0x55))
                                    zmm2 = _mm_mul_ps(zmm2, _mm_shuffle_ps(arg3, arg3, 0xaa))
                                    zmm1.o = __mulps_xmmps_memps(zmm1.o, data_143f71840)
                                    zmm0_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xc9)
                                    zmm2 = __mulps_xmmps_memps(zmm2, data_143f71830)
                                    float var_f8_2[0x4] = arg4
                                    zmm3 = _mm_add_ps(_mm_add_ps(zmm3, zmm1.o), zmm2)
                                    zmm2 = _mm_shuffle_ps(arg3, arg3, 0xd2)
                                    zmm0_1 = _mm_mul_ps(zmm0_1, zmm2)
                                    arg3 = _mm_shuffle_ps(arg3, arg3, 0xc9)
                                    var_118 = zmm3
                                    zmm3 = _mm_sub_ps(
                                        _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0xd2), arg3), 
                                        zmm0_1)
                                    zmm3 = _mm_add_ps(zmm3, zmm3)
                                    zmm1.o = zmm3
                                    zmm1.o = _mm_shuffle_ps(zmm1.o, zmm3, 0xd2)
                                    zmm0_1 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
                                    zmm1.o = _mm_mul_ps(zmm1.o, arg3)
                                    zmm0_1 = _mm_mul_ps(zmm0_1, zmm2)
                                    zmm3 = _mm_mul_ps(zmm3, zmm5_1)
                                    zmm1.o = _mm_sub_ps(zmm1.o, zmm0_1)
                                    zmm1.o = _mm_add_ps(zmm1.o, _mm_add_ps(zmm3, zmm4_1))
                                    zmm1.o = __addps_xmmps_memps(zmm1.o, *(arg1 + 0x1d0))
                                    int128_t var_108_2 = zmm1.o
                                    rax_66 =
                                        Concurrency::details::VirtualProcessor::GetExecutingContext(
                                        rbx_12)
                                    rdx_42 = &var_118
                                else
                                    zmm10 = data_143f717b0
                                    zmm1.o = arg3
                                    zmm0_1 = _mm_shuffle_ps(arg3, arg3, 4)
                                    zmm1.o = _mm_add_ps(zmm1.o, arg3)
                                    zmm4_1 = _mm_shuffle_ps(arg4, arg4, 0xc9)
                                    zmm3 = arg3
                                    arg3 = _mm_shuffle_ps(arg3, arg3, 0xff)
                                    zmm12 = arg5
                                    arg5 = *(arg1 + 0x1d0)
                                    _mm_mul_ps(zmm12, arg4)
                                    zmm3 = _mm_mul_ps(zmm3, zmm1.o)
                                    zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm1.o, zmm1.o, 0x29), zmm0_1)
                                    zmm1.o = _mm_shuffle_ps(zmm1.o, zmm1.o, 0x12)
                                    zmm0_1 = _mm_shuffle_ps(zmm3, zmm3, 0x1a)
                                    arg3 = _mm_mul_ps(arg3, zmm1.o)
                                    zmm1.o = zmm10
                                    zmm0_1 = _mm_add_ps(zmm0_1, _mm_shuffle_ps(zmm3, zmm3, 1))
                                    zmm11 = _mm_add_ps(arg3, zmm2)
                                    zmm2 = _mm_sub_ps(zmm2, arg3)
                                    zmm1.o = _mm_sub_ps(zmm1.o, zmm0_1)
                                    zmm11 = _mm_mul_ps(zmm11, arg4)
                                    zmm4_1 = _mm_mul_ps(zmm4_1, zmm2)
                                    zmm1.o = _mm_mul_ps(zmm1.o, arg4)
                                    zmm2 = _mm_shuffle_ps(zmm14, zmm14, 4)
                                    zmm1.o = __andps_xmmxud_memxud(zmm1.o, data_143f717c0)
                                    zmm0_1 = _mm_shuffle_ps(zmm4_1, zmm1.o, 0x32)
                                    zmm9 = _mm_shuffle_ps(_mm_shuffle_ps(zmm11, zmm1.o, 0), zmm0_1, 
                                        0x82)
                                    zmm0_1 = _mm_shuffle_ps(zmm11, zmm1.o, 0x31)
                                    arg4 = _mm_shuffle_ps(_mm_shuffle_ps(zmm4_1, zmm1.o, 0x10), 
                                        zmm0_1, 0x88)
                                    zmm11 = _mm_shuffle_ps(_mm_shuffle_ps(zmm11, zmm4_1, 0x12), 
                                        zmm1.o, 0xe8)
                                    zmm1.o = zmm14
                                    zmm1.o = _mm_add_ps(zmm1.o, zmm14)
                                    zmm10[0].q = arg5 u>> 0x40
                                    arg5 = _mm_shuffle_ps(arg5, zmm10, 0xc4)
                                    zmm3 = _mm_mul_ps(zmm14, zmm1.o)
                                    zmm2 = _mm_mul_ps(zmm2, _mm_shuffle_ps(zmm1.o, zmm1.o, 0x29))
                                    zmm0_1 = _mm_shuffle_ps(zmm14, zmm14, 0xff)
                                    zmm1.o = _mm_shuffle_ps(zmm1.o, zmm1.o, 0x12)
                                    zmm0_1 = _mm_mul_ps(zmm0_1, zmm1.o)
                                    zmm1.o = data_142fc92c0
                                    zmm4_1 = _mm_shuffle_ps(zmm1.o, zmm1.o, 0xc9)
                                    arg3 = _mm_add_ps(zmm0_1, zmm2)
                                    zmm2 = _mm_sub_ps(zmm2, zmm0_1)
                                    zmm0_1 = _mm_add_ps(_mm_shuffle_ps(zmm3, zmm3, 0x1a), 
                                        _mm_shuffle_ps(zmm3, zmm3, 1))
                                    arg3 = _mm_mul_ps(arg3, zmm1.o)
                                    zmm1.o = zmm10
                                    zmm4_1 = _mm_mul_ps(zmm4_1, zmm2)
                                    zmm1.o = _mm_sub_ps(zmm1.o, zmm0_1)
                                    zmm1.o = __mulps_xmmps_memps(zmm1.o, data_142fc92c0)
                                    zmm1.o = __andps_xmmxud_memxud(zmm1.o, data_143f717c0)
                                    zmm0_1 = _mm_shuffle_ps(zmm4_1, zmm1.o, 0x32)
                                    zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(arg3, zmm1.o, 0), zmm0_1, 
                                        0x82)
                                    zmm5_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm4_1, zmm1.o, 0x10), 
                                        _mm_shuffle_ps(arg3, zmm1.o, 0x31), 0x88)
                                    zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0x55), arg4)
                                    arg3 = _mm_shuffle_ps(_mm_shuffle_ps(arg3, zmm4_1, 0x12), 
                                        zmm1.o, 0xe8)
                                    zmm1.o = zmm3
                                    zmm1.o = _mm_shuffle_ps(zmm1.o, zmm3, 0xaa)
                                    zmm1.o = _mm_mul_ps(zmm1.o, zmm11)
                                    zmm10[0].q = var_198_1 u>> 0x40
                                    zmm4_1 = _mm_shuffle_ps(var_198_1, zmm10, 0xc4)
                                    zmm0_1 = _mm_shuffle_ps(zmm3, zmm3, 0)
                                    zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xff), arg5)
                                    zmm2 = _mm_add_ps(zmm2, _mm_mul_ps(zmm0_1, zmm9))
                                    zmm0_1 = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0), zmm9)
                                    zmm2 = _mm_add_ps(zmm2, zmm1.o)
                                    zmm1.o = zmm5_1
                                    zmm1.o = _mm_shuffle_ps(zmm1.o, zmm5_1, 0xaa)
                                    zmm1.o = _mm_mul_ps(zmm1.o, zmm11)
                                    zmm2 = _mm_add_ps(zmm2, zmm3)
                                    zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0x55), arg4)
                                    zmm5_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
                                    float var_188[0x4] = zmm2
                                    zmm2 = _mm_shuffle_ps(arg3, arg3, 0x55)
                                    zmm3 = _mm_add_ps(zmm3, zmm0_1)
                                    zmm2 = _mm_mul_ps(zmm2, arg4)
                                    zmm5_1 = _mm_mul_ps(zmm5_1, arg5)
                                    zmm0_1 = _mm_shuffle_ps(arg3, arg3, 0)
                                    zmm3 = _mm_add_ps(zmm3, zmm1.o)
                                    zmm0_1 = _mm_mul_ps(zmm0_1, zmm9)
                                    zmm1.o = arg3
                                    zmm1.o = _mm_shuffle_ps(zmm1.o, arg3, 0xaa)
                                    zmm1.o = _mm_mul_ps(zmm1.o, zmm11)
                                    zmm3 = _mm_add_ps(zmm3, zmm5_1)
                                    arg3 = _mm_shuffle_ps(arg3, arg3, 0xff)
                                    zmm2 = _mm_add_ps(zmm2, zmm0_1)
                                    arg3 = _mm_mul_ps(arg3, arg5)
                                    zmm0_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0)
                                    int96_t var_178_1 = zmm3[0].12
                                    zmm3 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
                                    zmm2 = _mm_add_ps(zmm2, zmm1.o)
                                    zmm3 = _mm_mul_ps(zmm3, arg4)
                                    zmm1.o = zmm4_1
                                    zmm1.o = _mm_shuffle_ps(zmm1.o, zmm4_1, 0xaa)
                                    zmm1.o = _mm_mul_ps(zmm1.o, zmm11)
                                    zmm0_1 = _mm_mul_ps(zmm0_1, zmm9)
                                    zmm2 = _mm_add_ps(zmm2, arg3)
                                    zmm4_1 = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0xff), arg5)
                                    zmm3 = _mm_add_ps(zmm3, zmm0_1)
                                    int96_t var_168_1 = zmm2[0].12
                                    zmm3 = _mm_add_ps(zmm3, zmm1.o)
                                    zmm1.o = 0x322bcc77
                                    int96_t var_158_1 = _mm_add_ps(zmm3, zmm4_1)[0].12
                                    int512_t zmm8
                                    int64_t zmm13_1
                                    zmm8, zmm10, zmm12, zmm13_1, zmm14, zmm15 =
                                        sub_1407740e0(&var_188, zmm1.o)
                                    float zmm2_1[0x4] = var_188[0]
                                    float zmm1_1 = var_188[1]
                                    zmm15 = _mm_and_ps(_mm_cmpeq_ps(zmm15, zmm12, 2), 
                                        data_143f71880 ^ zmm10)
                                    uint32_t zmm0_2[0x4] = var_188[2]
                                    zmm15 ^= data_143f71880
                                    zmm2_1[0] = zmm2_1[0] * zmm15[0]
                                    zmm1_1 = zmm1_1 * zmm15[0]
                                    zmm0_2[0] = zmm0_2[0] f* zmm15[0]
                                    var_188[0] = zmm2_1[0]
                                    zmm2_1 = _mm_shuffle_ps(zmm15, zmm15, 0x55)
                                    var_188[2] = zmm0_2[0]
                                    zmm0_2 = var_178_1:8.d
                                    zmm0_2[0] = zmm0_2[0] f* zmm2_1[0]
                                    var_188[1] = zmm1_1
                                    zmm1_1 = var_178_1:4.d * zmm2_1[0]
                                    float zmm3_1 = var_178_1.d * zmm2_1[0]
                                    zmm2_1 = var_168_1.d
                                    var_178_1:8.d = zmm0_2[0]
                                    zmm0_2 = var_168_1:8.d
                                    var_178_1:4.d = zmm1_1
                                    zmm15 = _mm_shuffle_ps(zmm15, zmm15, 0xaa)
                                    zmm0_2[0] = zmm0_2[0] f* zmm15[0]
                                    zmm2_1[0] = zmm2_1[0] * zmm15[0]
                                    zmm1_1 = var_168_1:4.d * zmm15[0]
                                    var_168_1:8.d = zmm0_2[0]
                                    var_178_1.d = zmm3_1
                                    var_168_1.d = zmm2_1[0]
                                    var_168_1:4.d = zmm1_1
                                    sub_14077e4a0(&var_1b8, &var_188)
                                    uint128_t zmm5_2 = var_1b8
                                    float zmm6[0x4] = data_143f71870
                                    zmm1.o = zmm5_2
                                    zmm8.o = data_142fc92c0
                                    zmm9 = var_198_1
                                    zmm1.o = _mm_mul_ps(zmm1.o, zmm5_2)
                                    arg_8 = 0x322bcc77
                                    float var_f8_1[0x4] = zmm12
                                    zmm1.o =
                                        _mm_add_ps(zmm1.o, _mm_shuffle_ps(zmm1.o, zmm1.o, 0x4e))
                                    float zmm4_2[0x4] =
                                        _mm_add_ps(_mm_shuffle_ps(zmm1.o, zmm1.o, 0x39), zmm1.o)
                                    zmm1.o = _mm_rsqrt_ps(zmm4_2)
                                    float zmm3_2[0x4] = _mm_mul_ps(zmm4_2, zmm6)
                                    float zmm2_2[0x4] = _mm_add_ps(
                                        _mm_mul_ps(
                                            _mm_sub_ps(zmm6, 
                                                _mm_mul_ps(_mm_mul_ps(zmm1.o, zmm1.o), zmm3_2)), 
                                            zmm1.o), 
                                        zmm1.o)
                                    zmm6 = _mm_sub_ps(zmm6, 
                                        _mm_mul_ps(_mm_mul_ps(zmm2_2, zmm2_2), zmm3_2))
                                    float zmm0_3[0x4] = arg_8
                                    zmm0_3 =
                                        _mm_cmpeq_ps(_mm_shuffle_ps(zmm0_3, zmm0_3, 0), zmm4_2, 2)
                                    zmm6 = _mm_add_ps(_mm_mul_ps(zmm6, zmm2_2), zmm2_2)
                                    zmm2_2 = _mm_unpacklo_ps(var_158_1:4.d, zmm13_1)
                                    zmm6 = _mm_and_ps(_mm_mul_ps(zmm6, zmm5_2) ^ data_143f71860, 
                                        zmm0_3) ^ data_143f71860
                                    float var_108_1[0x4] = _mm_unpacklo_ps(
                                        _mm_unpacklo_ps(var_158_1.d, var_158_1:8.d[0].q), 
                                        zmm2_2[0].q)
                                    var_1b8 = zmm6
                                    var_118 = zmm6
                                    rax_66 =
                                        Concurrency::details::VirtualProcessor::GetExecutingContext(
                                        rbx_12)
                                    rdx_42 = &var_118
                            
                            zmm1, arg5 = sub_14267b990(rax_66, rdx_42, &var_1e8, &var_1d8, zmm1.o, 
                                arg2 + 0x30)
                            rbx_12 += 0xb0
                            i_2 = i_7
                            i_7 -= 1
                        while (i_2 != 1)
                        r15_1 = rax_11
                    
                    sub_14267ca60(&r15_1[5], &var_1e8, &var_1d8, &data_143f71968, arg2 + 0x30, 
                        &arg1[0x38], 0)
                    sub_142680550(&r15_1[5], &var_1e8, &var_1d8, &data_143f71968, arg2 + 0x30, 
                        &arg1[0x38], 0)
                    int512_t zmm6_1
                    int512_t zmm7
                    int512_t zmm8_1
                    zmm1, zmm6_1, zmm7, zmm8_1 = sub_14267f940(&r15_1[5], &var_1e8, &var_1d8, 
                        &data_143f71968, arg2 + 0x30, &arg1[0x38], 0)
                    int32_t rax_67 = data_143f71970:4.d
                    zmm8_1.o = var_78_1
                    zmm7.o = var_68_1
                    zmm6_1.o = var_58_1
                    data_143f71970.d = 0
                    
                    if (rax_67 s< 0 && rax_67 != 0)
                        sub_1405dadb0(&data_143f71968, 0)
                
                char var_1c8
                var_1c8.o = *(r15_1 + 0x98)

uint64_t rcx_58 = var_1e8
int32_t rdx_47 = var_1e0_1.d s/ 3

if (rdx_47 s>= 4)
    uint64_t rax_72 = zx.q(((rdx_47 - 4) u>> 2) + 1)
    uint64_t i_5 = zx.q(rax_72.d)
    r14 = (rax_72 << 2).d
    uint64_t i_3
    
    do
        zmm1.o = *(rcx_58 + 4)
        int32_t rax_73 = *(rcx_58 + 8)
        zmm1.o ^= 0x80000000
        *rcx_58 = (*rcx_58 ^ 0x80000000).d
        zmm0 = *(rcx_58 + 0xc)
        *(rcx_58 + 8) = zmm1.d
        zmm1.o = *(rcx_58 + 0x10)
        zmm1.o ^= 0x80000000
        *(rcx_58 + 0xc) = (zmm0 ^ 0x80000000).d
        zmm0 = *(rcx_58 + 0x18)
        *(rcx_58 + 4) = rax_73
        int32_t rax_74 = *(rcx_58 + 0x14)
        *(rcx_58 + 0x14) = zmm1.d
        zmm1.o = *(rcx_58 + 0x1c)
        zmm1.o ^= 0x80000000
        *(rcx_58 + 0x10) = rax_74
        int32_t rax_75 = *(rcx_58 + 0x20)
        *(rcx_58 + 0x18) = (zmm0 ^ 0x80000000).d
        zmm0 = *(rcx_58 + 0x24)
        *(rcx_58 + 0x20) = zmm1.d
        zmm1.o = *(rcx_58 + 0x28)
        *(rcx_58 + 0x1c) = rax_75
        zmm1.o ^= 0x80000000
        int32_t rax_76 = *(rcx_58 + 0x2c)
        *(rcx_58 + 0x24) = (zmm0 ^ 0x80000000).d
        *(rcx_58 + 0x2c) = zmm1.d
        *(rcx_58 + 0x28) = rax_76
        rcx_58 += 0x30
        i_3 = i_5
        i_5 -= 1
    while (i_3 != 1)

if (r14 s< rdx_47)
    void* rcx_59 = rcx_58 + 8
    uint64_t i_6 = zx.q(rdx_47 - r14)
    uint64_t i_4
    
    do
        zmm1.o = *(rcx_59 - 4)
        int32_t rax_77 = *rcx_59
        zmm1.o ^= 0x80000000
        *(rcx_59 - 8) = (*(rcx_59 - 8) ^ 0x80000000).d
        *rcx_59 = zmm1.d
        *(rcx_59 - 4) = rax_77
        rcx_59 += 0xc
        i_4 = i_6
        i_6 -= 1
    while (i_4 != 1)

int64_t result = sub_142696ee0(&var_1f8)
uint64_t rcx_61 = var_1d8

if (rcx_61 != 0)
    result = sub_140a74f90(rcx_61)

uint64_t rcx_62 = var_1e8

if (rcx_62 == 0)
    return result

return sub_140a74f90(rcx_62)
