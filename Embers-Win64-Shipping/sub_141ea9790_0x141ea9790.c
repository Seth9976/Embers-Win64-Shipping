// 函数: sub_141ea9790
// 地址: 0x141ea9790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = sx.q(arg5)
float zmm6[0x4]
float var_38[0x4] = zmm6
float zmm8[0x4]
float var_58[0x4] = zmm8
uint32_t zmm9[0x4] = arg11
float var_138[0x4]
__builtin_memcpy(&var_138, 
    "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x"
"00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x
        00", 
    0x30)
float zmm0[0x4] = data_142d4cc30
int128_t zmm1 = zx.o(0)
uint32_t zmm11[0x4] = zmm9
int128_t var_108 = zx.o(0)
float var_188[0x4]
float var_168[0x4]

if ((r15 - 0xe).d u<= 0x1f)
    int32_t rax_1 = (r15 - 0xe).d
    uint32_t rdx_1
    rdx_1.b = (rax_1 u>> 3).b & 1
    uint32_t rax_2
    rax_2.b = (rax_1 u>> 4).b & 1
    uint8_t rbx_2 = (rax_1 u>> 1).b & 1
    uint8_t r13_2 = (rax_1 u>> 2).b & 1
    char r12_1 = rax_1.b & 1
    zmm6 = zx.o(0)
    int128_t zmm10 = zx.o(0)
    int128_t zmm15 = zx.o(0)
    zmm8 = zx.o(0)
    int128_t zmm12 = zx.o(0)
    int128_t zmm14 = zx.o(0)
    int128_t zmm13 = zx.o(0)
    
    if (rdx_1.b == 0 || r12_1 != 0 || rbx_2 != 0 || r13_2 != 0)
        arg1 = 0
    else
        arg1 = 1
    
    uint32_t r14_3 = zx.d(r12_1) + zx.d(r13_2) + zx.d(rbx_2)
    
    if (arg1 == 0)
        zmm11 = zmm9
        sub_141ead790(arg2, arg3, zx.q(zx.d(rdx_1.b) * 2))
        
        if (r12_1 != 0)
            zmm6 = 0x3f800000
        
        if (rbx_2 != 0)
            zmm10 = 0x3f800000
        
        if (r13_2 != 0)
            zmm12 = 0x3f800000
        
        if (rdx_1.b != 0)
            zmm13 = 0x3f800000
        
        if (rax_2.b == 0 || r14_3 == 0)
            zmm1 = zx.o(0)
        else
            zmm0 = zx.o(0)
            zmm0[0] = float.s(zx.q(r14_3))
            zmm1.d = 1f / zmm0[0]
            zmm6[0] = zmm6[0] f* zmm1.d
            zmm15.d = zmm12.d f* zmm1.d
            zmm10.d = zmm10.d f* zmm1.d
            zmm8 = zmm6
            zmm12 = zmm15
            zmm1 = zmm10
    else
        zmm11 = 0x3f800000
        sub_141ead790(arg2, arg3, 0)
        zmm14 = 0x3f800000
        zmm1 = zx.o(0)
    
    float temp0_1[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xe1)
    temp0_1[0] = zmm10.d
    float temp0_2[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
    temp0_2[0] = zmm1.d
    float temp0_3[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
    temp0_3[0] = zmm15.d
    float temp0_4[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xe1)
    float temp0_5[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x27)
    temp0_4[0] = zmm1.d
    temp0_5[0] = zmm14.d
    float temp0_6[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc6)
    float temp0_7[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x39)
    temp0_6[0] = zmm15.d
    float temp0_8[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xc6)
    float var_178_1[0x4] = temp0_7
    temp0_8[0] = zmm12.d
    float var_128_1[0x4] = temp0_7
    int32_t var_150_1 = 0
    zmm0 = 0.o
    float temp0_9[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0x93)
    float temp0_10[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0x27)
    temp0_9[0] = zmm13.d
    temp0_10[0] = zmm14.d
    float temp0_11[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0x27)
    temp0_11[0] = zmm14.d
    zmm0 = _mm_shuffle_ps(temp0_9, temp0_9, 0x39)
    float temp0_13[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0x39)
    float temp0_14[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0x39)
    int64_t var_158_1
    var_158_1.o = zmm0
    float var_108_1[0x4] = zmm0
    var_188 = temp0_13
    var_138 = temp0_13
    var_168 = temp0_14
    float var_118_1[0x4] = temp0_14

if (arg8 != 0)
    return (*(*arg8 + 8))(zmm0, zmm1, arg3, arg4, arg6, zmm11[0], &var_138, arg9)

int64_t r12_2 = sx.q(arg4)
void* var_148
sub_1419a2ec0(std::_Get_future_error_what((*U"1111")[r12_2]), &var_148, &data_143f57080, 0)
int64_t r14_4 = 0
void* rcx_4 = var_148
*arg3 = data_143a2d548
int64_t rax_11 = 0

if (rcx_4 != 0)
    int64_t rdx_5 = sx.q(*(rcx_4 + 0x10c))
    void* var_140
    int64_t* rbx_3 = *(var_140 + 0x10)
    int64_t rax_13 = rbx_3[3]
    
    if (*(rax_13 + (rdx_5 << 3)) == 0)
        sub_1419ccf30(rbx_3, rdx_5.d)
        rax_13 = rbx_3[3]
    
    rax_11 = *(rax_13 + (rdx_5 << 3))

arg3[1] = rax_11
void* var_1a8
void* var_1a0

if (arg10 != 0)
    if (r15.d u<= 0xd)
        jump_table_141eaa38c[r15]
        arg3[6] = data_14395da00
    
    sub_1419a2ec0(std::_Get_future_error_what((*U"1111")[r12_2]), &var_1a8, &data_143f57580, 0)
    void* r15_1 = var_1a8
    
    if (r15_1 != 0)
        int64_t rdx_7 = sx.q(*(r15_1 + 0x10c))
        int64_t* rbx_4 = *(var_1a0 + 0x10)
        int64_t r14_5 = rbx_4[3]
        
        if (*(r14_5 + (rdx_7 << 3)) == 0)
            sub_1419ccf30(rbx_4, rdx_7.d)
            r14_5 = rbx_4[3]
        
        r14_4 = *(r14_5 + (rdx_7 << 3))
    
    arg3[4] = r14_4
    sub_1419870b0(arg2, arg3, 2)
    sub_14231d2f0(r15_1, arg2, arg9)
else
    float var_1e8
    
    if (r15.d == 1)
        arg3[6] = data_14395da00
        char rbx_5 = *(arg9 + 0x46)
        int64_t* rax_18 = std::_Get_future_error_what((*U"1111")[r12_2])
        void** rdx_10 = &var_1a8
        
        if (rbx_5 == 0)
            sub_1419a2ec0(rax_18, rdx_10, &data_143f58530, 0)
            void* rbx_7 = var_1a8
            
            if (rbx_7 != 0)
                int64_t rdx_15 = sx.q(*(rbx_7 + 0x10c))
                int64_t* r15_3 = *(var_1a0 + 0x10)
                int64_t r14_7 = r15_3[3]
                
                if (*(r14_7 + (rdx_15 << 3)) == 0)
                    sub_1419ccf30(r15_3, rdx_15.d)
                    r14_7 = r15_3[3]
                
                r14_4 = *(r14_7 + (rdx_15 << 3))
            
            arg3[4] = r14_4
            sub_1419870b0(arg2, arg3, 2)
            sub_14231c950(rbx_7, arg2, arg13)
            int32_t var_1e0_3 = 1
            var_1e8 = data_143a2d520 * 0.00392156886f
            sub_14231d460(rbx_7, arg2, arg9, zmm9[0])
        else
            sub_1419a2ec0(rax_18, rdx_10, &data_143f583d0, 0)
            void* rbx_6 = var_1a8
            
            if (rbx_6 != 0)
                int64_t rdx_11 = sx.q(*(rbx_6 + 0x10c))
                int64_t* r15_2 = *(var_1a0 + 0x10)
                int64_t r14_6 = r15_2[3]
                
                if (*(r14_6 + (rdx_11 << 3)) == 0)
                    sub_1419ccf30(r15_2, rdx_11.d)
                    r14_6 = r15_2[3]
                
                r14_4 = *(r14_6 + (rdx_11 << 3))
            
            arg3[4] = r14_4
            sub_1419870b0(arg2, arg3, 2)
            sub_14231c950(rbx_6, arg2, arg13)
            int32_t var_1e0_2 = 1
            var_1e8 = data_143a2d520 * 0.00392156886f
            sub_14231d460(rbx_6, arg2, arg9, zmm9[0])
    else
        void* var_198
        void* var_190
        
        if ((r15 - 5).d u<= 3)
            zmm8 = data_143a2d520
            int64_t rax_34
            
            if ((r15 - 7).d u<= 1)
                rax_34 = data_1439b5788
                zmm8 = zx.o(0)
            else
                rax_34 = data_14395da00
            
            arg3[6] = rax_34
            sub_1419a2ec0(std::_Get_future_error_what((*1111")[r12_2]), &var_198, &data_143f57480, 
                0)
            void* r13_8 = var_198
            
            if (r13_8 != 0)
                int64_t rdx_46 = sx.q(*(r13_8 + 0x10c))
                int64_t* rbx_14 = *(var_190 + 0x10)
                int64_t r14_13 = rbx_14[3]
                
                if (*(r14_13 + (rdx_46 << 3)) == 0)
                    sub_1419ccf30(rbx_14, rdx_46.d)
                    r14_13 = rbx_14[3]
                
                r14_4 = *(r14_13 + (rdx_46 << 3))
            
            arg3[4] = r14_4
            sub_1419870b0(arg2, arg3, 2)
            TEB* gsbase
            void* rdi_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
            float zmm0_5[0x4]
            
            if (data_143f3a370 s> *(rdi_1 + 0x14))
                _Init_thread_header(&data_143f3a370)
                
                if (data_143f3a370 == 0xffffffff)
                    zmm0_5 = zx.o(0)
                    zmm0_5[0] = float.s(zx.q((*(*arg9 + 0x48))(arg9)))
                    int128_t zmm7
                    zmm7.d = -1f / zmm0_5[0]
                    int32_t rax_51 = (*(*arg9 + 0x40))(arg9)
                    zmm0_5 = zx.o(0)
                    data_143f3a36c = zmm7.d
                    zmm0_5[0] = float.s(zx.q(rax_51))
                    data_143f3a368 = -1f / zmm0_5[0]
                    _Init_thread_footer(&data_143f3a370)
            
            if (data_143f3a388 s> *(rdi_1 + 0x14))
                _Init_thread_header(&data_143f3a388)
                
                if (data_143f3a388 == 0xffffffff)
                    data_143f3a378 = data_14399f5e0
                    _Init_thread_footer(&data_143f3a388)
            
            float zmm6_1 = data_143a2d524 * 2f
            zmm0_5 = zx.o(0)
            zmm0_5[0] = float.s(zx.q((*(*arg9 + 0x40))(arg9)))
            zmm6_1 = zmm6_1 / zmm0_5[0]
            float (* rax_46)[0x4]
            
            if (arg12 == 0)
                int32_t var_f8 = var_f8 & 0xfffffffe
                rax_46 = &var_f8
                int128_t var_f4
                __builtin_memset(&var_f4, 0, 0x20)
            else
                zmm0_5 = *arg12
                int128_t zmm1_1 = arg12[1]
                var_168[0] = arg12[2].d
                rax_46 = &var_188
                var_188 = zmm0_5
                int128_t var_178_2 = zmm1_1
            
            zmm0_5 = data_143a2d524
            uint32_t zmm3 = zmm9[0]
            zmm8[0] = zmm8[0] * 0.00392156886f
            int32_t var_1b0_1 = r15.d
            float (* var_1b8_1)[0x4] = rax_46
            float var_1c0_1 = zmm6_1
            int128_t* var_1c8_1 = &data_143f3a378
            int32_t* var_1d0_2 = &data_143f3a368
            int64_t var_1d8
            var_1d8.b = ((r15 - 6).d & 0xfffffffd) == 0
            sub_14231d060(r13_8, arg2, arg9, zmm3, zmm8[0], zmm0_5[0], var_1d8)
        else if ((r15 - 0xc).d u<= 1)
            sub_141ead790(arg2, arg3, zx.q(r15.d))
            int64_t* rax_30 = std::_Get_future_error_what((*U"1111")[r12_2])
            void** rdx_36 = &var_198
            zmm9[0] = zmm9[0] f- 1f
            
            if (__andps_xmmxud_memxud(zmm9, data_142d3f770)[0] f>= 9.99999975e-05f)
                sub_1419a2ec0(rax_30, rdx_36, &data_143f57380, 0)
                void* rbx_13 = var_198
                
                if (rbx_13 != 0)
                    int64_t rdx_41 = sx.q(*(rbx_13 + 0x10c))
                    int64_t* r13_7 = *(var_190 + 0x10)
                    int64_t r14_12 = r13_7[3]
                    
                    if (*(r14_12 + (rdx_41 << 3)) == 0)
                        sub_1419ccf30(r13_7, rdx_41.d)
                        r14_12 = r13_7[3]
                    
                    r14_4 = *(r14_12 + (rdx_41 << 3))
                
                arg3[4] = r14_4
                sub_1419870b0(arg2, arg3, 2)
                var_1e8 = r15.d
                sub_14231d290(rbx_13, arg2, arg9, zmm9[0])
                sub_14231c950(rbx_13, arg2, arg13)
            else
                sub_1419a2ec0(rax_30, rdx_36, &data_143f57280, 0)
                void* rbx_12 = var_198
                
                if (rbx_12 != 0)
                    int64_t rdx_37 = sx.q(*(rbx_12 + 0x10c))
                    int64_t* r15_6 = *(var_190 + 0x10)
                    int64_t r14_11 = r15_6[3]
                    
                    if (*(r14_11 + (rdx_37 << 3)) == 0)
                        sub_1419ccf30(r15_6, rdx_37.d)
                        r14_11 = r15_6[3]
                    
                    r14_4 = *(r14_11 + (rdx_37 << 3))
                
                arg3[4] = r14_4
                sub_1419870b0(arg2, arg3, 2)
                sub_14231d4e0(rbx_12, arg2, arg9)
                sub_14231c950(rbx_12, arg2, arg13)
        else if ((r15 - 0xe).d u> 0x1f)
            sub_141ead790(arg2, arg3, zx.q(r15.d))
            int32_t rcx_29 = (*U"1111")[r12_2]
            zmm9[0] = zmm9[0] f- 1f
            
            if (__andps_xmmxud_memxud(zmm9, data_142d3f770)[0] f>= 9.99999975e-05f)
                char rbx_10 = *(arg9 + 0x46)
                int64_t* rax_29 = std::_Get_future_error_what(rcx_29)
                void* rbx_11
                void* r13_5
                
                if (rbx_10 == 0)
                    sub_1419a2ec0(rax_29, &var_198, &data_143f58200, 0)
                    rbx_11 = var_198
                    r13_5 = var_190
                else
                    sub_1419a2ec0(rax_29, &var_1a8, &data_143f580a0, 0)
                    rbx_11 = var_1a8
                    r13_5 = var_1a0
                
                if (rbx_11 != 0)
                    int64_t rdx_31 = sx.q(*(rbx_11 + 0x10c))
                    int64_t* r13_6 = *(r13_5 + 0x10)
                    int64_t r14_10 = r13_6[3]
                    
                    if (*(r14_10 + (rdx_31 << 3)) == 0)
                        sub_1419ccf30(r13_6, rdx_31.d)
                        r14_10 = r13_6[3]
                    
                    r14_4 = *(r14_10 + (rdx_31 << 3))
                
                arg3[4] = r14_4
                sub_1419870b0(arg2, arg3, 2)
                var_1e8 = r15.d
                sub_14231d290(rbx_11, arg2, arg9, zmm9[0])
                sub_14231c950(rbx_11, arg2, arg13)
            else
                sub_1419a2ec0(std::_Get_future_error_what(rcx_29), &var_1a8, &data_143f57180, 0)
                void* rbx_9 = var_1a8
                
                if (rbx_9 != 0)
                    int64_t rdx_25 = sx.q(*(rbx_9 + 0x10c))
                    int64_t* r15_5 = *(var_1a0 + 0x10)
                    int64_t r14_9 = r15_5[3]
                    
                    if (*(r14_9 + (rdx_25 << 3)) == 0)
                        sub_1419ccf30(r15_5, rdx_25.d)
                        r14_9 = r15_5[3]
                    
                    r14_4 = *(r14_9 + (rdx_25 << 3))
                
                arg3[4] = r14_4
                sub_1419870b0(arg2, arg3, 2)
                sub_14231d4e0(rbx_9, arg2, arg9)
                sub_14231c950(rbx_9, arg2, arg13)
        else
            sub_1419a2ec0(std::_Get_future_error_what((*1111")[r12_2]), &var_1a8, &data_143f57680, 
                0)
            void* r15_4 = var_1a8
            
            if (r15_4 != 0)
                int64_t rdx_20 = sx.q(*(r15_4 + 0x10c))
                int64_t* rbx_8 = *(var_1a0 + 0x10)
                int64_t r14_8 = rbx_8[3]
                
                if (*(r14_8 + (rdx_20 << 3)) == 0)
                    sub_1419ccf30(rbx_8, rdx_20.d)
                    r14_8 = rbx_8[3]
                
                r14_4 = *(r14_8 + (rdx_20 << 3))
            
            arg3[4] = r14_4
            sub_1419870b0(arg2, arg3, 2)
            var_1e8 = zmm11[0]
            sub_14231cde0(r15_4, arg2, arg9, &var_138)
return sub_14231d700(var_148, arg2, arg6, arg7)
