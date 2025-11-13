// 函数: sub_14208d550
// 地址: 0x14208d550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg1 + 0x170) == 0
void* var_178 = arg1
uint64_t result

if (cond:0)
    result = 0
else
    result = zx.q(*(*(*(arg1 + 0x650) + 0x28) + 0x40))

*arg2 = result.d

if (result.d s> 0)
    int64_t* r12_1 = *(*(arg1 + 0x650) + 0x28)
    int16_t* rbx_1 = r12_1[3]
    int64_t rdx = *(*r12_1[2] + 0x28)
    float var_1b4_1
    float var_1a8_1
    float var_198_1
    float var_190_1
    float var_188_1
    int128_t zmm12
    int128_t zmm13
    int128_t zmm14
    int128_t zmm15
    
    if (r12_1[9].b == 0)
        rdx()
        int64_t* rcx_22 = r12_1[2]
        (*(*rcx_22 + 0x20))(rcx_22)
        zmm15 = *(rbx_1 + 0x18)
        zmm14 = *(rbx_1 + 0x20)
        zmm13 = *(rbx_1 + 0x24)
        zmm12 = *(rbx_1 + 0x28)
        var_1a8_1 = (*rbx_1)[0]
        var_198_1 = (*(rbx_1 + 4))[0]
        var_190_1 = (*(rbx_1 + 8))[0]
        var_188_1 = (*(rbx_1 + 0x10))[0]
        var_1b4_1 = (*(rbx_1 + 0x14))[0]
    else
        rdx()
        int64_t* rcx_1 = r12_1[2]
        (*(*rcx_1 + 0x20))(rcx_1)
        uint32_t rdi_1 = zx.d(*rbx_1)
        uint64_t r14_1 = zx.q(data_14401b1a0)
        int32_t r15_3 = (rdi_1 & 0xffff8000) << 0x10
        int16_t rax_4 = rdi_1.w & 0x7c00
        int32_t var_1b8_1
        TEB* gsbase
        float zmm0[0x4]
        
        if (rax_4 == 0)
            int32_t rdi_2 = rdi_1 & 0x3ff
            
            if (rdi_2 != 0)
                if (data_143cda914 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (r14_1 << 3))))
                    _Init_thread_header(&data_143cda914)
                    
                    if (data_143cda914 == 0xffffffff)
                        data_143cda910 = 0x3fb8aa3b
                        _Init_thread_footer(&data_143cda914)
                
                zmm0 = zx.o(0)
                zmm0[0] = float.s(zx.q(rdi_2))
                zmm0 = logf(zmm0[0])
                zmm0[0] = zmm0[0] f* data_143cda910
                int32_t rdx_1 = 0xa - int.d(zmm0[0])
                var_1b8_1 = (rdi_2 << (rdx_1.b + 0xd) & 0x7fffff)
                    | ((0x71 - rdx_1) << 0x17 & 0x7f800000) | r15_3
            else
                var_1b8_1 = r15_3
        else if (rax_4 != 0x7c00)
            var_1b8_1 = ((rdi_1 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rdi_1 & 0x3ff) << 0xd | r15_3
        else
            var_1b8_1 = r15_3 | 0x477fe000
        
        uint32_t rdi_9 = zx.d(rbx_1[1])
        var_1a8_1 = var_1b8_1[0]
        int32_t r15_7 = (rdi_9 & 0xffff8000) << 0x10
        int16_t rax_19 = rdi_9.w & 0x7c00
        int32_t var_1b8_2
        
        if (rax_19 == 0)
            int32_t rdi_10 = rdi_9 & 0x3ff
            
            if (rdi_10 != 0)
                if (data_143cda914 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (r14_1 << 3))))
                    _Init_thread_header(&data_143cda914)
                    
                    if (data_143cda914 == 0xffffffff)
                        data_143cda910 = 0x3fb8aa3b
                        _Init_thread_footer(&data_143cda914)
                
                zmm0 = zx.o(0)
                zmm0[0] = float.s(zx.q(rdi_10))
                zmm0 = logf(zmm0[0])
                zmm0[0] = zmm0[0] f* data_143cda910
                int32_t rdx_2 = 0xa - int.d(zmm0[0])
                var_1b8_2 = (rdi_10 << (rdx_2.b + 0xd) & 0x7fffff)
                    | ((0x71 - rdx_2) << 0x17 & 0x7f800000) | r15_7
            else
                var_1b8_2 = r15_7
        else if (rax_19 != 0x7c00)
            var_1b8_2 = ((rdi_9 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rdi_9 & 0x3ff) << 0xd | r15_7
        else
            var_1b8_2 = r15_7 | 0x477fe000
        
        uint32_t rdi_17 = zx.d(rbx_1[2])
        var_198_1 = var_1b8_2[0]
        int32_t r15_11 = (rdi_17 & 0xffff8000) << 0x10
        int16_t rax_34 = rdi_17.w & 0x7c00
        int32_t var_1b8_3
        
        if (rax_34 == 0)
            int32_t rdi_18 = rdi_17 & 0x3ff
            
            if (rdi_18 != 0)
                if (data_143cda914 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (r14_1 << 3))))
                    _Init_thread_header(&data_143cda914)
                    
                    if (data_143cda914 == 0xffffffff)
                        data_143cda910 = 0x3fb8aa3b
                        _Init_thread_footer(&data_143cda914)
                
                zmm0 = zx.o(0)
                zmm0[0] = float.s(zx.q(rdi_18))
                zmm0 = logf(zmm0[0])
                zmm0[0] = zmm0[0] f* data_143cda910
                int32_t rdx_3 = 0xa - int.d(zmm0[0])
                var_1b8_3 = (rdi_18 << (rdx_3.b + 0xd) & 0x7fffff)
                    | ((0x71 - rdx_3) << 0x17 & 0x7f800000) | r15_11
            else
                var_1b8_3 = r15_11
        else if (rax_34 != 0x7c00)
            var_1b8_3 = ((rdi_17 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rdi_17 & 0x3ff) << 0xd | r15_11
        else
            var_1b8_3 = r15_11 | 0x477fe000
        
        uint32_t rax_49 = zx.d(rbx_1[3])
        var_190_1 = var_1b8_3[0]
        
        if ((0x7c00 & rax_49.w) == 0 && (rax_49 & 0x3ff) != 0
                && data_143cda914 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (r14_1 << 3))))
            _Init_thread_header(&data_143cda914)
            
            if (data_143cda914 == 0xffffffff)
                data_143cda910 = 0x3fb8aa3b
                _Init_thread_footer(&data_143cda914)
        
        uint32_t rdi_25 = zx.d(rbx_1[4])
        int32_t r15_15 = (rdi_25 & 0xffff8000) << 0x10
        int16_t rax_53 = rdi_25.w & 0x7c00
        int32_t var_1b8_4
        
        if (rax_53 == 0)
            int32_t rdi_26 = rdi_25 & 0x3ff
            
            if (rdi_26 != 0)
                if (data_143cda914 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (r14_1 << 3))))
                    _Init_thread_header(&data_143cda914)
                    
                    if (data_143cda914 == 0xffffffff)
                        data_143cda910 = 0x3fb8aa3b
                        _Init_thread_footer(&data_143cda914)
                
                zmm0 = zx.o(0)
                zmm0[0] = float.s(zx.q(rdi_26))
                zmm0 = logf(zmm0[0])
                zmm0[0] = zmm0[0] f* data_143cda910
                int32_t rdx_4 = 0xa - int.d(zmm0[0])
                var_1b8_4 = (rdi_26 << (rdx_4.b + 0xd) & 0x7fffff)
                    | ((0x71 - rdx_4) << 0x17 & 0x7f800000) | r15_15
            else
                var_1b8_4 = r15_15
        else if (rax_53 != 0x7c00)
            var_1b8_4 = ((rdi_25 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rdi_25 & 0x3ff) << 0xd | r15_15
        else
            var_1b8_4 = r15_15 | 0x477fe000
        
        uint32_t rdi_33 = zx.d(rbx_1[5])
        var_188_1 = var_1b8_4[0]
        int32_t r15_19 = (rdi_33 & 0xffff8000) << 0x10
        int16_t rax_68 = rdi_33.w & 0x7c00
        int32_t var_1b8_5
        
        if (rax_68 == 0)
            int32_t rdi_34 = rdi_33 & 0x3ff
            
            if (rdi_34 != 0)
                if (data_143cda914 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (r14_1 << 3))))
                    _Init_thread_header(&data_143cda914)
                    
                    if (data_143cda914 == 0xffffffff)
                        data_143cda910 = 0x3fb8aa3b
                        _Init_thread_footer(&data_143cda914)
                
                zmm0 = zx.o(0)
                zmm0[0] = float.s(zx.q(rdi_34))
                zmm0 = logf(zmm0[0])
                zmm0[0] = zmm0[0] f* data_143cda910
                int32_t rdx_5 = 0xa - int.d(zmm0[0])
                var_1b8_5 = (rdi_34 << (rdx_5.b + 0xd) & 0x7fffff)
                    | ((0x71 - rdx_5) << 0x17 & 0x7f800000) | r15_19
            else
                var_1b8_5 = r15_19
        else if (rax_68 != 0x7c00)
            var_1b8_5 = ((rdi_33 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rdi_33 & 0x3ff) << 0xd | r15_19
        else
            var_1b8_5 = r15_19 | 0x477fe000
        
        uint32_t rdi_41 = zx.d(rbx_1[6])
        var_1b4_1 = var_1b8_5[0]
        int32_t r15_23 = (rdi_41 & 0xffff8000) << 0x10
        int16_t rax_83 = rdi_41.w & 0x7c00
        int32_t var_1b8_6
        
        if (rax_83 == 0)
            int32_t rdi_42 = rdi_41 & 0x3ff
            
            if (rdi_42 != 0)
                if (data_143cda914 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (r14_1 << 3))))
                    _Init_thread_header(&data_143cda914)
                    
                    if (data_143cda914 == 0xffffffff)
                        data_143cda910 = 0x3fb8aa3b
                        _Init_thread_footer(&data_143cda914)
                
                zmm0 = zx.o(0)
                zmm0[0] = float.s(zx.q(rdi_42))
                zmm0 = logf(zmm0[0])
                zmm0[0] = zmm0[0] f* data_143cda910
                int32_t rdx_6 = 0xa - int.d(zmm0[0])
                var_1b8_6 = (rdi_42 << (rdx_6.b + 0xd) & 0x7fffff)
                    | ((0x71 - rdx_6) << 0x17 & 0x7f800000) | r15_23
            else
                var_1b8_6 = r15_23
        else if (rax_83 != 0x7c00)
            var_1b8_6 = ((rdi_41 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rdi_41 & 0x3ff) << 0xd | r15_23
        else
            var_1b8_6 = r15_23 | 0x477fe000
        
        uint32_t rax_98 = zx.d(rbx_1[7])
        zmm15 = var_1b8_6
        
        if ((0x7c00 & rax_98.w) == 0 && (rax_98 & 0x3ff) != 0
                && data_143cda914 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (r14_1 << 3))))
            _Init_thread_header(&data_143cda914)
            
            if (data_143cda914 == 0xffffffff)
                data_143cda910 = 0x3fb8aa3b
                _Init_thread_footer(&data_143cda914)
        
        uint32_t rdi_49 = zx.d(rbx_1[8])
        int32_t r15_27 = (rdi_49 & 0xffff8000) << 0x10
        int16_t rax_102 = rdi_49.w & 0x7c00
        int32_t var_1b8_7
        
        if (rax_102 == 0)
            int32_t rdi_50 = rdi_49 & 0x3ff
            
            if (rdi_50 != 0)
                if (data_143cda914 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (r14_1 << 3))))
                    _Init_thread_header(&data_143cda914)
                    
                    if (data_143cda914 == 0xffffffff)
                        data_143cda910 = 0x3fb8aa3b
                        _Init_thread_footer(&data_143cda914)
                
                zmm0 = zx.o(0)
                zmm0[0] = float.s(zx.q(rdi_50))
                zmm0 = logf(zmm0[0])
                zmm0[0] = zmm0[0] f* data_143cda910
                int32_t rdx_7 = 0xa - int.d(zmm0[0])
                var_1b8_7 = (rdi_50 << (rdx_7.b + 0xd) & 0x7fffff)
                    | ((0x71 - rdx_7) << 0x17 & 0x7f800000) | r15_27
            else
                var_1b8_7 = r15_27
        else if (rax_102 != 0x7c00)
            var_1b8_7 = ((rdi_49 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rdi_49 & 0x3ff) << 0xd | r15_27
        else
            var_1b8_7 = r15_27 | 0x477fe000
        
        uint32_t rdi_57 = zx.d(rbx_1[9])
        zmm14 = var_1b8_7
        int32_t r15_31 = (rdi_57 & 0xffff8000) << 0x10
        int16_t rax_117 = rdi_57.w & 0x7c00
        int32_t var_1b8_8
        
        if (rax_117 == 0)
            int32_t rdi_58 = rdi_57 & 0x3ff
            
            if (rdi_58 != 0)
                if (data_143cda914 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (r14_1 << 3))))
                    _Init_thread_header(&data_143cda914)
                    
                    if (data_143cda914 == 0xffffffff)
                        data_143cda910 = 0x3fb8aa3b
                        _Init_thread_footer(&data_143cda914)
                
                zmm0 = zx.o(0)
                zmm0[0] = float.s(zx.q(rdi_58))
                zmm0 = logf(zmm0[0])
                zmm0[0] = zmm0[0] f* data_143cda910
                int32_t rdx_8 = 0xa - int.d(zmm0[0])
                var_1b8_8 = (rdi_58 << (rdx_8.b + 0xd) & 0x7fffff)
                    | ((0x71 - rdx_8) << 0x17 & 0x7f800000) | r15_31
            else
                var_1b8_8 = r15_31
        else if (rax_117 != 0x7c00)
            var_1b8_8 = ((rdi_57 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rdi_57 & 0x3ff) << 0xd | r15_31
        else
            var_1b8_8 = r15_31 | 0x477fe000
        
        uint32_t rdi_65 = zx.d(rbx_1[0xa])
        zmm13 = var_1b8_8
        int32_t r15_35 = (rdi_65 & 0xffff8000) << 0x10
        int16_t rax_132 = rdi_65.w & 0x7c00
        int32_t var_1b8_9
        
        if (rax_132 == 0)
            int32_t rdi_66 = rdi_65 & 0x3ff
            
            if (rdi_66 != 0)
                if (data_143cda914 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (r14_1 << 3))))
                    _Init_thread_header(&data_143cda914)
                    
                    if (data_143cda914 == 0xffffffff)
                        data_143cda910 = 0x3fb8aa3b
                        _Init_thread_footer(&data_143cda914)
                
                zmm0 = zx.o(0)
                zmm0[0] = float.s(zx.q(rdi_66))
                zmm0 = logf(zmm0[0])
                zmm0[0] = zmm0[0] f* data_143cda910
                int32_t r13_1 = 0xa - int.d(zmm0[0])
                var_1b8_9 = (rdi_66 << (r13_1.b + 0xd) & 0x7fffff)
                    | ((0x71 - r13_1) << 0x17 & 0x7f800000) | r15_35
            else
                var_1b8_9 = r15_35
        else if (rax_132 != 0x7c00)
            var_1b8_9 = ((rdi_65 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rdi_65 & 0x3ff) << 0xd | r15_35
        else
            var_1b8_9 = r15_35 | 0x477fe000
        
        uint32_t rax_144 = zx.d(rbx_1[0xb])
        zmm12 = var_1b8_9
        
        if ((0x7c00 & rax_144.w) == 0 && (rax_144 & 0x3ff) != 0
                && data_143cda914 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (r14_1 << 3))))
            _Init_thread_header(&data_143cda914)
            
            if (data_143cda914 == 0xffffffff)
                data_143cda910 = 0x3fb8aa3b
                _Init_thread_footer(&data_143cda914)
    
    int64_t* rcx_23 = *r12_1
    int128_t* rbx_2 = r12_1[1]
    int32_t var_15c_1 = 0
    int32_t var_14c_1 = 0
    int32_t var_13c_1 = 0
    (*(*rcx_23 + 0x28))(rcx_23)
    int64_t* rcx_24 = *r12_1
    (*(*rcx_24 + 0x20))(rcx_24)
    float zmm11[0x4] = *rbx_2
    void* rbx_3 = var_178
    float var_168[0x4]
    var_168[0] = var_1a8_1[0]
    float zmm7[0x4] = *(rbx_3 + 0x80)
    float zmm8[0x4] = *(rbx_3 + 0x90)
    float zmm9[0x4] = *(rbx_3 + 0xa0)
    float zmm10[0x4] = *(rbx_3 + 0xb0)
    float temp0_1[0x4] = _mm_shuffle_ps(var_168, var_168, 0xe1)
    temp0_1[0] = var_198_1[0]
    float temp0_2[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0x55)
    float temp0_3[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
    temp0_3[0] = var_190_1[0]
    float temp0_4[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xaa)
    float temp0_5[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc9)
    float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0)
    float temp0_7[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x55)
    float temp0_8[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xaa)
    float temp0_10[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_5, temp0_5, 0xff), zmm10)
    float temp0_11[0x4] = _mm_mul_ps(temp0_6, zmm7)
    float temp0_12[0x4] = _mm_mul_ps(temp0_7, zmm8)
    float temp0_13[0x4] = _mm_mul_ps(temp0_8, zmm9)
    float temp0_16[0x4] = _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_11, temp0_12), temp0_13), temp0_10)
    float var_158[0x4]
    var_158[0] = var_188_1[0]
    float temp0_17[0x4] = _mm_shuffle_ps(var_158, var_158, 0xe1)
    temp0_17[0] = var_1b4_1[0]
    float temp0_18[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0xc6)
    temp0_18[0] = zmm15.d
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
    float var_148[0x4]
    var_148[0] = zmm14.d
    float temp0_31[0x4] = _mm_shuffle_ps(var_148, var_148, 0xe1)
    temp0_31[0] = zmm13.d
    float temp0_32[0x4] = _mm_shuffle_ps(temp0_31, temp0_31, 0xc6)
    float var_108_1[0x4] = temp0_30
    temp0_32[0] = zmm12.d
    float temp0_33[0x4] = _mm_shuffle_ps(temp0_32, temp0_32, 0xc9)
    float temp0_35[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_33, temp0_33, 0), zmm7)
    float temp0_36[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xe1)
    temp0_36[0] = temp0_2[0]
    float temp0_37[0x4] = _mm_shuffle_ps(temp0_33, temp0_33, 0x55)
    float temp0_38[0x4] = _mm_shuffle_ps(temp0_36, temp0_36, 0xc6)
    temp0_38[0] = temp0_4[0]
    float temp0_39[0x4] = _mm_mul_ps(temp0_37, zmm8)
    float temp0_40[0x4] = _mm_shuffle_ps(temp0_38, temp0_38, 0x27)
    float temp0_41[0x4] = _mm_shuffle_ps(temp0_33, temp0_33, 0xaa)
    temp0_40[0] = 0x3f800000
    float temp0_42[0x4] = _mm_shuffle_ps(temp0_40, temp0_40, 0x39)
    float temp0_43[0x4] = _mm_add_ps(temp0_35, temp0_39)
    float temp0_44[0x4] = _mm_mul_ps(temp0_41, zmm9)
    float temp0_45[0x4] = _mm_shuffle_ps(temp0_33, temp0_33, 0xff)
    float temp0_46[0x4] = _mm_shuffle_ps(temp0_42, temp0_42, 0x55)
    float temp0_47[0x4] = _mm_mul_ps(temp0_45, zmm10)
    float temp0_48[0x4] = _mm_add_ps(temp0_43, temp0_44)
    float temp0_49[0x4] = _mm_mul_ps(temp0_46, zmm8)
    float temp0_51[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_42, temp0_42, 0xaa), zmm9)
    float var_f8_1[0x4] = _mm_add_ps(temp0_48, temp0_47)
    float temp0_54[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_42, temp0_42, 0), zmm7)
    float temp0_56[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_42, temp0_42, 0xff), zmm10)
    float var_e8_1[0x4] = _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_54, temp0_49), temp0_51), temp0_56)
    sub_1414cb980(&var_118, &var_178, 0x322bcc77[0])
    void* rax_151 = *(rbx_3 + 0x150)
    float zmm3_1 = var_178.d f* *(rax_151 + 0x4c)
    float var_170
    float zmm1_1 = var_170 f* *(rax_151 + 0x54)
    float zmm2_1 = var_178:4.d f* *(rax_151 + 0x50)
    zmm3_1 = zmm3_1 + zmm3_1
    result = arg3
    zmm1_1 = zmm1_1 + zmm1_1
    zmm3_1 = zmm3_1 + zmm3_1
    *result = (zmm1_1 + zmm1_1 + zmm3_1) * (zmm2_1 + zmm2_1) + zmm3_1 * zmm1_1

return result
