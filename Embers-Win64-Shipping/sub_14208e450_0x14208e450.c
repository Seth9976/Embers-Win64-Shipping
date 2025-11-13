// 函数: sub_14208e450
// 地址: 0x14208e450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r13 = arg1
sub_14238d590(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10)
int32_t rax_1 = *(arg9 + 0xc)
int32_t rsi = 0
int32_t var_184 = 0
arg9[1].d = 0

if (rax_1 s< 0 && rax_1 != 0)
    sub_1405a52a0(arg9, 0)

uint64_t result = *(r13 + 0x650)
int32_t r14_1 = *(*(result + 0x28) + 0x40)
int32_t var_180 = r14_1

if (r14_1 != 0)
    TEB* gsbase
    void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
    uint64_t r15_1 = zx.q(data_14401b1a0)
    float zmm6[0x4]
    float var_58_1[0x4] = zmm6
    float zmm7[0x4]
    float var_68_1[0x4] = zmm7
    float zmm8[0x4]
    float var_78_1[0x4] = zmm8
    float zmm9[0x4]
    float var_88_1[0x4] = zmm9
    float zmm10[0x4]
    float var_98_1[0x4] = zmm10
    float zmm11[0x4]
    float var_a8_1[0x4] = zmm11
    float zmm12[0x4]
    float var_b8_1[0x4] = zmm12
    float zmm13[0x4]
    float var_c8_1[0x4] = zmm13
    int128_t zmm14
    int128_t var_d8_1 = zmm14
    int128_t zmm15
    int128_t var_e8_1 = zmm15
    
    do
        int64_t rbx_1 = sx.q(rsi)
        int64_t* r13_1 = *(*(r13 + 0x650) + 0x28)
        int64_t rdi_1 = r13_1[3]
        int64_t rdx = *(*r13_1[2] + 0x28)
        float var_178_1
        float var_168_1
        float var_158_1
        float zmm0_1[0x4]
        
        if (r13_1[9].b == 0)
            rdx()
            int64_t* rcx_30 = r13_1[2]
            (*(*rcx_30 + 0x20))(rcx_30)
            int64_t rax_147 = rbx_1 * 0xc
            zmm11 = *(rdi_1 + (rax_147 << 2) + 8)
            zmm15 = *(rdi_1 + (rax_147 << 2) + 0x14)
            zmm12 = *(rdi_1 + (rax_147 << 2) + 0x18)
            zmm14 = *(rdi_1 + (rax_147 << 2) + 0x20)
            zmm13 = *(rdi_1 + (rax_147 << 2) + 0x24)
            zmm10 = *(rdi_1 + (rax_147 << 2) + 0x28)
            var_168_1 = (*(rdi_1 + (rax_147 << 2)))[0]
            var_158_1 = (*(rdi_1 + (rax_147 << 2) + 4))[0]
            var_178_1 = (*(rdi_1 + (rax_147 << 2) + 0x10))[0]
        else
            rdx()
            int64_t* rcx_3 = r13_1[2]
            (*(*rcx_3 + 0x20))(rcx_3)
            int64_t r14_2 = rbx_1 * 3
            uint32_t rbx_2 = zx.d(*(rdi_1 + (r14_2 << 3)))
            int32_t rsi_3 = (rbx_2 & 0xffff8000) << 0x10
            int16_t rax_5 = rbx_2.w & 0x7c00
            int32_t var_188_1
            
            if (rax_5 == 0)
                int32_t rbx_3 = rbx_2 & 0x3ff
                
                if (rbx_3 != 0)
                    if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (r15_1 << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    zmm0_1 = zx.o(0)
                    zmm0_1[0] = float.s(zx.q(rbx_3))
                    zmm0_1 = logf(zmm0_1[0])
                    zmm0_1[0] = zmm0_1[0] f* data_143cda910
                    int32_t rdx_1 = 0xa - int.d(zmm0_1[0])
                    var_188_1 = (rbx_3 << (rdx_1.b + 0xd) & 0x7fffff)
                        | ((0x71 - rdx_1) << 0x17 & 0x7f800000) | rsi_3
                else
                    var_188_1 = rsi_3
            else if (rax_5 != 0x7c00)
                var_188_1 = ((rbx_2 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_2 & 0x3ff) << 0xd | rsi_3
            else
                var_188_1 = rsi_3 | 0x477fe000
            
            uint32_t rbx_10 = zx.d(*(rdi_1 + (r14_2 << 3) + 2))
            var_168_1 = var_188_1[0]
            int32_t rsi_7 = (rbx_10 & 0xffff8000) << 0x10
            int16_t rax_19 = rbx_10.w & 0x7c00
            int32_t var_188_2
            
            if (rax_19 == 0)
                int32_t rbx_11 = rbx_10 & 0x3ff
                
                if (rbx_11 != 0)
                    if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (r15_1 << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    zmm0_1 = zx.o(0)
                    zmm0_1[0] = float.s(zx.q(rbx_11))
                    zmm0_1 = logf(zmm0_1[0])
                    zmm0_1[0] = zmm0_1[0] f* data_143cda910
                    int32_t rdx_2 = 0xa - int.d(zmm0_1[0])
                    var_188_2 = (rbx_11 << (rdx_2.b + 0xd) & 0x7fffff)
                        | ((0x71 - rdx_2) << 0x17 & 0x7f800000) | rsi_7
                else
                    var_188_2 = rsi_7
            else if (rax_19 != 0x7c00)
                var_188_2 =
                    ((rbx_10 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_10 & 0x3ff) << 0xd | rsi_7
            else
                var_188_2 = rsi_7 | 0x477fe000
            
            uint32_t rbx_18 = zx.d(*(rdi_1 + (r14_2 << 3) + 4))
            var_158_1 = var_188_2[0]
            int32_t rsi_11 = (rbx_18 & 0xffff8000) << 0x10
            int16_t rax_33 = rbx_18.w & 0x7c00
            int32_t var_188_3
            
            if (rax_33 == 0)
                int32_t rbx_19 = rbx_18 & 0x3ff
                
                if (rbx_19 != 0)
                    if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (r15_1 << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    zmm0_1 = zx.o(0)
                    zmm0_1[0] = float.s(zx.q(rbx_19))
                    zmm0_1 = logf(zmm0_1[0])
                    zmm0_1[0] = zmm0_1[0] f* data_143cda910
                    int32_t rdx_3 = 0xa - int.d(zmm0_1[0])
                    var_188_3 = (rbx_19 << (rdx_3.b + 0xd) & 0x7fffff)
                        | ((0x71 - rdx_3) << 0x17 & 0x7f800000) | rsi_11
                else
                    var_188_3 = rsi_11
            else if (rax_33 != 0x7c00)
                var_188_3 =
                    ((rbx_18 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_18 & 0x3ff) << 0xd | rsi_11
            else
                var_188_3 = rsi_11 | 0x477fe000
            
            uint32_t rax_47 = zx.d(*(rdi_1 + (r14_2 << 3) + 6))
            zmm11 = var_188_3
            
            if ((0x7c00 & rax_47.w) == 0 && (rax_47 & 0x3ff) != 0
                    && data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (r15_1 << 3))))
                _Init_thread_header(&data_143cda914)
                
                if (data_143cda914 == 0xffffffff)
                    data_143cda910 = 0x3fb8aa3b
                    _Init_thread_footer(&data_143cda914)
            
            uint32_t rbx_26 = zx.d(*(rdi_1 + (r14_2 << 3) + 8))
            int32_t rsi_15 = (rbx_26 & 0xffff8000) << 0x10
            int16_t rax_50 = rbx_26.w & 0x7c00
            int32_t var_188_4
            
            if (rax_50 == 0)
                int32_t rbx_27 = rbx_26 & 0x3ff
                
                if (rbx_27 != 0)
                    if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (r15_1 << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    zmm0_1 = zx.o(0)
                    zmm0_1[0] = float.s(zx.q(rbx_27))
                    zmm0_1 = logf(zmm0_1[0])
                    zmm0_1[0] = zmm0_1[0] f* data_143cda910
                    int32_t rdx_4 = 0xa - int.d(zmm0_1[0])
                    var_188_4 = (rbx_27 << (rdx_4.b + 0xd) & 0x7fffff)
                        | ((0x71 - rdx_4) << 0x17 & 0x7f800000) | rsi_15
                else
                    var_188_4 = rsi_15
            else if (rax_50 != 0x7c00)
                var_188_4 =
                    ((rbx_26 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_26 & 0x3ff) << 0xd | rsi_15
            else
                var_188_4 = rsi_15 | 0x477fe000
            
            uint32_t rbx_34 = zx.d(*(rdi_1 + (r14_2 << 3) + 0xa))
            var_178_1 = var_188_4[0]
            int32_t rsi_19 = (rbx_34 & 0xffff8000) << 0x10
            int16_t rax_64 = rbx_34.w & 0x7c00
            int32_t var_188_5
            
            if (rax_64 == 0)
                int32_t rbx_35 = rbx_34 & 0x3ff
                
                if (rbx_35 != 0)
                    if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (r15_1 << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    zmm0_1 = zx.o(0)
                    zmm0_1[0] = float.s(zx.q(rbx_35))
                    zmm0_1 = logf(zmm0_1[0])
                    zmm0_1[0] = zmm0_1[0] f* data_143cda910
                    int32_t rdx_5 = 0xa - int.d(zmm0_1[0])
                    var_188_5 = (rbx_35 << (rdx_5.b + 0xd) & 0x7fffff)
                        | ((0x71 - rdx_5) << 0x17 & 0x7f800000) | rsi_19
                else
                    var_188_5 = rsi_19
            else if (rax_64 != 0x7c00)
                var_188_5 =
                    ((rbx_34 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_34 & 0x3ff) << 0xd | rsi_19
            else
                var_188_5 = rsi_19 | 0x477fe000
            
            uint32_t rbx_42 = zx.d(*(rdi_1 + (r14_2 << 3) + 0xc))
            zmm15 = var_188_5
            int32_t rsi_23 = (rbx_42 & 0xffff8000) << 0x10
            int16_t rax_78 = rbx_42.w & 0x7c00
            int32_t var_188_6
            
            if (rax_78 == 0)
                int32_t rbx_43 = rbx_42 & 0x3ff
                
                if (rbx_43 != 0)
                    if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (r15_1 << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    zmm0_1 = zx.o(0)
                    zmm0_1[0] = float.s(zx.q(rbx_43))
                    zmm0_1 = logf(zmm0_1[0])
                    zmm0_1[0] = zmm0_1[0] f* data_143cda910
                    int32_t rdx_6 = 0xa - int.d(zmm0_1[0])
                    var_188_6 = (rbx_43 << (rdx_6.b + 0xd) & 0x7fffff)
                        | ((0x71 - rdx_6) << 0x17 & 0x7f800000) | rsi_23
                else
                    var_188_6 = rsi_23
            else if (rax_78 != 0x7c00)
                var_188_6 =
                    ((rbx_42 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_42 & 0x3ff) << 0xd | rsi_23
            else
                var_188_6 = rsi_23 | 0x477fe000
            
            uint32_t rax_92 = zx.d(*(rdi_1 + (r14_2 << 3) + 0xe))
            zmm12 = var_188_6
            
            if ((0x7c00 & rax_92.w) == 0 && (rax_92 & 0x3ff) != 0
                    && data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (r15_1 << 3))))
                _Init_thread_header(&data_143cda914)
                
                if (data_143cda914 == 0xffffffff)
                    data_143cda910 = 0x3fb8aa3b
                    _Init_thread_footer(&data_143cda914)
            
            uint32_t rbx_50 = zx.d(*(rdi_1 + (r14_2 << 3) + 0x10))
            int32_t rsi_27 = (rbx_50 & 0xffff8000) << 0x10
            int16_t rax_95 = rbx_50.w & 0x7c00
            int32_t var_188_7
            
            if (rax_95 == 0)
                int32_t rbx_51 = rbx_50 & 0x3ff
                
                if (rbx_51 != 0)
                    if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (r15_1 << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    zmm0_1 = zx.o(0)
                    zmm0_1[0] = float.s(zx.q(rbx_51))
                    zmm0_1 = logf(zmm0_1[0])
                    zmm0_1[0] = zmm0_1[0] f* data_143cda910
                    int32_t rdx_7 = 0xa - int.d(zmm0_1[0])
                    var_188_7 = (rbx_51 << (rdx_7.b + 0xd) & 0x7fffff)
                        | ((0x71 - rdx_7) << 0x17 & 0x7f800000) | rsi_27
                else
                    var_188_7 = rsi_27
            else if (rax_95 != 0x7c00)
                var_188_7 =
                    ((rbx_50 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_50 & 0x3ff) << 0xd | rsi_27
            else
                var_188_7 = rsi_27 | 0x477fe000
            
            uint32_t rbx_58 = zx.d(*(rdi_1 + (r14_2 << 3) + 0x12))
            zmm14 = var_188_7
            int32_t rsi_31 = (rbx_58 & 0xffff8000) << 0x10
            int16_t rax_109 = rbx_58.w & 0x7c00
            int32_t var_188_8
            
            if (rax_109 == 0)
                int32_t rbx_59 = rbx_58 & 0x3ff
                
                if (rbx_59 != 0)
                    if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (r15_1 << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    zmm0_1 = zx.o(0)
                    zmm0_1[0] = float.s(zx.q(rbx_59))
                    zmm0_1 = logf(zmm0_1[0])
                    zmm0_1[0] = zmm0_1[0] f* data_143cda910
                    int32_t rdx_8 = 0xa - int.d(zmm0_1[0])
                    var_188_8 = (rbx_59 << (rdx_8.b + 0xd) & 0x7fffff)
                        | ((0x71 - rdx_8) << 0x17 & 0x7f800000) | rsi_31
                else
                    var_188_8 = rsi_31
            else if (rax_109 != 0x7c00)
                var_188_8 =
                    ((rbx_58 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_58 & 0x3ff) << 0xd | rsi_31
            else
                var_188_8 = rsi_31 | 0x477fe000
            
            uint32_t rbx_66 = zx.d(*(rdi_1 + (r14_2 << 3) + 0x14))
            zmm13 = var_188_8
            int32_t rsi_35 = (rbx_66 & 0xffff8000) << 0x10
            int16_t rax_123 = rbx_66.w & 0x7c00
            int32_t var_188_9
            
            if (rax_123 == 0)
                int32_t rbx_67 = rbx_66 & 0x3ff
                
                if (rbx_67 != 0)
                    if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (r15_1 << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    zmm0_1 = zx.o(0)
                    zmm0_1[0] = float.s(zx.q(rbx_67))
                    zmm0_1 = logf(zmm0_1[0])
                    zmm0_1[0] = zmm0_1[0] f* data_143cda910
                    int32_t rdx_9 = 0xa - int.d(zmm0_1[0])
                    var_188_9 = (rbx_67 << (rdx_9.b + 0xd) & 0x7fffff)
                        | ((0x71 - rdx_9) << 0x17 & 0x7f800000) | rsi_35
                else
                    var_188_9 = rsi_35
            else if (rax_123 != 0x7c00)
                var_188_9 =
                    ((rbx_66 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_66 & 0x3ff) << 0xd | rsi_35
            else
                var_188_9 = rsi_35 | 0x477fe000
            
            uint32_t rax_137 = zx.d(*(rdi_1 + (r14_2 << 3) + 0x16))
            zmm10 = var_188_9
            
            if ((0x7c00 & rax_137.w) == 0 && (rax_137 & 0x3ff) != 0
                    && data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (r15_1 << 3))))
                _Init_thread_header(&data_143cda914)
                
                if (data_143cda914 == 0xffffffff)
                    data_143cda910 = 0x3fb8aa3b
                    _Init_thread_footer(&data_143cda914)
            
            rsi = var_184
            r14_1 = var_180
        
        int64_t* rcx_25 = *r13_1
        int64_t rbx_74 = r13_1[1]
        int32_t var_13c_1 = 0
        int32_t var_12c_1 = 0
        int32_t var_11c_1 = 0
        (*(*rcx_25 + 0x28))(rcx_25)
        int64_t* rcx_26 = *r13_1
        (*(*rcx_26 + 0x20))(rcx_26)
        r13 = arg1
        float var_148[0x4]
        var_148[0] = var_168_1[0]
        zmm6 = *(r13 + 0x80)
        zmm7 = *(r13 + 0x90)
        zmm8 = *(r13 + 0xa0)
        float zmm3[0x4] = *(rbx_74 + rbx_1 * 0x10)
        zmm9 = *(r13 + 0xb0)
        float zmm2[0x4] = _mm_shuffle_ps(var_148, var_148, 0xe1)
        zmm2[0] = var_158_1[0]
        float zmm4_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
        zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc6)
        zmm2[0] = zmm11[0]
        float zmm5_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
        zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
        var_148 = zmm2
        zmm11 = _mm_shuffle_ps(zmm2, zmm2, 0)
        zmm0_1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
        float zmm1_1[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
        zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm9)
        int32_t var_10c_1 = 0x3f800000
        zmm0_1 = _mm_mul_ps(zmm0_1, zmm7)
        zmm1_1 = _mm_mul_ps(zmm1_1, zmm8)
        zmm11 = _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm11, zmm6), zmm0_1), zmm1_1), zmm2)
        float var_138[0x4]
        var_138[0] = var_178_1[0]
        zmm2 = _mm_shuffle_ps(var_138, var_138, 0xe1)
        zmm2[0] = zmm15.d
        zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc6)
        zmm2[0] = zmm12[0]
        zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
        var_138 = zmm2
        zmm12 = _mm_shuffle_ps(zmm2, zmm2, 0)
        zmm0_1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
        zmm1_1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
        zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm9)
        zmm12 = _mm_mul_ps(zmm12, zmm6)
        zmm0_1 = _mm_mul_ps(zmm0_1, zmm7)
        zmm1_1 = _mm_mul_ps(zmm1_1, zmm8)
        zmm12 = _mm_add_ps(_mm_add_ps(_mm_add_ps(zmm12, zmm0_1), zmm1_1), zmm2)
        float var_128[0x4]
        var_128[0] = zmm14.d
        zmm2 = _mm_shuffle_ps(var_128, var_128, 0xe1)
        zmm2[0] = zmm13[0]
        zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc6)
        zmm2[0] = zmm10[0]
        zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
        var_128 = zmm2
        zmm10 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm6)
        zmm0_1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
        zmm1_1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
        zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
        int64_t rbx_75 = sx.q(arg9[1].d)
        zmm2 = _mm_mul_ps(zmm2, zmm9)
        zmm0_1 = _mm_mul_ps(zmm0_1, zmm7)
        int32_t rax_144 = (rbx_75 + 1).d
        zmm1_1 = _mm_mul_ps(zmm1_1, zmm8)
        arg9[1].d = rax_144
        zmm10 = _mm_add_ps(_mm_add_ps(_mm_add_ps(zmm10, zmm0_1), zmm1_1), zmm2)
        float var_118[0x4]
        var_118[0] = zmm3[0]
        zmm2 = _mm_shuffle_ps(var_118, var_118, 0xe1)
        zmm2[0] = zmm4_1[0]
        zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc6)
        zmm2[0] = zmm5_1[0]
        zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
        zmm13 = _mm_shuffle_ps(zmm2, zmm2, 0)
        zmm0_1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
        zmm13 = _mm_mul_ps(zmm13, zmm6)
        zmm1_1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
        var_118 = zmm2
        zmm0_1 = _mm_mul_ps(zmm0_1, zmm7)
        zmm1_1 = _mm_mul_ps(zmm1_1, zmm8)
        zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
        zmm13 = _mm_add_ps(zmm13, zmm0_1)
        zmm2 = _mm_mul_ps(zmm2, zmm9)
        zmm13 = _mm_add_ps(_mm_add_ps(zmm13, zmm1_1), zmm2)
        
        if (rax_144 s> *(arg9 + 0xc))
            sub_1405c4fe0(arg9)
        
        result = *arg9
        rsi += 1
        var_184 = rsi
        int64_t rcx_29 = rbx_75 << 6
        *(rcx_29 + result) = zmm11
        *(rcx_29 + result + 0x10) = zmm12
        *(rcx_29 + result + 0x20) = zmm10
        *(rcx_29 + result + 0x30) = zmm13
    while (rsi u< r14_1)

return result
