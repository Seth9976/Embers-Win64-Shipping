// 函数: sub_140fe0f50
// 地址: 0x140fe0f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int32_t r10 = arg4
int32_t r9 = arg2
int64_t r11 = arg3
int32_t i_4 = arg1
float zmm10[0x4] = zx.o(0)
float zmm11[0x4] = zx.o(0)
float zmm12[0x4] = zx.o(0)
float zmm13[0x4] = zx.o(0)
float zmm15[0x4] = 0x3f800000
int32_t r12 = 0
float var_104 = 1f
float zmm7[0x4] = 0x3f800000
float var_100 = 1f
float zmm8[0x4] = 0x3f800000
int32_t var_108 = 0
float zmm14[0x4] = 0x3f800000

if (r9 != 0)
    TEB* gsbase
    void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
    uint64_t rbp_1 = zx.q(data_14401b1a0)
    float zmm0[0x4]
    
    do
        result = zx.q(r12 * r10)
        int16_t* rsi_2 = zx.q(result.d) + r11
        
        if (i_4 != 0)
            uint64_t i_3 = zx.q(i_4)
            uint64_t i
            
            do
                uint32_t rbx_1 = zx.d(*rsi_2)
                int32_t rdi_3 = (rbx_1 & 0xffff8000) << 0x10
                int16_t rax_1 = rbx_1.w & 0x7c00
                int32_t var_118_1
                
                if (rax_1 == 0)
                    int32_t rbx_2 = rbx_1 & 0x3ff
                    
                    if (rbx_2 != 0)
                        if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (rbp_1 << 3))))
                            _Init_thread_header(&data_143cda914)
                            
                            if (data_143cda914 == 0xffffffff)
                                data_143cda910 = 0x3fb8aa3b
                                _Init_thread_footer(&data_143cda914)
                        
                        zmm0 = zx.o(0)
                        zmm0[0] = float.s(zx.q(rbx_2))
                        zmm0 = logf(zmm0[0])
                        zmm0[0] = zmm0[0] f* data_143cda910
                        int32_t rdx = 0xa - int.d(zmm0[0])
                        var_118_1 = (rbx_2 << (rdx.b + 0xd) & 0x7fffff)
                            | ((0x71 - rdx) << 0x17 & 0x7f800000) | rdi_3
                    else
                        var_118_1 = rdi_3
                else if (rax_1 != 0x7c00)
                    var_118_1 =
                        ((rbx_1 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_1 & 0x3ff) << 0xd | rdi_3
                else
                    var_118_1 = rdi_3 | 0x477fe000
                
                uint32_t rbx_9 = zx.d(rsi_2[1])
                zmm10 = __minss_xmmss_memss(zmm10[0], var_118_1)
                int32_t rdi_7 = (rbx_9 & 0xffff8000) << 0x10
                int16_t rax_16 = rbx_9.w & 0x7c00
                int32_t var_118_2
                
                if (rax_16 == 0)
                    int32_t rbx_10 = rbx_9 & 0x3ff
                    
                    if (rbx_10 != 0)
                        if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (rbp_1 << 3))))
                            _Init_thread_header(&data_143cda914)
                            
                            if (data_143cda914 == 0xffffffff)
                                data_143cda910 = 0x3fb8aa3b
                                _Init_thread_footer(&data_143cda914)
                        
                        zmm0 = zx.o(0)
                        zmm0[0] = float.s(zx.q(rbx_10))
                        zmm0 = logf(zmm0[0])
                        zmm0[0] = zmm0[0] f* data_143cda910
                        int32_t rdx_1 = 0xa - int.d(zmm0[0])
                        var_118_2 = (rbx_10 << (rdx_1.b + 0xd) & 0x7fffff)
                            | ((0x71 - rdx_1) << 0x17 & 0x7f800000) | rdi_7
                    else
                        var_118_2 = rdi_7
                else if (rax_16 != 0x7c00)
                    var_118_2 =
                        ((rbx_9 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_9 & 0x3ff) << 0xd | rdi_7
                else
                    var_118_2 = rdi_7 | 0x477fe000
                
                uint32_t rbx_17 = zx.d(rsi_2[2])
                zmm11 = __minss_xmmss_memss(zmm11[0], var_118_2)
                int32_t rdi_11 = (rbx_17 & 0xffff8000) << 0x10
                int16_t rax_31 = rbx_17.w & 0x7c00
                int32_t var_118_3
                
                if (rax_31 == 0)
                    int32_t rbx_18 = rbx_17 & 0x3ff
                    
                    if (rbx_18 != 0)
                        if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (rbp_1 << 3))))
                            _Init_thread_header(&data_143cda914)
                            
                            if (data_143cda914 == 0xffffffff)
                                data_143cda910 = 0x3fb8aa3b
                                _Init_thread_footer(&data_143cda914)
                        
                        zmm0 = zx.o(0)
                        zmm0[0] = float.s(zx.q(rbx_18))
                        zmm0 = logf(zmm0[0])
                        zmm0[0] = zmm0[0] f* data_143cda910
                        int32_t rdx_2 = 0xa - int.d(zmm0[0])
                        var_118_3 = (rbx_18 << (rdx_2.b + 0xd) & 0x7fffff)
                            | ((0x71 - rdx_2) << 0x17 & 0x7f800000) | rdi_11
                    else
                        var_118_3 = rdi_11
                else if (rax_31 != 0x7c00)
                    var_118_3 =
                        ((rbx_17 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_17 & 0x3ff) << 0xd | rdi_11
                else
                    var_118_3 = rdi_11 | 0x477fe000
                
                uint32_t rbx_25 = zx.d(rsi_2[3])
                zmm12 = __minss_xmmss_memss(zmm12[0], var_118_3)
                int32_t rdi_15 = (rbx_25 & 0xffff8000) << 0x10
                int16_t rax_46 = rbx_25.w & 0x7c00
                int32_t var_118_4
                
                if (rax_46 == 0)
                    int32_t rbx_26 = rbx_25 & 0x3ff
                    
                    if (rbx_26 != 0)
                        if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (rbp_1 << 3))))
                            _Init_thread_header(&data_143cda914)
                            
                            if (data_143cda914 == 0xffffffff)
                                data_143cda910 = 0x3fb8aa3b
                                _Init_thread_footer(&data_143cda914)
                        
                        zmm0 = zx.o(0)
                        zmm0[0] = float.s(zx.q(rbx_26))
                        zmm0 = logf(zmm0[0])
                        zmm0[0] = zmm0[0] f* data_143cda910
                        int32_t rdx_3 = 0xa - int.d(zmm0[0])
                        var_118_4 = (rbx_26 << (rdx_3.b + 0xd) & 0x7fffff)
                            | ((0x71 - rdx_3) << 0x17 & 0x7f800000) | rdi_15
                    else
                        var_118_4 = rdi_15
                else if (rax_46 != 0x7c00)
                    var_118_4 =
                        ((rbx_25 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_25 & 0x3ff) << 0xd | rdi_15
                else
                    var_118_4 = rdi_15 | 0x477fe000
                
                uint32_t rbx_33 = zx.d(*rsi_2)
                zmm13 = __minss_xmmss_memss(zmm13[0], var_118_4)
                int32_t rdi_19 = (rbx_33 & 0xffff8000) << 0x10
                int16_t rax_61 = rbx_33.w & 0x7c00
                int32_t var_118_5
                
                if (rax_61 == 0)
                    int32_t rbx_34 = rbx_33 & 0x3ff
                    
                    if (rbx_34 != 0)
                        if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (rbp_1 << 3))))
                            _Init_thread_header(&data_143cda914)
                            
                            if (data_143cda914 == 0xffffffff)
                                data_143cda910 = 0x3fb8aa3b
                                _Init_thread_footer(&data_143cda914)
                        
                        zmm0 = zx.o(0)
                        zmm0[0] = float.s(zx.q(rbx_34))
                        zmm0 = logf(zmm0[0])
                        zmm0[0] = zmm0[0] f* data_143cda910
                        int32_t rdx_4 = 0xa - int.d(zmm0[0])
                        var_118_5 = (rbx_34 << (rdx_4.b + 0xd) & 0x7fffff)
                            | ((0x71 - rdx_4) << 0x17 & 0x7f800000) | rdi_19
                    else
                        var_118_5 = rdi_19
                else if (rax_61 != 0x7c00)
                    var_118_5 =
                        ((rbx_33 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_33 & 0x3ff) << 0xd | rdi_19
                else
                    var_118_5 = rdi_19 | 0x477fe000
                
                uint32_t rbx_41 = zx.d(rsi_2[1])
                int32_t rdi_23 = (rbx_41 & 0xffff8000) << 0x10
                zmm15 = _mm_max_ss(var_118_5[0], zmm15[0])
                int16_t rax_76 = rbx_41.w & 0x7c00
                int32_t var_118_6
                
                if (rax_76 == 0)
                    int32_t rbx_42 = rbx_41 & 0x3ff
                    
                    if (rbx_42 != 0)
                        if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (rbp_1 << 3))))
                            _Init_thread_header(&data_143cda914)
                            
                            if (data_143cda914 == 0xffffffff)
                                data_143cda910 = 0x3fb8aa3b
                                _Init_thread_footer(&data_143cda914)
                        
                        zmm0 = zx.o(0)
                        zmm0[0] = float.s(zx.q(rbx_42))
                        zmm0 = logf(zmm0[0])
                        zmm0[0] = zmm0[0] f* data_143cda910
                        int32_t rdx_5 = 0xa - int.d(zmm0[0])
                        var_118_6 = (rbx_42 << (rdx_5.b + 0xd) & 0x7fffff)
                            | ((0x71 - rdx_5) << 0x17 & 0x7f800000) | rdi_23
                    else
                        var_118_6 = rdi_23
                else if (rax_76 != 0x7c00)
                    var_118_6 =
                        ((rbx_41 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_41 & 0x3ff) << 0xd | rdi_23
                else
                    var_118_6 = rdi_23 | 0x477fe000
                
                uint32_t rbx_49 = zx.d(rsi_2[2])
                int32_t rdi_27 = (rbx_49 & 0xffff8000) << 0x10
                zmm7 = _mm_max_ss(var_118_6[0], zmm7[0])
                int16_t rax_91 = rbx_49.w & 0x7c00
                int32_t var_118_7
                
                if (rax_91 == 0)
                    int32_t rbx_50 = rbx_49 & 0x3ff
                    
                    if (rbx_50 != 0)
                        if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (rbp_1 << 3))))
                            _Init_thread_header(&data_143cda914)
                            
                            if (data_143cda914 == 0xffffffff)
                                data_143cda910 = 0x3fb8aa3b
                                _Init_thread_footer(&data_143cda914)
                        
                        zmm0 = zx.o(0)
                        zmm0[0] = float.s(zx.q(rbx_50))
                        zmm0 = logf(zmm0[0])
                        zmm0[0] = zmm0[0] f* data_143cda910
                        int32_t rdx_6 = 0xa - int.d(zmm0[0])
                        var_118_7 = (rbx_50 << (rdx_6.b + 0xd) & 0x7fffff)
                            | ((0x71 - rdx_6) << 0x17 & 0x7f800000) | rdi_27
                    else
                        var_118_7 = rdi_27
                else if (rax_91 != 0x7c00)
                    var_118_7 =
                        ((rbx_49 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_49 & 0x3ff) << 0xd | rdi_27
                else
                    var_118_7 = rdi_27 | 0x477fe000
                
                uint32_t rbx_57 = zx.d(rsi_2[3])
                int32_t rdi_31 = (rbx_57 & 0xffff8000) << 0x10
                zmm8 = _mm_max_ss(var_118_7[0], zmm8[0])
                result.w = rbx_57.w & 0x7c00
                int32_t var_118_8
                
                if (result.w == 0)
                    int32_t rbx_58 = rbx_57 & 0x3ff
                    
                    if (rbx_58 != 0)
                        if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (rbp_1 << 3))))
                            _Init_thread_header(&data_143cda914)
                            
                            if (data_143cda914 == 0xffffffff)
                                data_143cda910 = 0x3fb8aa3b
                                _Init_thread_footer(&data_143cda914)
                        
                        zmm0 = zx.o(0)
                        zmm0[0] = float.s(zx.q(rbx_58))
                        zmm0 = logf(zmm0[0])
                        zmm0[0] = zmm0[0] f* data_143cda910
                        int32_t rdx_7 = 0xa - int.d(zmm0[0])
                        result = zx.q((0x71 - rdx_7) << 0x17) & 0x7f800000
                        var_118_8 = (rbx_58 << (rdx_7.b + 0xd) & 0x7fffff) | result.d | rdi_31
                    else
                        var_118_8 = rdi_31
                else if (result.w != 0x7c00)
                    result = zx.q(((rbx_57 u>> 0xa & 0x1f) + 0x70) << 0x17)
                        | zx.q((rbx_57 & 0x3ff) << 0xd) | zx.q(rdi_31)
                    var_118_8 = result.d
                else
                    var_118_8 = rdi_31 | 0x477fe000
                
                rsi_2 = &rsi_2[4]
                zmm14 = _mm_max_ss(var_118_8[0], zmm14[0])
                i = i_3
                i_3 -= 1
            while (i != 1)
            i_4 = arg1
            r9 = arg2
            r10 = arg4
            r11 = arg3
            var_100 = zmm7[0]
            var_104 = zmm8[0]
        
        r12 += 1
    while (r12 u< r9)
    
    int32_t rdx_8 = 0
    
    if (r9 != 0)
        void* ThreadLocalStoragePointer_1 = gsbase->ThreadLocalStoragePointer
        int64_t rcx_8 = arg5
        float zmm6[0x4]
        float var_58_1[0x4] = zmm6
        uint64_t rbp_2 = zx.q(data_14401b1a0)
        float zmm9[0x4]
        float var_88_1[0x4] = zmm9
        
        do
            result = zx.q(rdx_8 * i_4)
            void* rsi_5 = zx.q(rdx_8 * r10) + r11
            int32_t* r15_1 = rcx_8 + (result << 2)
            
            if (i_4 != 0)
                zmm6 = zmm15
                uint64_t i_2 = zx.q(i_4)
                zmm9 = zmm14
                zmm6[0] = zmm6[0] - zmm10[0]
                zmm9[0] = zmm9[0] - zmm13[0]
                zmm7[0] = zmm7[0] - zmm11[0]
                zmm8[0] = zmm8[0] - zmm12[0]
                uint64_t i_1
                
                do
                    uint32_t rbx_65 = zx.d(*(rsi_5 + 6))
                    int32_t rdi_35 = (rbx_65 & 0xffff8000) << 0x10
                    int16_t rax_119 = rbx_65.w & 0x7c00
                    int32_t var_10c_1
                    
                    if (rax_119 == 0)
                        int32_t rbx_66 = rbx_65 & 0x3ff
                        
                        if (rbx_66 != 0)
                            if (data_143cda914
                                    s> *(0x14 + *(ThreadLocalStoragePointer_1 + (rbp_2 << 3))))
                                _Init_thread_header(&data_143cda914)
                                
                                if (data_143cda914 == 0xffffffff)
                                    data_143cda910 = 0x3fb8aa3b
                                    _Init_thread_footer(&data_143cda914)
                            
                            zmm0 = zx.o(0)
                            zmm0[0] = float.s(zx.q(rbx_66))
                            zmm0 = logf(zmm0[0])
                            zmm0[0] = zmm0[0] f* data_143cda910
                            int32_t rdx_9 = 0xa - int.d(zmm0[0])
                            var_10c_1 = (rbx_66 << (rdx_9.b + 0xd) & 0x7fffff)
                                | ((0x71 - rdx_9) << 0x17 & 0x7f800000) | rdi_35
                        else
                            var_10c_1 = rdi_35
                    else if (rax_119 != 0x7c00)
                        var_10c_1 = ((rbx_65 u>> 0xa & 0x1f) + 0x70) << 0x17
                            | (rbx_65 & 0x3ff) << 0xd | rdi_35
                    else
                        var_10c_1 = rdi_35 | 0x477fe000
                    
                    uint32_t rbx_73 = zx.d(*(rsi_5 + 4))
                    int32_t rdi_39 = (rbx_73 & 0xffff8000) << 0x10
                    int16_t rax_134 = rbx_73.w & 0x7c00
                    int32_t var_110_1
                    
                    if (rax_134 == 0)
                        int32_t rbx_74 = rbx_73 & 0x3ff
                        
                        if (rbx_74 != 0)
                            if (data_143cda914
                                    s> *(0x14 + *(ThreadLocalStoragePointer_1 + (rbp_2 << 3))))
                                _Init_thread_header(&data_143cda914)
                                
                                if (data_143cda914 == 0xffffffff)
                                    data_143cda910 = 0x3fb8aa3b
                                    _Init_thread_footer(&data_143cda914)
                            
                            zmm0 = zx.o(0)
                            zmm0[0] = float.s(zx.q(rbx_74))
                            zmm0 = logf(zmm0[0])
                            zmm0[0] = zmm0[0] f* data_143cda910
                            int32_t rdx_10 = 0xa - int.d(zmm0[0])
                            var_110_1 = (rbx_74 << (rdx_10.b + 0xd) & 0x7fffff)
                                | ((0x71 - rdx_10) << 0x17 & 0x7f800000) | rdi_39
                        else
                            var_110_1 = rdi_39
                    else if (rax_134 != 0x7c00)
                        var_110_1 = ((rbx_73 u>> 0xa & 0x1f) + 0x70) << 0x17
                            | (rbx_73 & 0x3ff) << 0xd | rdi_39
                    else
                        var_110_1 = rdi_39 | 0x477fe000
                    
                    uint32_t rbx_81 = zx.d(*(rsi_5 + 2))
                    int32_t rdi_43 = (rbx_81 & 0xffff8000) << 0x10
                    int16_t rax_149 = rbx_81.w & 0x7c00
                    int32_t var_114_1
                    
                    if (rax_149 == 0)
                        int32_t rbx_82 = rbx_81 & 0x3ff
                        
                        if (rbx_82 != 0)
                            if (data_143cda914
                                    s> *(0x14 + *(ThreadLocalStoragePointer_1 + (rbp_2 << 3))))
                                _Init_thread_header(&data_143cda914)
                                
                                if (data_143cda914 == 0xffffffff)
                                    data_143cda910 = 0x3fb8aa3b
                                    _Init_thread_footer(&data_143cda914)
                            
                            zmm0 = zx.o(0)
                            zmm0[0] = float.s(zx.q(rbx_82))
                            zmm0 = logf(zmm0[0])
                            zmm0[0] = zmm0[0] f* data_143cda910
                            int32_t rdx_11 = 0xa - int.d(zmm0[0])
                            var_114_1 = (rbx_82 << (rdx_11.b + 0xd) & 0x7fffff)
                                | ((0x71 - rdx_11) << 0x17 & 0x7f800000) | rdi_43
                        else
                            var_114_1 = rdi_43
                    else if (rax_149 != 0x7c00)
                        var_114_1 = ((rbx_81 u>> 0xa & 0x1f) + 0x70) << 0x17
                            | (rbx_81 & 0x3ff) << 0xd | rdi_43
                    else
                        var_114_1 = rdi_43 | 0x477fe000
                    
                    uint32_t rbx_89 = zx.d(*rsi_5)
                    int32_t rdi_47 = (rbx_89 & 0xffff8000) << 0x10
                    int16_t rax_164 = rbx_89.w & 0x7c00
                    int32_t var_118_9
                    
                    if (rax_164 == 0)
                        int32_t rbx_90 = rbx_89 & 0x3ff
                        
                        if (rbx_90 != 0)
                            if (data_143cda914
                                    s> *(0x14 + *(ThreadLocalStoragePointer_1 + (rbp_2 << 3))))
                                _Init_thread_header(&data_143cda914)
                                
                                if (data_143cda914 == 0xffffffff)
                                    data_143cda910 = 0x3fb8aa3b
                                    _Init_thread_footer(&data_143cda914)
                            
                            zmm0 = zx.o(0)
                            zmm0[0] = float.s(zx.q(rbx_90))
                            zmm0 = logf(zmm0[0])
                            zmm0[0] = zmm0[0] f* data_143cda910
                            int32_t rdx_12 = 0xa - int.d(zmm0[0])
                            var_118_9 = (rbx_90 << (rdx_12.b + 0xd) & 0x7fffff)
                                | ((0x71 - rdx_12) << 0x17 & 0x7f800000) | rdi_47
                        else
                            var_118_9 = rdi_47
                    else if (rax_164 != 0x7c00)
                        var_118_9 = ((rbx_89 u>> 0xa & 0x1f) + 0x70) << 0x17
                            | (rbx_89 & 0x3ff) << 0xd | rdi_47
                    else
                        var_118_9 = rdi_47 | 0x477fe000
                    
                    zmm0 = var_118_9
                    zmm0[0] = zmm0[0] - zmm10[0]
                    float zmm1 = var_114_1 - zmm11[0]
                    zmm0[0] = zmm0[0] / zmm6[0]
                    zmm1 = zmm1 / zmm7[0]
                    float var_fc = zmm0[0]
                    zmm0 = var_110_1
                    float var_f8_1 = zmm1
                    zmm0[0] = zmm0[0] - zmm12[0]
                    zmm1 = var_10c_1 - zmm13[0]
                    zmm0[0] = zmm0[0] / zmm8[0]
                    float var_f4_1 = zmm0[0]
                    float var_f0_1 = zmm1 / zmm9[0]
                    void var_ec
                    result, zmm6, zmm7, zmm8, zmm9 = sub_140ae16d0(&var_fc, &var_ec, arg6)
                    rsi_5 += 8
                    *r15_1 = *result
                    r15_1 = &r15_1[1]
                    i_1 = i_2
                    i_2 -= 1
                while (i_1 != 1)
                rcx_8 = arg5
                rdx_8 = var_108
                i_4 = arg1
                r9 = arg2
                r10 = arg4
                r11 = arg3
            
            zmm8 = var_104
            rdx_8 += 1
            zmm7 = var_100
            var_108 = rdx_8
        while (rdx_8 u< r9)

return result
