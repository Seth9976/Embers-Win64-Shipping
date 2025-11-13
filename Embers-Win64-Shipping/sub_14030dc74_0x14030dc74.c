// 函数: sub_14030dc74
// 地址: 0x14030dc74
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float arg_a0[0x4] = arg14
int32_t temp0[0x4] = _mm_add_epi64(arg16, arg19)
int32_t temp0_2[0x4] = _mm_add_epi64(_mm_add_epi64(arg17, arg13), arg11)
int32_t temp0_3[0x4] = _mm_add_epi64(temp0, arg2)
uint32_t temp0_4[0x4] = _mm_shuffle_epi32(arg15, 0x50)
int32_t zmm0[0x4] = temp0_3 & temp0_4
arg13 = _mm_shuffle_epi32(arg15, 0xfa)
int32_t zmm2[0x4] = temp0_2 & arg13
int64_t rcx = _mm_shuffle_epi32(zmm0, 0x4e)[0].q
void* rax = arg10 + rcx
arg14 = *(arg10 + rcx)
int64_t rcx_1 = zmm2[0].q
void* rdx = arg10 + rcx_1
arg2 = *(arg10 + rcx_1)
int64_t rcx_2 = _mm_shuffle_epi32(zmm2, 0x4e)[0].q
void* rbp = arg10 + rcx_2
int32_t arg_40[0x4] = *(arg10 + rcx_2)
zmm2 = data_1434426c0
arg11 = temp0_4 & zmm2
zmm2 &= arg13
void* rcx_4 = zmm0[0].q + arg10
arg19 = *(arg11[0].q + rcx_4)
int32_t zmm7[0x4] = *(_mm_shuffle_epi32(arg11, 0x4e)[0].q + rax)
arg11 = *(zmm2[0].q + rdx)
int32_t arg_50[0x4] = *(_mm_shuffle_epi32(zmm2, 0x4e)[0].q + rbp)
zmm2 = data_1434426e0
uint32_t zmm4[0x4] = temp0_4 & zmm2
arg13 &= zmm2
float zmm10[0x4] = *(zmm4[0].q + rcx_4)
int32_t zmm11[0x4] = *(_mm_shuffle_epi32(zmm4, 0x4e)[0].q + rax)
zmm4 = *(arg13[0].q + rdx)
arg13 = _mm_shuffle_epi32(arg13, 0x4e)
zmm2 = *(arg13[0].q + rbp)
char temp0_12 = _mm_movemask_ps(arg15)
bool cond:0
bool cond:1
bool cond:2
bool cond:3

if ((temp0_12 & 1) == 0)
    char temp1_1 = temp0_12 & 2
    cond:0 = temp1_1 != 0
    cond:1 = temp1_1 == 0
    cond:2 = temp1_1 != 0
    cond:3 = temp1_1 == 0
    
    if (temp1_1 == 0)
        goto label_14030e537
    
    goto label_14030dda4

arg13 = *rcx_4
char temp0_64 = temp0_12 & 2
cond:0 = temp0_64 != 0
cond:1 = temp0_64 == 0
cond:2 = temp0_64 != 0
cond:3 = temp0_64 == 0

if (temp0_64 == 0)
label_14030e537:
    
    if (cond:1)
        goto label_14030ddae
    
    goto label_14030e53d

label_14030dda4:
arg13 = _mm_shuffle_ps(_mm_shuffle_ps(arg14, arg13, 0), arg13, 0xe2)

if (cond:0)
label_14030e53d:
    arg19 = _mm_unpacklo_ps(arg19, zmm7[0].q)
    
    if (cond:2)
        zmm10 = _mm_unpacklo_ps(zmm10, zmm11[0].q)
else
label_14030ddae:
    
    if (not(cond:3))
        zmm10 = _mm_unpacklo_ps(zmm10, zmm11[0].q)

char temp2 = temp0_12 & 4
arg14 = arg_a0

if (temp2 == 0)
    zmm0 = arg26
    
    if (temp2 != 0)
    label_14030de7d:
        arg19 = _mm_shuffle_ps(arg19, _mm_shuffle_ps(arg11, arg19, 0x30), 0x84)
        
        if (temp2 != 0)
            goto label_14030ddf7
        
        goto label_14030de88
else
    arg13 = _mm_shuffle_ps(arg13, _mm_shuffle_ps(arg2, arg13, 0x30), 0x84)
    zmm0 = arg26
    
    if (temp2 != 0)
        goto label_14030de7d

bool cond:9
bool cond:10
bool cond:11
bool cond:12

if (temp2 != 0)
label_14030ddf7:
    zmm10 = _mm_shuffle_ps(zmm10, _mm_shuffle_ps(zmm4, zmm10, 0x30), 0x84)
    char temp4_1 = temp0_12 & 8
    cond:9 = temp4_1 == 0
    cond:10 = temp4_1 != 0
    cond:11 = temp4_1 == 0
    cond:12 = temp4_1 == 0
    
    if (temp4_1 != 0)
        goto label_14030de99
    
    goto label_14030de04

label_14030de88:
char temp3_1 = temp0_12 & 8
cond:9 = temp3_1 == 0
cond:10 = temp3_1 != 0
cond:11 = temp3_1 == 0
cond:12 = temp3_1 == 0

if (temp3_1 != 0)
label_14030de99:
    arg13 = _mm_shuffle_ps(arg13, _mm_shuffle_ps(arg_40, arg13, 0x20), 0x24)
    
    if (cond:10)
        goto label_14030de14
    
    goto label_14030dea3

label_14030de04:

if (cond:9)
label_14030dea3:
    
    if (not(cond:11))
        zmm10 = _mm_shuffle_ps(zmm10, _mm_shuffle_ps(zmm2, zmm10, 0x20), 0x24)
else
label_14030de14:
    arg19 = _mm_shuffle_ps(arg19, _mm_shuffle_ps(arg_50, arg19, 0x20), 0x24)
    
    if (not(cond:12))
        zmm10 = _mm_shuffle_ps(zmm10, _mm_shuffle_ps(zmm2, zmm10, 0x20), 0x24)

zmm11 = __punpckldq_xmmdq_memdq(arg25, arg27)
arg18 = _mm_unpacklo_epi32(arg18, zmm0[0].q)
arg12 = _mm_cmpeq_epi32(arg12, arg14) & not.o(arg15)
uint64_t rdx_1 = zx.q(_mm_movemask_ps(arg12))

if (rdx_1.b != 0)
    arg2 = zx.o(0)
    char rax_41
    
    if (arg4 u> 6)
    label_14030e98f:
        rax_41 = rdx_1.b
        zmm0 = zx.o(0)
        zmm2 = __return_addr.o
        
        if ((rax_41 & 4) == 0)
            goto label_14030e9c4
        
    label_14030e9be:
        arg2 = _mm_shuffle_ps(arg2, _mm_shuffle_ps(zx.o(0), arg2, 0x30), 0x84)
    label_14030e9c4:
        
        if ((rax_41 & 8) != 0)
            arg2 = _mm_shuffle_ps(arg2, _mm_shuffle_ps(zmm0, arg2, 0x20), 0x24)
        
        arg11 = arg2
        arg12 = arg2
        goto label_14030e9d4
    
    int32_t temp0_37[0x4] = _mm_unpacklo_epi32(
        _mm_shuffle_epi32(_mm_mul_epu32(arg24, arg14), 0xe8), 
        _mm_shuffle_epi32(__pmuludq_xmmdq_memdq(_mm_shuffle_epi32(arg14, 0xf5), arg21), 0xe8)[0].q)
    int32_t temp0_38[0x4] = _mm_cmpgt_epi32(zx.o(0), temp0_37)
    uint32_t temp0_39[0x4] = _mm_shuffle_epi32(temp0_37, 0x4e)
    int32_t temp0_40[0x4] = _mm_unpacklo_epi32(temp0_37, temp0_38[0].q)
    zmm4 = _mm_unpacklo_epi32(temp0_39, _mm_cmpgt_epi32(zx.o(0), temp0_39)[0].q)
    uint32_t arg_20[0x4]
    
    switch (arg5)
        case 0, 1
            arg25 = zmm11
            arg_20 = arg15
            arg16 = __paddq_xmmdq_memdq(arg16, arg22)
            int32_t temp0_45[0x4] = _mm_add_epi64(__paddq_xmmdq_memdq(arg17, arg23), zmm4)
            arg16 = _mm_add_epi64(arg16, temp0_40)
            uint32_t temp0_47[0x4] = _mm_shuffle_epi32(arg12, 0x50)
            arg16 &= temp0_47
            arg12 = _mm_shuffle_epi32(arg12, 0xfa)
            arg17 = temp0_45 & arg12
            int64_t rcx_7 = _mm_shuffle_epi32(arg16, 0x4e)[0].q
            void* rax_4 = arg10 + rcx_7
            arg15 = *(arg10 + rcx_7)
            int64_t rcx_8 = arg17[0].q
            void* rbp_1 = arg10 + rcx_8
            zmm11 = *(arg10 + rcx_8)
            int64_t rcx_9 = _mm_shuffle_epi32(arg17, 0x4e)[0].q
            void* rbx_6 = arg10 + rcx_9
            arg17 = *(arg10 + rcx_9)
            arg2 = data_1434426c0
            zmm0 = temp0_47 & arg2
            arg2 &= arg12
            float (* rcx_11)[0x4] = arg16[0].q + arg10
            arg11 = *(zmm0[0].q + rcx_11)
            zmm0 = *(_mm_shuffle_epi32(zmm0, 0x4e)[0].q + rax_4)
            arg14 = *(arg2[0].q + rbp_1)
            arg21 = *(_mm_shuffle_epi32(arg2, 0x4e)[0].q + rbx_6)
            arg2 = data_1434426e0
            zmm4 = temp0_47 & arg2
            arg12 &= arg2
            arg2 = *(zmm4[0].q + rcx_11)
            zmm2 = *(_mm_shuffle_epi32(zmm4, 0x4e)[0].q + rax_4)
            zmm7 = *(arg12[0].q + rbp_1)
            arg16 = *(_mm_shuffle_epi32(arg12, 0x4e)[0].q + rbx_6)
            char rax_7 = rdx_1.b
            bool cond:17_1
            bool cond:18_1
            bool cond:22_1
            bool cond:23_1
            
            if ((rax_7 & 1) == 0)
                char temp6_1 = rax_7 & 2
                cond:17_1 = temp6_1 != 0
                cond:18_1 = temp6_1 == 0
                cond:22_1 = temp6_1 != 0
                cond:23_1 = temp6_1 == 0
                
                if (temp6_1 == 0)
                    goto label_14030ec7d
                
                goto label_14030e4bd
            
            arg12 = *rcx_11
            char temp5_1 = rax_7 & 2
            cond:17_1 = temp5_1 != 0
            cond:18_1 = temp5_1 == 0
            cond:22_1 = temp5_1 != 0
            cond:23_1 = temp5_1 == 0
            
            if (temp5_1 == 0)
            label_14030ec7d:
                arg15 = arg_20
                
                if (cond:18_1)
                    goto label_14030e4cd
                
                goto label_14030ec89
            
        label_14030e4bd:
            arg12 = _mm_shuffle_ps(_mm_shuffle_ps(arg15, arg12, 0), arg12, 0xe2)
            arg15 = arg_20
            
            if (not(cond:17_1))
            label_14030e4cd:
                
                if (cond:23_1)
                    goto label_14030ec92
                
                goto label_14030e4d3
            
        label_14030ec89:
            arg11 = _mm_unpacklo_ps(arg11, zmm0[0].q)
            bool cond:28_1
            bool cond:29_1
            bool cond:33_1
            bool cond:34_1
            
            if (not(cond:22_1))
            label_14030ec92:
                char temp9_1 = rax_7 & 4
                cond:28_1 = temp9_1 != 0
                cond:29_1 = temp9_1 == 0
                cond:33_1 = temp9_1 != 0
                cond:34_1 = temp9_1 == 0
                
                if (temp9_1 == 0)
                    goto label_14030e4de
                
                goto label_14030ec9f
            
        label_14030e4d3:
            arg2 = _mm_unpacklo_ps(arg2, zmm2[0].q)
            char temp8_1 = rax_7 & 4
            cond:28_1 = temp8_1 != 0
            cond:29_1 = temp8_1 == 0
            cond:33_1 = temp8_1 != 0
            cond:34_1 = temp8_1 == 0
            
            if (temp8_1 == 0)
            label_14030e4de:
                zmm11 = arg25
                
                if (cond:29_1)
                    goto label_14030ecb4
                
                goto label_14030e4f3
            
        label_14030ec9f:
            arg12 = _mm_shuffle_ps(arg12, _mm_shuffle_ps(zmm11, arg12, 0x30), 0x84)
            zmm11 = arg25
            
            if (not(cond:28_1))
            label_14030ecb4:
                
                if (cond:34_1)
                    goto label_14030e4fe
                
                goto label_14030ecbe
            
        label_14030e4f3:
            arg11 = _mm_shuffle_ps(arg11, _mm_shuffle_ps(arg14, arg11, 0x30), 0x84)
            bool cond:37_1
            bool cond:38_1
            bool cond:43_1
            bool cond:44_1
            
            if (not(cond:33_1))
            label_14030e4fe:
                char temp13_1 = rax_7 & 8
                cond:37_1 = temp13_1 != 0
                cond:38_1 = temp13_1 == 0
                cond:43_1 = temp13_1 != 0
                cond:44_1 = temp13_1 == 0
                
                if (temp13_1 == 0)
                    goto label_14030ecca
                
                goto label_14030e50b
            
        label_14030ecbe:
            arg2 = _mm_shuffle_ps(arg2, _mm_shuffle_ps(zmm7, arg2, 0x30), 0x84)
            char temp12_1 = rax_7 & 8
            cond:37_1 = temp12_1 != 0
            cond:38_1 = temp12_1 == 0
            cond:43_1 = temp12_1 != 0
            cond:44_1 = temp12_1 == 0
            
            if (temp12_1 == 0)
            label_14030ecca:
                
                if (cond:38_1)
                    goto label_14030e516
                
                goto label_14030ecd9
            
        label_14030e50b:
            arg12 = _mm_shuffle_ps(arg12, _mm_shuffle_ps(arg17, arg12, 0x20), 0x24)
            
            if (cond:37_1)
            label_14030ecd9:
                arg11 = _mm_shuffle_ps(arg11, _mm_shuffle_ps(arg21, arg11, 0x20), 0x24)
                
                if (cond:43_1)
                    arg2 = _mm_shuffle_ps(arg2, _mm_shuffle_ps(arg16, arg2, 0x20), 0x24)
            else
            label_14030e516:
                
                if (not(cond:44_1))
                    arg2 = _mm_shuffle_ps(arg2, _mm_shuffle_ps(arg16, arg2, 0x20), 0x24)
            
            zmm2 = __return_addr.o
            goto label_14030e9d4
        case 2
            arg16 = __paddq_xmmdq_memdq(arg16, arg22)
            int32_t temp0_68[0x4] = _mm_add_epi64(__paddq_xmmdq_memdq(arg17, arg23), zmm4)
            arg16 = _mm_add_epi64(arg16, temp0_40)
            arg11 = _mm_shuffle_epi32(arg12, 0x50)
            arg16 &= arg11
            arg2 = _mm_shuffle_epi32(arg12, 0xfa)
            arg17 = temp0_68 & arg2
            int64_t rax_8 = arg16[0].q
            void* rbp_2 = arg10 + rax_8
            int64_t rcx_12 = _mm_shuffle_epi32(arg16, 0x4e)[0].q
            void* rbx_7 = arg10 + rcx_12
            zmm4 = data_1434426b0
            zmm0 = arg11 & zmm4
            void* rdi_6 = zmm0[0].q
            float temp0_73[0x4] = _mm_shuffle_epi32(zmm0, 0x4e)
            arg12 = data_1434426c0
            arg11 &= arg12
            int32_t temp0_74[0x4] =
                __pinsrw_xmmdq_memw_immb(zx.o(*(rdi_6 + rbp_2)), *(temp0_73[0].q + rbx_7), 1)
            int64_t rdi_10 = arg17[0].q
            int32_t temp0_76[0x4] = __pinsrw_xmmdq_memw_immb(zx.o(*(arg11[0].q + rbp_2)), 
                *(_mm_shuffle_epi32(arg11, 0x4e)[0].q + rbx_7), 1)
            void* rbp_5 = arg10 + rdi_10
            zmm4 &= arg2
            int32_t temp0_77[0x4] = __pinsrw_xmmdq_memw_immb(temp0_74, *(zmm4[0].q + rbp_5), 2)
            arg2 &= arg12
            int32_t temp0_78[0x4] = __pinsrw_xmmdq_memw_immb(temp0_76, *(arg2[0].q + rbp_5), 2)
            int32_t temp0_79[0x4] =
                __pinsrw_xmmdq_memw_immb(zx.o(*(arg10 + rax_8)), *(arg10 + rcx_12), 1)
            arg12 = _mm_shuffle_epi32(arg17, 0x4e)
            int32_t temp0_81[0x4] = __pinsrw_xmmdq_memw_immb(temp0_79, *(arg10 + rdi_10), 2)
            int64_t rax_10 = arg12[0].q
            int32_t temp0_82[0x4] = __pinsrw_xmmdq_memw_immb(temp0_81, *(arg10 + rax_10), 3)
            void* rax_11 = arg10 + rax_10
            int32_t temp0_84[0x4] = __pinsrw_xmmdq_memw_immb(temp0_77, 
                *(_mm_shuffle_epi32(zmm4, 0x4e)[0].q + rax_11), 3)
            int32_t temp0_86[0x4] = __pinsrw_xmmdq_memw_immb(temp0_78, 
                *(_mm_shuffle_epi32(arg2, 0x4e)[0].q + rax_11), 3)
            int32_t temp0_87[0x4] = _mm_unpacklo_epi16(temp0_82, 0)
            zmm4 = data_1434424d0
            float temp0_89[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(temp0_87, zmm4))
            arg14 = data_1434426d0
            float temp0_90[0x4] = _mm_div_ps(temp0_89, arg14)
            arg11 = _mm_div_ps(
                _mm_cvtepi32_ps(_mm_add_epi32(_mm_unpacklo_epi16(temp0_84, 0), zmm4)), arg14)
            arg2 = _mm_div_ps(
                _mm_cvtepi32_ps(_mm_add_epi32(_mm_unpacklo_epi16(temp0_86, 0), zmm4)), arg14)
            zmm0 = data_143442710
            arg12 = _mm_mul_ps(temp0_90, zmm0)
            arg11 = _mm_mul_ps(arg11, zmm0)
            arg2 = _mm_mul_ps(arg2, zmm0)
            zmm2 = __return_addr.o
        label_14030e9d4:
            float temp0_164[0x4] = _mm_sub_ps(arg12, arg13)
            arg11 = _mm_sub_ps(arg11, arg19)
            float temp0_166[0x4] = _mm_mul_ps(temp0_164, zmm2)
            char rcx_17 = rdx_1.b
            zmm4 = arg13
            char temp7_1 = rcx_17 & 1
            
            if (temp7_1 != 0)
                zmm4 = arg13
                zmm4[0] = zmm4[0] f+ temp0_166[0]
                arg2 = _mm_sub_ps(arg2, zmm10)
                arg11 = _mm_mul_ps(arg11, zmm2)
                zmm7 = arg19
                
                if (temp7_1 != 0)
                    goto label_14030eab1
                
                goto label_14030ea05
            
            arg2 = _mm_sub_ps(arg2, zmm10)
            arg11 = _mm_mul_ps(arg11, zmm2)
            zmm7 = arg19
            
            if (temp7_1 != 0)
            label_14030eab1:
                zmm7 = arg19
                zmm7[0] = zmm7[0] f+ arg11[0]
                zmm2 = _mm_mul_ps(zmm2, arg2)
                arg2 = zmm10
                
                if (temp7_1 != 0)
                    goto label_14030ea12
                
                goto label_14030eac6
            
        label_14030ea05:
            zmm2 = _mm_mul_ps(zmm2, arg2)
            arg2 = zmm10
            bool cond:26_1
            bool cond:27_1
            bool cond:31_1
            bool cond:32_1
            
            if (temp7_1 != 0)
            label_14030ea12:
                arg2 = zmm10
                arg2[0] = arg2[0] f+ zmm2[0]
                arg13 = _mm_add_ps(arg13, temp0_166)
                char temp11_1 = rcx_17 & 2
                cond:26_1 = temp11_1 == 0
                cond:27_1 = temp11_1 != 0
                cond:31_1 = temp11_1 == 0
                cond:32_1 = temp11_1 != 0
                
                if (temp11_1 != 0)
                    goto label_14030eadd
                
                goto label_14030ea26
            
        label_14030eac6:
            arg13 = _mm_add_ps(arg13, temp0_166)
            char temp10_1 = rcx_17 & 2
            cond:26_1 = temp10_1 == 0
            cond:27_1 = temp10_1 != 0
            cond:31_1 = temp10_1 == 0
            cond:32_1 = temp10_1 != 0
            
            if (temp10_1 != 0)
            label_14030eadd:
                zmm4 = _mm_shuffle_ps(_mm_shuffle_ps(arg13, zmm4, 1), zmm4, 0xe2)
                arg19 = _mm_add_ps(arg19, arg11)
                
                if (cond:27_1)
                    goto label_14030ea3c
                
                goto label_14030eaea
            
        label_14030ea26:
            arg19 = _mm_add_ps(arg19, arg11)
            
            if (not(cond:26_1))
            label_14030ea3c:
                zmm7 = _mm_shuffle_ps(_mm_shuffle_ps(arg19, zmm7, 1), zmm7, 0xe2)
                zmm10 = _mm_add_ps(zmm10, zmm2)
                
                if (cond:32_1)
                    goto label_14030eb00
                
                goto label_14030ea49
            
        label_14030eaea:
            zmm10 = _mm_add_ps(zmm10, zmm2)
            bool cond:35_1
            bool cond:36_1
            bool cond:41_1
            bool cond:42_1
            
            if (not(cond:31_1))
            label_14030eb00:
                arg2 = _mm_shuffle_ps(_mm_shuffle_ps(zmm10, arg2, 1), arg2, 0xe2)
                char temp15_1 = rcx_17 & 4
                cond:35_1 = temp15_1 == 0
                cond:36_1 = temp15_1 != 0
                cond:41_1 = temp15_1 == 0
                cond:42_1 = temp15_1 != 0
                
                if (temp15_1 != 0)
                    goto label_14030ea59
                
                goto label_14030eb0c
            
        label_14030ea49:
            char temp14_1 = rcx_17 & 4
            cond:35_1 = temp14_1 == 0
            cond:36_1 = temp14_1 != 0
            cond:41_1 = temp14_1 == 0
            cond:42_1 = temp14_1 != 0
            
            if (temp14_1 == 0)
            label_14030eb0c:
                
                if (not(cond:35_1))
                label_14030eb1a:
                    zmm7 = _mm_shuffle_ps(zmm7, _mm_shuffle_ps(arg19, zmm7, 0x32), 0x84)
                    
                    if (cond:42_1)
                        goto label_14030ea71
                    
                    goto label_14030eb24
            else
            label_14030ea59:
                zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(arg13, zmm4, 0x32), 0x84)
                
                if (cond:36_1)
                    goto label_14030eb1a
            
            bool cond:45_1
            bool cond:46_1
            bool cond:47_1
            bool cond:48_1
            
            if (not(cond:41_1))
            label_14030ea71:
                arg2 = _mm_shuffle_ps(arg2, _mm_shuffle_ps(zmm10, arg2, 0x32), 0x84)
                char temp17_1 = rcx_17 & 8
                cond:45_1 = temp17_1 == 0
                cond:46_1 = temp17_1 != 0
                cond:47_1 = temp17_1 == 0
                cond:48_1 = temp17_1 != 0
                
                if (temp17_1 != 0)
                    goto label_14030eb35
                
                goto label_14030ea7e
            
        label_14030eb24:
            char temp16_1 = rcx_17 & 8
            cond:45_1 = temp16_1 == 0
            cond:46_1 = temp16_1 != 0
            cond:47_1 = temp16_1 == 0
            cond:48_1 = temp16_1 != 0
            
            if (temp16_1 != 0)
            label_14030eb35:
                arg13 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(arg13, zmm4, 0x23), 0x24)
                
                if (cond:46_1)
                    goto label_14030ea91
                
                goto label_14030eb3e
            
        label_14030ea7e:
            arg13 = zmm4
            
            if (cond:45_1)
            label_14030eb3e:
                arg19 = zmm7
                
                if (not(cond:47_1))
                    arg2 = _mm_shuffle_ps(arg2, _mm_shuffle_ps(zmm10, arg2, 0x23), 0x24)
            else
            label_14030ea91:
                arg19 = _mm_shuffle_ps(zmm7, _mm_shuffle_ps(arg19, zmm7, 0x23), 0x24)
                
                if (cond:48_1)
                    arg2 = _mm_shuffle_ps(arg2, _mm_shuffle_ps(zmm10, arg2, 0x23), 0x24)
            
            zmm10 = arg2
        case 3
            arg2 = arg20 & arg12
            int64_t rax_13 = sx.q(arg2[0])
            void* rcx_15 = arg10 + rax_13
            zmm2 = *(arg10 + rax_13)
            int64_t rax_15 = sx.q(_mm_shuffle_epi32(arg2, 0xe5)[0])
            void* rbp_6 = arg10 + rax_15
            zmm2 = _mm_unpacklo_ps(zmm2, (*(arg10 + rax_15))[0].q)
            int64_t rax_17 = sx.q(_mm_shuffle_epi32(arg2, 0x4e)[0])
            void* rbx_10 = arg10 + rax_17
            zmm0 = *(arg10 + rax_17)
            int64_t rax_19 = sx.q(_mm_shuffle_epi32(arg2, 0xe7)[0])
            void* rdi_11 = arg10 + rax_19
            zmm0 = _mm_unpacklo_ps(zmm0, (*(arg10 + rax_19))[0].q)
            arg21 = zmm2[0].q | zmm0[0].q << 0x40
            zmm0 = data_142fc95e0 & arg12
            zmm2 = _mm_unpacklo_ps(*(zx.q(zmm0[0]) + rcx_15), 
                (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rbp_6))[0].q)
            arg2 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0]) + rbx_10), 
                (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0]) + rdi_11))[0].q)
            zmm2 = zmm2[0].q | arg2[0].q << 0x40
            zmm0 = data_142fc95f0 & arg12
            zmm7 = _mm_unpacklo_ps(*(zx.q(zmm0[0]) + rcx_15), 
                (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rbp_6))[0].q)
            arg2 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0]) + rbx_10), 
                (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0]) + rdi_11))[0].q)
            zmm7 = zmm7[0].q | arg2[0].q << 0x40
            arg2 = data_143442650 & arg12
            arg_20 = arg15
            arg15 = _mm_unpacklo_ps(*(zx.q(arg2[0]) + rcx_15), 
                (*(zx.q(_mm_shuffle_epi32(arg2, 0xe5)[0]) + rbp_6))[0].q)
            zmm0 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(arg2, 0x4e)[0]) + rbx_10), 
                (*(zx.q(_mm_shuffle_epi32(arg2, 0xe7)[0]) + rdi_11))[0].q)
            arg15 = arg15[0].q | zmm0[0].q << 0x40
            zmm0 = data_143442660 & arg12
            float temp0_123[0x4] = _mm_unpacklo_ps(*(zx.q(zmm0[0]) + rcx_15), 
                (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rbp_6))[0].q)
            arg2 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0]) + rbx_10), 
                (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0]) + rdi_11))[0].q)
            arg14 = temp0_123[0].q | arg2[0].q << 0x40
            zmm0 = data_143442670 & arg12
            arg25 = zmm11
            zmm11 = _mm_unpacklo_ps(*(zx.q(zmm0[0]) + rcx_15), 
                (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rbp_6))[0].q)
            arg2 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0]) + rbx_10), 
                (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0]) + rdi_11))[0].q)
            zmm11 = zmm11[0].q | arg2[0].q << 0x40
            arg16 = __paddq_xmmdq_memdq(arg16, arg22)
            int32_t temp0_134[0x4] = _mm_add_epi64(__paddq_xmmdq_memdq(arg17, arg23), zmm4)
            arg16 = _mm_add_epi64(arg16, temp0_40)
            zmm0 = _mm_shuffle_epi32(arg12, 0x50) & arg16
            arg2 = _mm_shuffle_epi32(arg12, 0xfa) & temp0_134
            int64_t rax_40 = zmm0[0].q
            int64_t rcx_16 = _mm_shuffle_epi32(zmm0, 0x4e)[0].q
            int64_t rbp_7 = arg2[0].q
            int64_t rbx_11 = _mm_shuffle_epi32(arg2, 0x4e)[0].q
            int32_t temp0_142[0x4] = _mm_unpacklo_epi64(
                _mm_unpacklo_epi32(zx.o(*(arg10 + rax_40)), zx.o(*(arg10 + rcx_16))[0].q), 
                _mm_unpacklo_epi32(zx.o(*(arg10 + rbp_7)), zx.o(*(arg10 + rbx_11))[0].q)[0].q)
            arg11 = _mm_srli_epi32(temp0_142, 0xa) & data_143442480
            zmm0 = temp0_142 & data_143442680
            arg2 = _mm_srli_epi32(temp0_142, 0x15)
            float temp0_148[0x4] = _mm_mul_ps(
                __divps_xmmps_memps(_mm_cvtepi32_ps(__paddd_xmmdq_memdq(zmm0, data_143442490)), 
                    data_1434426a0), 
                arg15)
            arg15 = arg_20
            arg12 = __addps_xmmps_memps(temp0_148, arg21)
            zmm0 = data_143442440
            arg11 = _mm_cvtepi32_ps(_mm_add_epi32(arg11, zmm0))
            zmm4 = data_143442690
            arg11 = _mm_add_ps(_mm_mul_ps(_mm_div_ps(arg11, zmm4), arg14), zmm2)
            arg2 = _mm_mul_ps(_mm_div_ps(_mm_cvtepi32_ps(_mm_add_epi32(arg2, zmm0)), zmm4), zmm11)
            zmm11 = arg25
            arg2 = _mm_add_ps(arg2, zmm7)
            zmm2 = __return_addr.o
            goto label_14030e9d4
        case 4, 5
            goto label_14030e98f
        case 6
            rax_41 = rdx_1.b
            arg2 = zx.o(0)
            zmm0 = zx.o(0)
            zmm2 = __return_addr.o
            
            if ((rax_41 & 4) == 0)
                goto label_14030e9c4
            
            goto label_14030e9be
        case 7
            jump_table_14030ed20[0].b = 0x94
            
            while (true)
                int64_t rax_90 = sx.q(*(rbp + 0xd4))
                arg2 = arg15
                arg15[0] = arg15[0] f* arg23[0]
                arg15[0] = arg15[0] f* arg23[2]
                arg11 = zmm10
                zmm11[0] = zmm11[0] f* arg_50[2]
                *(rbp + 0xe0) = rdx_1 + (rax_90 << 2)
                zmm7 = *(rbp - 0x80)
                arg2[0] = arg2[0] f* arg21[1]
                zmm11[0] = zmm11[0] f* *(rbp + 0x408)
                arg15[0] = arg15[0] f+ zmm11[0]
                zmm11[0] = zmm11[0] f* arg22[0]
                zmm10[0] = zmm10[0] * arg16[0]
                zmm11[0] = zmm11[0] f+ arg2[0]
                arg16 = *(rbp - 0x78)
                arg15[0] = arg15[0] f+ zmm11[0]
                arg11[0] = arg11[0] f* zmm7[0]
                zmm10[0] = zmm10[0] f+ zmm11[0]
                zmm10[0] = zmm10[0] * arg16[0]
                arg15[0] = arg15[0] f+ arg11[0]
                arg15[0] = arg15[0] f+ zmm10[0]
                *rdx_1 = arg15[0]
                float* rdx_20 = *(rbp + 0xf8)
                *(rbp + 0xf8) = &rdx_20[sx.q(*(rbp + 0xec))]
                *rdx_20 = zmm10[0]
                uint32_t* rdx_21 = *(rbp + 0x110)
                *(rbp + 0x110) = &rdx_21[sx.q(*(rbp + 0x104))]
                *rdx_21 = arg15[0]
                
                if (*(rbp + 0x239) != 0)
                    uint32_t* rdx_22 = *(rbp + 0x128)
                    arg15[0] = arg15[0] f- arg19[0]
                    int64_t rax_93 = sx.q(*(rbp + 0x11c))
                    zmm10[0] = zmm10[0] f- arg13[0]
                    arg15[0] = arg15[0] f- arg18[0]
                    arg15[0] = arg15[0] f* arg14[0]
                    *(rbp + 0x128) = &rdx_22[rax_93]
                    zmm10[0] = zmm10[0] * arg14[0]
                    *rdx_22 = arg15[0]
                    float* rdx_23 = *(rbp + 0x140)
                    int64_t rax_94 = sx.q(*(rbp + 0x134))
                    arg15[0] = arg15[0] f* arg14[0]
                    *(rbp + 0x140) = &rdx_23[rax_94]
                    *rdx_23 = zmm10[0]
                    uint32_t* rdx_24 = *(rbp + 0x158)
                    *(rbp + 0x158) = &rdx_24[sx.q(*(rbp + 0x14c))]
                    *rdx_24 = arg15[0]
                
                while (true)
                    zmm10 = arg_50[2]
                    zmm11 = *(rbp + 0x408)
                    arg15 = arg21[2]
                    
                    if (*(rbp + 0x23a) != 0)
                        arg13 = arg23[0]
                        zmm2 = arg21[1]
                        arg13[0] = arg13[0] f- zmm7[0]
                        arg2 = arg22[0]
                        zmm11[0] = zmm11[0] f- arg15[0]
                        arg2[0] = arg2[0] f- arg16[0]
                        zmm4 = zmm10
                        zmm4[0] = zmm4[0] f- zmm7[0]
                        zmm7 = arg23[2]
                        zmm7[0] = zmm7[0] f- arg16[0]
                        zmm2[0] = zmm2[0] f- arg15[0]
                        zmm7[0] = zmm7[0] f* zmm4[0]
                        zmm7[0] = zmm7[0] f* zmm11[0]
                        arg14 = zmm2
                        arg14[0] = arg14[0] f* arg2[0]
                        zmm2[0] = zmm2[0] f* zmm4[0]
                        arg14[0] = arg14[0] f- zmm7[0]
                        arg13[0] = arg13[0] f* zmm11[0]
                        arg13[0] = arg13[0] f* arg2[0]
                        arg13[0] = arg13[0] f- zmm2[0]
                        zmm7[0] = zmm7[0] f- arg13[0]
                        zmm0 = arg14
                        zmm0[0] = zmm0[0] f* arg14[0]
                        arg13[0] = arg13[0] f* arg13[0]
                        zmm7[0] = zmm7[0] f* zmm7[0]
                        zmm7[0] = zmm7[0] f+ zmm0[0]
                        zmm7[0] = zmm7[0] f+ arg13[0]
                        
                        if (not(zmm7[0] f!= 1f))
                            *(rbp - 0x28) = arg13[0]
                        else if (zmm7[0] f>= 9.99999994e-09f)
                            zmm4 = 0x3f000000
                            float temp0_220[0x4] = _mm_rsqrt_ss(zmm7[0], zmm7[0])
                            zmm2 = 0x3f000000
                            zmm7[0] = zmm7[0] f* 0.5f
                            zmm0 = temp0_220
                            zmm0[0] = zmm0[0] f* temp0_220[0]
                            zmm7[0] = zmm7[0] f* zmm0[0]
                            zmm0 = temp0_220
                            zmm2[0] = 0.5f f- zmm7[0]
                            zmm0[0] = zmm0[0] f* zmm2[0]
                            temp0_220[0] = temp0_220[0] f+ zmm0[0]
                            arg2 = temp0_220
                            zmm0 = temp0_220
                            arg2[0] = arg2[0] f* temp0_220[0]
                            zmm7[0] = zmm7[0] f* arg2[0]
                            zmm4[0] = 0.5f f- zmm7[0]
                            zmm0[0] = zmm0[0] f* zmm4[0]
                            temp0_220[0] = temp0_220[0] f+ zmm0[0]
                            zmm0 = temp0_220
                            arg21[0] = temp0_220[0]
                            arg2 = temp0_220
                            zmm0[0] = zmm0[0] f* arg14[0]
                            temp0_220[0] = temp0_220[0] f* arg13[0]
                            arg2[0] = arg2[0] f* zmm7[0]
                            arg14 = zmm0
                            *(rbp - 0x28) = temp0_220[0]
                            arg13 = temp0_220
                            zmm7 = arg2
                        else
                            arg13 = data_143dbb200
                            arg14 = data_143dbb1f8
                            zmm7 = data_143dbb1fc
                            *(rbp - 0x28) = arg13[0]
                        
                        float* rdx_25 = *(rbp + 0x170)
                        *(rbp + 0xc0) = *(rbp - 0x28)
                        int64_t rax_97 = sx.q(*(rbp + 0x164))
                        *(rbp + 0xb8) = (_mm_unpacklo_ps(arg14, zmm7[0].q)).q
                        *(rbp + 0x170) = &rdx_25[rax_97]
                        *rdx_25 = arg14[0]
                        int32_t* rdx_26 = *(rbp + 0x188)
                        *(rbp + 0x188) = &rdx_26[sx.q(*(rbp + 0x17c))]
                        *rdx_26 = zmm7[0]
                        int32_t* rdx_27 = *(rbp + 0x1a0)
                        *(rbp + 0x1a0) = &rdx_27[sx.q(*(rbp + 0x194))]
                        *rdx_27 = arg13[0]
                    
                    char rbx_15 = *(rbp + 0x23c)
                    
                    if (*(rbp + 0x23b) != 0 || rbx_15 != 0)
                        arg13 = *(rbp - 0x80)
                        zmm7 = arg15
                        *(rbp + 0x6c) = 0
                        arg15 = arg23[0]
                        arg13[0] = arg13[0] f- zmm10[0]
                        *(rbp + 0x7c) = 0
                        __builtin_memset(rbp + 0x290, 0, 0x20)
                        arg15[0] = arg15[0] f- zmm10[0]
                        zmm10 = arg21[1]
                        zmm7[0] = zmm7[0] f- zmm11[0]
                        zmm10[0] = zmm10[0] f- zmm11[0]
                        zmm11 = arg23[2]
                        zmm11[0] = zmm11[0] f- arg22[0]
                        arg16[0] = arg16[0] f- arg22[0]
                        *(rbp + 0x8c) = 0
                        __builtin_memcpy(rbp + 0x2b0, 
                            "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x"
                        "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
                            0x20)
                        uint32_t (* rax_100)[0x4]
                        rax_100, arg13, zmm7, arg14, arg15, zmm10, zmm11, arg16, arg17, arg18, 
                            arg19 = sub_140631b10(rbp + 0x290, rbp + 0x2d0)
                        float zmm5[0x4] = *(rbp + 0x70)
                        float zmm4_1[0x4] = *(rbp + 0x60)
                        zmm5[0] = arg13[0]
                        arg11 = *(rbp + 0x80)
                        zmm4_1[0] = arg15[0]
                        zmm2 = *rax_100
                        float temp0_222[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xe1)
                        zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                        temp0_222[0] = zmm7[0]
                        *(rbp + 0x40) = zmm0
                        zmm7 = zmm0
                        float temp0_224[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xe1)
                        zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
                        arg2 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                        temp0_224[0] = zmm10[0]
                        float temp0_227[0x4] = _mm_shuffle_ps(temp0_222, temp0_222, 0xc6)
                        float temp0_228[0x4] = _mm_shuffle_ps(temp0_224, temp0_224, 0xc6)
                        temp0_227[0] = arg14[0]
                        float temp0_229[0x4] = _mm_shuffle_ps(temp0_227, temp0_227, 0xc9)
                        temp0_228[0] = zmm11[0]
                        float temp0_230[0x4] = _mm_shuffle_ps(temp0_228, temp0_228, 0xc9)
                        zmm0 = _mm_mul_ps(zmm0, temp0_230)
                        zmm7 = _mm_mul_ps(zmm7, temp0_229)
                        zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), arg16)
                        zmm7 = _mm_add_ps(zmm7, zmm0)
                        *(rbp + 0x70) = temp0_229
                        arg11[0] = arg_50[2][0]
                        *(rbp + 0x60) = temp0_230
                        zmm0 = *(rbp + 0x408)
                        arg11 = _mm_shuffle_ps(arg11, arg11, 0xe1)
                        arg11[0] = zmm0[0]
                        zmm0 = arg22[0]
                        arg11 = _mm_shuffle_ps(arg11, arg11, 0xc6)
                        arg11[0] = zmm0[0]
                        arg11 = _mm_shuffle_ps(arg11, arg11, 0xc9)
                        arg2 = _mm_mul_ps(arg2, arg11)
                        *(rbp + 0x80) = arg11
                        zmm7 = _mm_add_ps(_mm_add_ps(zmm7, arg2), zmm2)
                        zmm2 = rax_100[1]
                        arg15 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                        zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
                        arg15 = _mm_mul_ps(arg15, temp0_229)
                        zmm0 = _mm_mul_ps(zmm0, temp0_230)
                        *(rbp + 0x40) = zmm7
                        arg15 = _mm_add_ps(arg15, zmm0)
                        bool cond:25_1 = *(rbp + 0x23b) == 0
                        arg2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), arg11)
                        zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), arg16)
                        arg15 = _mm_add_ps(_mm_add_ps(arg15, arg2), zmm2)
                        zmm2 = rax_100[2]
                        float temp0_253[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                        zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
                        arg2 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                        zmm0 = _mm_mul_ps(zmm0, temp0_230)
                        arg2 = _mm_mul_ps(arg2, arg11)
                        zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), arg16)
                        float temp0_263[0x4] = _mm_add_ps(
                            _mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_253, temp0_229), zmm0), arg2), 
                            zmm2)
                        zmm2 = rax_100[3]
                        zmm11 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                        zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
                        zmm11 = _mm_mul_ps(zmm11, temp0_229)
                        arg2 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                        zmm0 = _mm_mul_ps(zmm0, temp0_230)
                        arg2 = _mm_mul_ps(arg2, arg11)
                        zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
                        zmm11 = _mm_add_ps(zmm11, zmm0)
                        zmm2 = _mm_mul_ps(zmm2, arg16)
                        zmm11 = _mm_add_ps(_mm_add_ps(zmm11, arg2), zmm2)
                        
                        if (not(cond:25_1))
                            zmm2 = data_142d4cc00
                            *(rbp - 0x40) = 0
                            arg13 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
                            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                            arg2 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                            zmm0 = _mm_mul_ps(zmm0, temp0_263)
                            *(rbp - 0x38) = 0
                            arg2 = _mm_mul_ps(arg2, arg15)
                            arg13 = _mm_mul_ps(arg13, zmm11)
                            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm7)
                            arg13 = _mm_add_ps(_mm_add_ps(arg13, zmm0), _mm_add_ps(arg2, zmm2))
                            arg13[0] = arg13[0] f* arg13[0]
                            zmm7 = _mm_shuffle_ps(arg13, arg13, 0x55)
                            arg14 = _mm_shuffle_ps(arg13, arg13, 0xaa)
                            zmm7[0] = zmm7[0] f* zmm7[0]
                            zmm7[0] = zmm7[0] f+ arg13[0]
                            zmm0 = arg14
                            zmm0[0] = zmm0[0] f* arg14[0]
                            zmm7[0] = zmm7[0] f+ zmm0[0]
                            
                            if (zmm7[0] f<= 9.99999994e-09f)
                                arg13 = arg17
                                zmm7 = arg17
                                arg14 = arg17
                            else
                                zmm4_1 = 0x3f000000
                                arg11 = zx.o(0)
                                zmm2 = 0x3f000000
                                arg11[0] = zmm7[0]
                                float temp0_288[0x4] = _mm_rsqrt_ss(arg11[0], arg11[0])
                                arg11[0] = arg11[0] f* 0.5f
                                zmm0 = temp0_288
                                zmm0[0] = zmm0[0] f* temp0_288[0]
                                arg11[0] = arg11[0] f* zmm0[0]
                                zmm0 = temp0_288
                                zmm2[0] = 0.5f f- arg11[0]
                                zmm0[0] = zmm0[0] f* zmm2[0]
                                temp0_288[0] = temp0_288[0] f+ zmm0[0]
                                arg2 = temp0_288
                                zmm0 = temp0_288
                                arg2[0] = arg2[0] f* temp0_288[0]
                                arg11[0] = arg11[0] f* arg2[0]
                                zmm4_1[0] = 0.5f f- arg11[0]
                                zmm0[0] = zmm0[0] f* zmm4_1[0]
                                temp0_288[0] = temp0_288[0] f+ zmm0[0]
                                arg21[0] = temp0_288[0]
                                arg13[0] = arg13[0] f* temp0_288[0]
                                zmm7[0] = zmm7[0] f* temp0_288[0]
                                arg14[0] = arg14[0] * temp0_288[0]
                            
                            int32_t* rdx_29 = *(rbp + 0x1b8)
                            *(rbp + 0x1b8) = &rdx_29[sx.q(*(rbp + 0x1ac))]
                            *rdx_29 = arg13[0]
                            int32_t* rdx_30 = *(rbp + 0x1d0)
                            *(rbp + 0x1d0) = &rdx_30[sx.q(*(rbp + 0x1c4))]
                            *rdx_30 = zmm7[0]
                            float* rdx_31 = *(rbp + 0x1e8)
                            zmm7 = *(rbp + 0x40)
                            *(rbp + 0x1e8) = &rdx_31[sx.q(*(rbp + 0x1dc))]
                            *rdx_31 = arg14[0]
                            rbx_15 = *(rbp + 0x23c)
                        
                        if (rbx_15 != 0)
                            zmm2 = data_142d4cc20
                            *(rbp - 0x40) = 0
                            arg13 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
                            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                            arg2 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                            zmm0 = _mm_mul_ps(zmm0, temp0_263)
                            *(rbp - 0x38) = 0
                            arg2 = _mm_mul_ps(arg2, arg15)
                            arg13 = _mm_mul_ps(arg13, zmm11)
                            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm7)
                            arg13 = _mm_add_ps(_mm_add_ps(arg13, zmm0), _mm_add_ps(arg2, zmm2))
                            arg13[0] = arg13[0] f* arg13[0]
                            zmm7 = _mm_shuffle_ps(arg13, arg13, 0x55)
                            arg14 = _mm_shuffle_ps(arg13, arg13, 0xaa)
                            zmm7[0] = zmm7[0] f* zmm7[0]
                            zmm7[0] = zmm7[0] f+ arg13[0]
                            zmm0 = arg14
                            zmm0[0] = zmm0[0] f* arg14[0]
                            zmm7[0] = zmm7[0] f+ zmm0[0]
                            
                            if (zmm7[0] f<= 9.99999994e-09f)
                                arg13 = arg17
                                zmm7 = arg17
                                arg14 = arg17
                            else
                                zmm4_1 = 0x3f000000
                                arg11 = zx.o(0)
                                zmm2 = 0x3f000000
                                arg11[0] = zmm7[0]
                                float temp0_302[0x4] = _mm_rsqrt_ss(arg11[0], arg11[0])
                                arg11[0] = arg11[0] f* 0.5f
                                zmm0 = temp0_302
                                zmm0[0] = zmm0[0] f* temp0_302[0]
                                arg11[0] = arg11[0] f* zmm0[0]
                                zmm0 = temp0_302
                                zmm2[0] = 0.5f f- arg11[0]
                                zmm0[0] = zmm0[0] f* zmm2[0]
                                temp0_302[0] = temp0_302[0] f+ zmm0[0]
                                arg2 = temp0_302
                                zmm0 = temp0_302
                                arg2[0] = arg2[0] f* temp0_302[0]
                                arg11[0] = arg11[0] f* arg2[0]
                                zmm4_1[0] = 0.5f f- arg11[0]
                                zmm0[0] = zmm0[0] f* zmm4_1[0]
                                temp0_302[0] = temp0_302[0] f+ zmm0[0]
                                arg21[0] = temp0_302[0]
                                arg13[0] = arg13[0] f* temp0_302[0]
                                zmm7[0] = zmm7[0] f* temp0_302[0]
                                arg14[0] = arg14[0] * temp0_302[0]
                            
                            int32_t* rdx_32 = *(rbp + 0x200)
                            *(rbp + 0x200) = &rdx_32[sx.q(*(rbp + 0x1f4))]
                            *rdx_32 = arg13[0]
                            int32_t* rdx_33 = *(rbp + 0x218)
                            *(rbp + 0x218) = &rdx_33[sx.q(*(rbp + 0x20c))]
                            *rdx_33 = zmm7[0]
                            float* rdx_34 = *(rbp + 0x230)
                            *(rbp + 0x230) = &rdx_34[sx.q(*(rbp + 0x224))]
                            *rdx_34 = arg14[0]
                    
                    arg16 = arg21[2]
                    int32_t r9_7 = arg22[2] + 1
                    bool cond:30_1 = r9_7 s< *(arg5 + 0x40)
                    arg14 = arg22[3]
                    int64_t rax_107 = *(rbp - 0x20)
                    int64_t r8_10 = *(rbp - 0x18)
                    int64_t r10_1 = *(rbp + 0x20)
                    int32_t r11_1 = *(rbp - 0x70)
                    arg22[2] = r9_7
                    
                    if (not(cond:30_1))
                        return rax_107
                    
                    int32_t (* rdx_7)[0x4] = arg7
                    int32_t (* rcx_20)[0x4] = arg8
                    arg8 += r8_10
                    arg7 += rax_107
                    int32_t (* r8)[0x4] = *(rbp - 0x68)
                    void* r8_1 = r8 + *(rbp + 0x50)
                    int32_t* rdx_8 = *(rbp - 0x60)
                    arg2 = *rcx_20
                    *(rbp + 0xa8) = (*rdx_7)[0]
                    zmm0 = *r8
                    int32_t rax_43 = *(rbp + 0xa8)
                    *(rbp - 0x60) = rdx_8 + r10_1
                    uint64_t rdx_10 = zx.q(*rdx_8)
                    zmm0 = _mm_unpacklo_ps(zmm0, arg2[0].q)
                    *(rbp - 0x68) = r8_1
                    *(rbp - 0x4c) = zmm0.q
                    *(rbp - 0x44) = rax_43
                    
                    if (rdx_10.d s< 0 || rdx_10.d s> r11_1)
                        *(rbp + 0xb4) = 0
                        int32_t rax_44 = *(rbp + 0xb4)
                        *(rbp + 0x34) = (_mm_unpacklo_ps(0x3f800000, arg17[0].q)).q
                        *(rbp + 0x30) = 0
                        *(rbp + 0x3c) = rax_44
                        *(rbp - 0x50) = *(rbp + 0x30)
                        rdx_10 = zx.q(*(rbp - 0x50))
                    
                    uint32_t rbx_13 = (rdx_10 * 3).d
                    int32_t rax_46 = (*(*arg9 + 0x68))(arg9, zx.q(rbx_13))
                    int64_t r8_2 = *arg9
                    arg21[3] = rax_46
                    int32_t rax_47 = (*(r8_2 + 0x68))(arg9, zx.q(rbx_13 + 1), r8_2)
                    int64_t r8_3 = *arg9
                    arg_40[0] = rax_47
                    int32_t rax_48 = (*(r8_3 + 0x68))(arg9, zx.q(rbx_13 + 2), r8_3)
                    bool cond:40_1 = *(rbp + 0x3f8) == 0
                    void* rbx_14 = *(rbp - 0x58)
                    arg21[0] = rax_48
                    
                    if (not(cond:40_1))
                        arg_20[2].q = ((sx.q(*(arg6 + 0x34)) + 4) << 4) + arg6
                        arg_20[0].q = arg_40[2].q
                        int64_t* rax_50
                        int512_t zmm7_1
                        rax_50, zmm7_1 = sub_1423162c0(rbp + 0x240, rbx_14, zx.q(arg21[3]), arg10)
                        uint64_t r8_5 = zx.q(arg_40[0])
                        zmm7_1.o = zx.o(*rax_50)
                        arg22[0] = rax_50[1].d
                        arg_20[2].q = ((sx.q(*(arg6 + 0x34)) + 4) << 4) + arg6
                        arg_20[0].q = arg_40[2].q
                        int64_t* rax_57
                        int512_t zmm6
                        rax_57, zmm6 = sub_1423162c0(rbp + 0x24c, rbx_14, r8_5, arg10)
                        uint64_t r8_6 = zx.q(arg21[0])
                        zmm6.o = zx.o(*rax_57)
                        arg23[2] = rax_57[1].d
                        arg_20[2].q = ((sx.q(*(arg6 + 0x34)) + 4) << 4) + arg6
                        arg_20[0].q = arg_40[2].q
                        int64_t* rax_64
                        rax_64, arg13, zmm7, arg14 = sub_1423162c0(rbp + 0x258, rbx_14, r8_6, arg10)
                        arg_50[2].q = zmm7.q
                        *(rbp + 0x408) = _mm_shuffle_ps(zmm7, zmm7, 0x55)[0]
                        arg2 = zx.o(*rax_64)
                        int32_t rax_65 = rax_64[1].d
                        arg21[1] = _mm_shuffle_ps(arg13, arg13, 0x55)[0]
                        zmm0 = _mm_shuffle_ps(arg2, arg2, 0x55)
                        arg21[2] = zmm0[0]
                        arg16 = zmm0
                        *(rbp - 0x78) = rax_65
                        arg23[0].q = arg13.q
                        *(rbp - 0x80) = arg2.q
                    
                    zmm10 = *(rbp - 0x44)
                    arg15 = *(rbp - 0x48)
                    zmm11 = *(rbp - 0x4c)
                    
                    if (*(rbp + 0x400) == 0)
                        arg13 = arg_50[0]
                    else
                        arg_20[2].q = (((sx.q(*(arg6 + 0x34)) ^ 1) + 4) << 4) + arg6
                        arg_20[0].q = arg_40[2].q
                        int64_t* rax_72
                        int512_t zmm8
                        rax_72, zmm8 = sub_1423162c0(rbp + 0x264, rbx_14, zx.q(arg21[3]), arg10)
                        uint64_t r8_8 = zx.q(arg_40[0])
                        zmm8.o = zx.o(*rax_72)
                        *(rbp + 0x18) = rax_72[1].d
                        arg_20[2].q = (((sx.q(*(arg6 + 0x34)) ^ 1) + 4) << 4) + arg6
                        arg_20[0].q = arg_40[2].q
                        int64_t* rax_80
                        int512_t zmm6_1
                        rax_80, zmm6_1 = sub_1423162c0(rbp + 0x270, rbx_14, r8_8, arg10)
                        uint64_t r8_9 = zx.q(arg21[0])
                        zmm6_1.o = zx.o(*rax_80)
                        *(rbp + 8) = rax_80[1].d
                        arg_20[2].q = (((sx.q(*(arg6 + 0x34)) ^ 1) + 4) << 4) + arg6
                        arg_20[0].q = arg_40[2].q
                        int64_t* rax_88
                        rax_88, arg13, arg14, arg15 =
                            sub_1423162c0(rbp + 0x27c, rbx_14, r8_9, arg10)
                        zmm2 = zmm10
                        zmm7 = zmm10
                        arg19 = arg15
                        arg19[0] = arg19[0] f* arg13[0]
                        arg11 = arg15
                        arg2 = zx.o(*rax_88)
                        arg18 = zmm11
                        arg18[0] = arg18[0] f* *(rbp + 0x18)
                        int32_t rax_89 = rax_88[1].d
                        arg11[0] = arg11[0] f* *(rbp + 8)
                        *(rbp - 8) = rax_89
                        zmm10[0] = zmm10[0] f* *(rbp - 8)
                        zmm0 = _mm_shuffle_ps(arg2, arg2, 0x55)
                        arg18[0] = arg18[0] f+ arg11[0]
                        zmm2[0] = zmm2[0] f* zmm0[0]
                        zmm0 = _mm_shuffle_ps(arg13, arg13, 0x55)
                        arg15[0] = arg15[0] f* zmm0[0]
                        zmm0 = arg14
                        arg_50[0] = zmm2[0]
                        arg18[0] = arg18[0] f+ zmm10[0]
                        arg13 = arg_50[0]
                        zmm7[0] = zmm7[0] f* arg2[0]
                        zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
                        zmm11[0] = zmm11[0] f* zmm0[0]
                        zmm11[0] = zmm11[0] f* arg14[0]
                        arg15[0] = arg15[0] f+ zmm11[0]
                        arg19[0] = arg19[0] f+ zmm11[0]
                        arg13[0] = arg13[0] f+ arg15[0]
                        arg19[0] = arg19[0] f+ zmm7[0]
                        arg_50[0] = arg13[0]
                        arg14 = arg22[3]
                    
                    if (*(rbp + 0x238) != 0)
                        break
                    
                    if (*(rbp + 0x239) != 0)
                        break
                    
                    arg16 = *(rbp - 0x78)
                    zmm7 = *(rbp - 0x80)
                
                rdx_1 = *(rbp + 0xe0)

int32_t temp0_197[0x4] = _mm_unpacklo_epi64(arg18, zmm11[0].q)
zmm0 = zx.o(zmm10[0].q)
float temp0_198[0x4] = _mm_unpackhi_ps(zmm10, zx.o(0))
arg2 = _mm_unpacklo_ps(arg13, arg19[0].q)
arg13 = _mm_unpackhi_ps(arg13, arg19)
int32_t arg_210[0x4] = _mm_shuffle_ps(arg2, zmm0, 0x84)
int32_t arg_220[0x4] = _mm_shuffle_ps(arg2, zmm0, 0xde)
int32_t arg_230[0x4] = arg13[0].q | temp0_198[0].q << 0x40
int32_t arg_240[0x4] = _mm_unpackhi_pd(arg13, temp0_198[0].q)
uint64_t i = zx.q(_mm_movemask_ps(arg15))

do
    uint64_t rcx_18
    uint64_t rflags_1
    
    if (i == 0)
        rcx_18 = 0x40
    else
        rcx_18, rflags_1 = _bit_scan_forward(i)
    int32_t arg_200[0x4] = temp0_197
    arg7[sx.q(arg_200[zx.q(rcx_18.d) & 3]) * 3 + 2] = (&arg_210)[rcx_18]
    i &= rol.q(-2, rcx_18.b)
while (i != 0)

return i
