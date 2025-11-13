// 函数: sub_14035cec0
// 地址: 0x14035cec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_58[0x4] = arg12
int32_t zmm14[0x4]
int32_t var_68[0x4] = zmm14
float var_98[0x4] = arg11
float var_b8[0x4] = arg10
float var_c8[0x4] = arg9
uint32_t var_d8[0x4] = arg8
int32_t zmm6[0x4]
int32_t var_e8[0x4] = zmm6
int32_t rdx = arg15
int32_t i_2 = ((rdx s>> 0x1f u>> 0x1e) + rdx) & 0xfffffffc
uint64_t rbx = 0
int32_t var_748[0x4]
uint64_t var_728
float var_6f8[0x4]
uint32_t var_6e8[0x4]
float var_688[0x4]
uint32_t var_638[0x4]
uint64_t var_618
int32_t var_4a8
uint32_t var_498[0x4]
uint32_t var_488[0x4]
float var_478[0x4]
int32_t var_468[0x4]
int32_t var_458[0x4]
int32_t var_448[0x4]
float var_438[0x4]
int32_t var_428[0x4]
uint32_t var_418[0x4]
float var_408[0x4]
uint32_t var_3f8[0x4]
float var_3e8[0x4]
float var_3d8[0x4]
float var_3c8[0x4]
float var_3b8[0x4]
int32_t zmm0[0x4]
uint32_t zmm2[0x4]
uint32_t zmm4[0x4]
float zmm10[0x4]
float zmm12[0x4]
int32_t zmm13[0x4]

if (i_2 s<= 0)
    var_748 = zx.o(0)
    var_688 = zx.o(0)
    zmm12 = zx.o(0)
    zmm4 = zx.o(0)
    zmm13 = zx.o(0)
    zmm2 = zx.o(0)
    zmm10 = zx.o(0)
    
    if (0 s< rdx)
    label_14035e594:
        int32_t temp0_352[0x4] =
            __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rbx.d), 0), data_142e11d00)
        int64_t r10_3 = sx.q(rbx.d << 2)
        int32_t temp0_354[0x4] = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(rdx), 0), temp0_352)
        uint32_t temp0_355 = _mm_movemask_ps(temp0_354)
        uint64_t r11_4 = zx.q(temp0_355) & 0xfffffff9
        
        if (r11_4 != 9)
            if ((temp0_355.b & 1) != 0)
                var_4a8 = *(arg2 + r10_3)
            
            if ((temp0_355.b & 2) == 0)
                if ((temp0_355.b & 4) != 0)
                    goto label_14035f374
                
                goto label_14035e645
            
            int32_t var_4a4_1 = *(arg2 + r10_3 + 4)
            int32_t var_49c_1
            
            if ((temp0_355.b & 4) == 0)
            label_14035e645:
                
                if ((temp0_355.b & 8) != 0)
                    var_49c_1 = *(arg2 + r10_3 + 0xc)
            else
            label_14035f374:
                int32_t var_4a0_1 = *(arg2 + r10_3 + 8)
                
                if ((temp0_355.b & 8) != 0)
                    var_49c_1 = *(arg2 + r10_3 + 0xc)
            arg9 = var_4a8.o
        else
            arg9 = *(arg2 + r10_3)
        
        zmm0 = __pmulld_xmmdq_memdq(temp0_352, data_143442c00) & temp0_354
        int64_t rcx_33 = sx.q(zmm0[0])
        void* rax_38 = arg4 + (rcx_33 << 2)
        arg5 = *(arg4 + (rcx_33 << 2))
        int64_t rcx_35 = sx.q(_mm_extract_epi32(zmm0, 1))
        void* r14_2 = arg4 + (rcx_35 << 2)
        int64_t rbx_7 = sx.q(_mm_extract_epi32(zmm0, 2))
        void* rbp_11 = arg4 + (rbx_7 << 2)
        int64_t rdx_20 = sx.q(_mm_extract_epi32(zmm0, 3))
        void* rdi_6 = arg4 + (rdx_20 << 2)
        arg5 = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(arg5, *(arg4 + (rcx_35 << 2)), 0x10), 
                *(arg4 + (rbx_7 << 2)), 0x20), 
            *(arg4 + (rdx_20 << 2)), 0x30)
        zmm0 = data_142fc95e0 & temp0_354
        arg10 = *(zx.q(zmm0[0]) + rax_38)
        uint64_t rcx_37 = zx.q(_mm_extract_epi32(zmm0, 1))
        uint64_t rdx_21 = zx.q(_mm_extract_epi32(zmm0, 2))
        uint64_t rbx_8 = zx.q(_mm_extract_epi32(zmm0, 3))
        float temp0_368[0x4] = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(arg10, *(rcx_37 + r14_2), 0x10), 
                *(rdx_21 + rbp_11), 0x20), 
            *(rbx_8 + rdi_6), 0x30)
        zmm0 = data_142fc95f0 & temp0_354
        arg6 = *(zx.q(zmm0[0]) + rax_38)
        uint64_t rcx_39 = zx.q(_mm_extract_epi32(zmm0, 1))
        uint64_t rdx_22 = zx.q(_mm_extract_epi32(zmm0, 2))
        uint64_t rbx_9 = zx.q(_mm_extract_epi32(zmm0, 3))
        arg6 = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(arg6, *(rcx_39 + r14_2), 0x10), 
                *(rdx_22 + rbp_11), 0x20), 
            *(rbx_9 + rdi_6), 0x30)
        zmm0 = data_143442650 & temp0_354
        zmm6 = *(zx.q(zmm0[0]) + rax_38)
        uint64_t rcx_41 = zx.q(_mm_extract_epi32(zmm0, 1))
        uint64_t rdx_23 = zx.q(_mm_extract_epi32(zmm0, 2))
        uint64_t rbx_10 = zx.q(_mm_extract_epi32(zmm0, 3))
        int32_t var_698_2[0x4] = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm6, *(rcx_41 + r14_2), 0x10), 
                *(rdx_23 + rbp_11), 0x20), 
            *(rbx_10 + rdi_6), 0x30)
        zmm0 = data_143442660 & temp0_354
        zmm6 = *(zx.q(zmm0[0]) + rax_38)
        uint64_t rcx_43 = zx.q(_mm_extract_epi32(zmm0, 1))
        uint64_t rdx_24 = zx.q(_mm_extract_epi32(zmm0, 2))
        uint64_t rbx_11 = zx.q(_mm_extract_epi32(zmm0, 3))
        zmm6 = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm6, *(rcx_43 + r14_2), 0x10), 
                *(rdx_24 + rbp_11), 0x20), 
            *(rbx_11 + rdi_6), 0x30)
        zmm0 = data_143442670 & temp0_354
        arg8 = *(zx.q(zmm0[0]) + rax_38)
        uint64_t rcx_45 = zx.q(_mm_extract_epi32(zmm0, 1))
        uint64_t rdx_25 = zx.q(_mm_extract_epi32(zmm0, 2))
        int32_t* rbx_12 = zx.q(_mm_extract_epi32(zmm0, 3))
        arg8 = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(arg8, *(rcx_45 + r14_2), 0x10), 
                *(rdx_25 + rbp_11), 0x20), 
            *(rbx_12 + rdi_6), 0x30)
        zmm0 = data_143442700 & temp0_354
        uint64_t rcx_46 = zx.q(zmm0[0])
        uint8_t* rdx_26 = zx.q(_mm_extract_epi32(zmm0, 1))
        uint8_t* rbx_13 = zx.q(_mm_extract_epi32(zmm0, 2))
        uint32_t rcx_47 = zx.d(*(rcx_46 + rax_38))
        uint8_t* rsi_5 = zx.q(_mm_extract_epi32(zmm0, 3))
        int32_t temp0_398[0x4] = __pinsrb_xmmdq_memb_immb(
            __pinsrb_xmmdq_memb_immb(__pinsrb_xmmdq_memb_immb(zx.o(rcx_47), *(rdx_26 + r14_2), 4), 
                *(rbx_13 + rbp_11), 8), 
            *(rsi_5 + rdi_6), 0xc)
        float var_6a8_2[0x4] = zmm12
        int32_t var_718_2[0x4] = zmm13
        uint32_t var_658_2[0x4] = zmm4
        float var_668_2[0x4] = zmm10
        var_728.o = arg5
        
        if (r11_4 != 9)
            if ((temp0_355.b & 1) == 0)
                if ((temp0_355.b & 2) != 0)
                    goto label_14035f3b4
                
                goto label_14035e891
            
            var_4a8 = *(arg1 + r10_3)
            
            if ((temp0_355.b & 2) != 0)
            label_14035f3b4:
                int32_t var_4a4_2 = *(arg1 + r10_3 + 4)
                
                if ((temp0_355.b & 4) == 0)
                    goto label_14035e89b
                
                goto label_14035f3d2
            
        label_14035e891:
            int32_t var_49c_2
            
            if ((temp0_355.b & 4) != 0)
            label_14035f3d2:
                int32_t var_4a0_2 = *(arg1 + r10_3 + 8)
                
                if ((temp0_355.b & 8) != 0)
                    var_49c_2 = *(arg1 + r10_3 + 0xc)
            else
            label_14035e89b:
                
                if ((temp0_355.b & 8) != 0)
                    var_49c_2 = *(arg1 + r10_3 + 0xc)
            arg5 = var_4a8.o
        else
            arg5 = *(arg1 + r10_3)
        
        zmm10 = zmm2
        zmm2 = _mm_cmpeq_epi32(_mm_cmpeq_epi32(zmm2, zmm2), arg5)
            & not.o(_mm_cmpeq_epi32(temp0_398 & data_142ed6810, zx.o(0)) & not.o(temp0_354))
        uint32_t temp0_402 = _mm_movemask_ps(zmm2)
        
        if (temp0_402.b == 0)
            zmm2 = var_688
            zmm12 = var_6a8_2
            zmm13 = var_718_2
            arg11 = var_658_2
            arg6 = var_668_2
        else
            uint32_t var_6d8_2[0x4] = arg6
            float var_6c8_3[0x4] = temp0_368
            int32_t var_5f8_2[0x4] = zmm6
            uint32_t var_5e8_2[0x4] = arg8
            var_638[0] = temp0_402
            float var_678_2[0x4] = zmm10
            arg9 = _mm_slli_epi32(arg9, 6)
            float var_648_3[0x4] = zmm2
            int32_t temp0_405[0x4] = _mm_srai_epi32(_mm_slli_epi32(zmm2, 0x1f), 0x1f)
            arg9 &= temp0_405
            int64_t rax_44 = sx.q(arg9[0])
            void* rdx_27 = arg3 + rax_44
            zmm12 = *(arg3 + rax_44)
            int64_t r8_3 = sx.q(_mm_extract_epi32(arg9, 1))
            void* rbp_12 = arg3 + r8_3
            int64_t rcx_49 = sx.q(_mm_extract_epi32(arg9, 2))
            void* rbx_14 = arg3 + rcx_49
            int64_t rax_46 = sx.q(_mm_extract_epi32(arg9, 3))
            void* rdi_8 = arg3 + rax_46
            float temp0_411[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm12, *(arg3 + r8_3), 0x10), 
                    *(arg3 + rcx_49), 0x20), 
                *(arg3 + rax_46), 0x30)
            zmm0 = data_142fc95e0 & temp0_405
            arg12 = *(zx.q(zmm0[0]) + rdx_27)
            uint64_t rax_48 = zx.q(_mm_extract_epi32(zmm0, 1))
            uint64_t rcx_50 = zx.q(_mm_extract_epi32(zmm0, 2))
            uint64_t rsi_7 = zx.q(_mm_extract_epi32(zmm0, 3))
            float temp0_417[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(arg12, *(rax_48 + rbp_12), 0x10), 
                    *(rcx_50 + rbx_14), 0x20), 
                *(rsi_7 + rdi_8), 0x30)
            zmm0 = data_142fc95f0 & temp0_405
            zmm14 = *(zx.q(zmm0[0]) + rdx_27)
            uint64_t rax_50 = zx.q(_mm_extract_epi32(zmm0, 1))
            uint64_t rcx_51 = zx.q(_mm_extract_epi32(zmm0, 2))
            uint64_t rsi_8 = zx.q(_mm_extract_epi32(zmm0, 3))
            zmm14 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm14, *(rax_50 + rbp_12), 0x10), 
                    *(rcx_51 + rbx_14), 0x20), 
                *(rsi_8 + rdi_8), 0x30)
            zmm0 = data_143442650 & temp0_405
            zmm4 = *(zx.q(zmm0[0]) + rdx_27)
            uint64_t rax_52 = zx.q(_mm_extract_epi32(zmm0, 1))
            uint64_t rcx_52 = zx.q(_mm_extract_epi32(zmm0, 2))
            uint64_t rsi_9 = zx.q(_mm_extract_epi32(zmm0, 3))
            zmm4 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm4, *(rax_52 + rbp_12), 0x10), *(rcx_52 + rbx_14), 
                    0x20), 
                *(rsi_9 + rdi_8), 0x30)
            zmm0 = data_143442660 & temp0_405
            arg6 = *(zx.q(zmm0[0]) + rdx_27)
            uint64_t rax_54 = zx.q(_mm_extract_epi32(zmm0, 1))
            uint64_t rcx_53 = zx.q(_mm_extract_epi32(zmm0, 2))
            uint64_t rsi_10 = zx.q(_mm_extract_epi32(zmm0, 3))
            arg6 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(arg6, *(rax_54 + rbp_12), 0x10), *(rcx_53 + rbx_14), 
                    0x20), 
                *(rsi_10 + rdi_8), 0x30)
            zmm0 = data_143442670 & temp0_405
            arg5 = *(zx.q(zmm0[0]) + rdx_27)
            uint64_t rax_56 = zx.q(_mm_extract_epi32(zmm0, 1))
            uint64_t rcx_54 = zx.q(_mm_extract_epi32(zmm0, 2))
            uint64_t rsi_11 = zx.q(_mm_extract_epi32(zmm0, 3))
            arg5 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(arg5, *(rax_56 + rbp_12), 0x10), *(rcx_54 + rbx_14), 
                    0x20), 
                *(rsi_11 + rdi_8), 0x30)
            zmm0 = data_143442700 & temp0_405
            zmm2 = *(zx.q(zmm0[0]) + rdx_27)
            uint64_t rax_58 = zx.q(_mm_extract_epi32(zmm0, 1))
            uint64_t rcx_55 = zx.q(_mm_extract_epi32(zmm0, 2))
            uint64_t rsi_12 = zx.q(_mm_extract_epi32(zmm0, 3))
            zmm2 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm2, *(rax_58 + rbp_12), 0x10), *(rcx_55 + rbx_14), 
                    0x20), 
                *(rsi_12 + rdi_8), 0x30)
            zmm0 = data_1434b2e20 & temp0_405
            arg9 = *(zx.q(zmm0[0]) + rdx_27)
            uint64_t rax_60 = zx.q(_mm_extract_epi32(zmm0, 1))
            uint64_t rcx_56 = zx.q(_mm_extract_epi32(zmm0, 2))
            uint64_t rsi_13 = zx.q(_mm_extract_epi32(zmm0, 3))
            float temp0_453[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(arg9, *(rax_60 + rbp_12), 0x10), *(rcx_56 + rbx_14), 
                    0x20), 
                *(rsi_13 + rdi_8), 0x30)
            zmm0 = (*U"    $$$$((((,,,,000044448888<<<<")[0].o & temp0_405
            arg10 = *(zx.q(zmm0[0]) + rdx_27)
            uint64_t rax_62 = zx.q(_mm_extract_epi32(zmm0, 1))
            uint64_t rcx_57 = zx.q(_mm_extract_epi32(zmm0, 2))
            uint64_t rsi_14 = zx.q(_mm_extract_epi32(zmm0, 3))
            float temp0_459[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(arg10, *(rax_62 + rbp_12), 0x10), 
                    *(rcx_57 + rbx_14), 0x20), 
                *(rsi_14 + rdi_8), 0x30)
            zmm0 = (*U"    $$$$((((,,,,000044448888<<<<")[4].o & temp0_405
            zmm10 = *(zx.q(zmm0[0]) + rdx_27)
            int32_t* rax_64 = zx.q(_mm_extract_epi32(zmm0, 1))
            int32_t* rcx_58 = zx.q(_mm_extract_epi32(zmm0, 2))
            int32_t* rsi_15 = zx.q(_mm_extract_epi32(zmm0, 3))
            float temp0_465[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm10, *(rax_64 + rbp_12), 0x10), 
                    *(rcx_58 + rbx_14), 0x20), 
                *(rsi_15 + rdi_8), 0x30)
            zmm0 = (*U"    $$$$((((,,,,000044448888<<<<")[8].o & temp0_405
            arg8 = *(zx.q(zmm0[0]) + rdx_27)
            uint64_t rax_66 = zx.q(_mm_extract_epi32(zmm0, 1))
            uint64_t rcx_59 = zx.q(_mm_extract_epi32(zmm0, 2))
            uint64_t rsi_16 = zx.q(_mm_extract_epi32(zmm0, 3))
            arg8 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(arg8, *(rax_66 + rbp_12), 0x10), *(rcx_59 + rbx_14), 
                    0x20), 
                *(rsi_16 + rdi_8), 0x30)
            zmm6 = (*U"    $$$$((((,,,,000044448888<<<<")[0xc].o & temp0_405
            zmm0 = *(zx.q(zmm6[0]) + rdx_27)
            uint64_t rax_68 = zx.q(_mm_extract_epi32(zmm6, 1))
            uint64_t rcx_60 = zx.q(_mm_extract_epi32(zmm6, 2))
            uint64_t rsi_17 = zx.q(_mm_extract_epi32(zmm6, 3))
            zmm0 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm0, *(rax_68 + rbp_12), 0x10), *(rcx_60 + rbx_14), 
                    0x20), 
                *(rsi_17 + rdi_8), 0x30)
            arg11 = (*U"    $$$$((((,,,,000044448888<<<<")[0x10].o & temp0_405
            zmm6 = *(zx.q(arg11[0]) + rdx_27)
            uint64_t rax_70 = zx.q(_mm_extract_epi32(arg11, 1))
            uint64_t rcx_61 = zx.q(_mm_extract_epi32(arg11, 2))
            uint64_t rsi_18 = zx.q(_mm_extract_epi32(arg11, 3))
            zmm6 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm6, *(rax_70 + rbp_12), 0x10), *(rcx_61 + rbx_14), 
                    0x20), 
                *(rsi_18 + rdi_8), 0x30)
            arg11 = (*U"    $$$$((((,,,,000044448888<<<<")[0x14].o & temp0_405
            uint64_t rax_71 = zx.q(_mm_extract_epi32(arg11, 1))
            var_6e8[0].q = zx.q(_mm_extract_epi32(arg11, 2))
            uint64_t rax_73 = zx.q(arg11[0])
            var_6f8[0].q = zx.q(_mm_extract_epi32(arg11, 3))
            arg11 = (*U"    $$$$((((,,,,000044448888<<<<")[0x18].o & temp0_405
            uint64_t r14_3 = zx.q(arg11[0])
            uint64_t r12_2 = zx.q(_mm_extract_epi32(arg11, 1))
            uint64_t r13_4 = zx.q(_mm_extract_epi32(arg11, 2))
            int32_t* r11_5 = zx.q(_mm_extract_epi32(arg11, 3))
            arg11 = *(rax_73 + rdx_27)
            arg7 = temp0_405 & (*U"    $$$$((((,,,,000044448888<<<<")[0x1c].o
            uint32_t (* r9_2)[0x4] = zx.q(arg7[0])
            int32_t* rcx_63 = zx.q(_mm_extract_epi32(arg7, 1))
            int32_t* r8_4 = zx.q(_mm_extract_epi32(arg7, 2))
            int32_t* rax_74 = zx.q(_mm_extract_epi32(arg7, 3))
            float var_328[0x4] = temp0_411
            float var_318[0x4] = temp0_417
            int32_t var_308[0x4] = zmm14
            uint32_t var_2f8[0x4] = zmm4
            uint32_t var_2e8_1[0x4] = arg6
            uint32_t var_2d8_1[0x4] = arg5
            uint32_t var_2c8_1[0x4] = zmm2
            float var_2b8_1[0x4] = temp0_453
            float var_2a8_1[0x4] = temp0_459
            float var_298_1[0x4] = temp0_465
            uint32_t var_288_1[0x4] = arg8
            int32_t var_278_1[0x4] = zmm0
            int32_t var_268_1[0x4] = zmm6
            float var_258_1[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(arg11, *(rax_71 + rbp_12), 0x10), 
                    *(var_6e8[0].q + rbx_14), 0x20), 
                *(var_6f8[0].q + rdi_8), 0x30)
            uint32_t var_248_1[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(*(r14_3 + rdx_27), *(r12_2 + rbp_12), 0x10), 
                    *(r13_4 + rbx_14), 0x20), 
                *(r11_5 + rdi_8), 0x30)
            uint32_t var_238_1[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(*(r9_2 + rdx_27), *(rcx_63 + rbp_12), 0x10), 
                    *(r8_4 + rbx_14), 0x20), 
                *(rax_74 + rdi_8), 0x30)
            uint64_t var_738_2
            var_738_2.o = (*arg13)[9]
            arg10 = (*arg13)[0xd]
            zmm10 = (*arg13)[2]
            zmm14 = (*arg13)[3]
            arg11 = (*arg13)[6]
            zmm13 = (*arg13)[0xa]
            arg8 = (*arg13)[0xe]
            zmm0 = (*arg13)[7]
            arg5 = (*arg13)[0xb]
            
            for (int64_t i = 0; i != 0x100; i += 0x40)
                arg7 = *arg13
                zmm12 = arg13[1][0]
                arg7 = _mm_shuffle_ps(arg7, arg7, 0)
                arg12 = *(&var_328 + i)
                zmm4 = *(&var_318 + i)
                arg6 = *(&var_308 + i)
                zmm2 = *(&var_2f8 + i)
                arg7 = _mm_add_ps(_mm_mul_ps(arg7, arg12), zx.o(0))
                float temp0_507[0x4] =
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm12, zmm12, 0), zmm4), arg7)
                arg7 = arg13[2][0]
                arg7 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg7, arg7, 0), arg6), temp0_507)
                zmm6 = arg13[3][0]
                *(&var_4a8 + i) = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), zmm2), arg7)
                arg7 = (*arg13)[1]
                zmm6 = (*arg13)[5]
                arg7 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg7, arg7, 0), arg12), zx.o(0))
                zmm6 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), zmm4), arg7)
                arg7 = var_738_2.o
                arg7 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg7, arg7, 0), arg6), zmm6)
                *(&var_498 + i) =
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg10, arg10, 0), zmm2), arg7)
                arg7 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm10, zmm10, 0), arg12), zx.o(0))
                zmm6 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg11, arg11, 0), zmm4), arg7)
                arg7 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm13, zmm13, 0), arg6), zmm6)
                *(&var_488 + i) = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg8, arg8, 0), zmm2), arg7)
                arg7 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm14, zmm14, 0), arg12), zx.o(0))
                zmm6 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm4), arg7)
                zmm4 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg5, arg5, 0), arg6), zmm6)
                arg6 = (*arg13)[0xf]
                *(&var_478 + i) = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg6, arg6, 0), zmm2), zmm4)
            
            zmm12 = var_4a8.o
            zmm13 = var_498
            arg8 = var_488
            uint32_t var_588_2[0x4] = arg8
            zmm10 = var_468
            arg11 = var_458
            arg5 = var_698_2
            arg6 = _mm_add_ps(var_728.o, arg5)
            zmm0 = data_142d3f640
            arg6 = _mm_mul_ps(arg6, zmm0)
            zmm2 = zmm0
            zmm4 = _mm_mul_ps(arg6, zmm12)
            zmm6 = _mm_mul_ps(arg6, zmm13)
            float temp0_555[0x4] = _mm_mul_ps(_mm_add_ps(var_6c8_3, var_5f8_2), zmm2)
            zmm14 = zmm2
            arg7 = _mm_add_ps(_mm_mul_ps(temp0_555, zmm10), zmm4)
            zmm4 = _mm_add_ps(_mm_mul_ps(temp0_555, arg11), zmm6)
            zmm6 = _mm_mul_ps(arg6, arg8)
            zmm2 = var_448
            uint32_t var_6f8_1[0x4] = zmm2
            float temp0_562[0x4] = _mm_add_ps(_mm_mul_ps(temp0_555, zmm2), zmm6)
            zmm2 = var_478
            var_618.o = zmm2
            arg6 = _mm_mul_ps(arg6, zmm2)
            zmm2 = var_438
            float temp0_565[0x4] = _mm_add_ps(_mm_mul_ps(temp0_555, zmm2), arg6)
            arg8 = _mm_mul_ps(_mm_add_ps(var_6d8_2, var_5e8_2), zmm14)
            float temp0_569[0x4] = _mm_add_ps(_mm_mul_ps(arg8, var_428), arg7)
            var_738_2.o = var_418
            zmm6 = _mm_add_ps(_mm_mul_ps(arg8, var_418), zmm4)
            arg6 = var_408
            uint32_t var_6e8_1[0x4] = arg6
            zmm4 = _mm_add_ps(_mm_mul_ps(arg8, arg6), temp0_562)
            arg7 = var_3f8
            arg8 = _mm_mul_ps(arg8, arg7)
            arg12 = __addps_xmmps_memps(temp0_569, var_3e8)
            zmm6 = __addps_xmmps_memps(zmm6, var_3d8)
            zmm4 = __addps_xmmps_memps(zmm4, var_3c8)
            arg8 = __addps_xmmps_memps(_mm_add_ps(arg8, temp0_565), var_3b8)
            var_4a8.o = zmm12
            var_498 = zmm13
            arg9 = var_588_2
            var_488 = arg9
            var_478 = var_618.o
            float var_368_2[0x4] = zmm10
            float var_358_2[0x4] = arg11
            uint32_t var_348_2[0x4] = var_6f8_1
            uint32_t var_338_2[0x4] = zmm2
            int32_t var_3a8_2[0x4] = var_428
            arg6 = var_738_2.o
            uint32_t var_398_2[0x4] = arg6
            arg10 = var_6e8_1
            float var_388_2[0x4] = arg10
            int32_t var_378_2[0x4] = arg7
            zmm0 = __subps_xmmps_memps(var_5f8_2, var_6c8_3)
            zmm2 = __subps_xmmps_memps(var_5e8_2, var_6d8_2)
            arg5 = __subps_xmmps_memps(arg5, var_728.o)
            arg7 = data_142d3f640
            zmm0 = _mm_mul_ps(zmm0, arg7)
            arg5 = _mm_mul_ps(arg5, arg7)
            zmm2 = _mm_mul_ps(zmm2, arg7)
            float var_128_1[0x4] = arg12
            int32_t var_118_1[0x4] = zmm6
            uint32_t var_108_1[0x4] = zmm4
            uint32_t var_f8_1[0x4] = arg8
            float temp0_586[0x4] = _mm_mul_ps(zmm12, arg5)
            zmm13 = _mm_mul_ps(zmm13, arg5)
            arg5 = _mm_mul_ps(arg5, arg9)
            float temp0_589[0x4] = _mm_mul_ps(zmm10, zmm0)
            float temp0_590[0x4] = _mm_mul_ps(arg11, zmm0)
            zmm0 = __mulps_xmmps_memps(zmm0, var_6f8_1)
            arg8 = data_142d3f770
            zmm12 = _mm_and_ps(temp0_586, arg8)
            float temp0_594[0x4] = _mm_add_ps(_mm_and_ps(temp0_589, arg8), zmm12)
            zmm13 = _mm_and_ps(zmm13, arg8)
            float temp0_597[0x4] = _mm_add_ps(_mm_and_ps(temp0_590, arg8), zmm13)
            uint32_t temp0_598[0x4] = _mm_and_ps(arg5, arg8)
            zmm0 = _mm_add_ps(_mm_and_ps(zmm0, arg8), temp0_598)
            zmm14 = _mm_mul_ps(var_428, zmm2)
            arg7 = _mm_mul_ps(arg6, zmm2)
            zmm2 = __mulps_xmmps_memps(zmm2, var_6e8_1)
            zmm14 = _mm_add_ps(_mm_and_ps(zmm14, arg8), temp0_594)
            arg7 = _mm_add_ps(_mm_and_ps(arg7, arg8), temp0_597)
            zmm2 = _mm_add_ps(_mm_and_ps(zmm2, arg8), zmm0)
            zmm13 = _mm_sub_ps(arg12, zmm14)
            zmm0 = _mm_sub_ps(zmm6, arg7)
            float temp0_612[0x4] = _mm_sub_ps(zmm4, zmm2)
            zmm14 = _mm_add_ps(zmm14, arg12)
            arg7 = _mm_add_ps(arg7, zmm6)
            zmm2 = _mm_add_ps(zmm2, zmm4)
            arg5 = zx.o(0)
            zmm4 = _mm_cmpeq_epi32(data_142ed6810 & var_748, zx.o(0))
            zmm12 = var_648_3
            zmm6 = _mm_slli_epi32(zmm4 & not.o(zmm12), 0x1f)
            char temp0_618 = _mm_movemask_ps(zmm6)
            char rcx_64 = var_638[0].b
            char rax_76
            bool cond:27_1
            bool cond:28_1
            bool cond:29_1
            bool cond:36_1
            bool cond:37_1
            bool cond:46_1
            bool cond:47_1
            bool cond:52_1
            bool cond:53_1
            bool cond:62_1
            bool cond:63_1
            
            if (temp0_618 == 0)
                arg8 = zmm2
            label_14035f40f:
                zmm12 = _mm_slli_epi32(zmm12 & zmm4, 0x1f)
                
                if (_mm_movemask_ps(zmm12) == 0)
                    arg8 = var_748
                    zmm12 = var_688
                    arg5 = var_6a8_2
                    zmm10 = var_678_2
                    arg11 = var_658_2
                    zmm4 = var_668_2
                    arg9 = zmm6
                    zmm6 = var_6c8_3
                    zmm2 = var_728.o
                    arg7 = arg12
                    rax_76 = rcx_64
                    char temp5_1 = rax_76 & 1
                    cond:27_1 = temp5_1 == 0
                    cond:28_1 = temp5_1 != 0
                    cond:29_1 = temp5_1 != 0
                    cond:36_1 = temp5_1 != 0
                    cond:37_1 = temp5_1 == 0
                    cond:46_1 = temp5_1 == 0
                    cond:47_1 = temp5_1 != 0
                    cond:52_1 = temp5_1 != 0
                    cond:53_1 = temp5_1 == 0
                    cond:62_1 = temp5_1 == 0
                    cond:63_1 = temp5_1 != 0
                    
                    if (temp5_1 != 0)
                        zmm4 = _mm_blend_ps(zmm4, zmm2, 1)
                else
                    uint32_t var_6d8_3[0x4] = arg5
                    char temp0_628 = _mm_movemask_ps(zmm4)
                    char temp6_1 = temp0_628 & 1
                    arg11 = var_658_2
                    zmm4 = var_668_2
                    
                    if (temp6_1 != 0)
                        var_728.o = _mm_blend_ps(var_728.o, zmm13, 1)
                    
                    arg5 = temp0_612
                    var_738_2.o = arg7
                    zmm10 = var_678_2
                    arg9 = zmm6
                    zmm6 = var_6c8_3
                    zmm2 = var_728.o
                    arg7 = arg12
                    arg12 = zmm13
                    zmm13 = arg8
                    
                    if (temp6_1 == 0)
                        if (temp6_1 != 0)
                            goto label_14035fae7
                        
                        goto label_14035f429
                    
                    zmm6 = _mm_blend_ps(zmm6, zmm0, 1)
                    
                    if (temp6_1 != 0)
                    label_14035fae7:
                        arg7 = _mm_blend_ps(arg7, arg5, 1)
                        
                        if (temp6_1 == 0)
                            goto label_14035f429_1
                        
                        goto label_14035faf3
                    
                label_14035f429:
                    
                    if (temp6_1 != 0)
                    label_14035faf3:
                        arg10 = _mm_blend_ps(arg10, zmm14, 1)
                        
                        if (temp6_1 != 0)
                        label_14035fb00:
                            arg6 = __blendps_xmmdq_memdq_immb(arg6, var_738_2.o, 1)
                            
                            if (temp6_1 == 0)
                                goto label_14035f4a1
                            
                            goto label_14035fb0e
                    else
                    label_14035f429_1:
                        
                        if (temp6_1 != 0)
                            goto label_14035fb00
                    
                    if (temp6_1 == 0)
                    label_14035f4a1:
                        arg8 = var_748
                        
                        if (temp6_1 != 0)
                            goto label_14035fb2a
                        
                        goto label_14035f4ac
                    
                label_14035fb0e:
                    arg9 = _mm_blend_ps(arg9, zmm13, 1)
                    arg8 = var_748
                    bool cond:86_1
                    bool cond:87_1
                    bool cond:94_1
                    bool cond:95_1
                    bool cond:104_1
                    bool cond:105_1
                    bool cond:110_1
                    bool cond:111_1
                    bool cond:120_1
                    bool cond:121_1
                    bool cond:130_1
                    bool cond:131_1
                    
                    if (temp6_1 != 0)
                    label_14035fb2a:
                        arg8 = _mm_insert_epi32(var_748, 1, 0)
                        char temp14_1 = temp0_628 & 2
                        cond:86_1 = temp14_1 == 0
                        cond:87_1 = temp14_1 != 0
                        cond:94_1 = temp14_1 != 0
                        cond:95_1 = temp14_1 == 0
                        cond:104_1 = temp14_1 == 0
                        cond:105_1 = temp14_1 != 0
                        cond:110_1 = temp14_1 != 0
                        cond:111_1 = temp14_1 == 0
                        cond:120_1 = temp14_1 == 0
                        cond:121_1 = temp14_1 != 0
                        cond:130_1 = temp14_1 != 0
                        cond:131_1 = temp14_1 == 0
                        
                        if (temp14_1 == 0)
                            goto label_14035f4b4
                        
                        goto label_14035fb38
                    
                label_14035f4ac:
                    char temp13_1 = temp0_628 & 2
                    cond:86_1 = temp13_1 == 0
                    cond:87_1 = temp13_1 != 0
                    cond:94_1 = temp13_1 != 0
                    cond:95_1 = temp13_1 == 0
                    cond:104_1 = temp13_1 == 0
                    cond:105_1 = temp13_1 != 0
                    cond:110_1 = temp13_1 != 0
                    cond:111_1 = temp13_1 == 0
                    cond:120_1 = temp13_1 == 0
                    cond:121_1 = temp13_1 != 0
                    cond:130_1 = temp13_1 != 0
                    cond:131_1 = temp13_1 == 0
                    
                    if (temp13_1 == 0)
                    label_14035f4b4:
                        
                        if (cond:87_1)
                            goto label_14035fb45
                        
                        goto label_14035f4ba
                    
                label_14035fb38:
                    zmm2 = _mm_blend_ps(zmm2, arg12, 2)
                    
                    if (not(cond:86_1))
                    label_14035fb45:
                        zmm6 = _mm_blend_ps(zmm6, zmm0, 2)
                        
                        if (cond:95_1)
                            goto label_14035f4c0
                        
                        goto label_14035fb51
                    
                label_14035f4ba:
                    
                    if (not(cond:94_1))
                    label_14035f4c0:
                        
                        if (cond:105_1)
                            goto label_14035fb5d
                        
                        goto label_14035f4c6
                    
                label_14035fb51:
                    arg7 = _mm_blend_ps(arg7, arg5, 2)
                    
                    if (not(cond:104_1))
                    label_14035fb5d:
                        arg10 = _mm_blend_ps(arg10, zmm14, 2)
                        
                        if (cond:111_1)
                            goto label_14035f4cc
                        
                        goto label_14035fb6a
                    
                label_14035f4c6:
                    
                    if (cond:110_1)
                    label_14035fb6a:
                        arg6 = __blendps_xmmdq_memdq_immb(arg6, var_738_2.o, 2)
                        
                        if (not(cond:120_1))
                        label_14035fb78:
                            arg9 = _mm_blend_ps(arg9, zmm13, 2)
                            
                            if (cond:131_1)
                                goto label_14035f4d8
                            
                            goto label_14035fb85
                    else
                    label_14035f4cc:
                        
                        if (cond:121_1)
                            goto label_14035fb78
                    
                    bool cond:146_1
                    bool cond:147_1
                    bool cond:154_1
                    bool cond:155_1
                    bool cond:164_1
                    bool cond:165_1
                    bool cond:170_1
                    bool cond:171_1
                    bool cond:179_1
                    bool cond:180_1
                    bool cond:189_1
                    bool cond:190_1
                    
                    if (not(cond:130_1))
                    label_14035f4d8:
                        char temp24_1 = temp0_628 & 4
                        cond:146_1 = temp24_1 != 0
                        cond:147_1 = temp24_1 == 0
                        cond:154_1 = temp24_1 == 0
                        cond:155_1 = temp24_1 != 0
                        cond:164_1 = temp24_1 != 0
                        cond:165_1 = temp24_1 == 0
                        cond:170_1 = temp24_1 == 0
                        cond:171_1 = temp24_1 != 0
                        cond:179_1 = temp24_1 != 0
                        cond:180_1 = temp24_1 == 0
                        cond:189_1 = temp24_1 == 0
                        cond:190_1 = temp24_1 != 0
                        
                        if (temp24_1 != 0)
                            goto label_14035fb93
                        
                        goto label_14035f4e0
                    
                label_14035fb85:
                    arg8 = _mm_insert_epi32(arg8, 1, 1)
                    char temp23_1 = temp0_628 & 4
                    cond:146_1 = temp23_1 != 0
                    cond:147_1 = temp23_1 == 0
                    cond:154_1 = temp23_1 == 0
                    cond:155_1 = temp23_1 != 0
                    cond:164_1 = temp23_1 != 0
                    cond:165_1 = temp23_1 == 0
                    cond:170_1 = temp23_1 == 0
                    cond:171_1 = temp23_1 != 0
                    cond:179_1 = temp23_1 != 0
                    cond:180_1 = temp23_1 == 0
                    cond:189_1 = temp23_1 == 0
                    cond:190_1 = temp23_1 != 0
                    
                    if (temp23_1 != 0)
                    label_14035fb93:
                        zmm2 = _mm_blend_ps(zmm2, arg12, 4)
                        
                        if (cond:147_1)
                            goto label_14035f4e6
                        
                        goto label_14035fba0
                    
                label_14035f4e0:
                    
                    if (not(cond:146_1))
                    label_14035f4e6:
                        
                        if (cond:155_1)
                            goto label_14035fbac
                        
                        goto label_14035f4ec
                    
                label_14035fba0:
                    zmm6 = _mm_blend_ps(zmm6, zmm0, 4)
                    
                    if (not(cond:154_1))
                    label_14035fbac:
                        arg7 = _mm_blend_ps(arg7, arg5, 4)
                        
                        if (cond:165_1)
                            goto label_14035f4f2
                        
                        goto label_14035fbb8
                    
                label_14035f4ec:
                    
                    if (not(cond:164_1))
                    label_14035f4f2:
                        
                        if (cond:171_1)
                            goto label_14035fbc5
                        
                        goto label_14035f4f8
                    
                label_14035fbb8:
                    arg10 = _mm_blend_ps(arg10, zmm14, 4)
                    
                    if (not(cond:170_1))
                    label_14035fbc5:
                        arg6 = __blendps_xmmdq_memdq_immb(arg6, var_738_2.o, 4)
                        
                        if (cond:180_1)
                            goto label_14035f4fe
                        
                        goto label_14035fbd3
                    
                label_14035f4f8:
                    
                    if (not(cond:179_1))
                    label_14035f4fe:
                        
                        if (cond:190_1)
                            goto label_14035fbe0
                        
                        goto label_14035f504
                    
                label_14035fbd3:
                    arg9 = _mm_blend_ps(arg9, zmm13, 4)
                    bool cond:205_1
                    bool cond:206_1
                    bool cond:213_1
                    bool cond:214_1
                    bool cond:220_1
                    bool cond:221_1
                    bool cond:224_1
                    bool cond:225_1
                    bool cond:228_1
                    bool cond:229_1
                    bool cond:232_1
                    bool cond:233_1
                    
                    if (not(cond:189_1))
                    label_14035fbe0:
                        arg8 = _mm_insert_epi32(arg8, 1, 2)
                        char temp34_1 = temp0_628 & 8
                        cond:205_1 = temp34_1 == 0
                        cond:206_1 = temp34_1 != 0
                        cond:213_1 = temp34_1 != 0
                        cond:214_1 = temp34_1 == 0
                        cond:220_1 = temp34_1 == 0
                        cond:221_1 = temp34_1 != 0
                        cond:224_1 = temp34_1 != 0
                        cond:225_1 = temp34_1 == 0
                        cond:228_1 = temp34_1 == 0
                        cond:229_1 = temp34_1 != 0
                        cond:232_1 = temp34_1 == 0
                        cond:233_1 = temp34_1 != 0
                        
                        if (temp34_1 == 0)
                            goto label_14035f50c
                        
                        goto label_14035fbee
                    
                label_14035f504:
                    char temp33_1 = temp0_628 & 8
                    cond:205_1 = temp33_1 == 0
                    cond:206_1 = temp33_1 != 0
                    cond:213_1 = temp33_1 != 0
                    cond:214_1 = temp33_1 == 0
                    cond:220_1 = temp33_1 == 0
                    cond:221_1 = temp33_1 != 0
                    cond:224_1 = temp33_1 != 0
                    cond:225_1 = temp33_1 == 0
                    cond:228_1 = temp33_1 == 0
                    cond:229_1 = temp33_1 != 0
                    cond:232_1 = temp33_1 == 0
                    cond:233_1 = temp33_1 != 0
                    
                    if (temp33_1 == 0)
                    label_14035f50c:
                        
                        if (cond:206_1)
                            goto label_14035fbfb
                        
                        goto label_14035f512
                    
                label_14035fbee:
                    zmm2 = _mm_blend_ps(zmm2, arg12, 8)
                    
                    if (not(cond:205_1))
                    label_14035fbfb:
                        zmm6 = _mm_blend_ps(zmm6, zmm0, 8)
                        
                        if (cond:214_1)
                            goto label_14035f518
                        
                        goto label_14035fc07
                    
                label_14035f512:
                    
                    if (not(cond:213_1))
                    label_14035f518:
                        
                        if (cond:221_1)
                            goto label_14035fc13
                        
                        goto label_14035f51e
                    
                label_14035fc07:
                    arg7 = _mm_blend_ps(arg7, arg5, 8)
                    
                    if (not(cond:220_1))
                    label_14035fc13:
                        arg10 = _mm_blend_ps(arg10, zmm14, 8)
                        
                        if (cond:225_1)
                            goto label_14035f524
                        
                        goto label_14035fc20
                    
                label_14035f51e:
                    
                    if (not(cond:224_1))
                    label_14035f524:
                        
                        if (cond:229_1)
                            goto label_14035fc2e
                        
                        goto label_14035f52a
                    
                label_14035fc20:
                    arg6 = __blendps_xmmdq_memdq_immb(arg6, var_738_2.o, 8)
                    
                    if (cond:228_1)
                    label_14035f52a:
                        
                        if (not(cond:232_1))
                            arg8 = _mm_insert_epi32(arg8, 1, 3)
                    else
                    label_14035fc2e:
                        arg9 = _mm_blend_ps(arg9, zmm13, 8)
                        
                        if (cond:233_1)
                            arg8 = _mm_insert_epi32(arg8, 1, 3)
                    
                    _mm_movemask_ps(_mm_srai_epi32(zmm12, 0x1f) | var_6d8_3)
                    zmm12 = var_688
                    arg5 = var_6a8_2
                    rax_76 = rcx_64
                    char temp38_1 = rax_76 & 1
                    cond:27_1 = temp38_1 == 0
                    cond:28_1 = temp38_1 != 0
                    cond:29_1 = temp38_1 != 0
                    cond:36_1 = temp38_1 != 0
                    cond:37_1 = temp38_1 == 0
                    cond:46_1 = temp38_1 == 0
                    cond:47_1 = temp38_1 != 0
                    cond:52_1 = temp38_1 != 0
                    cond:53_1 = temp38_1 == 0
                    cond:62_1 = temp38_1 == 0
                    cond:63_1 = temp38_1 != 0
                    
                    if (temp38_1 != 0)
                        zmm4 = _mm_blend_ps(zmm4, zmm2, 1)
            else
                arg8 = var_668_2
                var_728.o = _mm_min_ps(arg8, zmm13)
                var_6c8_3 = _mm_min_ps(var_678_2, zmm0)
                arg12 = _mm_min_ps(var_718_2, temp0_612)
                arg11 = var_658_2
                arg10 = _mm_max_ps(arg11, zmm14)
                arg5 = var_6a8_2
                float temp0_623[0x4] = _mm_max_ps(arg5, arg7)
                zmm12 = var_688
                arg6 = _mm_max_ps(zmm12, zmm2)
                
                if (rcx_64 != temp0_618)
                    arg5 = _mm_srai_epi32(zmm6, 0x1f)
                    arg8 = zmm2
                    zmm12 = var_648_3
                    zmm6 = arg6
                    arg6 = temp0_623
                    goto label_14035f40f
                
                zmm4 = arg8
                arg8 = var_748
                zmm10 = var_678_2
                zmm0 = arg6
                arg6 = temp0_623
                arg7 = arg12
                arg9 = zmm0
                zmm6 = var_6c8_3
                zmm2 = var_728.o
                rax_76 = rcx_64
                char temp4_1 = rax_76 & 1
                cond:27_1 = temp4_1 == 0
                cond:28_1 = temp4_1 != 0
                cond:29_1 = temp4_1 != 0
                cond:36_1 = temp4_1 != 0
                cond:37_1 = temp4_1 == 0
                cond:46_1 = temp4_1 == 0
                cond:47_1 = temp4_1 != 0
                cond:52_1 = temp4_1 != 0
                cond:53_1 = temp4_1 == 0
                cond:62_1 = temp4_1 == 0
                cond:63_1 = temp4_1 != 0
                
                if (temp4_1 != 0)
                    zmm4 = _mm_blend_ps(zmm4, zmm2, 1)
            
            if (not(cond:29_1))
                if (cond:28_1)
                    goto label_14035f627
                
                goto label_14035f56e
            
            zmm10 = _mm_blend_ps(zmm10, zmm6, 1)
            
            if (not(cond:27_1))
            label_14035f627:
                var_718_2 = _mm_blend_ps(var_718_2, arg7, 1)
                
                if (cond:37_1)
                    goto label_14035f574
                
                goto label_14035f632
            
        label_14035f56e:
            
            if (not(cond:36_1))
            label_14035f574:
                
                if (cond:47_1)
                    goto label_14035f63f
                
                goto label_14035f57a
            
        label_14035f632:
            arg11 = _mm_blend_ps(arg11, arg10, 1)
            
            if (not(cond:46_1))
            label_14035f63f:
                arg5 = _mm_blend_ps(arg5, arg6, 1)
                
                if (cond:53_1)
                    goto label_14035f580
                
                goto label_14035f64b
            
        label_14035f57a:
            
            if (not(cond:52_1))
            label_14035f580:
                
                if (cond:63_1)
                    goto label_14035f663
                
                goto label_14035f586
            
        label_14035f64b:
            zmm12 = _mm_blend_ps(zmm12, arg9, 1)
            bool cond:78_1
            bool cond:79_1
            bool cond:88_1
            bool cond:89_1
            bool cond:96_1
            bool cond:97_1
            bool cond:106_1
            bool cond:107_1
            bool cond:112_1
            bool cond:113_1
            bool cond:122_1
            bool cond:123_1
            
            if (not(cond:62_1))
            label_14035f663:
                var_748 = _mm_blend_epi16(var_748, arg8, 3)
                char temp16_1 = rax_76 & 2
                cond:78_1 = temp16_1 == 0
                cond:79_1 = temp16_1 != 0
                cond:88_1 = temp16_1 != 0
                cond:89_1 = temp16_1 == 0
                cond:96_1 = temp16_1 == 0
                cond:97_1 = temp16_1 != 0
                cond:106_1 = temp16_1 != 0
                cond:107_1 = temp16_1 == 0
                cond:112_1 = temp16_1 == 0
                cond:113_1 = temp16_1 != 0
                cond:122_1 = temp16_1 != 0
                cond:123_1 = temp16_1 == 0
                
                if (temp16_1 == 0)
                    goto label_14035f58e
                
                goto label_14035f670
            
        label_14035f586:
            char temp15_1 = rax_76 & 2
            cond:78_1 = temp15_1 == 0
            cond:79_1 = temp15_1 != 0
            cond:88_1 = temp15_1 != 0
            cond:89_1 = temp15_1 == 0
            cond:96_1 = temp15_1 == 0
            cond:97_1 = temp15_1 != 0
            cond:106_1 = temp15_1 != 0
            cond:107_1 = temp15_1 == 0
            cond:112_1 = temp15_1 == 0
            cond:113_1 = temp15_1 != 0
            cond:122_1 = temp15_1 != 0
            cond:123_1 = temp15_1 == 0
            
            if (temp15_1 == 0)
            label_14035f58e:
                
                if (cond:79_1)
                    goto label_14035f67c
                
                goto label_14035f594
            
        label_14035f670:
            zmm4 = _mm_blend_ps(zmm4, zmm2, 2)
            
            if (not(cond:78_1))
            label_14035f67c:
                zmm10 = _mm_blend_ps(zmm10, zmm6, 2)
                
                if (cond:89_1)
                    goto label_14035f59a
                
                goto label_14035f694
            
        label_14035f594:
            
            if (not(cond:88_1))
            label_14035f59a:
                
                if (cond:97_1)
                    goto label_14035f69f
                
                goto label_14035f5a0
            
        label_14035f694:
            var_718_2 = _mm_blend_ps(var_718_2, arg7, 2)
            
            if (not(cond:96_1))
            label_14035f69f:
                arg11 = _mm_blend_ps(arg11, arg10, 2)
                
                if (cond:107_1)
                    goto label_14035f5a6
                
                goto label_14035f6ac
            
        label_14035f5a0:
            
            if (cond:106_1)
            label_14035f6ac:
                arg5 = _mm_blend_ps(arg5, arg6, 2)
                
                if (not(cond:112_1))
                label_14035f6b8:
                    zmm12 = _mm_blend_ps(zmm12, arg9, 2)
                    
                    if (cond:123_1)
                        goto label_14035f5b2
                    
                    goto label_14035f6d0
            else
            label_14035f5a6:
                
                if (cond:113_1)
                    goto label_14035f6b8
            
            bool cond:138_1
            bool cond:139_1
            bool cond:148_1
            bool cond:149_1
            bool cond:156_1
            bool cond:157_1
            bool cond:166_1
            bool cond:167_1
            bool cond:172_1
            bool cond:173_1
            bool cond:181_1
            bool cond:182_1
            
            if (not(cond:122_1))
            label_14035f5b2:
                char temp26_1 = rax_76 & 4
                cond:138_1 = temp26_1 != 0
                cond:139_1 = temp26_1 == 0
                cond:148_1 = temp26_1 == 0
                cond:149_1 = temp26_1 != 0
                cond:156_1 = temp26_1 != 0
                cond:157_1 = temp26_1 == 0
                cond:166_1 = temp26_1 == 0
                cond:167_1 = temp26_1 != 0
                cond:172_1 = temp26_1 != 0
                cond:173_1 = temp26_1 == 0
                cond:181_1 = temp26_1 == 0
                cond:182_1 = temp26_1 != 0
                
                if (temp26_1 != 0)
                    goto label_14035f6dd
                
                goto label_14035f5ba
            
        label_14035f6d0:
            var_748 = _mm_blend_epi16(var_748, arg8, 0xc)
            char temp25_1 = rax_76 & 4
            cond:138_1 = temp25_1 != 0
            cond:139_1 = temp25_1 == 0
            cond:148_1 = temp25_1 == 0
            cond:149_1 = temp25_1 != 0
            cond:156_1 = temp25_1 != 0
            cond:157_1 = temp25_1 == 0
            cond:166_1 = temp25_1 == 0
            cond:167_1 = temp25_1 != 0
            cond:172_1 = temp25_1 != 0
            cond:173_1 = temp25_1 == 0
            cond:181_1 = temp25_1 == 0
            cond:182_1 = temp25_1 != 0
            
            if (temp25_1 != 0)
            label_14035f6dd:
                zmm4 = _mm_blend_ps(zmm4, zmm2, 4)
                
                if (cond:139_1)
                    goto label_14035f5c0
                
                goto label_14035f6e9
            
        label_14035f5ba:
            
            if (not(cond:138_1))
            label_14035f5c0:
                
                if (cond:149_1)
                    goto label_14035f701
                
                goto label_14035f5c6
            
        label_14035f6e9:
            zmm10 = _mm_blend_ps(zmm10, zmm6, 4)
            
            if (not(cond:148_1))
            label_14035f701:
                var_718_2 = _mm_blend_ps(var_718_2, arg7, 4)
                
                if (cond:157_1)
                    goto label_14035f5cc
                
                goto label_14035f70c
            
        label_14035f5c6:
            
            if (not(cond:156_1))
            label_14035f5cc:
                
                if (cond:167_1)
                    goto label_14035f719
                
                goto label_14035f5d2
            
        label_14035f70c:
            arg11 = _mm_blend_ps(arg11, arg10, 4)
            
            if (not(cond:166_1))
            label_14035f719:
                arg5 = _mm_blend_ps(arg5, arg6, 4)
                
                if (cond:173_1)
                    goto label_14035f5d8
                
                goto label_14035f725
            
        label_14035f5d2:
            
            if (not(cond:172_1))
            label_14035f5d8:
                
                if (cond:182_1)
                    goto label_14035f73d
                
                goto label_14035f5de
            
        label_14035f725:
            zmm12 = _mm_blend_ps(zmm12, arg9, 4)
            bool cond:197_1
            bool cond:198_1
            bool cond:207_1
            bool cond:208_1
            bool cond:215_1
            bool cond:222_1
            bool cond:223_1
            bool cond:226_1
            bool cond:227_1
            bool cond:230_1
            bool cond:231_1
            
            if (not(cond:181_1))
            label_14035f73d:
                var_748 = _mm_blend_epi16(var_748, arg8, 0x30)
                char temp36_1 = rax_76 & 8
                cond:197_1 = temp36_1 != 0
                cond:198_1 = temp36_1 == 0
                cond:207_1 = temp36_1 != 0
                cond:208_1 = temp36_1 == 0
                cond:215_1 = temp36_1 != 0
                cond:222_1 = temp36_1 == 0
                cond:223_1 = temp36_1 != 0
                cond:226_1 = temp36_1 != 0
                cond:227_1 = temp36_1 == 0
                cond:230_1 = temp36_1 != 0
                cond:231_1 = temp36_1 == 0
                
                if (temp36_1 == 0)
                    goto label_14035f5e6
                
                goto label_14035f74a
            
        label_14035f5de:
            char temp35_1 = rax_76 & 8
            cond:197_1 = temp35_1 != 0
            cond:198_1 = temp35_1 == 0
            cond:207_1 = temp35_1 != 0
            cond:208_1 = temp35_1 == 0
            cond:215_1 = temp35_1 != 0
            cond:222_1 = temp35_1 == 0
            cond:223_1 = temp35_1 != 0
            cond:226_1 = temp35_1 != 0
            cond:227_1 = temp35_1 == 0
            cond:230_1 = temp35_1 != 0
            cond:231_1 = temp35_1 == 0
            
            if (temp35_1 == 0)
            label_14035f5e6:
                
                if (cond:198_1)
                    goto label_14035f756
                
                goto label_14035f5ec
            
        label_14035f74a:
            zmm4 = _mm_blend_ps(zmm4, zmm2, 8)
            
            if (cond:197_1)
            label_14035f5ec:
                zmm0 = zmm6
                zmm6 = arg6
                zmm10 = _mm_blend_ps(zmm10, zmm0, 8)
                zmm2 = zmm12
                zmm12 = arg5
                arg6 = zmm4
                
                if (cond:207_1)
                    var_718_2 = _mm_blend_ps(var_718_2, arg7, 8)
            else
            label_14035f756:
                zmm6 = arg6
                zmm2 = zmm12
                zmm12 = arg5
                arg6 = zmm4
                
                if (not(cond:208_1))
                    var_718_2 = _mm_blend_ps(var_718_2, arg7, 8)
            
            if (not(cond:215_1))
                if (cond:223_1)
                    goto label_14035fa62
                
                goto label_14035f782
            
            arg11 = _mm_blend_ps(arg11, arg10, 8)
            
            if (not(cond:222_1))
            label_14035fa62:
                zmm12 = _mm_blend_ps(zmm12, zmm6, 8)
                zmm13 = var_718_2
                
                if (cond:227_1)
                    goto label_14035f78e
                
                goto label_14035fa75
            
        label_14035f782:
            zmm13 = var_718_2
            
            if (cond:226_1)
            label_14035fa75:
                zmm2 = _mm_blend_ps(zmm2, arg9, 8)
                
                if (cond:230_1)
                    var_748 = _mm_blend_epi16(var_748, arg8, 0xc0)
            else
            label_14035f78e:
                
                if (not(cond:231_1))
                    var_748 = _mm_blend_epi16(var_748, arg8, 0xc0)
    else
    label_14035e5ff:
        arg6 = zmm10
        zmm10 = zmm2
        arg11 = zmm4
        zmm2 = var_688
    
    zmm0 = _mm_shuffle_ps(arg11, zmm13, 0)
    uint32_t var_518[0x4] = _mm_shuffle_ps(_mm_insert_ps(arg6, zmm10, 0x1c), zmm0, 0x24)
    int32_t var_4fc = __extractps_memd_xmmps_immb(arg6, 1)
    int32_t var_4e0 = __extractps_memd_xmmps_immb(arg6, 2)
    int32_t var_4c4 = __extractps_memd_xmmps_immb(arg6, 3)
    zmm0 = _mm_insert_ps(zmm13, zmm10, 0x4c)
    uint32_t var_4f8[0x4] = _mm_blend_ps(_mm_unpacklo_ps(arg11, zmm12[0].q), zmm0, 3)
    zmm0 = _mm_unpackhi_ps(zmm10, zmm13)
    arg5 = _mm_insert_ps(zmm12, arg11, 0xe3)
    float var_4dc[0x4] = _mm_blend_ps(_mm_insert_ps(arg11, zmm12, 0xb3), zmm0, 3)
    int32_t var_4c0[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(zmm13, zmm10, 0x33), arg5, 0xe2)
    float var_508 = zmm12[0]
    uint32_t var_504 = zmm2[0]
    int32_t var_4e8 = __extractps_memd_xmmps_immb(zmm2, 1)
    int32_t var_4cc = __extractps_memd_xmmps_immb(zmm2, 2)
    int32_t var_4b0 = __extractps_memd_xmmps_immb(zmm2, 3)
    zmm0 = var_748
    char var_500[0x4]
    var_500[0] = __pextrb_memb_xmmdq_immb(zmm0, 0)
    uint8_t var_4e4 = __pextrb_memb_xmmdq_immb(zmm0, 4)
    uint8_t var_4c8 = __pextrb_memb_xmmdq_immb(zmm0, 8)
    uint8_t var_4ac = __pextrb_memb_xmmdq_immb(zmm0, 0xc)
    
    for (uint64_t i_1 = 0xf; i_1 != 0; )
        uint64_t rdx_28
        uint64_t rflags_1
        
        if (i_1 == 0)
            rdx_28 = 0x40
        else
            rdx_28, rflags_1 = _bit_scan_forward(i_1)
        i_1 &= not.q(1 << (rdx_28 u% 0x40))
        uint64_t rbp_15 = rdx_28 * 0x1c
        char rbx_15 = arg14[3].b
        char rdx_29 = var_500[rbp_15]
        
        if (rbx_15 != 0 && rdx_29 != 0)
            zmm2 = var_748[rdx_28 * 7 + 0x8c]
            zmm0 = __insertps_xmmps_memd_immb(zx.o(*arg14), arg14[1].d, 0x20)
            zmm2 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(zmm2, var_518[1 + rdx_28 * 7], 0x10), 
                var_518[2 + rdx_28 * 7], 0x20)
            arg5 = zx.o(*(arg14 + 0xc))
            zmm0 = _mm_min_ps(zmm0, zmm2)
            arg5 = __insertps_xmmps_memd_immb(arg5, *(arg14 + 0x14), 0x20)
            arg6 = _mm_movehdup_ps(zmm0)
            zmm4 = __insertps_xmmps_memd_immb(zx.o(*(&var_518[3] + rbp_15)), 
                (&var_504)[rdx_28 * 7], 0x20)
            zmm2 = _mm_unpackhi_pd(zmm0, zmm0[0].q)
            arg5 = _mm_max_ps(arg5, zmm4)
            zmm4 = _mm_movehdup_ps(arg5)
            arg7 = _mm_unpackhi_pd(arg5, arg5[0].q)
        else if (rdx_29 == 0)
            rbx_15 = arg14[3].b
            arg7 = *(arg14 + 0x14)
            zmm4 = arg14[2].d
            arg5 = *(arg14 + 0xc)
            zmm2 = arg14[1].d
            zmm0 = *arg14
            arg6 = *(arg14 + 4)
        else
            zmm0 = var_748[rdx_28 * 7 + 0x8c]
            arg6 = var_518[1 + rdx_28 * 7]
            zmm2 = var_518[2 + rdx_28 * 7]
            arg5 = var_518[3 + rdx_28 * 7]
            zmm4 = (&var_508)[rdx_28 * 7]
            arg7 = (&var_504)[rdx_28 * 7]
            rbx_15 = rdx_29
        
        *arg14 = zmm0[0]
        *(arg14 + 4) = arg6[0]
        arg14[1].d = zmm2[0]
        *(arg14 + 0xc) = arg5[0]
        arg14[2].d = zmm4[0]
        *(arg14 + 0x14) = arg7[0]
        arg14[3].b = rbx_15
    
    return arg14

zmm10 = zx.o(0)
zmm2 = zx.o(0)
zmm13 = zx.o(0)
zmm4 = zx.o(0)
zmm12 = zx.o(0)
var_688 = zx.o(0)
var_748 = zx.o(0)
int128_t* var_608_1 = arg4

do
    int64_t rcx_2 = sx.q((rbx << 3).d - rbx.d)
    int32_t temp0_57[0x4] = __pinsrb_xmmdq_memb_immb(
        __pinsrb_xmmdq_memb_immb(
            __pinsrb_xmmdq_memb_immb(
                __pinsrb_xmmdq_memb_immb(zx.o(0), *(arg4 + (rcx_2 << 2) + 0x18), 0), 
                *(arg4 + (rcx_2 << 2) + 0x34), 4), 
            *(arg4 + (rcx_2 << 2) + 0x50), 8), 
        *(arg4 + (rcx_2 << 2) + 0x6c), 0xc)
    int64_t rcx_4 = sx.q((rbx << 2).d)
    zmm6 = *(arg1 + rcx_4)
    arg7 = _mm_cmpeq_epi32(arg7, arg7)
    zmm6 = _mm_cmpeq_epi32(zmm6, arg7) & not.o(_mm_cmpeq_epi32(temp0_57, zx.o(0)) ^ arg7)
    char temp0_61 = _mm_movemask_ps(zmm6)
    
    if (temp0_61 == 0)
        zmm6 = arg5
    else
        float var_698_1[0x4] = arg9
        var_6f8 = arg12
        var_6e8 = arg8
        float var_5d8_1[0x4] = arg11
        float var_5c8_1[0x4] = arg10
        int32_t var_6d8_1[0x4] = arg6
        int32_t var_5b8_1[0x4] = arg5
        uint32_t var_668_1[0x4] = zmm10
        int32_t var_658_1[0x4] = zmm4
        float var_678_1[0x4] = zmm2
        float var_718_1[0x4] = zmm13
        int32_t var_6a8_1[0x4] = zmm12
        int64_t rdx_4 = sx.q((rbx * 9).d * 3 + rbx.d)
        arg5 = *(arg4 + rdx_4)
        zmm0 = *(arg4 + rdx_4 + 0x1c)
        arg9 = *(arg4 + rdx_4 + 0x38)
        arg7 = *(arg4 + rdx_4 + 0x54)
        uint32_t temp0_62[0x4] = _mm_shuffle_epi32(arg5, 0xe5)
        uint32_t temp0_63[0x4] = _mm_shuffle_epi32(arg5, 0x4e)
        arg10 = _mm_shuffle_epi32(arg5, 0xe7)
        arg5 = _mm_unpacklo_epi64(_mm_unpacklo_epi32(arg5, zmm0[0].q), arg9[0].q)
        uint32_t var_648_1[0x4] = _mm_blend_epi16(_mm_shuffle_epi32(arg7, 0x24), arg5, 0x3f)
        arg6 = _mm_insert_ps(_mm_blend_epi16(temp0_62, zmm0, 0xc), arg9, 0x68)
        var_638 = _mm_blend_epi16(_mm_shuffle_epi32(arg7, 0x44), arg6, 0x3f)
        uint32_t temp0_73[0x4] = _mm_shuffle_epi32(zmm0, 0xfa)
        int64_t rbp_1 = *(arg4 + rdx_4 + 0x10)
        int64_t rbx_1 = *(arg4 + rdx_4 + 0x2c)
        arg5 = _mm_insert_epi32(zx.o(rbp_1.d), rbx_1.d, 1)
        int64_t rdi_1 = *(arg4 + rdx_4 + 0x48)
        arg5 = _mm_insert_epi32(arg5, rdi_1.d, 2)
        int64_t rdx_5 = *(arg4 + rdx_4 + 0x64)
        uint32_t var_588_1[0x4] = _mm_insert_epi32(arg5, rdx_5.d, 3)
        uint32_t var_6c8_1[0x4] = _mm_insert_epi32(
            _mm_insert_epi32(_mm_insert_epi32(zx.o((rbp_1 u>> 0x20).d), (rbx_1 u>> 0x20).d, 1), 
                (rdi_1 u>> 0x20).d, 2), 
            (rdx_5 u>> 0x20).d, 3)
        uint32_t temp0_80[0x4] = _mm_slli_epi32(*(arg2 + rcx_4), 6)
        int32_t var_5f8_1[0x4] = zmm6
        arg6 = _mm_srai_epi32(_mm_slli_epi32(zmm6, 0x1f), 0x1f)
        arg5 = temp0_80 & arg6
        int64_t rcx_6 = sx.q(arg5[0])
        void* r12_1 = arg3 + rcx_6
        int32_t temp0_83 = _mm_extract_epi32(arg5, 1)
        zmm6 = *(arg3 + rcx_6)
        int64_t rcx_7 = sx.q(temp0_83)
        void* rdi_3 = arg3 + rcx_7
        int64_t rdx_9 = sx.q(_mm_extract_epi32(arg5, 2))
        void* rsi_1 = arg3 + rdx_9
        int64_t rbx_4 = sx.q(_mm_extract_epi32(arg5, 3))
        zmm6 = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm6, *(arg3 + rcx_7), 0x10), 
                *(arg3 + rdx_9), 0x20), 
            *(arg3 + rbx_4), 0x30)
        void* rbx_5 = arg3 + rbx_4
        arg8 = arg6 & data_142fc95e0
        arg5 = *(zx.q(arg8[0]) + r12_1)
        uint64_t rcx_9 = zx.q(_mm_extract_epi32(arg8, 1))
        uint64_t rdx_10 = zx.q(_mm_extract_epi32(arg8, 2))
        uint64_t rax_8 = zx.q(_mm_extract_epi32(arg8, 3))
        arg5 = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(arg5, *(rcx_9 + rdi_3), 0x10), 
                *(rdx_10 + rsi_1), 0x20), 
            *(rax_8 + rbx_5), 0x30)
        zmm4 = _mm_blend_epi16(temp0_73, temp0_63, 0xf3)
        zmm2 = arg6 & data_142fc95f0
        arg12 = *(zx.q(zmm2[0]) + r12_1)
        uint64_t rax_10 = zx.q(_mm_extract_epi32(zmm2, 1))
        uint64_t rcx_10 = zx.q(_mm_extract_epi32(zmm2, 2))
        uint64_t rdx_11 = zx.q(_mm_extract_epi32(zmm2, 3))
        float temp0_101[0x4] = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(arg12, *(rax_10 + rdi_3), 0x10), 
                *(rcx_10 + rsi_1), 0x20), 
            *(rdx_11 + rbx_5), 0x30)
        zmm4 = _mm_blend_epi16(zmm4, arg9, 0xf0)
        zmm2 = arg6 & data_143442650
        zmm12 = *(zx.q(zmm2[0]) + r12_1)
        uint64_t rax_12 = zx.q(_mm_extract_epi32(zmm2, 1))
        uint64_t rcx_11 = zx.q(_mm_extract_epi32(zmm2, 2))
        uint64_t rdx_12 = zx.q(_mm_extract_epi32(zmm2, 3))
        float temp0_108[0x4] = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm12, *(rax_12 + rdi_3), 0x10), 
                *(rcx_11 + rsi_1), 0x20), 
            *(rdx_12 + rbx_5), 0x30)
        uint32_t temp0_109[0x4] = _mm_shuffle_epi32(arg7, 0xa4)
        zmm2 = arg6 & data_143442660
        uint64_t rax_13 = zx.q(_mm_extract_epi32(zmm2, 1))
        uint64_t rcx_12 = zx.q(_mm_extract_epi32(zmm2, 2))
        uint64_t rdx_13 = zx.q(_mm_extract_epi32(zmm2, 3))
        zmm2 = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(*(zx.q(zmm2[0]) + r12_1), *(rax_13 + rdi_3), 0x10), 
                *(rcx_12 + rsi_1), 0x20), 
            *(rdx_13 + rbx_5), 0x30)
        uint32_t var_5e8_1[0x4] = _mm_blend_epi16(temp0_109, zmm4, 0x3f)
        zmm4 = arg6 & data_143442670
        uint64_t r8 = zx.q(_mm_extract_epi32(zmm4, 1))
        uint64_t r9 = zx.q(_mm_extract_epi32(zmm4, 2))
        uint64_t r10_1 = zx.q(_mm_extract_epi32(zmm4, 3))
        uint64_t r11_1 = zx.q(zmm4[0])
        zmm4 = arg6 & data_143442700
        uint64_t rax_14 = zx.q(_mm_extract_epi32(zmm4, 1))
        uint64_t rcx_13 = zx.q(_mm_extract_epi32(zmm4, 2))
        uint64_t rdx_14 = zx.q(_mm_extract_epi32(zmm4, 3))
        uint64_t rbp_4 = zx.q(zmm4[0])
        zmm14 = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(*(r11_1 + r12_1), *(r8 + rdi_3), 0x10), *(r9 + rsi_1), 
                0x20), 
            *(r10_1 + rbx_5), 0x30)
        uint32_t temp0_126[0x4] = _mm_shuffle_epi32(zmm0, 0x4e)
        zmm0 = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(*(rbp_4 + r12_1), *(rax_14 + rdi_3), 0x10), 
                *(rcx_13 + rsi_1), 0x20), 
            *(rdx_14 + rbx_5), 0x30)
        arg8 = _mm_blend_epi16(temp0_126, arg10, 0xf3)
        zmm4 = arg6 & data_1434b2e20
        uint64_t rax_15 = zx.q(_mm_extract_epi32(zmm4, 1))
        uint64_t rcx_14 = zx.q(_mm_extract_epi32(zmm4, 2))
        uint64_t rdx_15 = zx.q(_mm_extract_epi32(zmm4, 3))
        float temp0_136[0x4] = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(*(zx.q(zmm4[0]) + r12_1), *(rax_15 + rdi_3), 0x10), 
                *(rcx_14 + rsi_1), 0x20), 
            *(rdx_15 + rbx_5), 0x30)
        arg8 = _mm_insert_ps(arg8, arg9, 0xe8)
        zmm4 = arg6 & (*U"    $$$$((((,,,,000044448888<<<<")[0].o
        uint64_t rax_16 = zx.q(_mm_extract_epi32(zmm4, 1))
        uint64_t rcx_15 = zx.q(_mm_extract_epi32(zmm4, 2))
        uint64_t rdx_16 = zx.q(_mm_extract_epi32(zmm4, 3))
        float temp0_143[0x4] = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(*(zx.q(zmm4[0]) + r12_1), *(rax_16 + rdi_3), 0x10), 
                *(rcx_15 + rsi_1), 0x20), 
            *(rdx_16 + rbx_5), 0x30)
        uint32_t var_598_1[0x4] = _mm_blend_ps(arg8, arg7, 8)
        arg7 = arg6 & (*U"    $$$$((((,,,,000044448888<<<<")[4].o
        uint64_t rax_17 = zx.q(_mm_extract_epi32(arg7, 1))
        uint64_t rax_18 = zx.q(_mm_extract_epi32(arg7, 2))
        uint64_t rax_19 = zx.q(_mm_extract_epi32(arg7, 3))
        uint64_t rax_20 = zx.q(arg7[0])
        arg7 = arg6 & (*U"    $$$$((((,,,,000044448888<<<<")[8].o
        uint64_t rax_21 = zx.q(_mm_extract_epi32(arg7, 1))
        uint64_t rax_22 = zx.q(_mm_extract_epi32(arg7, 2))
        uint64_t rax_23 = zx.q(_mm_extract_epi32(arg7, 3))
        uint64_t rax_24 = zx.q(arg7[0])
        arg7 = arg6 & (*U"    $$$$((((,,,,000044448888<<<<")[0xc].o
        uint64_t rax_25 = zx.q(_mm_extract_epi32(arg7, 1))
        uint64_t rax_26 = zx.q(_mm_extract_epi32(arg7, 2))
        uint64_t rax_27 = zx.q(_mm_extract_epi32(arg7, 3))
        uint64_t rax_28 = zx.q(arg7[0])
        arg7 = arg6 & (*U"    $$$$((((,,,,000044448888<<<<")[0x10].o
        uint64_t rax_29 = zx.q(_mm_extract_epi32(arg7, 1))
        uint64_t rax_30 = zx.q(_mm_extract_epi32(arg7, 2))
        uint64_t rax_31 = zx.q(_mm_extract_epi32(arg7, 3))
        uint64_t rbp_7 = zx.q(arg7[0])
        arg7 = arg6 & (*U"    $$$$((((,,,,000044448888<<<<")[0x14].o
        uint64_t rcx_16 = zx.q(_mm_extract_epi32(arg7, 1))
        uint64_t rcx_17 = zx.q(_mm_extract_epi32(arg7, 2))
        uint64_t r14_1 = zx.q(_mm_extract_epi32(arg7, 3))
        uint64_t rdx_17 = zx.q(arg7[0])
        arg7 = arg6 & (*U"    $$$$((((,,,,000044448888<<<<")[0x18].o
        uint64_t r10_2 = zx.q(_mm_extract_epi32(arg7, 1))
        uint64_t r9_1 = zx.q(_mm_extract_epi32(arg7, 2))
        uint64_t r8_1 = zx.q(_mm_extract_epi32(arg7, 3))
        uint64_t r11_2 = zx.q(arg7[0])
        arg7 = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(*(rax_20 + r12_1), *(rax_17 + rdi_3), 0x10), 
                *(rax_18 + rsi_1), 0x20), 
            *(rax_19 + rbx_5), 0x30)
        int32_t var_228[0x4] = zmm6
        zmm6 = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(*(rax_24 + r12_1), *(rax_21 + rdi_3), 0x10), 
                *(rax_22 + rsi_1), 0x20), 
            *(rax_23 + rbx_5), 0x30)
        uint32_t var_218[0x4] = arg5
        arg5 = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(*(rax_28 + r12_1), *(rax_25 + rdi_3), 0x10), 
                *(rax_26 + rsi_1), 0x20), 
            *(rax_27 + rbx_5), 0x30)
        float var_208[0x4] = temp0_101
        arg8 = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(*(rbp_7 + r12_1), *(rax_29 + rdi_3), 0x10), 
                *(rax_30 + rsi_1), 0x20), 
            *(rax_31 + rbx_5), 0x30)
        float var_1f8[0x4] = temp0_108
        arg6 &= (*U"    $$$$((((,,,,000044448888<<<<")[0x1c].o
        int32_t* rax_32 = zx.q(_mm_extract_epi32(arg6, 1))
        int32_t* rbp_8 = zx.q(_mm_extract_epi32(arg6, 2))
        int32_t* rcx_30 = zx.q(_mm_extract_epi32(arg6, 3))
        uint64_t r13_3 = zx.q(arg6[0])
        uint32_t var_1e8_1[0x4] = zmm2
        int32_t var_1d8_1[0x4] = zmm14
        int32_t var_1c8_1[0x4] = zmm0
        float var_1b8_1[0x4] = temp0_136
        float var_1a8_1[0x4] = temp0_143
        int32_t var_198_1[0x4] = arg7
        int32_t var_188_1[0x4] = zmm6
        uint32_t var_178_1[0x4] = arg5
        uint32_t var_168_1[0x4] = arg8
        uint32_t var_158_1[0x4] = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(*(rdx_17 + r12_1), *(rcx_16 + rdi_3), 0x10), 
                *(rcx_17 + rsi_1), 0x20), 
            *(r14_1 + rbx_5), 0x30)
        uint32_t var_148_1[0x4] = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(*(r11_2 + r12_1), *(r10_2 + rdi_3), 0x10), 
                *(r9_1 + rsi_1), 0x20), 
            *(r8_1 + rbx_5), 0x30)
        uint32_t var_138_1[0x4] = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(*(r13_3 + r12_1), *(rax_32 + rdi_3), 0x10), 
                *(rbp_8 + rsi_1), 0x20), 
            *(rcx_30 + rbx_5), 0x30)
        uint64_t var_738_1
        var_738_1.o = (*arg13)[9]
        var_728.o = (*arg13)[0xd]
        zmm12 = (*arg13)[2]
        zmm14 = (*arg13)[3]
        arg12 = (*arg13)[6]
        zmm13 = (*arg13)[0xa]
        arg9 = (*arg13)[0xe]
        arg8 = (*arg13)[7]
        zmm0 = (*arg13)[0xb]
        
        for (int64_t j = 0; j != 0x100; j += 0x40)
            arg10 = *arg13
            arg11 = arg13[1][0]
            float temp0_187[0x4] = _mm_shuffle_ps(arg10, arg10, 0)
            zmm4 = *(&var_228 + j)
            arg6 = *(&var_218 + j)
            zmm2 = *(&var_208 + j)
            arg5 = *(&var_1f8 + j)
            zmm10 = zx.o(0)
            float temp0_189[0x4] = _mm_add_ps(_mm_mul_ps(temp0_187, zmm4), zmm10)
            float temp0_192[0x4] =
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg11, arg11, 0), arg6), temp0_189)
            zmm6 = arg13[2][0]
            zmm6 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), zmm2), temp0_192)
            arg7 = arg13[3][0]
            *(&var_4a8 + j) = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg7, arg7, 0), arg5), zmm6)
            arg7 = (*arg13)[1]
            zmm6 = (*arg13)[5]
            arg7 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg7, arg7, 0), zmm4), zmm10)
            zmm6 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), arg6), arg7)
            arg7 = var_738_1.o
            arg7 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg7, arg7, 0), zmm2), zmm6)
            zmm6 = var_728.o
            *(&var_498 + j) = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), arg5), arg7)
            arg7 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm12, zmm12, 0), zmm4), zmm10)
            zmm6 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg12, arg12, 0), arg6), arg7)
            arg7 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm13, zmm13, 0), zmm2), zmm6)
            *(&var_488 + j) = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg9, arg9, 0), arg5), arg7)
            arg7 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm14, zmm14, 0), zmm4), zmm10)
            zmm4 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg8, arg8, 0), arg6), arg7)
            arg6 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm2), zmm4)
            zmm2 = (*arg13)[0xf]
            *(&var_478 + j) = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), arg5), arg6)
        
        zmm2 = var_4a8.o
        var_728.o = zmm2
        arg5 = var_498
        var_738_1.o = arg5
        zmm4 = var_488
        var_618.o = zmm4
        uint64_t var_5a8_1
        var_5a8_1.o = var_448
        arg9 = var_598_1
        arg6 = __addps_xmmps_memps(arg9, var_648_1)
        zmm12 = data_142d3f640
        arg6 = _mm_mul_ps(arg6, zmm12)
        arg7 = _mm_mul_ps(arg6, zmm2)
        zmm6 = _mm_mul_ps(arg6, arg5)
        float temp0_240[0x4] = _mm_mul_ps(_mm_add_ps(var_638, var_588_1), zmm12)
        arg8 = _mm_add_ps(_mm_mul_ps(temp0_240, var_468), arg7)
        zmm2 = _mm_add_ps(_mm_mul_ps(temp0_240, var_458), zmm6)
        arg7 = _mm_mul_ps(arg6, zmm4)
        zmm4 = _mm_add_ps(_mm_mul_ps(temp0_240, var_448), arg7)
        arg6 = __mulps_xmmps_memps(arg6, var_478)
        float temp0_250[0x4] = _mm_add_ps(_mm_mul_ps(temp0_240, var_438), arg6)
        zmm0 = var_6c8_1
        arg7 = _mm_mul_ps(_mm_add_ps(var_5e8_1, zmm0), zmm12)
        float temp0_254[0x4] = _mm_add_ps(_mm_mul_ps(arg7, var_428), arg8)
        float temp0_256[0x4] = _mm_add_ps(_mm_mul_ps(arg7, var_418), zmm2)
        arg8 = _mm_add_ps(_mm_mul_ps(arg7, var_408), zmm4)
        arg7 = _mm_add_ps(_mm_mul_ps(arg7, var_3f8), temp0_250)
        float temp0_261[0x4] = __addps_xmmps_memps(temp0_254, var_3e8)
        float temp0_262[0x4] = __addps_xmmps_memps(temp0_256, var_3d8)
        arg8 = __addps_xmmps_memps(arg8, var_3c8)
        arg7 = __addps_xmmps_memps(arg7, var_3b8)
        var_4a8.o = var_468
        var_498 = var_458
        zmm10 = var_5a8_1.o
        var_488 = zmm10
        var_478 = var_438
        int32_t var_368_1[0x4] = var_428
        uint32_t var_358_1[0x4] = var_418
        float var_348_1[0x4] = var_408
        uint32_t var_338_1[0x4] = var_3f8
        arg5 = __subps_xmmps_memps(var_588_1, var_638)
        zmm0 = __subps_xmmps_memps(zmm0, var_5e8_1)
        float temp0_267[0x4] = __subps_xmmps_memps(arg9, var_648_1)
        float var_3a8_1[0x4] = temp0_261
        float var_398_1[0x4] = temp0_262
        uint32_t var_388_1[0x4] = arg8
        int32_t var_378_1[0x4] = arg7
        zmm2 = data_142d3f640
        float temp0_268[0x4] = _mm_mul_ps(temp0_267, zmm2)
        arg7 = _mm_mul_ps(var_728.o, temp0_268)
        zmm4 = _mm_mul_ps(var_738_1.o, temp0_268)
        float temp0_271[0x4] = __mulps_xmmps_memps(temp0_268, var_618.o)
        arg5 = _mm_mul_ps(arg5, zmm2)
        arg12 = zmm2
        zmm13 = _mm_mul_ps(var_468, arg5)
        zmm14 = _mm_mul_ps(var_458, arg5)
        arg5 = _mm_mul_ps(arg5, zmm10)
        zmm2 = data_142d3f770
        arg7 = _mm_and_ps(arg7, zmm2)
        zmm13 = _mm_add_ps(_mm_and_ps(zmm13, zmm2), arg7)
        uint32_t temp0_279[0x4] = _mm_and_ps(zmm4, zmm2)
        zmm14 = _mm_add_ps(_mm_and_ps(zmm14, zmm2), temp0_279)
        arg9 = _mm_and_ps(temp0_271, zmm2)
        arg5 = _mm_add_ps(_mm_and_ps(arg5, zmm2), arg9)
        zmm0 = _mm_mul_ps(zmm0, arg12)
        zmm6 = _mm_mul_ps(var_428, zmm0)
        arg6 = _mm_mul_ps(var_418, zmm0)
        zmm0 = _mm_mul_ps(zmm0, var_408)
        zmm6 = _mm_add_ps(_mm_and_ps(zmm6, zmm2), zmm13)
        arg6 = _mm_add_ps(_mm_and_ps(arg6, zmm2), zmm14)
        zmm0 = _mm_add_ps(_mm_and_ps(zmm0, zmm2), arg5)
        float temp0_295[0x4] = _mm_sub_ps(temp0_261, zmm6)
        arg7 = _mm_sub_ps(temp0_262, arg6)
        zmm4 = _mm_sub_ps(arg8, zmm0)
        var_728.o = _mm_add_ps(zmm6, temp0_261)
        var_738_1.o = _mm_add_ps(arg6, temp0_262)
        int32_t var_6c8_2[0x4] = _mm_add_ps(zmm0, arg8)
        zmm14 = var_748 & data_142ed6810
        zmm13 = zx.o(0)
        uint32_t temp0_302[0x4] =
            _mm_slli_epi32(_mm_cmpeq_epi32(zmm14, zx.o(0)) & not.o(var_5f8_1), 0x1f)
        char temp0_303 = _mm_movemask_ps(temp0_302)
        char rdi_4
        
        if (temp0_303 != 0)
            arg6 = _mm_min_ps(var_668_1, temp0_295)
            char temp0_306 =
                _mm_movemask_ps(__pcmpeqd_xmmdq_memdq(zmm14, data_142d8f750) ^ data_142d3f800)
            char temp1_1 = temp0_306 & 1
            
            if (temp1_1 == 0)
                zmm12 = var_688
                zmm13 = var_6a8_1
                zmm6 = var_5b8_1
            else
                zmm6 = _mm_blend_ps(var_5b8_1, arg6, 1)
                zmm12 = var_688
                zmm13 = var_6a8_1
            
            arg10 = var_5c8_1
            arg11 = var_5d8_1
            float temp0_308[0x4] = _mm_min_ps(var_678_1, arg7)
            
            if (temp1_1 != 0)
                var_6d8_1 = _mm_blend_ps(var_6d8_1, temp0_308, 1)
            
            rdx = arg15
            rdi_4 = temp0_61
            float temp0_310[0x4] = _mm_min_ps(var_718_1, zmm4)
            
            if (temp1_1 != 0)
                arg10 = _mm_blend_ps(arg10, temp0_310, 1)
            
            zmm0 = __maxps_xmmps_memps(var_658_1, var_728.o)
            
            if (temp1_1 != 0)
                arg11 = _mm_blend_ps(arg11, zmm0, 1)
            
            zmm2 = __maxps_xmmps_memps(zmm13, var_738_1.o)
            var_638 = arg7
            
            if (temp1_1 != 0)
                var_6e8 = _mm_blend_ps(var_6e8, zmm2, 1)
                arg7 = __maxps_xmmps_memps(zmm12, var_6c8_2)
                
                if (temp1_1 != 0)
                label_14035e14c:
                    var_6f8 = _mm_blend_ps(var_6f8, arg7, 1)
                    
                    if (temp1_1 == 0)
                        goto label_14035e094
                    
                    goto label_14035e166
            else
                arg7 = __maxps_xmmps_memps(zmm12, var_6c8_2)
                
                if (temp1_1 != 0)
                    goto label_14035e14c
            
            bool cond:42_1
            bool cond:43_1
            bool cond:48_1
            bool cond:49_1
            bool cond:58_1
            bool cond:59_1
            bool cond:68_1
            bool cond:69_1
            bool cond:76_1
            bool cond:77_1
            bool cond:84_1
            bool cond:85_1
            
            if (temp1_1 == 0)
            label_14035e094:
                char temp8_1 = temp0_306 & 2
                cond:42_1 = temp8_1 != 0
                cond:43_1 = temp8_1 == 0
                cond:48_1 = temp8_1 == 0
                cond:49_1 = temp8_1 != 0
                cond:58_1 = temp8_1 != 0
                cond:59_1 = temp8_1 == 0
                cond:68_1 = temp8_1 == 0
                cond:69_1 = temp8_1 != 0
                cond:76_1 = temp8_1 != 0
                cond:77_1 = temp8_1 == 0
                cond:84_1 = temp8_1 == 0
                cond:85_1 = temp8_1 != 0
                
                if (temp8_1 != 0)
                    goto label_14035e178
                
                goto label_14035e09e
            
        label_14035e166:
            var_698_1 = __blendps_xmmdq_memdq_immb(var_698_1, var_748, 1)
            char temp7_1 = temp0_306 & 2
            cond:42_1 = temp7_1 != 0
            cond:43_1 = temp7_1 == 0
            cond:48_1 = temp7_1 == 0
            cond:49_1 = temp7_1 != 0
            cond:58_1 = temp7_1 != 0
            cond:59_1 = temp7_1 == 0
            cond:68_1 = temp7_1 == 0
            cond:69_1 = temp7_1 != 0
            cond:76_1 = temp7_1 != 0
            cond:77_1 = temp7_1 == 0
            cond:84_1 = temp7_1 == 0
            cond:85_1 = temp7_1 != 0
            
            if (temp7_1 != 0)
            label_14035e178:
                zmm6 = _mm_blend_ps(zmm6, arg6, 2)
                
                if (cond:43_1)
                    goto label_14035e0a4
                
                goto label_14035e195
            
        label_14035e09e:
            
            if (not(cond:42_1))
            label_14035e0a4:
                
                if (cond:49_1)
                    goto label_14035e1a5
                
                goto label_14035e0aa
            
        label_14035e195:
            var_6d8_1 = _mm_blend_ps(var_6d8_1, temp0_308, 2)
            
            if (not(cond:48_1))
            label_14035e1a5:
                arg10 = _mm_blend_ps(arg10, temp0_310, 2)
                
                if (cond:59_1)
                    goto label_14035e0b0
                
                goto label_14035e1b2
            
        label_14035e0aa:
            
            if (not(cond:58_1))
            label_14035e0b0:
                
                if (cond:69_1)
                    goto label_14035e1ca
                
                goto label_14035e0b6
            
        label_14035e1b2:
            arg11 = _mm_blend_ps(arg11, zmm0, 2)
            
            if (not(cond:68_1))
            label_14035e1ca:
                var_6e8 = _mm_blend_ps(var_6e8, zmm2, 2)
                
                if (cond:77_1)
                    goto label_14035e0bc
                
                goto label_14035e1e0
            
        label_14035e0b6:
            
            if (not(cond:76_1))
            label_14035e0bc:
                
                if (cond:85_1)
                    goto label_14035e1fa
                
                goto label_14035e0c2
            
        label_14035e1e0:
            var_6f8 = _mm_blend_ps(var_6f8, arg7, 2)
            bool cond:102_1
            bool cond:103_1
            bool cond:108_1
            bool cond:109_1
            bool cond:118_1
            bool cond:119_1
            bool cond:128_1
            bool cond:129_1
            bool cond:136_1
            bool cond:137_1
            bool cond:144_1
            bool cond:145_1
            
            if (not(cond:84_1))
            label_14035e1fa:
                var_698_1 = __blendps_xmmdq_memdq_immb(var_698_1, var_748, 2)
                char temp18_1 = temp0_306 & 4
                cond:102_1 = temp18_1 == 0
                cond:103_1 = temp18_1 != 0
                cond:108_1 = temp18_1 != 0
                cond:109_1 = temp18_1 == 0
                cond:118_1 = temp18_1 == 0
                cond:119_1 = temp18_1 != 0
                cond:128_1 = temp18_1 != 0
                cond:129_1 = temp18_1 == 0
                cond:136_1 = temp18_1 == 0
                cond:137_1 = temp18_1 != 0
                cond:144_1 = temp18_1 != 0
                cond:145_1 = temp18_1 == 0
                
                if (temp18_1 == 0)
                    goto label_14035e0cc
                
                goto label_14035e20c
            
        label_14035e0c2:
            char temp17_1 = temp0_306 & 4
            cond:102_1 = temp17_1 == 0
            cond:103_1 = temp17_1 != 0
            cond:108_1 = temp17_1 != 0
            cond:109_1 = temp17_1 == 0
            cond:118_1 = temp17_1 == 0
            cond:119_1 = temp17_1 != 0
            cond:128_1 = temp17_1 != 0
            cond:129_1 = temp17_1 == 0
            cond:136_1 = temp17_1 == 0
            cond:137_1 = temp17_1 != 0
            cond:144_1 = temp17_1 != 0
            cond:145_1 = temp17_1 == 0
            
            if (temp17_1 == 0)
            label_14035e0cc:
                
                if (cond:103_1)
                    goto label_14035e227
                
                goto label_14035e0d2
            
        label_14035e20c:
            zmm6 = _mm_blend_ps(zmm6, arg6, 4)
            
            if (not(cond:102_1))
            label_14035e227:
                var_6d8_1 = _mm_blend_ps(var_6d8_1, temp0_308, 4)
                
                if (cond:109_1)
                    goto label_14035e0d8
                
                goto label_14035e232
            
        label_14035e0d2:
            
            if (not(cond:108_1))
            label_14035e0d8:
                
                if (cond:119_1)
                    goto label_14035e23f
                
                goto label_14035e0de
            
        label_14035e232:
            arg10 = _mm_blend_ps(arg10, temp0_310, 4)
            
            if (not(cond:118_1))
            label_14035e23f:
                arg11 = _mm_blend_ps(arg11, zmm0, 4)
                
                if (cond:129_1)
                    goto label_14035e0e4
                
                goto label_14035e257
            
        label_14035e0de:
            
            if (cond:128_1)
            label_14035e257:
                var_6e8 = _mm_blend_ps(var_6e8, zmm2, 4)
                
                if (not(cond:136_1))
                label_14035e26d:
                    var_6f8 = _mm_blend_ps(var_6f8, arg7, 4)
                    
                    if (cond:145_1)
                        goto label_14035e0f0
                    
                    goto label_14035e287
            else
            label_14035e0e4:
                
                if (cond:137_1)
                    goto label_14035e26d
            
            bool cond:162_1
            bool cond:168_1
            bool cond:169_1
            bool cond:178_1
            bool cond:187_1
            bool cond:188_1
            bool cond:195_1
            bool cond:196_1
            bool cond:203_1
            bool cond:204_1
            bool cond:163_1
            
            if (cond:144_1)
            label_14035e287:
                var_698_1 = __blendps_xmmdq_memdq_immb(var_698_1, var_748, 4)
                zmm4 = zmm4
                char temp27_1 = temp0_306 & 8
                cond:162_1 = temp27_1 == 0
                cond:163_1 = temp27_1 != 0
                cond:168_1 = temp27_1 == 0
                cond:169_1 = temp27_1 != 0
                cond:178_1 = temp27_1 != 0
                cond:187_1 = temp27_1 == 0
                cond:188_1 = temp27_1 != 0
                cond:195_1 = temp27_1 != 0
                cond:196_1 = temp27_1 == 0
                cond:203_1 = temp27_1 == 0
                cond:204_1 = temp27_1 != 0
                
                if (temp27_1 != 0)
                label_14035e2a1:
                    zmm6 = _mm_blend_ps(zmm6, arg6, 8)
                    
                    if (cond:163_1)
                        goto label_14035e10d
                    
                    goto label_14035e2ad
            else
            label_14035e0f0:
                zmm4 = zmm4
                char temp28_1 = temp0_306 & 8
                cond:162_1 = temp28_1 == 0
                cond:163_1 = temp28_1 != 0
                cond:168_1 = temp28_1 == 0
                cond:169_1 = temp28_1 != 0
                cond:178_1 = temp28_1 != 0
                cond:187_1 = temp28_1 == 0
                cond:188_1 = temp28_1 != 0
                cond:195_1 = temp28_1 != 0
                cond:196_1 = temp28_1 == 0
                cond:203_1 = temp28_1 == 0
                cond:204_1 = temp28_1 != 0
                
                if (temp28_1 != 0)
                    goto label_14035e2a1
            
            if (cond:162_1)
            label_14035e2ad:
                arg6 = var_6d8_1
                
                if (not(cond:168_1))
                    arg10 = _mm_blend_ps(arg10, temp0_310, 8)
            else
            label_14035e10d:
                arg6 = _mm_blend_ps(var_6d8_1, temp0_308, 8)
                
                if (cond:169_1)
                    arg10 = _mm_blend_ps(arg10, temp0_310, 8)
            
            arg8 = var_6e8
            arg12 = var_6f8
            arg9 = var_698_1
            zmm13 = var_718_1
            
            if (cond:178_1)
                arg11 = _mm_blend_ps(arg11, zmm0, 8)
                
                if (not(cond:187_1))
                label_14035e2f9:
                    arg8 = _mm_blend_ps(arg8, zmm2, 8)
                    
                    if (cond:196_1)
                        goto label_14035e2dc
                    
                    goto label_14035e301
            else if (cond:188_1)
                goto label_14035e2f9
            
            if (cond:195_1)
            label_14035e301:
                arg12 = _mm_blend_ps(arg12, arg7, 8)
                arg7 = var_638
                
                if (cond:203_1)
                label_14035e2e6:
                    
                    if (rdi_4 == temp0_303)
                        goto label_14035e470
                    
                    zmm13 = _mm_srai_epi32(temp0_302, 0x1f)
                    goto label_14035e330
            else
            label_14035e2dc:
                arg7 = var_638
                
                if (not(cond:204_1))
                    goto label_14035e2e6
            
            arg9 = __pblendw_xmmdq_memdq_immb(arg9, var_748, 0xc0)
            
            if (rdi_4 == temp0_303)
                goto label_14035e470
            
            zmm13 = _mm_srai_epi32(temp0_302, 0x1f)
            goto label_14035e330
        
        zmm12 = var_688
        rdx = arg15
        zmm6 = var_5b8_1
        arg6 = var_6d8_1
        arg10 = var_5c8_1
        arg11 = var_5d8_1
        arg8 = var_6e8
        arg12 = var_6f8
        arg9 = var_698_1
        rdi_4 = temp0_61
    label_14035e330:
        int32_t temp0_342[0x4] = _mm_cmpeq_epi32(zmm14, zx.o(0))
        uint32_t temp0_343[0x4] = _mm_slli_epi32(var_5f8_1 & temp0_342, 0x1f)
        char rsi_4
        bool cond:4_1
        bool cond:8_1
        bool cond:9_1
        bool cond:13_1
        bool cond:14_1
        bool cond:20_1
        bool cond:21_1
        bool cond:30_1
        bool cond:31_1
        bool cond:38_1
        bool cond:39_1
        
        if (_mm_movemask_ps(temp0_343) == 0)
            zmm13 = var_718_1
        label_14035e470:
            zmm2 = var_678_1
            zmm4 = var_658_1
            arg5 = var_668_1
            arg7 = zmm12
            zmm12 = var_6a8_1
            rsi_4 = rdi_4
            char temp3_1 = rsi_4 & 1
            cond:4_1 = temp3_1 != 0
            cond:8_1 = temp3_1 == 0
            cond:9_1 = temp3_1 != 0
            cond:13_1 = temp3_1 != 0
            cond:14_1 = temp3_1 == 0
            cond:20_1 = temp3_1 == 0
            cond:21_1 = temp3_1 != 0
            cond:30_1 = temp3_1 != 0
            cond:31_1 = temp3_1 == 0
            cond:38_1 = temp3_1 == 0
            cond:39_1 = temp3_1 != 0
            
            if (temp3_1 != 0)
                arg5 = _mm_blend_ps(arg5, zmm6, 1)
        else
            char temp0_345 = _mm_movemask_ps(temp0_342)
            char temp2_1 = temp0_345 & 1
            
            if (temp2_1 == 0)
                arg5 = var_668_1
                
                if (temp2_1 != 0)
                    goto label_14035d153
                
                goto label_14035e35b
            
            zmm6 = _mm_blend_ps(zmm6, temp0_295, 1)
            arg5 = var_668_1
            
            if (temp2_1 != 0)
            label_14035d153:
                arg6 = _mm_blend_ps(arg6, arg7, 1)
                
                if (temp2_1 == 0)
                    goto label_14035e35b_1
                
                goto label_14035d15f
            
        label_14035e35b:
            
            if (temp2_1 == 0)
            label_14035e35b_1:
                
                if (temp2_1 != 0)
                    goto label_14035d16c
                
                goto label_14035e35b_2
            
        label_14035d15f:
            arg10 = _mm_blend_ps(arg10, zmm4, 1)
            
            if (temp2_1 != 0)
            label_14035d16c:
                arg11 = __blendps_xmmdq_memdq_immb(arg11, var_728.o, 1)
                
                if (temp2_1 == 0)
                    goto label_14035e35b_3
                
                goto label_14035d17b
            
        label_14035e35b_2:
            
            if (temp2_1 != 0)
            label_14035d17b:
                arg8 = __blendps_xmmdq_memdq_immb(arg8, var_738_1.o, 1)
                
                if (temp2_1 != 0)
                label_14035d189:
                    arg12 = __blendps_xmmdq_memdq_immb(arg12, var_6c8_2, 1)
                    
                    if (temp2_1 == 0)
                        goto label_14035e391
                    
                    goto label_14035d1a0
            else
            label_14035e35b_3:
                
                if (temp2_1 != 0)
                    goto label_14035d189
            
            bool cond:56_1
            bool cond:57_1
            bool cond:66_1
            bool cond:67_1
            bool cond:74_1
            bool cond:75_1
            bool cond:82_1
            bool cond:83_1
            bool cond:92_1
            bool cond:93_1
            bool cond:100_1
            bool cond:101_1
            
            if (temp2_1 == 0)
            label_14035e391:
                char temp10_1 = temp0_345 & 2
                cond:56_1 = temp10_1 != 0
                cond:57_1 = temp10_1 == 0
                cond:66_1 = temp10_1 == 0
                cond:67_1 = temp10_1 != 0
                cond:74_1 = temp10_1 != 0
                cond:75_1 = temp10_1 == 0
                cond:82_1 = temp10_1 == 0
                cond:83_1 = temp10_1 != 0
                cond:92_1 = temp10_1 != 0
                cond:93_1 = temp10_1 == 0
                cond:100_1 = temp10_1 == 0
                cond:101_1 = temp10_1 != 0
                
                if (temp10_1 != 0)
                    goto label_14035d1b1
                
                goto label_14035e39b
            
        label_14035d1a0:
            arg9 = _mm_insert_epi32(arg9, 1, 0)
            char temp9_1 = temp0_345 & 2
            cond:56_1 = temp9_1 != 0
            cond:57_1 = temp9_1 == 0
            cond:66_1 = temp9_1 == 0
            cond:67_1 = temp9_1 != 0
            cond:74_1 = temp9_1 != 0
            cond:75_1 = temp9_1 == 0
            cond:82_1 = temp9_1 == 0
            cond:83_1 = temp9_1 != 0
            cond:92_1 = temp9_1 != 0
            cond:93_1 = temp9_1 == 0
            cond:100_1 = temp9_1 == 0
            cond:101_1 = temp9_1 != 0
            
            if (temp9_1 != 0)
            label_14035d1b1:
                zmm6 = _mm_blend_ps(zmm6, temp0_295, 2)
                
                if (cond:57_1)
                    goto label_14035e3a1
                
                goto label_14035d1be
            
        label_14035e39b:
            
            if (not(cond:56_1))
            label_14035e3a1:
                
                if (cond:67_1)
                    goto label_14035d1ca
                
                goto label_14035e3a7
            
        label_14035d1be:
            arg6 = _mm_blend_ps(arg6, arg7, 2)
            
            if (not(cond:66_1))
            label_14035d1ca:
                arg10 = _mm_blend_ps(arg10, zmm4, 2)
                
                if (cond:75_1)
                    goto label_14035e3ad
                
                goto label_14035d1d7
            
        label_14035e3a7:
            
            if (not(cond:74_1))
            label_14035e3ad:
                
                if (cond:83_1)
                    goto label_14035d1e6
                
                goto label_14035e3b3
            
        label_14035d1d7:
            arg11 = __blendps_xmmdq_memdq_immb(arg11, var_728.o, 2)
            
            if (not(cond:82_1))
            label_14035d1e6:
                arg8 = __blendps_xmmdq_memdq_immb(arg8, var_738_1.o, 2)
                
                if (cond:93_1)
                    goto label_14035e3b9
                
                goto label_14035d1f4
            
        label_14035e3b3:
            
            if (not(cond:92_1))
            label_14035e3b9:
                
                if (cond:101_1)
                    goto label_14035d20b
                
                goto label_14035e3bf
            
        label_14035d1f4:
            arg12 = __blendps_xmmdq_memdq_immb(arg12, var_6c8_2, 2)
            bool cond:116_1
            bool cond:117_1
            bool cond:126_1
            bool cond:127_1
            bool cond:134_1
            bool cond:135_1
            bool cond:142_1
            bool cond:143_1
            bool cond:152_1
            bool cond:153_1
            bool cond:160_1
            bool cond:161_1
            
            if (not(cond:100_1))
            label_14035d20b:
                arg9 = _mm_insert_epi32(arg9, 1, 1)
                char temp20_1 = temp0_345 & 4
                cond:116_1 = temp20_1 == 0
                cond:117_1 = temp20_1 != 0
                cond:126_1 = temp20_1 != 0
                cond:127_1 = temp20_1 == 0
                cond:134_1 = temp20_1 == 0
                cond:135_1 = temp20_1 != 0
                cond:142_1 = temp20_1 != 0
                cond:143_1 = temp20_1 == 0
                cond:152_1 = temp20_1 == 0
                cond:153_1 = temp20_1 != 0
                cond:160_1 = temp20_1 != 0
                cond:161_1 = temp20_1 == 0
                
                if (temp20_1 == 0)
                    goto label_14035e3c9
                
                goto label_14035d21c
            
        label_14035e3bf:
            char temp19_1 = temp0_345 & 4
            cond:116_1 = temp19_1 == 0
            cond:117_1 = temp19_1 != 0
            cond:126_1 = temp19_1 != 0
            cond:127_1 = temp19_1 == 0
            cond:134_1 = temp19_1 == 0
            cond:135_1 = temp19_1 != 0
            cond:142_1 = temp19_1 != 0
            cond:143_1 = temp19_1 == 0
            cond:152_1 = temp19_1 == 0
            cond:153_1 = temp19_1 != 0
            cond:160_1 = temp19_1 != 0
            cond:161_1 = temp19_1 == 0
            
            if (temp19_1 == 0)
            label_14035e3c9:
                
                if (cond:117_1)
                    goto label_14035d229
                
                goto label_14035e3cf
            
        label_14035d21c:
            zmm6 = _mm_blend_ps(zmm6, temp0_295, 4)
            
            if (not(cond:116_1))
            label_14035d229:
                arg6 = _mm_blend_ps(arg6, arg7, 4)
                
                if (cond:127_1)
                    goto label_14035e3d5
                
                goto label_14035d235
            
        label_14035e3cf:
            
            if (not(cond:126_1))
            label_14035e3d5:
                
                if (cond:135_1)
                    goto label_14035d242
                
                goto label_14035e3db
            
        label_14035d235:
            arg10 = _mm_blend_ps(arg10, zmm4, 4)
            
            if (not(cond:134_1))
            label_14035d242:
                arg11 = __blendps_xmmdq_memdq_immb(arg11, var_728.o, 4)
                
                if (cond:143_1)
                    goto label_14035e3e1
                
                goto label_14035d251
            
        label_14035e3db:
            
            if (cond:142_1)
            label_14035d251:
                arg8 = __blendps_xmmdq_memdq_immb(arg8, var_738_1.o, 4)
                
                if (not(cond:152_1))
                label_14035d25f:
                    arg12 = __blendps_xmmdq_memdq_immb(arg12, var_6c8_2, 4)
                    
                    if (cond:161_1)
                        goto label_14035e3ed
                    
                    goto label_14035d276
            else
            label_14035e3e1:
                
                if (cond:153_1)
                    goto label_14035d25f
            
            bool cond:176_1
            bool cond:177_1
            bool cond:185_1
            bool cond:186_1
            bool cond:193_1
            bool cond:194_1
            bool cond:201_1
            bool cond:202_1
            bool cond:211_1
            bool cond:212_1
            bool cond:218_1
            bool cond:219_1
            
            if (not(cond:160_1))
            label_14035e3ed:
                zmm14 = zmm4
                char temp30_1 = temp0_345 & 8
                cond:176_1 = temp30_1 != 0
                cond:177_1 = temp30_1 == 0
                cond:185_1 = temp30_1 == 0
                cond:186_1 = temp30_1 != 0
                cond:193_1 = temp30_1 != 0
                cond:194_1 = temp30_1 == 0
                cond:201_1 = temp30_1 == 0
                cond:202_1 = temp30_1 != 0
                cond:211_1 = temp30_1 != 0
                cond:212_1 = temp30_1 == 0
                cond:218_1 = temp30_1 != 0
                cond:219_1 = temp30_1 == 0
                
                if (temp30_1 != 0)
                    goto label_14035d28b
                
                goto label_14035e3fb
            
        label_14035d276:
            arg9 = _mm_insert_epi32(arg9, 1, 2)
            zmm14 = zmm4
            char temp29_1 = temp0_345 & 8
            cond:176_1 = temp29_1 != 0
            cond:177_1 = temp29_1 == 0
            cond:185_1 = temp29_1 == 0
            cond:186_1 = temp29_1 != 0
            cond:193_1 = temp29_1 != 0
            cond:194_1 = temp29_1 == 0
            cond:201_1 = temp29_1 == 0
            cond:202_1 = temp29_1 != 0
            cond:211_1 = temp29_1 != 0
            cond:212_1 = temp29_1 == 0
            cond:218_1 = temp29_1 != 0
            cond:219_1 = temp29_1 == 0
            
            if (temp29_1 != 0)
            label_14035d28b:
                zmm6 = _mm_blend_ps(zmm6, temp0_295, 8)
                zmm4 = var_658_1
                
                if (cond:177_1)
                    goto label_14035e409
                
                goto label_14035d2a0
            
        label_14035e3fb:
            zmm4 = var_658_1
            
            if (not(cond:176_1))
            label_14035e409:
                zmm2 = var_678_1
                arg7 = zmm12
                zmm12 = var_6a8_1
                
                if (cond:186_1)
                    goto label_14035d2c1
                
                goto label_14035e424
            
        label_14035d2a0:
            arg6 = _mm_blend_ps(arg6, arg7, 8)
            zmm2 = var_678_1
            arg7 = zmm12
            zmm12 = var_6a8_1
            
            if (not(cond:185_1))
            label_14035d2c1:
                arg10 = _mm_blend_ps(arg10, zmm14, 8)
                
                if (cond:194_1)
                    goto label_14035e42a
                
                goto label_14035d2ce
            
        label_14035e424:
            
            if (not(cond:193_1))
            label_14035e42a:
                
                if (cond:202_1)
                    goto label_14035d2dd
                
                goto label_14035e430
            
        label_14035d2ce:
            arg11 = __blendps_xmmdq_memdq_immb(arg11, var_728.o, 8)
            
            if (not(cond:201_1))
            label_14035d2dd:
                arg8 = __blendps_xmmdq_memdq_immb(arg8, var_738_1.o, 8)
                
                if (cond:212_1)
                    goto label_14035e436
                
                goto label_14035d2eb
            
        label_14035e430:
            
            if (cond:211_1)
            label_14035d2eb:
                arg12 = __blendps_xmmdq_memdq_immb(arg12, var_6c8_2, 8)
                
                if (cond:218_1)
                    arg9 = _mm_insert_epi32(arg9, 1, 3)
            else
            label_14035e436:
                
                if (not(cond:219_1))
                    arg9 = _mm_insert_epi32(arg9, 1, 3)
            
            _mm_movemask_ps(_mm_srai_epi32(temp0_343, 0x1f) | zmm13)
            zmm13 = var_718_1
            rsi_4 = rdi_4
            char temp37_1 = rsi_4 & 1
            cond:4_1 = temp37_1 != 0
            cond:8_1 = temp37_1 == 0
            cond:9_1 = temp37_1 != 0
            cond:13_1 = temp37_1 != 0
            cond:14_1 = temp37_1 == 0
            cond:20_1 = temp37_1 == 0
            cond:21_1 = temp37_1 != 0
            cond:30_1 = temp37_1 != 0
            cond:31_1 = temp37_1 == 0
            cond:38_1 = temp37_1 == 0
            cond:39_1 = temp37_1 != 0
            
            if (temp37_1 != 0)
                arg5 = _mm_blend_ps(arg5, zmm6, 1)
        
        if (not(cond:4_1))
            if (cond:9_1)
                goto label_14035cfbc
            
            goto label_14035e4b1
        
        zmm2 = _mm_blend_ps(zmm2, arg6, 1)
        
        if (not(cond:8_1))
        label_14035cfbc:
            zmm13 = _mm_blend_ps(zmm13, arg10, 1)
            
            if (cond:14_1)
                goto label_14035e4b7
            
            goto label_14035cfc9
        
    label_14035e4b1:
        
        if (not(cond:13_1))
        label_14035e4b7:
            
            if (cond:21_1)
                goto label_14035cfd6
            
            goto label_14035e4bd
        
    label_14035cfc9:
        zmm4 = _mm_blend_ps(zmm4, arg11, 1)
        
        if (not(cond:20_1))
        label_14035cfd6:
            zmm12 = _mm_blend_ps(zmm12, arg8, 1)
            
            if (cond:31_1)
                goto label_14035e4c3
            
            goto label_14035cfe3
        
    label_14035e4bd:
        
        if (not(cond:30_1))
        label_14035e4c3:
            
            if (cond:39_1)
                goto label_14035cffc
            
            goto label_14035e4c9
        
    label_14035cfe3:
        arg7 = _mm_blend_ps(arg7, arg12, 1)
        bool cond:54_1
        bool cond:55_1
        bool cond:64_1
        bool cond:65_1
        bool cond:72_1
        bool cond:73_1
        bool cond:80_1
        bool cond:81_1
        bool cond:90_1
        bool cond:91_1
        bool cond:98_1
        bool cond:99_1
        
        if (not(cond:38_1))
        label_14035cffc:
            var_748 = _mm_blend_epi16(var_748, arg9, 3)
            char temp12_1 = rsi_4 & 2
            cond:54_1 = temp12_1 == 0
            cond:55_1 = temp12_1 != 0
            cond:64_1 = temp12_1 != 0
            cond:65_1 = temp12_1 == 0
            cond:72_1 = temp12_1 == 0
            cond:73_1 = temp12_1 != 0
            cond:80_1 = temp12_1 != 0
            cond:81_1 = temp12_1 == 0
            cond:90_1 = temp12_1 == 0
            cond:91_1 = temp12_1 != 0
            cond:98_1 = temp12_1 != 0
            cond:99_1 = temp12_1 == 0
            
            if (temp12_1 == 0)
                goto label_14035e4d3
            
            goto label_14035d00b
        
    label_14035e4c9:
        char temp11_1 = rsi_4 & 2
        cond:54_1 = temp11_1 == 0
        cond:55_1 = temp11_1 != 0
        cond:64_1 = temp11_1 != 0
        cond:65_1 = temp11_1 == 0
        cond:72_1 = temp11_1 == 0
        cond:73_1 = temp11_1 != 0
        cond:80_1 = temp11_1 != 0
        cond:81_1 = temp11_1 == 0
        cond:90_1 = temp11_1 == 0
        cond:91_1 = temp11_1 != 0
        cond:98_1 = temp11_1 != 0
        cond:99_1 = temp11_1 == 0
        
        if (temp11_1 == 0)
        label_14035e4d3:
            
            if (cond:55_1)
                goto label_14035d017
            
            goto label_14035e4d9
        
    label_14035d00b:
        arg5 = _mm_blend_ps(arg5, zmm6, 2)
        
        if (not(cond:54_1))
        label_14035d017:
            zmm2 = _mm_blend_ps(zmm2, arg6, 2)
            
            if (cond:65_1)
                goto label_14035e4df
            
            goto label_14035d023
        
    label_14035e4d9:
        
        if (not(cond:64_1))
        label_14035e4df:
            
            if (cond:73_1)
                goto label_14035d030
            
            goto label_14035e4e5
        
    label_14035d023:
        zmm13 = _mm_blend_ps(zmm13, arg10, 2)
        
        if (not(cond:72_1))
        label_14035d030:
            zmm4 = _mm_blend_ps(zmm4, arg11, 2)
            
            if (cond:81_1)
                goto label_14035e4eb
            
            goto label_14035d03d
        
    label_14035e4e5:
        
        if (cond:80_1)
        label_14035d03d:
            zmm12 = _mm_blend_ps(zmm12, arg8, 2)
            
            if (not(cond:90_1))
            label_14035d04a:
                arg7 = _mm_blend_ps(arg7, arg12, 2)
                
                if (cond:99_1)
                    goto label_14035e4f7
                
                goto label_14035d063
        else
        label_14035e4eb:
            
            if (cond:91_1)
                goto label_14035d04a
        
        bool cond:114_1
        bool cond:115_1
        bool cond:124_1
        bool cond:125_1
        bool cond:132_1
        bool cond:133_1
        bool cond:140_1
        bool cond:141_1
        bool cond:150_1
        bool cond:151_1
        bool cond:158_1
        bool cond:159_1
        
        if (not(cond:98_1))
        label_14035e4f7:
            char temp22_1 = rsi_4 & 4
            cond:114_1 = temp22_1 != 0
            cond:115_1 = temp22_1 == 0
            cond:124_1 = temp22_1 == 0
            cond:125_1 = temp22_1 != 0
            cond:132_1 = temp22_1 != 0
            cond:133_1 = temp22_1 == 0
            cond:140_1 = temp22_1 == 0
            cond:141_1 = temp22_1 != 0
            cond:150_1 = temp22_1 != 0
            cond:151_1 = temp22_1 == 0
            cond:158_1 = temp22_1 == 0
            cond:159_1 = temp22_1 != 0
            
            if (temp22_1 != 0)
                goto label_14035d072
            
            goto label_14035e501
        
    label_14035d063:
        var_748 = _mm_blend_epi16(var_748, arg9, 0xc)
        char temp21_1 = rsi_4 & 4
        cond:114_1 = temp21_1 != 0
        cond:115_1 = temp21_1 == 0
        cond:124_1 = temp21_1 == 0
        cond:125_1 = temp21_1 != 0
        cond:132_1 = temp21_1 != 0
        cond:133_1 = temp21_1 == 0
        cond:140_1 = temp21_1 == 0
        cond:141_1 = temp21_1 != 0
        cond:150_1 = temp21_1 != 0
        cond:151_1 = temp21_1 == 0
        cond:158_1 = temp21_1 == 0
        cond:159_1 = temp21_1 != 0
        
        if (temp21_1 != 0)
        label_14035d072:
            arg5 = _mm_blend_ps(arg5, zmm6, 4)
            
            if (cond:115_1)
                goto label_14035e507
            
            goto label_14035d07e
        
    label_14035e501:
        
        if (not(cond:114_1))
        label_14035e507:
            
            if (cond:125_1)
                goto label_14035d08a
            
            goto label_14035e50d
        
    label_14035d07e:
        zmm2 = _mm_blend_ps(zmm2, arg6, 4)
        
        if (not(cond:124_1))
        label_14035d08a:
            zmm13 = _mm_blend_ps(zmm13, arg10, 4)
            
            if (cond:133_1)
                goto label_14035e513
            
            goto label_14035d097
        
    label_14035e50d:
        
        if (not(cond:132_1))
        label_14035e513:
            
            if (cond:141_1)
                goto label_14035d0a4
            
            goto label_14035e519
        
    label_14035d097:
        zmm4 = _mm_blend_ps(zmm4, arg11, 4)
        
        if (not(cond:140_1))
        label_14035d0a4:
            zmm12 = _mm_blend_ps(zmm12, arg8, 4)
            
            if (cond:151_1)
                goto label_14035e51f
            
            goto label_14035d0b1
        
    label_14035e519:
        
        if (not(cond:150_1))
        label_14035e51f:
            
            if (cond:159_1)
                goto label_14035d0ca
            
            goto label_14035e525
        
    label_14035d0b1:
        arg7 = _mm_blend_ps(arg7, arg12, 4)
        bool cond:174_1
        bool cond:175_1
        bool cond:183_1
        bool cond:184_1
        bool cond:191_1
        bool cond:192_1
        bool cond:199_1
        bool cond:200_1
        bool cond:209_1
        bool cond:210_1
        bool cond:216_1
        bool cond:217_1
        
        if (not(cond:158_1))
        label_14035d0ca:
            var_748 = _mm_blend_epi16(var_748, arg9, 0x30)
            char temp32_1 = rsi_4 & 8
            cond:174_1 = temp32_1 == 0
            cond:175_1 = temp32_1 != 0
            cond:183_1 = temp32_1 != 0
            cond:184_1 = temp32_1 == 0
            cond:191_1 = temp32_1 == 0
            cond:192_1 = temp32_1 != 0
            cond:199_1 = temp32_1 != 0
            cond:200_1 = temp32_1 == 0
            cond:209_1 = temp32_1 == 0
            cond:210_1 = temp32_1 != 0
            cond:216_1 = temp32_1 == 0
            cond:217_1 = temp32_1 != 0
            
            if (temp32_1 == 0)
                goto label_14035e52f
            
            goto label_14035d0d9
        
    label_14035e525:
        char temp31_1 = rsi_4 & 8
        cond:174_1 = temp31_1 == 0
        cond:175_1 = temp31_1 != 0
        cond:183_1 = temp31_1 != 0
        cond:184_1 = temp31_1 == 0
        cond:191_1 = temp31_1 == 0
        cond:192_1 = temp31_1 != 0
        cond:199_1 = temp31_1 != 0
        cond:200_1 = temp31_1 == 0
        cond:209_1 = temp31_1 == 0
        cond:210_1 = temp31_1 != 0
        cond:216_1 = temp31_1 == 0
        cond:217_1 = temp31_1 != 0
        
        if (temp31_1 == 0)
        label_14035e52f:
            arg4 = var_608_1
            
            if (cond:175_1)
                goto label_14035d0ed
            
            goto label_14035e53d
        
    label_14035d0d9:
        arg5 = _mm_blend_ps(arg5, zmm6, 8)
        arg4 = var_608_1
        
        if (not(cond:174_1))
        label_14035d0ed:
            zmm2 = _mm_blend_ps(zmm2, arg6, 8)
            
            if (cond:184_1)
                goto label_14035e543
            
            goto label_14035d0f9
        
    label_14035e53d:
        
        if (not(cond:183_1))
        label_14035e543:
            
            if (cond:192_1)
                goto label_14035d106
            
            goto label_14035e549
        
    label_14035d0f9:
        zmm13 = _mm_blend_ps(zmm13, arg10, 8)
        
        if (not(cond:191_1))
        label_14035d106:
            zmm4 = _mm_blend_ps(zmm4, arg11, 8)
            
            if (cond:200_1)
                goto label_14035e54f
            
            goto label_14035d113
        
    label_14035e549:
        
        if (not(cond:199_1))
        label_14035e54f:
            
            if (cond:210_1)
                goto label_14035d120
            
            goto label_14035e555
        
    label_14035d113:
        zmm12 = _mm_blend_ps(zmm12, arg8, 8)
        
        if (cond:209_1)
        label_14035e555:
            var_688 = arg7
            zmm10 = arg5
            
            if (not(cond:216_1))
                var_748 = _mm_blend_epi16(var_748, arg9, 0xc0)
        else
        label_14035d120:
            arg7 = _mm_blend_ps(arg7, arg12, 8)
            var_688 = arg7
            zmm10 = arg5
            
            if (cond:217_1)
                var_748 = _mm_blend_epi16(var_748, arg9, 0xc0)
    
    arg5 = zmm6
    rbx = zx.q(rbx.d + 4)
while (rbx.d s< i_2)

if (rbx.d s>= rdx)
    goto label_14035e5ff

goto label_14035e594
