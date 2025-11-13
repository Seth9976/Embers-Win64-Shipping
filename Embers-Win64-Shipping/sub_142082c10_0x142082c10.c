// 函数: sub_142082c10
// 地址: 0x142082c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x158) == 0)
    return 0

void* rcx = *(arg1 + 0x650)
void* var_120_1 = rcx
int64_t result = sx.q(*(*(rcx + 0x28) + 0x40))

if (result.d s<= 0)
    return result

int64_t rbx = 0
TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
uint64_t r15 = zx.q(data_14401b1a0)
float zmm6[0x4]
float var_48[0x4] = zmm6
float zmm7[0x4]
float var_58[0x4] = zmm7
float zmm8[0x4]
float var_68[0x4] = zmm8
float zmm9[0x4]
float var_78[0x4] = zmm9
float zmm10[0x4]
float var_88[0x4] = zmm10
int128_t zmm11
int128_t var_98 = zmm11
int128_t zmm12
int128_t var_a8 = zmm12
int128_t zmm13
int128_t var_b8 = zmm13
int128_t zmm14
int128_t var_c8 = zmm14
int128_t zmm15
int128_t var_d8 = zmm15
int64_t var_180 = 0

do
    int64_t* r13_1 = *(rcx + 0x28)
    int64_t rdi_1 = r13_1[3]
    int64_t rdx = *(*r13_1[2] + 0x28)
    int32_t var_1c8
    float var_1b8_1
    float var_1a8_1
    float var_198_1
    float var_190_1
    
    if (r13_1[9].b == 0)
        rdx()
        int64_t* rcx_24 = r13_1[2]
        (*(*rcx_24 + 0x20))(rcx_24)
        int64_t rax_140 = rbx * 0xc
        zmm15 = *(rdi_1 + (rax_140 << 2) + 0x14)
        zmm14 = *(rdi_1 + (rax_140 << 2) + 0x18)
        zmm13 = *(rdi_1 + (rax_140 << 2) + 0x20)
        zmm12 = *(rdi_1 + (rax_140 << 2) + 0x24)
        zmm11 = *(rdi_1 + (rax_140 << 2) + 0x28)
        var_1a8_1 = (*(rdi_1 + (rax_140 << 2)))[0]
        var_198_1 = (*(rdi_1 + (rax_140 << 2) + 4))[0]
        var_190_1 = (*(rdi_1 + (rax_140 << 2) + 8))[0]
        var_1b8_1 = (*(rdi_1 + (rax_140 << 2) + 0x10))[0]
    else
        rdx()
        int64_t* rcx_2 = r13_1[2]
        (*(*rcx_2 + 0x20))(rcx_2)
        int64_t r14_1 = rbx * 3
        uint32_t rbx_1 = zx.d(*(rdi_1 + (r14_1 << 3)))
        int32_t rsi_3 = (rbx_1 & 0xffff8000) << 0x10
        int16_t rax_3 = rbx_1.w & 0x7c00
        int32_t var_1c8_1
        float zmm0[0x4]
        
        if (rax_3 == 0)
            int32_t rbx_2 = rbx_1 & 0x3ff
            
            if (rbx_2 != 0)
                if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (r15 << 3))))
                    _Init_thread_header(&data_143cda914)
                    
                    if (data_143cda914 == 0xffffffff)
                        data_143cda910 = 0x3fb8aa3b
                        _Init_thread_footer(&data_143cda914)
                
                zmm0 = zx.o(0)
                zmm0[0] = float.s(zx.q(rbx_2))
                zmm0 = logf(zmm0[0])
                zmm0[0] = zmm0[0] f* data_143cda910
                int32_t rdx_1 = 0xa - int.d(zmm0[0])
                var_1c8_1 = (rbx_2 << (rdx_1.b + 0xd) & 0x7fffff)
                    | ((0x71 - rdx_1) << 0x17 & 0x7f800000) | rsi_3
            else
                var_1c8_1 = rsi_3
        else if (rax_3 != 0x7c00)
            var_1c8_1 = ((rbx_1 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_1 & 0x3ff) << 0xd | rsi_3
        else
            var_1c8_1 = rsi_3 | 0x477fe000
        
        uint32_t rbx_9 = zx.d(*(rdi_1 + (r14_1 << 3) + 2))
        var_1a8_1 = var_1c8_1[0]
        int32_t rsi_7 = (rbx_9 & 0xffff8000) << 0x10
        int16_t rax_17 = rbx_9.w & 0x7c00
        int32_t var_1c8_2
        
        if (rax_17 == 0)
            int32_t rbx_10 = rbx_9 & 0x3ff
            
            if (rbx_10 != 0)
                if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (r15 << 3))))
                    _Init_thread_header(&data_143cda914)
                    
                    if (data_143cda914 == 0xffffffff)
                        data_143cda910 = 0x3fb8aa3b
                        _Init_thread_footer(&data_143cda914)
                
                zmm0 = zx.o(0)
                zmm0[0] = float.s(zx.q(rbx_10))
                zmm0 = logf(zmm0[0])
                zmm0[0] = zmm0[0] f* data_143cda910
                int32_t rdx_2 = 0xa - int.d(zmm0[0])
                var_1c8_2 = (rbx_10 << (rdx_2.b + 0xd) & 0x7fffff)
                    | ((0x71 - rdx_2) << 0x17 & 0x7f800000) | rsi_7
            else
                var_1c8_2 = rsi_7
        else if (rax_17 != 0x7c00)
            var_1c8_2 = ((rbx_9 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_9 & 0x3ff) << 0xd | rsi_7
        else
            var_1c8_2 = rsi_7 | 0x477fe000
        
        uint32_t rbx_17 = zx.d(*(rdi_1 + (r14_1 << 3) + 4))
        var_198_1 = var_1c8_2[0]
        int32_t rsi_11 = (rbx_17 & 0xffff8000) << 0x10
        int16_t rax_31 = rbx_17.w & 0x7c00
        int32_t var_1c8_3
        
        if (rax_31 == 0)
            int32_t rbx_18 = rbx_17 & 0x3ff
            
            if (rbx_18 != 0)
                if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (r15 << 3))))
                    _Init_thread_header(&data_143cda914)
                    
                    if (data_143cda914 == 0xffffffff)
                        data_143cda910 = 0x3fb8aa3b
                        _Init_thread_footer(&data_143cda914)
                
                zmm0 = zx.o(0)
                zmm0[0] = float.s(zx.q(rbx_18))
                zmm0 = logf(zmm0[0])
                zmm0[0] = zmm0[0] f* data_143cda910
                int32_t rdx_3 = 0xa - int.d(zmm0[0])
                var_1c8_3 = (rbx_18 << (rdx_3.b + 0xd) & 0x7fffff)
                    | ((0x71 - rdx_3) << 0x17 & 0x7f800000) | rsi_11
            else
                var_1c8_3 = rsi_11
        else if (rax_31 != 0x7c00)
            var_1c8_3 = ((rbx_17 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_17 & 0x3ff) << 0xd | rsi_11
        else
            var_1c8_3 = rsi_11 | 0x477fe000
        
        uint32_t rax_45 = zx.d(*(rdi_1 + (r14_1 << 3) + 6))
        var_190_1 = var_1c8_3[0]
        
        if ((0x7c00 & rax_45.w) == 0 && (rax_45 & 0x3ff) != 0
                && data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (r15 << 3))))
            _Init_thread_header(&data_143cda914)
            
            if (data_143cda914 == 0xffffffff)
                data_143cda910 = 0x3fb8aa3b
                _Init_thread_footer(&data_143cda914)
        
        uint32_t rbx_25 = zx.d(*(rdi_1 + (r14_1 << 3) + 8))
        int32_t rsi_15 = (rbx_25 & 0xffff8000) << 0x10
        int16_t rax_48 = rbx_25.w & 0x7c00
        int32_t var_1c8_4
        
        if (rax_48 == 0)
            int32_t rbx_26 = rbx_25 & 0x3ff
            
            if (rbx_26 != 0)
                if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (r15 << 3))))
                    _Init_thread_header(&data_143cda914)
                    
                    if (data_143cda914 == 0xffffffff)
                        data_143cda910 = 0x3fb8aa3b
                        _Init_thread_footer(&data_143cda914)
                
                zmm0 = zx.o(0)
                zmm0[0] = float.s(zx.q(rbx_26))
                zmm0 = logf(zmm0[0])
                zmm0[0] = zmm0[0] f* data_143cda910
                int32_t rdx_4 = 0xa - int.d(zmm0[0])
                var_1c8_4 = (rbx_26 << (rdx_4.b + 0xd) & 0x7fffff)
                    | ((0x71 - rdx_4) << 0x17 & 0x7f800000) | rsi_15
            else
                var_1c8_4 = rsi_15
        else if (rax_48 != 0x7c00)
            var_1c8_4 = ((rbx_25 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_25 & 0x3ff) << 0xd | rsi_15
        else
            var_1c8_4 = rsi_15 | 0x477fe000
        
        uint32_t rbx_33 = zx.d(*(rdi_1 + (r14_1 << 3) + 0xa))
        var_1b8_1 = var_1c8_4[0]
        int32_t rsi_19 = (rbx_33 & 0xffff8000) << 0x10
        int16_t rax_62 = rbx_33.w & 0x7c00
        int32_t var_1c8_5
        
        if (rax_62 == 0)
            int32_t rbx_34 = rbx_33 & 0x3ff
            
            if (rbx_34 != 0)
                if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (r15 << 3))))
                    _Init_thread_header(&data_143cda914)
                    
                    if (data_143cda914 == 0xffffffff)
                        data_143cda910 = 0x3fb8aa3b
                        _Init_thread_footer(&data_143cda914)
                
                zmm0 = zx.o(0)
                zmm0[0] = float.s(zx.q(rbx_34))
                zmm0 = logf(zmm0[0])
                zmm0[0] = zmm0[0] f* data_143cda910
                int32_t rdx_5 = 0xa - int.d(zmm0[0])
                var_1c8_5 = (rbx_34 << (rdx_5.b + 0xd) & 0x7fffff)
                    | ((0x71 - rdx_5) << 0x17 & 0x7f800000) | rsi_19
            else
                var_1c8_5 = rsi_19
        else if (rax_62 != 0x7c00)
            var_1c8_5 = ((rbx_33 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_33 & 0x3ff) << 0xd | rsi_19
        else
            var_1c8_5 = rsi_19 | 0x477fe000
        
        uint32_t rbx_41 = zx.d(*(rdi_1 + (r14_1 << 3) + 0xc))
        zmm15 = var_1c8_5
        int32_t rsi_23 = (rbx_41 & 0xffff8000) << 0x10
        int16_t rax_76 = rbx_41.w & 0x7c00
        int32_t var_1c8_6
        
        if (rax_76 == 0)
            int32_t rbx_42 = rbx_41 & 0x3ff
            
            if (rbx_42 != 0)
                if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (r15 << 3))))
                    _Init_thread_header(&data_143cda914)
                    
                    if (data_143cda914 == 0xffffffff)
                        data_143cda910 = 0x3fb8aa3b
                        _Init_thread_footer(&data_143cda914)
                
                zmm0 = zx.o(0)
                zmm0[0] = float.s(zx.q(rbx_42))
                zmm0 = logf(zmm0[0])
                zmm0[0] = zmm0[0] f* data_143cda910
                int32_t rdx_6 = 0xa - int.d(zmm0[0])
                var_1c8_6 = (rbx_42 << (rdx_6.b + 0xd) & 0x7fffff)
                    | ((0x71 - rdx_6) << 0x17 & 0x7f800000) | rsi_23
            else
                var_1c8_6 = rsi_23
        else if (rax_76 != 0x7c00)
            var_1c8_6 = ((rbx_41 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_41 & 0x3ff) << 0xd | rsi_23
        else
            var_1c8_6 = rsi_23 | 0x477fe000
        
        uint32_t rax_90 = zx.d(*(rdi_1 + (r14_1 << 3) + 0xe))
        zmm14 = var_1c8_6
        
        if ((0x7c00 & rax_90.w) == 0 && (rax_90 & 0x3ff) != 0
                && data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (r15 << 3))))
            _Init_thread_header(&data_143cda914)
            
            if (data_143cda914 == 0xffffffff)
                data_143cda910 = 0x3fb8aa3b
                _Init_thread_footer(&data_143cda914)
        
        uint32_t rbx_49 = zx.d(*(rdi_1 + (r14_1 << 3) + 0x10))
        int32_t rsi_27 = (rbx_49 & 0xffff8000) << 0x10
        int16_t rax_93 = rbx_49.w & 0x7c00
        int32_t var_1c8_7
        
        if (rax_93 == 0)
            int32_t rbx_50 = rbx_49 & 0x3ff
            
            if (rbx_50 != 0)
                if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (r15 << 3))))
                    _Init_thread_header(&data_143cda914)
                    
                    if (data_143cda914 == 0xffffffff)
                        data_143cda910 = 0x3fb8aa3b
                        _Init_thread_footer(&data_143cda914)
                
                zmm0 = zx.o(0)
                zmm0[0] = float.s(zx.q(rbx_50))
                zmm0 = logf(zmm0[0])
                zmm0[0] = zmm0[0] f* data_143cda910
                int32_t rdx_7 = 0xa - int.d(zmm0[0])
                var_1c8_7 = (rbx_50 << (rdx_7.b + 0xd) & 0x7fffff)
                    | ((0x71 - rdx_7) << 0x17 & 0x7f800000) | rsi_27
            else
                var_1c8_7 = rsi_27
        else if (rax_93 != 0x7c00)
            var_1c8_7 = ((rbx_49 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_49 & 0x3ff) << 0xd | rsi_27
        else
            var_1c8_7 = rsi_27 | 0x477fe000
        
        uint32_t rbx_57 = zx.d(*(rdi_1 + (r14_1 << 3) + 0x12))
        zmm13 = var_1c8_7
        int32_t rsi_31 = (rbx_57 & 0xffff8000) << 0x10
        int16_t rax_107 = rbx_57.w & 0x7c00
        int32_t var_1c8_8
        
        if (rax_107 == 0)
            int32_t rbx_58 = rbx_57 & 0x3ff
            
            if (rbx_58 != 0)
                if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (r15 << 3))))
                    _Init_thread_header(&data_143cda914)
                    
                    if (data_143cda914 == 0xffffffff)
                        data_143cda910 = 0x3fb8aa3b
                        _Init_thread_footer(&data_143cda914)
                
                zmm0 = zx.o(0)
                zmm0[0] = float.s(zx.q(rbx_58))
                zmm0 = logf(zmm0[0])
                zmm0[0] = zmm0[0] f* data_143cda910
                int32_t rdx_8 = 0xa - int.d(zmm0[0])
                var_1c8_8 = (rbx_58 << (rdx_8.b + 0xd) & 0x7fffff)
                    | ((0x71 - rdx_8) << 0x17 & 0x7f800000) | rsi_31
            else
                var_1c8_8 = rsi_31
        else if (rax_107 != 0x7c00)
            var_1c8_8 = ((rbx_57 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_57 & 0x3ff) << 0xd | rsi_31
        else
            var_1c8_8 = rsi_31 | 0x477fe000
        
        uint32_t rbx_65 = zx.d(*(rdi_1 + (r14_1 << 3) + 0x14))
        zmm12 = var_1c8_8
        int32_t rsi_35 = (rbx_65 & 0xffff8000) << 0x10
        int16_t rax_121 = rbx_65.w & 0x7c00
        
        if (rax_121 == 0)
            int32_t rbx_66 = rbx_65 & 0x3ff
            
            if (rbx_66 != 0)
                if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (r15 << 3))))
                    _Init_thread_header(&data_143cda914)
                    
                    if (data_143cda914 == 0xffffffff)
                        data_143cda910 = 0x3fb8aa3b
                        _Init_thread_footer(&data_143cda914)
                
                zmm0 = zx.o(0)
                zmm0[0] = float.s(zx.q(rbx_66))
                zmm0 = logf(zmm0[0])
                zmm0[0] = zmm0[0] f* data_143cda910
                int32_t rdx_9 = 0xa - int.d(zmm0[0])
                var_1c8 = (rbx_66 << (rdx_9.b + 0xd) & 0x7fffff)
                    | ((0x71 - rdx_9) << 0x17 & 0x7f800000) | rsi_35
            else
                var_1c8 = rsi_35
        else if (rax_121 != 0x7c00)
            var_1c8 = ((rbx_65 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_65 & 0x3ff) << 0xd | rsi_35
        else
            var_1c8 = rsi_35 | 0x477fe000
        
        uint32_t rax_135 = zx.d(*(rdi_1 + (r14_1 << 3) + 0x16))
        zmm11 = var_1c8
        
        if ((0x7c00 & rax_135.w) == 0 && (rax_135 & 0x3ff) != 0
                && data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (r15 << 3))))
            _Init_thread_header(&data_143cda914)
            
            if (data_143cda914 == 0xffffffff)
                data_143cda910 = 0x3fb8aa3b
                _Init_thread_footer(&data_143cda914)
    
    int64_t* rcx_25 = *r13_1
    int64_t rbx_73 = r13_1[1]
    int32_t var_16c_1 = 0
    int32_t var_15c_1 = 0
    int32_t var_14c_1 = 0
    (*(*rcx_25 + 0x28))(rcx_25)
    int64_t* rcx_26 = *r13_1
    (*(*rcx_26 + 0x20))(rcx_26)
    float var_178[0x4]
    var_178[0] = var_1a8_1[0]
    float temp0_1[0x4] = _mm_shuffle_ps(var_178, var_178, 0xe1)
    temp0_1[0] = var_198_1[0]
    int32_t var_13c_1 = 0x3f800000
    float zmm4_1[0x4] = *(rbx_73 + var_180 * 0x10)
    float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
    temp0_2[0] = var_190_1[0]
    float temp0_3[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
    float temp0_4[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc9)
    zmm7 = *(arg1 + 0x80)
    zmm8 = *(arg1 + 0x90)
    zmm9 = *(arg1 + 0xa0)
    zmm10 = *(arg1 + 0xb0)
    float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0)
    float temp0_6[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x55)
    float temp0_7[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xaa)
    float temp0_9[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0xff), zmm10)
    float temp0_10[0x4] = _mm_mul_ps(temp0_5, zmm7)
    float temp0_11[0x4] = _mm_mul_ps(temp0_6, zmm8)
    float temp0_12[0x4] = _mm_mul_ps(temp0_7, zmm9)
    float temp0_13[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa)
    float temp0_16[0x4] = _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_10, temp0_11), temp0_12), temp0_9)
    float var_168[0x4]
    var_168[0] = var_1b8_1[0]
    float temp0_17[0x4] = _mm_shuffle_ps(var_168, var_168, 0xe1)
    temp0_17[0] = zmm15.d
    float temp0_18[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0xc6)
    temp0_18[0] = zmm14.d
    float var_118[0x4] = temp0_16
    float temp0_19[0x4] = _mm_shuffle_ps(temp0_18, temp0_18, 0xc9)
    float temp0_20[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0)
    float temp0_21[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0x55)
    float temp0_22[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0xaa)
    float temp0_24[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_19, temp0_19, 0xff), zmm10)
    float temp0_25[0x4] = _mm_mul_ps(temp0_20, zmm7)
    float temp0_26[0x4] = _mm_mul_ps(temp0_21, zmm8)
    float temp0_27[0x4] = _mm_mul_ps(temp0_22, zmm9)
    float temp0_30[0x4] = _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_25, temp0_26), temp0_27), temp0_24)
    float var_158[0x4]
    var_158[0] = zmm13.d
    float temp0_31[0x4] = _mm_shuffle_ps(var_158, var_158, 0xe1)
    temp0_31[0] = zmm12.d
    float temp0_32[0x4] = _mm_shuffle_ps(temp0_31, temp0_31, 0xc6)
    float var_108_1[0x4] = temp0_30
    temp0_32[0] = zmm11.d
    float temp0_33[0x4] = _mm_shuffle_ps(temp0_32, temp0_32, 0xc9)
    float temp0_35[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_33, temp0_33, 0), zmm7)
    int64_t rdx_10 = *(arg1 + 0x158)
    float temp0_36[0x4] = _mm_shuffle_ps(temp0_33, temp0_33, 0x55)
    float temp0_37[0x4] = _mm_shuffle_ps(temp0_33, temp0_33, 0xaa)
    float temp0_38[0x4] = _mm_shuffle_ps(temp0_33, temp0_33, 0xff)
    int64_t r10_1 = *arg2
    float temp0_39[0x4] = _mm_mul_ps(temp0_38, zmm10)
    float temp0_40[0x4] = _mm_mul_ps(temp0_36, zmm8)
    float temp0_41[0x4] = _mm_mul_ps(temp0_37, zmm9)
    float temp0_44[0x4] = _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_35, temp0_40), temp0_41), temp0_39)
    float var_148[0x4]
    var_148[0] = zmm4_1[0]
    float temp0_45[0x4] = _mm_shuffle_ps(var_148, var_148, 0xe1)
    temp0_45[0] = temp0_3[0]
    float temp0_46[0x4] = _mm_shuffle_ps(temp0_45, temp0_45, 0xc6)
    float var_f8_1[0x4] = temp0_44
    temp0_46[0] = temp0_13[0]
    float temp0_47[0x4] = _mm_shuffle_ps(temp0_46, temp0_46, 0xc9)
    float temp0_48[0x4] = _mm_shuffle_ps(temp0_47, temp0_47, 0)
    float temp0_49[0x4] = _mm_shuffle_ps(temp0_47, temp0_47, 0x55)
    float temp0_50[0x4] = _mm_mul_ps(temp0_48, zmm7)
    float temp0_51[0x4] = _mm_shuffle_ps(temp0_47, temp0_47, 0xaa)
    float temp0_52[0x4] = _mm_mul_ps(temp0_49, zmm8)
    float temp0_53[0x4] = _mm_mul_ps(temp0_51, zmm9)
    float temp0_54[0x4] = _mm_shuffle_ps(temp0_47, temp0_47, 0xff)
    float temp0_55[0x4] = _mm_add_ps(temp0_50, temp0_52)
    float temp0_56[0x4] = _mm_mul_ps(temp0_54, zmm10)
    float var_e8_1[0x4] = _mm_add_ps(_mm_add_ps(temp0_55, temp0_53), temp0_56)
    (*(r10_1 + 8))(arg2, rdx_10, rdx_10 + 0x10, &var_118, var_1c8)
    rcx = var_120_1
    rbx = var_180 + 1
    var_180 = rbx
while (rbx s< result)

return zx.q(result.d)
