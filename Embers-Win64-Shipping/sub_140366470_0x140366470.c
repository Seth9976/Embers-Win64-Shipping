// 函数: sub_140366470
// 地址: 0x140366470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm15[0x4]
float var_58[0x4] = zmm15
float zmm14[0x4]
float var_68[0x4] = zmm14
float var_78[0x4] = arg10
float var_88[0x4] = arg9
float var_c8[0x4] = arg8
uint32_t var_e8[0x4] = arg7
float (* var_600)[0x4] = arg1
int32_t r15_4 = ((arg13 s>> 0x1f u>> 0x1e) + arg13) & 0xfffffffc
uint64_t r11 = 0
float var_6c8[0x4]
float var_668[0x4]
uint128_t zmm0
float zmm2[0x4]
float zmm3[0x4]
float zmm4[0x4]
int32_t zmm7[0x4]
float zmm9[0x4]
int32_t zmm10[0x4]
float zmm11[0x4]
float var_698[0x4]
float var_688[0x4]
uint32_t var_678[0x4]
float var_648[0x4]
int32_t var_4b8
uint128_t var_4a8
uint32_t var_498[0x4]
float var_488[0x4]
float var_478[0x4]
float var_468[0x4]
float var_458[0x4]
float var_448[0x4]
int32_t var_438[0x4]
float var_428[0x4]
uint128_t var_418
uint32_t var_408[0x4]
float var_3f8[0x4]
float var_3e8[0x4]
float var_3d8[0x4]
float var_3c8[0x4]

if (r15_4 s<= 0)
    zmm7 = zx.o(0)
    var_668 = zx.o(0)
    zmm2 = zx.o(0)
    zmm9 = zx.o(0)
    zmm10 = zx.o(0)
    zmm3 = zx.o(0)
    zmm11 = zx.o(0)
    
    if (0 s< arg13)
    label_140367d8e:
        float var_618_2[0x4] = zmm3
        zmm0 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(r11.d), 0), data_142e11d00)
        int32_t temp0_379[0x4] = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(arg13), 0), zmm0)
        int64_t rbp_4 = sx.q(r11.d << 2)
        uint32_t temp0_380 = _mm_movemask_ps(temp0_379)
        uint64_t rax_20 = zx.q(temp0_380) & 0xfffffff9
        int32_t var_658_2[0x4] = zmm7
        float var_5b8_2[0x4] = zmm2
        int32_t var_5c8_2[0x4] = zmm10
        float var_5e8_2[0x4] = zmm9
        float var_5f8_2[0x4] = zmm11
        
        if (rax_20 != 9)
            if ((temp0_380.b & 1) == 0)
                if ((temp0_380.b & 2) != 0)
                    goto label_140368d03
                
                goto label_140367e15
            
            var_4b8 = *(arg2 + rbp_4)
            
            if ((temp0_380.b & 2) != 0)
            label_140368d03:
                int32_t var_4b4_1 = *(arg2 + rbp_4 + 4)
                
                if ((temp0_380.b & 4) == 0)
                    goto label_140367e1e
                
                goto label_140368d17
            
        label_140367e15:
            int32_t var_4ac_1
            
            if ((temp0_380.b & 4) != 0)
            label_140368d17:
                int32_t var_4b0_1 = *(arg2 + rbp_4 + 8)
                
                if ((temp0_380.b & 8) != 0)
                    var_4ac_1 = *(arg2 + rbp_4 + 0xc)
            else
            label_140367e1e:
                
                if ((temp0_380.b & 8) != 0)
                    var_4ac_1 = *(arg2 + rbp_4 + 0xc)
            zmm3 = var_4b8.o
        else
            zmm3 = *(arg2 + rbp_4)
        
        zmm2 = _mm_sub_epi32(_mm_slli_epi32(zmm0, 3), zmm0) & temp0_379
        int64_t rcx_62 = sx.q(zmm2[0])
        void* rbp_5 = arg4 + (rcx_62 << 2)
        zmm15 = zx.o(*(arg4 + (rcx_62 << 2)))
        int64_t rcx_64 = sx.q(_mm_shuffle_epi32(zmm2, 0xe5).d)
        void* rdi_7 = arg4 + (rcx_64 << 2)
        zmm11 = zx.o(*(arg4 + (rcx_64 << 2)))
        int64_t rcx_66 = sx.q(_mm_shuffle_epi32(zmm2, 0x4e).d)
        arg2 = arg4 + (rcx_66 << 2)
        arg10 = zx.o(*(arg4 + (rcx_66 << 2)))
        int64_t rcx_68 = sx.q(_mm_shuffle_epi32(zmm2, 0xe7).d)
        void* rsi_7 = arg4 + (rcx_68 << 2)
        zmm14 = zx.o(*(arg4 + (rcx_68 << 2)))
        zmm0 = data_142fc95e0 & temp0_379
        arg8 = zx.o(*(zx.q(zmm0.d) + rbp_5))
        float var_5d8_3[0x4] = *(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rdi_7)
        float var_598_2[0x4] = *(zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0]) + arg2)
        var_698[0].q = zx.q(_mm_shuffle_epi32(zmm0, 0xe7).d)
        zmm0 = data_142fc95f0 & temp0_379
        zmm10 = *(zx.q(zmm0.d) + rbp_5)
        int32_t var_5a8_2[0x4] = *(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rdi_7)
        var_688[0].q = zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
        var_678[0].q = zx.q(_mm_shuffle_epi32(zmm0, 0xe7).d)
        zmm0 = data_143442650 & temp0_379
        zmm7 = *(zx.q(zmm0.d) + rbp_5)
        float var_568_2[0x4] = *(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rdi_7)
        var_648[0].q = zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
        uint64_t rcx_80 = zx.q(_mm_shuffle_epi32(zmm0, 0xe7).d)
        zmm0 = data_143442660 & temp0_379
        zmm4 = *(zx.q(zmm0.d) + rbp_5)
        float var_538_2[0x4] = *(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rdi_7)
        uint64_t r10_1 = zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
        uint64_t r11_2 = zx.q(_mm_shuffle_epi32(zmm0, 0xe7).d)
        zmm0 = data_143442670 & temp0_379
        var_6c8 = *(zx.q(zmm0.d) + rbp_5)
        uint64_t rcx_84 = zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0])
        uint64_t r14_1 = zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
        uint128_t* r9 = zx.q(_mm_shuffle_epi32(zmm0, 0xe7).d)
        zmm0 = data_143442700 & temp0_379
        uint64_t r15_5 = zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0])
        uint64_t r12_2 = zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
        int32_t var_548_2[0x4] = *(rcx_84 + rdi_7)
        uint32_t rcx_86 = zx.d(*(zx.q(zmm0.d) + rbp_5))
        uint32_t rdi_8 = zx.d(*(r15_5 + rdi_7))
        uint64_t rbp_6 = zx.q(_mm_shuffle_epi32(zmm0, 0xe7).d)
        arg7 = _mm_insert_epi16(
            _mm_insert_epi16(_mm_insert_epi16(zx.o(rcx_86), rdi_8, 2), zx.d(*(r12_2 + arg2)), 4), 
            zx.d(*(rbp_6 + rsi_7)), 6)
        uint128_t var_588_3 = *(var_698[0].q + rsi_7)
        arg9 = *(var_688[0].q + arg2)
        int32_t var_578_3[0x4] = *(var_678[0].q + rsi_7)
        zmm2 = *(var_648[0].q + arg2)
        uint64_t var_638_1
        var_638_1.o = *(rcx_80 + rsi_7)
        zmm9 = *(r10_1 + arg2)
        uint128_t var_648_2 = *(r11_2 + rsi_7)
        arg6 = *(r14_1 + arg2)
        float var_6b8_2[0x4] = zmm4
        int32_t var_6a8_5[0x4] = zmm10
        uint128_t var_678_1 = *(r9 + rsi_7)
        
        if (rax_20 != 9)
            arg2 = rbp_4
            
            if ((temp0_380.b & 1) == 0)
                zmm0 = zmm14
                
                if ((temp0_380.b & 2) != 0)
                    goto label_140368d58
                
                goto label_140368121
            
            var_4b8 = *(var_600 + arg2)
            zmm0 = zmm14
            
            if ((temp0_380.b & 2) != 0)
            label_140368d58:
                int32_t var_4b4_2 = *(var_600 + arg2 + 4)
                zmm14 = arg10
                zmm10 = arg8
                
                if ((temp0_380.b & 4) == 0)
                    goto label_140368134
                
                goto label_140368d7e
            
        label_140368121:
            zmm14 = arg10
            zmm10 = arg8
            int32_t var_4ac_2
            
            if ((temp0_380.b & 4) != 0)
            label_140368d7e:
                int32_t var_4b0_2 = *(var_600 + arg2 + 8)
                
                if ((temp0_380.b & 8) != 0)
                    var_4ac_2 = *(var_600 + arg2 + 0xc)
            else
            label_140368134:
                
                if ((temp0_380.b & 8) != 0)
                    var_4ac_2 = *(var_600 + arg2 + 0xc)
            zmm4 = var_4b8.o
        else
            zmm0 = zmm14
            zmm14 = arg10
            zmm10 = arg8
            zmm4 = *(var_600 + rbp_4)
        
        arg8 = _mm_cmpeq_epi32(_mm_cmpeq_epi32(arg8, arg8), zmm4)
            & not.o(_mm_cmpeq_epi32(arg7 & data_142ed6810, zx.o(0)) & not.o(temp0_379))
        arg1 = zx.q(_mm_movemask_ps(arg8))
        
        if (arg1.b == 0)
            zmm7 = var_658_2
            zmm2 = var_5b8_2
            zmm10 = var_5c8_2
            zmm9 = var_5e8_2
            zmm3 = var_618_2
            zmm11 = var_5f8_2
        else
            zmm14 = _mm_unpacklo_epi32(zmm14, zmm0.q)
            float var_698_1[0x4] =
                _mm_unpacklo_epi64(_mm_unpacklo_epi32(zmm15, zmm11[0].q), zmm14[0].q)
            zmm0 = __punpckldq_xmmdq_memdq(var_598_2, var_588_3)
            int32_t temp0_416[0x4] =
                _mm_unpacklo_epi64(__punpckldq_xmmdq_memdq(zmm10, var_5d8_3), zmm0.q)
            float temp0_417[0x4] = __unpcklps_xmmps_memdq(arg9, var_578_3)
            float var_6a8_6[0x4] =
                __unpcklps_xmmps_memdq(var_6a8_5, var_5a8_2)[0].q | temp0_417[0].q << 0x40
            float temp0_419[0x4] = __unpcklps_xmmps_memdq(zmm2, var_638_1.o)
            int64_t var_628_1
            var_628_1.o = __unpcklps_xmmps_memdq(zmm7, var_568_2)[0].q | temp0_419[0].q << 0x40
            float temp0_421[0x4] = __unpcklps_xmmps_memdq(zmm9, var_648_2)
            float var_6b8_3[0x4] =
                __unpcklps_xmmps_memdq(var_6b8_2, var_538_2)[0].q | temp0_421[0].q << 0x40
            arg6 = __unpcklps_xmmps_memdq(arg6, var_678_1)
            var_6c8 = __unpcklps_xmmps_memdq(var_6c8, var_548_2)[0].q | arg6[0].q << 0x40
            zmm3 = _mm_slli_epi32(zmm3, 6) & arg8
            int64_t rax_25 = sx.q(zmm3[0])
            void* rdx = arg3 + rax_25
            arg5 = *(arg3 + rax_25)
            int64_t rax_27 = sx.q(_mm_shuffle_epi32(zmm3, 0xe5).d)
            void* rdi_9 = arg3 + rax_27
            zmm2 = _mm_unpacklo_ps(arg5, (*(arg3 + rax_27)).q)
            int64_t rax_29 = sx.q(_mm_shuffle_epi32(zmm3, 0x4e).d)
            void* rbx_6 = arg3 + rax_29
            zmm0 = *(arg3 + rax_29)
            int64_t rax_31 = sx.q(_mm_shuffle_epi32(zmm3, 0xe7)[0])
            void* rsi_8 = arg3 + rax_31
            zmm0 = _mm_unpacklo_ps(zmm0, (*(arg3 + rax_31))[0].q)
            float var_678_2[0x4] = zmm2[0].q | zmm0.q << 0x40
            zmm0 = data_142fc95e0 & arg8
            float temp0_432[0x4] = _mm_unpacklo_ps(*(zx.q(zmm0.d) + rdx), 
                (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rdi_9))[0].q)
            arg5 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0]) + rbx_6), 
                (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7).d) + rsi_8)).q)
            float var_648_3[0x4] = temp0_432[0].q | arg5[0].q << 0x40
            zmm0 = data_142fc95f0 & arg8
            float temp0_437[0x4] = _mm_unpacklo_ps(*(zx.q(zmm0.d) + rdx), 
                (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rdi_9))[0].q)
            arg5 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0]) + rbx_6), 
                (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7).d) + rsi_8)).q)
            float var_5d8_4[0x4] = temp0_437[0].q | arg5[0].q << 0x40
            zmm0 = data_143442650 & arg8
            float temp0_442[0x4] = _mm_unpacklo_ps(*(zx.q(zmm0.d) + rdx), 
                (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rdi_9))[0].q)
            arg5 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0]) + rbx_6), 
                (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7).d) + rsi_8)).q)
            float var_598_3[0x4] = temp0_442[0].q | arg5[0].q << 0x40
            zmm0 = data_143442660 & arg8
            arg5 = _mm_unpacklo_ps(*(zx.q(zmm0.d) + rdx), 
                (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rdi_9))[0].q)
            float temp0_450[0x4] = _mm_unpacklo_ps(
                *(zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0]) + rbx_6), 
                (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7).d) + rsi_8)).q)
            int32_t var_5a8_3[0x4] = arg5[0].q | temp0_450[0].q << 0x40
            zmm0 = data_143442670 & arg8
            float temp0_452[0x4] = _mm_unpacklo_ps(*(zx.q(zmm0.d) + rdx), 
                (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rdi_9))[0].q)
            float temp0_455[0x4] = _mm_unpacklo_ps(
                *(zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0]) + rbx_6), 
                (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7).d) + rsi_8)).q)
            arg9 = temp0_452[0].q | temp0_455[0].q << 0x40
            zmm0 = data_143442700 & arg8
            float temp0_457[0x4] = _mm_unpacklo_ps(*(zx.q(zmm0.d) + rdx), 
                (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rdi_9))[0].q)
            float temp0_460[0x4] = _mm_unpacklo_ps(
                *(zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0]) + rbx_6), 
                (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7).d) + rsi_8)).q)
            zmm4 = temp0_457[0].q | temp0_460[0].q << 0x40
            zmm0 = data_1434b2e20 & arg8
            arg7 = _mm_unpacklo_ps(*(zx.q(zmm0.d) + rdx), 
                (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rdi_9))[0].q)
            float temp0_465[0x4] = _mm_unpacklo_ps(
                *(zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0]) + rbx_6), 
                (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7).d) + rsi_8)).q)
            arg7 = arg7[0].q | temp0_465[0].q << 0x40
            zmm0 = (*U"    $$$$((((,,,,000044448888<<<<")[0].o & arg8
            float temp0_467[0x4] = _mm_unpacklo_ps(*(zx.q(zmm0.d) + rdx), 
                (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rdi_9))[0].q)
            float temp0_470[0x4] = _mm_unpacklo_ps(
                *(zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0]) + rbx_6), 
                (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7).d) + rsi_8)).q)
            zmm3 = temp0_467[0].q | temp0_470[0].q << 0x40
            zmm0 = (*U"    $$$$((((,,,,000044448888<<<<")[4].o & arg8
            zmm10 = _mm_unpacklo_ps(*(zx.q(zmm0.d) + rdx), 
                (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rdi_9))[0].q)
            float temp0_475[0x4] = _mm_unpacklo_ps(
                *(zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0]) + rbx_6), 
                (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7).d) + rsi_8)).q)
            zmm10 = zmm10[0].q | temp0_475[0].q << 0x40
            zmm0 = (*U"    $$$$((((,,,,000044448888<<<<")[8].o & arg8
            float temp0_477[0x4] = _mm_unpacklo_ps(*(zx.q(zmm0.d) + rdx), 
                (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rdi_9))[0].q)
            float temp0_480[0x4] = _mm_unpacklo_ps(
                *(zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0]) + rbx_6), 
                (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7).d) + rsi_8)).q)
            zmm11 = temp0_477[0].q | temp0_480[0].q << 0x40
            zmm0 = (*U"    $$$$((((,,,,000044448888<<<<")[0xc].o & arg8
            float temp0_482[0x4] = _mm_unpacklo_ps(*(zx.q(zmm0.d) + rdx), 
                (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rdi_9))[0].q)
            float temp0_485[0x4] = _mm_unpacklo_ps(
                *(zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0]) + rbx_6), 
                (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7).d) + rsi_8)).q)
            zmm9 = temp0_482[0].q | temp0_485[0].q << 0x40
            zmm2 = (*U"    $$$$((((,,,,000044448888<<<<")[0x10].o & arg8
            zmm0 = _mm_unpacklo_ps(*(zx.q(zmm2[0]) + rdx), 
                (*(zx.q(_mm_shuffle_epi32(zmm2, 0xe5)[0]) + rdi_9))[0].q).q | _mm_unpacklo_ps(
                *(zx.q(_mm_shuffle_epi32(zmm2, 0x4e)[0]) + rbx_6), 
                (*(zx.q(_mm_shuffle_epi32(zmm2, 0xe7)[0]) + rsi_8))[0].q)[0].q << 0x40
            zmm7 = (*U"    $$$$((((,,,,000044448888<<<<")[0x14].o & arg8
            float temp0_492[0x4] = _mm_unpacklo_ps(*(zx.q(zmm7[0]) + rdx), 
                (*(zx.q(_mm_shuffle_epi32(zmm7, 0xe5)[0]) + rdi_9))[0].q)
            arg6 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm7, 0x4e)[0]) + rbx_6), 
                (*(zx.q(_mm_shuffle_epi32(zmm7, 0xe7)[0]) + rsi_8))[0].q)
            zmm2 = temp0_492[0].q | arg6[0].q << 0x40
            arg6 = (*U"    $$$$((((,,,,000044448888<<<<")[0x18].o & arg8
            uint64_t rax_84 = zx.q(arg6[0])
            int32_t (* rbp_7)[0x4] = zx.q(_mm_shuffle_epi32(arg6, 0xe5)[0])
            float temp0_497[0x4] = _mm_unpacklo_ps(*(rax_84 + rdx), (*(rbp_7 + rdi_9))[0].q)
            uint32_t (* rax_85)[0x4] = zx.q(_mm_shuffle_epi32(arg6, 0x4e)[0])
            int32_t (* rbp_8)[0x4] = zx.q(_mm_shuffle_epi32(arg6, 0xe7)[0])
            arg6 = _mm_unpacklo_ps(*(rax_85 + rbx_6), (*(rbp_8 + rsi_8))[0].q)
            zmm14 = temp0_497[0].q | arg6[0].q << 0x40
            var_638_1.o = arg8
            arg6 = (*U"    $$$$((((,,,,000044448888<<<<")[0x1c].o & arg8
            float (* rax_86)[0x4] = zx.q(_mm_shuffle_epi32(arg6, 0xe5)[0])
            zmm7 = _mm_unpacklo_ps(*(zx.q(arg6[0]) + rdx), (*(rax_86 + rdi_9))[0].q)
            int32_t (* rax_87)[0x4] = zx.q(_mm_shuffle_epi32(arg6, 0x4e)[0])
            uint32_t (* rdx_1)[0x4] = zx.q(_mm_shuffle_epi32(arg6, 0xe7)[0])
            arg5 = _mm_unpacklo_ps(*(rax_87 + rbx_6), (*(rdx_1 + rsi_8))[0].q)
            zmm7 = zmm7[0].q | arg5[0].q << 0x40
            int32_t var_328[0x4] = var_678_2
            int32_t var_318[0x4] = var_648_3
            int32_t var_308[0x4] = var_5d8_4
            int32_t var_2f8[0x4] = var_598_3
            int32_t var_2e8_1[0x4] = var_5a8_3
            float var_2d8_1[0x4] = arg9
            float var_2c8_1[0x4] = zmm4
            uint32_t var_2b8_1[0x4] = arg7
            float var_2a8_1[0x4] = zmm3
            int32_t var_298_1[0x4] = zmm10
            float var_288_1[0x4] = zmm11
            float var_278_1[0x4] = zmm9
            uint128_t var_268_1 = zmm0
            float var_258_1[0x4] = zmm2
            float var_248_1[0x4] = zmm14
            int32_t var_238_1[0x4] = zmm7
            arg8 = (*arg11)[9]
            zmm9 = (*arg11)[0xd]
            zmm10 = (*arg11)[2]
            zmm11 = (*arg11)[3]
            zmm14 = (*arg11)[6]
            zmm15 = (*arg11)[0xa]
            arg6 = (*arg11)[0xe]
            zmm0 = (*arg11)[7]
            arg5 = (*arg11)[0xb]
            
            for (arg2 = nullptr; arg2 != 0x100; arg2 = &arg2[4])
                zmm2 = *arg11
                zmm7 = arg11[1][0]
                float temp0_506[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
                arg9 = *(&var_328 + arg2)
                arg7 = *(&var_318 + arg2)
                zmm4 = *(&var_308 + arg2)
                zmm3 = *(&var_2f8 + arg2)
                float temp0_508[0x4] = _mm_add_ps(_mm_mul_ps(temp0_506, arg9), zx.o(0))
                zmm7 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0), arg7), temp0_508)
                zmm2 = arg11[2][0]
                float temp0_514[0x4] =
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm4), zmm7)
                zmm7 = arg11[3][0]
                *(&var_4b8 + arg2) =
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0), zmm3), temp0_514)
                zmm2 = (*arg11)[1]
                zmm7 = (*arg11)[5]
                float temp0_520[0x4] =
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), arg9), zx.o(0))
                zmm7 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0), arg7), temp0_520)
                float temp0_526[0x4] =
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg8, arg8, 0), zmm4), zmm7)
                *(&var_4a8 + arg2) =
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm9, zmm9, 0), zmm3), temp0_526)
                float temp0_532[0x4] =
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm10, zmm10, 0), arg9), zx.o(0))
                zmm7 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm14, zmm14, 0), arg7), temp0_532)
                float temp0_538[0x4] =
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm15, zmm15, 0), zmm4), zmm7)
                *(&var_498 + arg2) =
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg6, arg6, 0), zmm3), temp0_538)
                float temp0_544[0x4] =
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm11, zmm11, 0), arg9), zx.o(0))
                zmm7 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), arg7), temp0_544)
                float temp0_550[0x4] =
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg5, arg5, 0), zmm4), zmm7)
                zmm4 = (*arg11)[0xf]
                *(&var_488 + arg2) =
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), zmm3), temp0_550)
            
            arg9 = var_4b8.o
            zmm14 = var_4a8
            arg7 = var_498
            uint32_t var_648_4[0x4] = arg7
            zmm10 = var_478
            zmm3 = var_628_1.o
            zmm0 = _mm_add_ps(var_698_1, zmm3)
            arg5 = data_142d3f640
            zmm0 = _mm_mul_ps(zmm0, arg5)
            zmm7 = arg5
            float temp0_556[0x4] = _mm_mul_ps(zmm0, arg9)
            arg6 = _mm_mul_ps(zmm0, zmm14)
            arg5 = var_6b8_3
            float temp0_559[0x4] = _mm_mul_ps(_mm_add_ps(temp0_416, arg5), zmm7)
            arg8 = zmm7
            zmm7 = _mm_add_ps(_mm_mul_ps(temp0_559, zmm10), temp0_556)
            float temp0_563[0x4] = _mm_add_ps(_mm_mul_ps(temp0_559, var_468), arg6)
            arg6 = _mm_mul_ps(zmm0, arg7)
            arg7 = var_458
            uint32_t var_678_3[0x4] = arg7
            float temp0_566[0x4] = _mm_add_ps(_mm_mul_ps(temp0_559, arg7), arg6)
            arg6 = var_488
            uint32_t var_5a8_4[0x4] = arg6
            zmm0 = _mm_mul_ps(zmm0, arg6)
            arg6 = var_448
            uint32_t var_598_4[0x4] = arg6
            float temp0_569[0x4] = _mm_add_ps(_mm_mul_ps(temp0_559, arg6), zmm0)
            zmm9 = var_6c8
            arg6 = _mm_mul_ps(_mm_add_ps(var_6a8_6, zmm9), arg8)
            zmm15 = var_438
            arg7 = _mm_add_ps(_mm_mul_ps(arg6, zmm15), zmm7)
            zmm7 = _mm_add_ps(_mm_mul_ps(arg6, var_428), temp0_563)
            float temp0_577[0x4] = _mm_add_ps(_mm_mul_ps(arg6, var_418), temp0_566)
            arg10 = var_408
            arg6 = _mm_mul_ps(arg6, arg10)
            arg7 = __addps_xmmps_memps(arg7, var_3f8)
            zmm7 = __addps_xmmps_memps(zmm7, var_3e8)
            float temp0_581[0x4] = __addps_xmmps_memps(temp0_577, var_3d8)
            arg6 = __addps_xmmps_memps(_mm_add_ps(arg6, temp0_569), var_3c8)
            var_4b8.o = arg9
            var_4a8 = zmm14
            var_498 = var_648_4
            var_488 = var_5a8_4
            int32_t var_368_2[0x4] = zmm10
            float var_358_2[0x4] = var_468
            float var_348_2[0x4] = var_678_3
            float var_338_2[0x4] = var_598_4
            float var_3a8_2[0x4] = zmm15
            float var_398_2[0x4] = var_428
            uint128_t var_388_2 = var_418
            float var_378_2[0x4] = arg10
            arg5 = __subps_xmmps_memps(arg5, temp0_416)
            float temp0_585[0x4] = __subps_xmmps_memps(zmm9, var_6a8_6)
            float temp0_586[0x4] = __subps_xmmps_memps(zmm3, var_698_1)
            zmm0 = data_142d3f640
            arg5 = _mm_mul_ps(arg5, zmm0)
            float temp0_588[0x4] = _mm_mul_ps(temp0_586, zmm0)
            zmm9 = _mm_mul_ps(temp0_585, zmm0)
            uint32_t var_128_1[0x4] = arg7
            int32_t var_118_1[0x4] = zmm7
            float var_108_1[0x4] = temp0_581
            uint32_t var_f8_1[0x4] = arg6
            float temp0_590[0x4] = _mm_mul_ps(arg9, temp0_588)
            float temp0_591[0x4] = _mm_mul_ps(zmm14, temp0_588)
            float temp0_592[0x4] = __mulps_xmmps_memps(temp0_588, var_648_4)
            zmm10 = _mm_mul_ps(zmm10, arg5)
            float temp0_594[0x4] = _mm_mul_ps(var_468, arg5)
            arg5 = __mulps_xmmps_memps(arg5, var_678_3)
            zmm2 = data_142d3f770
            arg9 = _mm_and_ps(temp0_590, zmm2)
            zmm10 = _mm_add_ps(_mm_and_ps(zmm10, zmm2), arg9)
            zmm14 = _mm_and_ps(temp0_591, zmm2)
            float temp0_601[0x4] = _mm_add_ps(_mm_and_ps(temp0_594, zmm2), zmm14)
            zmm3 = _mm_and_ps(temp0_592, zmm2)
            arg5 = _mm_add_ps(_mm_and_ps(arg5, zmm2), zmm3)
            float temp0_605[0x4] = _mm_mul_ps(zmm15, zmm9)
            float temp0_606[0x4] = _mm_mul_ps(var_428, zmm9)
            float temp0_607[0x4] = __mulps_xmmps_memps(zmm9, var_418)
            float temp0_609[0x4] = _mm_add_ps(_mm_and_ps(temp0_605, zmm2), zmm10)
            float temp0_611[0x4] = _mm_add_ps(_mm_and_ps(temp0_606, zmm2), temp0_601)
            float temp0_613[0x4] = _mm_add_ps(_mm_and_ps(temp0_607, zmm2), arg5)
            float temp0_614[0x4] = _mm_sub_ps(arg7, temp0_609)
            arg5 = _mm_sub_ps(zmm7, temp0_611)
            float temp0_616[0x4] = _mm_sub_ps(temp0_581, temp0_613)
            float temp0_617[0x4] = _mm_add_ps(temp0_609, arg7)
            float temp0_618[0x4] = _mm_add_ps(temp0_611, zmm7)
            float temp0_619[0x4] = _mm_add_ps(temp0_613, temp0_581)
            zmm10 = zx.o(0)
            arg6 = _mm_cmpeq_epi32(data_142ed6810 & var_658_2, zx.o(0))
            zmm7 = var_638_1.o
            zmm0 = _mm_slli_epi32(arg6 & not.o(zmm7), 0x1f)
            char temp0_622 = _mm_movemask_ps(zmm0)
            
            if (temp0_622 == 0)
                goto label_140368da3
            
            arg9 = _mm_min_ps(var_5f8_2, temp0_614)
            zmm15 = _mm_min_ps(var_618_2, arg5)
            zmm10 = var_5c8_2
            var_6c8 = _mm_min_ps(zmm10, temp0_616)
            var_6a8_6 = _mm_max_ps(var_5e8_2, temp0_617)
            zmm2 = var_5b8_2
            zmm9 = _mm_max_ps(zmm2, temp0_618)
            var_6b8_3 = _mm_max_ps(var_668, temp0_619)
            char rax_96
            bool cond:30_1
            bool cond:37_1
            bool cond:38_1
            bool cond:47_1
            bool cond:48_1
            bool cond:53_1
            bool cond:54_1
            bool cond:63_1
            bool cond:64_1
            bool cond:73_1
            bool cond:74_1
            
            if (arg1.b != temp0_622)
                zmm10 = _mm_srai_epi32(zmm0, 0x1f)
            label_140368da3:
                zmm7 = _mm_slli_epi32(zmm7 & arg6, 0x1f)
                
                if (_mm_movemask_ps(zmm7) == 0)
                    zmm14 = var_658_2
                    zmm2 = var_5b8_2
                    zmm10 = var_5c8_2
                    goto label_140368ef2
                
                char temp0_632 = _mm_movemask_ps(arg6)
                char temp3_1 = temp0_632 & 1
                
                if (temp3_1 == 0)
                    if (temp3_1 != 0)
                        goto label_1403694d4
                    
                    goto label_140368db6
                
                arg9[0] = temp0_614[0]
                
                if (temp3_1 != 0)
                label_1403694d4:
                    zmm15[0] = arg5[0]
                    
                    if (temp3_1 == 0)
                        goto label_140368db6_1
                    
                    goto label_1403694e3
                
            label_140368db6:
                
                if (temp3_1 == 0)
                label_140368db6_1:
                    
                    if (temp3_1 != 0)
                        goto label_1403694f7
                    
                    goto label_140368db6_2
                
            label_1403694e3:
                zmm0.d = temp0_616[0]
                var_6c8 = zmm0
                
                if (temp3_1 != 0)
                label_1403694f7:
                    zmm0.d = temp0_617[0]
                    var_6a8_6 = zmm0
                    
                    if (temp3_1 == 0)
                        goto label_140368db6_3
                    
                    goto label_140369507
                
            label_140368db6_2:
                
                if (temp3_1 == 0)
                label_140368db6_3:
                    
                    if (temp3_1 != 0)
                        goto label_140369517
                    
                    goto label_140368ddc
                
            label_140369507:
                zmm9[0] = temp0_618[0]
                float var_698_2[0x4]
                
                if (temp3_1 != 0)
                label_140369517:
                    zmm0.d = temp0_619[0]
                    var_6b8_3 = zmm0
                    var_698_2 = temp0_617
                    zmm4 = var_658_2
                    zmm14 = zmm4
                    
                    if (temp3_1 == 0)
                        goto label_140368df1
                    
                    goto label_14036953e
                
            label_140368ddc:
                var_698_2 = temp0_617
                zmm4 = var_658_2
                zmm14 = zmm4
                bool cond:91_1
                bool cond:92_1
                bool cond:99_1
                bool cond:100_1
                bool cond:109_1
                bool cond:110_1
                bool cond:115_1
                bool cond:116_1
                bool cond:125_1
                bool cond:126_1
                bool cond:135_1
                bool cond:136_1
                
                if (temp3_1 == 0)
                label_140368df1:
                    char temp12_1 = temp0_632 & 2
                    cond:91_1 = temp12_1 != 0
                    cond:92_1 = temp12_1 == 0
                    cond:99_1 = temp12_1 == 0
                    cond:100_1 = temp12_1 != 0
                    cond:109_1 = temp12_1 != 0
                    cond:110_1 = temp12_1 == 0
                    cond:115_1 = temp12_1 == 0
                    cond:116_1 = temp12_1 != 0
                    cond:125_1 = temp12_1 != 0
                    cond:126_1 = temp12_1 == 0
                    cond:135_1 = temp12_1 == 0
                    cond:136_1 = temp12_1 != 0
                    
                    if (temp12_1 != 0)
                        goto label_14036955c
                    
                    goto label_140368df9
                
            label_14036953e:
                zmm14 = zmm4
                zmm14[0] = 1
                char temp11_1 = temp0_632 & 2
                cond:91_1 = temp11_1 != 0
                cond:92_1 = temp11_1 == 0
                cond:99_1 = temp11_1 == 0
                cond:100_1 = temp11_1 != 0
                cond:109_1 = temp11_1 != 0
                cond:110_1 = temp11_1 == 0
                cond:115_1 = temp11_1 == 0
                cond:116_1 = temp11_1 != 0
                cond:125_1 = temp11_1 != 0
                cond:126_1 = temp11_1 == 0
                cond:135_1 = temp11_1 == 0
                cond:136_1 = temp11_1 != 0
                
                if (temp11_1 != 0)
                label_14036955c:
                    arg9 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_614, arg9, 1), arg9, 0xe2)
                    
                    if (cond:92_1)
                        goto label_140368dff
                    
                    goto label_140369573
                
            label_140368df9:
                
                if (not(cond:91_1))
                label_140368dff:
                    
                    if (cond:100_1)
                        goto label_140369581
                    
                    goto label_140368e05
                
            label_140369573:
                zmm15 = _mm_shuffle_ps(_mm_shuffle_ps(arg5, zmm15, 1), zmm15, 0xe2)
                
                if (not(cond:99_1))
                label_140369581:
                    zmm2 = var_6c8
                    var_6c8 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_616, zmm2, 1), zmm2, 0xe2)
                    
                    if (cond:110_1)
                        goto label_140368e0b
                    
                    goto label_1403695a9
                
            label_140368e05:
                
                if (cond:109_1)
                label_1403695a9:
                    var_6a8_6 =
                        _mm_shuffle_ps(_mm_shuffle_ps(var_698_2, var_6a8_6, 1), var_6a8_6, 0xe2)
                    
                    if (not(cond:115_1))
                    label_1403695c2:
                        zmm9 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_618, zmm9, 1), zmm9, 0xe2)
                        
                        if (cond:126_1)
                            goto label_140368e1c
                        
                        goto label_1403695dd
                else
                label_140368e0b:
                    
                    if (cond:116_1)
                        goto label_1403695c2
                
                if (not(cond:125_1))
                label_140368e1c:
                    arg6 = 1
                    
                    if (cond:136_1)
                        goto label_1403695ff
                    
                    goto label_140368e26
                
            label_1403695dd:
                var_6b8_3 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_619, var_6b8_3, 1), var_6b8_3, 0xe2)
                arg6 = 1
                bool cond:151_1
                bool cond:152_1
                bool cond:159_1
                bool cond:160_1
                bool cond:169_1
                bool cond:170_1
                bool cond:175_1
                bool cond:176_1
                bool cond:185_1
                bool cond:186_1
                bool cond:195_1
                bool cond:196_1
                
                if (not(cond:135_1))
                label_1403695ff:
                    zmm14 = _mm_shuffle_ps(_mm_shuffle_ps(arg6, zmm14, 0), zmm14, 0xe2)
                    char temp22_1 = temp0_632 & 4
                    cond:151_1 = temp22_1 == 0
                    cond:152_1 = temp22_1 != 0
                    cond:159_1 = temp22_1 != 0
                    cond:160_1 = temp22_1 == 0
                    cond:169_1 = temp22_1 == 0
                    cond:170_1 = temp22_1 != 0
                    cond:175_1 = temp22_1 != 0
                    cond:176_1 = temp22_1 == 0
                    cond:185_1 = temp22_1 == 0
                    cond:186_1 = temp22_1 != 0
                    cond:195_1 = temp22_1 != 0
                    cond:196_1 = temp22_1 == 0
                    
                    if (temp22_1 == 0)
                        goto label_140368e2e
                    
                    goto label_140369613
                
            label_140368e26:
                char temp21_1 = temp0_632 & 4
                cond:151_1 = temp21_1 == 0
                cond:152_1 = temp21_1 != 0
                cond:159_1 = temp21_1 != 0
                cond:160_1 = temp21_1 == 0
                cond:169_1 = temp21_1 == 0
                cond:170_1 = temp21_1 != 0
                cond:175_1 = temp21_1 != 0
                cond:176_1 = temp21_1 == 0
                cond:185_1 = temp21_1 == 0
                cond:186_1 = temp21_1 != 0
                cond:195_1 = temp21_1 != 0
                cond:196_1 = temp21_1 == 0
                
                if (temp21_1 == 0)
                label_140368e2e:
                    
                    if (cond:152_1)
                        goto label_140369626
                    
                    goto label_140368e34
                
            label_140369613:
                arg9 = _mm_shuffle_ps(arg9, _mm_shuffle_ps(temp0_614, arg9, 0x32), 0x84)
                
                if (not(cond:151_1))
                label_140369626:
                    zmm15 = _mm_shuffle_ps(zmm15, _mm_shuffle_ps(arg5, zmm15, 0x32), 0x84)
                    
                    if (cond:160_1)
                        goto label_140368e3a
                    
                    goto label_140369635
                
            label_140368e34:
                
                if (not(cond:159_1))
                label_140368e3a:
                    
                    if (cond:170_1)
                        goto label_14036965d
                    
                    goto label_140368e40
                
            label_140369635:
                zmm2 = var_6c8
                var_6c8 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(temp0_616, zmm2, 0x32), 0x84)
                
                if (not(cond:169_1))
                label_14036965d:
                    var_6a8_6 =
                        _mm_shuffle_ps(var_6a8_6, _mm_shuffle_ps(var_698_2, var_6a8_6, 0x32), 0x84)
                    
                    if (cond:176_1)
                        goto label_140368e46
                    
                    goto label_140369671
                
            label_140368e40:
                
                if (cond:175_1)
                label_140369671:
                    zmm9 = _mm_shuffle_ps(zmm9, _mm_shuffle_ps(temp0_618, zmm9, 0x32), 0x84)
                    
                    if (not(cond:185_1))
                    label_14036968d:
                        var_6b8_3 = _mm_shuffle_ps(var_6b8_3, 
                            _mm_shuffle_ps(temp0_619, var_6b8_3, 0x32), 0x84)
                        
                        if (cond:196_1)
                            goto label_140368e52
                        
                        goto label_1403696a1
                else
                label_140368e46:
                    
                    if (cond:186_1)
                        goto label_14036968d
                
                bool cond:210_1
                bool cond:211_1
                bool cond:218_1
                bool cond:219_1
                bool cond:226_1
                bool cond:227_1
                bool cond:230_1
                bool cond:231_1
                bool cond:234_1
                bool cond:235_1
                bool cond:238_1
                bool cond:239_1
                
                if (not(cond:195_1))
                label_140368e52:
                    zmm2 = temp0_618
                    char temp32_1 = temp0_632 & 8
                    cond:210_1 = temp32_1 != 0
                    cond:211_1 = temp32_1 == 0
                    cond:218_1 = temp32_1 == 0
                    cond:219_1 = temp32_1 != 0
                    cond:226_1 = temp32_1 != 0
                    cond:227_1 = temp32_1 == 0
                    cond:230_1 = temp32_1 == 0
                    cond:231_1 = temp32_1 != 0
                    cond:234_1 = temp32_1 != 0
                    cond:235_1 = temp32_1 == 0
                    cond:238_1 = temp32_1 != 0
                    cond:239_1 = temp32_1 == 0
                    
                    if (temp32_1 != 0)
                        goto label_1403696b7
                    
                    goto label_140368e5e
                
            label_1403696a1:
                zmm14 = _mm_shuffle_ps(zmm14, _mm_shuffle_ps(arg6, zmm14, 0x30), 0x84)
                zmm2 = temp0_618
                char temp31_1 = temp0_632 & 8
                cond:210_1 = temp31_1 != 0
                cond:211_1 = temp31_1 == 0
                cond:218_1 = temp31_1 == 0
                cond:219_1 = temp31_1 != 0
                cond:226_1 = temp31_1 != 0
                cond:227_1 = temp31_1 == 0
                cond:230_1 = temp31_1 == 0
                cond:231_1 = temp31_1 != 0
                cond:234_1 = temp31_1 != 0
                cond:235_1 = temp31_1 == 0
                cond:238_1 = temp31_1 != 0
                cond:239_1 = temp31_1 == 0
                
                if (temp31_1 != 0)
                label_1403696b7:
                    arg9 = _mm_shuffle_ps(arg9, _mm_shuffle_ps(temp0_614, arg9, 0x23), 0x24)
                    zmm4 = var_5e8_2
                    arg10 = zmm9
                    
                    if (cond:211_1)
                        goto label_140368e70
                    
                    goto label_1403696d3
                
            label_140368e5e:
                zmm4 = var_5e8_2
                arg10 = zmm9
                
                if (not(cond:210_1))
                label_140368e70:
                    
                    if (cond:219_1)
                        goto label_1403696de
                    
                    goto label_140368e76
                
            label_1403696d3:
                zmm15 = _mm_shuffle_ps(zmm15, _mm_shuffle_ps(arg5, zmm15, 0x23), 0x24)
                
                if (not(cond:218_1))
                label_1403696de:
                    zmm0 = var_6c8
                    var_6c8 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(temp0_616, zmm0, 0x23), 0x24)
                    zmm3 = var_618_2
                    zmm11 = var_6b8_3
                    
                    if (cond:227_1)
                        goto label_140368e8a
                    
                    goto label_140369704
                
            label_140368e76:
                zmm3 = var_618_2
                zmm11 = var_6b8_3
                
                if (cond:226_1)
                label_140369704:
                    zmm0 = var_6a8_6
                    var_6a8_6 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(var_698_2, zmm0, 0x23), 0x24)
                    
                    if (not(cond:230_1))
                    label_140369726:
                        arg10 = _mm_shuffle_ps(arg10, _mm_shuffle_ps(zmm2, arg10, 0x23), 0x24)
                        
                        if (cond:235_1)
                            goto label_140368e96
                        
                        goto label_140369736
                else
                label_140368e8a:
                    
                    if (cond:231_1)
                        goto label_140369726
                
                if (cond:234_1)
                label_140369736:
                    zmm11 = _mm_shuffle_ps(zmm11, _mm_shuffle_ps(temp0_619, zmm11, 0x23), 0x24)
                    arg7 = var_6a8_6
                    
                    if (cond:238_1)
                        zmm14 = _mm_shuffle_ps(zmm14, _mm_shuffle_ps(arg6, zmm14, 0x20), 0x24)
                else
                label_140368e96:
                    arg7 = var_6a8_6
                    
                    if (not(cond:239_1))
                        zmm14 = _mm_shuffle_ps(zmm14, _mm_shuffle_ps(arg6, zmm14, 0x20), 0x24)
                
                arg6 = var_5f8_2
                _mm_movemask_ps(_mm_srai_epi32(zmm7, 0x1f) | zmm10)
                zmm2 = var_5b8_2
                zmm10 = var_5c8_2
                zmm7 = var_6c8
                rax_96 = arg1.b
                char temp37_1 = rax_96 & 1
                cond:30_1 = temp37_1 != 0
                cond:37_1 = temp37_1 == 0
                cond:38_1 = temp37_1 != 0
                cond:47_1 = temp37_1 != 0
                cond:48_1 = temp37_1 == 0
                cond:53_1 = temp37_1 == 0
                cond:54_1 = temp37_1 != 0
                cond:63_1 = temp37_1 != 0
                cond:64_1 = temp37_1 == 0
                cond:73_1 = temp37_1 == 0
                cond:74_1 = temp37_1 != 0
                
                if (temp37_1 != 0)
                    arg6[0] = arg9[0]
            else
                zmm14 = var_658_2
            label_140368ef2:
                zmm4 = var_5e8_2
                zmm3 = var_618_2
                arg6 = var_5f8_2
                arg10 = zmm9
                arg7 = var_6a8_6
                zmm11 = var_6b8_3
                zmm7 = var_6c8
                rax_96 = arg1.b
                char temp4_1 = rax_96 & 1
                cond:30_1 = temp4_1 != 0
                cond:37_1 = temp4_1 == 0
                cond:38_1 = temp4_1 != 0
                cond:47_1 = temp4_1 != 0
                cond:48_1 = temp4_1 == 0
                cond:53_1 = temp4_1 == 0
                cond:54_1 = temp4_1 != 0
                cond:63_1 = temp4_1 != 0
                cond:64_1 = temp4_1 == 0
                cond:73_1 = temp4_1 == 0
                cond:74_1 = temp4_1 != 0
                
                if (temp4_1 != 0)
                    arg6[0] = arg9[0]
            
            if (not(cond:30_1))
                if (cond:38_1)
                    goto label_1403692d0
                
                goto label_140368f34
            
            zmm3[0] = zmm15[0]
            
            if (not(cond:37_1))
            label_1403692d0:
                zmm10[0] = zmm7[0]
                
                if (cond:48_1)
                    goto label_140368f3a
                
                goto label_1403692db
            
        label_140368f34:
            
            if (not(cond:47_1))
            label_140368f3a:
                
                if (cond:54_1)
                    goto label_1403692e5
                
                goto label_140368f40
            
        label_1403692db:
            zmm4[0] = arg7[0]
            
            if (not(cond:53_1))
            label_1403692e5:
                zmm2[0] = arg10[0]
                
                if (cond:64_1)
                    goto label_140368f46
                
                goto label_1403692f5
            
        label_140368f40:
            
            if (not(cond:63_1))
            label_140368f46:
                
                if (cond:74_1)
                    goto label_14036930a
                
                goto label_140368f4c
            
        label_1403692f5:
            zmm0.d = zmm11[0]
            var_668 = zmm0
            bool cond:89_1
            bool cond:90_1
            bool cond:97_1
            bool cond:98_1
            bool cond:107_1
            bool cond:108_1
            bool cond:113_1
            bool cond:114_1
            bool cond:123_1
            bool cond:124_1
            bool cond:133_1
            bool cond:134_1
            
            if (not(cond:73_1))
            label_14036930a:
                zmm0.d = zmm14[0]
                var_658_2 = zmm0
                char temp14_1 = rax_96 & 2
                cond:89_1 = temp14_1 == 0
                cond:90_1 = temp14_1 != 0
                cond:97_1 = temp14_1 != 0
                cond:98_1 = temp14_1 == 0
                cond:107_1 = temp14_1 == 0
                cond:108_1 = temp14_1 != 0
                cond:113_1 = temp14_1 != 0
                cond:114_1 = temp14_1 == 0
                cond:123_1 = temp14_1 == 0
                cond:124_1 = temp14_1 != 0
                cond:133_1 = temp14_1 != 0
                cond:134_1 = temp14_1 == 0
                
                if (temp14_1 == 0)
                    goto label_140368f54
                
                goto label_140369328
            
        label_140368f4c:
            char temp13_1 = rax_96 & 2
            cond:89_1 = temp13_1 == 0
            cond:90_1 = temp13_1 != 0
            cond:97_1 = temp13_1 != 0
            cond:98_1 = temp13_1 == 0
            cond:107_1 = temp13_1 == 0
            cond:108_1 = temp13_1 != 0
            cond:113_1 = temp13_1 != 0
            cond:114_1 = temp13_1 == 0
            cond:123_1 = temp13_1 == 0
            cond:124_1 = temp13_1 != 0
            cond:133_1 = temp13_1 != 0
            cond:134_1 = temp13_1 == 0
            
            if (temp13_1 == 0)
            label_140368f54:
                
                if (cond:90_1)
                    goto label_14036933d
                
                goto label_140368f5a
            
        label_140369328:
            arg6 = _mm_shuffle_ps(_mm_shuffle_ps(arg9, arg6, 1), arg6, 0xe2)
            
            if (not(cond:89_1))
            label_14036933d:
                zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm15, zmm3, 1), zmm3, 0xe2)
                
                if (cond:98_1)
                    goto label_140368f60
                
                goto label_140369353
            
        label_140368f5a:
            
            if (not(cond:97_1))
            label_140368f60:
                
                if (cond:108_1)
                    goto label_140369368
                
                goto label_140368f66
            
        label_140369353:
            zmm10 = _mm_shuffle_ps(_mm_shuffle_ps(zmm7, zmm10, 1), zmm10, 0xe2)
            
            if (not(cond:107_1))
            label_140369368:
                zmm4 = _mm_shuffle_ps(_mm_shuffle_ps(arg7, zmm4, 1), zmm4, 0xe2)
                
                if (cond:114_1)
                    goto label_140368f6c
                
                goto label_14036937d
            
        label_140368f66:
            
            if (cond:113_1)
            label_14036937d:
                zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(arg10, zmm2, 1), zmm2, 0xe2)
                
                if (not(cond:123_1))
                label_14036938a:
                    arg5 = var_668
                    var_668 = _mm_shuffle_ps(_mm_shuffle_ps(zmm11, arg5, 1), arg5, 0xe2)
                    
                    if (cond:134_1)
                        goto label_140368f78
                    
                    goto label_1403693a6
            else
            label_140368f6c:
                
                if (cond:124_1)
                    goto label_14036938a
            
            bool cond:149_1
            bool cond:150_1
            bool cond:157_1
            bool cond:158_1
            bool cond:167_1
            bool cond:168_1
            bool cond:173_1
            bool cond:174_1
            bool cond:183_1
            bool cond:184_1
            bool cond:193_1
            bool cond:194_1
            
            if (not(cond:133_1))
            label_140368f78:
                char temp24_1 = rax_96 & 4
                cond:149_1 = temp24_1 != 0
                cond:150_1 = temp24_1 == 0
                cond:157_1 = temp24_1 == 0
                cond:158_1 = temp24_1 != 0
                cond:167_1 = temp24_1 != 0
                cond:168_1 = temp24_1 == 0
                cond:173_1 = temp24_1 == 0
                cond:174_1 = temp24_1 != 0
                cond:183_1 = temp24_1 != 0
                cond:184_1 = temp24_1 == 0
                cond:193_1 = temp24_1 == 0
                cond:194_1 = temp24_1 != 0
                
                if (temp24_1 != 0)
                    goto label_1403693cb
                
                goto label_140368f80
            
        label_1403693a6:
            zmm9 = var_658_2
            var_658_2 = _mm_shuffle_ps(_mm_shuffle_ps(zmm14, zmm9, 1), zmm9, 0xe2)
            char temp23_1 = rax_96 & 4
            cond:149_1 = temp23_1 != 0
            cond:150_1 = temp23_1 == 0
            cond:157_1 = temp23_1 == 0
            cond:158_1 = temp23_1 != 0
            cond:167_1 = temp23_1 != 0
            cond:168_1 = temp23_1 == 0
            cond:173_1 = temp23_1 == 0
            cond:174_1 = temp23_1 != 0
            cond:183_1 = temp23_1 != 0
            cond:184_1 = temp23_1 == 0
            cond:193_1 = temp23_1 == 0
            cond:194_1 = temp23_1 != 0
            
            if (temp23_1 != 0)
            label_1403693cb:
                arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(arg9, arg6, 0x32), 0x84)
                
                if (cond:150_1)
                    goto label_140368f86
                
                goto label_1403693dd
            
        label_140368f80:
            
            if (not(cond:149_1))
            label_140368f86:
                
                if (cond:158_1)
                    goto label_1403693ef
                
                goto label_140368f8c
            
        label_1403693dd:
            zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm15, zmm3, 0x32), 0x84)
            
            if (not(cond:157_1))
            label_1403693ef:
                zmm10 = _mm_shuffle_ps(zmm10, _mm_shuffle_ps(zmm7, zmm10, 0x32), 0x84)
                
                if (cond:168_1)
                    goto label_140368f92
                
                goto label_140369401
            
        label_140368f8c:
            
            if (not(cond:167_1))
            label_140368f92:
                
                if (cond:174_1)
                    goto label_140369413
                
                goto label_140368f98
            
        label_140369401:
            zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(arg7, zmm4, 0x32), 0x84)
            
            if (not(cond:173_1))
            label_140369413:
                zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(arg10, zmm2, 0x32), 0x84)
                
                if (cond:184_1)
                    goto label_140368f9e
                
                goto label_140369421
            
        label_140368f98:
            
            if (not(cond:183_1))
            label_140368f9e:
                
                if (cond:194_1)
                    goto label_14036944a
                
                goto label_140368fa4
            
        label_140369421:
            arg5 = var_668
            var_668 = _mm_shuffle_ps(arg5, _mm_shuffle_ps(zmm11, arg5, 0x32), 0x84)
            bool cond:208_1
            bool cond:209_1
            bool cond:216_1
            bool cond:217_1
            bool cond:224_1
            bool cond:225_1
            bool cond:228_1
            bool cond:229_1
            bool cond:232_1
            bool cond:233_1
            bool cond:236_1
            bool cond:237_1
            
            if (not(cond:193_1))
            label_14036944a:
                var_658_2 = _mm_shuffle_ps(var_658_2, _mm_shuffle_ps(zmm14, var_658_2, 0x32), 0x84)
                char temp34_1 = rax_96 & 8
                cond:208_1 = temp34_1 == 0
                cond:209_1 = temp34_1 != 0
                cond:216_1 = temp34_1 != 0
                cond:217_1 = temp34_1 == 0
                cond:224_1 = temp34_1 == 0
                cond:225_1 = temp34_1 != 0
                cond:228_1 = temp34_1 != 0
                cond:229_1 = temp34_1 == 0
                cond:232_1 = temp34_1 == 0
                cond:233_1 = temp34_1 != 0
                cond:236_1 = temp34_1 == 0
                cond:237_1 = temp34_1 != 0
                
                if (temp34_1 == 0)
                    goto label_140368fac
                
                goto label_14036945c
            
        label_140368fa4:
            char temp33_1 = rax_96 & 8
            cond:208_1 = temp33_1 == 0
            cond:209_1 = temp33_1 != 0
            cond:216_1 = temp33_1 != 0
            cond:217_1 = temp33_1 == 0
            cond:224_1 = temp33_1 == 0
            cond:225_1 = temp33_1 != 0
            cond:228_1 = temp33_1 != 0
            cond:229_1 = temp33_1 == 0
            cond:232_1 = temp33_1 == 0
            cond:233_1 = temp33_1 != 0
            cond:236_1 = temp33_1 == 0
            cond:237_1 = temp33_1 != 0
            
            if (temp33_1 != 0)
            label_14036945c:
                arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(arg9, arg6, 0x23), 0x24)
                
                if (not(cond:208_1))
                label_14036946c:
                    zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm15, zmm3, 0x23), 0x24)
                    
                    if (cond:217_1)
                        goto label_140368fb8
                    
                    goto label_14036947c
            else
            label_140368fac:
                
                if (cond:209_1)
                    goto label_14036946c
            
            if (not(cond:216_1))
            label_140368fb8:
                zmm7 = var_658_2
                
                if (cond:225_1)
                    goto label_140369490
                
                goto label_140368fc3
            
        label_14036947c:
            zmm10 = _mm_shuffle_ps(zmm10, _mm_shuffle_ps(zmm7, zmm10, 0x23), 0x24)
            zmm7 = var_658_2
            
            if (not(cond:224_1))
            label_140369490:
                zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(arg7, zmm4, 0x23), 0x24)
                
                if (cond:229_1)
                    goto label_140368fc9
                
                goto label_14036949f
            
        label_140368fc3:
            
            if (not(cond:228_1))
            label_140368fc9:
                
                if (cond:233_1)
                    goto label_1403694aa
                
                goto label_140368fcf
            
        label_14036949f:
            zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(arg10, zmm2, 0x23), 0x24)
            
            if (cond:232_1)
            label_140368fcf:
                
                if (not(cond:236_1))
                    zmm7 = _mm_shuffle_ps(zmm7, _mm_shuffle_ps(zmm14, zmm7, 0x23), 0x24)
            else
            label_1403694aa:
                zmm0 = var_668
                var_668 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm11, zmm0, 0x23), 0x24)
                
                if (cond:237_1)
                    zmm7 = _mm_shuffle_ps(zmm7, _mm_shuffle_ps(zmm14, zmm7, 0x23), 0x24)
            
            zmm9 = zmm4
            zmm11 = arg6
else
    zmm11 = zx.o(0)
    zmm3 = zx.o(0)
    zmm10 = zx.o(0)
    zmm9 = zx.o(0)
    zmm2 = zx.o(0)
    var_668 = zx.o(0)
    zmm7 = zx.o(0)
    
    while (true)
        zmm14 = zmm10
        zmm15 = zmm7
        int64_t rcx_2 = sx.q((r11 << 3).d - r11.d)
        zmm0 = _mm_insert_epi16(
            _mm_insert_epi16(
                _mm_insert_epi16(zx.o(*(arg4 + (rcx_2 << 2) + 0x18)), 
                    zx.d(*(arg4 + (rcx_2 << 2) + 0x34)), 2), 
                zx.d(*(arg4 + (rcx_2 << 2) + 0x50)), 4), 
            zx.d(*(arg4 + (rcx_2 << 2) + 0x6c)), 6)
        int64_t rsi_3 = sx.q((r11 << 2).d)
        zmm7 = *(var_600 + rsi_3)
        arg5 = _mm_cmpeq_epi32(arg5, arg5)
        zmm7 = _mm_cmpeq_epi32(zmm7, arg5) & not.o(_mm_cmpeq_epi32(zmm0, zx.o(0)) ^ arg5)
        char temp0_87 = _mm_movemask_ps(zmm7)
        
        if (temp0_87 == 0)
            zmm7 = zmm15
            zmm10 = zmm14
            r11 = zx.q(r11.d + 4)
            
            if (r11.d s>= r15_4)
                break
        else
            var_688 = arg10
            var_698 = arg9
            float var_6b8_1[0x4] = arg8
            var_6c8 = zmm4
            int64_t var_628
            var_628.o = arg6
            var_678 = arg7
            float var_5f8_1[0x4] = zmm11
            float var_618_1[0x4] = zmm3
            float var_5e8_1[0x4] = zmm9
            float var_5c8_1[0x4] = zmm14
            float var_5b8_1[0x4] = zmm2
            int32_t var_658_1[0x4] = zmm15
            int64_t rdi_2 = sx.q((r11 * 9).d * 3 + r11.d)
            arg6 = *(arg4 + rdi_2)
            zmm0 = *(arg4 + rdi_2 + 0x1c)
            arg5 = *(arg4 + rdi_2 + 0x38)
            zmm2 = *(arg4 + rdi_2 + 0x54)
            float temp0_90[0x4] =
                _mm_shuffle_ps(_mm_unpacklo_ps(arg6, zmm0.q), _mm_shuffle_ps(zmm2, arg5, 0), 0x24)
            arg7 = _mm_unpacklo_epi32(_mm_shuffle_epi32(arg6, 0xe5), 
                _mm_shuffle_epi32(zmm0, 0xe5)[0].q)
            uint32_t var_5a8_1[0x4] = _mm_shuffle_ps(arg7, 
                _mm_shuffle_ps(zmm2, _mm_shuffle_ps(arg7, arg5, 0xd4), 0x21), 0x24)
            zmm4 = _mm_shuffle_epi32(arg6, 0xe7)
            uint32_t var_598_1[0x4] =
                _mm_shuffle_ps(_mm_unpackhi_ps(arg6, zmm0), _mm_shuffle_ps(zmm2, arg5, 0x22), 0x24)
            zmm4 = _mm_unpacklo_epi32(zmm4, _mm_shuffle_epi32(zmm0, 0xe7).q)
            float temp0_105[0x4] = _mm_shuffle_ps(zmm4, 
                _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm4, arg5, 0xf4), 0x23), 0x24)
            int64_t rcx_7 = *(arg4 + rdi_2 + 0x10)
            int64_t rbx_2 = *(arg4 + rdi_2 + 0x2c)
            int64_t rbp_1 = *(arg4 + rdi_2 + 0x48)
            int64_t rdi_3 = *(arg4 + rdi_2 + 0x64)
            int32_t temp0_106[0x4] = _mm_unpacklo_epi32(zx.o(rbp_1.d), zx.o(rdi_3.d)[0].q)
            float var_548_1[0x4] =
                _mm_unpacklo_epi64(_mm_unpacklo_epi32(zx.o(rcx_7.d), zx.q(rbx_2.d)), temp0_106[0].q)
            int32_t temp0_109[0x4] =
                _mm_unpacklo_epi32(zx.o((rbp_1 u>> 0x20).d), zx.q((rdi_3 u>> 0x20).d))
            float var_648_1[0x4] = _mm_unpacklo_epi64(
                _mm_unpacklo_epi32(zx.o((rcx_7 u>> 0x20).d), zx.q((rbx_2 u>> 0x20).d)), 
                temp0_109[0].q)
            zmm0 = _mm_slli_epi32(*(arg2 + rsi_3), 6) & zmm7
            int64_t rcx_10 = sx.q(zmm0.d)
            void* rdi_5 = arg3 + rcx_10
            zmm11 = *(arg3 + rcx_10)
            int64_t rcx_12 = sx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0])
            void* rsi_4 = arg3 + rcx_12
            float temp0_114[0x4] = _mm_unpacklo_ps(zmm11, (*(arg3 + rcx_12))[0].q)
            int64_t rcx_14 = sx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
            void* rbp_3 = arg3 + rcx_14
            arg5 = *(arg3 + rcx_14)
            int64_t rcx_16 = sx.q(_mm_shuffle_epi32(zmm0, 0xe7).d)
            void* rbx_4 = arg3 + rcx_16
            arg5 = _mm_unpacklo_ps(arg5, (*(arg3 + rcx_16)).q)
            zmm11 = temp0_114[0].q | arg5[0].q << 0x40
            zmm0 = zmm7 & data_142fc95e0
            float temp0_119[0x4] = _mm_unpacklo_ps(*(zx.q(zmm0.d) + rdi_5), 
                (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rsi_4))[0].q)
            arg5 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0]) + rbp_3), 
                (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7).d) + rbx_4)).q)
            zmm15 = temp0_119[0].q | arg5[0].q << 0x40
            zmm0 = zmm7 & data_142fc95f0
            float temp0_124[0x4] = _mm_unpacklo_ps(*(zx.q(zmm0.d) + rdi_5), 
                (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rsi_4))[0].q)
            arg5 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0]) + rbp_3), 
                (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7).d) + rbx_4)).q)
            float var_6a8_1[0x4] = temp0_124[0].q | arg5[0].q << 0x40
            zmm0 = zmm7 & data_143442650
            float temp0_129[0x4] = _mm_unpacklo_ps(*(zx.q(zmm0.d) + rdi_5), 
                (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rsi_4))[0].q)
            arg5 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0]) + rbp_3), 
                (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7).d) + rbx_4)).q)
            float var_578_1[0x4] = temp0_129[0].q | arg5[0].q << 0x40
            zmm0 = zmm7 & data_143442660
            float temp0_134[0x4] = _mm_unpacklo_ps(*(zx.q(zmm0.d) + rdi_5), 
                (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rsi_4))[0].q)
            arg5 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0]) + rbp_3), 
                (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7).d) + rbx_4)).q)
            float var_588_1[0x4] = temp0_134[0].q | arg5[0].q << 0x40
            zmm0 = zmm7 & data_143442670
            float temp0_139[0x4] = _mm_unpacklo_ps(*(zx.q(zmm0.d) + rdi_5), 
                (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rsi_4))[0].q)
            arg5 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0]) + rbp_3), 
                (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7).d) + rbx_4)).q)
            zmm9 = temp0_139[0].q | arg5[0].q << 0x40
            zmm0 = zmm7 & data_143442700
            arg5 = _mm_unpacklo_ps(*(zx.q(zmm0.d) + rdi_5), 
                (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rsi_4))[0].q)
            float temp0_147[0x4] = _mm_unpacklo_ps(
                *(zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0]) + rbp_3), 
                (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7).d) + rbx_4)).q)
            arg5 = arg5[0].q | temp0_147[0].q << 0x40
            zmm0 = zmm7 & data_1434b2e20
            arg6 = _mm_unpacklo_ps(*(zx.q(zmm0.d) + rdi_5), 
                (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rsi_4))[0].q)
            float temp0_152[0x4] = _mm_unpacklo_ps(
                *(zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0]) + rbp_3), 
                (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7).d) + rbx_4)).q)
            arg6 = arg6[0].q | temp0_152[0].q << 0x40
            zmm0 = zmm7 & (*U"    $$$$((((,,,,000044448888<<<<")[0].o
            uint64_t rax_2 = zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0])
            float temp0_154[0x4] = _mm_unpacklo_ps(*(zx.q(zmm0.d) + rdi_5), (*(rax_2 + rsi_4))[0].q)
            uint64_t rax_3 = zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
            uint64_t rcx_46 = zx.q(_mm_shuffle_epi32(zmm0, 0xe7).d)
            zmm0 = _mm_unpacklo_ps(*(rax_3 + rbp_3), (*(rcx_46 + rbx_4))[0].q)
            zmm14 = temp0_154[0].q | zmm0.q << 0x40
            zmm0 = zmm7 & (*U"    $$$$((((,,,,000044448888<<<<")[4].o
            uint64_t rax_4 = zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0])
            float temp0_159[0x4] = _mm_unpacklo_ps(*(zx.q(zmm0.d) + rdi_5), (*(rax_4 + rsi_4))[0].q)
            uint64_t rax_5 = zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
            uint64_t rcx_48 = zx.q(_mm_shuffle_epi32(zmm0, 0xe7).d)
            zmm0 = _mm_unpacklo_ps(*(rax_5 + rbp_3), (*(rcx_48 + rbx_4))[0].q)
            arg9 = temp0_159[0].q | zmm0.q << 0x40
            zmm0 = zmm7 & (*U"    $$$$((((,,,,000044448888<<<<")[8].o
            uint64_t rax_6 = zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0])
            zmm3 = zmm7
            float temp0_164[0x4] = _mm_unpacklo_ps(*(zx.q(zmm0.d) + rdi_5), (*(rax_6 + rsi_4))[0].q)
            uint64_t rax_7 = zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
            uint64_t rcx_50 = zx.q(_mm_shuffle_epi32(zmm0, 0xe7).d)
            zmm0 = _mm_unpacklo_ps(*(rax_7 + rbp_3), (*(rcx_50 + rbx_4))[0].q)
            arg8 = temp0_164[0].q | zmm0.q << 0x40
            zmm0 = zmm7 & (*U"    $$$$((((,,,,000044448888<<<<")[0xc].o
            uint64_t rax_8 = zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0])
            zmm7 = _mm_unpacklo_ps(*(zx.q(zmm0.d) + rdi_5), (*(rax_8 + rsi_4))[0].q)
            uint64_t rax_9 = zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
            uint64_t rcx_52 = zx.q(_mm_shuffle_epi32(zmm0, 0xe7).d)
            zmm0 = _mm_unpacklo_ps(*(rax_9 + rbp_3), (*(rcx_52 + rbx_4))[0].q)
            zmm7 = zmm7[0].q | zmm0.q << 0x40
            zmm4 = zmm3 & (*U"    $$$$((((,,,,000044448888<<<<")[0x10].o
            uint64_t rax_10 = zx.q(_mm_shuffle_epi32(zmm4, 0xe5).d)
            zmm0 = _mm_unpacklo_ps(*(zx.q(zmm4[0]) + rdi_5), (*(rax_10 + rsi_4))[0].q)
            uint64_t rax_11 = zx.q(_mm_shuffle_epi32(zmm4, 0x4e)[0])
            uint64_t rcx_54 = zx.q(_mm_shuffle_epi32(zmm4, 0xe7)[0])
            zmm0 =
                zmm0.q | _mm_unpacklo_ps(*(rax_11 + rbp_3), (*(rcx_54 + rbx_4))[0].q)[0].q << 0x40
            zmm2 = zmm3 & (*U"    $$$$((((,,,,000044448888<<<<")[0x14].o
            uint64_t rax_12 = zx.q(_mm_shuffle_epi32(zmm2, 0xe5)[0])
            float temp0_179[0x4] =
                _mm_unpacklo_ps(*(zx.q(zmm2[0]) + rdi_5), (*(rax_12 + rsi_4))[0].q)
            uint64_t rax_13 = zx.q(_mm_shuffle_epi32(zmm2, 0x4e)[0])
            uint64_t rcx_56 = zx.q(_mm_shuffle_epi32(zmm2, 0xe7)[0])
            float temp0_182[0x4] = _mm_unpacklo_ps(*(rax_13 + rbp_3), (*(rcx_56 + rbx_4))[0].q)
            zmm4 = temp0_179[0].q | temp0_182[0].q << 0x40
            zmm2 = zmm3 & (*U"    $$$$((((,,,,000044448888<<<<")[0x18].o
            uint64_t rax_14 = zx.q(_mm_shuffle_epi32(zmm2, 0xe5)[0])
            float temp0_184[0x4] =
                _mm_unpacklo_ps(*(zx.q(zmm2[0]) + rdi_5), (*(rax_14 + rsi_4))[0].q)
            uint64_t rax_15 = zx.q(_mm_shuffle_epi32(zmm2, 0x4e)[0])
            uint32_t (* rcx_58)[0x4] = zx.q(_mm_shuffle_epi32(zmm2, 0xe7)[0])
            float temp0_187[0x4] = _mm_unpacklo_ps(*(rax_15 + rbp_3), (*(rcx_58 + rbx_4))[0].q)
            arg10 = temp0_184[0].q | temp0_187[0].q << 0x40
            float var_568_1[0x4] = zmm3
            zmm2 = zmm3 & (*U"    $$$$((((,,,,000044448888<<<<")[0x1c].o
            int32_t (* rax_16)[0x4] = zx.q(_mm_shuffle_epi32(zmm2, 0xe5)[0])
            arg7 = _mm_unpacklo_ps(*(zx.q(zmm2[0]) + rdi_5), (*(rax_16 + rsi_4))[0].q)
            float (* rax_17)[0x4] = zx.q(_mm_shuffle_epi32(zmm2, 0x4e)[0])
            arg1 = zx.q(_mm_shuffle_epi32(zmm2, 0xe7)[0])
            float temp0_192[0x4] = _mm_unpacklo_ps(*(rax_17 + rbp_3), (*(arg1 + rbx_4))[0].q)
            arg7 = arg7[0].q | temp0_192[0].q << 0x40
            float var_228[0x4] = zmm11
            float var_218[0x4] = zmm15
            float var_208[0x4] = var_6a8_1
            float var_1f8[0x4] = var_578_1
            float var_1e8_1[0x4] = var_588_1
            float var_1d8_1[0x4] = zmm9
            int32_t var_1c8_1[0x4] = arg5
            uint32_t var_1b8_1[0x4] = arg6
            float var_1a8_1[0x4] = zmm14
            float var_198_1[0x4] = arg9
            float var_188_1[0x4] = arg8
            int32_t var_178_1[0x4] = zmm7
            uint128_t var_168_1 = zmm0
            float var_158_1[0x4] = zmm4
            float var_148_1[0x4] = arg10
            uint32_t var_138_1[0x4] = arg7
            uint128_t var_6a8_2 = (*arg11)[9]
            zmm9 = (*arg11)[0xd]
            arg9 = (*arg11)[2]
            zmm14 = (*arg11)[3]
            arg10 = (*arg11)[6]
            zmm15 = (*arg11)[0xa]
            arg7 = (*arg11)[0xe]
            zmm7 = (*arg11)[7]
            zmm0 = (*arg11)[0xb]
            
            for (int64_t i = 0; i != 0x100; i += 0x40)
                arg6 = *arg11
                zmm11 = arg11[1][0]
                arg6 = _mm_shuffle_ps(arg6, arg6, 0)
                zmm10 = *(&var_228 + i)
                zmm4 = *(&var_218 + i)
                zmm3 = *(&var_208 + i)
                arg5 = *(&var_1f8 + i)
                arg8 = zx.o(0)
                arg6 = _mm_add_ps(_mm_mul_ps(arg6, zmm10), arg8)
                float temp0_198[0x4] =
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm11, zmm11, 0), zmm4), arg6)
                arg6 = arg11[2][0]
                arg6 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg6, arg6, 0), zmm3), temp0_198)
                zmm2 = arg11[3][0]
                *(&var_4b8 + i) = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), arg5), arg6)
                zmm2 = (*arg11)[1]
                arg6 = (*arg11)[5]
                float temp0_207[0x4] =
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm10), arg8)
                arg6 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg6, arg6, 0), zmm4), temp0_207)
                zmm2 = var_6a8_2
                float temp0_213[0x4] =
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm3), arg6)
                *(&var_4a8 + i) =
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm9, zmm9, 0), arg5), temp0_213)
                float temp0_219[0x4] =
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg9, arg9, 0), zmm10), arg8)
                arg6 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg10, arg10, 0), zmm4), temp0_219)
                float temp0_225[0x4] =
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm15, zmm15, 0), zmm3), arg6)
                *(&var_498 + i) =
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg7, arg7, 0), arg5), temp0_225)
                float temp0_231[0x4] =
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm14, zmm14, 0), zmm10), arg8)
                arg6 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0), zmm4), temp0_231)
                float temp0_237[0x4] =
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm3), arg6)
                zmm3 = (*arg11)[0xf]
                *(&var_488 + i) =
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), arg5), temp0_237)
            
            zmm2 = var_4b8.o
            float var_578_2[0x4] = zmm2
            zmm0 = var_4a8
            arg6 = var_498
            uint32_t var_588_2[0x4] = arg6
            zmm10 = temp0_105
            arg5 = __addps_xmmps_memps(zmm10, temp0_90)
            zmm9 = data_142d3f640
            arg5 = _mm_mul_ps(arg5, zmm9)
            float temp0_243[0x4] = _mm_mul_ps(arg5, zmm2)
            arg7 = _mm_mul_ps(arg5, zmm0)
            float temp0_246[0x4] = _mm_mul_ps(_mm_add_ps(var_5a8_1, var_548_1), zmm9)
            zmm7 = _mm_add_ps(_mm_mul_ps(temp0_246, var_478), temp0_243)
            float temp0_250[0x4] = _mm_add_ps(_mm_mul_ps(temp0_246, var_468), arg7)
            arg7 = _mm_mul_ps(arg5, arg6)
            arg6 = _mm_add_ps(_mm_mul_ps(temp0_246, var_458), arg7)
            arg5 = __mulps_xmmps_memps(arg5, var_488)
            float temp0_256[0x4] = _mm_add_ps(_mm_mul_ps(temp0_246, var_448), arg5)
            arg7 = _mm_mul_ps(_mm_add_ps(var_598_1, var_648_1), zmm9)
            float temp0_260[0x4] = _mm_add_ps(_mm_mul_ps(arg7, var_438), zmm7)
            zmm7 = _mm_add_ps(_mm_mul_ps(arg7, var_428), temp0_250)
            float temp0_264[0x4] = _mm_add_ps(_mm_mul_ps(arg7, var_418), arg6)
            arg7 = _mm_add_ps(_mm_mul_ps(arg7, var_408), temp0_256)
            float temp0_267[0x4] = __addps_xmmps_memps(temp0_260, var_3f8)
            zmm7 = __addps_xmmps_memps(zmm7, var_3e8)
            float temp0_269[0x4] = __addps_xmmps_memps(temp0_264, var_3d8)
            arg7 = __addps_xmmps_memps(arg7, var_3c8)
            var_4b8.o = var_478
            var_4a8 = var_468
            var_498 = var_458
            var_488 = var_448
            int32_t var_368_1[0x4] = var_438
            float var_358_1[0x4] = var_428
            uint128_t var_348_1 = var_418
            uint32_t var_338_1[0x4] = var_408
            float temp0_271[0x4] = __subps_xmmps_memps(var_548_1, var_5a8_1)
            float temp0_272[0x4] = __subps_xmmps_memps(var_648_1, var_598_1)
            zmm10 = __subps_xmmps_memps(zmm10, temp0_90)
            float var_3a8_1[0x4] = temp0_267
            int32_t var_398_1[0x4] = zmm7
            float var_388_1[0x4] = temp0_269
            uint32_t var_378_1[0x4] = arg7
            zmm2 = data_142d3f640
            zmm10 = _mm_mul_ps(zmm10, zmm2)
            arg7 = _mm_mul_ps(var_578_2, zmm10)
            arg6 = _mm_mul_ps(zmm0, zmm10)
            zmm10 = __mulps_xmmps_memps(zmm10, var_588_2)
            float temp0_278[0x4] = _mm_mul_ps(temp0_271, zmm2)
            zmm14 = zmm2
            float temp0_279[0x4] = _mm_mul_ps(var_478, temp0_278)
            float temp0_280[0x4] = _mm_mul_ps(var_468, temp0_278)
            float temp0_281[0x4] = _mm_mul_ps(temp0_278, var_458)
            zmm2 = data_142d3f770
            uint32_t temp0_282[0x4] = _mm_and_ps(arg7, zmm2)
            float temp0_284[0x4] = _mm_add_ps(_mm_and_ps(temp0_279, zmm2), temp0_282)
            uint32_t temp0_285[0x4] = _mm_and_ps(arg6, zmm2)
            float temp0_287[0x4] = _mm_add_ps(_mm_and_ps(temp0_280, zmm2), temp0_285)
            zmm10 = _mm_and_ps(zmm10, zmm2)
            float temp0_290[0x4] = _mm_add_ps(_mm_and_ps(temp0_281, zmm2), zmm10)
            float temp0_291[0x4] = _mm_mul_ps(temp0_272, zmm14)
            arg5 = _mm_mul_ps(var_438, temp0_291)
            float temp0_293[0x4] = _mm_mul_ps(var_428, temp0_291)
            float temp0_294[0x4] = _mm_mul_ps(temp0_291, var_418)
            arg5 = _mm_add_ps(_mm_and_ps(arg5, zmm2), temp0_284)
            float temp0_298[0x4] = _mm_add_ps(_mm_and_ps(temp0_293, zmm2), temp0_287)
            float temp0_300[0x4] = _mm_add_ps(_mm_and_ps(temp0_294, zmm2), temp0_290)
            arg6 = _mm_sub_ps(temp0_267, arg5)
            zmm10 = _mm_sub_ps(zmm7, temp0_298)
            arg9 = _mm_sub_ps(temp0_269, temp0_300)
            zmm2 = _mm_add_ps(arg5, temp0_267)
            zmm15 = _mm_add_ps(temp0_298, zmm7)
            var_648 = _mm_add_ps(temp0_300, temp0_269)
            zmm7 = var_658_1
            zmm14 = zmm7 & data_142ed6810
            zmm0 = zx.o(0)
            uint32_t temp0_308[0x4] =
                _mm_slli_epi32(_mm_cmpeq_epi32(zmm14, zx.o(0)) & not.o(var_568_1), 0x1f)
            char temp0_309 = _mm_movemask_ps(temp0_308)
            uint32_t var_6a8_4[0x4] = arg6
            int64_t var_638
            char rsi_1
            bool cond:11_1
            bool cond:12_1
            bool cond:13_1
            bool cond:18_1
            bool cond:19_1
            bool cond:24_1
            bool cond:25_1
            bool cond:33_1
            bool cond:34_1
            bool cond:41_1
            bool cond:42_1
            
            if (temp0_309 == 0)
                zmm3 = zx.o(0)
                zmm9 = var_638.o
                arg6 = var_628.o
                arg8 = zmm2
            label_140367b27:
                zmm14 = _mm_cmpeq_epi32(zmm14, zmm3)
                arg5 = _mm_slli_epi32(var_568_1 & zmm14, 0x1f)
                
                if (_mm_movemask_ps(arg5) == 0)
                    var_638.o = zmm9
                    zmm2 = var_5b8_1
                    zmm10 = var_5c8_1
                    zmm9 = var_5e8_1
                    zmm3 = var_618_1
                    zmm11 = var_5f8_1
                    arg7 = var_678
                    zmm4 = var_6c8
                    arg8 = var_6b8_1
                    arg9 = var_698
                    arg10 = var_688
                    zmm7 = var_658_1
                    rsi_1 = temp0_87
                    char temp1_1 = rsi_1 & 1
                    cond:11_1 = temp1_1 == 0
                    cond:12_1 = temp1_1 != 0
                    cond:13_1 = temp1_1 != 0
                    cond:18_1 = temp1_1 != 0
                    cond:19_1 = temp1_1 == 0
                    cond:24_1 = temp1_1 == 0
                    cond:25_1 = temp1_1 != 0
                    cond:33_1 = temp1_1 != 0
                    cond:34_1 = temp1_1 == 0
                    cond:41_1 = temp1_1 == 0
                    cond:42_1 = temp1_1 != 0
                    
                    if (temp1_1 != 0)
                        zmm11[0] = var_638.o.d
                else
                    zmm7 = arg5
                    char temp0_369 = _mm_movemask_ps(zmm14)
                    char temp2_1 = temp0_369 & 1
                    
                    if (temp2_1 == 0)
                        zmm11 = var_5f8_1
                        arg7 = var_678
                        
                        if (temp2_1 != 0)
                            goto label_1403667ea
                        
                        goto label_140367b70
                    
                    arg5 = var_6a8_4
                    zmm9[0] = arg5[0]
                    zmm11 = var_5f8_1
                    arg7 = var_678
                    
                    if (temp2_1 != 0)
                    label_1403667ea:
                        arg7[0] = zmm10[0]
                        zmm3 = var_5e8_1
                        
                        if (temp2_1 == 0)
                            goto label_140367b52
                        
                        goto label_1403667fd
                    
                label_140367b70:
                    zmm3 = var_5e8_1
                    
                    if (temp2_1 == 0)
                    label_140367b52:
                        
                        if (temp2_1 != 0)
                            goto label_140366808
                        
                        goto label_140367b52_1
                    
                label_1403667fd:
                    arg6[0] = arg9[0]
                    
                    if (temp2_1 != 0)
                    label_140366808:
                        arg5 = var_6c8
                        arg5[0] = arg8[0]
                        var_6c8 = arg5
                        
                        if (temp2_1 == 0)
                            goto label_140367b52_2
                        
                        goto label_14036681b
                    
                label_140367b52_1:
                    
                    if (temp2_1 != 0)
                    label_14036681b:
                        arg5 = var_6b8_1
                        arg5[0] = zmm15[0]
                        var_6b8_1 = arg5
                        
                        if (temp2_1 != 0)
                        label_140366830:
                            arg5 = var_698
                            arg5[0] = var_648[0]
                            var_698 = arg5
                            
                            if (temp2_1 == 0)
                                goto label_140367b96
                            
                            goto label_14036684c
                    else
                    label_140367b52_2:
                        
                        if (temp2_1 != 0)
                            goto label_140366830
                    
                    bool cond:59_1
                    bool cond:60_1
                    bool cond:69_1
                    bool cond:70_1
                    bool cond:79_1
                    bool cond:80_1
                    bool cond:85_1
                    bool cond:86_1
                    bool cond:95_1
                    bool cond:96_1
                    bool cond:103_1
                    bool cond:104_1
                    
                    if (temp2_1 == 0)
                    label_140367b96:
                        char temp8_1 = temp0_369 & 2
                        cond:59_1 = temp8_1 != 0
                        cond:60_1 = temp8_1 == 0
                        cond:69_1 = temp8_1 == 0
                        cond:70_1 = temp8_1 != 0
                        cond:79_1 = temp8_1 != 0
                        cond:80_1 = temp8_1 == 0
                        cond:85_1 = temp8_1 == 0
                        cond:86_1 = temp8_1 != 0
                        cond:95_1 = temp8_1 != 0
                        cond:96_1 = temp8_1 == 0
                        cond:103_1 = temp8_1 == 0
                        cond:104_1 = temp8_1 != 0
                        
                        if (temp8_1 != 0)
                            goto label_140366876
                        
                        goto label_140367ba0
                    
                label_14036684c:
                    arg5 = 1
                    var_688[0] = 1
                    char temp7_1 = temp0_369 & 2
                    cond:59_1 = temp7_1 != 0
                    cond:60_1 = temp7_1 == 0
                    cond:69_1 = temp7_1 == 0
                    cond:70_1 = temp7_1 != 0
                    cond:79_1 = temp7_1 != 0
                    cond:80_1 = temp7_1 == 0
                    cond:85_1 = temp7_1 == 0
                    cond:86_1 = temp7_1 != 0
                    cond:95_1 = temp7_1 != 0
                    cond:96_1 = temp7_1 == 0
                    cond:103_1 = temp7_1 == 0
                    cond:104_1 = temp7_1 != 0
                    
                    if (temp7_1 != 0)
                    label_140366876:
                        arg5 = _mm_shuffle_ps(_mm_shuffle_ps(var_6a8_4, zmm9, 1), zmm9, 0xe2)
                        zmm9 = arg5
                        
                        if (cond:60_1)
                            goto label_140367ba6
                        
                        goto label_14036688d
                    
                label_140367ba0:
                    
                    if (not(cond:59_1))
                    label_140367ba6:
                        
                        if (cond:70_1)
                            goto label_1403668a2
                        
                        goto label_140367bac
                    
                label_14036688d:
                    arg5 = _mm_shuffle_ps(_mm_shuffle_ps(zmm10, arg7, 1), arg7, 0xe2)
                    arg7 = arg5
                    
                    if (not(cond:69_1))
                    label_1403668a2:
                        arg5 = _mm_shuffle_ps(_mm_shuffle_ps(arg9, arg6, 1), arg6, 0xe2)
                        arg6 = arg5
                        
                        if (cond:80_1)
                            goto label_140367bb2
                        
                        goto label_1403668b3
                    
                label_140367bac:
                    
                    if (not(cond:79_1))
                    label_140367bb2:
                        
                        if (cond:86_1)
                            goto label_1403668d6
                        
                        goto label_140367bb8
                    
                label_1403668b3:
                    zmm2 = var_6c8
                    arg5 = _mm_shuffle_ps(_mm_shuffle_ps(arg8, zmm2, 1), zmm2, 0xe2)
                    var_6c8 = arg5
                    
                    if (not(cond:85_1))
                    label_1403668d6:
                        arg5 = _mm_shuffle_ps(_mm_shuffle_ps(zmm15, var_6b8_1, 1), var_6b8_1, 0xe2)
                        var_6b8_1 = arg5
                        zmm14 = zmm0
                        
                        if (cond:96_1)
                            goto label_140367bc3
                        
                        goto label_1403668fb
                    
                label_140367bb8:
                    zmm14 = zmm0
                    
                    if (not(cond:95_1))
                    label_140367bc3:
                        zmm0 = 1
                        
                        if (cond:104_1)
                            goto label_14036691c
                        
                        goto label_140367bce
                    
                label_1403668fb:
                    arg5 = _mm_shuffle_ps(_mm_shuffle_ps(var_648, var_698, 1), var_698, 0xe2)
                    var_698 = arg5
                    zmm0 = 1
                    bool cond:119_1
                    bool cond:120_1
                    bool cond:129_1
                    bool cond:130_1
                    bool cond:139_1
                    bool cond:140_1
                    bool cond:145_1
                    bool cond:146_1
                    bool cond:155_1
                    bool cond:156_1
                    bool cond:163_1
                    bool cond:164_1
                    
                    if (not(cond:103_1))
                    label_14036691c:
                        arg5 = _mm_shuffle_ps(_mm_shuffle_ps(zmm0, var_688, 0), var_688, 0xe2)
                        var_688 = arg5
                        char temp18_1 = temp0_369 & 4
                        cond:119_1 = temp18_1 == 0
                        cond:120_1 = temp18_1 != 0
                        cond:129_1 = temp18_1 != 0
                        cond:130_1 = temp18_1 == 0
                        cond:139_1 = temp18_1 == 0
                        cond:140_1 = temp18_1 != 0
                        cond:145_1 = temp18_1 != 0
                        cond:146_1 = temp18_1 == 0
                        cond:155_1 = temp18_1 == 0
                        cond:156_1 = temp18_1 != 0
                        cond:163_1 = temp18_1 != 0
                        cond:164_1 = temp18_1 == 0
                        
                        if (temp18_1 == 0)
                            goto label_140367bd8
                        
                        goto label_140366934
                    
                label_140367bce:
                    char temp17_1 = temp0_369 & 4
                    cond:119_1 = temp17_1 == 0
                    cond:120_1 = temp17_1 != 0
                    cond:129_1 = temp17_1 != 0
                    cond:130_1 = temp17_1 == 0
                    cond:139_1 = temp17_1 == 0
                    cond:140_1 = temp17_1 != 0
                    cond:145_1 = temp17_1 != 0
                    cond:146_1 = temp17_1 == 0
                    cond:155_1 = temp17_1 == 0
                    cond:156_1 = temp17_1 != 0
                    cond:163_1 = temp17_1 != 0
                    cond:164_1 = temp17_1 == 0
                    
                    if (temp17_1 == 0)
                    label_140367bd8:
                        
                        if (cond:120_1)
                            goto label_140366948
                        
                        goto label_140367bde
                    
                label_140366934:
                    arg5 = _mm_shuffle_ps(var_6a8_4, zmm9, 0x32)
                    zmm9 = _mm_shuffle_ps(zmm9, arg5, 0x84)
                    
                    if (not(cond:119_1))
                    label_140366948:
                        arg5 = _mm_shuffle_ps(zmm10, arg7, 0x32)
                        arg7 = _mm_shuffle_ps(arg7, arg5, 0x84)
                        
                        if (cond:130_1)
                            goto label_140367be4
                        
                        goto label_14036695a
                    
                label_140367bde:
                    
                    if (not(cond:129_1))
                    label_140367be4:
                        
                        if (cond:140_1)
                            goto label_14036696c
                        
                        goto label_140367bea
                    
                label_14036695a:
                    arg5 = _mm_shuffle_ps(arg9, arg6, 0x32)
                    arg6 = _mm_shuffle_ps(arg6, arg5, 0x84)
                    
                    if (not(cond:139_1))
                    label_14036696c:
                        zmm2 = var_6c8
                        arg5 = _mm_shuffle_ps(arg8, zmm2, 0x32)
                        var_6c8 = _mm_shuffle_ps(zmm2, arg5, 0x84)
                        
                        if (cond:146_1)
                            goto label_140367bf0
                        
                        goto label_14036698b
                    
                label_140367bea:
                    
                    if (cond:145_1)
                    label_14036698b:
                        arg5 = _mm_shuffle_ps(zmm15, var_6b8_1, 0x32)
                        var_6b8_1 = _mm_shuffle_ps(var_6b8_1, arg5, 0x84)
                        
                        if (not(cond:155_1))
                        label_1403669ab:
                            arg5 = _mm_shuffle_ps(var_648, var_698, 0x32)
                            var_698 = _mm_shuffle_ps(var_698, arg5, 0x84)
                            
                            if (cond:164_1)
                                goto label_140367bfc
                            
                            goto label_1403669c7
                    else
                    label_140367bf0:
                        
                        if (cond:156_1)
                            goto label_1403669ab
                    
                    bool cond:179_1
                    bool cond:189_1
                    bool cond:190_1
                    bool cond:199_1
                    bool cond:200_1
                    bool cond:205_1
                    bool cond:214_1
                    bool cond:215_1
                    bool cond:222_1
                    bool cond:223_1
                    bool cond:180_1
                    
                    if (cond:163_1)
                    label_1403669c7:
                        arg5 = _mm_shuffle_ps(zmm0, var_688, 0x30)
                        var_688 = _mm_shuffle_ps(var_688, arg5, 0x84)
                        char temp27_1 = temp0_369 & 8
                        cond:179_1 = temp27_1 != 0
                        cond:180_1 = temp27_1 == 0
                        cond:189_1 = temp27_1 == 0
                        cond:190_1 = temp27_1 != 0
                        cond:199_1 = temp27_1 == 0
                        cond:200_1 = temp27_1 != 0
                        cond:205_1 = temp27_1 != 0
                        cond:214_1 = temp27_1 == 0
                        cond:215_1 = temp27_1 != 0
                        cond:222_1 = temp27_1 == 0
                        cond:223_1 = temp27_1 != 0
                        
                        if (temp27_1 != 0)
                        label_1403669e3:
                            arg5 = _mm_shuffle_ps(var_6a8_4, zmm9, 0x23)
                            zmm9 = _mm_shuffle_ps(zmm9, arg5, 0x24)
                            
                            if (cond:180_1)
                                goto label_140367c0c
                            
                            goto label_1403669f8
                    else
                    label_140367bfc:
                        char temp28_1 = temp0_369 & 8
                        cond:179_1 = temp28_1 != 0
                        cond:180_1 = temp28_1 == 0
                        cond:189_1 = temp28_1 == 0
                        cond:190_1 = temp28_1 != 0
                        cond:199_1 = temp28_1 == 0
                        cond:200_1 = temp28_1 != 0
                        cond:205_1 = temp28_1 != 0
                        cond:214_1 = temp28_1 == 0
                        cond:215_1 = temp28_1 != 0
                        cond:222_1 = temp28_1 == 0
                        cond:223_1 = temp28_1 != 0
                        
                        if (temp28_1 != 0)
                            goto label_1403669e3
                    
                    if (not(cond:179_1))
                    label_140367c0c:
                        zmm4 = var_6c8
                        
                        if (cond:190_1)
                            goto label_140366a0c
                        
                        goto label_140367c16
                    
                label_1403669f8:
                    arg7 = _mm_shuffle_ps(arg7, _mm_shuffle_ps(zmm10, arg7, 0x23), 0x24)
                    zmm4 = var_6c8
                    
                    if (cond:189_1)
                    label_140367c16:
                        zmm2 = var_5b8_1
                        zmm10 = var_5c8_1
                        var_638.o = zmm9
                        
                        if (not(cond:199_1))
                            zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(arg8, zmm4, 0x23), 0x24)
                    else
                    label_140366a0c:
                        arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(arg9, arg6, 0x23), 0x24)
                        zmm2 = var_5b8_1
                        zmm10 = var_5c8_1
                        var_638.o = zmm9
                        
                        if (cond:200_1)
                            zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(arg8, zmm4, 0x23), 0x24)
                    
                    arg8 = var_6b8_1
                    arg9 = var_698
                    arg10 = var_688
                    zmm9 = zmm3
                    
                    if (not(cond:205_1))
                        if (cond:215_1)
                            goto label_140366a4e
                        
                        goto label_140367c5e
                    
                    arg8 = _mm_shuffle_ps(arg8, _mm_shuffle_ps(zmm15, arg8, 0x23), 0x24)
                    
                    if (cond:214_1)
                    label_140367c5e:
                        
                        if (not(cond:222_1))
                            arg10 = _mm_shuffle_ps(arg10, _mm_shuffle_ps(zmm0, arg10, 0x20), 0x24)
                    else
                    label_140366a4e:
                        arg5 = _mm_shuffle_ps(var_648, arg9, 0x23)
                        arg9 = _mm_shuffle_ps(arg9, arg5, 0x24)
                        
                        if (cond:223_1)
                            arg10 = _mm_shuffle_ps(arg10, _mm_shuffle_ps(zmm0, arg10, 0x20), 0x24)
                    
                    zmm3 = var_618_1
                    _mm_movemask_ps(_mm_srai_epi32(zmm7, 0x1f) | zmm14)
                    zmm7 = var_658_1
                    rsi_1 = temp0_87
                    char temp36_1 = rsi_1 & 1
                    cond:11_1 = temp36_1 == 0
                    cond:12_1 = temp36_1 != 0
                    cond:13_1 = temp36_1 != 0
                    cond:18_1 = temp36_1 != 0
                    cond:19_1 = temp36_1 == 0
                    cond:24_1 = temp36_1 == 0
                    cond:25_1 = temp36_1 != 0
                    cond:33_1 = temp36_1 != 0
                    cond:34_1 = temp36_1 == 0
                    cond:41_1 = temp36_1 == 0
                    cond:42_1 = temp36_1 != 0
                    
                    if (temp36_1 != 0)
                        zmm11[0] = var_638.o.d
            else
                float temp0_310[0x4] = _mm_min_ps(var_5f8_1, arg6)
                arg5 = zx.o(0)
                char temp0_312 = _mm_movemask_ps(_mm_cmpeq_epi32(zmm14, zx.o(0)) ^ data_142d3f800)
                char temp0_313 = temp0_312 & 1
                
                if (temp0_313 == 0)
                    zmm9 = var_638.o
                    arg8 = zmm2
                    zmm3 = _mm_min_ps(var_618_1, zmm10)
                    
                    if (temp0_313 != 0)
                        zmm0.d = zmm3[0]
                        var_678 = zmm0
                else
                    zmm9 = var_638.o
                    zmm9[0] = temp0_310[0]
                    arg8 = zmm2
                    zmm3 = _mm_min_ps(var_618_1, zmm10)
                    
                    if (temp0_313 != 0)
                        zmm0.d = zmm3[0]
                        var_678 = zmm0
                
                zmm0 = _mm_min_ps(var_5c8_1, arg9)
                float var_5d8_2[0x4] = arg9
                
                if (temp0_313 == 0)
                    arg9 = _mm_max_ps(var_5e8_1, arg8)
                    
                    if (temp0_313 != 0)
                        goto label_14036786f
                    
                    goto label_14036771c
                
                arg5 = var_628.o
                arg5[0] = zmm0.d
                var_628.o = arg5
                arg9 = _mm_max_ps(var_5e8_1, arg8)
                
                if (temp0_313 != 0)
                label_14036786f:
                    arg5 = var_6c8
                    arg5[0] = arg9[0]
                    var_6c8 = arg5
                    zmm4 = _mm_max_ps(var_5b8_1, zmm15)
                    
                    if (temp0_313 == 0)
                        goto label_14036772b
                    
                    goto label_14036788e
                
            label_14036771c:
                zmm4 = _mm_max_ps(var_5b8_1, zmm15)
                
                if (temp0_313 != 0)
                label_14036788e:
                    arg5 = var_6b8_1
                    arg5[0] = zmm4[0]
                    var_6b8_1 = arg5
                    zmm2 = __maxps_xmmps_memps(var_668, var_648)
                    
                    if (temp0_313 != 0)
                    label_1403678af:
                        arg5 = var_698
                        arg5[0] = zmm2[0]
                        var_698 = arg5
                        
                        if (temp0_313 == 0)
                            goto label_14036773f
                        
                        goto label_1403678c3
                else
                label_14036772b:
                    zmm2 = __maxps_xmmps_memps(var_668, var_648)
                    
                    if (temp0_313 != 0)
                        goto label_1403678af
                
                bool cond:45_1
                bool cond:46_1
                bool cond:51_1
                bool cond:52_1
                bool cond:61_1
                bool cond:62_1
                bool cond:71_1
                bool cond:72_1
                bool cond:81_1
                bool cond:82_1
                bool cond:87_1
                bool cond:88_1
                
                if (temp0_313 == 0)
                label_14036773f:
                    char temp6_1 = temp0_312 & 2
                    cond:45_1 = temp6_1 != 0
                    cond:46_1 = temp6_1 == 0
                    cond:51_1 = temp6_1 == 0
                    cond:52_1 = temp6_1 != 0
                    cond:61_1 = temp6_1 != 0
                    cond:62_1 = temp6_1 == 0
                    cond:71_1 = temp6_1 == 0
                    cond:72_1 = temp6_1 != 0
                    cond:81_1 = temp6_1 != 0
                    cond:82_1 = temp6_1 == 0
                    cond:87_1 = temp6_1 == 0
                    cond:88_1 = temp6_1 != 0
                    
                    if (temp6_1 != 0)
                        goto label_1403678e4
                    
                    goto label_140367749
                
            label_1403678c3:
                arg5 = var_688
                arg5[0] = zmm7[0]
                var_688 = arg5
                char temp5_1 = temp0_312 & 2
                cond:45_1 = temp5_1 != 0
                cond:46_1 = temp5_1 == 0
                cond:51_1 = temp5_1 == 0
                cond:52_1 = temp5_1 != 0
                cond:61_1 = temp5_1 != 0
                cond:62_1 = temp5_1 == 0
                cond:71_1 = temp5_1 == 0
                cond:72_1 = temp5_1 != 0
                cond:81_1 = temp5_1 != 0
                cond:82_1 = temp5_1 == 0
                cond:87_1 = temp5_1 == 0
                cond:88_1 = temp5_1 != 0
                
                if (temp5_1 != 0)
                label_1403678e4:
                    arg5 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_310, zmm9, 1), zmm9, 0xe2)
                    zmm9 = arg5
                    
                    if (cond:46_1)
                        goto label_14036774f
                    
                    goto label_1403678f6
                
            label_140367749:
                
                if (not(cond:45_1))
                label_14036774f:
                    
                    if (cond:52_1)
                        goto label_14036791c
                    
                    goto label_140367755
                
            label_1403678f6:
                arg6 = zmm15
                zmm15 = var_678
                arg5 = _mm_shuffle_ps(_mm_shuffle_ps(zmm3, zmm15, 1), zmm15, 0xe2)
                zmm15 = arg6
                var_678 = arg5
                
                if (not(cond:51_1))
                label_14036791c:
                    arg6 = var_628.o
                    arg5 = _mm_shuffle_ps(_mm_shuffle_ps(zmm0, arg6, 1), arg6, 0xe2)
                    var_628.o = arg5
                    
                    if (cond:62_1)
                        goto label_14036775b
                    
                    goto label_14036793e
                
            label_140367755:
                
                if (not(cond:61_1))
                label_14036775b:
                    
                    if (cond:72_1)
                        goto label_140367957
                    
                    goto label_140367761
                
            label_14036793e:
                arg6 = var_6c8
                arg5 = _mm_shuffle_ps(_mm_shuffle_ps(arg9, arg6, 1), arg6, 0xe2)
                var_6c8 = arg5
                
                if (not(cond:71_1))
                label_140367957:
                    arg6 = var_6b8_1
                    arg5 = _mm_shuffle_ps(_mm_shuffle_ps(zmm4, arg6, 1), arg6, 0xe2)
                    var_6b8_1 = arg5
                    
                    if (cond:82_1)
                        goto label_140367767
                    
                    goto label_140367972
                
            label_140367761:
                
                if (not(cond:81_1))
                label_140367767:
                    
                    if (cond:88_1)
                        goto label_14036798d
                    
                    goto label_14036776d
                
            label_140367972:
                arg6 = var_698
                arg5 = _mm_shuffle_ps(_mm_shuffle_ps(zmm2, arg6, 1), arg6, 0xe2)
                var_698 = arg5
                bool cond:105_1
                bool cond:106_1
                bool cond:111_1
                bool cond:112_1
                bool cond:121_1
                bool cond:122_1
                bool cond:131_1
                bool cond:132_1
                bool cond:141_1
                bool cond:142_1
                bool cond:147_1
                bool cond:148_1
                
                if (not(cond:87_1))
                label_14036798d:
                    arg6 = var_688
                    arg5 = _mm_shuffle_ps(_mm_shuffle_ps(zmm7, arg6, 1), arg6, 0xe2)
                    var_688 = arg5
                    char temp16_1 = temp0_312 & 4
                    cond:105_1 = temp16_1 == 0
                    cond:106_1 = temp16_1 != 0
                    cond:111_1 = temp16_1 != 0
                    cond:112_1 = temp16_1 == 0
                    cond:121_1 = temp16_1 == 0
                    cond:122_1 = temp16_1 != 0
                    cond:131_1 = temp16_1 != 0
                    cond:132_1 = temp16_1 == 0
                    cond:141_1 = temp16_1 == 0
                    cond:142_1 = temp16_1 != 0
                    cond:147_1 = temp16_1 != 0
                    cond:148_1 = temp16_1 == 0
                    
                    if (temp16_1 == 0)
                        goto label_140367777
                    
                    goto label_1403679ad
                
            label_14036776d:
                char temp15_1 = temp0_312 & 4
                cond:105_1 = temp15_1 == 0
                cond:106_1 = temp15_1 != 0
                cond:111_1 = temp15_1 != 0
                cond:112_1 = temp15_1 == 0
                cond:121_1 = temp15_1 == 0
                cond:122_1 = temp15_1 != 0
                cond:131_1 = temp15_1 != 0
                cond:132_1 = temp15_1 == 0
                cond:141_1 = temp15_1 == 0
                cond:142_1 = temp15_1 != 0
                cond:147_1 = temp15_1 != 0
                cond:148_1 = temp15_1 == 0
                
                if (temp15_1 == 0)
                label_140367777:
                    
                    if (cond:106_1)
                        goto label_1403679c0
                    
                    goto label_14036777d
                
            label_1403679ad:
                arg5 = _mm_shuffle_ps(temp0_310, zmm9, 0x32)
                zmm9 = _mm_shuffle_ps(zmm9, arg5, 0x84)
                
                if (not(cond:105_1))
                label_1403679c0:
                    arg6 = zmm7
                    zmm7 = var_678
                    arg5 = _mm_shuffle_ps(zmm3, zmm7, 0x32)
                    var_678 = _mm_shuffle_ps(zmm7, arg5, 0x84)
                    zmm7 = arg6
                    
                    if (cond:112_1)
                        goto label_140367783
                    
                    goto label_1403679e1
                
            label_14036777d:
                
                if (not(cond:111_1))
                label_140367783:
                    
                    if (cond:122_1)
                        goto label_140367a03
                    
                    goto label_140367789
                
            label_1403679e1:
                arg6 = var_628.o
                arg5 = _mm_shuffle_ps(zmm0, arg6, 0x32)
                var_628.o = _mm_shuffle_ps(arg6, arg5, 0x84)
                
                if (not(cond:121_1))
                label_140367a03:
                    arg6 = var_6c8
                    arg5 = _mm_shuffle_ps(arg9, arg6, 0x32)
                    var_6c8 = _mm_shuffle_ps(arg6, arg5, 0x84)
                    
                    if (cond:132_1)
                        goto label_14036778f
                    
                    goto label_140367a1c
                
            label_140367789:
                
                if (cond:131_1)
                label_140367a1c:
                    arg6 = var_6b8_1
                    arg5 = _mm_shuffle_ps(zmm4, arg6, 0x32)
                    var_6b8_1 = _mm_shuffle_ps(arg6, arg5, 0x84)
                    
                    if (not(cond:141_1))
                    label_140367a37:
                        arg6 = var_698
                        arg5 = _mm_shuffle_ps(zmm2, arg6, 0x32)
                        var_698 = _mm_shuffle_ps(arg6, arg5, 0x84)
                        
                        if (cond:148_1)
                            goto label_14036779b
                        
                        goto label_140367a52
                else
                label_14036778f:
                    
                    if (cond:142_1)
                        goto label_140367a37
                
                bool cond:165_1
                bool cond:166_1
                bool cond:171_1
                bool cond:172_1
                bool cond:181_1
                bool cond:182_1
                bool cond:191_1
                bool cond:192_1
                bool cond:201_1
                bool cond:202_1
                bool cond:206_1
                bool cond:207_1
                
                if (not(cond:147_1))
                label_14036779b:
                    char temp26_1 = temp0_312 & 8
                    cond:165_1 = temp26_1 != 0
                    cond:166_1 = temp26_1 == 0
                    cond:171_1 = temp26_1 == 0
                    cond:172_1 = temp26_1 != 0
                    cond:181_1 = temp26_1 != 0
                    cond:182_1 = temp26_1 == 0
                    cond:191_1 = temp26_1 == 0
                    cond:192_1 = temp26_1 != 0
                    cond:201_1 = temp26_1 != 0
                    cond:202_1 = temp26_1 == 0
                    cond:206_1 = temp26_1 == 0
                    cond:207_1 = temp26_1 != 0
                    
                    if (temp26_1 != 0)
                        goto label_140367a73
                    
                    goto label_1403677a5
                
            label_140367a52:
                arg6 = var_688
                arg5 = _mm_shuffle_ps(zmm7, arg6, 0x32)
                var_688 = _mm_shuffle_ps(arg6, arg5, 0x84)
                char temp25_1 = temp0_312 & 8
                cond:165_1 = temp25_1 != 0
                cond:166_1 = temp25_1 == 0
                cond:171_1 = temp25_1 == 0
                cond:172_1 = temp25_1 != 0
                cond:181_1 = temp25_1 != 0
                cond:182_1 = temp25_1 == 0
                cond:191_1 = temp25_1 == 0
                cond:192_1 = temp25_1 != 0
                cond:201_1 = temp25_1 != 0
                cond:202_1 = temp25_1 == 0
                cond:206_1 = temp25_1 == 0
                cond:207_1 = temp25_1 != 0
                
                if (temp25_1 != 0)
                label_140367a73:
                    zmm9 = _mm_shuffle_ps(zmm9, _mm_shuffle_ps(temp0_310, zmm9, 0x23), 0x24)
                    arg6 = var_628.o
                    
                    if (cond:166_1)
                        goto label_1403677b3
                    
                    goto label_140367a86
                
            label_1403677a5:
                arg6 = var_628.o
                
                if (cond:165_1)
                label_140367a86:
                    arg5 = var_678
                    arg5 = _mm_shuffle_ps(arg5, _mm_shuffle_ps(zmm3, arg5, 0x23), 0x24)
                    var_678 = arg5
                    
                    if (not(cond:171_1))
                    label_140367aa2:
                        arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(zmm0, arg6, 0x23), 0x24)
                        
                        if (cond:182_1)
                            goto label_1403677bf
                        
                        goto label_140367aac
                else
                label_1403677b3:
                    
                    if (cond:172_1)
                        goto label_140367aa2
                
                if (not(cond:181_1))
                label_1403677bf:
                    zmm3 = zx.o(0)
                    arg9 = var_5d8_2
                    
                    if (cond:192_1)
                        goto label_140367ad0
                    
                    goto label_1403677d1
                
            label_140367aac:
                zmm0 = var_6c8
                var_6c8 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(arg9, zmm0, 0x23), 0x24)
                zmm3 = zx.o(0)
                arg9 = var_5d8_2
                
                if (not(cond:191_1))
                label_140367ad0:
                    zmm0 = var_6b8_1
                    var_6b8_1 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm4, zmm0, 0x23), 0x24)
                    
                    if (cond:202_1)
                        goto label_1403677d7
                    
                    goto label_140367ae8
                
            label_1403677d1:
                
                if (not(cond:201_1))
                label_1403677d7:
                    
                    if (cond:207_1)
                        goto label_140367b03
                    
                    goto label_1403677dd
                
            label_140367ae8:
                zmm0 = var_698
                var_698 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm2, zmm0, 0x23), 0x24)
                
                if (cond:206_1)
                label_1403677dd:
                    
                    if (temp0_87 != temp0_309)
                        zmm0 = _mm_srai_epi32(temp0_308, 0x1f)
                        goto label_140367b27
                else
                label_140367b03:
                    arg5 = var_688
                    arg5 = _mm_shuffle_ps(arg5, _mm_shuffle_ps(zmm7, arg5, 0x23), 0x24)
                    var_688 = arg5
                    
                    if (temp0_87 != temp0_309)
                        zmm0 = _mm_srai_epi32(temp0_308, 0x1f)
                        goto label_140367b27
                
                var_638.o = zmm9
                zmm2 = var_5b8_1
                zmm10 = var_5c8_1
                zmm9 = var_5e8_1
                zmm3 = var_618_1
                zmm11 = var_5f8_1
                arg7 = var_678
                zmm4 = var_6c8
                arg8 = var_6b8_1
                arg9 = var_698
                arg10 = var_688
                rsi_1 = temp0_87
                char temp35_1 = rsi_1 & 1
                cond:11_1 = temp35_1 == 0
                cond:12_1 = temp35_1 != 0
                cond:13_1 = temp35_1 != 0
                cond:18_1 = temp35_1 != 0
                cond:19_1 = temp35_1 == 0
                cond:24_1 = temp35_1 == 0
                cond:25_1 = temp35_1 != 0
                cond:33_1 = temp35_1 != 0
                cond:34_1 = temp35_1 == 0
                cond:41_1 = temp35_1 == 0
                cond:42_1 = temp35_1 != 0
                
                if (temp35_1 != 0)
                    zmm11[0] = var_638.o.d
            
            if (not(cond:13_1))
                if (cond:12_1)
                    goto label_14036654a
                
                goto label_140367cae
            
            zmm3[0] = arg7[0]
            
            if (not(cond:11_1))
            label_14036654a:
                zmm10[0] = arg6[0]
                
                if (cond:19_1)
                    goto label_140367cb4
                
                goto label_140366555
            
        label_140367cae:
            
            if (not(cond:18_1))
            label_140367cb4:
                
                if (cond:25_1)
                    goto label_140366560
                
                goto label_140367cba
            
        label_140366555:
            zmm9[0] = zmm4[0]
            
            if (not(cond:24_1))
            label_140366560:
                zmm2[0] = arg8[0]
                
                if (cond:34_1)
                    goto label_140367cc0
                
                goto label_140366570
            
        label_140367cba:
            
            if (not(cond:33_1))
            label_140367cc0:
                
                if (cond:42_1)
                    goto label_140366580
                
                goto label_140367cc6
            
        label_140366570:
            zmm0.d = arg9[0]
            var_668 = zmm0
            bool cond:57_1
            bool cond:58_1
            bool cond:67_1
            bool cond:68_1
            bool cond:77_1
            bool cond:78_1
            bool cond:83_1
            bool cond:84_1
            bool cond:93_1
            bool cond:94_1
            bool cond:101_1
            bool cond:102_1
            
            if (not(cond:41_1))
            label_140366580:
                zmm7[0] = arg10[0]
                char temp10_1 = rsi_1 & 2
                cond:57_1 = temp10_1 == 0
                cond:58_1 = temp10_1 != 0
                cond:67_1 = temp10_1 != 0
                cond:68_1 = temp10_1 == 0
                cond:77_1 = temp10_1 == 0
                cond:78_1 = temp10_1 != 0
                cond:83_1 = temp10_1 != 0
                cond:84_1 = temp10_1 == 0
                cond:93_1 = temp10_1 == 0
                cond:94_1 = temp10_1 != 0
                cond:101_1 = temp10_1 != 0
                cond:102_1 = temp10_1 == 0
                
                if (temp10_1 == 0)
                    goto label_140367cd0
                
                goto label_1403665a1
            
        label_140367cc6:
            char temp9_1 = rsi_1 & 2
            cond:57_1 = temp9_1 == 0
            cond:58_1 = temp9_1 != 0
            cond:67_1 = temp9_1 != 0
            cond:68_1 = temp9_1 == 0
            cond:77_1 = temp9_1 == 0
            cond:78_1 = temp9_1 != 0
            cond:83_1 = temp9_1 != 0
            cond:84_1 = temp9_1 == 0
            cond:93_1 = temp9_1 == 0
            cond:94_1 = temp9_1 != 0
            cond:101_1 = temp9_1 != 0
            cond:102_1 = temp9_1 == 0
            
            if (temp9_1 == 0)
            label_140367cd0:
                
                if (cond:58_1)
                    goto label_1403665b6
                
                goto label_140367cd6
            
        label_1403665a1:
            zmm11 = _mm_shuffle_ps(_mm_shuffle_ps(var_638.o, zmm11, 1), zmm11, 0xe2)
            
            if (not(cond:57_1))
            label_1403665b6:
                zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(arg7, zmm3, 1), zmm3, 0xe2)
                
                if (cond:68_1)
                    goto label_140367cdc
                
                goto label_1403665cc
            
        label_140367cd6:
            
            if (not(cond:67_1))
            label_140367cdc:
                
                if (cond:78_1)
                    goto label_1403665e3
                
                goto label_140367ce2
            
        label_1403665cc:
            zmm10 = _mm_shuffle_ps(_mm_shuffle_ps(arg6, zmm10, 1), zmm10, 0xe2)
            
            if (not(cond:77_1))
            label_1403665e3:
                zmm9 = _mm_shuffle_ps(_mm_shuffle_ps(zmm4, zmm9, 1), zmm9, 0xe2)
                
                if (cond:84_1)
                    goto label_140367ce8
                
                goto label_1403665f9
            
        label_140367ce2:
            
            if (cond:83_1)
            label_1403665f9:
                zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(arg8, zmm2, 1), zmm2, 0xe2)
                
                if (not(cond:93_1))
                label_140366606:
                    arg5 = var_668
                    var_668 = _mm_shuffle_ps(_mm_shuffle_ps(arg9, arg5, 1), arg5, 0xe2)
                    
                    if (cond:102_1)
                        goto label_140367cf4
                    
                    goto label_14036662a
            else
            label_140367ce8:
                
                if (cond:94_1)
                    goto label_140366606
            
            bool cond:117_1
            bool cond:118_1
            bool cond:127_1
            bool cond:128_1
            bool cond:137_1
            bool cond:138_1
            bool cond:143_1
            bool cond:144_1
            bool cond:153_1
            bool cond:154_1
            bool cond:161_1
            bool cond:162_1
            
            if (not(cond:101_1))
            label_140367cf4:
                char temp20_1 = rsi_1 & 4
                cond:117_1 = temp20_1 != 0
                cond:118_1 = temp20_1 == 0
                cond:127_1 = temp20_1 == 0
                cond:128_1 = temp20_1 != 0
                cond:137_1 = temp20_1 != 0
                cond:138_1 = temp20_1 == 0
                cond:143_1 = temp20_1 == 0
                cond:144_1 = temp20_1 != 0
                cond:153_1 = temp20_1 != 0
                cond:154_1 = temp20_1 == 0
                cond:161_1 = temp20_1 == 0
                cond:162_1 = temp20_1 != 0
                
                if (temp20_1 != 0)
                    goto label_140366644
                
                goto label_140367cfe
            
        label_14036662a:
            zmm7 = _mm_shuffle_ps(_mm_shuffle_ps(arg10, zmm7, 1), zmm7, 0xe2)
            char temp19_1 = rsi_1 & 4
            cond:117_1 = temp19_1 != 0
            cond:118_1 = temp19_1 == 0
            cond:127_1 = temp19_1 == 0
            cond:128_1 = temp19_1 != 0
            cond:137_1 = temp19_1 != 0
            cond:138_1 = temp19_1 == 0
            cond:143_1 = temp19_1 == 0
            cond:144_1 = temp19_1 != 0
            cond:153_1 = temp19_1 != 0
            cond:154_1 = temp19_1 == 0
            cond:161_1 = temp19_1 == 0
            cond:162_1 = temp19_1 != 0
            
            if (temp19_1 != 0)
            label_140366644:
                zmm11 = _mm_shuffle_ps(zmm11, _mm_shuffle_ps(var_638.o, zmm11, 0x32), 0x84)
                
                if (cond:118_1)
                    goto label_140367d04
                
                goto label_140366656
            
        label_140367cfe:
            
            if (not(cond:117_1))
            label_140367d04:
                
                if (cond:128_1)
                    goto label_140366668
                
                goto label_140367d0a
            
        label_140366656:
            zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(arg7, zmm3, 0x32), 0x84)
            
            if (not(cond:127_1))
            label_140366668:
                zmm10 = _mm_shuffle_ps(zmm10, _mm_shuffle_ps(arg6, zmm10, 0x32), 0x84)
                
                if (cond:138_1)
                    goto label_140367d10
                
                goto label_14036667b
            
        label_140367d0a:
            
            if (not(cond:137_1))
            label_140367d10:
                
                if (cond:144_1)
                    goto label_14036668e
                
                goto label_140367d16
            
        label_14036667b:
            zmm9 = _mm_shuffle_ps(zmm9, _mm_shuffle_ps(zmm4, zmm9, 0x32), 0x84)
            
            if (not(cond:143_1))
            label_14036668e:
                zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(arg8, zmm2, 0x32), 0x84)
                
                if (cond:154_1)
                    goto label_140367d1c
                
                goto label_14036669c
            
        label_140367d16:
            
            if (not(cond:153_1))
            label_140367d1c:
                
                if (cond:162_1)
                    goto label_1403666bc
                
                goto label_140367d22
            
        label_14036669c:
            arg5 = var_668
            arg5 = _mm_shuffle_ps(arg5, _mm_shuffle_ps(arg9, arg5, 0x32), 0x84)
            var_668 = arg5
            bool cond:177_1
            bool cond:178_1
            bool cond:187_1
            bool cond:188_1
            bool cond:197_1
            bool cond:198_1
            bool cond:203_1
            bool cond:204_1
            bool cond:212_1
            bool cond:213_1
            bool cond:220_1
            bool cond:221_1
            
            if (not(cond:161_1))
            label_1403666bc:
                zmm7 = _mm_shuffle_ps(zmm7, _mm_shuffle_ps(arg10, zmm7, 0x32), 0x84)
                char temp30_1 = rsi_1 & 8
                cond:177_1 = temp30_1 == 0
                cond:178_1 = temp30_1 != 0
                cond:187_1 = temp30_1 != 0
                cond:188_1 = temp30_1 == 0
                cond:197_1 = temp30_1 == 0
                cond:198_1 = temp30_1 != 0
                cond:203_1 = temp30_1 != 0
                cond:204_1 = temp30_1 == 0
                cond:212_1 = temp30_1 == 0
                cond:213_1 = temp30_1 != 0
                cond:220_1 = temp30_1 != 0
                cond:221_1 = temp30_1 == 0
                
                if (temp30_1 == 0)
                    goto label_140367d2c
                
                goto label_1403666d7
            
        label_140367d22:
            char temp29_1 = rsi_1 & 8
            cond:177_1 = temp29_1 == 0
            cond:178_1 = temp29_1 != 0
            cond:187_1 = temp29_1 != 0
            cond:188_1 = temp29_1 == 0
            cond:197_1 = temp29_1 == 0
            cond:198_1 = temp29_1 != 0
            cond:203_1 = temp29_1 != 0
            cond:204_1 = temp29_1 == 0
            cond:212_1 = temp29_1 == 0
            cond:213_1 = temp29_1 != 0
            cond:220_1 = temp29_1 != 0
            cond:221_1 = temp29_1 == 0
            
            if (temp29_1 == 0)
            label_140367d2c:
                
                if (cond:178_1)
                    goto label_1403666e9
                
                goto label_140367d32
            
        label_1403666d7:
            zmm11 = _mm_shuffle_ps(zmm11, _mm_shuffle_ps(var_638.o, zmm11, 0x23), 0x24)
            
            if (not(cond:177_1))
            label_1403666e9:
                zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(arg7, zmm3, 0x23), 0x24)
                
                if (cond:188_1)
                    goto label_140367d38
                
                goto label_1403666fb
            
        label_140367d32:
            
            if (not(cond:187_1))
            label_140367d38:
                
                if (cond:198_1)
                    goto label_14036670e
                
                goto label_140367d3e
            
        label_1403666fb:
            zmm10 = _mm_shuffle_ps(zmm10, _mm_shuffle_ps(arg6, zmm10, 0x23), 0x24)
            
            if (not(cond:197_1))
            label_14036670e:
                zmm9 = _mm_shuffle_ps(zmm9, _mm_shuffle_ps(zmm4, zmm9, 0x23), 0x24)
                
                if (cond:204_1)
                    goto label_140367d44
                
                goto label_140366721
            
        label_140367d3e:
            
            if (not(cond:203_1))
            label_140367d44:
                
                if (cond:213_1)
                    goto label_14036672f
                
                goto label_140367d4a
            
        label_140366721:
            zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(arg8, zmm2, 0x23), 0x24)
            
            if (cond:212_1)
            label_140367d4a:
                
                if (not(cond:220_1))
                label_140367d50:
                    r11 = zx.q(r11.d + 4)
                    
                    if (r11.d s>= r15_4)
                        break
                    
                    continue
            else
            label_14036672f:
                arg5 = var_668
                arg5 = _mm_shuffle_ps(arg5, _mm_shuffle_ps(arg9, arg5, 0x23), 0x24)
                var_668 = arg5
                
                if (cond:221_1)
                    goto label_140367d50
            
            zmm7 = _mm_shuffle_ps(zmm7, _mm_shuffle_ps(arg10, zmm7, 0x23), 0x24)
            r11 = zx.q(r11.d + 4)
            
            if (r11.d s>= r15_4)
                break
    
    if (r11.d s< arg13)
        goto label_140367d8e
zmm0 = _mm_shuffle_ps(zmm9, zmm10, 0)
int32_t var_528[0x4] = _mm_shuffle_ps(_mm_unpacklo_ps(zmm11, zmm3[0].q), zmm0, 0x24)
int32_t var_50c = _mm_shuffle_ps(zmm11, zmm11, 0xe5).d
int32_t var_4f0 = _mm_unpackhi_pd(zmm11, zmm11[0].q).d
float var_4d4 = _mm_shuffle_ps(zmm11, zmm11, 0xe7)[0]
zmm0 = _mm_unpacklo_ps(zmm9, zmm2[0].q)
int32_t var_508[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(zmm10, zmm3, 0x11), zmm0, 0xe2)
zmm0 = _mm_shuffle_ps(zmm2, zmm9, 0x22)
int32_t var_4ec[0x4] = _mm_shuffle_ps(_mm_unpackhi_ps(zmm3, zmm10), zmm0, 0x24)
float temp0_651[0x4] = _mm_unpackhi_ps(zmm9, zmm2)
int32_t var_4d0[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(zmm10, zmm3, 0x33), temp0_651, 0xe2)
float var_518 = zmm2[0]
arg5 = var_668
int32_t var_514 = arg5[0]
int32_t var_4f8 = _mm_shuffle_ps(arg5, arg5, 0xe5).d
int32_t var_4dc = _mm_unpackhi_pd(arg5, arg5[0].q).d
int32_t var_4c0 = _mm_shuffle_ps(arg5, arg5, 0xe7)[0]
int104_t var_558 = zmm7[0].13
arg1.b = var_558.b
arg2.b = var_558:4.b
char var_510[0x4]
var_510[0] = arg1.b
char var_4f4 = arg2.b
arg1.b = var_558:8.b
char var_4d8 = arg1.b
arg1.b = var_558:0xc.b
char var_4bc = arg1.b

for (uint64_t i_1 = 0xf; i_1 != 0; )
    uint64_t rdx_2
    uint64_t rflags_1
    
    if (i_1 == 0)
        rdx_2 = 0x40
    else
        rdx_2, rflags_1 = _bit_scan_forward(i_1)
    i_1 &= not.q(1 << (rdx_2 u% 0x40))
    uint64_t rbp_12 = rdx_2 * 0x1c
    char rbx_7 = arg12[6].b
    char rdx_3 = var_510[rbp_12]
    
    if (rbx_7 != 0 && rdx_3 != 0)
        arg5 = arg12[2]
        float temp0_657[0x4] = _mm_unpacklo_ps(var_6c8[rdx_2 * 7 + 0x68], var_528[1 + rdx_2 * 7].q)
        zmm0 = _mm_min_ps(*arg12 | arg5[0].q << 0x40, 
            temp0_657[0].q | var_528[2 + rdx_2 * 7].q << 0x40)
        arg5 = _mm_shuffle_ps(zmm0, zmm0, 0xe5)
        zmm2 = _mm_unpackhi_pd(zmm0, zmm0.q)
        float temp0_661[0x4] = _mm_max_ps(zx.o(*(arg12 + 0xc))[0].q | arg12[5][0].q << 0x40, 
            zx.o(*(&var_528[3] + rbp_12))[0].q | (&var_514)[rdx_2 * 7][0].q << 0x40)
        zmm3 = temp0_661
        zmm4 = _mm_shuffle_ps(zmm3, zmm3, 0xe5)
        arg6 = _mm_unpackhi_pd(zmm3, zmm3[0].q)
    else if (rdx_3 == 0)
        rbx_7 = arg12[6].b
        arg6 = arg12[5]
        zmm4 = arg12[4]
        zmm3 = arg12[3]
        zmm2 = arg12[2]
        zmm0 = *arg12
        arg5 = arg12[1]
    else
        zmm0 = var_6c8[rdx_2 * 7 + 0x68]
        arg5 = var_528[1 + rdx_2 * 7]
        zmm2 = var_528[2 + rdx_2 * 7]
        zmm3 = var_528[3 + rdx_2 * 7]
        zmm4 = (&var_518)[rdx_2 * 7]
        arg6 = (&var_514)[rdx_2 * 7]
        rbx_7 = rdx_3
    
    *arg12 = zmm0.d
    arg12[1] = arg5[0]
    arg12[2] = zmm2[0]
    arg12[3] = zmm3[0]
    arg12[4] = zmm4[0]
    arg12[5] = arg6[0]
    arg12[6].b = rbx_7

return arg12
