// 函数: sub_14013d007
// 地址: 0x14013d007
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg10 = __insertps_xmmps_memd_immb(arg10, arg22, 0x20)
bool z

if (not(z))
    return sub_14013cb2b(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, 
        arg13, arg14, arg15, arg16, arg17) __tailcall

bool cond:0
bool cond:1
bool cond:2
bool cond:3

if (not(z))
    arg11 = _mm_insert_ps(arg11, arg2, 0x20)
    char temp1_1 = arg1 & 8
    cond:0 = temp1_1 == 0
    cond:1 = temp1_1 != 0
    cond:2 = temp1_1 != 0
    cond:3 = temp1_1 == 0
    
    if (temp1_1 != 0)
        goto label_14013cb43
    
    goto label_14013d02d

char temp0_134 = arg1 & 8
cond:0 = temp0_134 == 0
cond:1 = temp0_134 != 0
cond:2 = temp0_134 != 0
cond:3 = temp0_134 == 0

if (temp0_134 != 0)
label_14013cb43:
    arg10 = __insertps_xmmps_memd_immb(arg10, arg18, 0x30)
    
    if (cond:1)
        goto label_14013d033
    
    goto label_14013cb51

label_14013d02d:

if (cond:0)
label_14013cb51:
    
    if (cond:2)
        arg11 = _mm_insert_ps(arg11, arg8, 0x30)
else
label_14013d033:
    arg15 = _mm_insert_ps(arg15, arg9, 0x30)
    
    if (not(cond:3))
        arg11 = _mm_insert_ps(arg11, arg8, 0x30)

arg17 = _mm_cmpeq_epi32(arg17, arg12) & not.o(arg13)
char temp0_4 = _mm_movemask_ps(arg17)

if (temp0_4 == 0)
    float temp0_124[0x4] = _mm_unpacklo_ps(arg11, 0)
    float temp0_125[0x4] = _mm_unpackhi_ps(arg11, zx.o(0))
    arg8 = _mm_unpacklo_ps(arg10, arg15[0].q)
    float temp0_127[0x4] = _mm_unpackhi_ps(arg10, arg15)
    float arg_130[0x4] = _mm_insert_ps(arg8, arg11, 0x28)
    double arg_140[0x2] = _mm_unpackhi_pd(arg8, temp0_124[0].q)
    double arg_150[0x2] = _mm_insert_ps(temp0_127, arg11, 0xa8)
    float arg_160[0x4] = _mm_unpackhi_pd(temp0_127, temp0_125[0].q)
    uint64_t i = zx.q(_mm_movemask_ps(arg13))
    int64_t result
    
    do
        uint64_t rcx_3
        uint64_t rflags_1
        
        if (i == 0)
            rcx_3 = 0x40
        else
            rcx_3, rflags_1 = _bit_scan_forward(i)
        int128_t zmm4
        int128_t arg_120 = zmm4
        result = sx.q(*(&arg_120 + ((zx.q(rcx_3.d) & 3) << 2))) * 0x30
        *(arg7 + result + 0x10) = (&arg_130)[rcx_3]
        i &= rol.q(-2, rcx_3.b)
    while (i != 0)
    
    return result

if (arg5 u<= 6)
    arg12 = _mm_mullo_epi32(arg12, arg16)
    arg8 = _mm_cvtepi32_epi64(arg12[0].q)
    arg16 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(arg12, 0x4e)[0].q)
    float zmm2[0x4]
    float zmm5[0x4]
    float zmm10[0x4]
    float zmm13[0x4]
    
    switch (jump_table_14013d99c[arg6])
        case 0x841f0f
            undefined
        case 0xfffff6ed
            zmm2 = __paddq_xmmdq_memdq(__return_addr.o, arg20)
            arg2 = _mm_add_epi64(__paddq_xmmdq_memdq(arg19, arg21), arg16)
            zmm2 = _mm_add_epi64(zmm2, arg8)
            arg16 = _mm_shuffle_epi32(arg17, 0x50)
            float temp0_14[0x4] = _mm_blendv_ps(zx.o(0), zmm2, arg16)
            zmm2 = _mm_shuffle_epi32(arg17, 0xfa)
            float temp0_16[0x4] = _mm_blendv_ps(zx.o(0), arg2, zmm2)
            int64_t rax_1 = _mm_extract_epi64(temp0_14, 1)
            void* rbp_1 = arg4 + rax_1
            arg12 = *(arg4 + rax_1)
            int64_t rax_2 = temp0_16[0].q
            void* rdx_4 = arg4 + rax_2
            __return_addr.o = *(arg4 + rax_2)
            int64_t rax_3 = _mm_extract_epi64(temp0_16, 1)
            zmm10 = data_1434426c0
            float temp0_17[0x4] = _mm_blendv_ps(zx.o(0), zmm10, arg16)
            void* rdi = arg4 + rax_3
            float temp0_18[0x4] = _mm_blendv_ps(zx.o(0), zmm10, zmm2)
            arg21 = *(arg4 + rax_3)
            void* rbx_1 = temp0_14[0].q + arg4
            arg9 = *(temp0_17[0].q + rbx_1)
            arg14 = *(_mm_extract_epi64(temp0_17, 1) + rbp_1)
            arg17 = *(temp0_18[0].q + rdx_4)
            arg19 = *(_mm_extract_epi64(temp0_18, 1) + rdi)
            zmm10 = data_1434426e0
            float temp0_19[0x4] = _mm_blendv_ps(zx.o(0), zmm10, arg16)
            float temp0_20[0x4] = _mm_blendv_ps(zx.o(0), zmm10, zmm2)
            arg8 = *(temp0_19[0].q + rbx_1)
            zmm10 = *(_mm_extract_epi64(temp0_19, 1) + rbp_1)
            float (* rax_10)[0x4] = temp0_20[0].q
            float (* rbp_2)[0x4] = _mm_extract_epi64(temp0_20, 1)
            
            if ((temp0_4 & 1) != 0)
                jump(0x14013d699)
            
            return sub_14013d1cb(temp0_4, temp0_4, *(rax_10 + rdx_4), arg9, arg7, arg8, temp0_20, 
                arg10, arg11, arg12, arg13, zmm10, arg14, arg15, zmm13, *(rbp_2 + rdi), arg17)
                __tailcall
        case 0xfffff8c8
            arg9 = __paddq_xmmdq_memdq(__return_addr.o, arg20)
            zmm2 = _mm_add_epi64(__paddq_xmmdq_memdq(arg19, arg21), arg16)
            arg9 = _mm_add_epi64(arg9, arg8)
            arg14 = _mm_shuffle_epi32(arg17, 0x50)
            float temp0_27[0x4] = _mm_blendv_ps(zx.o(0), arg9, arg14)
            arg12 = _mm_shuffle_epi32(arg17, 0xfa)
            float temp0_29[0x4] = _mm_blendv_ps(zx.o(0), zmm2, arg12)
            int64_t rdx_8 = temp0_27[0].q
            int64_t rbp_3 = _mm_extract_epi64(temp0_27, 1)
            zmm10 = data_1434426b0
            float temp0_30[0x4] = _mm_blendv_ps(zx.o(0), zmm10, arg14)
            void* rbx_2 = arg4 + rdx_8
            float temp0_31[0x4] = _mm_blendv_ps(zx.o(0), zmm10, arg12)
            void* rdi_1 = arg4 + rbp_3
            zmm2 = zx.o(*(temp0_30[0].q + rbx_2))
            int64_t rax_14 = _mm_extract_epi64(temp0_30, 1)
            zmm10 = data_1434426c0
            float temp0_32[0x4] = _mm_blendv_ps(zx.o(0), zmm10, arg14)
            zmm2 = __pinsrw_xmmdq_memw_immb(zmm2, *(rax_14 + rdi_1), 1)
            zmm5 = __pinsrw_xmmdq_memw_immb(zx.o(*(temp0_32[0].q + rbx_2)), 
                *(_mm_extract_epi64(temp0_32, 1) + rdi_1), 1)
            int64_t rax_17 = temp0_29[0].q
            void* rbx_4 = arg4 + rax_17
            float temp0_35[0x4] = _mm_blendv_ps(zx.o(0), zmm10, arg12)
            zmm2 = __pinsrw_xmmdq_memw_immb(zmm2, *(temp0_31[0].q + rbx_4), 2)
            zmm5 = __pinsrw_xmmdq_memw_immb(zmm5, *(temp0_35[0].q + rbx_4), 2)
            arg8 = __pinsrw_xmmdq_memw_immb(
                __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rdx_8)), *(arg4 + rbp_3), 1), 
                *(arg4 + rax_17), 2)
            int64_t rax_18 = _mm_extract_epi64(temp0_29, 1)
            arg8 = __pinsrw_xmmdq_memw_immb(arg8, *(arg4 + rax_18), 3)
            void* rax_19 = arg4 + rax_18
            zmm2 = __pinsrw_xmmdq_memw_immb(zmm2, *(_mm_extract_epi64(temp0_31, 1) + rax_19), 3)
            zmm5 = __pinsrw_xmmdq_memw_immb(zmm5, *(_mm_extract_epi64(temp0_35, 1) + rax_19), 3)
            arg8 = _mm_cvtepu16_epi32(arg8[0])
            arg12 = data_1434424d0
            float temp0_45[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(arg8, arg12))
            zmm10 = data_1434426d0
            float temp0_46[0x4] = _mm_div_ps(temp0_45, zmm10)
            float temp0_50[0x4] = _mm_div_ps(
                _mm_cvtepi32_ps(_mm_add_epi32(_mm_cvtepu16_epi32(zmm2[0].q), arg12)), zmm10)
            arg8 = _mm_div_ps(_mm_cvtepi32_ps(_mm_add_epi32(_mm_cvtepu16_epi32(zmm5[0].q), arg12)), 
                zmm10)
            zmm2 = data_143442710
            _mm_mul_ps(temp0_46, zmm2)
            _mm_mul_ps(temp0_50, zmm2)
            _mm_mul_ps(arg8, zmm2)
            jump(sub_14013d1cb+0x530)
        case 0xfffffa67
            zmm5 = _mm_srai_epi32(_mm_slli_epi32(arg17, 0x1f), 0x1f)
            arg14 &= zmm5
            int64_t rax_21 = sx.q(arg14[0])
            void* rdi_4 = arg4 + rax_21
            arg2 = *(arg4 + rax_21)
            int64_t rax_23 = sx.q(_mm_extract_epi32(arg14, 1))
            void* r8_1 = arg4 + rax_23
            int64_t rsi = sx.q(_mm_extract_epi32(arg14, 2))
            void* rbp_5 = arg4 + rsi
            int64_t rdx_12 = sx.q(_mm_extract_epi32(arg14, 3))
            void* rbx_6 = arg4 + rdx_12
            arg18.o = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(arg2, *(arg4 + rax_23), 0x10), *(arg4 + rsi), 0x20), 
                *(arg4 + rdx_12), 0x30)
            zmm2 = data_142fc95e0 & zmm5
            arg14 = *(zx.q(zmm2[0]) + rdi_4)
            uint64_t rax_25 = zx.q(_mm_extract_epi32(zmm2, 1))
            uint64_t rdx_13 = zx.q(_mm_extract_epi32(zmm2, 2))
            uint64_t rsi_1 = zx.q(_mm_extract_epi32(zmm2, 3))
            float temp0_71[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(arg14, *(rax_25 + r8_1), 0x10), *(rdx_13 + rbp_5), 
                    0x20), 
                *(rsi_1 + rbx_6), 0x30)
            arg9 = data_142fc95f0 & zmm5
            arg12 = *(zx.q(arg9[0]) + rdi_4)
            uint64_t rax_27 = zx.q(_mm_extract_epi32(arg9, 1))
            uint64_t rdx_14 = zx.q(_mm_extract_epi32(arg9, 2))
            uint64_t rsi_2 = zx.q(_mm_extract_epi32(arg9, 3))
            float temp0_77[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(arg12, *(rax_27 + r8_1), 0x10), *(rdx_14 + rbp_5), 
                    0x20), 
                *(rsi_2 + rbx_6), 0x30)
            zmm2 = data_143442650 & zmm5
            arg9 = *(zx.q(zmm2[0]) + rdi_4)
            uint64_t rax_29 = zx.q(_mm_extract_epi32(zmm2, 1))
            uint64_t rdx_15 = zx.q(_mm_extract_epi32(zmm2, 2))
            uint64_t rsi_3 = zx.q(_mm_extract_epi32(zmm2, 3))
            float temp0_83[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(arg9, *(rax_29 + r8_1), 0x10), *(rdx_15 + rbp_5), 
                    0x20), 
                *(rsi_3 + rbx_6), 0x30)
            zmm2 = data_143442660 & zmm5
            zmm10 = *(zx.q(zmm2[0]) + rdi_4)
            uint64_t rax_31 = zx.q(_mm_extract_epi32(zmm2, 1))
            uint64_t rdx_16 = zx.q(_mm_extract_epi32(zmm2, 2))
            int32_t* rsi_4 = zx.q(_mm_extract_epi32(zmm2, 3))
            float temp0_89[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm10, *(rax_31 + r8_1), 0x10), *(rdx_16 + rbp_5), 
                    0x20), 
                *(rsi_4 + rbx_6), 0x30)
            zmm5 &= data_143442670
            float arg_30[0x4] = zmm13
            zmm13 = *(zx.q(zmm5[0]) + rdi_4)
            int32_t* rax_33 = zx.q(_mm_extract_epi32(zmm5, 1))
            int32_t* rdx_17 = zx.q(_mm_extract_epi32(zmm5, 2))
            int32_t* rdi_5 = zx.q(_mm_extract_epi32(zmm5, 3))
            float temp0_95[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm13, *(rax_33 + r8_1), 0x10), *(rdx_17 + rbp_5), 
                    0x20), 
                *(rdi_5 + rbx_6), 0x30)
            zmm2 = __paddq_xmmdq_memdq(__return_addr.o, arg20)
            zmm5 = _mm_add_epi64(__paddq_xmmdq_memdq(arg19, arg21), arg16)
            float temp0_101[0x4] =
                _mm_blendv_ps(zx.o(0), _mm_add_epi64(zmm2, arg8), _mm_shuffle_epi32(arg17, 0x50))
            float temp0_103[0x4] = _mm_blendv_ps(zx.o(0), zmm5, _mm_shuffle_epi32(arg17, 0xfa))
            int64_t rax_34 = temp0_101[0].q
            int64_t rdx_18 = _mm_extract_epi64(temp0_101, 1)
            int64_t rbp_6 = temp0_103[0].q
            int64_t rbx_7 = _mm_extract_epi64(temp0_103, 1)
            arg8 = __pinsrd_xmmdq_memd_immb(
                __pinsrd_xmmdq_memd_immb(
                    __pinsrd_xmmdq_memd_immb(zx.o(*(arg4 + rax_34)), *(arg4 + rdx_18), 1), 
                    *(arg4 + rbp_6), 2), 
                *(arg4 + rbx_7), 3)
            zmm2 = arg8
            zmm5 = _mm_srli_epi32(arg8, 0xa) & data_143442480
            arg8 &= data_143442680
            zmm2 = _mm_srli_epi32(zmm2, 0x15)
            __addps_xmmps_memps(
                _mm_mul_ps(
                    __divps_xmmps_memps(_mm_cvtepi32_ps(__paddd_xmmdq_memdq(arg8, data_143442490)), 
                        data_1434426a0), 
                    temp0_83), 
                arg18.o)
            arg8 = data_143442440
            float temp0_115[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(zmm5, arg8))
            zmm5 = data_143442690
            _mm_add_ps(_mm_mul_ps(_mm_div_ps(temp0_115, zmm5), temp0_89), temp0_71)
            _mm_add_ps(
                _mm_mul_ps(_mm_div_ps(_mm_cvtepi32_ps(_mm_add_epi32(zmm2, arg8)), zmm5), temp0_95), 
                temp0_77)
            jump(sub_14013d1cb+0x530)

if ((temp0_4 & 4) != 0)
    arg8 = zx.o(0)
    _mm_blend_epi16(arg8, arg8, 0x30)

if ((temp0_4 & 8) == 0)
    jump(0x14013d257)

jump(0x14013d251)
