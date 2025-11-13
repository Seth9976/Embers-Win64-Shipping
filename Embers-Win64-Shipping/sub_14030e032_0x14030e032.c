// 函数: sub_14030e032
// 地址: 0x14030e032
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm0[0x4] = arg22 & arg17
int64_t rcx = sx.q(zmm0[0])
void* rax_1 = arg12 + rcx
int32_t zmm11[0x4] = arg21
int64_t rdx = sx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0])
void* rcx_2 = arg12 + rdx
float temp0_1[0x4] = _mm_unpacklo_ps(*(arg12 + rcx), (*(arg12 + rdx))[0].q)
int64_t rbx = sx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
void* rdx_2 = arg12 + rbx
int64_t rbp = sx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0])
void* rbx_2 = arg12 + rbp
uint32_t zmm2[0x4] = _mm_unpacklo_ps(*(arg12 + rbx), (*(arg12 + rbp))[0].q)
float zmm10[0x4] = temp0_1[0].q | zmm2[0].q << 0x40
float temp0_5[0x4] = _mm_unpacklo_ps(*(arg10 + rax_1), (*(arg11 + rcx_2))[0].q)
zmm0 = _mm_unpacklo_ps(*(arg8 + rdx_2), (*(arg7 + rbx_2))[0].q)
float arg_40[0x4] = temp0_5[0].q | zmm0[0].q << 0x40
zmm2 = data_142fc95f0 & arg17
int32_t arg_a0[0x4] = arg16
float zmm4[0x4] = *(zx.q(_mm_shuffle_epi32(zmm2, 0xe5)[0]) + rcx_2)
float temp0_8[0x4] = _mm_unpacklo_ps(*(zx.q(zmm2[0]) + rax_1), zmm4[0].q)
float temp0_11[0x4] = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm2, 0x4e)[0]) + rdx_2), 
    (*(zx.q(_mm_shuffle_epi32(zmm2, 0xe7)[0]) + rbx_2))[0].q)
float zmm7[0x4] = temp0_8[0].q | temp0_11[0].q << 0x40
zmm2 = data_143442650 & arg17
float temp0_13[0x4] = _mm_unpacklo_ps(*(zx.q(zmm2[0]) + rax_1), 
    (*(zx.q(_mm_shuffle_epi32(zmm2, 0xe5)[0]) + rcx_2))[0].q)
float temp0_16[0x4] = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm2, 0x4e)[0]) + rdx_2), 
    (*(zx.q(_mm_shuffle_epi32(zmm2, 0xe7)[0]) + rbx_2))[0].q)
arg21 = temp0_13[0].q | temp0_16[0].q << 0x40
zmm4 = data_143442660 & arg17
arg16 = arg15
zmm2 = _mm_unpacklo_ps(*(zx.q(zmm4[0]) + rax_1), 
    (*(zx.q(_mm_shuffle_epi32(zmm4, 0xe5)[0]) + rcx_2))[0].q)
arg15 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm4, 0x4e)[0]) + rdx_2), 
    (*(zx.q(_mm_shuffle_epi32(zmm4, 0xe7)[0]) + rbx_2))[0].q)
zmm2 = zmm2[0].q | arg15[0].q << 0x40
arg15 = data_143442670 & arg17
float temp0_23[0x4] = _mm_unpacklo_ps(*(zx.q(arg15[0]) + rax_1), 
    (*(zx.q(_mm_shuffle_epi32(arg15, 0xe5)[0]) + rcx_2))[0].q)
zmm0 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(arg15, 0x4e)[0]) + rdx_2), 
    (*(zx.q(_mm_shuffle_epi32(arg15, 0xe7)[0]) + rbx_2))[0].q)
zmm4 = temp0_23[0].q | zmm0[0].q << 0x40
int32_t temp0_27[0x4] = _mm_add_epi64(arg18, zmm11)
int32_t temp0_29[0x4] = _mm_add_epi64(_mm_add_epi64(arg19, arg16), arg13)
int32_t temp0_30[0x4] = _mm_add_epi64(temp0_27, arg2)
arg2 = _mm_shuffle_epi32(arg17, 0x50) & temp0_30
zmm0 = _mm_shuffle_epi32(arg17, 0xfa) & temp0_29
int64_t rax_5 = arg2[0].q
int64_t rcx_3 = _mm_shuffle_epi32(arg2, 0x4e)[0].q
int64_t rdx_3 = zmm0[0].q
void* rbp_14 = _mm_shuffle_epi32(zmm0, 0x4e)[0].q
zmm0 = _mm_unpacklo_epi64(_mm_unpacklo_epi32(zx.o(*(arg12 + rax_5)), zx.o(*(arg12 + rcx_3))[0].q), 
    _mm_unpacklo_epi32(zx.o(*(arg12 + rdx_3)), zx.o(*(arg12 + rbp_14))[0].q)[0].q)
arg2 = zmm0
arg13 = _mm_srli_epi32(zmm0, 0xa) & data_143442480
zmm0 &= data_143442680
arg2 = _mm_srli_epi32(arg2, 0x15)
arg15 = _mm_add_ps(
    _mm_mul_ps(
        __divps_xmmps_memps(_mm_cvtepi32_ps(__paddd_xmmdq_memdq(zmm0, data_143442490)), 
            data_1434426a0), 
        arg21), 
    zmm10)
zmm0 = data_143442440
float temp0_46[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(arg13, zmm0))
arg13 = data_143442690
arg21 = __addps_xmmps_memps(_mm_mul_ps(_mm_div_ps(temp0_46, arg13), zmm2), arg_40)
zmm10 = _mm_add_ps(_mm_mul_ps(_mm_div_ps(_mm_cvtepi32_ps(_mm_add_epi32(arg2, zmm0)), arg13), zmm4), 
    zmm7)
arg16 = arg_a0
zmm11 = __punpckldq_xmmdq_memdq(arg29, arg31)
arg20 = _mm_unpacklo_epi32(arg20, arg30[0].q)
arg14 = _mm_cmpeq_epi32(arg14, arg16) & not.o(arg17)
uint64_t rdx_4 = zx.q(_mm_movemask_ps(arg14))

if (rdx_4.b != 0)
    arg2 = zx.o(0)
    char rax_43
    
    if (arg4 u> 6)
    label_14030e98f:
        rax_43 = rdx_4.b
        zmm0 = zx.o(0)
        zmm2 = __return_addr.o
        
        if ((rax_43 & 4) == 0)
            goto label_14030e9c4
        
    label_14030e9be:
        arg2 = _mm_shuffle_ps(arg2, _mm_shuffle_ps(zx.o(0), arg2, 0x30), 0x84)
    label_14030e9c4:
        
        if ((rax_43 & 8) != 0)
            arg2 = _mm_shuffle_ps(arg2, _mm_shuffle_ps(zmm0, arg2, 0x20), 0x24)
        
        arg13 = arg2
        arg14 = arg2
        goto label_14030e9d4
    
    int32_t temp0_64[0x4] = _mm_unpacklo_epi32(
        _mm_shuffle_epi32(_mm_mul_epu32(arg28, arg16), 0xe8), 
        _mm_shuffle_epi32(__pmuludq_xmmdq_memdq(_mm_shuffle_epi32(arg16, 0xf5), arg23), 0xe8)[0].q)
    zmm0 = _mm_cmpgt_epi32(zx.o(0), temp0_64)
    zmm4 = _mm_shuffle_epi32(temp0_64, 0x4e)
    int32_t temp0_67[0x4] = _mm_unpacklo_epi32(temp0_64, zmm0[0].q)
    zmm4 = _mm_unpacklo_epi32(zmm4, _mm_cmpgt_epi32(zx.o(0), zmm4)[0].q)
    uint32_t arg_20[0x4]
    
    switch (arg5)
        case 0, 1
            arg29 = zmm11
            arg_20 = arg17
            arg18 = __paddq_xmmdq_memdq(arg18, arg26)
            arg19 = _mm_add_epi64(__paddq_xmmdq_memdq(arg19, arg27), zmm4)
            arg18 = _mm_add_epi64(arg18, temp0_67)
            zmm4 = _mm_shuffle_epi32(arg14, 0x50)
            arg18 &= zmm4
            arg14 = _mm_shuffle_epi32(arg14, 0xfa)
            arg19 &= arg14
            int64_t rcx_6 = _mm_shuffle_epi32(arg18, 0x4e)[0].q
            void* rax_6 = arg12 + rcx_6
            arg17 = *(arg12 + rcx_6)
            int64_t rcx_7 = arg19[0].q
            void* rbp_15 = arg12 + rcx_7
            zmm11 = *(arg12 + rcx_7)
            int64_t rcx_8 = _mm_shuffle_epi32(arg19, 0x4e)[0].q
            void* rbx_3 = arg12 + rcx_8
            arg19 = *(arg12 + rcx_8)
            arg2 = data_1434426c0
            zmm0 = zmm4 & arg2
            arg2 &= arg14
            int32_t (* rcx_10)[0x4] = arg18[0].q + arg12
            arg13 = *(zmm0[0].q + rcx_10)
            zmm0 = *(_mm_shuffle_epi32(zmm0, 0x4e)[0].q + rax_6)
            arg16 = *(arg2[0].q + rbp_15)
            arg23 = *(_mm_shuffle_epi32(arg2, 0x4e)[0].q + rbx_3)
            arg2 = data_1434426e0
            zmm4 &= arg2
            arg14 &= arg2
            arg2 = *(zmm4[0].q + rcx_10)
            zmm2 = *(_mm_shuffle_epi32(zmm4, 0x4e)[0].q + rax_6)
            zmm7 = *(arg14[0].q + rbp_15)
            arg18 = *(_mm_shuffle_epi32(arg14, 0x4e)[0].q + rbx_3)
            char rax_9 = rdx_4.b
            bool cond:4_1
            bool cond:5_1
            bool cond:9_1
            bool cond:10_1
            
            if ((rax_9 & 1) == 0)
                char temp1_1 = rax_9 & 2
                cond:4_1 = temp1_1 != 0
                cond:5_1 = temp1_1 == 0
                cond:9_1 = temp1_1 != 0
                cond:10_1 = temp1_1 == 0
                
                if (temp1_1 == 0)
                    goto label_14030ec7d
                
                goto label_14030e4bd
            
            arg14 = *rcx_10
            char temp0_230 = rax_9 & 2
            cond:4_1 = temp0_230 != 0
            cond:5_1 = temp0_230 == 0
            cond:9_1 = temp0_230 != 0
            cond:10_1 = temp0_230 == 0
            
            if (temp0_230 == 0)
            label_14030ec7d:
                arg17 = arg_20
                
                if (cond:5_1)
                    goto label_14030e4cd
                
                goto label_14030ec89
            
        label_14030e4bd:
            arg14 = _mm_shuffle_ps(_mm_shuffle_ps(arg17, arg14, 0), arg14, 0xe2)
            arg17 = arg_20
            
            if (not(cond:4_1))
            label_14030e4cd:
                
                if (cond:10_1)
                    goto label_14030ec92
                
                goto label_14030e4d3
            
        label_14030ec89:
            arg13 = _mm_unpacklo_ps(arg13, zmm0[0].q)
            bool cond:15_1
            bool cond:16_1
            bool cond:20_1
            bool cond:21_1
            
            if (not(cond:9_1))
            label_14030ec92:
                char temp4_1 = rax_9 & 4
                cond:15_1 = temp4_1 != 0
                cond:16_1 = temp4_1 == 0
                cond:20_1 = temp4_1 != 0
                cond:21_1 = temp4_1 == 0
                
                if (temp4_1 == 0)
                    goto label_14030e4de
                
                goto label_14030ec9f
            
        label_14030e4d3:
            arg2 = _mm_unpacklo_ps(arg2, zmm2[0].q)
            char temp3_1 = rax_9 & 4
            cond:15_1 = temp3_1 != 0
            cond:16_1 = temp3_1 == 0
            cond:20_1 = temp3_1 != 0
            cond:21_1 = temp3_1 == 0
            
            if (temp3_1 == 0)
            label_14030e4de:
                zmm11 = arg29
                
                if (cond:16_1)
                    goto label_14030ecb4
                
                goto label_14030e4f3
            
        label_14030ec9f:
            arg14 = _mm_shuffle_ps(arg14, _mm_shuffle_ps(zmm11, arg14, 0x30), 0x84)
            zmm11 = arg29
            
            if (not(cond:15_1))
            label_14030ecb4:
                
                if (cond:21_1)
                    goto label_14030e4fe
                
                goto label_14030ecbe
            
        label_14030e4f3:
            arg13 = _mm_shuffle_ps(arg13, _mm_shuffle_ps(arg16, arg13, 0x30), 0x84)
            bool cond:24_1
            bool cond:25_1
            bool cond:30_1
            bool cond:31_1
            
            if (not(cond:20_1))
            label_14030e4fe:
                char temp8_1 = rax_9 & 8
                cond:24_1 = temp8_1 != 0
                cond:25_1 = temp8_1 == 0
                cond:30_1 = temp8_1 != 0
                cond:31_1 = temp8_1 == 0
                
                if (temp8_1 == 0)
                    goto label_14030ecca
                
                goto label_14030e50b
            
        label_14030ecbe:
            arg2 = _mm_shuffle_ps(arg2, _mm_shuffle_ps(zmm7, arg2, 0x30), 0x84)
            char temp7_1 = rax_9 & 8
            cond:24_1 = temp7_1 != 0
            cond:25_1 = temp7_1 == 0
            cond:30_1 = temp7_1 != 0
            cond:31_1 = temp7_1 == 0
            
            if (temp7_1 == 0)
            label_14030ecca:
                
                if (cond:25_1)
                    goto label_14030e516
                
                goto label_14030ecd9
            
        label_14030e50b:
            arg14 = _mm_shuffle_ps(arg14, _mm_shuffle_ps(arg19, arg14, 0x20), 0x24)
            
            if (cond:24_1)
            label_14030ecd9:
                arg13 = _mm_shuffle_ps(arg13, _mm_shuffle_ps(arg23, arg13, 0x20), 0x24)
                
                if (cond:30_1)
                    arg2 = _mm_shuffle_ps(arg2, _mm_shuffle_ps(arg18, arg2, 0x20), 0x24)
            else
            label_14030e516:
                
                if (not(cond:31_1))
                    arg2 = _mm_shuffle_ps(arg2, _mm_shuffle_ps(arg18, arg2, 0x20), 0x24)
            
            zmm2 = __return_addr.o
            goto label_14030e9d4
        case 2
            arg18 = __paddq_xmmdq_memdq(arg18, arg26)
            arg19 = _mm_add_epi64(__paddq_xmmdq_memdq(arg19, arg27), zmm4)
            arg18 = _mm_add_epi64(arg18, temp0_67)
            arg13 = _mm_shuffle_epi32(arg14, 0x50)
            arg18 &= arg13
            arg2 = _mm_shuffle_epi32(arg14, 0xfa)
            arg19 &= arg2
            int64_t rax_10 = arg18[0].q
            void* rbp_16 = arg12 + rax_10
            int64_t rcx_11 = _mm_shuffle_epi32(arg18, 0x4e)[0].q
            void* rbx_4 = arg12 + rcx_11
            zmm4 = data_1434426b0
            zmm0 = arg13 & zmm4
            void* rdi_6 = zmm0[0].q
            int32_t temp0_98[0x4] = _mm_shuffle_epi32(zmm0, 0x4e)
            arg14 = data_1434426c0
            arg13 &= arg14
            zmm7 = __pinsrw_xmmdq_memw_immb(zx.o(*(rdi_6 + rbp_16)), *(temp0_98[0].q + rbx_4), 1)
            int64_t rdi_10 = arg19[0].q
            zmm0 = __pinsrw_xmmdq_memw_immb(zx.o(*(arg13[0].q + rbp_16)), 
                *(_mm_shuffle_epi32(arg13, 0x4e)[0].q + rbx_4), 1)
            void* rbp_19 = arg12 + rdi_10
            zmm4 &= arg2
            zmm7 = __pinsrw_xmmdq_memw_immb(zmm7, *(zmm4[0].q + rbp_19), 2)
            arg2 &= arg14
            zmm0 = __pinsrw_xmmdq_memw_immb(zmm0, *(arg2[0].q + rbp_19), 2)
            int32_t temp0_104[0x4] =
                __pinsrw_xmmdq_memw_immb(zx.o(*(arg12 + rax_10)), *(arg12 + rcx_11), 1)
            int32_t temp0_105[0x4] = _mm_shuffle_epi32(arg19, 0x4e)
            int32_t temp0_106[0x4] = __pinsrw_xmmdq_memw_immb(temp0_104, *(arg12 + rdi_10), 2)
            int64_t rax_12 = temp0_105[0].q
            int32_t temp0_107[0x4] = __pinsrw_xmmdq_memw_immb(temp0_106, *(arg12 + rax_12), 3)
            void* rax_13 = arg12 + rax_12
            zmm7 = __pinsrw_xmmdq_memw_immb(zmm7, *(_mm_shuffle_epi32(zmm4, 0x4e)[0].q + rax_13), 3)
            zmm0 = __pinsrw_xmmdq_memw_immb(zmm0, *(_mm_shuffle_epi32(arg2, 0x4e)[0].q + rax_13), 3)
            int32_t temp0_112[0x4] = _mm_unpacklo_epi16(temp0_107, 0)
            zmm4 = data_1434424d0
            int32_t temp0_114[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(temp0_112, zmm4))
            arg16 = data_1434426d0
            arg14 = _mm_div_ps(temp0_114, arg16)
            arg13 =
                _mm_div_ps(_mm_cvtepi32_ps(_mm_add_epi32(_mm_unpacklo_epi16(zmm7, 0), zmm4)), arg16)
            float temp0_123[0x4] =
                _mm_div_ps(_mm_cvtepi32_ps(_mm_add_epi32(_mm_unpacklo_epi16(zmm0, 0), zmm4)), arg16)
            zmm0 = data_143442710
            arg14 = _mm_mul_ps(arg14, zmm0)
            arg13 = _mm_mul_ps(arg13, zmm0)
            arg2 = _mm_mul_ps(temp0_123, zmm0)
            zmm2 = __return_addr.o
        label_14030e9d4:
            arg14 = _mm_sub_ps(arg14, arg15)
            arg13 = _mm_sub_ps(arg13, arg21)
            arg14 = _mm_mul_ps(arg14, zmm2)
            char rcx_16 = rdx_4.b
            zmm4 = arg15
            char temp2_1 = rcx_16 & 1
            
            if (temp2_1 != 0)
                zmm4 = arg15
                zmm4[0] = zmm4[0] f+ arg14[0]
                arg2 = _mm_sub_ps(arg2, zmm10)
                arg13 = _mm_mul_ps(arg13, zmm2)
                zmm7 = arg21
                
                if (temp2_1 != 0)
                    goto label_14030eab1
                
                goto label_14030ea05
            
            arg2 = _mm_sub_ps(arg2, zmm10)
            arg13 = _mm_mul_ps(arg13, zmm2)
            zmm7 = arg21
            
            if (temp2_1 != 0)
            label_14030eab1:
                zmm7 = arg21
                zmm7[0] = zmm7[0] f+ arg13[0]
                zmm2 = _mm_mul_ps(zmm2, arg2)
                arg2 = zmm10
                
                if (temp2_1 != 0)
                    goto label_14030ea12
                
                goto label_14030eac6
            
        label_14030ea05:
            zmm2 = _mm_mul_ps(zmm2, arg2)
            arg2 = zmm10
            bool cond:13_1
            bool cond:14_1
            bool cond:18_1
            bool cond:19_1
            
            if (temp2_1 != 0)
            label_14030ea12:
                arg2 = zmm10
                arg2[0] = arg2[0] f+ zmm2[0]
                arg15 = _mm_add_ps(arg15, arg14)
                char temp6_1 = rcx_16 & 2
                cond:13_1 = temp6_1 == 0
                cond:14_1 = temp6_1 != 0
                cond:18_1 = temp6_1 == 0
                cond:19_1 = temp6_1 != 0
                
                if (temp6_1 != 0)
                    goto label_14030eadd
                
                goto label_14030ea26
            
        label_14030eac6:
            arg15 = _mm_add_ps(arg15, arg14)
            char temp5_1 = rcx_16 & 2
            cond:13_1 = temp5_1 == 0
            cond:14_1 = temp5_1 != 0
            cond:18_1 = temp5_1 == 0
            cond:19_1 = temp5_1 != 0
            
            if (temp5_1 != 0)
            label_14030eadd:
                zmm4 = _mm_shuffle_ps(_mm_shuffle_ps(arg15, zmm4, 1), zmm4, 0xe2)
                arg21 = _mm_add_ps(arg21, arg13)
                
                if (cond:14_1)
                    goto label_14030ea3c
                
                goto label_14030eaea
            
        label_14030ea26:
            arg21 = _mm_add_ps(arg21, arg13)
            
            if (not(cond:13_1))
            label_14030ea3c:
                zmm7 = _mm_shuffle_ps(_mm_shuffle_ps(arg21, zmm7, 1), zmm7, 0xe2)
                zmm10 = _mm_add_ps(zmm10, zmm2)
                
                if (cond:19_1)
                    goto label_14030eb00
                
                goto label_14030ea49
            
        label_14030eaea:
            zmm10 = _mm_add_ps(zmm10, zmm2)
            bool cond:22_1
            bool cond:23_1
            bool cond:28_1
            bool cond:29_1
            
            if (not(cond:18_1))
            label_14030eb00:
                arg2 = _mm_shuffle_ps(_mm_shuffle_ps(zmm10, arg2, 1), arg2, 0xe2)
                char temp10_1 = rcx_16 & 4
                cond:22_1 = temp10_1 == 0
                cond:23_1 = temp10_1 != 0
                cond:28_1 = temp10_1 == 0
                cond:29_1 = temp10_1 != 0
                
                if (temp10_1 != 0)
                    goto label_14030ea59
                
                goto label_14030eb0c
            
        label_14030ea49:
            char temp9_1 = rcx_16 & 4
            cond:22_1 = temp9_1 == 0
            cond:23_1 = temp9_1 != 0
            cond:28_1 = temp9_1 == 0
            cond:29_1 = temp9_1 != 0
            
            if (temp9_1 == 0)
            label_14030eb0c:
                
                if (not(cond:22_1))
                label_14030eb1a:
                    zmm7 = _mm_shuffle_ps(zmm7, _mm_shuffle_ps(arg21, zmm7, 0x32), 0x84)
                    
                    if (cond:29_1)
                        goto label_14030ea71
                    
                    goto label_14030eb24
            else
            label_14030ea59:
                zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(arg15, zmm4, 0x32), 0x84)
                
                if (cond:23_1)
                    goto label_14030eb1a
            
            bool cond:32_1
            bool cond:33_1
            bool cond:34_1
            bool cond:35_1
            
            if (not(cond:28_1))
            label_14030ea71:
                arg2 = _mm_shuffle_ps(arg2, _mm_shuffle_ps(zmm10, arg2, 0x32), 0x84)
                char temp12_1 = rcx_16 & 8
                cond:32_1 = temp12_1 == 0
                cond:33_1 = temp12_1 != 0
                cond:34_1 = temp12_1 == 0
                cond:35_1 = temp12_1 != 0
                
                if (temp12_1 != 0)
                    goto label_14030eb35
                
                goto label_14030ea7e
            
        label_14030eb24:
            char temp11_1 = rcx_16 & 8
            cond:32_1 = temp11_1 == 0
            cond:33_1 = temp11_1 != 0
            cond:34_1 = temp11_1 == 0
            cond:35_1 = temp11_1 != 0
            
            if (temp11_1 != 0)
            label_14030eb35:
                arg15 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(arg15, zmm4, 0x23), 0x24)
                
                if (cond:33_1)
                    goto label_14030ea91
                
                goto label_14030eb3e
            
        label_14030ea7e:
            arg15 = zmm4
            
            if (cond:32_1)
            label_14030eb3e:
                arg21 = zmm7
                
                if (not(cond:34_1))
                    arg2 = _mm_shuffle_ps(arg2, _mm_shuffle_ps(zmm10, arg2, 0x23), 0x24)
            else
            label_14030ea91:
                arg21 = _mm_shuffle_ps(zmm7, _mm_shuffle_ps(arg21, zmm7, 0x23), 0x24)
                
                if (cond:35_1)
                    arg2 = _mm_shuffle_ps(arg2, _mm_shuffle_ps(zmm10, arg2, 0x23), 0x24)
            
            zmm10 = arg2
        case 3
            arg2 = arg22 & arg14
            int64_t rax_15 = sx.q(arg2[0])
            void* rcx_14 = arg12 + rax_15
            zmm2 = *(arg12 + rax_15)
            int64_t rax_17 = sx.q(_mm_shuffle_epi32(arg2, 0xe5)[0])
            void* rbp_20 = arg12 + rax_17
            zmm2 = _mm_unpacklo_ps(zmm2, (*(arg12 + rax_17))[0].q)
            int64_t rax_19 = sx.q(_mm_shuffle_epi32(arg2, 0x4e)[0])
            void* rbx_7 = arg12 + rax_19
            zmm0 = *(arg12 + rax_19)
            int64_t rax_21 = sx.q(_mm_shuffle_epi32(arg2, 0xe7)[0])
            void* rdi_11 = arg12 + rax_21
            zmm0 = _mm_unpacklo_ps(zmm0, (*(arg12 + rax_21))[0].q)
            arg23 = zmm2[0].q | zmm0[0].q << 0x40
            zmm0 = data_142fc95e0 & arg14
            zmm2 = _mm_unpacklo_ps(*(zx.q(zmm0[0]) + rcx_14), 
                (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rbp_20))[0].q)
            float temp0_136[0x4] = _mm_unpacklo_ps(
                *(zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0]) + rbx_7), 
                (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0]) + rdi_11))[0].q)
            zmm2 = zmm2[0].q | temp0_136[0].q << 0x40
            zmm0 = data_142fc95f0 & arg14
            float temp0_138[0x4] = _mm_unpacklo_ps(*(zx.q(zmm0[0]) + rcx_14), 
                (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rbp_20))[0].q)
            float temp0_141[0x4] = _mm_unpacklo_ps(
                *(zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0]) + rbx_7), 
                (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0]) + rdi_11))[0].q)
            zmm7 = temp0_138[0].q | temp0_141[0].q << 0x40
            arg2 = data_143442650 & arg14
            arg_20 = arg17
            arg17 = _mm_unpacklo_ps(*(zx.q(arg2[0]) + rcx_14), 
                (*(zx.q(_mm_shuffle_epi32(arg2, 0xe5)[0]) + rbp_20))[0].q)
            zmm0 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(arg2, 0x4e)[0]) + rbx_7), 
                (*(zx.q(_mm_shuffle_epi32(arg2, 0xe7)[0]) + rdi_11))[0].q)
            arg17 = arg17[0].q | zmm0[0].q << 0x40
            zmm0 = data_143442660 & arg14
            arg16 = _mm_unpacklo_ps(*(zx.q(zmm0[0]) + rcx_14), 
                (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rbp_20))[0].q)
            float temp0_151[0x4] = _mm_unpacklo_ps(
                *(zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0]) + rbx_7), 
                (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0]) + rdi_11))[0].q)
            arg16 = arg16[0].q | temp0_151[0].q << 0x40
            zmm0 = data_143442670 & arg14
            arg29 = zmm11
            zmm11 = _mm_unpacklo_ps(*(zx.q(zmm0[0]) + rcx_14), 
                (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rbp_20))[0].q)
            float temp0_156[0x4] = _mm_unpacklo_ps(
                *(zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0]) + rbx_7), 
                (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0]) + rdi_11))[0].q)
            zmm11 = zmm11[0].q | temp0_156[0].q << 0x40
            arg18 = __paddq_xmmdq_memdq(arg18, arg26)
            arg19 = _mm_add_epi64(__paddq_xmmdq_memdq(arg19, arg27), zmm4)
            arg18 = _mm_add_epi64(arg18, temp0_67)
            zmm0 = _mm_shuffle_epi32(arg14, 0x50) & arg18
            arg2 = _mm_shuffle_epi32(arg14, 0xfa) & arg19
            int64_t rax_42 = zmm0[0].q
            int64_t rcx_15 = _mm_shuffle_epi32(zmm0, 0x4e)[0].q
            int64_t rbp_21 = arg2[0].q
            int64_t rbx_8 = _mm_shuffle_epi32(arg2, 0x4e)[0].q
            zmm0 = _mm_unpacklo_epi64(
                _mm_unpacklo_epi32(zx.o(*(arg12 + rax_42)), zx.o(*(arg12 + rcx_15))[0].q), 
                _mm_unpacklo_epi32(zx.o(*(arg12 + rbp_21)), zx.o(*(arg12 + rbx_8))[0].q)[0].q)
            arg2 = zmm0
            arg13 = _mm_srli_epi32(zmm0, 0xa) & data_143442480
            zmm0 &= data_143442680
            arg2 = _mm_srli_epi32(arg2, 0x15)
            arg14 = _mm_mul_ps(
                __divps_xmmps_memps(_mm_cvtepi32_ps(__paddd_xmmdq_memdq(zmm0, data_143442490)), 
                    data_1434426a0), 
                arg17)
            arg17 = arg_20
            arg14 = __addps_xmmps_memps(arg14, arg23)
            zmm0 = data_143442440
            arg13 = _mm_cvtepi32_ps(_mm_add_epi32(arg13, zmm0))
            zmm4 = data_143442690
            arg13 = _mm_add_ps(_mm_mul_ps(_mm_div_ps(arg13, zmm4), arg16), zmm2)
            float temp0_183[0x4] =
                _mm_mul_ps(_mm_div_ps(_mm_cvtepi32_ps(_mm_add_epi32(arg2, zmm0)), zmm4), zmm11)
            zmm11 = arg29
            arg2 = _mm_add_ps(temp0_183, zmm7)
            zmm2 = __return_addr.o
            goto label_14030e9d4
        case 4, 5
            goto label_14030e98f
        case 6
            rax_43 = rdx_4.b
            arg2 = zx.o(0)
            zmm0 = zx.o(0)
            zmm2 = __return_addr.o
            
            if ((rax_43 & 4) == 0)
                goto label_14030e9c4
            
            goto label_14030e9be
        case 7
            jump_table_14030ed20[0].b = 0x94
            
            while (true)
                zmm4 = arg17
                int64_t rax_92 = sx.q(*(rbp_14 + 0xd4))
                arg2 = arg17
                zmm4[0] = zmm4[0] f* arg27[0]
                zmm0 = zmm11
                arg17[0] = arg17[0] f* arg27[2]
                arg13 = zmm10
                zmm0[0] = zmm0[0] f* arg25
                zmm2 = zmm11
                *(rbp_14 + 0xe0) = rdx_4 + (rax_92 << 2)
                zmm7 = *(rbp_14 - 0x80)
                arg14 = zmm10
                arg2[0] = arg2[0] f* arg23[1]
                zmm2[0] = zmm2[0] f* *(rbp_14 + 0x408)
                zmm4[0] = zmm4[0] f+ zmm0[0]
                zmm11[0] = zmm11[0] f* arg26[0]
                arg14[0] = arg14[0] f* arg18[0]
                zmm2[0] = zmm2[0] f+ arg2[0]
                arg18 = *(rbp_14 - 0x78)
                arg17[0] = arg17[0] f+ zmm11[0]
                arg13[0] = arg13[0] f* zmm7[0]
                arg14[0] = arg14[0] f+ zmm2[0]
                zmm10[0] = zmm10[0] f* arg18[0]
                zmm4[0] = zmm4[0] f+ arg13[0]
                arg17[0] = arg17[0] f+ zmm10[0]
                *rdx_4 = zmm4[0]
                int32_t* rdx_23 = *(rbp_14 + 0xf8)
                *(rbp_14 + 0xf8) = &rdx_23[sx.q(*(rbp_14 + 0xec))]
                *rdx_23 = arg14[0]
                uint32_t* rdx_24 = *(rbp_14 + 0x110)
                *(rbp_14 + 0x110) = &rdx_24[sx.q(*(rbp_14 + 0x104))]
                *rdx_24 = arg17[0]
                
                if (*(rbp_14 + 0x239) != 0)
                    float* rdx_25 = *(rbp_14 + 0x128)
                    zmm4[0] = zmm4[0] - arg21[0]
                    int64_t rax_95 = sx.q(*(rbp_14 + 0x11c))
                    arg14[0] = arg14[0] f- arg15[0]
                    arg17[0] = arg17[0] f- arg20[0]
                    zmm4[0] = zmm4[0] f* arg16[0]
                    *(rbp_14 + 0x128) = &rdx_25[rax_95]
                    arg14[0] = arg14[0] f* arg16[0]
                    *rdx_25 = zmm4[0]
                    int32_t* rdx_26 = *(rbp_14 + 0x140)
                    int64_t rax_96 = sx.q(*(rbp_14 + 0x134))
                    arg17[0] = arg17[0] f* arg16[0]
                    *(rbp_14 + 0x140) = &rdx_26[rax_96]
                    *rdx_26 = arg14[0]
                    uint32_t* rdx_27 = *(rbp_14 + 0x158)
                    *(rbp_14 + 0x158) = &rdx_27[sx.q(*(rbp_14 + 0x14c))]
                    *rdx_27 = arg17[0]
                
                while (true)
                    zmm10 = arg25
                    zmm11 = *(rbp_14 + 0x408)
                    arg17 = arg23[2]
                    
                    if (*(rbp_14 + 0x23a) != 0)
                        arg15 = arg27[0]
                        zmm2 = arg23[1]
                        arg15[0] = arg15[0] f- zmm7[0]
                        arg2 = arg26[0]
                        zmm11[0] = zmm11[0] f- arg17[0]
                        arg2[0] = arg2[0] f- arg18[0]
                        zmm10[0] = zmm10[0] - zmm7[0]
                        zmm7 = arg27[2]
                        zmm7[0] = zmm7[0] f- arg18[0]
                        zmm2[0] = zmm2[0] f- arg17[0]
                        zmm0 = zmm7
                        zmm7[0] = zmm7[0] * zmm10[0]
                        zmm0[0] = zmm0[0] f* zmm11[0]
                        arg16 = zmm2
                        arg16[0] = arg16[0] f* arg2[0]
                        zmm2[0] = zmm2[0] f* zmm10[0]
                        arg16[0] = arg16[0] f- zmm0[0]
                        arg15[0] = arg15[0] f* zmm11[0]
                        arg15[0] = arg15[0] f* arg2[0]
                        arg15[0] = arg15[0] f- zmm2[0]
                        zmm7[0] = zmm7[0] f- arg15[0]
                        zmm0 = arg16
                        zmm0[0] = zmm0[0] f* arg16[0]
                        arg2 = arg15
                        arg2[0] = arg2[0] f* arg15[0]
                        arg13 = zmm7
                        arg13[0] = arg13[0] f* zmm7[0]
                        arg13[0] = arg13[0] f+ zmm0[0]
                        arg13[0] = arg13[0] f+ arg2[0]
                        
                        if (not(arg13[0] f!= 1f))
                            *(rbp_14 - 0x28) = arg15[0]
                        else if (arg13[0] f>= 9.99999994e-09f)
                            zmm4 = 0x3f000000
                            zmm0 = arg13
                            arg13 = zmm0
                            arg14 = _mm_rsqrt_ss(zmm0[0], arg13[0])
                            zmm2 = 0x3f000000
                            arg13[0] = arg13[0] f* 0.5f
                            zmm0 = arg14
                            zmm0[0] = zmm0[0] f* arg14[0]
                            arg2 = arg13
                            arg2[0] = arg2[0] f* zmm0[0]
                            zmm0 = arg14
                            zmm2[0] = 0.5f - arg2[0]
                            zmm0[0] = zmm0[0] f* zmm2[0]
                            arg14[0] = arg14[0] f+ zmm0[0]
                            arg2 = arg14
                            zmm0 = arg14
                            arg2[0] = arg2[0] f* arg14[0]
                            arg13[0] = arg13[0] f* arg2[0]
                            zmm4[0] = 0.5f f- arg13[0]
                            zmm0[0] = zmm0[0] f* zmm4[0]
                            arg14[0] = arg14[0] f+ zmm0[0]
                            zmm0 = arg14
                            arg23[0] = arg14[0]
                            arg2 = arg14
                            zmm0[0] = zmm0[0] f* arg16[0]
                            arg14[0] = arg14[0] f* arg15[0]
                            arg2[0] = arg2[0] * zmm7[0]
                            arg16 = zmm0
                            *(rbp_14 - 0x28) = arg14[0]
                            arg15 = arg14
                            zmm7 = arg2
                        else
                            arg15 = data_143dbb200
                            arg16 = data_143dbb1f8
                            zmm7 = data_143dbb1fc
                            *(rbp_14 - 0x28) = arg15[0]
                        
                        int32_t* rdx_28 = *(rbp_14 + 0x170)
                        *(rbp_14 + 0xc0) = *(rbp_14 - 0x28)
                        int64_t rax_99 = sx.q(*(rbp_14 + 0x164))
                        *(rbp_14 + 0xb8) = (_mm_unpacklo_ps(arg16, zmm7[0].q)).q
                        *(rbp_14 + 0x170) = &rdx_28[rax_99]
                        *rdx_28 = arg16[0]
                        float* rdx_29 = *(rbp_14 + 0x188)
                        *(rbp_14 + 0x188) = &rdx_29[sx.q(*(rbp_14 + 0x17c))]
                        *rdx_29 = zmm7[0]
                        uint32_t* rdx_30 = *(rbp_14 + 0x1a0)
                        *(rbp_14 + 0x1a0) = &rdx_30[sx.q(*(rbp_14 + 0x194))]
                        *rdx_30 = arg15[0]
                    
                    char rbx_12 = *(rbp_14 + 0x23c)
                    
                    if (*(rbp_14 + 0x23b) != 0 || rbx_12 != 0)
                        arg15 = *(rbp_14 - 0x80)
                        zmm7 = arg17
                        *(rbp_14 + 0x6c) = 0
                        arg17 = arg27[0]
                        arg15[0] = arg15[0] f- zmm10[0]
                        *(rbp_14 + 0x7c) = 0
                        __builtin_memset(rbp_14 + 0x290, 0, 0x20)
                        arg17[0] = arg17[0] f- zmm10[0]
                        zmm10 = arg23[1]
                        zmm7[0] = zmm7[0] f- zmm11[0]
                        arg16 = arg18
                        zmm10[0] = zmm10[0] f- zmm11[0]
                        zmm11 = arg27[2]
                        zmm11[0] = zmm11[0] f- arg26[0]
                        arg16[0] = arg16[0] f- arg26[0]
                        *(rbp_14 + 0x8c) = 0
                        __builtin_memcpy(rbp_14 + 0x2b0, 
                            "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x"
                        "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
                            0x20)
                        uint32_t (* rax_102)[0x4]
                        rax_102, arg15, zmm7, arg16, arg17, zmm10, zmm11, arg18, arg19, arg20, 
                            arg21 = sub_140631b10(rbp_14 + 0x290, rbp_14 + 0x2d0)
                        float zmm5[0x4] = *(rbp_14 + 0x70)
                        float zmm4_1[0x4] = *(rbp_14 + 0x60)
                        zmm5[0] = arg15[0]
                        arg13 = *(rbp_14 + 0x80)
                        zmm4_1[0] = arg17[0]
                        zmm2 = *rax_102
                        float temp0_248[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xe1)
                        zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                        temp0_248[0] = zmm7[0]
                        *(rbp_14 + 0x40) = zmm0
                        zmm7 = zmm0
                        float temp0_250[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xe1)
                        zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
                        float temp0_252[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                        temp0_250[0] = zmm10[0]
                        float temp0_253[0x4] = _mm_shuffle_ps(temp0_248, temp0_248, 0xc6)
                        float temp0_254[0x4] = _mm_shuffle_ps(temp0_250, temp0_250, 0xc6)
                        temp0_253[0] = arg16[0]
                        float temp0_255[0x4] = _mm_shuffle_ps(temp0_253, temp0_253, 0xc9)
                        temp0_254[0] = zmm11[0]
                        float temp0_256[0x4] = _mm_shuffle_ps(temp0_254, temp0_254, 0xc9)
                        zmm0 = _mm_mul_ps(zmm0, temp0_256)
                        float temp0_258[0x4] = _mm_mul_ps(zmm7, temp0_255)
                        zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), arg18)
                        float temp0_261[0x4] = _mm_add_ps(temp0_258, zmm0)
                        *(rbp_14 + 0x70) = temp0_255
                        arg13[0] = arg25[0]
                        *(rbp_14 + 0x60) = temp0_256
                        zmm0 = *(rbp_14 + 0x408)
                        arg13 = _mm_shuffle_ps(arg13, arg13, 0xe1)
                        arg13[0] = zmm0[0]
                        zmm0 = arg26[0]
                        arg13 = _mm_shuffle_ps(arg13, arg13, 0xc6)
                        arg13[0] = zmm0[0]
                        arg13 = _mm_shuffle_ps(arg13, arg13, 0xc9)
                        float temp0_265[0x4] = _mm_mul_ps(temp0_252, arg13)
                        *(rbp_14 + 0x80) = arg13
                        zmm7 = _mm_add_ps(_mm_add_ps(temp0_261, temp0_265), zmm2)
                        zmm2 = rax_102[1]
                        arg17 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                        zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
                        arg17 = _mm_mul_ps(arg17, temp0_255)
                        zmm0 = _mm_mul_ps(zmm0, temp0_256)
                        *(rbp_14 + 0x40) = zmm7
                        arg17 = _mm_add_ps(arg17, zmm0)
                        bool cond:12_1 = *(rbp_14 + 0x23b) == 0
                        float temp0_274[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), arg13)
                        zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), arg18)
                        arg17 = _mm_add_ps(_mm_add_ps(arg17, temp0_274), zmm2)
                        zmm2 = rax_102[2]
                        float temp0_279[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                        zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
                        float temp0_281[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                        zmm0 = _mm_mul_ps(zmm0, temp0_256)
                        float temp0_283[0x4] = _mm_mul_ps(temp0_281, arg13)
                        zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), arg18)
                        float temp0_289[0x4] = _mm_add_ps(
                            _mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_279, temp0_255), zmm0), 
                                temp0_283), 
                            zmm2)
                        zmm2 = rax_102[3]
                        zmm11 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                        zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
                        zmm11 = _mm_mul_ps(zmm11, temp0_255)
                        float temp0_293[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                        zmm0 = _mm_mul_ps(zmm0, temp0_256)
                        float temp0_295[0x4] = _mm_mul_ps(temp0_293, arg13)
                        zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
                        zmm11 = _mm_add_ps(zmm11, zmm0)
                        zmm2 = _mm_mul_ps(zmm2, arg18)
                        zmm11 = _mm_add_ps(_mm_add_ps(zmm11, temp0_295), zmm2)
                        
                        if (not(cond:12_1))
                            zmm2 = data_142d4cc00
                            *(rbp_14 - 0x40) = 0
                            arg15 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
                            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                            float temp0_303[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                            zmm0 = _mm_mul_ps(zmm0, temp0_289)
                            *(rbp_14 - 0x38) = 0
                            float temp0_305[0x4] = _mm_mul_ps(temp0_303, arg17)
                            arg15 = _mm_mul_ps(arg15, zmm11)
                            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm7)
                            arg15 = _mm_add_ps(_mm_add_ps(arg15, zmm0), _mm_add_ps(temp0_305, zmm2))
                            arg15[0] = arg15[0] f* arg15[0]
                            zmm7 = _mm_shuffle_ps(arg15, arg15, 0x55)
                            arg16 = _mm_shuffle_ps(arg15, arg15, 0xaa)
                            zmm7[0] = zmm7[0] * zmm7[0]
                            zmm7[0] = zmm7[0] f+ arg15[0]
                            zmm0 = arg16
                            zmm0[0] = zmm0[0] f* arg16[0]
                            zmm7[0] = zmm7[0] f+ zmm0[0]
                            
                            if (zmm7[0] <= 9.99999994e-09f)
                                arg15 = arg19
                                zmm7 = arg19
                                arg16 = arg19
                            else
                                zmm4_1 = 0x3f000000
                                arg13 = zx.o(0)
                                zmm2 = 0x3f000000
                                arg13[0] = zmm7[0]
                                float temp0_314[0x4] = _mm_rsqrt_ss(arg13[0], arg13[0])
                                arg13[0] = arg13[0] f* 0.5f
                                zmm0 = temp0_314
                                zmm0[0] = zmm0[0] f* temp0_314[0]
                                arg2 = arg13
                                arg2[0] = arg2[0] f* zmm0[0]
                                zmm0 = temp0_314
                                zmm2[0] = 0.5f - arg2[0]
                                zmm0[0] = zmm0[0] f* zmm2[0]
                                temp0_314[0] = temp0_314[0] f+ zmm0[0]
                                zmm0 = temp0_314
                                temp0_314[0] = temp0_314[0] * temp0_314[0]
                                arg13[0] = arg13[0] f* temp0_314[0]
                                zmm4_1[0] = 0.5f f- arg13[0]
                                zmm0[0] = zmm0[0] f* zmm4_1[0]
                                temp0_314[0] = temp0_314[0] f+ zmm0[0]
                                arg23[0] = temp0_314[0]
                                arg15[0] = arg15[0] f* temp0_314[0]
                                zmm7[0] = zmm7[0] * temp0_314[0]
                                arg16[0] = arg16[0] f* temp0_314[0]
                            
                            uint32_t* rdx_32 = *(rbp_14 + 0x1b8)
                            *(rbp_14 + 0x1b8) = &rdx_32[sx.q(*(rbp_14 + 0x1ac))]
                            *rdx_32 = arg15[0]
                            float* rdx_33 = *(rbp_14 + 0x1d0)
                            *(rbp_14 + 0x1d0) = &rdx_33[sx.q(*(rbp_14 + 0x1c4))]
                            *rdx_33 = zmm7[0]
                            int32_t* rdx_34 = *(rbp_14 + 0x1e8)
                            zmm7 = *(rbp_14 + 0x40)
                            *(rbp_14 + 0x1e8) = &rdx_34[sx.q(*(rbp_14 + 0x1dc))]
                            *rdx_34 = arg16[0]
                            rbx_12 = *(rbp_14 + 0x23c)
                        
                        if (rbx_12 != 0)
                            zmm2 = data_142d4cc20
                            *(rbp_14 - 0x40) = 0
                            arg15 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
                            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                            float temp0_317[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                            zmm0 = _mm_mul_ps(zmm0, temp0_289)
                            *(rbp_14 - 0x38) = 0
                            float temp0_319[0x4] = _mm_mul_ps(temp0_317, arg17)
                            arg15 = _mm_mul_ps(arg15, zmm11)
                            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm7)
                            arg15 = _mm_add_ps(_mm_add_ps(arg15, zmm0), _mm_add_ps(temp0_319, zmm2))
                            arg15[0] = arg15[0] f* arg15[0]
                            zmm7 = _mm_shuffle_ps(arg15, arg15, 0x55)
                            arg16 = _mm_shuffle_ps(arg15, arg15, 0xaa)
                            zmm7[0] = zmm7[0] * zmm7[0]
                            zmm7[0] = zmm7[0] f+ arg15[0]
                            zmm0 = arg16
                            zmm0[0] = zmm0[0] f* arg16[0]
                            zmm7[0] = zmm7[0] f+ zmm0[0]
                            
                            if (zmm7[0] <= 9.99999994e-09f)
                                arg15 = arg19
                                zmm7 = arg19
                                arg16 = arg19
                            else
                                zmm4_1 = 0x3f000000
                                arg13 = zx.o(0)
                                zmm2 = 0x3f000000
                                arg13[0] = zmm7[0]
                                float temp0_328[0x4] = _mm_rsqrt_ss(arg13[0], arg13[0])
                                arg13[0] = arg13[0] f* 0.5f
                                zmm0 = temp0_328
                                zmm0[0] = zmm0[0] f* temp0_328[0]
                                arg2 = arg13
                                arg2[0] = arg2[0] f* zmm0[0]
                                zmm0 = temp0_328
                                zmm2[0] = 0.5f - arg2[0]
                                zmm0[0] = zmm0[0] f* zmm2[0]
                                temp0_328[0] = temp0_328[0] f+ zmm0[0]
                                zmm0 = temp0_328
                                temp0_328[0] = temp0_328[0] * temp0_328[0]
                                arg13[0] = arg13[0] f* temp0_328[0]
                                zmm4_1[0] = 0.5f f- arg13[0]
                                zmm0[0] = zmm0[0] f* zmm4_1[0]
                                temp0_328[0] = temp0_328[0] f+ zmm0[0]
                                arg23[0] = temp0_328[0]
                                arg15[0] = arg15[0] f* temp0_328[0]
                                zmm7[0] = zmm7[0] * temp0_328[0]
                                arg16[0] = arg16[0] f* temp0_328[0]
                            
                            uint32_t* rdx_35 = *(rbp_14 + 0x200)
                            *(rbp_14 + 0x200) = &rdx_35[sx.q(*(rbp_14 + 0x1f4))]
                            *rdx_35 = arg15[0]
                            float* rdx_36 = *(rbp_14 + 0x218)
                            *(rbp_14 + 0x218) = &rdx_36[sx.q(*(rbp_14 + 0x20c))]
                            *rdx_36 = zmm7[0]
                            int32_t* rdx_37 = *(rbp_14 + 0x230)
                            *(rbp_14 + 0x230) = &rdx_37[sx.q(*(rbp_14 + 0x224))]
                            *rdx_37 = arg16[0]
                    
                    arg18 = arg23[2]
                    int32_t r9_7 = arg26[2] + 1
                    bool cond:17_1 = r9_7 s< *(arg5 + 0x40)
                    arg16 = arg26[3]
                    int64_t rax_109 = *(rbp_14 - 0x20)
                    int64_t r8_10 = *(rbp_14 - 0x18)
                    int64_t r10 = *(rbp_14 + 0x20)
                    int32_t r11 = *(rbp_14 - 0x70)
                    arg26[2] = r9_7
                    
                    if (not(cond:17_1))
                        return rax_109
                    
                    uint32_t (* rdx_10)[0x4] = arg9
                    int128_t* rcx_19 = arg10
                    arg10 += r8_10
                    arg9 += rax_109
                    uint32_t (* r8)[0x4] = *(rbp_14 - 0x68)
                    void* r8_1 = r8 + *(rbp_14 + 0x50)
                    int32_t* rdx_11 = *(rbp_14 - 0x60)
                    arg2 = *rcx_19
                    *(rbp_14 + 0xa8) = (*rdx_10)[0]
                    zmm0 = *r8
                    int32_t rax_45 = *(rbp_14 + 0xa8)
                    *(rbp_14 - 0x60) = rdx_11 + r10
                    uint64_t rdx_13 = zx.q(*rdx_11)
                    zmm0 = _mm_unpacklo_ps(zmm0, arg2[0].q)
                    *(rbp_14 - 0x68) = r8_1
                    *(rbp_14 - 0x4c) = zmm0.q
                    *(rbp_14 - 0x44) = rax_45
                    
                    if (rdx_13.d s< 0 || rdx_13.d s> r11)
                        *(rbp_14 + 0xb4) = 0
                        int32_t rax_46 = *(rbp_14 + 0xb4)
                        *(rbp_14 + 0x34) = (_mm_unpacklo_ps(0x3f800000, arg19[0].q)).q
                        *(rbp_14 + 0x30) = 0
                        *(rbp_14 + 0x3c) = rax_46
                        *(rbp_14 - 0x50) = *(rbp_14 + 0x30)
                        rdx_13 = zx.q(*(rbp_14 - 0x50))
                    
                    uint32_t rbx_10 = (rdx_13 * 3).d
                    int32_t rax_48 = (*(*arg11 + 0x68))(arg11, zx.q(rbx_10))
                    int64_t r8_2 = *arg11
                    arg23[3] = rax_48
                    int32_t rax_49 = (*(r8_2 + 0x68))(arg11, zx.q(rbx_10 + 1), r8_2)
                    int64_t r8_3 = *arg11
                    arg_40[0] = rax_49
                    int32_t rax_50 = (*(r8_3 + 0x68))(arg11, zx.q(rbx_10 + 2), r8_3)
                    bool cond:27_1 = *(rbp_14 + 0x3f8) == 0
                    void* rbx_11 = *(rbp_14 - 0x58)
                    arg23[0] = rax_50
                    
                    if (not(cond:27_1))
                        arg_20[2].q = ((sx.q(*(arg6 + 0x34)) + 4) << 4) + arg6
                        arg_20[0].q = arg_40[2].q
                        int64_t* rax_52
                        int512_t zmm7_1
                        rax_52, zmm7_1 =
                            sub_1423162c0(rbp_14 + 0x240, rbx_11, zx.q(arg23[3]), arg12)
                        uint64_t r8_5 = zx.q(arg_40[0])
                        zmm7_1.o = zx.o(*rax_52)
                        arg26[0] = rax_52[1].d
                        arg_20[2].q = ((sx.q(*(arg6 + 0x34)) + 4) << 4) + arg6
                        arg_20[0].q = arg_40[2].q
                        int64_t* rax_59
                        int512_t zmm6
                        rax_59, zmm6 = sub_1423162c0(rbp_14 + 0x24c, rbx_11, r8_5, arg12)
                        uint64_t r8_6 = zx.q(arg23[0])
                        zmm6.o = zx.o(*rax_59)
                        arg27[2] = rax_59[1].d
                        arg_20[2].q = ((sx.q(*(arg6 + 0x34)) + 4) << 4) + arg6
                        arg_20[0].q = arg_40[2].q
                        int64_t* rax_66
                        rax_66, arg15, zmm7, arg16 =
                            sub_1423162c0(rbp_14 + 0x258, rbx_11, r8_6, arg12)
                        zmm0 = zmm7
                        arg25.q = zmm7.q
                        *(rbp_14 + 0x408) = _mm_shuffle_ps(zmm0, zmm0, 0x55)[0]
                        arg2 = zx.o(*rax_66)
                        int32_t rax_67 = rax_66[1].d
                        arg23[1] = _mm_shuffle_ps(arg15, arg15, 0x55)[0]
                        zmm0 = arg2
                        zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
                        arg23[2] = zmm0[0]
                        arg18 = zmm0
                        *(rbp_14 - 0x78) = rax_67
                        arg27[0].q = arg15.q
                        *(rbp_14 - 0x80) = arg2.q
                    
                    zmm10 = *(rbp_14 - 0x44)
                    arg17 = *(rbp_14 - 0x48)
                    zmm11 = *(rbp_14 - 0x4c)
                    
                    if (*(rbp_14 + 0x400) == 0)
                        arg15 = arg24
                    else
                        arg_20[2].q = (((sx.q(*(arg6 + 0x34)) ^ 1) + 4) << 4) + arg6
                        arg_20[0].q = arg_40[2].q
                        int64_t* rax_74
                        int512_t zmm8
                        rax_74, zmm8 = sub_1423162c0(rbp_14 + 0x264, rbx_11, zx.q(arg23[3]), arg12)
                        uint64_t r8_8 = zx.q(arg_40[0])
                        zmm8.o = zx.o(*rax_74)
                        *(rbp_14 + 0x18) = rax_74[1].d
                        arg_20[2].q = (((sx.q(*(arg6 + 0x34)) ^ 1) + 4) << 4) + arg6
                        arg_20[0].q = arg_40[2].q
                        int64_t* rax_82
                        int512_t zmm6_1
                        rax_82, zmm6_1 = sub_1423162c0(rbp_14 + 0x270, rbx_11, r8_8, arg12)
                        uint64_t r8_9 = zx.q(arg23[0])
                        zmm6_1.o = zx.o(*rax_82)
                        *(rbp_14 + 8) = rax_82[1].d
                        arg_20[2].q = (((sx.q(*(arg6 + 0x34)) ^ 1) + 4) << 4) + arg6
                        arg_20[0].q = arg_40[2].q
                        int64_t* rax_90
                        rax_90, arg15, arg16, arg17 =
                            sub_1423162c0(rbp_14 + 0x27c, rbx_11, r8_9, arg12)
                        zmm2 = zmm10
                        zmm4 = arg17
                        arg21 = arg17
                        arg21[0] = arg21[0] f* arg15[0]
                        arg13 = arg17
                        arg2 = zx.o(*rax_90)
                        arg20 = zmm11
                        arg20[0] = arg20[0] f* *(rbp_14 + 0x18)
                        zmm0 = arg2
                        int32_t rax_91 = rax_90[1].d
                        arg13[0] = arg13[0] f* *(rbp_14 + 8)
                        arg14 = zmm10
                        *(rbp_14 - 8) = rax_91
                        arg14[0] = arg14[0] f* *(rbp_14 - 8)
                        zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
                        arg20[0] = arg20[0] f+ arg13[0]
                        zmm2[0] = zmm2[0] f* zmm0[0]
                        zmm0 = _mm_shuffle_ps(arg15, arg15, 0x55)
                        zmm4[0] = zmm4[0] f* zmm0[0]
                        zmm0 = arg16
                        arg24 = zmm2[0]
                        arg20[0] = arg20[0] f+ arg14[0]
                        arg15 = arg24
                        zmm2 = zmm11
                        zmm10[0] = zmm10[0] * arg2[0]
                        arg2 = zmm11
                        zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
                        arg2[0] = arg2[0] f* zmm0[0]
                        zmm2[0] = zmm2[0] f* arg16[0]
                        zmm4[0] = zmm4[0] + arg2[0]
                        arg21[0] = arg21[0] f+ zmm2[0]
                        arg15[0] = arg15[0] f+ zmm4[0]
                        arg21[0] = arg21[0] + zmm10[0]
                        arg24 = arg15[0]
                        arg16 = arg26[3]
                    
                    if (*(rbp_14 + 0x238) != 0)
                        break
                    
                    if (*(rbp_14 + 0x239) != 0)
                        break
                    
                    arg18 = *(rbp_14 - 0x78)
                    zmm7 = *(rbp_14 - 0x80)
                
                rdx_4 = *(rbp_14 + 0xe0)

int32_t temp0_222[0x4] = _mm_unpacklo_epi64(arg20, zmm11[0].q)
zmm0 = zx.o(zmm10[0].q)
float temp0_223[0x4] = _mm_unpackhi_ps(zmm10, zx.o(0))
float temp0_224[0x4] = _mm_unpacklo_ps(arg15, arg21[0].q)
arg15 = _mm_unpackhi_ps(arg15, arg21)
int32_t arg_210[0x4] = _mm_shuffle_ps(temp0_224, zmm0, 0x84)
float arg_220[0x4] = _mm_shuffle_ps(temp0_224, zmm0, 0xde)
uint32_t arg_230[0x4] = arg15[0].q | temp0_223[0].q << 0x40
uint32_t arg_240[0x4] = _mm_unpackhi_pd(arg15, temp0_223[0].q)
uint64_t i = zx.q(_mm_movemask_ps(arg17))

do
    uint64_t rcx_17
    uint64_t rflags_1
    
    if (i == 0)
        rcx_17 = 0x40
    else
        rcx_17, rflags_1 = _bit_scan_forward(i)
    int32_t arg_200[0x4] = temp0_222
    arg9[sx.q(arg_200[zx.q(rcx_17.d) & 3]) * 3 + 2] = (&arg_210)[rcx_17]
    i &= rol.q(-2, rcx_17.b)
while (i != 0)

return i
