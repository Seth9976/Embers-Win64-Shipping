// 函数: sub_14020cd00
// 地址: 0x14020cd00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm6[0x4]
int64_t zmm7[0x2]
int32_t zmm15[0x4]

do
    zmm15 = arg7
    int32_t temp0_1[0x4] = _mm_add_epi32(arg7, arg7)
    arg7 = _mm_shuffle_epi32(temp0_1, 0x4e)
    zmm7 = __paddq_xmmdq_memdq(_mm_cvtepi32_epi64(temp0_1[0].q), arg18)
    char temp0_5 = _mm_movemask_ps(arg10)
    
    if ((temp0_5 & 1) == 0)
        arg7 = _mm_cvtepi32_epi64(arg7[0].q)
        zmm6 = arg17
        
        if ((temp0_5 & 2) != 0)
            goto label_14020cccf
        
        goto label_14020cd34
    
    arg11 = _mm_insert_epi32(arg11, zx.d(*zmm7[0]), 0)
    arg7 = _mm_cvtepi32_epi64(arg7[0].q)
    zmm6 = arg17
    
    if ((temp0_5 & 2) != 0)
    label_14020cccf:
        arg11 = _mm_insert_epi32(arg11, zx.d(*_mm_extract_epi64(zmm7, 1)), 1)
        arg7 = __paddq_xmmdq_memdq(arg7, arg25)
        
        if ((temp0_5 & 4) == 0)
            goto label_14020cd42
        
        goto label_14020cceb
    
label_14020cd34:
    arg7 = __paddq_xmmdq_memdq(arg7, arg25)
    
    if ((temp0_5 & 4) != 0)
    label_14020cceb:
        arg11 = _mm_insert_epi32(arg11, zx.d(*arg7[0].q), 2)
        
        if ((temp0_5 & 8) != 0)
            arg11 = _mm_insert_epi32(arg11, zx.d(*_mm_extract_epi64(arg7, 1)), 3)
    else
    label_14020cd42:
        
        if ((temp0_5 & 8) != 0)
            arg11 = _mm_insert_epi32(arg11, zx.d(*_mm_extract_epi64(arg7, 1)), 3)
    
    arg10 = zx.o(0)
    arg7 = _mm_cmpgt_epi32(_mm_blend_epi16(arg11, arg10, 0xaa), arg12) & arg9
    arg3 = _mm_blendv_ps(arg3, arg8, arg7)
    
    if (_mm_movemask_ps(arg7 & arg15) != arg5)
        arg10 = arg7 ^ arg9
    
    arg7 = __psubd_xmmdq_memdq(zmm15, data_142d3f800)
    arg9 = _mm_cmpgt_epi32(zmm6, arg7) & arg10
    arg10 = arg9 & arg15
    arg5 = _mm_movemask_ps(arg10)
    arg8 = zmm15
while (arg5 != 0)

if (_mm_movemask_ps(_mm_andnot_ps(arg35, arg15)) == 0)
    arg13 = arg23
    arg11 = arg27
    zmm15 = arg25
    zmm7 = arg18
else
    arg7 = arg35 ^ data_142d3f800
    arg3 = _mm_blendv_ps(arg3, zx.o(0), arg7)
    int32_t temp0_19[0x4] = _mm_cmpeq_epi32(arg17, arg17)
    arg13 = _mm_add_epi32(arg13, temp0_19)
    arg11 = _mm_cmpgt_epi32(arg13, zx.o(0)) & arg7
    arg7 = arg11 & arg15
    uint32_t i = _mm_movemask_ps(arg7)
    
    if (i == 0)
        zmm15 = arg25
        zmm7 = arg18
    else
        zmm15 = arg25
        zmm7 = arg18
        
        do
            arg8 = _mm_add_epi32(arg13, arg13)
            arg10 = _mm_shuffle_epi32(arg8, 0x4e)
            arg8 = _mm_add_epi64(_mm_cvtepi32_epi64(arg8[0].q), zmm7)
            char temp0_32 = _mm_movemask_ps(arg7)
            
            if ((temp0_32 & 1) == 0)
                arg7 = _mm_cvtepi32_epi64(arg10[0].q)
                
                if ((temp0_32 & 2) != 0)
                    goto label_14020ce45
                
                goto label_14020ce9a
            
            arg9 = _mm_insert_epi32(arg9, zx.d(*arg8[0].q), 0)
            arg7 = _mm_cvtepi32_epi64(arg10[0].q)
            
            if ((temp0_32 & 2) != 0)
            label_14020ce45:
                arg9 = _mm_insert_epi32(arg9, zx.d(*_mm_extract_epi64(arg8, 1)), 1)
                arg7 = _mm_add_epi64(arg7, zmm15)
                
                if ((temp0_32 & 4) == 0)
                    goto label_14020cea4
                
                goto label_14020ce5d
            
        label_14020ce9a:
            arg7 = _mm_add_epi64(arg7, zmm15)
            
            if ((temp0_32 & 4) != 0)
            label_14020ce5d:
                arg9 = _mm_insert_epi32(arg9, zx.d(*arg7[0].q), 2)
                
                if ((temp0_32 & 8) != 0)
                    arg9 = _mm_insert_epi32(arg9, zx.d(*_mm_extract_epi64(arg7, 1)), 3)
            else
            label_14020cea4:
                
                if ((temp0_32 & 8) != 0)
                    arg9 = _mm_insert_epi32(arg9, zx.d(*_mm_extract_epi64(arg7, 1)), 3)
            
            arg7 = _mm_cmpgt_epi32(_mm_blend_epi16(arg9, zx.o(0), 0xaa), arg12) & not.o(arg11)
            arg3 = _mm_blendv_ps(arg3, arg13, arg7)
            arg10 = zx.o(0)
            
            if (_mm_movemask_ps(arg7 & arg15) != i)
                arg10 = arg7 ^ arg11
            
            arg13 = _mm_add_epi32(arg13, temp0_19)
            arg11 = _mm_cmpgt_epi32(arg13, zx.o(0)) & arg10
            arg7 = arg11 & arg15
            i = _mm_movemask_ps(arg7)
        while (i != 0)
    
    arg13 = arg23
    arg11 = arg27

float temp0_43[0x4] = _mm_blendv_ps(arg14, arg3, arg15)
arg8 = _mm_add_epi32(temp0_43, temp0_43)
arg7 = _mm_shuffle_epi32(arg8, 0x4e)
arg8 = _mm_add_epi64(_mm_cvtepi32_epi64(arg8[0].q), zmm7)

if ((arg2 & 1) == 0)
    arg7 = _mm_cvtepi32_epi64(arg7[0].q)
    arg3 = arg21
    
    if ((arg2 & 2) != 0)
        goto label_14020d4d0
    
    goto label_14020d3ce

arg12 = zx.o(*arg8[0].q)
arg7 = _mm_cvtepi32_epi64(arg7[0].q)
arg3 = arg21

if ((arg2 & 2) != 0)
label_14020d4d0:
    arg12 = _mm_insert_epi32(arg12, zx.d(*_mm_extract_epi64(arg8, 1)), 1)
    arg7 = _mm_add_epi64(arg7, zmm15)
    
    if ((arg2 & 4) == 0)
        goto label_14020d3dc
    
    goto label_14020d4ed

label_14020d3ce:
arg7 = _mm_add_epi64(arg7, zmm15)

if ((arg2 & 4) != 0)
label_14020d4ed:
    arg12 = _mm_insert_epi32(arg12, zx.d(*arg7[0].q), 2)
    
    if ((arg2 & 8) != 0)
        arg12 = _mm_insert_epi32(arg12, zx.d(*_mm_extract_epi64(arg7, 1)), 3)
else
label_14020d3dc:
    
    if ((arg2 & 8) != 0)
        arg12 = _mm_insert_epi32(arg12, zx.d(*_mm_extract_epi64(arg7, 1)), 3)

arg11 = _mm_blendv_ps(arg11, _mm_sub_epi32(temp0_43, _mm_cmpeq_epi32(arg7, arg7)), arg15)
zmm6 = _mm_cmpgt_epi32(zmm6, arg11) & not.o(arg15)

if (_mm_movemask_ps(zmm6) != 0)
    arg11 = _mm_blendv_ps(arg11, arg3, zmm6)

zmm7 = arg19
arg17 = arg29
arg8 = _mm_add_epi32(arg11, arg11)
arg7 = _mm_shuffle_epi32(arg8, 0x4e)
arg8 = _mm_cvtepi32_epi64(arg8[0].q)
int32_t temp0_60[0x4] = _mm_add_epi64(arg18, arg8)

if ((arg2 & 1) == 0)
    arg7 = _mm_cvtepi32_epi64(arg7[0].q)
    
    if ((arg2 & 2) != 0)
        goto label_14020d532
    
    goto label_14020d469

arg8 = zx.o(*temp0_60[0].q)
arg7 = _mm_cvtepi32_epi64(arg7[0].q)

if ((arg2 & 2) != 0)
label_14020d532:
    arg8 = _mm_insert_epi32(arg8, zx.d(*_mm_extract_epi64(temp0_60, 1)), 1)
    zmm15 = _mm_add_epi64(zmm15, arg7)
    
    if ((arg2 & 4) == 0)
        goto label_14020d477
    
    goto label_14020d54e

label_14020d469:
zmm15 = _mm_add_epi64(zmm15, arg7)

if ((arg2 & 4) != 0)
label_14020d54e:
    arg8 = _mm_insert_epi32(arg8, zx.d(*zmm15[0].q), 2)
    arg7 = zx.o(0)
    
    if ((arg2 & 8) != 0)
        arg8 = _mm_insert_epi32(arg8, zx.d(*_mm_extract_epi64(zmm15, 1)), 3)
else
label_14020d477:
    arg7 = zx.o(0)
    
    if ((arg2 & 8) != 0)
        arg8 = _mm_insert_epi32(arg8, zx.d(*_mm_extract_epi64(zmm15, 1)), 3)

int32_t temp0_64[0x4] = _mm_blend_epi16(arg12, arg7, 0xaa)
int32_t temp0_65[0x4] = _mm_blend_epi16(zx.o(0), arg8, 0x55)
arg8 = arg26 ^ data_142d3f800
arg3 = zx.o(0)

if (arg58 != 1)
    int32_t temp0_75[0x4] = __pmaxsd_xmmdq_memdq(_mm_sub_epi32(temp0_65, temp0_64), data_142d3f5b0)
    arg3 = _mm_div_ps(_mm_sub_ps(_mm_shuffle_ps(arg32, arg32, 0), _mm_cvtepi32_ps(temp0_64)), 
        _mm_cvtepi32_ps(temp0_75))

arg12 = arg38
arg13 = _mm_blendv_ps(arg13, _mm_blendv_ps(zx.o(0), arg3, arg8), arg16)
arg32 = arg11
arg16 = arg24
arg15 = arg20
arg3 = _mm_cvtepu32_epi64(arg34[0].q)
arg9 = _mm_cvtepu32_epi64(_mm_shuffle_epi32(arg34, 0x4e)[0].q)
arg25 = temp0_43
int32_t temp0_86[0x4] = _mm_mullo_epi32(temp0_43, arg15)
arg8 = _mm_cvtepi32_epi64(temp0_86[0].q)
arg7 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(temp0_86, 0x4e)[0].q)
int32_t arg_f0[0x4] = arg7
arg34 = arg9
int32_t temp0_90[0x4] = _mm_add_epi64(arg7, arg9)
float arg_d0[0x4] = arg8
arg18 = arg3
float arg_180[0x4] = _mm_add_epi64(_mm_add_epi64(arg8, arg3), arg16)
int32_t arg_a0[0x4] = __paddq_xmmdq_memdq(temp0_90, __return_addr.o)
arg14 = __pcmpeqd_xmmdq_memdq(data_142d3f5b0, arg33)
arg9 = arg14 & arg17
arg7 = _mm_slli_epi32(arg9, 0x1f)
arg23 = arg13
arg21 = arg14

if (_mm_movemask_ps(arg7) != 0)
    arg7 = arg22
    arg11 = zx.o(0)
    int32_t temp0_97[0x4] = _mm_cmpeq_epi32(data_143442c60 & arg7, arg11)
    arg10 = _mm_slli_epi32(arg9 & temp0_97, 0x1f)
    char temp0_99 = _mm_movemask_ps(arg10)
    
    if (temp0_99 != 0)
        int32_t temp0_100[0x4] = _mm_srai_epi32(arg10, 0x1f)
        int32_t temp0_101[0x4] = __paddq_xmmdq_memdq(arg37, arg34)
        zmm7 = __paddq_xmmdq_memdq(arg12, arg18)
        arg12 = data_1434426c0
        zmm7 = __paddq_xmmdq_memdq(zmm7, arg_d0)
        int32_t temp0_105[0x4] = _mm_add_epi64(__paddq_xmmdq_memdq(temp0_101, arg_f0), arg12)
        zmm7 = _mm_add_epi64(zmm7, arg12)
        arg8 = _mm_shuffle_epi32(temp0_100, 0x50)
        arg3 = _mm_blendv_ps(zx.o(0), zmm7, arg8)
        arg10 = _mm_shuffle_epi32(temp0_100, 0xfa)
        zmm7 = _mm_blendv_ps(zx.o(0), temp0_105, arg10)
        int64_t rax_32 = _mm_extract_epi64(arg3, 1)
        void* rbp = arg4 + rax_32
        arg15 = *(arg4 + rax_32)
        int64_t rax_33 = zmm7[0]
        int64_t rsi_1 = _mm_extract_epi64(zmm7, 1)
        void* rdi_1 = arg4 + rax_33
        zmm7 = _mm_blendv_ps(zx.o(0), arg12, arg8)
        arg16 = *(arg4 + rax_33)
        zmm6 = _mm_blendv_ps(zx.o(0), arg12, arg10)
        arg26 = *(arg4 + rsi_1)
        void* rbx_4 = arg3[0].q + arg4
        arg3 = *(zmm7[0] + rbx_4)
        arg13 = *(_mm_extract_epi64(zmm7, 1) + rbp)
        zmm15 = *(zmm6[0].q + rdi_1)
        void* rsi_2 = arg4 + rsi_1
        arg27 = *(_mm_extract_epi64(zmm6, 1) + rsi_2)
        zmm6 = data_1434426e0
        zmm7 = _mm_blendv_ps(zx.o(0), zmm6, arg8)
        float temp0_114[0x4] = _mm_blendv_ps(arg11, zmm6, arg10)
        zmm6 = *(zmm7[0] + rbx_4)
        arg10 = *(_mm_extract_epi64(zmm7, 1) + rbp)
        float (* rax_40)[0x4] = temp0_114[0].q
        int64_t rbp_1 = _mm_extract_epi64(temp0_114, 1)
        arg8 = *(rax_40 + rdi_1)
        arg7 = *(rbp_1 + rsi_2)
        bool cond:6_1
        bool cond:7_1
        bool cond:10_1
        bool cond:11_1
        
        if ((temp0_99 & 1) == 0)
            char temp1_1 = temp0_99 & 2
            cond:6_1 = temp1_1 != 0
            cond:7_1 = temp1_1 == 0
            cond:10_1 = temp1_1 != 0
            cond:11_1 = temp1_1 == 0
            
            if (temp1_1 == 0)
                goto label_14020d9b5
            
            goto label_14020d94f
        
        arg12 = *rbx_4
        char temp0_119 = temp0_99 & 2
        cond:6_1 = temp0_119 != 0
        cond:7_1 = temp0_119 == 0
        cond:10_1 = temp0_119 != 0
        cond:11_1 = temp0_119 == 0
        
        if (temp0_119 == 0)
        label_14020d9b5:
            zmm7 = arg19
            arg11 = arg3
            
            if (cond:7_1)
                goto label_14020d961
            
            goto label_14020d9c0
        
    label_14020d94f:
        arg12 = _mm_insert_ps(arg12, arg15, 0x10)
        zmm7 = arg19
        arg11 = arg3
        
        if (not(cond:6_1))
        label_14020d961:
            
            if (cond:11_1)
                goto label_14020d9c9
            
            goto label_14020d963
        
    label_14020d9c0:
        arg11 = _mm_insert_ps(arg11, arg13, 0x10)
        bool cond:16_1
        bool cond:17_1
        bool cond:22_1
        bool cond:23_1
        
        if (not(cond:10_1))
        label_14020d9c9:
            char temp4_1 = temp0_99 & 4
            cond:16_1 = temp4_1 != 0
            cond:17_1 = temp4_1 == 0
            cond:22_1 = temp4_1 != 0
            cond:23_1 = temp4_1 == 0
            arg13 = arg23
            
            if (temp4_1 == 0)
                goto label_14020d974
            
            goto label_14020d9d4
        
    label_14020d963:
        zmm6 = _mm_insert_ps(zmm6, arg10, 0x10)
        char temp3_1 = temp0_99 & 4
        cond:16_1 = temp3_1 != 0
        cond:17_1 = temp3_1 == 0
        cond:22_1 = temp3_1 != 0
        cond:23_1 = temp3_1 == 0
        arg13 = arg23
        
        if (temp3_1 == 0)
        label_14020d974:
            arg16 = arg24
            arg15 = arg20
            
            if (cond:17_1)
                goto label_14020d9eb
            
            goto label_14020d984
        
    label_14020d9d4:
        arg12 = _mm_insert_ps(arg12, arg16, 0x20)
        arg16 = arg24
        arg15 = arg20
        
        if (not(cond:16_1))
        label_14020d9eb:
            
            if (cond:23_1)
                goto label_14020d98d
            
            goto label_14020d9ed
        
    label_14020d984:
        arg11 = _mm_insert_ps(arg11, zmm15, 0x20)
        bool cond:38_1
        bool cond:39_1
        bool cond:51_1
        bool cond:52_1
        
        if (not(cond:22_1))
        label_14020d98d:
            char temp13_1 = temp0_99 & 8
            cond:38_1 = temp13_1 != 0
            cond:39_1 = temp13_1 == 0
            cond:51_1 = temp13_1 == 0
            cond:52_1 = temp13_1 != 0
            
            if (temp13_1 == 0)
                goto label_14020d9f8
            
            goto label_14020d992
        
    label_14020d9ed:
        zmm6 = _mm_insert_ps(zmm6, arg8, 0x20)
        char temp12_1 = temp0_99 & 8
        cond:38_1 = temp12_1 != 0
        cond:39_1 = temp12_1 == 0
        cond:51_1 = temp12_1 == 0
        cond:52_1 = temp12_1 != 0
        
        if (temp12_1 == 0)
        label_14020d9f8:
            
            if (cond:39_1)
                goto label_14020d9a0
            
            goto label_14020d9fa
        
    label_14020d992:
        arg12 = __insertps_xmmps_memd_immb(arg12, arg26[0], 0x30)
        
        if (cond:38_1)
        label_14020d9fa:
            arg11 = __insertps_xmmps_memd_immb(arg11, arg27[0], 0x30)
            
            if (not(cond:51_1))
                zmm6 = _mm_insert_ps(zmm6, arg7, 0x30)
        else
        label_14020d9a0:
            
            if (cond:52_1)
                zmm6 = _mm_insert_ps(zmm6, arg7, 0x30)
    
    arg17 = temp0_97 & not.o(arg9)
    arg10 = _mm_slli_epi32(arg17, 0x1f)
    char temp0_126 = _mm_movemask_ps(arg10)
    
    if (temp0_126 == 0)
        arg17 = arg29
    else
        arg8 = _mm_srai_epi32(_mm_slli_epi32(arg30, 0x1f), 0x1f)
        arg10 = _mm_srai_epi32(arg10, 0x1f) & arg8
        arg26 = arg11
        arg9 = zmm7
        
        if (_mm_movemask_ps(arg10) == 0)
            arg14 = arg_180
            arg13 = arg_a0
        else
            arg3 = data_1434426c0
            int32_t temp0_131[0x4] = _mm_add_epi64(arg_a0, arg3)
            zmm7 = _mm_add_epi64(arg_180, arg3)
            float temp0_133[0x4] = _mm_unpacklo_ps(arg10, arg10[0].q)
            arg14 = _mm_blendv_ps(arg_180, zmm7, temp0_133)
            int32_t temp0_135[0x4] = _mm_unpackhi_epi32(arg10, arg10[0].q)
            arg13 = _mm_blendv_ps(arg_a0, temp0_131, temp0_135)
            int32_t temp0_137[0x4] = __paddq_xmmdq_memdq(arg37, arg34)
            zmm7 = __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(arg38, arg18), arg_d0)
            int32_t temp0_141[0x4] = _mm_add_epi64(__paddq_xmmdq_memdq(temp0_137, arg_f0), arg3)
            arg3 = _mm_blendv_ps(zx.o(0), _mm_add_epi64(zmm7, arg3), temp0_133)
            zmm7 = _mm_blendv_ps(zx.o(0), temp0_141, temp0_135)
            arg11 = *(arg4 + arg3[0].q)
            int64_t rax_43 = _mm_extract_epi64(arg3, 1)
            int64_t rbp_2 = zmm7[0]
            int64_t rbx_5 = _mm_extract_epi64(zmm7, 1)
            arg11 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(arg11, *(arg4 + rax_43), 0x10), *(arg4 + rbp_2), 
                    0x20), 
                *(arg4 + rbx_5), 0x30)
        
        arg10 = _mm_blendv_ps(zx.o(0), arg11, arg8)
        
        if ((temp0_126 & 1) != 0)
            arg12 = _mm_blend_ps(arg12, arg10, 1)
            arg7 = arg22
            zmm7 = arg9
            
            if ((temp0_126 & 2) != 0)
                goto label_14020dba2
            
            goto label_14020db80
        
        arg7 = arg22
        zmm7 = arg9
        
        if ((temp0_126 & 2) != 0)
        label_14020dba2:
            arg12 = _mm_blend_ps(arg12, arg10, 2)
            
            if ((temp0_126 & 4) != 0)
                goto label_14020db85
            
            goto label_14020dbae
        
    label_14020db80:
        
        if ((temp0_126 & 4) == 0)
        label_14020dbae:
            
            if ((temp0_126 & 8) != 0)
                arg12 = _mm_blend_ps(arg12, arg10, 8)
        else
        label_14020db85:
            arg12 = _mm_blend_ps(arg12, arg10, 4)
            
            if ((temp0_126 & 8) != 0)
                arg12 = _mm_blend_ps(arg12, arg10, 8)
        
        arg11 = data_143442c40
        arg8 = arg7 & arg11
        arg11 = _mm_slli_epi32(_mm_cmpeq_epi32(arg11, arg8) & arg17, 0x1f)
        char temp0_155 = _mm_movemask_ps(arg11)
        
        if (temp0_155 == 0)
            arg11 = arg26
            zmm6 = zmm6
            arg16 = arg24
            arg15 = arg20
        else
            arg11 = _mm_srai_epi32(arg11, 0x1f)
            arg3 = data_1434426c0
            int32_t temp0_157[0x4] = _mm_add_epi64(arg13, arg3)
            arg10 = _mm_blendv_ps(arg14, _mm_add_epi64(arg3, arg14), _mm_shuffle_epi32(arg11, 0x50))
            arg7 = _mm_shuffle_epi32(arg11, 0xfa)
            float temp0_162[0x4] = _mm_blendv_ps(arg13, temp0_157, arg7)
            
            if ((temp0_155 & 1) != 0)
                arg7 = *arg14[0].q
            
            if ((temp0_155 & 2) != 0)
                arg7 = __insertps_xmmps_memd_immb(arg7, *_mm_extract_epi64(arg14, 1), 0x10)
            
            zmm6 = zmm6
            arg16 = arg24
            arg15 = arg20
            
            if ((temp0_155 & 4) != 0)
                arg7 = __insertps_xmmps_memd_immb(arg7, *arg13[0].q, 0x20)
            
            if ((temp0_155 & 8) != 0)
                arg7 = __insertps_xmmps_memd_immb(arg7, *_mm_extract_epi64(arg13, 1), 0x30)
            
            arg14 = arg10
            arg13 = temp0_162
            arg11 = arg26
        
        arg8 = _mm_cmpeq_epi32(arg8, zx.o(0)) & not.o(arg7)
        
        if ((temp0_126 & 1) != 0)
            arg11 = _mm_blend_epi16(arg11, arg8, 3)
            
            if ((temp0_126 & 2) != 0)
                goto label_14020dcd7
            
            goto label_14020dcc0
        
        if ((temp0_126 & 2) != 0)
        label_14020dcd7:
            arg11 = _mm_blend_epi16(arg11, arg8, 0xc)
            
            if ((temp0_126 & 4) != 0)
                goto label_14020dcc5
            
            goto label_14020dce2
        
    label_14020dcc0:
        
        if ((temp0_126 & 4) == 0)
        label_14020dce2:
            
            if ((temp0_126 & 8) != 0)
                arg11 = _mm_blend_epi16(arg11, arg8, 0xc0)
        else
        label_14020dcc5:
            arg11 = _mm_blend_epi16(arg11, arg8, 0x30)
            
            if ((temp0_126 & 8) != 0)
                arg11 = _mm_blend_epi16(arg11, arg8, 0xc0)
        
        arg8 = data_143442c50
        arg7 = arg22 & arg8
        arg8 = _mm_cmpeq_epi32(arg8, arg7)
        char temp0_173 = _mm_movemask_ps(_mm_slli_epi32(arg17 & arg8, 0x1f))
        
        if (temp0_173 == 0)
            arg13 = arg23
            arg17 = arg29
            arg14 = arg21
        else
            if ((temp0_173 & 1) == 0)
                if ((temp0_173 & 2) != 0)
                    goto label_14020df34
                
                goto label_14020dd2f
            
            arg8 = *arg14[0].q
            
            if ((temp0_173 & 2) != 0)
            label_14020df34:
                arg8 = __insertps_xmmps_memd_immb(arg8, *_mm_extract_epi64(arg14, 1), 0x10)
                arg14 = arg21
                arg17 = arg29
                
                if ((temp0_173 & 4) == 0)
                    goto label_14020dd4a
                
                goto label_14020df5a
            
        label_14020dd2f:
            arg14 = arg21
            arg17 = arg29
            
            if ((temp0_173 & 4) != 0)
            label_14020df5a:
                arg8 = __insertps_xmmps_memd_immb(arg8, *arg13[0].q, 0x20)
                
                if ((temp0_173 & 8) != 0)
                    arg8 = __insertps_xmmps_memd_immb(arg8, *_mm_extract_epi64(arg13, 1), 0x30)
            else
            label_14020dd4a:
                
                if ((temp0_173 & 8) != 0)
                    arg8 = __insertps_xmmps_memd_immb(arg8, *_mm_extract_epi64(arg13, 1), 0x30)
            
            arg13 = arg23
        
        arg7 = _mm_cmpeq_epi32(arg7, zx.o(0)) & not.o(arg8)
        
        if ((temp0_126 & 1) != 0)
            zmm6 = _mm_blend_ps(zmm6, arg7, 1)
            
            if ((temp0_126 & 2) != 0)
                goto label_14020ddaf
            
            goto label_14020dd98
        
        if ((temp0_126 & 2) != 0)
        label_14020ddaf:
            zmm6 = _mm_blend_ps(zmm6, arg7, 2)
            
            if ((temp0_126 & 4) != 0)
                goto label_14020dd9d
            
            goto label_14020ddba
        
    label_14020dd98:
        
        if ((temp0_126 & 4) == 0)
        label_14020ddba:
            
            if ((temp0_126 & 8) != 0)
                zmm6 = _mm_blend_ps(zmm6, arg7, 8)
        else
        label_14020dd9d:
            zmm6 = _mm_blend_ps(zmm6, arg7, 4)
            
            if ((temp0_126 & 8) != 0)
                zmm6 = _mm_blend_ps(zmm6, arg7, 8)

arg27 = _mm_cmpeq_epi32(arg7, arg7) ^ arg14

if (_mm_movemask_ps(_mm_slli_epi32(arg14 & not.o(arg17), 0x1f)) == 0)
    zmm15 = arg25
else
    if (arg1 != 0)
        arg26 = arg11
        arg11 = _mm_srai_epi32(_mm_slli_epi32(arg30, 0x1f), 0x1f) & zmm7
        arg8 = arg28 & arg11
        arg28 = zx.o(0)
        uint32_t temp0_185 = _mm_movemask_ps(arg8)
        arg15 = arg16
        zmm15 = __return_addr.o
        arg16 = zx.o(0)
        arg13 = zx.o(0)
        
        if (temp0_185 != 0)
            arg10 = data_1434426c0
            zmm7 = __return_addr.o
            int32_t temp0_186[0x4] = _mm_add_epi64(zmm7, arg10)
            int32_t temp0_187[0x4] = _mm_add_epi64(arg24, arg10)
            arg14 = _mm_unpacklo_epi32(arg8, arg8[0].q)
            arg17 = _mm_blendv_ps(arg24, temp0_187, arg14)
            float temp0_190[0x4] = _mm_unpackhi_ps(arg8, arg8)
            arg7 = temp0_190
            arg9 = _mm_blendv_ps(zmm7, temp0_186, arg7)
            char rdx_5 = temp0_185.b
            
            if ((rdx_5 & 1) == 0)
                if ((rdx_5 & 2) != 0)
                    goto label_14020df88
                
                goto label_14020deb2
            
            arg7 = *arg24[0].q
            
            if ((rdx_5 & 2) != 0)
            label_14020df88:
                arg7 = __insertps_xmmps_memd_immb(arg7, *_mm_extract_epi64(arg24, 1), 0x10)
                zmm6 = zmm6
                
                if ((rdx_5 & 4) == 0)
                    goto label_14020debf
                
                goto label_14020dfa5
            
        label_14020deb2:
            zmm6 = zmm6
            
            if ((rdx_5 & 4) == 0)
            label_14020debf:
                
                if ((rdx_5 & 8) != 0)
                    goto label_14020dfc0
                
                goto label_14020dec8
            
        label_14020dfa5:
            arg7 = __insertps_xmmps_memd_immb(arg7, *__return_addr.o[0], 0x20)
            char rbp_7
            
            if ((rdx_5 & 8) != 0)
            label_14020dfc0:
                arg7 =
                    __insertps_xmmps_memd_immb(arg7, *_mm_extract_epi64(__return_addr.o, 1), 0x30)
                rbp_7 = _mm_movemask_ps(arg11)
                arg16 = zx.o(0)
                
                if ((rbp_7 & 1) != 0)
                    goto label_14020deda
                
                goto label_14020dfd8
            
        label_14020dec8:
            rbp_7 = _mm_movemask_ps(arg11)
            arg16 = zx.o(0)
            
            if ((rbp_7 & 1) != 0)
            label_14020deda:
                arg16 = _mm_blend_epi16(arg16, arg7, 3)
                
                if ((rbp_7 & 2) != 0)
                    goto label_14020dfe2
                
                goto label_14020deeb
            
        label_14020dfd8:
            
            if ((rbp_7 & 2) != 0)
            label_14020dfe2:
                arg16 = _mm_blend_epi16(arg16, arg7, 0xc)
                
                if ((rbp_7 & 4) != 0)
                    goto label_14020def5
                
                goto label_14020dff3
            
        label_14020deeb:
            
            if ((rbp_7 & 4) == 0)
            label_14020dff3:
                
                if ((rbp_7 & 8) != 0)
                    arg16 = _mm_blend_epi16(arg16, arg7, 0xc0)
            else
            label_14020def5:
                arg16 = _mm_blend_epi16(arg16, arg7, 0x30)
                
                if ((rbp_7 & 8) != 0)
                    arg16 = _mm_blend_epi16(arg16, arg7, 0xc0)
            
            arg11 = _mm_add_epi64(arg9, arg10)
            arg15 = _mm_blendv_ps(arg17, _mm_add_epi64(arg10, arg17), arg14)
            arg7 = temp0_190
            zmm15 = _mm_blendv_ps(arg9, arg11, arg7)
            
            if ((rdx_5 & 1) == 0)
                if ((rdx_5 & 2) != 0)
                    goto label_14020e087
                
                goto label_14020e032
            
            arg7 = *arg17[0].q
            
            if ((rdx_5 & 2) != 0)
            label_14020e087:
                arg7 = __insertps_xmmps_memd_immb(arg7, *_mm_extract_epi64(arg17, 1), 0x10)
                arg17 = arg29
                
                if ((rdx_5 & 4) == 0)
                    goto label_14020e041
                
                goto label_14020e0a1
            
        label_14020e032:
            arg17 = arg29
            
            if ((rdx_5 & 4) == 0)
            label_14020e041:
                
                if ((rdx_5 & 8) != 0)
                    goto label_14020e0b3
                
                goto label_14020e046
            
        label_14020e0a1:
            arg7 = __insertps_xmmps_memd_immb(arg7, *arg9[0].q, 0x20)
            
            if ((rdx_5 & 8) != 0)
            label_14020e0b3:
                arg7 = __insertps_xmmps_memd_immb(arg7, *_mm_extract_epi64(arg9, 1), 0x30)
                arg13 = zx.o(0)
                
                if ((rbp_7 & 1) != 0)
                    goto label_14020e050
                
                goto label_14020e0c3
            
        label_14020e046:
            arg13 = zx.o(0)
            
            if ((rbp_7 & 1) != 0)
            label_14020e050:
                arg13 = _mm_blend_ps(arg13, arg7, 1)
                
                if ((rbp_7 & 2) != 0)
                    goto label_14020e0c9
                
                goto label_14020e05d
            
        label_14020e0c3:
            
            if ((rbp_7 & 2) != 0)
            label_14020e0c9:
                arg13 = _mm_blend_ps(arg13, arg7, 2)
                
                if ((rbp_7 & 4) != 0)
                    goto label_14020e063
                
                goto label_14020e0d6
            
        label_14020e05d:
            
            if ((rbp_7 & 4) == 0)
            label_14020e0d6:
                
                if ((rbp_7 & 8) != 0)
                    arg13 = _mm_blend_ps(arg13, arg7, 8)
            else
            label_14020e063:
                arg13 = _mm_blend_ps(arg13, arg7, 4)
                
                if ((rbp_7 & 8) != 0)
                    arg13 = _mm_blend_ps(arg13, arg7, 8)
        
        arg7 = data_143442c40
        arg11 = _mm_cmpeq_epi32(arg22 & arg7, arg7) & arg19
        arg9 = _mm_slli_epi32(arg11 & arg17, 0x1f)
        char temp0_216 = _mm_movemask_ps(arg9)
        arg35 = zmm6
        
        if (temp0_216 == 0)
            arg14 = zx.o(0)
            zmm6 = arg22
        else
            int32_t temp0_217[0x4] = _mm_srai_epi32(arg9, 0x1f)
            arg10 = data_1434426c0
            int32_t temp0_218[0x4] = _mm_add_epi64(zmm15, arg10)
            zmm7 = _mm_add_epi64(arg15, arg10)
            arg8 = _mm_shuffle_epi32(temp0_217, 0x50)
            arg3 = _mm_blendv_ps(arg15, zmm7, arg8)
            arg9 = _mm_shuffle_epi32(temp0_217, 0xfa)
            arg7 = arg9
            zmm7 = _mm_blendv_ps(zmm15, temp0_218, arg7)
            
            if ((temp0_216 & 1) == 0)
                if ((temp0_216 & 2) != 0)
                    goto label_14020e1cd
                
                goto label_14020e174
            
            arg7 = *arg15[0].q
            
            if ((temp0_216 & 2) != 0)
            label_14020e1cd:
                arg7 = __insertps_xmmps_memd_immb(arg7, *_mm_extract_epi64(arg15, 1), 0x10)
                
                if ((temp0_216 & 4) == 0)
                    goto label_14020e179
                
                goto label_14020e1dd
            
        label_14020e174:
            
            if ((temp0_216 & 4) == 0)
            label_14020e179:
                
                if ((temp0_216 & 8) != 0)
                    goto label_14020e1ef
                
                goto label_14020e17e
            
        label_14020e1dd:
            arg7 = __insertps_xmmps_memd_immb(arg7, *zmm15[0].q, 0x20)
            char rbp_8
            
            if ((temp0_216 & 8) != 0)
            label_14020e1ef:
                arg7 = __insertps_xmmps_memd_immb(arg7, *_mm_extract_epi64(zmm15, 1), 0x30)
                rbp_8 = _mm_movemask_ps(arg11)
                arg11 = zx.o(0)
                
                if ((rbp_8 & 1) != 0)
                    goto label_14020e18a
                
                goto label_14020e201
            
        label_14020e17e:
            rbp_8 = _mm_movemask_ps(arg11)
            arg11 = zx.o(0)
            
            if ((rbp_8 & 1) != 0)
            label_14020e18a:
                arg11 = _mm_blend_ps(arg11, arg7, 1)
                
                if ((rbp_8 & 2) != 0)
                    goto label_14020e207
                
                goto label_14020e196
            
        label_14020e201:
            
            if ((rbp_8 & 2) != 0)
            label_14020e207:
                arg11 = _mm_blend_ps(arg11, arg7, 2)
                
                if ((rbp_8 & 4) != 0)
                    goto label_14020e19c
                
                goto label_14020e213
            
        label_14020e196:
            
            if ((rbp_8 & 4) == 0)
            label_14020e213:
                
                if ((rbp_8 & 8) != 0)
                    arg11 = _mm_blend_ps(arg11, arg7, 8)
            else
            label_14020e19c:
                arg11 = _mm_blend_ps(arg11, arg7, 4)
                
                if ((rbp_8 & 8) != 0)
                    arg11 = _mm_blend_ps(arg11, arg7, 8)
            
            arg28 = arg11
            arg11 = _mm_add_epi64(zmm7, arg10)
            arg15 = _mm_blendv_ps(arg3, _mm_add_epi64(arg10, arg3), arg8)
            arg7 = arg9
            zmm15 = _mm_blendv_ps(zmm7, arg11, arg7)
            
            if ((temp0_216 & 1) == 0)
                if ((temp0_216 & 2) != 0)
                    goto label_14020e2aa
                
                goto label_14020e258
            
            arg7 = *arg3[0].q
            
            if ((temp0_216 & 2) != 0)
            label_14020e2aa:
                arg7 = __insertps_xmmps_memd_immb(arg7, *_mm_extract_epi64(arg3, 1), 0x10)
                
                if ((temp0_216 & 4) == 0)
                    goto label_14020e25d
                
                goto label_14020e2ba
            
        label_14020e258:
            
            if ((temp0_216 & 4) == 0)
            label_14020e25d:
                
                if ((temp0_216 & 8) != 0)
                    goto label_14020e2cc
                
                goto label_14020e262
            
        label_14020e2ba:
            arg7 = __insertps_xmmps_memd_immb(arg7, *zmm7[0], 0x20)
            
            if ((temp0_216 & 8) != 0)
            label_14020e2cc:
                arg7 = __insertps_xmmps_memd_immb(arg7, *_mm_extract_epi64(zmm7, 1), 0x30)
                zmm6 = arg22
                arg14 = zx.o(0)
                
                if ((rbp_8 & 1) != 0)
                    goto label_14020e273
                
                goto label_14020e2e3
            
        label_14020e262:
            zmm6 = arg22
            arg14 = zx.o(0)
            
            if ((rbp_8 & 1) != 0)
            label_14020e273:
                arg14 = _mm_blend_epi16(arg14, arg7, 3)
                
                if ((rbp_8 & 2) != 0)
                    goto label_14020e2e9
                
                goto label_14020e280
            
        label_14020e2e3:
            
            if ((rbp_8 & 2) != 0)
            label_14020e2e9:
                arg14 = _mm_blend_epi16(arg14, arg7, 0xc)
                
                if ((rbp_8 & 4) != 0)
                    goto label_14020e286
                
                goto label_14020e2f6
            
        label_14020e280:
            
            if ((rbp_8 & 4) == 0)
            label_14020e2f6:
                
                if ((rbp_8 & 8) != 0)
                    arg14 = _mm_blend_epi16(arg14, arg7, 0xc0)
            else
            label_14020e286:
                arg14 = _mm_blend_epi16(arg14, arg7, 0x30)
                
                if ((rbp_8 & 8) != 0)
                    arg14 = _mm_blend_epi16(arg14, arg7, 0xc0)
        
        arg7 = data_143442c50
        zmm6 = _mm_cmpeq_epi32(zmm6 & arg7, arg7) & arg19
        arg11 = _mm_slli_epi32(zmm6 & arg17, 0x1f)
        char temp0_246 = _mm_movemask_ps(arg11)
        arg9 = zx.o(0)
        arg3 = zx.o(0)
        
        if (temp0_246 != 0)
            arg11 = _mm_srai_epi32(arg11, 0x1f)
            arg3 = data_1434426c0
            int32_t temp0_248[0x4] = _mm_add_epi64(zmm15, arg3)
            arg10 = _mm_blendv_ps(arg15, _mm_add_epi64(arg3, arg15), _mm_shuffle_epi32(arg11, 0x50))
            arg7 = _mm_shuffle_epi32(arg11, 0xfa)
            arg3 = _mm_blendv_ps(zmm15, temp0_248, arg7)
            
            if ((temp0_246 & 1) == 0)
                if ((temp0_246 & 2) != 0)
                    goto label_14020e44f
                
                goto label_14020e38a
            
            arg7 = *arg15[0].q
            
            if ((temp0_246 & 2) != 0)
            label_14020e44f:
                arg7 = __insertps_xmmps_memd_immb(arg7, *_mm_extract_epi64(arg15, 1), 0x10)
                
                if ((temp0_246 & 4) == 0)
                    goto label_14020e393
                
                goto label_14020e463
            
        label_14020e38a:
            
            if ((temp0_246 & 4) == 0)
            label_14020e393:
                
                if ((temp0_246 & 8) != 0)
                    goto label_14020e479
                
                goto label_14020e39c
            
        label_14020e463:
            arg7 = __insertps_xmmps_memd_immb(arg7, *zmm15[0].q, 0x20)
            char rbp_9
            
            if ((temp0_246 & 8) != 0)
            label_14020e479:
                arg7 = __insertps_xmmps_memd_immb(arg7, *_mm_extract_epi64(zmm15, 1), 0x30)
                rbp_9 = _mm_movemask_ps(zmm6)
                arg9 = zx.o(0)
                
                if ((rbp_9 & 1) != 0)
                    goto label_14020e3ac
                
                goto label_14020e48f
            
        label_14020e39c:
            rbp_9 = _mm_movemask_ps(zmm6)
            arg9 = zx.o(0)
            
            if ((rbp_9 & 1) != 0)
            label_14020e3ac:
                arg9 = _mm_blend_ps(arg9, arg7, 1)
                
                if ((rbp_9 & 2) != 0)
                    goto label_14020e499
                
                goto label_14020e3bc
            
        label_14020e48f:
            
            if ((rbp_9 & 2) != 0)
            label_14020e499:
                arg9 = _mm_blend_ps(arg9, arg7, 2)
                
                if ((rbp_9 & 4) != 0)
                    goto label_14020e3c6
                
                goto label_14020e4a9
            
        label_14020e3bc:
            
            if ((rbp_9 & 4) != 0)
            label_14020e3c6:
                arg9 = _mm_blend_ps(arg9, arg7, 4)
                
                if ((rbp_9 & 8) != 0)
                    goto label_14020e4b3
                
                goto label_14020e3d6
            
        label_14020e4a9:
            
            if ((rbp_9 & 8) != 0)
            label_14020e4b3:
                arg9 = _mm_blend_ps(arg9, arg7, 8)
                
                if ((temp0_246 & 1) == 0)
                    goto label_14020e3df
                
                goto label_14020e4c7
            
        label_14020e3d6:
            
            if ((temp0_246 & 1) == 0)
            label_14020e3df:
                
                if ((temp0_246 & 2) != 0)
                    goto label_14020e4db
                
                goto label_14020e3e8
            
        label_14020e4c7:
            arg7 = *arg10[0].q
            
            if ((temp0_246 & 2) != 0)
            label_14020e4db:
                arg7 = __insertps_xmmps_memd_immb(arg7, *_mm_extract_epi64(arg10, 1), 0x10)
                
                if ((temp0_246 & 4) == 0)
                    goto label_14020e3f1
                
                goto label_14020e4ef
            
        label_14020e3e8:
            
            if ((temp0_246 & 4) == 0)
            label_14020e3f1:
                
                if ((temp0_246 & 8) != 0)
                    goto label_14020e505
                
                goto label_14020e3fa
            
        label_14020e4ef:
            arg7 = __insertps_xmmps_memd_immb(arg7, *arg3[0].q, 0x20)
            
            if ((temp0_246 & 8) != 0)
            label_14020e505:
                arg7 = __insertps_xmmps_memd_immb(arg7, *_mm_extract_epi64(arg3, 1), 0x30)
                arg3 = zx.o(0)
                
                if ((rbp_9 & 1) != 0)
                    goto label_14020e407
                
                goto label_14020e518
            
        label_14020e3fa:
            arg3 = zx.o(0)
            
            if ((rbp_9 & 1) != 0)
            label_14020e407:
                arg3 = _mm_blend_ps(arg3, arg7, 1)
                
                if ((rbp_9 & 2) != 0)
                    goto label_14020e522
                
                goto label_14020e417
            
        label_14020e518:
            
            if ((rbp_9 & 2) != 0)
            label_14020e522:
                arg3 = _mm_blend_ps(arg3, arg7, 2)
                
                if ((rbp_9 & 4) != 0)
                    goto label_14020e421
                
                goto label_14020e532
            
        label_14020e417:
            
            if ((rbp_9 & 4) == 0)
            label_14020e532:
                
                if ((rbp_9 & 8) != 0)
                    arg3 = _mm_blend_ps(arg3, arg7, 8)
            else
            label_14020e421:
                arg3 = _mm_blend_ps(arg3, arg7, 4)
                
                if ((rbp_9 & 8) != 0)
                    arg3 = _mm_blend_ps(arg3, arg7, 8)
        
        int32_t temp0_270[0x4] = __paddq_xmmdq_memdq(arg37, arg34)
        arg11 = __paddq_xmmdq_memdq(arg38, arg18)
        arg7 = data_1434426c0
        arg11 = __paddq_xmmdq_memdq(arg11, arg_d0)
        int32_t temp0_274[0x4] = _mm_add_epi64(__paddq_xmmdq_memdq(temp0_270, arg_f0), arg7)
        zmm6 = _mm_blendv_ps(zx.o(0), _mm_add_epi64(arg11, arg7), _mm_shuffle_epi32(arg31, 0x50))
        zmm7 = _mm_blendv_ps(zx.o(0), temp0_274, _mm_shuffle_epi32(arg31, 0xfa))
        int64_t rax_77 = zmm6[0].q
        int64_t rdx_10 = _mm_extract_epi64(zmm6, 1)
        int64_t rbp_10 = _mm_extract_epi64(zmm7, 1)
        int32_t temp0_282[0x4] = __pinsrd_xmmdq_memd_immb(
            __pinsrd_xmmdq_memd_immb(
                __pinsrd_xmmdq_memd_immb(zx.o(*(arg4 + rax_77)), *(arg4 + rdx_10), 1), 
                *(arg4 + zmm7[0]), 2), 
            *(arg4 + rbp_10), 3)
        arg10 = _mm_srli_epi32(temp0_282, 0x15)
        arg11 = _mm_srli_epi32(temp0_282, 0xa) & data_143442480
        arg16 = _mm_add_ps(arg16, 
            _mm_mul_ps(arg13, 
                __divps_xmmps_memps(
                    _mm_cvtepi32_ps(__paddd_xmmdq_memdq(temp0_282 & data_143442680, 
                        data_143442490)), 
                    data_1434426a0)))
        arg7 = data_143442440
        float temp0_291[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(arg11, arg7))
        zmm6 = data_143442690
        float temp0_293[0x4] = _mm_mul_ps(arg14, _mm_div_ps(temp0_291, zmm6))
        arg10 = _mm_add_epi32(arg10, arg7)
        arg7 = _mm_div_ps(_mm_cvtepi32_ps(arg10), zmm6)
        char temp7_1 = arg1 & 1
        
        if (temp7_1 != 0)
            arg12 = _mm_blend_ps(arg12, arg16, 1)
        
        zmm7 = arg19
        arg11 = arg26
        zmm6 = arg35
        arg3 = _mm_mul_ps(arg3, arg7)
        float temp0_299[0x4] = _mm_add_ps(arg28, temp0_293)
        
        if (temp7_1 != 0)
            arg11 = _mm_blend_ps(arg11, temp0_299, 1)
            arg14 = arg21
            arg9 = _mm_add_ps(arg9, arg3)
            
            if (temp7_1 != 0)
                goto label_14020e87b
            
            goto label_14020e68a
        
        arg14 = arg21
        arg9 = _mm_add_ps(arg9, arg3)
        bool cond:58_1
        bool cond:59_1
        bool cond:68_1
        bool cond:69_1
        
        if (temp7_1 != 0)
        label_14020e87b:
            zmm6 = _mm_blend_ps(zmm6, arg9, 1)
            char temp18_1 = arg1 & 2
            cond:58_1 = temp18_1 == 0
            cond:59_1 = temp18_1 != 0
            cond:68_1 = temp18_1 == 0
            cond:69_1 = temp18_1 != 0
            
            if (temp18_1 != 0)
                goto label_14020e693
            
            goto label_14020e88a
        
    label_14020e68a:
        char temp17_1 = arg1 & 2
        cond:58_1 = temp17_1 == 0
        cond:59_1 = temp17_1 != 0
        cond:68_1 = temp17_1 == 0
        cond:69_1 = temp17_1 != 0
        
        if (temp17_1 == 0)
        label_14020e88a:
            
            if (not(cond:58_1))
            label_14020e890:
                arg11 = _mm_blend_ps(arg11, temp0_299, 2)
                
                if (cond:69_1)
                    goto label_14020e6a6
                
                goto label_14020e89c
        else
        label_14020e693:
            arg12 = _mm_blend_ps(arg12, arg16, 2)
            
            if (cond:59_1)
                goto label_14020e890
        
        bool cond:82_1
        bool cond:83_1
        bool cond:97_1
        bool cond:98_1
        
        if (not(cond:68_1))
        label_14020e6a6:
            zmm6 = _mm_blend_ps(zmm6, arg9, 2)
            char temp31_1 = arg1 & 4
            cond:82_1 = temp31_1 == 0
            cond:83_1 = temp31_1 != 0
            cond:97_1 = temp31_1 == 0
            cond:98_1 = temp31_1 != 0
            
            if (temp31_1 != 0)
                goto label_14020e8a5
            
            goto label_14020e6b5
        
    label_14020e89c:
        char temp30_1 = arg1 & 4
        cond:82_1 = temp30_1 == 0
        cond:83_1 = temp30_1 != 0
        cond:97_1 = temp30_1 == 0
        cond:98_1 = temp30_1 != 0
        
        if (temp30_1 == 0)
        label_14020e6b5:
            
            if (not(cond:82_1))
            label_14020e6bb:
                arg11 = _mm_blend_ps(arg11, temp0_299, 4)
                
                if (cond:98_1)
                    goto label_14020e8b8
                
                goto label_14020e6c7
        else
        label_14020e8a5:
            arg12 = _mm_blend_ps(arg12, arg16, 4)
            
            if (cond:83_1)
                goto label_14020e6bb
        
        bool cond:120_1
        bool cond:121_1
        bool cond:131_1
        bool cond:132_1
        
        if (not(cond:97_1))
        label_14020e8b8:
            zmm6 = _mm_blend_ps(zmm6, arg9, 4)
            char temp43_1 = arg1 & 8
            cond:120_1 = temp43_1 == 0
            cond:121_1 = temp43_1 != 0
            cond:131_1 = temp43_1 == 0
            cond:132_1 = temp43_1 != 0
            
            if (temp43_1 != 0)
                goto label_14020e6d0
            
            goto label_14020e8c7
        
    label_14020e6c7:
        char temp42_1 = arg1 & 8
        cond:120_1 = temp42_1 == 0
        cond:121_1 = temp42_1 != 0
        cond:131_1 = temp42_1 == 0
        cond:132_1 = temp42_1 != 0
        
        if (temp42_1 != 0)
        label_14020e6d0:
            arg12 = _mm_blend_ps(arg12, arg16, 8)
            arg16 = arg24
            arg15 = arg20
            
            if (cond:121_1)
                goto label_14020e8db
            
            goto label_14020e6eb
        
    label_14020e8c7:
        arg16 = arg24
        arg15 = arg20
        
        if (cond:120_1)
        label_14020e6eb:
            
            if (not(cond:131_1))
                zmm6 = _mm_blend_ps(zmm6, arg9, 8)
        else
        label_14020e8db:
            arg11 = _mm_blend_ps(arg11, temp0_299, 8)
            
            if (cond:132_1)
                zmm6 = _mm_blend_ps(zmm6, arg9, 8)
    
    arg13 = zmm7 ^ arg27
    
    if (_mm_movemask_ps(_mm_slli_epi32(arg13 & arg17, 0x1f)) == 0)
        arg13 = arg23
        zmm15 = arg25
    else
        int32_t temp0_309[0x4] = __pcmpeqd_xmmdq_memdq(data_1434422d0, arg33)
        arg14 = temp0_309 & arg17
        arg3 = _mm_slli_epi32(arg14, 0x1f)
        char temp0_311 = _mm_movemask_ps(arg3)
        
        if (temp0_311 == 0)
            arg14 = arg21
        else
            arg17 = zmm6
            arg16 = arg11
            arg8 = _mm_srai_epi32(_mm_slli_epi32(arg30, 0x1f), 0x1f)
            arg3 = _mm_srai_epi32(arg3, 0x1f) & arg8
            
            if (_mm_movemask_ps(arg3) == 0)
                arg15 = arg_180
            else
                zmm6 = data_1434426b0
                zmm7 = _mm_add_epi64(arg_a0, zmm6)
                int32_t temp0_317[0x4] = _mm_add_epi64(zmm6, arg_180)
                arg9 = _mm_unpacklo_ps(arg3, arg3[0].q)
                arg15 = _mm_blendv_ps(arg_180, temp0_317, arg9)
                arg3 = _mm_unpackhi_ps(arg3, arg3)
                arg_a0 = _mm_blendv_ps(arg_a0, zmm7, arg3)
                int32_t temp0_322[0x4] = __paddq_xmmdq_memdq(arg37, arg34)
                zmm7 = __paddq_xmmdq_memdq(arg38, arg18)
                arg7 = data_1434426c0
                zmm7 = __paddq_xmmdq_memdq(zmm7, arg_d0)
                int32_t temp0_326[0x4] = _mm_add_epi64(__paddq_xmmdq_memdq(temp0_322, arg_f0), arg7)
                float temp0_328[0x4] = _mm_blendv_ps(zx.o(0), _mm_add_epi64(zmm7, arg7), arg9)
                arg10 = _mm_blendv_ps(zx.o(0), temp0_326, arg3)
                int64_t rax_80 = _mm_extract_epi64(temp0_328, 1)
                int64_t rdx_11 = temp0_328[0].q
                int64_t rbp_11 = arg10[0].q
                int64_t rbx_7 = _mm_extract_epi64(arg10, 1)
                arg9 = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                    _mm_cvtepu16_epi32(__pinsrw_xmmdq_memw_immb(
                        __pinsrw_xmmdq_memw_immb(
                            __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rdx_11)), *(arg4 + rax_80), 1), 
                            *(arg4 + rbp_11), 2), 
                        *(arg4 + rbx_7), 3)[0].q), 
                    data_143442b40))
            
            arg7 = arg8
            arg3 = _mm_blendv_ps(zx.o(0), arg9, arg7)
            
            if ((temp0_311 & 1) != 0)
                arg12 = _mm_blend_ps(arg12, arg3, 1)
                zmm6 = arg17
                arg17 = arg29
                
                if ((temp0_311 & 2) != 0)
                    goto label_14020e96a
                
                goto label_14020e944
            
            zmm6 = arg17
            arg17 = arg29
            
            if ((temp0_311 & 2) != 0)
            label_14020e96a:
                arg12 = _mm_blend_ps(arg12, arg3, 2)
                
                if ((temp0_311 & 4) != 0)
                    goto label_14020e949
                
                goto label_14020e976
            
        label_14020e944:
            
            if ((temp0_311 & 4) == 0)
            label_14020e976:
                
                if ((temp0_311 & 8) != 0)
                    arg12 = _mm_blend_ps(arg12, arg3, 8)
            else
            label_14020e949:
                arg12 = _mm_blend_ps(arg12, arg3, 4)
                
                if ((temp0_311 & 8) != 0)
                    arg12 = _mm_blend_ps(arg12, arg3, 8)
            
            arg8 = data_143442c40
            arg9 = arg22 & arg8
            arg8 = _mm_slli_epi32(_mm_cmpeq_epi32(arg8, arg9) & arg14, 0x1f)
            char temp0_349 = _mm_movemask_ps(arg8)
            
            if (temp0_349 == 0)
                arg3 = arg15
                arg8 = arg_a0
                arg11 = arg16
                arg16 = arg24
                arg15 = arg20
            else
                arg8 = _mm_srai_epi32(arg8, 0x1f)
                arg10 = data_1434426b0
                zmm7 = arg_a0
                arg11 = _mm_add_epi64(zmm7, arg10)
                arg3 =
                    _mm_blendv_ps(arg15, _mm_add_epi64(arg10, arg15), _mm_shuffle_epi32(arg8, 0x50))
                arg7 = _mm_shuffle_epi32(arg8, 0xfa)
                arg8 = _mm_blendv_ps(zmm7, arg11, arg7)
                
                if ((temp0_349 & 1) != 0)
                    arg7 = zx.o(*arg15[0].q)
                
                if ((temp0_349 & 2) != 0)
                    arg7 = _mm_insert_epi32(arg7, zx.d(*_mm_extract_epi64(arg15, 1)), 1)
                
                arg11 = arg16
                arg16 = arg24
                arg15 = arg20
                
                if ((temp0_349 & 4) != 0)
                    arg7 = _mm_insert_epi32(arg7, zx.d(*arg_a0[0].q), 2)
                
                if ((temp0_349 & 8) != 0)
                    arg7 = _mm_insert_epi32(arg7, zx.d(*_mm_extract_epi64(arg_a0, 1)), 3)
                
                arg7 = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(_mm_blend_epi16(zx.o(0), arg7, 0x55), 
                    data_143442b40))
            
            arg10 = zx.o(0)
            arg9 = _mm_cmpeq_epi32(arg9, zx.o(0)) & not.o(arg7)
            
            if ((temp0_311 & 1) != 0)
                arg11 = _mm_blend_ps(arg11, arg9, 1)
                
                if ((temp0_311 & 2) != 0)
                    goto label_14020eac9
                
                goto label_14020eab2
            
            if ((temp0_311 & 2) != 0)
            label_14020eac9:
                arg11 = _mm_blend_ps(arg11, arg9, 2)
                
                if ((temp0_311 & 4) != 0)
                    goto label_14020eab7
                
                goto label_14020ead4
            
        label_14020eab2:
            
            if ((temp0_311 & 4) == 0)
            label_14020ead4:
                
                if ((temp0_311 & 8) != 0)
                    arg11 = _mm_blend_ps(arg11, arg9, 8)
            else
            label_14020eab7:
                arg11 = _mm_blend_ps(arg11, arg9, 4)
                
                if ((temp0_311 & 8) != 0)
                    arg11 = _mm_blend_ps(arg11, arg9, 8)
            
            arg9 = data_143442c50
            arg7 = arg22 & arg9
            arg9 = _mm_cmpeq_epi32(arg9, arg7)
            char temp0_370 = _mm_movemask_ps(_mm_slli_epi32(arg14 & arg9, 0x1f))
            
            if (temp0_370 == 0)
                arg14 = arg21
            else
                arg14 = arg21
                
                if ((temp0_370 & 1) == 0)
                    if ((temp0_370 & 2) != 0)
                        goto label_14020f68f
                    
                    goto label_14020eb24
                
                arg9 = zx.o(*arg3[0].q)
                
                if ((temp0_370 & 2) != 0)
                label_14020f68f:
                    arg9 = _mm_insert_epi32(arg9, zx.d(*_mm_extract_epi64(arg3, 1)), 1)
                    
                    if ((temp0_370 & 4) == 0)
                        goto label_14020eb2d
                    
                    goto label_14020f6a6
                
            label_14020eb24:
                
                if ((temp0_370 & 4) != 0)
                label_14020f6a6:
                    arg9 = _mm_insert_epi32(arg9, zx.d(*arg8[0].q), 2)
                    
                    if ((temp0_370 & 8) != 0)
                        arg9 = _mm_insert_epi32(arg9, zx.d(*_mm_extract_epi64(arg8, 1)), 3)
                else
                label_14020eb2d:
                    
                    if ((temp0_370 & 8) != 0)
                        arg9 = _mm_insert_epi32(arg9, zx.d(*_mm_extract_epi64(arg8, 1)), 3)
                
                arg8 = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(_mm_blend_epi16(zx.o(0), arg9, 0x55), 
                    data_143442b40))
            
            arg7 = _mm_cmpeq_epi32(arg7, zx.o(0)) & not.o(arg8)
            
            if ((temp0_311 & 1) != 0)
                zmm6 = _mm_blend_ps(zmm6, arg7, 1)
                
                if ((temp0_311 & 2) != 0)
                    goto label_14020eb93
                
                goto label_14020eb7c
            
            if ((temp0_311 & 2) != 0)
            label_14020eb93:
                zmm6 = _mm_blend_ps(zmm6, arg7, 2)
                
                if ((temp0_311 & 4) != 0)
                    goto label_14020eb81
                
                goto label_14020eb9e
            
        label_14020eb7c:
            
            if ((temp0_311 & 4) == 0)
            label_14020eb9e:
                
                if ((temp0_311 & 8) != 0)
                    zmm6 = _mm_blend_ps(zmm6, arg7, 8)
            else
            label_14020eb81:
                zmm6 = _mm_blend_ps(zmm6, arg7, 4)
                
                if ((temp0_311 & 8) != 0)
                    zmm6 = _mm_blend_ps(zmm6, arg7, 8)
        
        arg13 = (arg13 ^ temp0_309) & arg17
        
        if (_mm_movemask_ps(_mm_slli_epi32(arg13, 0x1f)) == 0)
            arg13 = arg23
            zmm7 = arg19
            zmm15 = arg25
        else
            int32_t temp0_382[0x4] = __pcmpeqd_xmmdq_memdq(data_143442ad0, arg33)
            char temp0_384 = _mm_movemask_ps(_mm_slli_epi32(temp0_382 & arg17, 0x1f))
            
            if (temp0_384 == 0)
                zmm7 = arg19
                zmm15 = arg25
            else
                char temp11_1 = temp0_384 & 1
                
                if (temp11_1 == 0)
                    zmm7 = arg19
                    zmm15 = arg25
                    
                    if (temp11_1 != 0)
                    label_14020ec6a:
                        arg11 = _mm_blend_ps(arg11, zx.o(0), 1)
                        
                        if (temp11_1 != 0)
                            goto label_14020ec18
                        
                        goto label_14020ec72
                else
                    arg12 = _mm_blend_ps(arg12, zx.o(0), 1)
                    zmm7 = arg19
                    zmm15 = arg25
                    
                    if (temp11_1 != 0)
                        goto label_14020ec6a
                
                bool cond:66_1
                bool cond:67_1
                bool cond:76_1
                bool cond:77_1
                
                if (temp11_1 != 0)
                label_14020ec18:
                    zmm6 = _mm_blend_ps(zmm6, zx.o(0), 1)
                    char temp24_1 = temp0_384 & 2
                    cond:66_1 = temp24_1 == 0
                    cond:67_1 = temp24_1 != 0
                    cond:76_1 = temp24_1 == 0
                    cond:77_1 = temp24_1 != 0
                    
                    if (temp24_1 != 0)
                        goto label_14020ec77
                    
                    goto label_14020ec23
                
            label_14020ec72:
                char temp23_1 = temp0_384 & 2
                cond:66_1 = temp23_1 == 0
                cond:67_1 = temp23_1 != 0
                cond:76_1 = temp23_1 == 0
                cond:77_1 = temp23_1 != 0
                
                if (temp23_1 == 0)
                label_14020ec23:
                    
                    if (not(cond:66_1))
                    label_14020ec25:
                        arg11 = _mm_blend_ps(arg11, zx.o(0), 2)
                        
                        if (cond:77_1)
                            goto label_14020ec82
                        
                        goto label_14020ec2d
                else
                label_14020ec77:
                    arg12 = _mm_blend_ps(arg12, zx.o(0), 2)
                    
                    if (cond:67_1)
                        goto label_14020ec25
                
                bool cond:95_1
                bool cond:96_1
                bool cond:109_1
                bool cond:110_1
                
                if (not(cond:76_1))
                label_14020ec82:
                    zmm6 = _mm_blend_ps(zmm6, zx.o(0), 2)
                    char temp38_1 = temp0_384 & 4
                    cond:95_1 = temp38_1 == 0
                    cond:96_1 = temp38_1 != 0
                    cond:109_1 = temp38_1 == 0
                    cond:110_1 = temp38_1 != 0
                    
                    if (temp38_1 != 0)
                        goto label_14020ec32
                    
                    goto label_14020ec8d
                
            label_14020ec2d:
                char temp37_1 = temp0_384 & 4
                cond:95_1 = temp37_1 == 0
                cond:96_1 = temp37_1 != 0
                cond:109_1 = temp37_1 == 0
                cond:110_1 = temp37_1 != 0
                
                if (temp37_1 == 0)
                label_14020ec8d:
                    
                    if (not(cond:95_1))
                    label_14020ec8f:
                        arg11 = _mm_blend_ps(arg11, zx.o(0), 4)
                        
                        if (cond:110_1)
                            goto label_14020ec3d
                        
                        goto label_14020ec97
                else
                label_14020ec32:
                    arg12 = _mm_blend_ps(arg12, zx.o(0), 4)
                    
                    if (cond:96_1)
                        goto label_14020ec8f
                
                bool cond:129_1
                bool cond:130_1
                bool cond:142_1
                bool cond:143_1
                
                if (not(cond:109_1))
                label_14020ec3d:
                    zmm6 = _mm_blend_ps(zmm6, zx.o(0), 4)
                    char temp51_1 = temp0_384 & 8
                    cond:129_1 = temp51_1 == 0
                    cond:130_1 = temp51_1 != 0
                    cond:142_1 = temp51_1 == 0
                    cond:143_1 = temp51_1 == 0
                    
                    if (temp51_1 != 0)
                        goto label_14020ec9c
                    
                    goto label_14020ec48
                
            label_14020ec97:
                char temp50_1 = temp0_384 & 8
                cond:129_1 = temp50_1 == 0
                cond:130_1 = temp50_1 != 0
                cond:142_1 = temp50_1 == 0
                cond:143_1 = temp50_1 == 0
                
                if (temp50_1 != 0)
                label_14020ec9c:
                    arg12 = _mm_blend_ps(arg12, zx.o(0), 8)
                    
                    if (cond:130_1)
                        goto label_14020ec4a
                    
                    goto label_14020eca5
                
            label_14020ec48:
                
                if (cond:129_1)
                label_14020eca5:
                    
                    if (not(cond:142_1))
                        zmm6 = _mm_blend_ps(zmm6, zx.o(0), 8)
                else
                label_14020ec4a:
                    arg11 = _mm_blend_ps(arg11, zx.o(0), 8)
                    
                    if (not(cond:143_1))
                        zmm6 = _mm_blend_ps(zmm6, zx.o(0), 8)
            
            char temp0_398 = _mm_movemask_ps(_mm_slli_epi32(temp0_382 & not.o(arg13), 0x1f))
            
            if (temp0_398 == 0)
                arg13 = arg23
            else
                char temp16_1 = temp0_398 & 1
                arg13 = arg23
                
                if (temp16_1 != 0)
                    arg12 = _mm_blend_ps(arg12, zx.o(0), 1)
                    
                    if (temp16_1 != 0)
                        goto label_14020ed49
                else if (temp16_1 != 0)
                label_14020ed49:
                    arg11 = _mm_blend_ps(arg11, zx.o(0), 1)
                    
                    if (temp16_1 != 0)
                        goto label_14020ed0b
                    
                    goto label_14020ed51
                
                bool cond:74_1
                bool cond:75_1
                bool cond:80_1
                bool cond:81_1
                
                if (temp16_1 != 0)
                label_14020ed0b:
                    zmm6 = _mm_blend_ps(zmm6, zx.o(0), 1)
                    char temp29_1 = temp0_398 & 2
                    cond:74_1 = temp29_1 == 0
                    cond:75_1 = temp29_1 != 0
                    cond:80_1 = temp29_1 == 0
                    cond:81_1 = temp29_1 != 0
                    
                    if (temp29_1 != 0)
                        goto label_14020ed56
                    
                    goto label_14020ed16
                
            label_14020ed51:
                char temp28_1 = temp0_398 & 2
                cond:74_1 = temp28_1 == 0
                cond:75_1 = temp28_1 != 0
                cond:80_1 = temp28_1 == 0
                cond:81_1 = temp28_1 != 0
                
                if (temp28_1 == 0)
                label_14020ed16:
                    
                    if (not(cond:74_1))
                    label_14020ed18:
                        arg11 = _mm_blend_ps(arg11, zx.o(0), 2)
                        
                        if (cond:81_1)
                            goto label_14020ed61
                        
                        goto label_14020ed20
                else
                label_14020ed56:
                    arg12 = _mm_blend_ps(arg12, zx.o(0), 2)
                    
                    if (cond:75_1)
                        goto label_14020ed18
                
                bool cond:107_1
                bool cond:108_1
                bool cond:118_1
                bool cond:119_1
                
                if (not(cond:80_1))
                label_14020ed61:
                    zmm6 = _mm_blend_ps(zmm6, zx.o(0), 2)
                    char temp41_1 = temp0_398 & 4
                    cond:107_1 = temp41_1 == 0
                    cond:108_1 = temp41_1 != 0
                    cond:118_1 = temp41_1 == 0
                    cond:119_1 = temp41_1 != 0
                    
                    if (temp41_1 != 0)
                        goto label_14020ed25
                    
                    goto label_14020ed6c
                
            label_14020ed20:
                char temp40_1 = temp0_398 & 4
                cond:107_1 = temp40_1 == 0
                cond:108_1 = temp40_1 != 0
                cond:118_1 = temp40_1 == 0
                cond:119_1 = temp40_1 != 0
                
                if (temp40_1 == 0)
                label_14020ed6c:
                    
                    if (not(cond:107_1))
                    label_14020ed6e:
                        arg11 = _mm_blend_ps(arg11, zx.o(0), 4)
                        
                        if (cond:119_1)
                            goto label_14020ed30
                        
                        goto label_14020ed76
                else
                label_14020ed25:
                    arg12 = _mm_blend_ps(arg12, zx.o(0), 4)
                    
                    if (cond:108_1)
                        goto label_14020ed6e
                
                bool cond:140_1
                bool cond:141_1
                bool cond:148_1
                bool cond:149_1
                
                if (not(cond:118_1))
                label_14020ed30:
                    zmm6 = _mm_blend_ps(zmm6, zx.o(0), 4)
                    char temp55_1 = temp0_398 & 8
                    cond:140_1 = temp55_1 == 0
                    cond:141_1 = temp55_1 != 0
                    cond:148_1 = temp55_1 == 0
                    cond:149_1 = temp55_1 == 0
                    
                    if (temp55_1 != 0)
                        goto label_14020ed7b
                    
                    goto label_14020ed3b
                
            label_14020ed76:
                char temp54_1 = temp0_398 & 8
                cond:140_1 = temp54_1 == 0
                cond:141_1 = temp54_1 != 0
                cond:148_1 = temp54_1 == 0
                cond:149_1 = temp54_1 == 0
                
                if (temp54_1 != 0)
                label_14020ed7b:
                    arg12 = _mm_blend_ps(arg12, zx.o(0), 8)
                    
                    if (cond:141_1)
                        goto label_14020ed3d
                    
                    goto label_14020ed84
                
            label_14020ed3b:
                
                if (cond:140_1)
                label_14020ed84:
                    
                    if (not(cond:148_1))
                        zmm6 = _mm_blend_ps(zmm6, zx.o(0), 8)
                else
                label_14020ed3d:
                    arg11 = _mm_blend_ps(arg11, zx.o(0), 8)
                    
                    if (not(cond:149_1))
                        zmm6 = _mm_blend_ps(zmm6, zx.o(0), 8)

zmm15 = _mm_cmpeq_epi32(zmm15, arg32) & not.o(arg17)
arg17 = _mm_slli_epi32(zmm15, 0x1f)
char temp0_413 = _mm_movemask_ps(arg17)
char rcx_8

if (temp0_413 == 0)
    arg14 = arg36
    rcx_8 = _mm_movemask_ps(_mm_and_ps(arg39, arg14))
    
    if (rcx_8 != 0)
    label_14020c8b7:
        char temp2_1 = rcx_8 & 1
        
        if (temp2_1 != 0)
            arg12 = _mm_blend_ps(arg12, zx.o(0), 1)
            
            if (temp2_1 != 0)
                goto label_14020c909
        else if (temp2_1 != 0)
        label_14020c909:
            arg11 = _mm_blend_ps(arg11, zx.o(0), 1)
            
            if (temp2_1 != 0)
                goto label_14020c8c7
            
            goto label_14020c911
        
        bool cond:27_1
        bool cond:28_1
        bool cond:40_1
        bool cond:41_1
        
        if (temp2_1 != 0)
        label_14020c8c7:
            zmm6 = _mm_blend_ps(zmm6, zx.o(0), 1)
            char temp9_1 = rcx_8 & 2
            cond:27_1 = temp9_1 == 0
            cond:28_1 = temp9_1 != 0
            cond:40_1 = temp9_1 == 0
            cond:41_1 = temp9_1 != 0
            
            if (temp9_1 != 0)
                goto label_14020c916
            
            goto label_14020c8d2
        
    label_14020c911:
        char temp8_1 = rcx_8 & 2
        cond:27_1 = temp8_1 == 0
        cond:28_1 = temp8_1 != 0
        cond:40_1 = temp8_1 == 0
        cond:41_1 = temp8_1 != 0
        
        if (temp8_1 == 0)
        label_14020c8d2:
            
            if (not(cond:27_1))
            label_14020c8d4:
                arg11 = _mm_blend_ps(arg11, zx.o(0), 2)
                
                if (cond:41_1)
                    goto label_14020c921
                
                goto label_14020c8dc
        else
        label_14020c916:
            arg12 = _mm_blend_ps(arg12, zx.o(0), 2)
            
            if (cond:28_1)
                goto label_14020c8d4
        
        bool cond:61_1
        bool cond:62_1
        bool cond:70_1
        bool cond:71_1
        
        if (not(cond:40_1))
        label_14020c921:
            zmm6 = _mm_blend_ps(zmm6, zx.o(0), 2)
            char temp20_1 = rcx_8 & 4
            cond:61_1 = temp20_1 == 0
            cond:62_1 = temp20_1 != 0
            cond:70_1 = temp20_1 == 0
            cond:71_1 = temp20_1 != 0
            
            if (temp20_1 != 0)
                goto label_14020c8e1
            
            goto label_14020c92c
        
    label_14020c8dc:
        char temp19_1 = rcx_8 & 4
        cond:61_1 = temp19_1 == 0
        cond:62_1 = temp19_1 != 0
        cond:70_1 = temp19_1 == 0
        cond:71_1 = temp19_1 != 0
        
        if (temp19_1 == 0)
        label_14020c92c:
            
            if (not(cond:61_1))
            label_14020c92e:
                arg11 = _mm_blend_ps(arg11, zx.o(0), 4)
                
                if (cond:71_1)
                    goto label_14020c8ec
                
                goto label_14020c936
        else
        label_14020c8e1:
            arg12 = _mm_blend_ps(arg12, zx.o(0), 4)
            
            if (cond:62_1)
                goto label_14020c92e
        
        bool cond:84_1
        bool cond:85_1
        bool cond:99_1
        bool cond:100_1
        
        if (not(cond:70_1))
        label_14020c8ec:
            zmm6 = _mm_blend_ps(zmm6, zx.o(0), 4)
            char temp33_1 = rcx_8 & 8
            cond:84_1 = temp33_1 == 0
            cond:85_1 = temp33_1 != 0
            cond:99_1 = temp33_1 == 0
            cond:100_1 = temp33_1 == 0
            
            if (temp33_1 != 0)
                goto label_14020c93b
            
            goto label_14020c8f7
        
    label_14020c936:
        char temp32_1 = rcx_8 & 8
        cond:84_1 = temp32_1 == 0
        cond:85_1 = temp32_1 != 0
        cond:99_1 = temp32_1 == 0
        cond:100_1 = temp32_1 == 0
        
        if (temp32_1 != 0)
        label_14020c93b:
            arg12 = _mm_blend_ps(arg12, zx.o(0), 8)
            
            if (cond:85_1)
                goto label_14020c8f9
            
            goto label_14020c944
        
    label_14020c8f7:
        
        if (cond:84_1)
        label_14020c944:
            
            if (not(cond:99_1))
                zmm6 = _mm_blend_ps(zmm6, zx.o(0), 8)
        else
        label_14020c8f9:
            arg11 = _mm_blend_ps(arg11, zx.o(0), 8)
            
            if (not(cond:100_1))
                zmm6 = _mm_blend_ps(zmm6, zx.o(0), 8)
else
    int32_t temp0_414[0x4] = _mm_mullo_epi32(arg32, arg15)
    arg8 = _mm_cvtepi32_epi64(temp0_414[0].q)
    arg7 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(temp0_414, 0x4e)[0].q)
    arg32 = arg7
    int32_t temp0_418[0x4] = __paddq_xmmdq_memdq(arg7, arg34)
    arg29 = arg8
    arg_f0 = _mm_add_epi64(__paddq_xmmdq_memdq(arg8, arg18), arg16)
    arg_d0 = __paddq_xmmdq_memdq(temp0_418, __return_addr.o)
    arg14 &= zmm15
    arg26 = arg11
    arg35 = zmm6
    
    if (_mm_movemask_ps(_mm_slli_epi32(arg14, 0x1f)) == 0)
        zmm6 = arg22
    else
        zmm6 = arg22
        arg10 = zx.o(0)
        int32_t temp0_424[0x4] = _mm_cmpeq_epi32(data_143442c60 & zmm6, zx.o(0))
        arg9 = _mm_slli_epi32(arg14 & temp0_424, 0x1f)
        char temp0_426 = _mm_movemask_ps(arg9)
        
        if (temp0_426 != 0)
            arg21 = arg14
            int32_t temp0_427[0x4] = _mm_srai_epi32(arg9, 0x1f)
            int32_t temp0_428[0x4] = __paddq_xmmdq_memdq(arg37, arg34)
            zmm7 = __paddq_xmmdq_memdq(arg38, arg18)
            arg3 = data_1434426c0
            zmm7 = __paddq_xmmdq_memdq(zmm7, arg29)
            int32_t temp0_432[0x4] = _mm_add_epi64(__paddq_xmmdq_memdq(temp0_428, arg32), arg3)
            zmm7 = _mm_add_epi64(zmm7, arg3)
            arg8 = _mm_shuffle_epi32(temp0_427, 0x50)
            float temp0_435[0x4] = _mm_blendv_ps(zx.o(0), zmm7, arg8)
            arg9 = _mm_shuffle_epi32(temp0_427, 0xfa)
            zmm7 = _mm_blendv_ps(zx.o(0), temp0_432, arg9)
            int64_t rax_93 = _mm_extract_epi64(temp0_435, 1)
            void* rbp_12 = arg4 + rax_93
            arg14 = *(arg4 + rax_93)
            int64_t rax_94 = zmm7[0]
            int64_t rsi_3 = _mm_extract_epi64(zmm7, 1)
            void* rdi_2 = arg4 + rax_94
            zmm7 = _mm_blendv_ps(zx.o(0), arg3, arg8)
            arg_180 = *(arg4 + rax_94)
            zmm6 = _mm_blendv_ps(zx.o(0), arg3, arg9)
            arg_a0 = *(arg4 + rsi_3)
            void* rbx_9 = temp0_435[0].q + arg4
            arg20 = *(zmm7[0] + rbx_9)
            zmm7 = *(_mm_extract_epi64(zmm7, 1) + rbp_12)
            arg13 = *(zmm6[0].q + rdi_2)
            void* rsi_4 = arg4 + rsi_3
            arg31 = *(_mm_extract_epi64(zmm6, 1) + rsi_4)
            arg11 = data_1434426e0
            zmm6 = _mm_blendv_ps(zx.o(0), arg11, arg8)
            arg10 = _mm_blendv_ps(zx.o(0), arg11, arg9)
            arg15 = *(zmm6[0].q + rbx_9)
            arg9 = *(_mm_extract_epi64(zmm6, 1) + rbp_12)
            float (* rax_101)[0x4] = arg10[0].q
            int32_t (* rbp_13)[0x4] = _mm_extract_epi64(arg10, 1)
            arg8 = *(rax_101 + rdi_2)
            arg7 = *(rbp_13 + rsi_4)
            bool cond:24_1
            bool cond:25_1
            bool cond:31_1
            bool cond:32_1
            
            if ((temp0_426 & 1) == 0)
                char temp6_1 = temp0_426 & 2
                cond:24_1 = temp6_1 != 0
                cond:25_1 = temp6_1 == 0
                cond:31_1 = temp6_1 != 0
                cond:32_1 = temp6_1 == 0
                
                if (temp6_1 == 0)
                    goto label_14020f070
                
                goto label_14020efdc
            
            arg3 = *rbx_9
            char temp5_1 = temp0_426 & 2
            cond:24_1 = temp5_1 != 0
            cond:25_1 = temp5_1 == 0
            cond:31_1 = temp5_1 != 0
            cond:32_1 = temp5_1 == 0
            
            if (temp5_1 == 0)
            label_14020f070:
                arg10 = arg19
                arg11 = arg26
                
                if (cond:25_1)
                    goto label_14020eff7
                
                goto label_14020f08f
            
        label_14020efdc:
            arg3 = _mm_insert_ps(arg3, arg14, 0x10)
            arg10 = arg19
            arg11 = arg26
            
            if (not(cond:24_1))
            label_14020eff7:
                
                if (cond:32_1)
                    goto label_14020f09a
                
                goto label_14020effd
            
        label_14020f08f:
            arg20 = _mm_insert_ps(arg20, zmm7, 0x10)
            bool cond:54_1
            bool cond:55_1
            bool cond:65_1
            
            if (not(cond:31_1))
            label_14020f09a:
                char temp15_1 = temp0_426 & 4
                cond:54_1 = temp15_1 == 0
                cond:55_1 = temp15_1 == 0
                cond:65_1 = temp15_1 == 0
                zmm6 = arg22
                zmm7 = arg10
                
                if (temp15_1 == 0)
                    goto label_14020f017
                
                goto label_14020f0b0
            
        label_14020effd:
            arg15 = _mm_insert_ps(arg15, arg9, 0x10)
            char temp14_1 = temp0_426 & 4
            cond:54_1 = temp14_1 == 0
            cond:55_1 = temp14_1 == 0
            cond:65_1 = temp14_1 == 0
            zmm6 = arg22
            zmm7 = arg10
            
            if (temp14_1 != 0)
            label_14020f0b0:
                arg10 = __insertps_xmmps_memd_immb(arg3, arg_180[0], 0x20)
                arg14 = arg21
                
                if (not(cond:54_1))
                    arg20 = _mm_insert_ps(arg20, arg13, 0x20)
            else
            label_14020f017:
                arg14 = arg21
                arg10 = arg3
                
                if (not(cond:55_1))
                    arg20 = _mm_insert_ps(arg20, arg13, 0x20)
            
            arg13 = arg23
            bool cond:78_1
            bool cond:79_1
            bool cond:93_1
            bool cond:94_1
            
            if (not(cond:65_1))
                arg15 = _mm_insert_ps(arg15, arg8, 0x20)
                char temp27_1 = temp0_426 & 8
                cond:78_1 = temp27_1 == 0
                cond:79_1 = temp27_1 != 0
                cond:93_1 = temp27_1 == 0
                cond:94_1 = temp27_1 != 0
                
                if (temp27_1 != 0)
                    goto label_14020f109
                
                goto label_14020f0e9
            
            char temp26_1 = temp0_426 & 8
            cond:78_1 = temp26_1 == 0
            cond:79_1 = temp26_1 != 0
            cond:93_1 = temp26_1 == 0
            cond:94_1 = temp26_1 != 0
            
            if (temp26_1 != 0)
            label_14020f109:
                arg10 = __insertps_xmmps_memd_immb(arg10, arg_a0[0], 0x30)
                
                if (cond:79_1)
                    goto label_14020f0fb
                
                goto label_14020f116
            
        label_14020f0e9:
            
            if (cond:78_1)
            label_14020f116:
                
                if (not(cond:93_1))
                    arg15 = _mm_insert_ps(arg15, arg7, 0x30)
            else
            label_14020f0fb:
                arg20 = __insertps_xmmps_memd_immb(arg20, arg31[0], 0x30)
                
                if (cond:94_1)
                    arg15 = _mm_insert_ps(arg15, arg7, 0x30)
        
        arg16 = temp0_424 & not.o(arg14)
        arg9 = _mm_slli_epi32(arg16, 0x1f)
        char temp0_454 = _mm_movemask_ps(arg9)
        
        if (temp0_454 == 0)
            arg16 = arg24
        else
            zmm7 = arg10
            arg21 = arg15
            arg8 = _mm_srai_epi32(_mm_slli_epi32(arg30, 0x1f), 0x1f)
            arg9 = _mm_srai_epi32(arg9, 0x1f) & arg8
            
            if (_mm_movemask_ps(arg9) == 0)
                arg14 = arg_f0
                arg15 = arg_d0
            else
                arg3 = data_1434426c0
                arg11 = _mm_add_epi64(arg_d0, arg3)
                arg14 = arg_f0
                int32_t temp0_460[0x4] = _mm_add_epi64(arg14, arg3)
                arg10 = _mm_unpacklo_ps(arg9, arg9[0].q)
                arg14 = _mm_blendv_ps(arg14, temp0_460, arg10)
                arg9 = _mm_unpackhi_ps(arg9, arg9)
                arg15 = _mm_blendv_ps(arg_d0, arg11, arg9)
                arg11 = __paddq_xmmdq_memdq(arg37, arg34)
                int32_t temp0_467[0x4] =
                    __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(arg38, arg18), arg29)
                arg11 = _mm_add_epi64(__paddq_xmmdq_memdq(arg11, arg32), arg3)
                arg3 = _mm_blendv_ps(zx.o(0), _mm_add_epi64(temp0_467, arg3), arg10)
                zmm6 = _mm_blendv_ps(zx.o(0), arg11, arg9)
                arg10 = *(arg4 + arg3[0].q)
                int64_t rax_104 = _mm_extract_epi64(arg3, 1)
                int64_t rbp_14 = zmm6[0].q
                int64_t rbx_10 = _mm_extract_epi64(zmm6, 1)
                arg10 = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(arg10, *(arg4 + rax_104), 0x10), 
                        *(arg4 + rbp_14), 0x20), 
                    *(arg4 + rbx_10), 0x30)
            
            arg7 = arg8
            arg9 = _mm_blendv_ps(zx.o(0), arg10, arg7)
            
            if ((temp0_454 & 1) != 0)
                zmm7 = _mm_blend_ps(zmm7, arg9, 1)
                arg11 = arg26
                
                if ((temp0_454 & 2) != 0)
                    goto label_14020f2a0
                
                goto label_14020f281
            
            arg11 = arg26
            
            if ((temp0_454 & 2) != 0)
            label_14020f2a0:
                zmm7 = _mm_blend_ps(zmm7, arg9, 2)
                
                if ((temp0_454 & 4) != 0)
                    goto label_14020f286
                
                goto label_14020f2ab
            
        label_14020f281:
            
            if ((temp0_454 & 4) == 0)
            label_14020f2ab:
                
                if ((temp0_454 & 8) != 0)
                    zmm7 = _mm_blend_ps(zmm7, arg9, 8)
            else
            label_14020f286:
                zmm7 = _mm_blend_ps(zmm7, arg9, 4)
                
                if ((temp0_454 & 8) != 0)
                    zmm7 = _mm_blend_ps(zmm7, arg9, 8)
            
            arg10 = data_143442c40
            arg8 = arg22 & arg10
            arg10 = _mm_slli_epi32(_mm_cmpeq_epi32(arg10, arg8) & arg16, 0x1f)
            char temp0_483 = _mm_movemask_ps(arg10)
            
            if (temp0_483 != 0)
                int32_t temp0_484[0x4] = _mm_srai_epi32(arg10, 0x1f)
                arg3 = data_1434426c0
                arg11 = _mm_add_epi64(arg15, arg3)
                arg9 = _mm_blendv_ps(arg14, _mm_add_epi64(arg3, arg14), 
                    _mm_shuffle_epi32(temp0_484, 0x50))
                arg7 = _mm_shuffle_epi32(temp0_484, 0xfa)
                arg10 = _mm_blendv_ps(arg15, arg11, arg7)
                
                if ((temp0_483 & 1) == 0)
                    if ((temp0_483 & 2) != 0)
                        goto label_14020f6d4
                    
                    goto label_14020f32f
                
                arg7 = *arg14[0].q
                
                if ((temp0_483 & 2) != 0)
                label_14020f6d4:
                    arg7 = __insertps_xmmps_memd_immb(arg7, *_mm_extract_epi64(arg14, 1), 0x10)
                    arg11 = arg26
                    
                    if ((temp0_483 & 4) == 0)
                        goto label_14020f341
                    
                    goto label_14020f6f1
                
            label_14020f32f:
                arg11 = arg26
                
                if ((temp0_483 & 4) != 0)
                label_14020f6f1:
                    arg7 = __insertps_xmmps_memd_immb(arg7, *arg15[0].q, 0x20)
                    
                    if ((temp0_483 & 8) != 0)
                        arg7 = __insertps_xmmps_memd_immb(arg7, *_mm_extract_epi64(arg15, 1), 0x30)
                else
                label_14020f341:
                    
                    if ((temp0_483 & 8) != 0)
                        arg7 = __insertps_xmmps_memd_immb(arg7, *_mm_extract_epi64(arg15, 1), 0x30)
                
                arg14 = arg9
                arg15 = arg10
            
            arg10 = zmm7
            arg8 = _mm_cmpeq_epi32(arg8, zx.o(0)) & not.o(arg7)
            
            if ((temp0_454 & 1) != 0)
                arg20 = _mm_blend_epi16(arg20, arg8, 3)
                
                if ((temp0_454 & 2) != 0)
                    goto label_14020f3b8
                
                goto label_14020f389
            
            if ((temp0_454 & 2) != 0)
            label_14020f3b8:
                arg20 = _mm_blend_epi16(arg20, arg8, 0xc)
                
                if ((temp0_454 & 4) != 0)
                    goto label_14020f39a
                
                goto label_14020f3c3
            
        label_14020f389:
            
            if ((temp0_454 & 4) == 0)
            label_14020f3c3:
                
                if ((temp0_454 & 8) != 0)
                    arg20 = _mm_blend_epi16(arg20, arg8, 0xc0)
            else
            label_14020f39a:
                arg20 = _mm_blend_epi16(arg20, arg8, 0x30)
                
                if ((temp0_454 & 8) != 0)
                    arg20 = _mm_blend_epi16(arg20, arg8, 0xc0)
            
            arg8 = data_143442c50
            arg7 = arg22 & arg8
            arg8 = _mm_cmpeq_epi32(arg8, arg7)
            char temp0_499 = _mm_movemask_ps(_mm_slli_epi32(arg16 & arg8, 0x1f))
            
            if (temp0_499 == 0)
                zmm7 = arg19
                zmm6 = arg22
                arg16 = arg24
            else
                arg16 = arg24
                
                if ((temp0_499 & 1) == 0)
                    if ((temp0_499 & 2) != 0)
                        goto label_14020f720
                    
                    goto label_14020f423
                
                arg8 = *arg14[0].q
                
                if ((temp0_499 & 2) != 0)
                label_14020f720:
                    arg8 = __insertps_xmmps_memd_immb(arg8, *_mm_extract_epi64(arg14, 1), 0x10)
                    zmm6 = arg22
                    
                    if ((temp0_499 & 4) == 0)
                        goto label_14020f433
                    
                    goto label_14020f73b
                
            label_14020f423:
                zmm6 = arg22
                
                if ((temp0_499 & 4) != 0)
                label_14020f73b:
                    arg8 = __insertps_xmmps_memd_immb(arg8, *arg15[0].q, 0x20)
                    
                    if ((temp0_499 & 8) != 0)
                        arg8 = __insertps_xmmps_memd_immb(arg8, *_mm_extract_epi64(arg15, 1), 0x30)
                else
                label_14020f433:
                    
                    if ((temp0_499 & 8) != 0)
                        arg8 = __insertps_xmmps_memd_immb(arg8, *_mm_extract_epi64(arg15, 1), 0x30)
                
                zmm7 = arg19
            
            arg15 = arg21
            arg7 = _mm_cmpeq_epi32(arg7, zx.o(0)) & not.o(arg8)
            
            if ((temp0_454 & 1) != 0)
                arg15 = _mm_blend_epi16(arg15, arg7, 3)
                
                if ((temp0_454 & 2) != 0)
                    goto label_14020f49d
                
                goto label_14020f485
            
            if ((temp0_454 & 2) != 0)
            label_14020f49d:
                arg15 = _mm_blend_epi16(arg15, arg7, 0xc)
                
                if ((temp0_454 & 4) != 0)
                    goto label_14020f48a
                
                goto label_14020f4a9
            
        label_14020f485:
            
            if ((temp0_454 & 4) == 0)
            label_14020f4a9:
                
                if ((temp0_454 & 8) != 0)
                    arg15 = _mm_blend_epi16(arg15, arg7, 0xc0)
            else
            label_14020f48a:
                arg15 = _mm_blend_epi16(arg15, arg7, 0x30)
                
                if ((temp0_454 & 8) != 0)
                    arg15 = _mm_blend_epi16(arg15, arg7, 0xc0)
    
    if (_mm_movemask_ps(_mm_slli_epi32(zmm15 & arg27, 0x1f)) == 0)
        arg14 = arg36
        arg16 = arg39
        arg9 = arg35
        arg17 = arg20
    else
        arg25 = zmm15
        int32_t temp0_509[0x4] = _mm_srai_epi32(_mm_slli_epi32(zmm15 & zmm7, 0x1f), 0x1f)
        char temp0_510 = _mm_movemask_ps(temp0_509)
        
        if (temp0_510 == 0)
            zmm15 = arg10
            arg14 = arg36
            arg16 = arg39
            arg9 = arg35
            arg3 = arg25
            arg17 = arg20
        else
            arg31 = arg10
            arg10 = _mm_srai_epi32(_mm_slli_epi32(arg30, 0x1f), 0x1f) & zmm7
            arg17 = _mm_srai_epi32(arg17, 0x1f) & arg10
            arg_a0 = zx.o(0)
            uint32_t temp0_514 = _mm_movemask_ps(arg17)
            
            if (temp0_514 == 0)
                arg28 = zx.o(0)
                arg_180 = zx.o(0)
                arg14 = arg36
                arg16 = arg39
                arg17 = arg20
            else
                arg8 = data_1434426c0
                zmm6 = __return_addr.o
                int32_t temp0_515[0x4] = _mm_add_epi64(zmm6, arg8)
                int32_t temp0_516[0x4] = _mm_add_epi64(arg16, arg8)
                arg13 = _mm_unpacklo_ps(arg17, arg17[0].q)
                float temp0_518[0x4] = _mm_blendv_ps(arg16, temp0_516, arg13)
                arg17 = _mm_unpackhi_ps(arg17, arg17)
                arg7 = arg17
                arg9 = _mm_blendv_ps(zmm6, temp0_515, arg7)
                char rbp_20 = temp0_514.b
                
                if ((rbp_20 & 1) == 0)
                    if ((rbp_20 & 2) != 0)
                        goto label_14020f76a
                    
                    goto label_14020f596
                
                arg7 = *arg16[0].q
                
                if ((rbp_20 & 2) != 0)
                label_14020f76a:
                    arg7 = __insertps_xmmps_memd_immb(arg7, *_mm_extract_epi64(arg16, 1), 0x10)
                    
                    if ((rbp_20 & 4) == 0)
                        goto label_14020f5a0
                    
                    goto label_14020f784
                
            label_14020f596:
                
                if ((rbp_20 & 4) == 0)
                label_14020f5a0:
                    
                    if ((rbp_20 & 8) != 0)
                        goto label_14020f7a0
                    
                    goto label_14020f5aa
                
            label_14020f784:
                arg7 = __insertps_xmmps_memd_immb(arg7, *__return_addr.o[0].q, 0x20)
                char rbx_11
                
                if ((rbp_20 & 8) != 0)
                label_14020f7a0:
                    arg7 = __insertps_xmmps_memd_immb(arg7, *_mm_extract_epi64(__return_addr.o, 1), 
                        0x30)
                    rbx_11 = _mm_movemask_ps(arg10)
                    arg3 = zx.o(0)
                    
                    if ((rbx_11 & 1) != 0)
                        goto label_14020f5ba
                    
                    goto label_14020f7b6
                
            label_14020f5aa:
                rbx_11 = _mm_movemask_ps(arg10)
                arg3 = zx.o(0)
                
                if ((rbx_11 & 1) != 0)
                label_14020f5ba:
                    arg3 = _mm_blend_epi16(arg3, arg7, 3)
                    
                    if ((rbx_11 & 2) != 0)
                        goto label_14020f7bf
                    
                    goto label_14020f5c9
                
            label_14020f7b6:
                
                if ((rbx_11 & 2) != 0)
                label_14020f7bf:
                    arg3 = _mm_blend_epi16(arg3, arg7, 0xc)
                    
                    if ((rbx_11 & 4) != 0)
                        goto label_14020f5d2
                    
                    goto label_14020f7ce
                
            label_14020f5c9:
                
                if ((rbx_11 & 4) == 0)
                label_14020f7ce:
                    
                    if ((rbx_11 & 8) != 0)
                        arg3 = _mm_blend_epi16(arg3, arg7, 0xc0)
                else
                label_14020f5d2:
                    arg3 = _mm_blend_epi16(arg3, arg7, 0x30)
                    
                    if ((rbx_11 & 8) != 0)
                        arg3 = _mm_blend_epi16(arg3, arg7, 0xc0)
                
                arg28 = arg3
                int32_t temp0_536[0x4] = _mm_add_epi64(arg9, arg8)
                arg24 = _mm_blendv_ps(temp0_518, _mm_add_epi64(arg8, temp0_518), arg13)
                arg7 = arg17
                __return_addr.o = _mm_blendv_ps(arg9, temp0_536, arg7)
                
                if ((rbp_20 & 1) != 0)
                    arg7 = *temp0_518[0].q
                
                arg14 = arg36
                arg16 = arg39
                zmm6 = arg22
                arg17 = arg20
                
                if ((rbp_20 & 2) != 0)
                    arg7 = __insertps_xmmps_memd_immb(arg7, *_mm_extract_epi64(temp0_518, 1), 0x10)
                    
                    if ((rbp_20 & 4) != 0)
                    label_14020f88a:
                        arg7 = __insertps_xmmps_memd_immb(arg7, *arg9[0].q, 0x20)
                        
                        if ((rbp_20 & 8) == 0)
                            goto label_14020f84d
                        
                        goto label_14020f89d
                else if ((rbp_20 & 4) != 0)
                    goto label_14020f88a
                
                if ((rbp_20 & 8) == 0)
                label_14020f84d:
                    arg8 = zx.o(0)
                    
                    if ((rbx_11 & 1) == 0)
                        goto label_14020f8ab
                    
                    goto label_14020f855
                
            label_14020f89d:
                arg7 = __insertps_xmmps_memd_immb(arg7, *_mm_extract_epi64(arg9, 1), 0x30)
                arg8 = zx.o(0)
                
                if ((rbx_11 & 1) == 0)
                label_14020f8ab:
                    
                    if ((rbx_11 & 2) == 0)
                        goto label_14020f860
                    
                    goto label_14020f8b0
                
            label_14020f855:
                arg8 = _mm_blend_ps(arg8, arg7, 1)
                
                if ((rbx_11 & 2) == 0)
                label_14020f860:
                    
                    if ((rbx_11 & 4) == 0)
                        goto label_14020f8bb
                    
                    goto label_14020f865
                
            label_14020f8b0:
                arg8 = _mm_blend_ps(arg8, arg7, 2)
                
                if ((rbx_11 & 4) != 0)
                label_14020f865:
                    arg8 = _mm_blend_ps(arg8, arg7, 4)
                    
                    if ((rbx_11 & 8) != 0)
                        arg8 = _mm_blend_ps(arg8, arg7, 8)
                else
                label_14020f8bb:
                    
                    if ((rbx_11 & 8) != 0)
                        arg8 = _mm_blend_ps(arg8, arg7, 8)
                
                arg_180 = arg8
            
            arg7 = data_143442c40
            arg10 = _mm_cmpeq_epi32(zmm6 & arg7, arg7) & zmm7
            arg3 = _mm_slli_epi32(arg25 & arg10, 0x1f)
            char temp0_549 = _mm_movemask_ps(arg3)
            arg21 = arg15
            
            if (temp0_549 == 0)
                arg13 = zx.o(0)
            else
                arg15 = zmm7
                int32_t temp0_550[0x4] = _mm_srai_epi32(arg3, 0x1f)
                arg9 = data_1434426c0
                zmm6 = __return_addr.o
                arg8 = _mm_add_epi64(zmm6, arg9)
                arg11 = arg24
                zmm7 = _mm_add_epi64(arg11, arg9)
                int32_t temp0_553[0x4] = _mm_shuffle_epi32(temp0_550, 0x50)
                float temp0_554[0x4] = _mm_blendv_ps(arg11, zmm7, temp0_553)
                arg3 = _mm_shuffle_epi32(temp0_550, 0xfa)
                arg7 = arg3
                zmm7 = _mm_blendv_ps(zmm6, arg8, arg7)
                
                if ((temp0_549 & 1) == 0)
                    if ((temp0_549 & 2) != 0)
                        goto label_14020f9e0
                    
                    goto label_14020f969
                
                arg7 = *arg24[0].q
                
                if ((temp0_549 & 2) != 0)
                label_14020f9e0:
                    arg7 = __insertps_xmmps_memd_immb(arg7, *_mm_extract_epi64(arg24, 1), 0x10)
                    
                    if ((temp0_549 & 4) == 0)
                        goto label_14020f96f
                    
                    goto label_14020f9f6
                
            label_14020f969:
                
                if ((temp0_549 & 4) == 0)
                label_14020f96f:
                    
                    if ((temp0_549 & 8) != 0)
                        goto label_14020fa12
                    
                    goto label_14020f979
                
            label_14020f9f6:
                arg7 = __insertps_xmmps_memd_immb(arg7, *__return_addr.o[0].q, 0x20)
                char rbx_12
                
                if ((temp0_549 & 8) != 0)
                label_14020fa12:
                    arg7 = __insertps_xmmps_memd_immb(arg7, *_mm_extract_epi64(__return_addr.o, 1), 
                        0x30)
                    rbx_12 = _mm_movemask_ps(arg10)
                    arg8 = zx.o(0)
                    
                    if ((rbx_12 & 1) != 0)
                        goto label_14020f989
                    
                    goto label_14020fa28
                
            label_14020f979:
                rbx_12 = _mm_movemask_ps(arg10)
                arg8 = zx.o(0)
                
                if ((rbx_12 & 1) != 0)
                label_14020f989:
                    arg8 = _mm_blend_epi16(arg8, arg7, 3)
                    
                    if ((rbx_12 & 2) != 0)
                        goto label_14020fa31
                    
                    goto label_14020f998
                
            label_14020fa28:
                
                if ((rbx_12 & 2) != 0)
                label_14020fa31:
                    arg8 = _mm_blend_epi16(arg8, arg7, 0xc)
                    
                    if ((rbx_12 & 4) != 0)
                        goto label_14020f9a1
                    
                    goto label_14020fa40
                
            label_14020f998:
                
                if ((rbx_12 & 4) == 0)
                label_14020fa40:
                    
                    if ((rbx_12 & 8) != 0)
                        arg8 = _mm_blend_epi16(arg8, arg7, 0xc0)
                else
                label_14020f9a1:
                    arg8 = _mm_blend_epi16(arg8, arg7, 0x30)
                    
                    if ((rbx_12 & 8) != 0)
                        arg8 = _mm_blend_epi16(arg8, arg7, 0xc0)
                
                arg_a0 = arg8
                arg8 = _mm_add_epi64(zmm7, arg9)
                arg24 = _mm_blendv_ps(temp0_554, _mm_add_epi64(arg9, temp0_554), temp0_553)
                arg7 = arg3
                __return_addr.o = _mm_blendv_ps(zmm7, arg8, arg7)
                
                if ((temp0_549 & 1) == 0)
                    if ((temp0_549 & 2) != 0)
                        goto label_14020fc66
                    
                    goto label_14020fa95
                
                arg7 = *temp0_554[0].q
                
                if ((temp0_549 & 2) != 0)
                label_14020fc66:
                    arg7 = __insertps_xmmps_memd_immb(arg7, *_mm_extract_epi64(temp0_554, 1), 0x10)
                    
                    if ((temp0_549 & 4) == 0)
                        goto label_14020fa9f
                    
                    goto label_14020fc7b
                
            label_14020fa95:
                
                if ((temp0_549 & 4) != 0)
                label_14020fc7b:
                    arg7 = __insertps_xmmps_memd_immb(arg7, *zmm7[0], 0x20)
                    
                    if ((temp0_549 & 8) != 0)
                        arg7 = __insertps_xmmps_memd_immb(arg7, *_mm_extract_epi64(zmm7, 1), 0x30)
                else
                label_14020fa9f:
                    
                    if ((temp0_549 & 8) != 0)
                        arg7 = __insertps_xmmps_memd_immb(arg7, *_mm_extract_epi64(zmm7, 1), 0x30)
                
                zmm6 = arg22
                zmm7 = arg15
                arg13 = zx.o(0)
                
                if ((rbx_12 & 1) != 0)
                    arg13 = _mm_blend_epi16(zx.o(0), arg7, 3)
                    
                    if ((rbx_12 & 2) != 0)
                        goto label_14020faeb
                    
                    goto label_14020fad3
                
                if ((rbx_12 & 2) != 0)
                label_14020faeb:
                    arg13 = _mm_blend_epi16(arg13, arg7, 0xc)
                    
                    if ((rbx_12 & 4) != 0)
                        goto label_14020fad8
                    
                    goto label_14020faf7
                
            label_14020fad3:
                
                if ((rbx_12 & 4) == 0)
                label_14020faf7:
                    
                    if ((rbx_12 & 8) != 0)
                        arg13 = _mm_blend_epi16(arg13, arg7, 0xc0)
                else
                label_14020fad8:
                    arg13 = _mm_blend_epi16(arg13, arg7, 0x30)
                    
                    if ((rbx_12 & 8) != 0)
                        arg13 = _mm_blend_epi16(arg13, arg7, 0xc0)
            
            arg7 = data_143442c50
            arg15 = zmm7
            arg9 = _mm_cmpeq_epi32(zmm6 & arg7, arg7) & zmm7
            arg10 = _mm_slli_epi32(arg25 & arg9, 0x1f)
            char temp0_577 = _mm_movemask_ps(arg10)
            arg3 = zx.o(0)
            arg11 = zx.o(0)
            
            if (temp0_577 != 0)
                int32_t temp0_578[0x4] = _mm_srai_epi32(arg10, 0x1f)
                arg8 = data_1434426c0
                arg15 = __return_addr.o
                int32_t temp0_579[0x4] = _mm_add_epi64(arg15, arg8)
                arg11 = arg24
                float temp0_582[0x4] = _mm_blendv_ps(arg11, _mm_add_epi64(arg8, arg11), 
                    _mm_shuffle_epi32(temp0_578, 0x50))
                arg7 = _mm_shuffle_epi32(temp0_578, 0xfa)
                float temp0_584[0x4] = _mm_blendv_ps(arg15, temp0_579, arg7)
                
                if ((temp0_577 & 1) == 0)
                    if ((temp0_577 & 2) != 0)
                        goto label_14020fcb6
                    
                    goto label_14020fb9b
                
                arg7 = *arg24[0].q
                
                if ((temp0_577 & 2) != 0)
                label_14020fcb6:
                    arg7 = __insertps_xmmps_memd_immb(arg7, *_mm_extract_epi64(arg24, 1), 0x10)
                    
                    if ((temp0_577 & 4) == 0)
                        goto label_14020fba5
                    
                    goto label_14020fcd0
                
            label_14020fb9b:
                
                if ((temp0_577 & 4) == 0)
                label_14020fba5:
                    
                    if ((temp0_577 & 8) != 0)
                        goto label_14020fcec
                    
                    goto label_14020fbaf
                
            label_14020fcd0:
                arg7 = __insertps_xmmps_memd_immb(arg7, *__return_addr.o[0].q, 0x20)
                char rbx_13
                
                if ((temp0_577 & 8) != 0)
                label_14020fcec:
                    arg7 = __insertps_xmmps_memd_immb(arg7, *_mm_extract_epi64(__return_addr.o, 1), 
                        0x30)
                    rbx_13 = _mm_movemask_ps(arg9)
                    arg3 = zx.o(0)
                    
                    if ((rbx_13 & 1) != 0)
                        goto label_14020fbbe
                    
                    goto label_14020fd01
                
            label_14020fbaf:
                rbx_13 = _mm_movemask_ps(arg9)
                arg3 = zx.o(0)
                
                if ((rbx_13 & 1) != 0)
                label_14020fbbe:
                    arg3 = _mm_blend_ps(arg3, arg7, 1)
                    
                    if ((rbx_13 & 2) != 0)
                        goto label_14020fd0a
                    
                    goto label_14020fbcd
                
            label_14020fd01:
                
                if ((rbx_13 & 2) != 0)
                label_14020fd0a:
                    arg3 = _mm_blend_ps(arg3, arg7, 2)
                    
                    if ((rbx_13 & 4) != 0)
                        goto label_14020fbd6
                    
                    goto label_14020fd19
                
            label_14020fbcd:
                
                if ((rbx_13 & 4) != 0)
                label_14020fbd6:
                    arg3 = _mm_blend_ps(arg3, arg7, 4)
                    
                    if ((rbx_13 & 8) != 0)
                        goto label_14020fd22
                    
                    goto label_14020fbe5
                
            label_14020fd19:
                
                if ((rbx_13 & 8) != 0)
                label_14020fd22:
                    arg3 = _mm_blend_ps(arg3, arg7, 8)
                    
                    if ((temp0_577 & 1) == 0)
                        goto label_14020fbef
                    
                    goto label_14020fd37
                
            label_14020fbe5:
                
                if ((temp0_577 & 1) == 0)
                label_14020fbef:
                    
                    if ((temp0_577 & 2) != 0)
                        goto label_14020fd4c
                    
                    goto label_14020fbf9
                
            label_14020fd37:
                arg7 = *temp0_582[0].q
                
                if ((temp0_577 & 2) != 0)
                label_14020fd4c:
                    arg7 = __insertps_xmmps_memd_immb(arg7, *_mm_extract_epi64(temp0_582, 1), 0x10)
                    
                    if ((temp0_577 & 4) == 0)
                        goto label_14020fc03
                    
                    goto label_14020fd61
                
            label_14020fbf9:
                
                if ((temp0_577 & 4) == 0)
                label_14020fc03:
                    
                    if ((temp0_577 & 8) != 0)
                        goto label_14020fd78
                    
                    goto label_14020fc0d
                
            label_14020fd61:
                arg7 = __insertps_xmmps_memd_immb(arg7, *temp0_584[0].q, 0x20)
                
                if ((temp0_577 & 8) != 0)
                label_14020fd78:
                    arg7 = __insertps_xmmps_memd_immb(arg7, *_mm_extract_epi64(temp0_584, 1), 0x30)
                    arg15 = arg19
                    arg11 = zx.o(0)
                    
                    if ((rbx_13 & 1) != 0)
                        goto label_14020fc20
                    
                    goto label_14020fd91
                
            label_14020fc0d:
                arg15 = arg19
                arg11 = zx.o(0)
                
                if ((rbx_13 & 1) != 0)
                label_14020fc20:
                    arg11 = _mm_blend_ps(arg11, arg7, 1)
                    
                    if ((rbx_13 & 2) != 0)
                        goto label_14020fd9a
                    
                    goto label_14020fc2f
                
            label_14020fd91:
                
                if ((rbx_13 & 2) != 0)
                label_14020fd9a:
                    arg11 = _mm_blend_ps(arg11, arg7, 2)
                    
                    if ((rbx_13 & 4) != 0)
                        goto label_14020fc38
                    
                    goto label_14020fda9
                
            label_14020fc2f:
                
                if ((rbx_13 & 4) == 0)
                label_14020fda9:
                    
                    if ((rbx_13 & 8) != 0)
                        arg11 = _mm_blend_ps(arg11, arg7, 8)
                else
                label_14020fc38:
                    arg11 = _mm_blend_ps(arg11, arg7, 4)
                    
                    if ((rbx_13 & 8) != 0)
                        arg11 = _mm_blend_ps(arg11, arg7, 8)
            
            int32_t temp0_603[0x4] = __paddq_xmmdq_memdq(arg37, arg34)
            int32_t temp0_604[0x4] = __paddq_xmmdq_memdq(arg38, arg18)
            arg7 = data_1434426c0
            int32_t temp0_605[0x4] = __paddq_xmmdq_memdq(temp0_604, arg29)
            int32_t temp0_607[0x4] = _mm_add_epi64(__paddq_xmmdq_memdq(temp0_603, arg32), arg7)
            float temp0_610[0x4] = _mm_blendv_ps(zx.o(0), _mm_add_epi64(temp0_605, arg7), 
                _mm_shuffle_epi32(temp0_509, 0x50))
            zmm7 = _mm_blendv_ps(zx.o(0), temp0_607, _mm_shuffle_epi32(temp0_509, 0xfa))
            int64_t rax_144 = temp0_610[0].q
            int64_t rbp_25 = _mm_extract_epi64(temp0_610, 1)
            int64_t rbx_14 = _mm_extract_epi64(zmm7, 1)
            int32_t temp0_615[0x4] = __pinsrd_xmmdq_memd_immb(
                __pinsrd_xmmdq_memd_immb(
                    __pinsrd_xmmdq_memd_immb(zx.o(*(arg4 + rax_144)), *(arg4 + rbp_25), 1), 
                    *(arg4 + zmm7[0]), 2), 
                *(arg4 + rbx_14), 3)
            arg8 = _mm_srli_epi32(temp0_615, 0x15)
            arg9 = _mm_srli_epi32(temp0_615, 0xa) & data_143442480
            arg10 = _mm_add_ps(arg28, 
                _mm_mul_ps(arg_180, 
                    __divps_xmmps_memps(
                        _mm_cvtepi32_ps(__paddd_xmmdq_memdq(temp0_615 & data_143442680, 
                            data_143442490)), 
                        data_1434426a0)))
            arg7 = data_143442440
            arg9 = _mm_cvtepi32_ps(_mm_add_epi32(arg9, arg7))
            zmm6 = data_143442690
            arg13 = _mm_mul_ps(arg13, _mm_div_ps(arg9, zmm6))
            arg7 = _mm_div_ps(_mm_cvtepi32_ps(_mm_add_epi32(arg8, arg7)), zmm6)
            char temp25_1 = temp0_510 & 1
            
            if (temp25_1 == 0)
                zmm6 = arg22
                arg9 = arg35
                zmm7 = arg15
                zmm15 = arg31
            else
                zmm15 = _mm_blend_ps(arg31, arg10, 1)
                zmm6 = arg22
                arg9 = arg35
                zmm7 = arg15
            
            float temp0_631[0x4] = _mm_mul_ps(arg11, arg7)
            float temp0_632[0x4] = _mm_add_ps(arg_a0, arg13)
            arg15 = arg21
            
            if (temp25_1 != 0)
                arg17 = _mm_blend_ps(arg17, temp0_632, 1)
                arg13 = arg23
                arg3 = _mm_add_ps(arg3, temp0_631)
                
                if (temp25_1 != 0)
                    goto label_140210141
                
                goto label_14020ff31
            
            arg13 = arg23
            arg3 = _mm_add_ps(arg3, temp0_631)
            bool cond:116_1
            bool cond:117_1
            bool cond:126_1
            bool cond:127_1
            
            if (temp25_1 != 0)
            label_140210141:
                arg15 = _mm_blend_ps(arg15, arg3, 1)
                arg11 = arg26
                char temp49_1 = temp0_510 & 2
                cond:116_1 = temp49_1 == 0
                cond:117_1 = temp49_1 != 0
                cond:126_1 = temp49_1 == 0
                cond:127_1 = temp49_1 != 0
                
                if (temp49_1 != 0)
                    goto label_14020ff42
                
                goto label_140210159
            
        label_14020ff31:
            arg11 = arg26
            char temp48_1 = temp0_510 & 2
            cond:116_1 = temp48_1 == 0
            cond:117_1 = temp48_1 != 0
            cond:126_1 = temp48_1 == 0
            cond:127_1 = temp48_1 != 0
            
            if (temp48_1 == 0)
            label_140210159:
                
                if (not(cond:116_1))
                label_14021015f:
                    arg17 = _mm_blend_ps(arg17, temp0_632, 2)
                    
                    if (cond:127_1)
                        goto label_14020ff55
                    
                    goto label_14021016c
            else
            label_14020ff42:
                zmm15 = _mm_blend_ps(zmm15, arg10, 2)
                
                if (cond:117_1)
                    goto label_14021015f
            
            bool cond:146_1
            bool cond:147_1
            bool cond:152_1
            bool cond:153_1
            
            if (not(cond:126_1))
            label_14020ff55:
                arg15 = _mm_blend_ps(arg15, arg3, 2)
                char temp59_1 = temp0_510 & 4
                cond:146_1 = temp59_1 == 0
                cond:147_1 = temp59_1 != 0
                cond:152_1 = temp59_1 == 0
                cond:153_1 = temp59_1 != 0
                
                if (temp59_1 != 0)
                    goto label_140210175
                
                goto label_14020ff65
            
        label_14021016c:
            char temp58_1 = temp0_510 & 4
            cond:146_1 = temp58_1 == 0
            cond:147_1 = temp58_1 != 0
            cond:152_1 = temp58_1 == 0
            cond:153_1 = temp58_1 != 0
            
            if (temp58_1 == 0)
            label_14020ff65:
                
                if (not(cond:146_1))
                label_14020ff6b:
                    arg17 = _mm_blend_ps(arg17, temp0_632, 4)
                    
                    if (cond:153_1)
                        goto label_140210188
                    
                    goto label_14020ff78
            else
            label_140210175:
                zmm15 = _mm_blend_ps(zmm15, arg10, 4)
                
                if (cond:147_1)
                    goto label_14020ff6b
            
            bool cond:160_1
            bool cond:161_1
            bool cond:164_1
            bool cond:165_1
            
            if (not(cond:152_1))
            label_140210188:
                arg15 = _mm_blend_ps(arg15, arg3, 4)
                char temp65_1 = temp0_510 & 8
                cond:160_1 = temp65_1 == 0
                cond:161_1 = temp65_1 != 0
                cond:164_1 = temp65_1 == 0
                cond:165_1 = temp65_1 != 0
                
                if (temp65_1 != 0)
                    goto label_14020ff81
                
                goto label_140210198
            
        label_14020ff78:
            char temp64_1 = temp0_510 & 8
            cond:160_1 = temp64_1 == 0
            cond:161_1 = temp64_1 != 0
            cond:164_1 = temp64_1 == 0
            cond:165_1 = temp64_1 != 0
            
            if (temp64_1 != 0)
            label_14020ff81:
                zmm15 = _mm_blend_ps(zmm15, arg10, 8)
                
                if (cond:161_1)
                    goto label_14021019e
                
                goto label_14020ff8e
            
        label_140210198:
            
            if (cond:160_1)
            label_14020ff8e:
                
                if (not(cond:164_1))
                    arg15 = _mm_blend_ps(arg15, arg3, 8)
            else
            label_14021019e:
                arg17 = _mm_blend_ps(arg17, temp0_632, 8)
                
                if (cond:165_1)
                    arg15 = _mm_blend_ps(arg15, arg3, 8)
            
            arg3 = arg25
        
        zmm7 ^= arg27
        
        if (_mm_movemask_ps(_mm_slli_epi32(arg3 & zmm7, 0x1f)) == 0)
            arg10 = zmm15
        else
            arg7 = __pcmpeqd_xmmdq_memdq(data_1434422d0, arg33)
            arg10 = arg3 & arg7
            arg8 = _mm_slli_epi32(arg10, 0x1f)
            char temp0_644 = _mm_movemask_ps(arg8)
            
            if (temp0_644 == 0)
                arg10 = zmm15
            else
                __return_addr.o = arg7
                int32_t temp0_646[0x4] = _mm_srai_epi32(_mm_slli_epi32(arg30, 0x1f), 0x1f)
                arg8 = _mm_srai_epi32(arg8, 0x1f) & temp0_646
                arg19 = zmm7
                arg21 = arg15
                arg15 = zmm6
                
                if (_mm_movemask_ps(arg8) != 0)
                    arg11 = data_1434426b0
                    arg9 = arg_d0
                    int32_t temp0_649[0x4] = _mm_add_epi64(arg9, arg11)
                    zmm7 = arg_f0
                    arg11 = _mm_add_epi64(arg11, zmm7)
                    arg3 = _mm_unpacklo_ps(arg8, arg8[0].q)
                    arg_f0 = _mm_blendv_ps(zmm7, arg11, arg3)
                    float temp0_653[0x4] = _mm_unpackhi_ps(arg8, arg8)
                    arg_d0 = _mm_blendv_ps(arg9, temp0_649, temp0_653)
                    int32_t temp0_655[0x4] = __paddq_xmmdq_memdq(arg37, arg34)
                    int32_t temp0_656[0x4] = __paddq_xmmdq_memdq(arg38, arg18)
                    arg7 = data_1434426c0
                    int32_t temp0_657[0x4] = __paddq_xmmdq_memdq(temp0_656, arg29)
                    int32_t temp0_659[0x4] =
                        _mm_add_epi64(__paddq_xmmdq_memdq(temp0_655, arg32), arg7)
                    zmm6 = _mm_blendv_ps(zx.o(0), _mm_add_epi64(temp0_657, arg7), arg3)
                    float temp0_662[0x4] = _mm_blendv_ps(zx.o(0), temp0_659, temp0_653)
                    int64_t rax_147 = _mm_extract_epi64(zmm6, 1)
                    int64_t rbp_26 = zmm6[0].q
                    int64_t rbx_15 = temp0_662[0].q
                    int64_t rdi_4 = _mm_extract_epi64(temp0_662, 1)
                    arg3 = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                        _mm_cvtepu16_epi32(__pinsrw_xmmdq_memw_immb(
                            __pinsrw_xmmdq_memw_immb(
                                __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rbp_26)), *(arg4 + rax_147), 
                                    1), 
                                *(arg4 + rbx_15), 2), 
                            *(arg4 + rdi_4), 3)[0].q), 
                        data_143442b40))
                
                float temp0_675[0x4] = _mm_blendv_ps(zx.o(0), arg3, temp0_646)
                
                if ((temp0_644 & 1) != 0)
                    zmm15 = _mm_blend_ps(zmm15, temp0_675, 1)
                
                arg7 = arg15
                arg17 = arg17
                arg15 = arg21
                
                if ((temp0_644 & 2) != 0)
                    zmm15 = _mm_blend_ps(zmm15, temp0_675, 2)
                    
                    if ((temp0_644 & 4) != 0)
                        goto label_1402102ec
                    
                    goto label_14021020d
                
                if ((temp0_644 & 4) == 0)
                label_14021020d:
                    
                    if ((temp0_644 & 8) != 0)
                        zmm15 = _mm_blend_ps(zmm15, temp0_675, 8)
                else
                label_1402102ec:
                    zmm15 = _mm_blend_ps(zmm15, temp0_675, 4)
                    
                    if ((temp0_644 & 8) != 0)
                        zmm15 = _mm_blend_ps(zmm15, temp0_675, 8)
                
                arg8 = data_143442c40
                arg11 = arg7 & arg8
                arg8 = _mm_slli_epi32(_mm_cmpeq_epi32(arg8, arg11) & arg10, 0x1f)
                char temp0_681 = _mm_movemask_ps(arg8)
                
                if (temp0_681 == 0)
                    zmm7 = arg7
                    arg3 = arg_f0
                    arg8 = arg_d0
                else
                    arg8 = _mm_srai_epi32(arg8, 0x1f)
                    zmm6 = data_1434426b0
                    arg9 = arg_d0
                    zmm7 = _mm_add_epi64(arg9, zmm6)
                    arg3 = _mm_blendv_ps(arg_f0, _mm_add_epi64(zmm6, arg_f0), 
                        _mm_shuffle_epi32(arg8, 0x50))
                    arg7 = _mm_shuffle_epi32(arg8, 0xfa)
                    arg8 = _mm_blendv_ps(arg9, zmm7, arg7)
                    
                    if ((temp0_681 & 1) == 0)
                        if ((temp0_681 & 2) != 0)
                            goto label_1402108a6
                        
                        goto label_14021029d
                    
                    arg7 = zx.o(*arg_f0[0].q)
                    
                    if ((temp0_681 & 2) != 0)
                    label_1402108a6:
                        arg7 = _mm_insert_epi32(arg7, zx.d(*_mm_extract_epi64(arg_f0, 1)), 1)
                        zmm7 = arg22
                        
                        if ((temp0_681 & 4) == 0)
                            goto label_1402102ad
                        
                        goto label_1402108cd
                    
                label_14021029d:
                    zmm7 = arg22
                    
                    if ((temp0_681 & 4) != 0)
                    label_1402108cd:
                        arg7 = _mm_insert_epi32(arg7, zx.d(*arg_d0[0].q), 2)
                        
                        if ((temp0_681 & 8) != 0)
                            arg7 = _mm_insert_epi32(arg7, zx.d(*_mm_extract_epi64(arg_d0, 1)), 3)
                    else
                    label_1402102ad:
                        
                        if ((temp0_681 & 8) != 0)
                            arg7 = _mm_insert_epi32(arg7, zx.d(*_mm_extract_epi64(arg_d0, 1)), 3)
                    
                    arg7 = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                        _mm_blend_epi16(zx.o(0), arg7, 0x55), data_143442b40))
                
                arg11 = _mm_cmpeq_epi32(arg11, zx.o(0)) & not.o(arg7)
                
                if ((temp0_644 & 1) != 0)
                    arg17 = _mm_blend_epi16(arg17, arg11, 3)
                
                arg9 = arg35
                zmm6 = zmm7
                zmm7 = arg19
                
                if ((temp0_644 & 2) != 0)
                    arg17 = _mm_blend_epi16(arg17, arg11, 0xc)
                    
                    if ((temp0_644 & 4) != 0)
                        goto label_1402103f2
                    
                    goto label_140210358
                
                if ((temp0_644 & 4) == 0)
                label_140210358:
                    
                    if ((temp0_644 & 8) != 0)
                        arg17 = _mm_blend_epi16(arg17, arg11, 0xc0)
                else
                label_1402103f2:
                    arg17 = _mm_blend_epi16(arg17, arg11, 0x30)
                    
                    if ((temp0_644 & 8) != 0)
                        arg17 = _mm_blend_epi16(arg17, arg11, 0xc0)
                
                arg11 = arg26
                arg7 = data_143442c50
                zmm6 &= arg7
                arg7 = _mm_cmpeq_epi32(arg7, zmm6)
                char temp0_700 = _mm_movemask_ps(_mm_slli_epi32(arg10 & arg7, 0x1f))
                
                if (temp0_700 == 0)
                    arg10 = zmm15
                    arg3 = arg25
                else
                    if ((temp0_700 & 1) == 0)
                        if ((temp0_700 & 2) != 0)
                            goto label_140210902
                        
                        goto label_1402103a5
                    
                    arg7 = zx.o(*arg3[0].q)
                    
                    if ((temp0_700 & 2) != 0)
                    label_140210902:
                        arg7 = _mm_insert_epi32(arg7, zx.d(*_mm_extract_epi64(arg3, 1)), 1)
                        arg10 = zmm15
                        arg3 = arg25
                        
                        if ((temp0_700 & 4) == 0)
                            goto label_1402103bc
                        
                        goto label_140210927
                    
                label_1402103a5:
                    arg10 = zmm15
                    arg3 = arg25
                    
                    if ((temp0_700 & 4) != 0)
                    label_140210927:
                        arg7 = _mm_insert_epi32(arg7, zx.d(*arg8[0].q), 2)
                        
                        if ((temp0_700 & 8) != 0)
                            arg7 = _mm_insert_epi32(arg7, zx.d(*_mm_extract_epi64(arg8, 1)), 3)
                    else
                    label_1402103bc:
                        
                        if ((temp0_700 & 8) != 0)
                            arg7 = _mm_insert_epi32(arg7, zx.d(*_mm_extract_epi64(arg8, 1)), 3)
                    
                    arg7 = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                        _mm_blend_epi16(zx.o(0), arg7, 0x55), data_143442b40))
                
                zmm6 = _mm_cmpeq_epi32(zmm6, zx.o(0)) & not.o(arg7)
                
                if ((temp0_644 & 1) != 0)
                    arg15 = _mm_blend_epi16(arg15, zmm6, 3)
                    arg7 = __return_addr.o
                    
                    if ((temp0_644 & 2) != 0)
                        goto label_140210453
                    
                    goto label_140210436
                
                arg7 = __return_addr.o
                
                if ((temp0_644 & 2) != 0)
                label_140210453:
                    arg15 = _mm_blend_epi16(arg15, zmm6, 0xc)
                    
                    if ((temp0_644 & 4) != 0)
                        goto label_14021043b
                    
                    goto label_14021045f
                
            label_140210436:
                
                if ((temp0_644 & 4) == 0)
                label_14021045f:
                    
                    if ((temp0_644 & 8) != 0)
                        arg15 = _mm_blend_epi16(arg15, zmm6, 0xc0)
                else
                label_14021043b:
                    arg15 = _mm_blend_epi16(arg15, zmm6, 0x30)
                    
                    if ((temp0_644 & 8) != 0)
                        arg15 = _mm_blend_epi16(arg15, zmm6, 0xc0)
            
            zmm7 = (zmm7 ^ arg7) & arg3
            
            if (_mm_movemask_ps(_mm_slli_epi32(zmm7, 0x1f)) != 0)
                int32_t temp0_713[0x4] = __pcmpeqd_xmmdq_memdq(arg33, data_143442ad0)
                char temp0_715 = _mm_movemask_ps(_mm_slli_epi32(arg3 & temp0_713, 0x1f))
                
                if (temp0_715 != 0)
                    char temp36_1 = temp0_715 & 1
                    
                    if (temp36_1 != 0)
                        arg10 = _mm_blend_ps(arg10, zx.o(0), 1)
                        
                        if (temp36_1 != 0)
                            goto label_140210507
                    else if (temp36_1 != 0)
                    label_140210507:
                        arg17 = _mm_blend_ps(arg17, zx.o(0), 1)
                        
                        if (temp36_1 != 0)
                            goto label_1402104c6
                        
                        goto label_140210510
                    
                    bool cond:124_1
                    bool cond:125_1
                    bool cond:137_1
                    bool cond:138_1
                    
                    if (temp36_1 != 0)
                    label_1402104c6:
                        arg15 = _mm_blend_ps(arg15, zx.o(0), 1)
                        char temp47_1 = temp0_715 & 2
                        cond:124_1 = temp47_1 == 0
                        cond:125_1 = temp47_1 != 0
                        cond:137_1 = temp47_1 == 0
                        cond:138_1 = temp47_1 != 0
                        
                        if (temp47_1 != 0)
                            goto label_140210515
                        
                        goto label_1402104d2
                    
                label_140210510:
                    char temp46_1 = temp0_715 & 2
                    cond:124_1 = temp46_1 == 0
                    cond:125_1 = temp46_1 != 0
                    cond:137_1 = temp46_1 == 0
                    cond:138_1 = temp46_1 != 0
                    
                    if (temp46_1 == 0)
                    label_1402104d2:
                        
                        if (not(cond:124_1))
                        label_1402104d4:
                            arg17 = _mm_blend_ps(arg17, zx.o(0), 2)
                            
                            if (cond:138_1)
                                goto label_14021051f
                            
                            goto label_1402104dd
                    else
                    label_140210515:
                        arg10 = _mm_blend_ps(arg10, zx.o(0), 2)
                        
                        if (cond:125_1)
                            goto label_1402104d4
                    
                    bool cond:150_1
                    bool cond:151_1
                    bool cond:156_1
                    bool cond:157_1
                    
                    if (not(cond:137_1))
                    label_14021051f:
                        arg15 = _mm_blend_ps(arg15, zx.o(0), 2)
                        char temp57_1 = temp0_715 & 4
                        cond:150_1 = temp57_1 == 0
                        cond:151_1 = temp57_1 != 0
                        cond:156_1 = temp57_1 == 0
                        cond:157_1 = temp57_1 != 0
                        
                        if (temp57_1 != 0)
                            goto label_1402104e2
                        
                        goto label_14021052b
                    
                label_1402104dd:
                    char temp56_1 = temp0_715 & 4
                    cond:150_1 = temp56_1 == 0
                    cond:151_1 = temp56_1 != 0
                    cond:156_1 = temp56_1 == 0
                    cond:157_1 = temp56_1 != 0
                    
                    if (temp56_1 == 0)
                    label_14021052b:
                        
                        if (not(cond:150_1))
                        label_14021052d:
                            arg17 = _mm_blend_ps(arg17, zx.o(0), 4)
                            
                            if (cond:157_1)
                                goto label_1402104ec
                            
                            goto label_140210536
                    else
                    label_1402104e2:
                        arg10 = _mm_blend_ps(arg10, zx.o(0), 4)
                        
                        if (cond:151_1)
                            goto label_14021052d
                    
                    bool cond:162_1
                    bool cond:163_1
                    bool cond:168_1
                    bool cond:169_1
                    
                    if (not(cond:156_1))
                    label_1402104ec:
                        arg15 = _mm_blend_ps(arg15, zx.o(0), 4)
                        char temp63_1 = temp0_715 & 8
                        cond:162_1 = temp63_1 == 0
                        cond:163_1 = temp63_1 != 0
                        cond:168_1 = temp63_1 == 0
                        cond:169_1 = temp63_1 != 0
                        
                        if (temp63_1 != 0)
                            goto label_14021053b
                        
                        goto label_1402104f8
                    
                label_140210536:
                    char temp62_1 = temp0_715 & 8
                    cond:162_1 = temp62_1 == 0
                    cond:163_1 = temp62_1 != 0
                    cond:168_1 = temp62_1 == 0
                    cond:169_1 = temp62_1 != 0
                    
                    if (temp62_1 != 0)
                    label_14021053b:
                        arg10 = _mm_blend_ps(arg10, zx.o(0), 8)
                        
                        if (cond:163_1)
                            goto label_1402104fa
                        
                        goto label_140210543
                    
                label_1402104f8:
                    
                    if (cond:162_1)
                    label_140210543:
                        
                        if (not(cond:168_1))
                            arg15 = _mm_blend_ps(arg15, zx.o(0), 8)
                    else
                    label_1402104fa:
                        arg17 = _mm_blend_ps(arg17, zx.o(0), 8)
                        
                        if (cond:169_1)
                            arg15 = _mm_blend_ps(arg15, zx.o(0), 8)
                
                char temp0_729 = _mm_movemask_ps(_mm_slli_epi32(temp0_713 & not.o(zmm7), 0x1f))
                
                if (temp0_729 != 0)
                    char temp39_1 = temp0_729 & 1
                    
                    if (temp39_1 != 0)
                        arg10 = _mm_blend_ps(arg10, zx.o(0), 1)
                        
                        if (temp39_1 != 0)
                            goto label_1402105b7
                    else if (temp39_1 != 0)
                    label_1402105b7:
                        arg17 = _mm_blend_ps(arg17, zx.o(0), 1)
                        
                        if (temp39_1 != 0)
                            goto label_140210576
                        
                        goto label_1402105c0
                    
                    bool cond:135_1
                    bool cond:136_1
                    bool cond:144_1
                    bool cond:145_1
                    
                    if (temp39_1 != 0)
                    label_140210576:
                        arg15 = _mm_blend_ps(arg15, zx.o(0), 1)
                        char temp53_1 = temp0_729 & 2
                        cond:135_1 = temp53_1 == 0
                        cond:136_1 = temp53_1 != 0
                        cond:144_1 = temp53_1 == 0
                        cond:145_1 = temp53_1 != 0
                        
                        if (temp53_1 != 0)
                            goto label_1402105c5
                        
                        goto label_140210582
                    
                label_1402105c0:
                    char temp52_1 = temp0_729 & 2
                    cond:135_1 = temp52_1 == 0
                    cond:136_1 = temp52_1 != 0
                    cond:144_1 = temp52_1 == 0
                    cond:145_1 = temp52_1 != 0
                    
                    if (temp52_1 == 0)
                    label_140210582:
                        
                        if (not(cond:135_1))
                        label_140210584:
                            arg17 = _mm_blend_ps(arg17, zx.o(0), 2)
                            
                            if (cond:145_1)
                                goto label_1402105cf
                            
                            goto label_14021058d
                    else
                    label_1402105c5:
                        arg10 = _mm_blend_ps(arg10, zx.o(0), 2)
                        
                        if (cond:136_1)
                            goto label_140210584
                    
                    bool cond:154_1
                    bool cond:155_1
                    bool cond:158_1
                    bool cond:159_1
                    
                    if (not(cond:144_1))
                    label_1402105cf:
                        arg15 = _mm_blend_ps(arg15, zx.o(0), 2)
                        char temp61_1 = temp0_729 & 4
                        cond:154_1 = temp61_1 == 0
                        cond:155_1 = temp61_1 != 0
                        cond:158_1 = temp61_1 == 0
                        cond:159_1 = temp61_1 != 0
                        
                        if (temp61_1 != 0)
                            goto label_140210592
                        
                        goto label_1402105db
                    
                label_14021058d:
                    char temp60_1 = temp0_729 & 4
                    cond:154_1 = temp60_1 == 0
                    cond:155_1 = temp60_1 != 0
                    cond:158_1 = temp60_1 == 0
                    cond:159_1 = temp60_1 != 0
                    
                    if (temp60_1 == 0)
                    label_1402105db:
                        
                        if (not(cond:154_1))
                        label_1402105dd:
                            arg17 = _mm_blend_ps(arg17, zx.o(0), 4)
                            
                            if (cond:159_1)
                                goto label_14021059c
                            
                            goto label_1402105e6
                    else
                    label_140210592:
                        arg10 = _mm_blend_ps(arg10, zx.o(0), 4)
                        
                        if (cond:155_1)
                            goto label_1402105dd
                    
                    bool cond:166_1
                    bool cond:167_1
                    bool cond:170_1
                    bool cond:171_1
                    
                    if (not(cond:158_1))
                    label_14021059c:
                        arg15 = _mm_blend_ps(arg15, zx.o(0), 4)
                        char temp67_1 = temp0_729 & 8
                        cond:166_1 = temp67_1 == 0
                        cond:167_1 = temp67_1 != 0
                        cond:170_1 = temp67_1 == 0
                        cond:171_1 = temp67_1 != 0
                        
                        if (temp67_1 != 0)
                            goto label_1402105eb
                        
                        goto label_1402105a8
                    
                label_1402105e6:
                    char temp66_1 = temp0_729 & 8
                    cond:166_1 = temp66_1 == 0
                    cond:167_1 = temp66_1 != 0
                    cond:170_1 = temp66_1 == 0
                    cond:171_1 = temp66_1 != 0
                    
                    if (temp66_1 != 0)
                    label_1402105eb:
                        arg10 = _mm_blend_ps(arg10, zx.o(0), 8)
                        
                        if (cond:167_1)
                            goto label_1402105aa
                        
                        goto label_1402105f3
                    
                label_1402105a8:
                    
                    if (cond:166_1)
                    label_1402105f3:
                        
                        if (not(cond:170_1))
                            arg15 = _mm_blend_ps(arg15, zx.o(0), 8)
                    else
                    label_1402105aa:
                        arg17 = _mm_blend_ps(arg17, zx.o(0), 8)
                        
                        if (cond:171_1)
                            arg15 = _mm_blend_ps(arg15, zx.o(0), 8)
    
    arg10 = _mm_sub_ps(arg10, arg12)
    arg17 = _mm_sub_ps(arg17, arg11)
    arg10 = _mm_mul_ps(arg10, arg13)
    arg8 = arg12
    char temp10_1 = temp0_413 & 1
    
    if (temp10_1 != 0)
        arg8 = arg12
        arg8[0] = arg8[0] f+ arg10[0]
        arg15 = _mm_sub_ps(arg15, arg9)
        arg17 = _mm_mul_ps(arg17, arg13)
        arg3 = arg11
        
        if (temp10_1 != 0)
            goto label_1402107f2
        
        goto label_140210631
    
    arg15 = _mm_sub_ps(arg15, arg9)
    arg17 = _mm_mul_ps(arg17, arg13)
    arg3 = arg11
    
    if (temp10_1 != 0)
    label_1402107f2:
        arg3 = arg11
        arg3[0] = arg3[0] f+ arg17[0]
        arg13 = _mm_mul_ps(arg13, arg15)
        arg7 = arg9
        
        if (temp10_1 != 0)
            goto label_14021063e
        
        goto label_140210807
    
label_140210631:
    arg13 = _mm_mul_ps(arg13, arg15)
    arg7 = arg9
    bool cond:63_1
    bool cond:64_1
    bool cond:72_1
    bool cond:73_1
    
    if (temp10_1 != 0)
    label_14021063e:
        arg7 = arg9
        arg7[0] = arg7[0] f+ arg13[0]
        arg12 = _mm_add_ps(arg12, arg10)
        char temp22_1 = temp0_413 & 2
        cond:63_1 = temp22_1 == 0
        cond:64_1 = temp22_1 != 0
        cond:72_1 = temp22_1 == 0
        cond:73_1 = temp22_1 != 0
        
        if (temp22_1 != 0)
            goto label_140210814
        
        goto label_140210653
    
label_140210807:
    arg12 = _mm_add_ps(arg12, arg10)
    char temp21_1 = temp0_413 & 2
    cond:63_1 = temp21_1 == 0
    cond:64_1 = temp21_1 != 0
    cond:72_1 = temp21_1 == 0
    cond:73_1 = temp21_1 != 0
    
    if (temp21_1 != 0)
    label_140210814:
        arg8 = _mm_blend_ps(arg8, arg12, 2)
        arg11 = _mm_add_ps(arg11, arg17)
        
        if (cond:64_1)
            goto label_14021065d
        
        goto label_140210825
    
label_140210653:
    arg11 = _mm_add_ps(arg11, arg17)
    
    if (not(cond:63_1))
    label_14021065d:
        arg3 = _mm_blend_ps(arg3, arg11, 2)
        arg9 = _mm_add_ps(arg9, arg13)
        
        if (cond:73_1)
            goto label_14021082f
        
        goto label_14021066d
    
label_140210825:
    arg9 = _mm_add_ps(arg9, arg13)
    bool cond:86_1
    bool cond:87_1
    bool cond:101_1
    bool cond:102_1
    
    if (not(cond:72_1))
    label_14021082f:
        arg7 = _mm_blend_ps(arg7, arg9, 2)
        char temp35_1 = temp0_413 & 4
        cond:86_1 = temp35_1 == 0
        cond:87_1 = temp35_1 != 0
        cond:101_1 = temp35_1 == 0
        cond:102_1 = temp35_1 != 0
        
        if (temp35_1 != 0)
            goto label_140210676
        
        goto label_14021083e
    
label_14021066d:
    char temp34_1 = temp0_413 & 4
    cond:86_1 = temp34_1 == 0
    cond:87_1 = temp34_1 != 0
    cond:101_1 = temp34_1 == 0
    cond:102_1 = temp34_1 != 0
    
    if (temp34_1 == 0)
    label_14021083e:
        
        if (not(cond:86_1))
        label_140210844:
            arg3 = _mm_blend_ps(arg3, arg11, 4)
            
            if (cond:102_1)
                goto label_140210689
            
            goto label_140210850
    else
    label_140210676:
        arg8 = _mm_blend_ps(arg8, arg12, 4)
        
        if (cond:87_1)
            goto label_140210844
    
    bool cond:122_1
    bool cond:123_1
    bool cond:133_1
    bool cond:134_1
    
    if (not(cond:101_1))
    label_140210689:
        arg7 = _mm_blend_ps(arg7, arg9, 4)
        char temp45_1 = temp0_413 & 8
        cond:122_1 = temp45_1 == 0
        cond:123_1 = temp45_1 != 0
        cond:133_1 = temp45_1 != 0
        cond:134_1 = temp45_1 == 0
        
        if (temp45_1 != 0)
            goto label_140210859
        
        goto label_140210698
    
label_140210850:
    char temp44_1 = temp0_413 & 8
    cond:122_1 = temp44_1 == 0
    cond:123_1 = temp44_1 != 0
    cond:133_1 = temp44_1 != 0
    cond:134_1 = temp44_1 == 0
    
    if (temp44_1 != 0)
    label_140210859:
        arg12 = _mm_blend_ps(arg12, arg8, 7)
        
        if (cond:123_1)
            goto label_1402106a2
        
        goto label_140210866
    
label_140210698:
    arg12 = arg8
    
    if (cond:122_1)
    label_140210866:
        arg11 = arg3
        
        if (cond:133_1)
            arg7 = _mm_blend_ps(arg7, arg9, 8)
    else
    label_1402106a2:
        arg11 = _mm_blend_ps(arg11, arg3, 7)
        
        if (not(cond:134_1))
            arg7 = _mm_blend_ps(arg7, arg9, 8)
    
    zmm6 = arg7
    rcx_8 = _mm_movemask_ps(_mm_and_ps(arg16, arg14))
    
    if (rcx_8 != 0)
        goto label_14020c8b7
float temp0_758[0x4] = _mm_unpacklo_ps(zmm6, 0)
arg3 = _mm_unpackhi_ps(zmm6, zx.o(0))
arg7 = _mm_unpacklo_ps(arg12, arg11[0].q)
arg12 = _mm_unpackhi_ps(arg12, arg11)
int32_t arg_440[0x4] = _mm_insert_ps(arg7, zmm6, 0x28)
int32_t arg_450[0x4] = _mm_unpackhi_pd(arg7, temp0_758[0].q)
int32_t arg_460[0x4] = _mm_insert_ps(arg12, zmm6, 0xa8)
int32_t arg_470[0x4] = _mm_unpackhi_pd(arg12, arg3[0].q)
uint64_t i_1 = zx.q(_mm_movemask_ps(arg14))
int64_t result

do
    uint64_t rcx_10
    uint64_t rflags_1
    
    if (i_1 == 0)
        rcx_10 = 0x40
    else
        rcx_10, rflags_1 = _bit_scan_forward(i_1)
    int128_t zmm10
    int128_t arg_430 = zmm10
    result = sx.q(*(&arg_430 + ((zx.q(rcx_10.d) & 3) << 2))) * 0x30
    *(arg6 + result + 0x10) = (&arg_440)[rcx_10]
    i_1 &= rol.q(-2, rcx_10.b)
while (i_1 != 0)

return result
