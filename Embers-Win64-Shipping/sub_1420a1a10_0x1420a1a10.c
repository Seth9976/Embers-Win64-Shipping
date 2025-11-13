// 函数: sub_1420a1a10
// 地址: 0x1420a1a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(arg2[5].b)
int64_t* r12 = arg2
int64_t* r14 = arg1
uint64_t result_1
uint64_t result_2

if ((result.b & 1) != 0)
    int64_t* rdx = arg2[1]
    result_1 = 0
    uint64_t* rcx = *rdx
    
    if (&rcx[1] u> rdx[1])
        uint64_t* rdx_1 = &result_1
        
        if ((*(r12 + 0x29) & 0x20) != 0)
            result = sub_140b540d0(r12, rdx_1, arg3)
        else
            result = (*(*r12 + 0x150))(r12, rdx_1, 8)
    else
        result = *rcx
        result_1 = result
        *rdx += 8
    
    if (result_1 u> 0)
        int64_t* rax_2 = j_sub_140a82f30(0x50)
        int64_t* rbx_1 = rax_2
        
        if (rax_2 == 0)
            rbx_1 = nullptr
        else
            __builtin_memset(rax_2, 0, 0x49)
        
        if (&r14[0xa2] != &result_2)
            int64_t* rsi_1 = r14[0xa2]
            r14[0xa2] = rbx_1
            
            if (rsi_1 != 0)
                sub_1419fd970(rsi_1)
                arg3 = j_sub_140a74f90(rsi_1)
        else if (rbx_1 != 0)
            sub_1419fd970(rbx_1)
            arg3 = j_sub_140a74f90(rbx_1)
        
        return sub_1420a0840(r14[0xa2], r12, arg3)
else if ((result.b & 2) != 0)
    result = (*(*arg2 + 0x20))(r12)
    int64_t* rdx_4 = r12[1]
    result_1 = 0
    uint64_t result_3 = result
    result_2 = result
    int64_t* r8_1 = *rdx_4
    
    if (&r8_1[1] u> rdx_4[1])
        uint64_t* rdx_5 = &result_1
        
        if ((*(r12 + 0x29) & 0x20) != 0)
            result = sub_140b540d0(r12, rdx_5, arg3)
        else
            result = (*(*r12 + 0x150))(r12, rdx_5, 8)
    else
        result_1 = *r8_1
        *rdx_4 += 8
    
    if ((r14[1].b & 0x30) == 0)
        int64_t rax_7 = (*(*r12 + 0x20))(r12)
        int32_t rdx_6 = r14[0x94].d
        int64_t rdi_2 = rax_7
        int128_t zmm6
        int128_t zmm7
        int128_t zmm8
        int128_t zmm9
        int128_t zmm10
        int128_t zmm11
        int128_t zmm12
        int128_t zmm13
        int128_t zmm14
        
        if (rdx_6 s> 0)
            void* rcx_11 = r14[0x9d]
            
            if (rcx_11 != 0 && (*(*(rcx_11 + 0x28) + 0x40) != rdx_6 || *(r14 + 0x50c) s> 0))
                sub_14209fb70(&r14[0x9f])
                int64_t var_d8_1 = 0
                int128_t var_118
                __builtin_memset(&var_118, 0, 0x18)
                int64_t var_f8_1 = (zx.o(0)).q
                int64_t var_e8_1 = (zx.o(0)).q
                char var_d0_1 = 1
                sub_141a00740(&var_118, 0, 0)
                int128_t zmm1
                zmm1, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14 =
                    sub_142080d10(r14, &var_118, r14[0x9d])
                zmm6 = sub_1420a9f70(r14[0x9d], &var_118, zmm1)
                arg3 = sub_141ee8490(r14)
                int64_t* rcx_18 = var_118.q
                
                if (rcx_18 != 0)
                    (**rcx_18)(rcx_18, 1)
                
                if (var_f8_1 != 0)
                    (**var_f8_1)(var_f8_1, 1)
                
                int64_t* var_108
                
                if (var_108 != 0)
                    (**var_108)(var_108, 1)
                
                if (var_e8_1 != 0)
                    (**var_e8_1)(var_e8_1, 1)
        
        void* rcx_22 = r14[0x9d]
        
        if (rcx_22 != 0)
            void* rax_12 = *(rcx_22 + 0xc0)
            
            if (rax_12 != 0)
                int64_t rdx_9 = sx.q(*(rax_12 + 0x40))
                
                if (rdx_9.d s> 0)
                    TEB* gsbase
                    void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
                    int32_t rax_13 = 0
                    int64_t rcx_23 = 0
                    uint64_t r13_1 = zx.q(data_14401b1a0)
                    int128_t var_48_1 = zmm6
                    int128_t var_58_1 = zmm7
                    int128_t var_68_1 = zmm8
                    int128_t var_78_1 = zmm9
                    int128_t var_88_1 = zmm10
                    int128_t var_98_1 = zmm11
                    int128_t var_a8_1 = zmm12
                    int128_t var_b8_1 = zmm13
                    int128_t var_c8_1 = zmm14
                    int32_t var_158_1 = 0
                    int64_t var_150_1 = rdx_9
                    int64_t var_140_1 = 0
                    
                    do
                        int32_t rcx_24
                        
                        if (rax_13 s< 0 || rax_13 s>= r14[0x9b].d)
                            rcx_24 = rax_13
                        else
                            rcx_24 = *(r14[0x9a] + (rcx_23 << 2))
                            rax_13 = var_158_1
                        
                        if (rcx_24 != 0xffffffff)
                            int64_t rbx_2 = sx.q(rcx_24)
                            void* r15_1 = *(r14[0x9d] + 0xc0)
                            int64_t r14_1 = *(r15_1 + 0x18)
                            int64_t rdx_10 = *(**(r15_1 + 0x10) + 0x28)
                            
                            if (*(r15_1 + 0x48) == 0)
                                rdx_10()
                                int64_t* rcx_77 = *(r15_1 + 0x10)
                                (*(*rcx_77 + 0x20))(rcx_77)
                                int64_t* rcx_78 = *(r15_1 + 0x10)
                                int64_t rbx_76 = *(r15_1 + 0x18)
                                int64_t rdi_4 = rbx_2 * 0xc
                                zmm13 = *(r14_1 + (rdi_4 << 2))
                                zmm14 = *(r14_1 + (rdi_4 << 2) + 4)
                                zmm11 = *(r14_1 + (rdi_4 << 2) + 8)
                                zmm12 = *(r14_1 + (rdi_4 << 2) + 0x10)
                                zmm10 = *(r14_1 + (rdi_4 << 2) + 0x14)
                                zmm8 = *(r14_1 + (rdi_4 << 2) + 0x18)
                                zmm9 = *(r14_1 + (rdi_4 << 2) + 0x20)
                                zmm7 = *(r14_1 + (rdi_4 << 2) + 0x24)
                                zmm6 = *(r14_1 + (rdi_4 << 2) + 0x28)
                                (*(*rcx_78 + 0x28))(rcx_78)
                                int64_t* rcx_79 = *(r15_1 + 0x10)
                                (*(*rcx_79 + 0x20))(rcx_79)
                                *(rbx_76 + (rdi_4 << 2)) = zmm13.d
                                *(rbx_76 + (rdi_4 << 2) + 4) = zmm14.d
                                *(rbx_76 + (rdi_4 << 2) + 8) = zmm11.d
                                *(rbx_76 + (rdi_4 << 2) + 0xc) = 0
                                *(rbx_76 + (rdi_4 << 2) + 0x10) = zmm12.d
                                *(rbx_76 + (rdi_4 << 2) + 0x14) = zmm10.d
                                *(rbx_76 + (rdi_4 << 2) + 0x18) = zmm8.d
                                *(rbx_76 + (rdi_4 << 2) + 0x1c) = 0
                                *(rbx_76 + (rdi_4 << 2) + 0x20) = zmm9.d
                                *(rbx_76 + (rdi_4 << 2) + 0x24) = zmm7.d
                                *(rbx_76 + (rdi_4 << 2) + 0x28) = zmm6.d
                                *(rbx_76 + (rdi_4 << 2) + 0x2c) = 0
                            else
                                rdx_10()
                                int64_t* rcx_26 = *(r15_1 + 0x10)
                                (*(*rcx_26 + 0x20))(rcx_26)
                                int64_t rdi_3 = rbx_2 * 3
                                uint32_t rbx_3 = zx.d(*(r14_1 + (rdi_3 << 3)))
                                int32_t rsi_4 = (rbx_3 & 0xffff8000) << 0x10
                                int16_t rax_18 = rbx_3.w & 0x7c00
                                int32_t var_184_1
                                
                                if (rax_18 == 0)
                                    int32_t rbx_4 = rbx_3 & 0x3ff
                                    
                                    if (rbx_4 != 0)
                                        if (data_143cda914 s> *(0x14
                                                + *(ThreadLocalStoragePointer + (r13_1 << 3))))
                                            _Init_thread_header(&data_143cda914)
                                            
                                            if (data_143cda914 == 0xffffffff)
                                                data_143cda910 = 0x3fb8aa3b
                                                _Init_thread_footer(&data_143cda914)
                                        
                                        int32_t rdx_11 = 0xa
                                            - int.d(logf(float.s(zx.q(rbx_4))) f* data_143cda910)
                                        var_184_1 = (rbx_4 << (rdx_11.b + 0xd) & 0x7fffff)
                                            | ((0x71 - rdx_11) << 0x17 & 0x7f800000) | rsi_4
                                    else
                                        var_184_1 = rsi_4
                                else if (rax_18 != 0x7c00)
                                    var_184_1 = ((rbx_3 u>> 0xa & 0x1f) + 0x70) << 0x17
                                        | (rbx_3 & 0x3ff) << 0xd | rsi_4
                                else
                                    var_184_1 = rsi_4 | 0x477fe000
                                
                                uint32_t rbx_11 = zx.d(*(r14_1 + (rdi_3 << 3) + 2))
                                int32_t rsi_8 = (rbx_11 & 0xffff8000) << 0x10
                                int16_t rax_32 = rbx_11.w & 0x7c00
                                int32_t var_180_1
                                
                                if (rax_32 == 0)
                                    int32_t rbx_12 = rbx_11 & 0x3ff
                                    
                                    if (rbx_12 != 0)
                                        if (data_143cda914 s> *(0x14
                                                + *(ThreadLocalStoragePointer + (r13_1 << 3))))
                                            _Init_thread_header(&data_143cda914)
                                            
                                            if (data_143cda914 == 0xffffffff)
                                                data_143cda910 = 0x3fb8aa3b
                                                _Init_thread_footer(&data_143cda914)
                                        
                                        int32_t rdx_12 = 0xa
                                            - int.d(logf(float.s(zx.q(rbx_12))) f* data_143cda910)
                                        var_180_1 = (rbx_12 << (rdx_12.b + 0xd) & 0x7fffff)
                                            | ((0x71 - rdx_12) << 0x17 & 0x7f800000) | rsi_8
                                    else
                                        var_180_1 = rsi_8
                                else if (rax_32 != 0x7c00)
                                    var_180_1 = ((rbx_11 u>> 0xa & 0x1f) + 0x70) << 0x17
                                        | (rbx_11 & 0x3ff) << 0xd | rsi_8
                                else
                                    var_180_1 = rsi_8 | 0x477fe000
                                
                                uint32_t rbx_19 = zx.d(*(r14_1 + (rdi_3 << 3) + 4))
                                int32_t rsi_12 = (rbx_19 & 0xffff8000) << 0x10
                                int16_t rax_46 = rbx_19.w & 0x7c00
                                int32_t var_17c_1
                                
                                if (rax_46 == 0)
                                    int32_t rbx_20 = rbx_19 & 0x3ff
                                    
                                    if (rbx_20 != 0)
                                        if (data_143cda914 s> *(0x14
                                                + *(ThreadLocalStoragePointer + (r13_1 << 3))))
                                            _Init_thread_header(&data_143cda914)
                                            
                                            if (data_143cda914 == 0xffffffff)
                                                data_143cda910 = 0x3fb8aa3b
                                                _Init_thread_footer(&data_143cda914)
                                        
                                        int32_t rdx_13 = 0xa
                                            - int.d(logf(float.s(zx.q(rbx_20))) f* data_143cda910)
                                        var_17c_1 = (rbx_20 << (rdx_13.b + 0xd) & 0x7fffff)
                                            | ((0x71 - rdx_13) << 0x17 & 0x7f800000) | rsi_12
                                    else
                                        var_17c_1 = rsi_12
                                else if (rax_46 != 0x7c00)
                                    var_17c_1 = ((rbx_19 u>> 0xa & 0x1f) + 0x70) << 0x17
                                        | (rbx_19 & 0x3ff) << 0xd | rsi_12
                                else
                                    var_17c_1 = rsi_12 | 0x477fe000
                                
                                uint32_t rax_60 = zx.d(*(r14_1 + (rdi_3 << 3) + 6))
                                
                                if ((0x7c00 & rax_60.w) == 0 && (rax_60 & 0x3ff) != 0
                                        && data_143cda914
                                        s> *(0x14 + *(ThreadLocalStoragePointer + (r13_1 << 3))))
                                    _Init_thread_header(&data_143cda914)
                                    
                                    if (data_143cda914 == 0xffffffff)
                                        data_143cda910 = 0x3fb8aa3b
                                        _Init_thread_footer(&data_143cda914)
                                
                                uint32_t rbx_27 = zx.d(*(r14_1 + (rdi_3 << 3) + 8))
                                int32_t rsi_16 = (rbx_27 & 0xffff8000) << 0x10
                                int16_t rax_63 = rbx_27.w & 0x7c00
                                int32_t var_178_1
                                
                                if (rax_63 == 0)
                                    int32_t rbx_28 = rbx_27 & 0x3ff
                                    
                                    if (rbx_28 != 0)
                                        if (data_143cda914 s> *(0x14
                                                + *(ThreadLocalStoragePointer + (r13_1 << 3))))
                                            _Init_thread_header(&data_143cda914)
                                            
                                            if (data_143cda914 == 0xffffffff)
                                                data_143cda910 = 0x3fb8aa3b
                                                _Init_thread_footer(&data_143cda914)
                                        
                                        int32_t rdx_14 = 0xa
                                            - int.d(logf(float.s(zx.q(rbx_28))) f* data_143cda910)
                                        var_178_1 = (rbx_28 << (rdx_14.b + 0xd) & 0x7fffff)
                                            | ((0x71 - rdx_14) << 0x17 & 0x7f800000) | rsi_16
                                    else
                                        var_178_1 = rsi_16
                                else if (rax_63 != 0x7c00)
                                    var_178_1 = ((rbx_27 u>> 0xa & 0x1f) + 0x70) << 0x17
                                        | (rbx_27 & 0x3ff) << 0xd | rsi_16
                                else
                                    var_178_1 = rsi_16 | 0x477fe000
                                
                                uint32_t rbx_35 = zx.d(*(r14_1 + (rdi_3 << 3) + 0xa))
                                int32_t rsi_20 = (rbx_35 & 0xffff8000) << 0x10
                                int16_t rax_77 = rbx_35.w & 0x7c00
                                int32_t var_174_1
                                
                                if (rax_77 == 0)
                                    int32_t rbx_36 = rbx_35 & 0x3ff
                                    
                                    if (rbx_36 != 0)
                                        if (data_143cda914 s> *(0x14
                                                + *(ThreadLocalStoragePointer + (r13_1 << 3))))
                                            _Init_thread_header(&data_143cda914)
                                            
                                            if (data_143cda914 == 0xffffffff)
                                                data_143cda910 = 0x3fb8aa3b
                                                _Init_thread_footer(&data_143cda914)
                                        
                                        int32_t rdx_15 = 0xa
                                            - int.d(logf(float.s(zx.q(rbx_36))) f* data_143cda910)
                                        var_174_1 = (rbx_36 << (rdx_15.b + 0xd) & 0x7fffff)
                                            | ((0x71 - rdx_15) << 0x17 & 0x7f800000) | rsi_20
                                    else
                                        var_174_1 = rsi_20
                                else if (rax_77 != 0x7c00)
                                    var_174_1 = ((rbx_35 u>> 0xa & 0x1f) + 0x70) << 0x17
                                        | (rbx_35 & 0x3ff) << 0xd | rsi_20
                                else
                                    var_174_1 = rsi_20 | 0x477fe000
                                
                                uint32_t rbx_43 = zx.d(*(r14_1 + (rdi_3 << 3) + 0xc))
                                int32_t rsi_24 = (rbx_43 & 0xffff8000) << 0x10
                                int16_t rax_91 = rbx_43.w & 0x7c00
                                int32_t var_170_1
                                
                                if (rax_91 == 0)
                                    int32_t rbx_44 = rbx_43 & 0x3ff
                                    
                                    if (rbx_44 != 0)
                                        if (data_143cda914 s> *(0x14
                                                + *(ThreadLocalStoragePointer + (r13_1 << 3))))
                                            _Init_thread_header(&data_143cda914)
                                            
                                            if (data_143cda914 == 0xffffffff)
                                                data_143cda910 = 0x3fb8aa3b
                                                _Init_thread_footer(&data_143cda914)
                                        
                                        int32_t rdx_16 = 0xa
                                            - int.d(logf(float.s(zx.q(rbx_44))) f* data_143cda910)
                                        var_170_1 = (rbx_44 << (rdx_16.b + 0xd) & 0x7fffff)
                                            | ((0x71 - rdx_16) << 0x17 & 0x7f800000) | rsi_24
                                    else
                                        var_170_1 = rsi_24
                                else if (rax_91 != 0x7c00)
                                    var_170_1 = ((rbx_43 u>> 0xa & 0x1f) + 0x70) << 0x17
                                        | (rbx_43 & 0x3ff) << 0xd | rsi_24
                                else
                                    var_170_1 = rsi_24 | 0x477fe000
                                
                                uint32_t rax_105 = zx.d(*(r14_1 + (rdi_3 << 3) + 0xe))
                                
                                if ((0x7c00 & rax_105.w) == 0 && (rax_105 & 0x3ff) != 0
                                        && data_143cda914
                                        s> *(0x14 + *(ThreadLocalStoragePointer + (r13_1 << 3))))
                                    _Init_thread_header(&data_143cda914)
                                    
                                    if (data_143cda914 == 0xffffffff)
                                        data_143cda910 = 0x3fb8aa3b
                                        _Init_thread_footer(&data_143cda914)
                                
                                uint32_t rbx_51 = zx.d(*(r14_1 + (rdi_3 << 3) + 0x10))
                                int32_t rsi_28 = (rbx_51 & 0xffff8000) << 0x10
                                int16_t rax_108 = rbx_51.w & 0x7c00
                                int32_t var_16c_1
                                
                                if (rax_108 == 0)
                                    int32_t rbx_52 = rbx_51 & 0x3ff
                                    
                                    if (rbx_52 != 0)
                                        if (data_143cda914 s> *(0x14
                                                + *(ThreadLocalStoragePointer + (r13_1 << 3))))
                                            _Init_thread_header(&data_143cda914)
                                            
                                            if (data_143cda914 == 0xffffffff)
                                                data_143cda910 = 0x3fb8aa3b
                                                _Init_thread_footer(&data_143cda914)
                                        
                                        int32_t rdx_17 = 0xa
                                            - int.d(logf(float.s(zx.q(rbx_52))) f* data_143cda910)
                                        var_16c_1 = (rbx_52 << (rdx_17.b + 0xd) & 0x7fffff)
                                            | ((0x71 - rdx_17) << 0x17 & 0x7f800000) | rsi_28
                                    else
                                        var_16c_1 = rsi_28
                                else if (rax_108 != 0x7c00)
                                    var_16c_1 = ((rbx_51 u>> 0xa & 0x1f) + 0x70) << 0x17
                                        | (rbx_51 & 0x3ff) << 0xd | rsi_28
                                else
                                    var_16c_1 = rsi_28 | 0x477fe000
                                
                                uint32_t rbx_59 = zx.d(*(r14_1 + (rdi_3 << 3) + 0x12))
                                int32_t rsi_32 = (rbx_59 & 0xffff8000) << 0x10
                                int16_t rax_122 = rbx_59.w & 0x7c00
                                int32_t var_168_1
                                
                                if (rax_122 == 0)
                                    int32_t rbx_60 = rbx_59 & 0x3ff
                                    
                                    if (rbx_60 != 0)
                                        if (data_143cda914 s> *(0x14
                                                + *(ThreadLocalStoragePointer + (r13_1 << 3))))
                                            _Init_thread_header(&data_143cda914)
                                            
                                            if (data_143cda914 == 0xffffffff)
                                                data_143cda910 = 0x3fb8aa3b
                                                _Init_thread_footer(&data_143cda914)
                                        
                                        int32_t rdx_18 = 0xa
                                            - int.d(logf(float.s(zx.q(rbx_60))) f* data_143cda910)
                                        var_168_1 = (rbx_60 << (rdx_18.b + 0xd) & 0x7fffff)
                                            | ((0x71 - rdx_18) << 0x17 & 0x7f800000) | rsi_32
                                    else
                                        var_168_1 = rsi_32
                                else if (rax_122 != 0x7c00)
                                    var_168_1 = ((rbx_59 u>> 0xa & 0x1f) + 0x70) << 0x17
                                        | (rbx_59 & 0x3ff) << 0xd | rsi_32
                                else
                                    var_168_1 = rsi_32 | 0x477fe000
                                
                                uint32_t rbx_67 = zx.d(*(r14_1 + (rdi_3 << 3) + 0x14))
                                int32_t rsi_36 = (rbx_67 & 0xffff8000) << 0x10
                                int16_t rax_136 = rbx_67.w & 0x7c00
                                int32_t var_188_1
                                
                                if (rax_136 == 0)
                                    int32_t rbx_68 = rbx_67 & 0x3ff
                                    
                                    if (rbx_68 != 0)
                                        if (data_143cda914 s> *(0x14
                                                + *(ThreadLocalStoragePointer + (r13_1 << 3))))
                                            _Init_thread_header(&data_143cda914)
                                            
                                            if (data_143cda914 == 0xffffffff)
                                                data_143cda910 = 0x3fb8aa3b
                                                _Init_thread_footer(&data_143cda914)
                                        
                                        int32_t rdx_19 = 0xa
                                            - int.d(logf(float.s(zx.q(rbx_68))) f* data_143cda910)
                                        var_188_1 = (rbx_68 << (rdx_19.b + 0xd) & 0x7fffff)
                                            | ((0x71 - rdx_19) << 0x17 & 0x7f800000) | rsi_36
                                    else
                                        var_188_1 = rsi_36
                                else if (rax_136 != 0x7c00)
                                    var_188_1 = ((rbx_67 u>> 0xa & 0x1f) + 0x70) << 0x17
                                        | (rbx_67 & 0x3ff) << 0xd | rsi_36
                                else
                                    var_188_1 = rsi_36 | 0x477fe000
                                
                                uint32_t rax_150 = zx.d(*(r14_1 + (rdi_3 << 3) + 0x16))
                                
                                if ((0x7c00 & rax_150.w) == 0 && (rax_150 & 0x3ff) != 0
                                        && data_143cda914
                                        s> *(0x14 + *(ThreadLocalStoragePointer + (r13_1 << 3))))
                                    _Init_thread_header(&data_143cda914)
                                    
                                    if (data_143cda914 == 0xffffffff)
                                        data_143cda910 = 0x3fb8aa3b
                                        _Init_thread_footer(&data_143cda914)
                                
                                int64_t* rcx_48 = *(r15_1 + 0x10)
                                int64_t rbx_75 = *(r15_1 + 0x18)
                                (*(*rcx_48 + 0x28))(rcx_48)
                                int64_t* rcx_49 = *(r15_1 + 0x10)
                                (*(*rcx_49 + 0x20))(rcx_49)
                                uint16_t rdx_21 = (var_184_1 u>> 0x1f).w << 0xf
                                    | (*(rbx_75 + (rdi_3 << 3)) & 0x7fff)
                                uint16_t rax_157 = (var_184_1 u>> 0x17).w
                                uint32_t rcx_50 = zx.d(rax_157.b)
                                
                                if (rcx_50 u<= 0x70)
                                    rdx_21 &= 0x8000
                                    *(rbx_75 + (rdi_3 << 3)) = rdx_21
                                    
                                    if (0x70 - rcx_50 + 0xe s<= 0x18)
                                        int32_t r8_5 = (var_184_1 & 0x7fffff) | 0x800000
                                        uint16_t rax_159 =
                                            ((r8_5 u>> (0x70 - rcx_50 + 0xe).b).w & 0x3ff) | rdx_21
                                        *(rbx_75 + (rdi_3 << 3)) = rax_159
                                        
                                        if (((r8_5 u>> ((0x70 - rcx_50).b + 0xd)).b & 1) != 0)
                                            *(rbx_75 + (rdi_3 << 3)) = rax_159 + 1
                                else if (rcx_50 u< 0x8f)
                                    *(rbx_75 + (rdi_3 << 3)) = ((var_184_1 u>> 0xd).w & 0x3ff)
                                        | ((rax_157 - 0x10) & 0x1f) << 0xa | (rdx_21 & 0x8000)
                                else
                                    *(rbx_75 + (rdi_3 << 3)) = (rdx_21 & 0xfbff) | 0x7bff
                                
                                uint16_t rdx_23 = (var_180_1 u>> 0x1f).w << 0xf
                                    | (*(rbx_75 + (rdi_3 << 3) + 2) & 0x7fff)
                                uint16_t rax_162 = (var_180_1 u>> 0x17).w
                                uint32_t rcx_53 = zx.d(rax_162.b)
                                
                                if (rcx_53 u<= 0x70)
                                    rdx_23 &= 0x8000
                                    *(rbx_75 + (rdi_3 << 3) + 2) = rdx_23
                                    
                                    if (0x70 - rcx_53 + 0xe s<= 0x18)
                                        int32_t r8_10 = (var_180_1 & 0x7fffff) | 0x800000
                                        rax_162 =
                                            ((r8_10 u>> (0x70 - rcx_53 + 0xe).b).w & 0x3ff) | rdx_23
                                        *(rbx_75 + (rdi_3 << 3) + 2) = rax_162
                                        
                                        if (((r8_10 u>> ((0x70 - rcx_53).b + 0xd)).b & 1) != 0)
                                            *(rbx_75 + (rdi_3 << 3) + 2) = rax_162 + 1
                                else if (rcx_53 u< 0x8f)
                                    *(rbx_75 + (rdi_3 << 3) + 2) = ((rax_162 - 0x10) & 0x1f) << 0xa
                                        | ((var_180_1 u>> 0xd).w & 0x3ff) | (rdx_23 & 0x8000)
                                else
                                    *(rbx_75 + (rdi_3 << 3) + 2) = (rdx_23 & 0xfbff) | 0x7bff
                                
                                uint16_t rdx_25 = (var_17c_1 u>> 0x1f).w << 0xf
                                    | (*(rbx_75 + (rdi_3 << 3) + 4) & 0x7fff)
                                uint16_t rax_166 = (var_17c_1 u>> 0x17).w
                                uint32_t rcx_56 = zx.d(rax_166.b)
                                
                                if (rcx_56 u<= 0x70)
                                    rdx_25 &= 0x8000
                                    *(rbx_75 + (rdi_3 << 3) + 4) = rdx_25
                                    
                                    if (0x70 - rcx_56 + 0xe s<= 0x18)
                                        int32_t r8_15 = (var_17c_1 & 0x7fffff) | 0x800000
                                        rax_166 =
                                            ((r8_15 u>> (0x70 - rcx_56 + 0xe).b).w & 0x3ff) | rdx_25
                                        *(rbx_75 + (rdi_3 << 3) + 4) = rax_166
                                        
                                        if (((r8_15 u>> ((0x70 - rcx_56).b + 0xd)).b & 1) != 0)
                                            *(rbx_75 + (rdi_3 << 3) + 4) = rax_166 + 1
                                else if (rcx_56 u< 0x8f)
                                    *(rbx_75 + (rdi_3 << 3) + 4) = ((rax_166 - 0x10) & 0x1f) << 0xa
                                        | ((var_17c_1 u>> 0xd).w & 0x3ff) | (rdx_25 & 0x8000)
                                else
                                    *(rbx_75 + (rdi_3 << 3) + 4) = (rdx_25 & 0xfbff) | 0x7bff
                                
                                *(rbx_75 + (rdi_3 << 3) + 6) = 0
                                uint16_t rdx_27 = (var_178_1 u>> 0x1f).w << 0xf
                                    | (*(rbx_75 + (rdi_3 << 3) + 8) & 0x7fff)
                                uint16_t rax_170 = (var_178_1 u>> 0x17).w
                                uint32_t rcx_59 = zx.d(rax_170.b)
                                
                                if (rcx_59 u<= 0x70)
                                    rdx_27 &= 0x8000
                                    *(rbx_75 + (rdi_3 << 3) + 8) = rdx_27
                                    
                                    if (0x70 - rcx_59 + 0xe s<= 0x18)
                                        int32_t r8_20 = (var_178_1 & 0x7fffff) | 0x800000
                                        rax_170 =
                                            ((r8_20 u>> (0x70 - rcx_59 + 0xe).b).w & 0x3ff) | rdx_27
                                        *(rbx_75 + (rdi_3 << 3) + 8) = rax_170
                                        
                                        if (((r8_20 u>> ((0x70 - rcx_59).b + 0xd)).b & 1) != 0)
                                            *(rbx_75 + (rdi_3 << 3) + 8) = rax_170 + 1
                                else if (rcx_59 u< 0x8f)
                                    *(rbx_75 + (rdi_3 << 3) + 8) = ((rax_170 - 0x10) & 0x1f) << 0xa
                                        | ((var_178_1 u>> 0xd).w & 0x3ff) | (rdx_27 & 0x8000)
                                else
                                    *(rbx_75 + (rdi_3 << 3) + 8) = (rdx_27 & 0xfbff) | 0x7bff
                                
                                uint16_t rdx_29 = (var_174_1 u>> 0x1f).w << 0xf
                                    | (*(rbx_75 + (rdi_3 << 3) + 0xa) & 0x7fff)
                                uint16_t rax_174 = (var_174_1 u>> 0x17).w
                                uint32_t rcx_62 = zx.d(rax_174.b)
                                
                                if (rcx_62 u<= 0x70)
                                    rdx_29 &= 0x8000
                                    *(rbx_75 + (rdi_3 << 3) + 0xa) = rdx_29
                                    
                                    if (0x70 - rcx_62 + 0xe s<= 0x18)
                                        int32_t r8_25 = (var_174_1 & 0x7fffff) | 0x800000
                                        rax_174 =
                                            ((r8_25 u>> (0x70 - rcx_62 + 0xe).b).w & 0x3ff) | rdx_29
                                        *(rbx_75 + (rdi_3 << 3) + 0xa) = rax_174
                                        
                                        if (((r8_25 u>> ((0x70 - rcx_62).b + 0xd)).b & 1) != 0)
                                            *(rbx_75 + (rdi_3 << 3) + 0xa) = rax_174 + 1
                                else if (rcx_62 u< 0x8f)
                                    *(rbx_75 + (rdi_3 << 3) + 0xa) =
                                        ((rax_174 - 0x10) & 0x1f) << 0xa
                                        | ((var_174_1 u>> 0xd).w & 0x3ff) | (rdx_29 & 0x8000)
                                else
                                    *(rbx_75 + (rdi_3 << 3) + 0xa) = (rdx_29 & 0xfbff) | 0x7bff
                                
                                uint16_t rdx_31 = (var_170_1 u>> 0x1f).w << 0xf
                                    | (*(rbx_75 + (rdi_3 << 3) + 0xc) & 0x7fff)
                                uint16_t rax_178 = (var_170_1 u>> 0x17).w
                                uint32_t rcx_65 = zx.d(rax_178.b)
                                
                                if (rcx_65 u<= 0x70)
                                    rdx_31 &= 0x8000
                                    *(rbx_75 + (rdi_3 << 3) + 0xc) = rdx_31
                                    
                                    if (0x70 - rcx_65 + 0xe s<= 0x18)
                                        int32_t r8_30 = (var_170_1 & 0x7fffff) | 0x800000
                                        rax_178 =
                                            ((r8_30 u>> (0x70 - rcx_65 + 0xe).b).w & 0x3ff) | rdx_31
                                        *(rbx_75 + (rdi_3 << 3) + 0xc) = rax_178
                                        
                                        if (((r8_30 u>> ((0x70 - rcx_65).b + 0xd)).b & 1) != 0)
                                            *(rbx_75 + (rdi_3 << 3) + 0xc) = rax_178 + 1
                                else if (rcx_65 u< 0x8f)
                                    *(rbx_75 + (rdi_3 << 3) + 0xc) =
                                        ((rax_178 - 0x10) & 0x1f) << 0xa
                                        | ((var_170_1 u>> 0xd).w & 0x3ff) | (rdx_31 & 0x8000)
                                else
                                    *(rbx_75 + (rdi_3 << 3) + 0xc) = (rdx_31 & 0xfbff) | 0x7bff
                                
                                *(rbx_75 + (rdi_3 << 3) + 0xe) = 0
                                uint16_t rdx_33 = (var_16c_1 u>> 0x1f).w << 0xf
                                    | (*(rbx_75 + (rdi_3 << 3) + 0x10) & 0x7fff)
                                uint16_t rax_182 = (var_16c_1 u>> 0x17).w
                                uint32_t rcx_68 = zx.d(rax_182.b)
                                
                                if (rcx_68 u<= 0x70)
                                    rdx_33 &= 0x8000
                                    *(rbx_75 + (rdi_3 << 3) + 0x10) = rdx_33
                                    
                                    if (0x70 - rcx_68 + 0xe s<= 0x18)
                                        int32_t r8_35 = (var_16c_1 & 0x7fffff) | 0x800000
                                        uint16_t rax_184 =
                                            ((r8_35 u>> (0x70 - rcx_68 + 0xe).b).w & 0x3ff) | rdx_33
                                        *(rbx_75 + (rdi_3 << 3) + 0x10) = rax_184
                                        
                                        if (((r8_35 u>> ((0x70 - rcx_68).b + 0xd)).b & 1) != 0)
                                            *(rbx_75 + (rdi_3 << 3) + 0x10) = rax_184 + 1
                                else if (rcx_68 u< 0x8f)
                                    *(rbx_75 + (rdi_3 << 3) + 0x10) = ((var_16c_1 u>> 0xd).w
                                        & 0x3ff) | ((rax_182 - 0x10) & 0x1f) << 0xa | (rdx_33 & 0x8000)
                                else
                                    *(rbx_75 + (rdi_3 << 3) + 0x10) = (rdx_33 & 0xfbff) | 0x7bff
                                
                                uint16_t rdx_35 = (var_168_1 u>> 0x1f).w << 0xf
                                    | (*(rbx_75 + (rdi_3 << 3) + 0x12) & 0x7fff)
                                uint16_t rax_187 = (var_168_1 u>> 0x17).w
                                uint32_t rcx_71 = zx.d(rax_187.b)
                                
                                if (rcx_71 u<= 0x70)
                                    rdx_35 &= 0x8000
                                    *(rbx_75 + (rdi_3 << 3) + 0x12) = rdx_35
                                    
                                    if (0x70 - rcx_71 + 0xe s<= 0x18)
                                        int32_t r8_40 = (var_168_1 & 0x7fffff) | 0x800000
                                        uint16_t rax_189 =
                                            ((r8_40 u>> (0x70 - rcx_71 + 0xe).b).w & 0x3ff) | rdx_35
                                        *(rbx_75 + (rdi_3 << 3) + 0x12) = rax_189
                                        
                                        if (((r8_40 u>> ((0x70 - rcx_71).b + 0xd)).b & 1) != 0)
                                            *(rbx_75 + (rdi_3 << 3) + 0x12) = rax_189 + 1
                                else if (rcx_71 u< 0x8f)
                                    *(rbx_75 + (rdi_3 << 3) + 0x12) = ((var_168_1 u>> 0xd).w
                                        & 0x3ff) | ((rax_187 - 0x10) & 0x1f) << 0xa | (rdx_35 & 0x8000)
                                else
                                    *(rbx_75 + (rdi_3 << 3) + 0x12) = (rdx_35 & 0xfbff) | 0x7bff
                                
                                uint16_t rdx_37 = (var_188_1 u>> 0x1f).w << 0xf
                                    | (*(rbx_75 + (rdi_3 << 3) + 0x14) & 0x7fff)
                                uint16_t rax_192 = (var_188_1 u>> 0x17).w
                                uint32_t rcx_74 = zx.d(rax_192.b)
                                
                                if (rcx_74 u<= 0x70)
                                    rdx_37 &= 0x8000
                                    *(rbx_75 + (rdi_3 << 3) + 0x14) = rdx_37
                                    
                                    if (0x70 - rcx_74 + 0xe s> 0x18)
                                        *(rbx_75 + (rdi_3 << 3) + 0x16) = 0
                                    else
                                        int32_t r8_45 = (var_188_1 & 0x7fffff) | 0x800000
                                        uint16_t rax_194 =
                                            ((r8_45 u>> (0x70 - rcx_74 + 0xe).b).w & 0x3ff) | rdx_37
                                        *(rbx_75 + (rdi_3 << 3) + 0x14) = rax_194
                                        
                                        if (((r8_45 u>> ((0x70 - rcx_74).b + 0xd)).b & 1) == 0)
                                            *(rbx_75 + (rdi_3 << 3) + 0x16) = 0
                                        else
                                            *(rbx_75 + (rdi_3 << 3) + 0x14) = rax_194 + 1
                                            *(rbx_75 + (rdi_3 << 3) + 0x16) = 0
                                else if (rcx_74 u< 0x8f)
                                    *(rbx_75 + (rdi_3 << 3) + 0x14) = ((var_188_1 u>> 0xd).w
                                        & 0x3ff) | ((rax_192 - 0x10) & 0x1f) << 0xa | (rdx_37 & 0x8000)
                                    *(rbx_75 + (rdi_3 << 3) + 0x16) = 0
                                else
                                    *(rbx_75 + (rdi_3 << 3) + 0x14) = (rdx_37 & 0xfbff) | 0x7bff
                                    *(rbx_75 + (rdi_3 << 3) + 0x16) = 0
                            
                            rdx_9 = var_150_1
                            rax_13 = var_158_1
                            r14 = arg1
                        
                        rax_13 += 1
                        rcx_23 = var_140_1 + 1
                        var_158_1 = rax_13
                        var_140_1 = rcx_23
                    while (rcx_23 s< rdx_9)
                    
                    r12 = arg2
                    rdi_2 = rax_7
                    result_3 = result_2
                    arg3 = sub_1420a0840(*(r14[0x9d] + 0xc0), r12, arg3)
        
        int64_t rax_200 = (*(*r12 + 0x20))(r12)
        int64_t r8_48 = *r12
        result_1 = rax_200 - rdi_2
        (*(r8_48 + 0x178))(r12, result_3, r8_48)
        int64_t* rdx_40 = r12[1]
        uint64_t* r8_49 = *rdx_40
        
        if (&r8_49[1] u> rdx_40[1])
            uint64_t* rdx_41 = &result_1
            
            if ((*(r12 + 0x29) & 0x20) != 0)
                sub_140b540d0(r12, rdx_41, arg3)
            else
                (*(*r12 + 0x150))(r12, rdx_41, 8)
        else
            result_1 = *r8_49
            *rdx_40 += 8
        
        return (*(*r12 + 0x178))(r12, rax_200)
return result
