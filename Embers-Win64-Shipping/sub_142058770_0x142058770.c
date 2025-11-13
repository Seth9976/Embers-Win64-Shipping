// 函数: sub_142058770
// 地址: 0x142058770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t* result = *(arg1 + 0x540)
int64_t* rdi = arg4
void* rsi = arg1

if (result[1].d != 0)
    int64_t r14_3 = (sx.q(arg3) << 6) + *result
    int64_t var_1f8_1 = r14_3
    char var_170_1 = 1
    int32_t rax = *(r14_3 + 8)
    int64_t var_188 = *r14_3
    int32_t var_180_1 = rax
    int64_t var_17c_1 = *(r14_3 + 0x10)
    int32_t var_174_1 = *(r14_3 + 0x18)
    int32_t var_110
    float zmm6_1[0x4]
    uint32_t zmm7_1[0x4]
    result, zmm6_1, zmm7_1 = sub_140ae2c60(&var_188, &var_110, arg1 + 0x1c0)
    float zmm11[0x4] = *arg2
    int32_t var_104
    float zmm10[0x4] = var_104
    
    if (not(zmm11[0] > zmm10[0]))
        float zmm4_1[0x4] = *(arg2 + 0xc)
        float zmm0_1[0x4] = var_110
        
        if (not(zmm0_1[0] > zmm4_1[0]))
            float zmm5_1[0x4] = *(arg2 + 4)
            int32_t var_100
            float zmm1_1[0x4] = var_100
            
            if (not(zmm5_1[0] > zmm1_1[0]))
                int32_t var_10c
                float zmm3_1[0x4] = var_10c
                float var_58_1[0x4] = zmm6_1
                zmm6_1 = arg2[1].d
                
                if (not(zmm3_1[0] > zmm6_1[0]))
                    int32_t var_fc
                    float zmm2_1[0x4] = var_fc
                    uint32_t var_68_1[0x4] = zmm7_1
                    zmm7_1 = *(arg2 + 8)
                    
                    if (not(zmm7_1[0] f> zmm2_1[0]))
                        int32_t var_108
                        float zmm8[0x4] = var_108
                        float zmm9[0x4] = *(arg2 + 0x14)
                        
                        if (not(zmm8[0] > zmm9[0]))
                            int32_t i = *(r14_3 + 0xc)
                            
                            if (i s< 0 || (not(zmm0_1[0] <= zmm11[0]) && not(zmm0_1[0] >= zmm4_1[0])
                                    && not(zmm3_1[0] <= zmm5_1[0]) && not(zmm3_1[0] >= zmm6_1[0])
                                    && not(zmm8[0] f<= zmm7_1[0]) && not(zmm8[0] >= zmm9[0])
                                    && not(zmm10[0] <= zmm11[0]) && not(zmm10[0] >= zmm4_1[0])
                                    && not(zmm1_1[0] <= zmm5_1[0]) && not(zmm1_1[0] >= zmm6_1[0])
                                    && not(zmm2_1[0] f<= zmm7_1[0]) && zmm2_1[0] < zmm9[0]))
                                result = zx.q(*(rsi + 0x558))
                                int64_t r13_1 = sx.q(*(r14_3 + 0x20))
                                int32_t result_1 = result.d
                                int32_t var_200_1 = r13_1.d
                                
                                if (r13_1.d s<= *(r14_3 + 0x24))
                                    uint64_t r15_1 = zx.q(data_14401b1a0)
                                    int64_t rbx_1 = r13_1
                                    zmm1_1 = zx.o(0)
                                    TEB* gsbase
                                    void* ThreadLocalStoragePointer =
                                        gsbase->ThreadLocalStoragePointer
                                    zmm6_1 = zx.o(0)
                                    float zmm12[0x4]
                                    float var_b8_1[0x4] = zmm12
                                    float zmm13[0x4] = data_143f43310
                                    uint32_t zmm15[0x4] = data_143f43320
                                    float zmm14[0x4]
                                    float var_d8_1[0x4] = zmm14
                                    int64_t var_1e8_1 = rbx_1
                                    
                                    do
                                        int32_t rcx_2
                                        
                                        if (result.d s<= 0)
                                            rcx_2 = r13_1.d
                                        else
                                            rcx_2 = *(*(rsi + 0x550) + (rbx_1 << 2))
                                        
                                        zmm13[0].q = zmm1_1 u>> 0x40
                                        zmm5_1 = _mm_shuffle_ps(zx.o(0), zmm13, 0xc4)
                                        zmm12 = zx.o(0)
                                        zmm11 = _mm_and_ps(zmm13, zmm15)
                                        
                                        if (rcx_2 s< 0 || rcx_2 s>= *(rsi + 0x4a0))
                                            result.b = 0
                                        else
                                            result.b = 1
                                        
                                        float var_1d8[0x4]
                                        float var_1c8[0x4]
                                        float var_1b8[0x4]
                                        
                                        if (result.b == 0)
                                            void* r13_2 = *(rsi + 0x4e8)
                                            
                                            if (r13_2 != 0 && *(r13_2 + 0x38) != 0)
                                                int64_t* r13_3 = *(r13_2 + 0xc0)
                                                int64_t rdi_1 = r13_3[3]
                                                int64_t rdx_5 = *(*r13_3[2] + 0x28)
                                                
                                                if (r13_3[9].b == 0)
                                                    rdx_5()
                                                    int64_t* rcx_30 = r13_3[2]
                                                    (*(*rcx_30 + 0x20))(rcx_30)
                                                    int64_t rax_145 = rbx_1 * 0xc
                                                    zmm14 = *(rdi_1 + (rax_145 << 2))
                                                    zmm13 = *(rdi_1 + (rax_145 << 2) + 4)
                                                    zmm12 = *(rdi_1 + (rax_145 << 2) + 8)
                                                    zmm11 = *(rdi_1 + (rax_145 << 2) + 0x10)
                                                    zmm10 = *(rdi_1 + (rax_145 << 2) + 0x14)
                                                    zmm9 = *(rdi_1 + (rax_145 << 2) + 0x18)
                                                    zmm8 = *(rdi_1 + (rax_145 << 2) + 0x20)
                                                    zmm7_1 = *(rdi_1 + (rax_145 << 2) + 0x24)
                                                    zmm6_1 = *(rdi_1 + (rax_145 << 2) + 0x28)
                                                else
                                                    rdx_5()
                                                    int64_t* rcx_5 = r13_3[2]
                                                    (*(*rcx_5 + 0x20))(rcx_5)
                                                    int64_t rsi_1 = rbx_1 * 3
                                                    uint32_t rbx_2 = zx.d(*(rdi_1 + (rsi_1 << 3)))
                                                    int32_t r14_6 = (rbx_2 & 0xffff8000) << 0x10
                                                    int16_t rax_4 = rbx_2.w & 0x7c00
                                                    int32_t var_208_1
                                                    
                                                    if (rax_4 == 0)
                                                        int32_t rbx_3 = rbx_2 & 0x3ff
                                                        
                                                        if (rbx_3 != 0)
                                                            if (data_143cda914 s> *(0x14 + *(
                                                                    ThreadLocalStoragePointer
                                                                    + (r15_1 << 3))))
                                                                _Init_thread_header(&data_143cda914)
                                                                
                                                                if (data_143cda914 == 0xffffffff)
                                                                    data_143cda910 = 0x3fb8aa3b
                                                                    _Init_thread_footer(&data_143cda914)
                                                            
                                                            zmm0_1 = zx.o(0)
                                                            zmm0_1[0] = float.s(zx.q(rbx_3))
                                                            zmm0_1 = logf(zmm0_1[0])
                                                            zmm0_1[0] = zmm0_1[0] f* data_143cda910
                                                            int32_t rdx_6 = 0xa - int.d(zmm0_1[0])
                                                            var_208_1 = (rbx_3 << (rdx_6.b + 0xd)
                                                                & 0x7fffff)
                                                                | ((0x71 - rdx_6) << 0x17 & 0x7f800000)
                                                                | r14_6
                                                        else
                                                            var_208_1 = r14_6
                                                    else if (rax_4 != 0x7c00)
                                                        var_208_1 =
                                                            ((rbx_2 u>> 0xa & 0x1f) + 0x70) << 0x17
                                                            | (rbx_2 & 0x3ff) << 0xd | r14_6
                                                    else
                                                        var_208_1 = r14_6 | 0x477fe000
                                                    
                                                    uint32_t rbx_10 =
                                                        zx.d(*(rdi_1 + (rsi_1 << 3) + 2))
                                                    zmm14 = var_208_1
                                                    int32_t r14_10 = (rbx_10 & 0xffff8000) << 0x10
                                                    int16_t rax_18 = rbx_10.w & 0x7c00
                                                    int32_t var_208_2
                                                    
                                                    if (rax_18 == 0)
                                                        int32_t rbx_11 = rbx_10 & 0x3ff
                                                        
                                                        if (rbx_11 != 0)
                                                            if (data_143cda914 s> *(0x14 + *(
                                                                    ThreadLocalStoragePointer
                                                                    + (r15_1 << 3))))
                                                                _Init_thread_header(&data_143cda914)
                                                                
                                                                if (data_143cda914 == 0xffffffff)
                                                                    data_143cda910 = 0x3fb8aa3b
                                                                    _Init_thread_footer(&data_143cda914)
                                                            
                                                            zmm0_1 = zx.o(0)
                                                            zmm0_1[0] = float.s(zx.q(rbx_11))
                                                            zmm0_1 = logf(zmm0_1[0])
                                                            zmm0_1[0] = zmm0_1[0] f* data_143cda910
                                                            int32_t rdx_7 = 0xa - int.d(zmm0_1[0])
                                                            var_208_2 = (rbx_11 << (rdx_7.b + 0xd)
                                                                & 0x7fffff)
                                                                | ((0x71 - rdx_7) << 0x17 & 0x7f800000)
                                                                | r14_10
                                                        else
                                                            var_208_2 = r14_10
                                                    else if (rax_18 != 0x7c00)
                                                        var_208_2 =
                                                            ((rbx_10 u>> 0xa & 0x1f) + 0x70) << 0x17
                                                            | (rbx_10 & 0x3ff) << 0xd | r14_10
                                                    else
                                                        var_208_2 = r14_10 | 0x477fe000
                                                    
                                                    uint32_t rbx_18 =
                                                        zx.d(*(rdi_1 + (rsi_1 << 3) + 4))
                                                    zmm13 = var_208_2
                                                    int32_t r14_14 = (rbx_18 & 0xffff8000) << 0x10
                                                    int16_t rax_32 = rbx_18.w & 0x7c00
                                                    int32_t var_208_3
                                                    
                                                    if (rax_32 == 0)
                                                        int32_t rbx_19 = rbx_18 & 0x3ff
                                                        
                                                        if (rbx_19 != 0)
                                                            if (data_143cda914 s> *(0x14 + *(
                                                                    ThreadLocalStoragePointer
                                                                    + (r15_1 << 3))))
                                                                _Init_thread_header(&data_143cda914)
                                                                
                                                                if (data_143cda914 == 0xffffffff)
                                                                    data_143cda910 = 0x3fb8aa3b
                                                                    _Init_thread_footer(&data_143cda914)
                                                            
                                                            zmm0_1 = zx.o(0)
                                                            zmm0_1[0] = float.s(zx.q(rbx_19))
                                                            zmm0_1 = logf(zmm0_1[0])
                                                            zmm0_1[0] = zmm0_1[0] f* data_143cda910
                                                            int32_t rdx_8 = 0xa - int.d(zmm0_1[0])
                                                            var_208_3 = (rbx_19 << (rdx_8.b + 0xd)
                                                                & 0x7fffff)
                                                                | ((0x71 - rdx_8) << 0x17 & 0x7f800000)
                                                                | r14_14
                                                        else
                                                            var_208_3 = r14_14
                                                    else if (rax_32 != 0x7c00)
                                                        var_208_3 =
                                                            ((rbx_18 u>> 0xa & 0x1f) + 0x70) << 0x17
                                                            | (rbx_18 & 0x3ff) << 0xd | r14_14
                                                    else
                                                        var_208_3 = r14_14 | 0x477fe000
                                                    
                                                    uint32_t rax_46 =
                                                        zx.d(*(rdi_1 + (rsi_1 << 3) + 6))
                                                    zmm12 = var_208_3
                                                    
                                                    if ((0x7c00 & rax_46.w) == 0
                                                            && (rax_46 & 0x3ff) != 0
                                                            && data_143cda914 s> *(0x14 + *(
                                                            ThreadLocalStoragePointer
                                                            + (r15_1 << 3))))
                                                        _Init_thread_header(&data_143cda914)
                                                        
                                                        if (data_143cda914 == 0xffffffff)
                                                            data_143cda910 = 0x3fb8aa3b
                                                            _Init_thread_footer(&data_143cda914)
                                                    
                                                    uint32_t rbx_26 =
                                                        zx.d(*(rdi_1 + (rsi_1 << 3) + 8))
                                                    int32_t r14_18 = (rbx_26 & 0xffff8000) << 0x10
                                                    int16_t rax_49 = rbx_26.w & 0x7c00
                                                    int32_t var_208_4
                                                    
                                                    if (rax_49 == 0)
                                                        int32_t rbx_27 = rbx_26 & 0x3ff
                                                        
                                                        if (rbx_27 != 0)
                                                            if (data_143cda914 s> *(0x14 + *(
                                                                    ThreadLocalStoragePointer
                                                                    + (r15_1 << 3))))
                                                                _Init_thread_header(&data_143cda914)
                                                                
                                                                if (data_143cda914 == 0xffffffff)
                                                                    data_143cda910 = 0x3fb8aa3b
                                                                    _Init_thread_footer(&data_143cda914)
                                                            
                                                            zmm0_1 = zx.o(0)
                                                            zmm0_1[0] = float.s(zx.q(rbx_27))
                                                            zmm0_1 = logf(zmm0_1[0])
                                                            zmm0_1[0] = zmm0_1[0] f* data_143cda910
                                                            int32_t rdx_9 = 0xa - int.d(zmm0_1[0])
                                                            var_208_4 = (rbx_27 << (rdx_9.b + 0xd)
                                                                & 0x7fffff)
                                                                | ((0x71 - rdx_9) << 0x17 & 0x7f800000)
                                                                | r14_18
                                                        else
                                                            var_208_4 = r14_18
                                                    else if (rax_49 != 0x7c00)
                                                        var_208_4 =
                                                            ((rbx_26 u>> 0xa & 0x1f) + 0x70) << 0x17
                                                            | (rbx_26 & 0x3ff) << 0xd | r14_18
                                                    else
                                                        var_208_4 = r14_18 | 0x477fe000
                                                    
                                                    uint32_t rbx_34 =
                                                        zx.d(*(rdi_1 + (rsi_1 << 3) + 0xa))
                                                    zmm11 = var_208_4
                                                    int32_t r14_22 = (rbx_34 & 0xffff8000) << 0x10
                                                    int16_t rax_63 = rbx_34.w & 0x7c00
                                                    int32_t var_208_5
                                                    
                                                    if (rax_63 == 0)
                                                        int32_t rbx_35 = rbx_34 & 0x3ff
                                                        
                                                        if (rbx_35 != 0)
                                                            if (data_143cda914 s> *(0x14 + *(
                                                                    ThreadLocalStoragePointer
                                                                    + (r15_1 << 3))))
                                                                _Init_thread_header(&data_143cda914)
                                                                
                                                                if (data_143cda914 == 0xffffffff)
                                                                    data_143cda910 = 0x3fb8aa3b
                                                                    _Init_thread_footer(&data_143cda914)
                                                            
                                                            zmm0_1 = zx.o(0)
                                                            zmm0_1[0] = float.s(zx.q(rbx_35))
                                                            zmm0_1 = logf(zmm0_1[0])
                                                            zmm0_1[0] = zmm0_1[0] f* data_143cda910
                                                            int32_t rdx_10 = 0xa - int.d(zmm0_1[0])
                                                            var_208_5 = (rbx_35 << (rdx_10.b + 0xd)
                                                                & 0x7fffff) | ((0x71 - rdx_10) << 0x17
                                                                & 0x7f800000) | r14_22
                                                        else
                                                            var_208_5 = r14_22
                                                    else if (rax_63 != 0x7c00)
                                                        var_208_5 =
                                                            ((rbx_34 u>> 0xa & 0x1f) + 0x70) << 0x17
                                                            | (rbx_34 & 0x3ff) << 0xd | r14_22
                                                    else
                                                        var_208_5 = r14_22 | 0x477fe000
                                                    
                                                    uint32_t rbx_42 =
                                                        zx.d(*(rdi_1 + (rsi_1 << 3) + 0xc))
                                                    zmm10 = var_208_5
                                                    int32_t r14_26 = (rbx_42 & 0xffff8000) << 0x10
                                                    int16_t rax_77 = rbx_42.w & 0x7c00
                                                    int32_t var_208_6
                                                    
                                                    if (rax_77 == 0)
                                                        int32_t rbx_43 = rbx_42 & 0x3ff
                                                        
                                                        if (rbx_43 != 0)
                                                            if (data_143cda914 s> *(0x14 + *(
                                                                    ThreadLocalStoragePointer
                                                                    + (r15_1 << 3))))
                                                                _Init_thread_header(&data_143cda914)
                                                                
                                                                if (data_143cda914 == 0xffffffff)
                                                                    data_143cda910 = 0x3fb8aa3b
                                                                    _Init_thread_footer(&data_143cda914)
                                                            
                                                            zmm0_1 = zx.o(0)
                                                            zmm0_1[0] = float.s(zx.q(rbx_43))
                                                            zmm0_1 = logf(zmm0_1[0])
                                                            zmm0_1[0] = zmm0_1[0] f* data_143cda910
                                                            int32_t rdx_11 = 0xa - int.d(zmm0_1[0])
                                                            var_208_6 = (rbx_43 << (rdx_11.b + 0xd)
                                                                & 0x7fffff) | ((0x71 - rdx_11) << 0x17
                                                                & 0x7f800000) | r14_26
                                                        else
                                                            var_208_6 = r14_26
                                                    else if (rax_77 != 0x7c00)
                                                        var_208_6 =
                                                            ((rbx_42 u>> 0xa & 0x1f) + 0x70) << 0x17
                                                            | (rbx_42 & 0x3ff) << 0xd | r14_26
                                                    else
                                                        var_208_6 = r14_26 | 0x477fe000
                                                    
                                                    uint32_t rax_91 =
                                                        zx.d(*(rdi_1 + (rsi_1 << 3) + 0xe))
                                                    zmm9 = var_208_6
                                                    
                                                    if ((0x7c00 & rax_91.w) == 0
                                                            && (rax_91 & 0x3ff) != 0
                                                            && data_143cda914 s> *(0x14 + *(
                                                            ThreadLocalStoragePointer
                                                            + (r15_1 << 3))))
                                                        _Init_thread_header(&data_143cda914)
                                                        
                                                        if (data_143cda914 == 0xffffffff)
                                                            data_143cda910 = 0x3fb8aa3b
                                                            _Init_thread_footer(&data_143cda914)
                                                    
                                                    uint32_t rbx_50 =
                                                        zx.d(*(rdi_1 + (rsi_1 << 3) + 0x10))
                                                    int32_t r14_30 = (rbx_50 & 0xffff8000) << 0x10
                                                    int16_t rax_94 = rbx_50.w & 0x7c00
                                                    int32_t var_208_7
                                                    
                                                    if (rax_94 == 0)
                                                        int32_t rbx_51 = rbx_50 & 0x3ff
                                                        
                                                        if (rbx_51 != 0)
                                                            if (data_143cda914 s> *(0x14 + *(
                                                                    ThreadLocalStoragePointer
                                                                    + (r15_1 << 3))))
                                                                _Init_thread_header(&data_143cda914)
                                                                
                                                                if (data_143cda914 == 0xffffffff)
                                                                    data_143cda910 = 0x3fb8aa3b
                                                                    _Init_thread_footer(&data_143cda914)
                                                            
                                                            zmm0_1 = zx.o(0)
                                                            zmm0_1[0] = float.s(zx.q(rbx_51))
                                                            zmm0_1 = logf(zmm0_1[0])
                                                            zmm0_1[0] = zmm0_1[0] f* data_143cda910
                                                            int32_t rdx_12 = 0xa - int.d(zmm0_1[0])
                                                            var_208_7 = (rbx_51 << (rdx_12.b + 0xd)
                                                                & 0x7fffff) | ((0x71 - rdx_12) << 0x17
                                                                & 0x7f800000) | r14_30
                                                        else
                                                            var_208_7 = r14_30
                                                    else if (rax_94 != 0x7c00)
                                                        var_208_7 =
                                                            ((rbx_50 u>> 0xa & 0x1f) + 0x70) << 0x17
                                                            | (rbx_50 & 0x3ff) << 0xd | r14_30
                                                    else
                                                        var_208_7 = r14_30 | 0x477fe000
                                                    
                                                    uint32_t rbx_58 =
                                                        zx.d(*(rdi_1 + (rsi_1 << 3) + 0x12))
                                                    zmm8 = var_208_7
                                                    int32_t r14_34 = (rbx_58 & 0xffff8000) << 0x10
                                                    int16_t rax_108 = rbx_58.w & 0x7c00
                                                    int32_t var_208_8
                                                    
                                                    if (rax_108 == 0)
                                                        int32_t rbx_59 = rbx_58 & 0x3ff
                                                        
                                                        if (rbx_59 != 0)
                                                            if (data_143cda914 s> *(0x14 + *(
                                                                    ThreadLocalStoragePointer
                                                                    + (r15_1 << 3))))
                                                                _Init_thread_header(&data_143cda914)
                                                                
                                                                if (data_143cda914 == 0xffffffff)
                                                                    data_143cda910 = 0x3fb8aa3b
                                                                    _Init_thread_footer(&data_143cda914)
                                                            
                                                            zmm0_1 = zx.o(0)
                                                            zmm0_1[0] = float.s(zx.q(rbx_59))
                                                            zmm0_1 = logf(zmm0_1[0])
                                                            zmm0_1[0] = zmm0_1[0] f* data_143cda910
                                                            int32_t rdx_13 = 0xa - int.d(zmm0_1[0])
                                                            var_208_8 = (rbx_59 << (rdx_13.b + 0xd)
                                                                & 0x7fffff) | ((0x71 - rdx_13) << 0x17
                                                                & 0x7f800000) | r14_34
                                                        else
                                                            var_208_8 = r14_34
                                                    else if (rax_108 != 0x7c00)
                                                        var_208_8 =
                                                            ((rbx_58 u>> 0xa & 0x1f) + 0x70) << 0x17
                                                            | (rbx_58 & 0x3ff) << 0xd | r14_34
                                                    else
                                                        var_208_8 = r14_34 | 0x477fe000
                                                    
                                                    uint32_t rbx_66 =
                                                        zx.d(*(rdi_1 + (rsi_1 << 3) + 0x14))
                                                    zmm7_1 = var_208_8
                                                    int32_t r14_38 = (rbx_66 & 0xffff8000) << 0x10
                                                    int16_t rax_122 = rbx_66.w & 0x7c00
                                                    int32_t var_208_9
                                                    
                                                    if (rax_122 == 0)
                                                        int32_t rbx_67 = rbx_66 & 0x3ff
                                                        
                                                        if (rbx_67 != 0)
                                                            if (data_143cda914 s> *(0x14 + *(
                                                                    ThreadLocalStoragePointer
                                                                    + (r15_1 << 3))))
                                                                _Init_thread_header(&data_143cda914)
                                                                
                                                                if (data_143cda914 == 0xffffffff)
                                                                    data_143cda910 = 0x3fb8aa3b
                                                                    _Init_thread_footer(&data_143cda914)
                                                            
                                                            zmm0_1 = zx.o(0)
                                                            zmm0_1[0] = float.s(zx.q(rbx_67))
                                                            zmm0_1 = logf(zmm0_1[0])
                                                            zmm0_1[0] = zmm0_1[0] f* data_143cda910
                                                            int32_t rdx_14 = 0xa - int.d(zmm0_1[0])
                                                            var_208_9 = (rbx_67 << (rdx_14.b + 0xd)
                                                                & 0x7fffff) | ((0x71 - rdx_14) << 0x17
                                                                & 0x7f800000) | r14_38
                                                        else
                                                            var_208_9 = r14_38
                                                    else if (rax_122 != 0x7c00)
                                                        var_208_9 =
                                                            ((rbx_66 u>> 0xa & 0x1f) + 0x70) << 0x17
                                                            | (rbx_66 & 0x3ff) << 0xd | r14_38
                                                    else
                                                        var_208_9 = r14_38 | 0x477fe000
                                                    
                                                    uint32_t rax_136 =
                                                        zx.d(*(rdi_1 + (rsi_1 << 3) + 0x16))
                                                    zmm6_1 = var_208_9
                                                    
                                                    if ((0x7c00 & rax_136.w) == 0
                                                            && (rax_136 & 0x3ff) != 0
                                                            && data_143cda914 s> *(0x14 + *(
                                                            ThreadLocalStoragePointer
                                                            + (r15_1 << 3))))
                                                        _Init_thread_header(&data_143cda914)
                                                        
                                                        if (data_143cda914 == 0xffffffff)
                                                            data_143cda910 = 0x3fb8aa3b
                                                            _Init_thread_footer(&data_143cda914)
                                                    
                                                    r14_3 = var_1f8_1
                                                
                                                int64_t* rcx_27 = *r13_3
                                                int64_t rbx_74 = r13_3[1]
                                                float var_168 = zmm14[0]
                                                float var_164_1 = zmm13[0]
                                                float var_160_1 = zmm12[0]
                                                float var_158_1 = zmm11[0]
                                                float var_154_1 = zmm10[0]
                                                float var_150_1 = zmm9[0]
                                                float var_148_1 = zmm8[0]
                                                uint32_t var_144_1 = zmm7_1[0]
                                                float var_140_1 = zmm6_1[0]
                                                int32_t var_15c_1 = 0
                                                int32_t var_14c_1 = 0
                                                int32_t var_13c_1 = 0
                                                (*(*rcx_27 + 0x28))(rcx_27)
                                                int64_t* rcx_28 = *r13_3
                                                (*(*rcx_28 + 0x20))(rcx_28)
                                                int32_t var_12c_1 = 0
                                                zmm1_1 = *((var_1e8_1 << 4) + rbx_74)
                                                float var_138_1 = zmm1_1[0]
                                                float temp0_3[0x4] =
                                                    _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                                                float var_130_1 =
                                                    _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)[0]
                                                float var_134_1 = temp0_3[0]
                                                sub_1407c8dd0(&var_1d8, &var_168)
                                                zmm5_1 = var_1d8
                                                zmm6_1 = zx.o(0)
                                                zmm12 = var_1c8
                                                zmm11 = var_1b8
                                                zmm15 = data_143f43320
                                                zmm13 = data_143f43310
                                                rbx_1 = var_1e8_1
                                                rdi = arg4
                                            
                                            r13_1 = zx.q(var_200_1)
                                        else
                                            result, zmm6_1, zmm15 = sub_1407c8dd0(&var_1d8, 
                                                (sx.q(rcx_2) << 6) + *(rsi + 0x498))
                                            zmm5_1 = var_1d8
                                            zmm12 = var_1c8
                                            zmm11 = var_1b8
                                            zmm13 = data_143f43310
                                        
                                        var_1e8_1.o = zmm11
                                        int32_t var_1e0
                                        
                                        if (zmm11[0] != zmm6_1[0] || var_1e8_1:4.d[0] != zmm6_1[0]
                                                || var_1e0[0] != zmm6_1[0])
                                            result.b = 0
                                        else
                                            result.b = 1
                                        
                                        if (result.b == 0)
                                            zmm1_1 = data_143f433d0
                                            var_1e8_1.o = zmm1_1
                                            zmm9 = *(arg1 + 0x1e0)
                                            zmm6_1 = *(arg1 + 0x1c0)
                                            
                                            if (_mm_movemask_ps(_mm_cmpeq_ps(
                                                    _mm_min_ps(zmm11, zmm9), zmm1_1, 1)) == 0)
                                                float temp0_137[0x4] = _mm_mul_ps(zmm12, zmm9)
                                                zmm7_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0x1b)
                                                float temp0_139[0x4] =
                                                    _mm_shuffle_ps(zmm5_1, zmm5_1, 0x4e)
                                                zmm7_1 = _mm_mul_ps(zmm7_1, 
                                                    _mm_shuffle_ps(zmm6_1, zmm6_1, 0))
                                                float temp0_142[0x4] =
                                                    _mm_shuffle_ps(temp0_137, temp0_137, 0xd2)
                                                float temp0_143[0x4] =
                                                    _mm_shuffle_ps(zmm6_1, zmm6_1, 0xff)
                                                float temp0_144[0x4] = _mm_mul_ps(zmm5_1, temp0_143)
                                                zmm7_1 = __mulps_xmmps_memps(zmm7_1, data_143f433b0)
                                                float temp0_146[0x4] =
                                                    _mm_shuffle_ps(zmm5_1, zmm5_1, 0xb1)
                                                zmm14 = _mm_mul_ps(zmm11, zmm9)
                                                zmm7_1 = _mm_add_ps(zmm7_1, temp0_144)
                                                float temp0_150[0x4] = _mm_mul_ps(temp0_139, 
                                                    _mm_shuffle_ps(zmm6_1, zmm6_1, 0x55))
                                                float temp0_152[0x4] = _mm_mul_ps(temp0_146, 
                                                    _mm_shuffle_ps(zmm6_1, zmm6_1, 0xaa))
                                                float temp0_153[0x4] =
                                                    __mulps_xmmps_memps(temp0_150, data_143f433a0)
                                                float temp0_154[0x4] =
                                                    _mm_shuffle_ps(temp0_137, temp0_137, 0xc9)
                                                float temp0_155[0x4] =
                                                    __mulps_xmmps_memps(temp0_152, data_143f43390)
                                                zmm7_1 = _mm_add_ps(zmm7_1, temp0_153)
                                                float temp0_157[0x4] =
                                                    _mm_shuffle_ps(zmm6_1, zmm6_1, 0xd2)
                                                float temp0_158[0x4] =
                                                    _mm_mul_ps(temp0_154, temp0_157)
                                                float temp0_159[0x4] =
                                                    _mm_shuffle_ps(zmm6_1, zmm6_1, 0xc9)
                                                float temp0_160[0x4] =
                                                    _mm_mul_ps(temp0_142, temp0_159)
                                                zmm7_1 = _mm_add_ps(zmm7_1, temp0_155)
                                                float temp0_162[0x4] =
                                                    _mm_sub_ps(temp0_160, temp0_158)
                                                float temp0_163[0x4] =
                                                    _mm_add_ps(temp0_162, temp0_162)
                                                float temp0_164[0x4] =
                                                    _mm_shuffle_ps(temp0_163, temp0_163, 0xd2)
                                                float temp0_165[0x4] =
                                                    _mm_shuffle_ps(temp0_163, temp0_163, 0xc9)
                                                float temp0_166[0x4] =
                                                    _mm_mul_ps(temp0_164, temp0_159)
                                                float temp0_167[0x4] =
                                                    _mm_mul_ps(temp0_165, temp0_157)
                                                float temp0_168[0x4] =
                                                    _mm_mul_ps(temp0_163, temp0_143)
                                                zmm8 = __addps_xmmps_memps(
                                                    _mm_add_ps(_mm_sub_ps(temp0_166, temp0_167), 
                                                        _mm_add_ps(temp0_168, temp0_137)), 
                                                    *(arg1 + 0x1d0))
                                            else
                                                zmm8 = *(arg1 + 0x1d0)
                                                float temp0_8[0x4] = _mm_add_ps(zmm6_1, zmm6_1)
                                                float temp0_9[0x4] =
                                                    _mm_shuffle_ps(zmm6_1, zmm6_1, 4)
                                                float temp0_10[0x4] =
                                                    _mm_shuffle_ps(zmm9, zmm9, 0xc9)
                                                float temp0_11[0x4] =
                                                    _mm_shuffle_ps(zmm6_1, zmm6_1, 0xff)
                                                _mm_mul_ps(zmm9, zmm11)
                                                float temp0_13[0x4] = _mm_mul_ps(zmm6_1, temp0_8)
                                                float temp0_15[0x4] = _mm_mul_ps(temp0_9, 
                                                    _mm_shuffle_ps(temp0_8, temp0_8, 0x29))
                                                float temp0_16[0x4] =
                                                    _mm_shuffle_ps(temp0_8, temp0_8, 0x12)
                                                float temp0_17[0x4] =
                                                    _mm_shuffle_ps(temp0_13, temp0_13, 0x1a)
                                                float temp0_18[0x4] = _mm_mul_ps(temp0_11, temp0_16)
                                                float temp0_20[0x4] = _mm_add_ps(temp0_17, 
                                                    _mm_shuffle_ps(temp0_13, temp0_13, 1))
                                                float temp0_21[0x4] = _mm_add_ps(temp0_18, temp0_15)
                                                float temp0_22[0x4] = _mm_sub_ps(temp0_15, temp0_18)
                                                float temp0_23[0x4] = _mm_sub_ps(zmm13, temp0_20)
                                                float temp0_24[0x4] = _mm_mul_ps(temp0_21, zmm9)
                                                float temp0_25[0x4] = _mm_mul_ps(temp0_10, temp0_22)
                                                float temp0_26[0x4] = _mm_mul_ps(temp0_23, zmm9)
                                                float temp0_27[0x4] = _mm_add_ps(zmm5_1, zmm5_1)
                                                zmm1_1 = _mm_and_ps(temp0_26, zmm15)
                                                float temp0_29[0x4] = _mm_mul_ps(zmm5_1, temp0_27)
                                                float temp0_30[0x4] =
                                                    _mm_shuffle_ps(temp0_25, zmm1_1, 0x32)
                                                float temp0_32[0x4] = _mm_shuffle_ps(
                                                    _mm_shuffle_ps(temp0_24, zmm1_1, 0), temp0_30, 
                                                    0x82)
                                                float temp0_33[0x4] =
                                                    _mm_shuffle_ps(temp0_24, zmm1_1, 0x31)
                                                zmm7_1 = _mm_shuffle_ps(
                                                    _mm_shuffle_ps(temp0_25, zmm1_1, 0x10), 
                                                    temp0_33, 0x88)
                                                float temp0_37[0x4] = _mm_shuffle_ps(
                                                    _mm_shuffle_ps(temp0_24, temp0_25, 0x12), 
                                                    zmm1_1, 0xe8)
                                                float temp0_38[0x4] =
                                                    _mm_shuffle_ps(temp0_27, temp0_27, 0x29)
                                                zmm13[0].q = zmm8 u>> 0x40
                                                float temp0_39[0x4] =
                                                    _mm_shuffle_ps(zmm8, zmm13, 0xc4)
                                                float temp0_41[0x4] = _mm_mul_ps(temp0_38, 
                                                    _mm_shuffle_ps(zmm5_1, zmm5_1, 4))
                                                float temp0_42[0x4] =
                                                    _mm_shuffle_ps(temp0_29, temp0_29, 0x1a)
                                                float temp0_43[0x4] =
                                                    _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
                                                float temp0_45[0x4] = _mm_add_ps(temp0_42, 
                                                    _mm_shuffle_ps(temp0_29, temp0_29, 1))
                                                float temp0_47[0x4] = _mm_mul_ps(
                                                    _mm_shuffle_ps(temp0_27, temp0_27, 0x12), 
                                                    temp0_43)
                                                float temp0_48[0x4] =
                                                    _mm_shuffle_ps(zmm11, zmm11, 0xc9)
                                                float temp0_49[0x4] = _mm_add_ps(temp0_47, temp0_41)
                                                float temp0_50[0x4] = _mm_sub_ps(temp0_41, temp0_47)
                                                float temp0_51[0x4] = _mm_mul_ps(temp0_49, zmm11)
                                                float temp0_52[0x4] = _mm_mul_ps(temp0_48, temp0_50)
                                                zmm1_1 = _mm_and_ps(
                                                    _mm_mul_ps(_mm_sub_ps(zmm13, temp0_45), zmm11), 
                                                    zmm15)
                                                float temp0_56[0x4] =
                                                    _mm_shuffle_ps(temp0_52, zmm1_1, 0x32)
                                                float temp0_58[0x4] = _mm_shuffle_ps(
                                                    _mm_shuffle_ps(temp0_51, zmm1_1, 0), temp0_56, 
                                                    0x82)
                                                float temp0_59[0x4] =
                                                    _mm_shuffle_ps(temp0_51, zmm1_1, 0x31)
                                                float temp0_61[0x4] = _mm_shuffle_ps(
                                                    _mm_shuffle_ps(temp0_52, zmm1_1, 0x10), 
                                                    temp0_59, 0x88)
                                                float temp0_62[0x4] =
                                                    _mm_shuffle_ps(temp0_51, temp0_52, 0x12)
                                                float temp0_63[0x4] =
                                                    _mm_shuffle_ps(temp0_58, temp0_58, 0x55)
                                                float temp0_64[0x4] =
                                                    _mm_shuffle_ps(temp0_62, zmm1_1, 0xe8)
                                                float temp0_65[0x4] = _mm_mul_ps(temp0_63, zmm7_1)
                                                float temp0_67[0x4] = _mm_mul_ps(
                                                    _mm_shuffle_ps(temp0_58, temp0_58, 0xaa), 
                                                    temp0_37)
                                                zmm13[0].q = zmm12 u>> 0x40
                                                float temp0_68[0x4] =
                                                    _mm_shuffle_ps(zmm12, zmm13, 0xc4)
                                                float temp0_69[0x4] =
                                                    _mm_shuffle_ps(temp0_58, temp0_58, 0)
                                                float temp0_71[0x4] = _mm_mul_ps(
                                                    _mm_shuffle_ps(temp0_58, temp0_58, 0xff), 
                                                    temp0_39)
                                                float temp0_73[0x4] = _mm_add_ps(temp0_65, 
                                                    _mm_mul_ps(temp0_69, temp0_32))
                                                float temp0_75[0x4] = _mm_mul_ps(
                                                    _mm_shuffle_ps(temp0_61, temp0_61, 0), temp0_32)
                                                float temp0_76[0x4] = _mm_add_ps(temp0_73, temp0_67)
                                                float temp0_78[0x4] = _mm_mul_ps(
                                                    _mm_shuffle_ps(temp0_61, temp0_61, 0xaa), 
                                                    temp0_37)
                                                float temp0_79[0x4] = _mm_add_ps(temp0_76, temp0_71)
                                                float temp0_81[0x4] = _mm_mul_ps(
                                                    _mm_shuffle_ps(temp0_61, temp0_61, 0x55), 
                                                    zmm7_1)
                                                float temp0_82[0x4] =
                                                    _mm_shuffle_ps(temp0_61, temp0_61, 0xff)
                                                var_1d8 = temp0_79
                                                float temp0_83[0x4] =
                                                    _mm_shuffle_ps(temp0_64, temp0_64, 0x55)
                                                float temp0_84[0x4] = _mm_add_ps(temp0_81, temp0_75)
                                                float temp0_85[0x4] = _mm_mul_ps(temp0_83, zmm7_1)
                                                float temp0_86[0x4] = _mm_mul_ps(temp0_82, temp0_39)
                                                float temp0_87[0x4] =
                                                    _mm_shuffle_ps(temp0_64, temp0_64, 0)
                                                float temp0_88[0x4] = _mm_add_ps(temp0_84, temp0_78)
                                                float temp0_89[0x4] = _mm_mul_ps(temp0_87, temp0_32)
                                                float temp0_91[0x4] = _mm_mul_ps(
                                                    _mm_shuffle_ps(temp0_64, temp0_64, 0xaa), 
                                                    temp0_37)
                                                float temp0_92[0x4] = _mm_add_ps(temp0_88, temp0_86)
                                                float temp0_93[0x4] =
                                                    _mm_shuffle_ps(temp0_64, temp0_64, 0xff)
                                                float temp0_94[0x4] = _mm_add_ps(temp0_85, temp0_89)
                                                float temp0_95[0x4] = _mm_mul_ps(temp0_93, temp0_39)
                                                float temp0_96[0x4] =
                                                    _mm_shuffle_ps(temp0_68, temp0_68, 0)
                                                var_1c8 = temp0_92
                                                float temp0_97[0x4] =
                                                    _mm_shuffle_ps(temp0_68, temp0_68, 0x55)
                                                float temp0_98[0x4] = _mm_add_ps(temp0_94, temp0_91)
                                                float temp0_99[0x4] = _mm_mul_ps(temp0_97, zmm7_1)
                                                float temp0_101[0x4] = _mm_mul_ps(
                                                    _mm_shuffle_ps(temp0_68, temp0_68, 0xaa), 
                                                    temp0_37)
                                                float temp0_102[0x4] =
                                                    _mm_mul_ps(temp0_96, temp0_32)
                                                float temp0_103[0x4] =
                                                    _mm_add_ps(temp0_98, temp0_95)
                                                float temp0_105[0x4] = _mm_mul_ps(
                                                    _mm_shuffle_ps(temp0_68, temp0_68, 0xff), 
                                                    temp0_39)
                                                var_1b8 = temp0_103
                                                int96_t var_1a8_1 = _mm_add_ps(
                                                    _mm_add_ps(_mm_add_ps(temp0_99, temp0_102), 
                                                        temp0_101), 
                                                    temp0_105)[0].12
                                                zmm13, zmm14, zmm15 =
                                                    sub_1407740e0(&var_1d8, 0x322bcc77)
                                                float zmm2_2[0x4] = var_1d8[0]
                                                float zmm1_2 = var_1d8[1]
                                                float zmm4_2[0x4] = _mm_and_ps(
                                                    _mm_cmpeq_ps(var_1e8_1.o, zmm14, 2), 
                                                    data_143f433c0 ^ zmm13)
                                                uint32_t zmm0_2[0x4] = var_1d8[2]
                                                zmm4_2 ^= data_143f433c0
                                                zmm2_2[0] = zmm2_2[0] * zmm4_2[0]
                                                zmm1_2 = zmm1_2 * zmm4_2[0]
                                                var_1d8[0] = zmm2_2[0]
                                                zmm0_2[0] = zmm0_2[0] f* zmm4_2[0]
                                                float zmm3_2 = var_1c8[0]
                                                var_1d8[1] = zmm1_2
                                                zmm1_2 = var_1c8[1]
                                                float temp0_111[0x4] =
                                                    _mm_shuffle_ps(zmm4_2, zmm4_2, 0x55)
                                                zmm1_2 = zmm1_2 * temp0_111[0]
                                                var_1d8[2] = zmm0_2[0]
                                                zmm0_2 = var_1c8[2]
                                                zmm0_2[0] = zmm0_2[0] f* temp0_111[0]
                                                zmm3_2 = zmm3_2 * temp0_111[0]
                                                zmm2_2 = var_1b8[0]
                                                float temp0_112[0x4] =
                                                    _mm_shuffle_ps(zmm4_2, zmm4_2, 0xaa)
                                                var_1c8[1] = zmm1_2
                                                zmm1_2 = var_1b8[1]
                                                var_1c8[2] = zmm0_2[0]
                                                zmm0_2 = var_1b8[2]
                                                zmm1_2 = zmm1_2 * temp0_112[0]
                                                zmm0_2[0] = zmm0_2[0] f* temp0_112[0]
                                                zmm2_2[0] = zmm2_2[0] * temp0_112[0]
                                                var_1b8[1] = zmm1_2
                                                var_1b8[2] = zmm0_2[0]
                                                var_1c8[0] = zmm3_2
                                                var_1b8[0] = zmm2_2[0]
                                                sub_14077e4a0(&var_188, &var_1d8)
                                                zmm5_1 = var_188.o
                                                zmm7_1 = data_143f43360
                                                float temp0_113[0x4] = _mm_mul_ps(zmm5_1, zmm5_1)
                                                float temp0_115[0x4] = _mm_add_ps(temp0_113, 
                                                    _mm_shuffle_ps(temp0_113, temp0_113, 0x4e))
                                                float temp0_117[0x4] = _mm_add_ps(
                                                    _mm_shuffle_ps(temp0_115, temp0_115, 0x39), 
                                                    temp0_115)
                                                float temp0_118[0x4] = _mm_rsqrt_ps(temp0_117)
                                                float temp0_119[0x4] = _mm_mul_ps(temp0_117, zmm7_1)
                                                float temp0_124[0x4] = _mm_add_ps(
                                                    _mm_mul_ps(
                                                        _mm_sub_ps(zmm7_1, 
                                                            _mm_mul_ps(
                                                                _mm_mul_ps(temp0_118, temp0_118), 
                                                                temp0_119)), 
                                                        temp0_118), 
                                                    temp0_118)
                                                zmm7_1 = _mm_sub_ps(zmm7_1, 
                                                    _mm_mul_ps(_mm_mul_ps(temp0_124, temp0_124), 
                                                        temp0_119))
                                                float temp0_129[0x4] = _mm_cmpeq_ps(
                                                    _mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), 
                                                    temp0_117, 2)
                                                zmm7_1 = _mm_add_ps(_mm_mul_ps(zmm7_1, temp0_124), 
                                                    temp0_124)
                                                float temp0_132[0x4] =
                                                    _mm_unpacklo_ps(var_1a8_1:4.d, 0)
                                                zmm7_1 = _mm_and_ps(
                                                    _mm_mul_ps(zmm7_1, zmm5_1) ^ data_143f43350, 
                                                    temp0_129) ^ data_143f43350
                                                zmm8 = _mm_unpacklo_ps(
                                                    _mm_unpacklo_ps(var_1a8_1.d, 
                                                        var_1a8_1:8.d[0].q), 
                                                    temp0_132[0].q)
                                                var_188.o = zmm7_1
                                            
                                            int64_t rsi_2 = sx.q(rdi[1].d)
                                            zmm6_1 = zx.o(0)
                                            int32_t rax_147 = (rsi_2 + 1).d
                                            rdi[1].d = rax_147
                                            
                                            if (rax_147 s> *(rdi + 0xc))
                                                sub_140638970(rdi)
                                                zmm15 = data_143f43320
                                            
                                            int64_t rax_148 = *rdi
                                            int64_t rcx_36 = rsi_2 * 6
                                            *(rax_148 + (rcx_36 << 3)) = zmm7_1
                                            *(rax_148 + (rcx_36 << 3) + 0x10) = zmm8
                                            *(rax_148 + (rcx_36 << 3) + 0x20) = zmm14
                                            zmm13 = data_143f43310
                                        
                                        rsi = arg1
                                        r13_1 = zx.q(r13_1.d + 1)
                                        result = zx.q(result_1)
                                        rbx_1 += 1
                                        zmm1_1 = zx.o(0)
                                        var_200_1 = r13_1.d
                                        var_1e8_1 = rbx_1
                                    while (r13_1.d s<= *(r14_3 + 0x24))
                            else
                                for (; i s<= *(r14_3 + 0x1c); i += 1)
                                    result = sub_142058770(rsi, arg2, zx.q(i), rdi)

return result
