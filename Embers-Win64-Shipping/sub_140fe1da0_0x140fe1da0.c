// 函数: sub_140fe1da0
// 地址: 0x140fe1da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = arg6
int32_t r10 = arg4
int32_t i = arg2
int64_t r11 = arg3
int32_t rdx = 0
int32_t r8 = arg1
arg6.d = 0
TEB* gsbase
float zmm0[0x4]
float zmm3[0x4]

if (*(result + 4) != 3)
    result = 0
    float zmm10[0x4] = zx.o(0)
    float zmm11[0x4] = zx.o(0)
    float zmm12[0x4] = zx.o(0)
    float zmm13[0x4] = zx.o(0)
    float zmm15[0x4] = 0x3f800000
    float var_104_1 = 1f
    float zmm7[0x4] = 0x3f800000
    float var_108_1 = 1f
    float zmm14[0x4] = 0x3f800000
    int32_t var_110_2 = 0
    float zmm9[0x4] = 0x3f800000
    
    if (i != 0)
        void* ThreadLocalStoragePointer_1 = gsbase->ThreadLocalStoragePointer
        uint64_t r14_2 = zx.q(data_14401b1a0)
        
        do
            int16_t* rbp_5 = zx.q(result.d * r10) + r11
            
            if (r8 != 0)
                uint64_t j_1 = zx.q(r8)
                float temp0_12[0x4]
                uint64_t j
                
                do
                    uint32_t rbx_33 = zx.d(*rbp_5)
                    int32_t rdi_19 = (rbx_33 & 0xffff8000) << 0x10
                    int16_t rax_59 = rbx_33.w & 0x7c00
                    int32_t var_10c_2
                    
                    if (rax_59 == 0)
                        int32_t rbx_34 = rbx_33 & 0x3ff
                        
                        if (rbx_34 != 0)
                            if (data_143cda914
                                    s> *(0x14 + *(ThreadLocalStoragePointer_1 + (r14_2 << 3))))
                                _Init_thread_header(&data_143cda914)
                                
                                if (data_143cda914 == 0xffffffff)
                                    data_143cda910 = 0x3fb8aa3b
                                    _Init_thread_footer(&data_143cda914)
                            
                            zmm0 = zx.o(0)
                            zmm0[0] = float.s(zx.q(rbx_34))
                            zmm0 = logf(zmm0[0])
                            zmm0[0] = zmm0[0] f* data_143cda910
                            int32_t rdx_5 = 0xa - int.d(zmm0[0])
                            var_10c_2 = (rbx_34 << (rdx_5.b + 0xd) & 0x7fffff)
                                | ((0x71 - rdx_5) << 0x17 & 0x7f800000) | rdi_19
                        else
                            var_10c_2 = rdi_19
                    else if (rax_59 != 0x7c00)
                        var_10c_2 = ((rbx_33 u>> 0xa & 0x1f) + 0x70) << 0x17
                            | (rbx_33 & 0x3ff) << 0xd | rdi_19
                    else
                        var_10c_2 = rdi_19 | 0x477fe000
                    
                    uint32_t rbx_41 = zx.d(rbp_5[1])
                    zmm10 = __minss_xmmss_memss(zmm10[0], var_10c_2)
                    int32_t rdi_23 = (rbx_41 & 0xffff8000) << 0x10
                    int16_t rax_74 = rbx_41.w & 0x7c00
                    int32_t var_10c_3
                    
                    if (rax_74 == 0)
                        int32_t rbx_42 = rbx_41 & 0x3ff
                        
                        if (rbx_42 != 0)
                            if (data_143cda914
                                    s> *(0x14 + *(ThreadLocalStoragePointer_1 + (r14_2 << 3))))
                                _Init_thread_header(&data_143cda914)
                                
                                if (data_143cda914 == 0xffffffff)
                                    data_143cda910 = 0x3fb8aa3b
                                    _Init_thread_footer(&data_143cda914)
                            
                            zmm0 = zx.o(0)
                            zmm0[0] = float.s(zx.q(rbx_42))
                            zmm0 = logf(zmm0[0])
                            zmm0[0] = zmm0[0] f* data_143cda910
                            int32_t rdx_6 = 0xa - int.d(zmm0[0])
                            var_10c_3 = (rbx_42 << (rdx_6.b + 0xd) & 0x7fffff)
                                | ((0x71 - rdx_6) << 0x17 & 0x7f800000) | rdi_23
                        else
                            var_10c_3 = rdi_23
                    else if (rax_74 != 0x7c00)
                        var_10c_3 = ((rbx_41 u>> 0xa & 0x1f) + 0x70) << 0x17
                            | (rbx_41 & 0x3ff) << 0xd | rdi_23
                    else
                        var_10c_3 = rdi_23 | 0x477fe000
                    
                    uint32_t rbx_49 = zx.d(rbp_5[2])
                    zmm11 = __minss_xmmss_memss(zmm11[0], var_10c_3)
                    int32_t rdi_27 = (rbx_49 & 0xffff8000) << 0x10
                    int16_t rax_89 = rbx_49.w & 0x7c00
                    int32_t var_10c_4
                    
                    if (rax_89 == 0)
                        int32_t rbx_50 = rbx_49 & 0x3ff
                        
                        if (rbx_50 != 0)
                            if (data_143cda914
                                    s> *(0x14 + *(ThreadLocalStoragePointer_1 + (r14_2 << 3))))
                                _Init_thread_header(&data_143cda914)
                                
                                if (data_143cda914 == 0xffffffff)
                                    data_143cda910 = 0x3fb8aa3b
                                    _Init_thread_footer(&data_143cda914)
                            
                            zmm0 = zx.o(0)
                            zmm0[0] = float.s(zx.q(rbx_50))
                            zmm0 = logf(zmm0[0])
                            zmm0[0] = zmm0[0] f* data_143cda910
                            int32_t rdx_7 = 0xa - int.d(zmm0[0])
                            var_10c_4 = (rbx_50 << (rdx_7.b + 0xd) & 0x7fffff)
                                | ((0x71 - rdx_7) << 0x17 & 0x7f800000) | rdi_27
                        else
                            var_10c_4 = rdi_27
                    else if (rax_89 != 0x7c00)
                        var_10c_4 = ((rbx_49 u>> 0xa & 0x1f) + 0x70) << 0x17
                            | (rbx_49 & 0x3ff) << 0xd | rdi_27
                    else
                        var_10c_4 = rdi_27 | 0x477fe000
                    
                    uint32_t rbx_57 = zx.d(rbp_5[3])
                    zmm12 = __minss_xmmss_memss(zmm12[0], var_10c_4)
                    int32_t rdi_31 = (rbx_57 & 0xffff8000) << 0x10
                    int16_t rax_104 = rbx_57.w & 0x7c00
                    int32_t var_10c_5
                    
                    if (rax_104 == 0)
                        int32_t rbx_58 = rbx_57 & 0x3ff
                        
                        if (rbx_58 != 0)
                            if (data_143cda914
                                    s> *(0x14 + *(ThreadLocalStoragePointer_1 + (r14_2 << 3))))
                                _Init_thread_header(&data_143cda914)
                                
                                if (data_143cda914 == 0xffffffff)
                                    data_143cda910 = 0x3fb8aa3b
                                    _Init_thread_footer(&data_143cda914)
                            
                            zmm0 = zx.o(0)
                            zmm0[0] = float.s(zx.q(rbx_58))
                            zmm0 = logf(zmm0[0])
                            zmm0[0] = zmm0[0] f* data_143cda910
                            int32_t rdx_8 = 0xa - int.d(zmm0[0])
                            var_10c_5 = (rbx_58 << (rdx_8.b + 0xd) & 0x7fffff)
                                | ((0x71 - rdx_8) << 0x17 & 0x7f800000) | rdi_31
                        else
                            var_10c_5 = rdi_31
                    else if (rax_104 != 0x7c00)
                        var_10c_5 = ((rbx_57 u>> 0xa & 0x1f) + 0x70) << 0x17
                            | (rbx_57 & 0x3ff) << 0xd | rdi_31
                    else
                        var_10c_5 = rdi_31 | 0x477fe000
                    
                    uint32_t rbx_65 = zx.d(*rbp_5)
                    zmm13 = __minss_xmmss_memss(zmm13[0], var_10c_5)
                    int32_t rdi_35 = (rbx_65 & 0xffff8000) << 0x10
                    int16_t rax_119 = rbx_65.w & 0x7c00
                    int32_t var_10c_6
                    
                    if (rax_119 == 0)
                        int32_t rbx_66 = rbx_65 & 0x3ff
                        
                        if (rbx_66 != 0)
                            if (data_143cda914
                                    s> *(0x14 + *(ThreadLocalStoragePointer_1 + (r14_2 << 3))))
                                _Init_thread_header(&data_143cda914)
                                
                                if (data_143cda914 == 0xffffffff)
                                    data_143cda910 = 0x3fb8aa3b
                                    _Init_thread_footer(&data_143cda914)
                            
                            zmm0 = zx.o(0)
                            zmm0[0] = float.s(zx.q(rbx_66))
                            zmm0 = logf(zmm0[0])
                            zmm0[0] = zmm0[0] f* data_143cda910
                            int32_t rdx_9 = 0xa - int.d(zmm0[0])
                            var_10c_6 = (rbx_66 << (rdx_9.b + 0xd) & 0x7fffff)
                                | ((0x71 - rdx_9) << 0x17 & 0x7f800000) | rdi_35
                        else
                            var_10c_6 = rdi_35
                    else if (rax_119 != 0x7c00)
                        var_10c_6 = ((rbx_65 u>> 0xa & 0x1f) + 0x70) << 0x17
                            | (rbx_65 & 0x3ff) << 0xd | rdi_35
                    else
                        var_10c_6 = rdi_35 | 0x477fe000
                    
                    uint32_t rbx_73 = zx.d(rbp_5[1])
                    zmm15 = __maxss_xmmss_memss(zmm15[0], var_10c_6)
                    int32_t rdi_39 = (rbx_73 & 0xffff8000) << 0x10
                    int16_t rax_134 = rbx_73.w & 0x7c00
                    int32_t var_10c_7
                    
                    if (rax_134 == 0)
                        int32_t rbx_74 = rbx_73 & 0x3ff
                        
                        if (rbx_74 != 0)
                            if (data_143cda914
                                    s> *(0x14 + *(ThreadLocalStoragePointer_1 + (r14_2 << 3))))
                                _Init_thread_header(&data_143cda914)
                                
                                if (data_143cda914 == 0xffffffff)
                                    data_143cda910 = 0x3fb8aa3b
                                    _Init_thread_footer(&data_143cda914)
                            
                            zmm0 = zx.o(0)
                            zmm0[0] = float.s(zx.q(rbx_74))
                            zmm0 = logf(zmm0[0])
                            zmm0[0] = zmm0[0] f* data_143cda910
                            int32_t rdx_10 = 0xa - int.d(zmm0[0])
                            var_10c_7 = (rbx_74 << (rdx_10.b + 0xd) & 0x7fffff)
                                | ((0x71 - rdx_10) << 0x17 & 0x7f800000) | rdi_39
                        else
                            var_10c_7 = rdi_39
                    else if (rax_134 != 0x7c00)
                        var_10c_7 = ((rbx_73 u>> 0xa & 0x1f) + 0x70) << 0x17
                            | (rbx_73 & 0x3ff) << 0xd | rdi_39
                    else
                        var_10c_7 = rdi_39 | 0x477fe000
                    
                    uint32_t rbx_81 = zx.d(rbp_5[2])
                    zmm7 = __maxss_xmmss_memss(zmm7[0], var_10c_7)
                    int32_t rdi_43 = (rbx_81 & 0xffff8000) << 0x10
                    int16_t rax_149 = rbx_81.w & 0x7c00
                    int32_t var_10c_8
                    
                    if (rax_149 == 0)
                        int32_t rbx_82 = rbx_81 & 0x3ff
                        
                        if (rbx_82 != 0)
                            if (data_143cda914
                                    s> *(0x14 + *(ThreadLocalStoragePointer_1 + (r14_2 << 3))))
                                _Init_thread_header(&data_143cda914)
                                
                                if (data_143cda914 == 0xffffffff)
                                    data_143cda910 = 0x3fb8aa3b
                                    _Init_thread_footer(&data_143cda914)
                            
                            zmm0 = zx.o(0)
                            zmm0[0] = float.s(zx.q(rbx_82))
                            zmm0 = logf(zmm0[0])
                            zmm0[0] = zmm0[0] f* data_143cda910
                            int32_t rdx_11 = 0xa - int.d(zmm0[0])
                            var_10c_8 = (rbx_82 << (rdx_11.b + 0xd) & 0x7fffff)
                                | ((0x71 - rdx_11) << 0x17 & 0x7f800000) | rdi_43
                        else
                            var_10c_8 = rdi_43
                    else if (rax_149 != 0x7c00)
                        var_10c_8 = ((rbx_81 u>> 0xa & 0x1f) + 0x70) << 0x17
                            | (rbx_81 & 0x3ff) << 0xd | rdi_43
                    else
                        var_10c_8 = rdi_43 | 0x477fe000
                    
                    uint32_t rbx_89 = zx.d(rbp_5[3])
                    zmm14 = __maxss_xmmss_memss(zmm14[0], var_10c_8)
                    int32_t rdi_47 = (rbx_89 & 0xffff8000) << 0x10
                    int16_t rax_164 = rbx_89.w & 0x7c00
                    int32_t var_10c_9
                    
                    if (rax_164 == 0)
                        int32_t rbx_90 = rbx_89 & 0x3ff
                        
                        if (rbx_90 != 0)
                            if (data_143cda914
                                    s> *(0x14 + *(ThreadLocalStoragePointer_1 + (r14_2 << 3))))
                                _Init_thread_header(&data_143cda914)
                                
                                if (data_143cda914 == 0xffffffff)
                                    data_143cda910 = 0x3fb8aa3b
                                    _Init_thread_footer(&data_143cda914)
                            
                            zmm0 = zx.o(0)
                            zmm0[0] = float.s(zx.q(rbx_90))
                            zmm0 = logf(zmm0[0])
                            zmm0[0] = zmm0[0] f* data_143cda910
                            int32_t rdx_12 = 0xa - int.d(zmm0[0])
                            var_10c_9 = (rbx_90 << (rdx_12.b + 0xd) & 0x7fffff)
                                | ((0x71 - rdx_12) << 0x17 & 0x7f800000) | rdi_47
                        else
                            var_10c_9 = rdi_47
                    else if (rax_164 != 0x7c00)
                        var_10c_9 = ((rbx_89 u>> 0xa & 0x1f) + 0x70) << 0x17
                            | (rbx_89 & 0x3ff) << 0xd | rdi_47
                    else
                        var_10c_9 = rdi_47 | 0x477fe000
                    
                    rbp_5 = &rbp_5[4]
                    temp0_12 = _mm_max_ss(var_10c_9[0], zmm9[0])
                    zmm9 = temp0_12
                    j = j_1
                    j_1 -= 1
                while (j != 1)
                r8 = arg1
                i = arg2
                r10 = arg4
                r11 = arg3
                var_104_1 = temp0_12[0]
                var_108_1 = zmm7[0]
            
            result = zx.q(var_110_2 + 1)
            var_110_2 = result.d
        while (result.d u< i)
        
        int32_t rdx_13 = 0
        
        if (i != 0)
            void* ThreadLocalStoragePointer_2 = gsbase->ThreadLocalStoragePointer
            float zmm6[0x4]
            float var_58_1[0x4] = zmm6
            float zmm8[0x4]
            float var_78_1[0x4] = zmm8
            uint64_t r14_3 = zx.q(data_14401b1a0)
            
            do
                result = zx.q(rdx_13 * r8)
                void* rbp_8 = zx.q(rdx_13 * r10) + r11
                float (* r12_6)[0x4] = (zx.q(result.d) << 4) + arg5
                
                if (r8 != 0)
                    uint64_t i_4 = zx.q(r8)
                    zmm15[0] = zmm15[0] - zmm10[0]
                    zmm14[0] = zmm14[0] - zmm12[0]
                    zmm7[0] = zmm7[0] - zmm11[0]
                    zmm9[0] = zmm9[0] - zmm13[0]
                    uint64_t i_1
                    
                    do
                        uint32_t rbx_97 = zx.d(*(rbp_8 + 6))
                        int32_t rdi_51 = (rbx_97 & 0xffff8000) << 0x10
                        int16_t rax_181 = rbx_97.w & 0x7c00
                        int32_t var_118_2
                        
                        if (rax_181 == 0)
                            int32_t rbx_98 = rbx_97 & 0x3ff
                            
                            if (rbx_98 != 0)
                                if (data_143cda914
                                        s> *(0x14 + *(ThreadLocalStoragePointer_2 + (r14_3 << 3))))
                                    _Init_thread_header(&data_143cda914)
                                    
                                    if (data_143cda914 == 0xffffffff)
                                        data_143cda910 = 0x3fb8aa3b
                                        _Init_thread_footer(&data_143cda914)
                                
                                zmm0 = zx.o(0)
                                zmm0[0] = float.s(zx.q(rbx_98))
                                zmm0 = logf(zmm0[0])
                                zmm0[0] = zmm0[0] f* data_143cda910
                                int32_t rdx_14 = 0xa - int.d(zmm0[0])
                                var_118_2 = (rbx_98 << (rdx_14.b + 0xd) & 0x7fffff)
                                    | ((0x71 - rdx_14) << 0x17 & 0x7f800000) | rdi_51
                            else
                                var_118_2 = rdi_51
                        else if (rax_181 != 0x7c00)
                            var_118_2 = ((rbx_97 u>> 0xa & 0x1f) + 0x70) << 0x17
                                | (rbx_97 & 0x3ff) << 0xd | rdi_51
                        else
                            var_118_2 = rdi_51 | 0x477fe000
                        
                        uint32_t rbx_105 = zx.d(*(rbp_8 + 4))
                        int32_t rdi_55 = (rbx_105 & 0xffff8000) << 0x10
                        int16_t rax_196 = rbx_105.w & 0x7c00
                        int32_t var_114_2
                        
                        if (rax_196 == 0)
                            int32_t rbx_106 = rbx_105 & 0x3ff
                            
                            if (rbx_106 != 0)
                                if (data_143cda914
                                        s> *(0x14 + *(ThreadLocalStoragePointer_2 + (r14_3 << 3))))
                                    _Init_thread_header(&data_143cda914)
                                    
                                    if (data_143cda914 == 0xffffffff)
                                        data_143cda910 = 0x3fb8aa3b
                                        _Init_thread_footer(&data_143cda914)
                                
                                zmm0 = zx.o(0)
                                zmm0[0] = float.s(zx.q(rbx_106))
                                zmm0 = logf(zmm0[0])
                                zmm0[0] = zmm0[0] f* data_143cda910
                                int32_t rdx_15 = 0xa - int.d(zmm0[0])
                                var_114_2 = (rbx_106 << (rdx_15.b + 0xd) & 0x7fffff)
                                    | ((0x71 - rdx_15) << 0x17 & 0x7f800000) | rdi_55
                            else
                                var_114_2 = rdi_55
                        else if (rax_196 != 0x7c00)
                            var_114_2 = ((rbx_105 u>> 0xa & 0x1f) + 0x70) << 0x17
                                | (rbx_105 & 0x3ff) << 0xd | rdi_55
                        else
                            var_114_2 = rdi_55 | 0x477fe000
                        
                        uint32_t rbx_113 = zx.d(*(rbp_8 + 2))
                        int32_t rdi_59 = (rbx_113 & 0xffff8000) << 0x10
                        int16_t rax_211 = rbx_113.w & 0x7c00
                        int32_t var_110_3
                        
                        if (rax_211 == 0)
                            int32_t rbx_114 = rbx_113 & 0x3ff
                            
                            if (rbx_114 != 0)
                                if (data_143cda914
                                        s> *(0x14 + *(ThreadLocalStoragePointer_2 + (r14_3 << 3))))
                                    _Init_thread_header(&data_143cda914)
                                    
                                    if (data_143cda914 == 0xffffffff)
                                        data_143cda910 = 0x3fb8aa3b
                                        _Init_thread_footer(&data_143cda914)
                                
                                zmm0 = zx.o(0)
                                zmm0[0] = float.s(zx.q(rbx_114))
                                zmm0 = logf(zmm0[0])
                                zmm0[0] = zmm0[0] f* data_143cda910
                                int32_t rdx_16 = 0xa - int.d(zmm0[0])
                                var_110_3 = (rbx_114 << (rdx_16.b + 0xd) & 0x7fffff)
                                    | ((0x71 - rdx_16) << 0x17 & 0x7f800000) | rdi_59
                            else
                                var_110_3 = rdi_59
                        else if (rax_211 != 0x7c00)
                            var_110_3 = ((rbx_113 u>> 0xa & 0x1f) + 0x70) << 0x17
                                | (rbx_113 & 0x3ff) << 0xd | rdi_59
                        else
                            var_110_3 = rdi_59 | 0x477fe000
                        
                        uint32_t rbx_121 = zx.d(*rbp_8)
                        int32_t rdi_63 = (rbx_121 & 0xffff8000) << 0x10
                        result.w = rbx_121.w & 0x7c00
                        int32_t var_10c_10
                        
                        if (result.w == 0)
                            int32_t rbx_122 = rbx_121 & 0x3ff
                            
                            if (rbx_122 != 0)
                                if (data_143cda914
                                        s> *(0x14 + *(ThreadLocalStoragePointer_2 + (r14_3 << 3))))
                                    _Init_thread_header(&data_143cda914)
                                    
                                    if (data_143cda914 == 0xffffffff)
                                        data_143cda910 = 0x3fb8aa3b
                                        _Init_thread_footer(&data_143cda914)
                                
                                zmm0 = zx.o(0)
                                zmm0[0] = float.s(zx.q(rbx_122))
                                zmm0 = logf(zmm0[0])
                                zmm0[0] = zmm0[0] f* data_143cda910
                                int32_t rdx_17 = 0xa - int.d(zmm0[0])
                                result = zx.q((0x71 - rdx_17) << 0x17) & 0x7f800000
                                var_10c_10 =
                                    (rbx_122 << (rdx_17.b + 0xd) & 0x7fffff) | result.d | rdi_63
                            else
                                var_10c_10 = rdi_63
                        else if (result.w != 0x7c00)
                            result = zx.q(((rbx_121 u>> 0xa & 0x1f) + 0x70) << 0x17)
                                | zx.q((rbx_121 & 0x3ff) << 0xd) | zx.q(rdi_63)
                            var_10c_10 = result.d
                        else
                            var_10c_10 = rdi_63 | 0x477fe000
                        
                        zmm3 = var_10c_10
                        rbp_8 += 8
                        zmm0 = var_110_3
                        zmm3[0] = zmm3[0] - zmm10[0]
                        zmm0[0] = zmm0[0] - zmm11[0]
                        int32_t zmm1 = var_114_2 f- zmm12[0]
                        int32_t zmm2 = var_118_2 f- zmm13[0]
                        zmm3[0] = zmm3[0] / zmm15[0]
                        zmm0[0] = zmm0[0] / zmm7[0]
                        float temp0_13[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
                        temp0_13[0] = zmm0[0]
                        float temp0_14[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xc6)
                        zmm2 = zmm2 f/ zmm9[0]
                        temp0_14[0] = zmm1 f/ zmm14[0]
                        float temp0_15[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0x27)
                        temp0_15[0] = zmm2
                        *r12_6 = _mm_shuffle_ps(temp0_15, temp0_15, 0x39)
                        r12_6 = &r12_6[1]
                        i_1 = i_4
                        i_4 -= 1
                    while (i_1 != 1)
                    zmm7 = var_108_1
                    rdx_13 = arg6.d
                    r8 = arg1
                    i = arg2
                    r10 = arg4
                    r11 = arg3
                
                zmm9 = var_104_1
                rdx_13 += 1
                arg6.d = rdx_13
            while (rdx_13 u< i)
else if (i != 0)
    uint64_t r14_1 = zx.q(data_14401b1a0)
    void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
    
    do
        result = zx.q(rdx * r8)
        void* rbp_3 = zx.q(rdx * r10) + r11
        float (* r12_3)[0x4] = (zx.q(result.d) << 4) + arg5
        
        if (r8 != 0)
            uint64_t i_3 = zx.q(r8)
            uint64_t i_2
            
            do
                uint32_t rbx_1 = zx.d(*(rbp_3 + 6))
                int32_t rdi_3 = (rbx_1 & 0xffff8000) << 0x10
                int16_t rax_1 = rbx_1.w & 0x7c00
                int32_t var_10c_1
                
                if (rax_1 == 0)
                    int32_t rbx_2 = rbx_1 & 0x3ff
                    
                    if (rbx_2 != 0)
                        if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (r14_1 << 3))))
                            _Init_thread_header(&data_143cda914)
                            
                            if (data_143cda914 == 0xffffffff)
                                data_143cda910 = 0x3fb8aa3b
                                _Init_thread_footer(&data_143cda914)
                        
                        zmm0 = zx.o(0)
                        zmm0[0] = float.s(zx.q(rbx_2))
                        zmm0 = logf(zmm0[0])
                        zmm0[0] = zmm0[0] f* data_143cda910
                        int32_t rdx_1 = 0xa - int.d(zmm0[0])
                        var_10c_1 = (rbx_2 << (rdx_1.b + 0xd) & 0x7fffff)
                            | ((0x71 - rdx_1) << 0x17 & 0x7f800000) | rdi_3
                    else
                        var_10c_1 = rdi_3
                else if (rax_1 != 0x7c00)
                    var_10c_1 =
                        ((rbx_1 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_1 & 0x3ff) << 0xd | rdi_3
                else
                    var_10c_1 = rdi_3 | 0x477fe000
                
                uint32_t rbx_9 = zx.d(*(rbp_3 + 4))
                int32_t rdi_7 = (rbx_9 & 0xffff8000) << 0x10
                int16_t rax_16 = rbx_9.w & 0x7c00
                int32_t var_110_1
                
                if (rax_16 == 0)
                    int32_t rbx_10 = rbx_9 & 0x3ff
                    
                    if (rbx_10 != 0)
                        if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (r14_1 << 3))))
                            _Init_thread_header(&data_143cda914)
                            
                            if (data_143cda914 == 0xffffffff)
                                data_143cda910 = 0x3fb8aa3b
                                _Init_thread_footer(&data_143cda914)
                        
                        zmm0 = zx.o(0)
                        zmm0[0] = float.s(zx.q(rbx_10))
                        zmm0 = logf(zmm0[0])
                        zmm0[0] = zmm0[0] f* data_143cda910
                        int32_t rdx_2 = 0xa - int.d(zmm0[0])
                        var_110_1 = (rbx_10 << (rdx_2.b + 0xd) & 0x7fffff)
                            | ((0x71 - rdx_2) << 0x17 & 0x7f800000) | rdi_7
                    else
                        var_110_1 = rdi_7
                else if (rax_16 != 0x7c00)
                    var_110_1 =
                        ((rbx_9 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_9 & 0x3ff) << 0xd | rdi_7
                else
                    var_110_1 = rdi_7 | 0x477fe000
                
                uint32_t rbx_17 = zx.d(*(rbp_3 + 2))
                int32_t rdi_11 = (rbx_17 & 0xffff8000) << 0x10
                int16_t rax_31 = rbx_17.w & 0x7c00
                int32_t var_114_1
                
                if (rax_31 == 0)
                    int32_t rbx_18 = rbx_17 & 0x3ff
                    
                    if (rbx_18 != 0)
                        if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (r14_1 << 3))))
                            _Init_thread_header(&data_143cda914)
                            
                            if (data_143cda914 == 0xffffffff)
                                data_143cda910 = 0x3fb8aa3b
                                _Init_thread_footer(&data_143cda914)
                        
                        zmm0 = zx.o(0)
                        zmm0[0] = float.s(zx.q(rbx_18))
                        zmm0 = logf(zmm0[0])
                        zmm0[0] = zmm0[0] f* data_143cda910
                        int32_t rdx_3 = 0xa - int.d(zmm0[0])
                        var_114_1 = (rbx_18 << (rdx_3.b + 0xd) & 0x7fffff)
                            | ((0x71 - rdx_3) << 0x17 & 0x7f800000) | rdi_11
                    else
                        var_114_1 = rdi_11
                else if (rax_31 != 0x7c00)
                    var_114_1 =
                        ((rbx_17 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_17 & 0x3ff) << 0xd | rdi_11
                else
                    var_114_1 = rdi_11 | 0x477fe000
                
                uint32_t rbx_25 = zx.d(*rbp_3)
                int32_t rdi_15 = (rbx_25 & 0xffff8000) << 0x10
                result.w = rbx_25.w & 0x7c00
                int32_t var_118_1
                
                if (result.w == 0)
                    int32_t rbx_26 = rbx_25 & 0x3ff
                    
                    if (rbx_26 != 0)
                        if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (r14_1 << 3))))
                            _Init_thread_header(&data_143cda914)
                            
                            if (data_143cda914 == 0xffffffff)
                                data_143cda910 = 0x3fb8aa3b
                                _Init_thread_footer(&data_143cda914)
                        
                        zmm0 = zx.o(0)
                        zmm0[0] = float.s(zx.q(rbx_26))
                        zmm0 = logf(zmm0[0])
                        zmm0[0] = zmm0[0] f* data_143cda910
                        int32_t rdx_4 = 0xa - int.d(zmm0[0])
                        result = zx.q((0x71 - rdx_4) << 0x17) & 0x7f800000
                        var_118_1 = (rbx_26 << (rdx_4.b + 0xd) & 0x7fffff) | result.d | rdi_15
                    else
                        var_118_1 = rdi_15
                else if (result.w != 0x7c00)
                    result = zx.q(((rbx_25 u>> 0xa & 0x1f) + 0x70) << 0x17)
                        | zx.q((rbx_25 & 0x3ff) << 0xd) | zx.q(rdi_15)
                    var_118_1 = result.d
                else
                    var_118_1 = rdi_15 | 0x477fe000
                
                zmm3 = var_118_1
                rbp_3 += 8
                float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
                temp0_1[0] = var_114_1[0]
                float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
                temp0_2[0] = var_110_1
                float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x27)
                temp0_3[0] = var_10c_1
                *r12_3 = _mm_shuffle_ps(temp0_3, temp0_3, 0x39)
                r12_3 = &r12_3[1]
                i_2 = i_3
                i_3 -= 1
            while (i_2 != 1)
            rdx = arg6.d
            r8 = arg1
            i = arg2
            r10 = arg4
            r11 = arg3
        
        rdx += 1
        arg6.d = rdx
    while (rdx u< i)
return result
