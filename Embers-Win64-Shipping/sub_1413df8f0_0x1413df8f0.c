// 函数: sub_1413df8f0
// 地址: 0x1413df8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x109d8)
void var_109f8
int64_t result = __security_cookie ^ &var_109f8
int64_t result_1 = result

if (data_143f0f1d4 == 0)
    void* var_104a8
    int512_t zmm1_1 = sub_1414122d0(&var_104a8, arg4)
    void* r15_1 = nullptr
    int32_t var_10250
    int32_t var_ef10_1 = var_10250
    int32_t var_1024c
    int32_t var_ef0c_1 = var_1024c
    int32_t var_10248
    int32_t var_ef08_1 = var_10248
    int32_t var_10244
    int32_t var_ef04_1 = var_10244
    int64_t* rcx_1 = *(var_104a8 + 0x20)
    
    if (rcx_1 != 0)
        r15_1 = (*(*rcx_1 + 0x248))(rcx_1)
    
    int32_t var_ef60
    sub_142134ed0(*(arg5 + 0x80), var_ef60, zmm1_1)
    sub_142134440()
    void* var_ef68_1 = sub_141227ab0()
    
    if (*(*(arg5 + 0x78) + 0xa3) s>= 0)
        void* rax_9 = *(arg5 + 0x68)
        void* rcx_4 = arg5
        
        if (rax_9 != 0)
            rcx_4 = rax_9
        
        void* rax_10 = *(rcx_4 + 8)
        
        if (rax_10 != 0)
            *(rcx_4 + 0x3c) &= 0xfffffffa
            int64_t i_2 = 4
            *(rcx_4 + 0x3c) |= 2
            void var_b088
            void* rcx_5 = &var_b088
            int128_t* rax_11 = *(rax_10 + 0x20)
            int64_t i
            
            do
                rcx_5 += 0x80
                int128_t zmm0_1 = *rax_11
                rax_11 = &rax_11[8]
                *(rcx_5 - 0x80) = zmm0_1
                *(rcx_5 - 0x70) = rax_11[-7]
                *(rcx_5 - 0x60) = rax_11[-6]
                *(rcx_5 - 0x50) = rax_11[-5]
                *(rcx_5 - 0x40) = rax_11[-4]
                *(rcx_5 - 0x30) = rax_11[-3]
                *(rcx_5 - 0x20) = rax_11[-2]
                *(rcx_5 - 0x10) = rax_11[-1]
                i = i_2
                i_2 -= 1
            while (i != 1)
            *rcx_5 = *rax_11
            *(rcx_5 + 0x10) = rax_11[1]
            *(rcx_5 + 0x20) = rax_11[2]
            int32_t var_aefc_1 = 0
            void var_acf8
            int128_t* rax_12 = sub_1413bf5d0(&var_acf8, &var_b088)
            void* rcx_7 = &data_143a2f760
            int64_t i_3 = 4
            int64_t i_1
            
            do
                rcx_7 += 0x80
                int128_t zmm0_2 = *rax_12
                rax_12 = &rax_12[8]
                *(rcx_7 - 0x80) = zmm0_2
                *(rcx_7 - 0x70) = rax_12[-7]
                *(rcx_7 - 0x60) = rax_12[-6]
                *(rcx_7 - 0x50) = rax_12[-5]
                *(rcx_7 - 0x40) = rax_12[-4]
                *(rcx_7 - 0x30) = rax_12[-3]
                *(rcx_7 - 0x20) = rax_12[-2]
                *(rcx_7 - 0x10) = rax_12[-1]
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
            *rcx_7 = *rax_12
            *(rcx_7 + 0x10) = rax_12[1]
            *(rcx_7 + 0x20) = rax_12[2]
            int32_t rax_13 = sub_1422e5a30(&var_104a8)
            data_142d3f660
            data_143a2f750 = rax_13
            void* r8 = *(arg5 + 0x88)
            int128_t var_b178
            __builtin_memcpy(&var_b178, 
                "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x"
            "00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
            "00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00"
            "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00"
            "00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
            "00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
                0x80)
            sub_1420faf20(var_ef60, &var_b178, r8)
            int512_t zmm1_4
            zmm1_4.o = data_142d3f660
            int128_t var_b268
            __builtin_memcpy(&var_b268, 
                "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x"
            "00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
            "00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00"
            "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00"
            "00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
            "00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x"
            "
                0xf0)
            sub_1421029d0(&var_b268, &var_b178)
            data_143a2f990 = var_b268
            __builtin_memcpy(&data_143a2f9a0, 
                "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x"
            "00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
            "00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00"
            "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00"
            "00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
            "00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x"
            "
                0xe0)
            sub_1422afa30(&data_143a2f740)
            int32_t rax_14 = sub_1422e5a30(&var_104a8)
            int32_t var_10888_1 = rax_14
            void var_b328
            void var_b330
            
            if (sub_1419a2670(rax_14) != 0)
                sub_1405d16e0(&var_b328, data_143a2fa90.q)
            else
                sub_1405d16e0(&var_b330, data_143a2fa80:8)
            void var_b320
            sub_1405d16e0(&var_b320, data_143a2faa0:8)
    
    sub_141420f20(&var_104a8)
    int64_t var_10498
    arg3[3] = var_10498
    int64_t var_10980 = 0
    
    if (arg3[5] == 0)
        void var_aac8
        sub_1413bf830(&var_aac8)
        int64_t* rcx_18 = data_143f0f180
        void* var_10938
        (*(*rcx_18 + 0xf8))(rcx_18, &var_10938, &var_aac8, &data_143ec9770, 1, 1)
        void* rax_18 = var_10938
        void* var_10930 = rax_18
        
        if (rax_18 != 0)
            *(rax_18 + 8) += 1
        
        sub_1405d1550(&var_10938)
        sub_1405d1600(&var_10980, &var_10930)
        sub_1405d1550(&var_10930)
        arg3[5] = var_10980
    
    if (var_ef60 s< 3)
        void var_ae58
        int128_t* rax_20 = sub_1422d6b50(&var_ae58)
        int64_t* rcx_23 = data_143f0f180
        void* var_10928
        (*(*rcx_23 + 0xf8))(rcx_23, &var_10928, rax_20, &data_143f558b0, 1, 1)
        void* rax_21 = var_10928
        void* var_10920 = rax_21
        
        if (rax_21 != 0)
            *(rax_21 + 8) += 1
        
        sub_1405d1550(&var_10928)
        void var_10490
        sub_1405d1600(&var_10490, &var_10920)
        sub_1405d1550(&var_10920)
    
    int64_t* rcx_27 = *(arg5 + 0x80)
    int64_t var_10890 = 0
    int64_t* rax_23 = (*(*rcx_27 + 0x40))(rcx_27, zx.q(var_ef60), &var_10890)
    int64_t rdx_13 = *rax_23
    int32_t rax_24 = (*(rdx_13 + 0x1d8))(rax_23, rdx_13)
    int32_t rcx_29 = data_1439b7180
    
    if (rcx_29 == 4)
        sub_1414cef20(&data_1439b70b0, arg2)
        sub_1414d12e0(&data_1439b70b0, arg2, var_ef60)
    else if (var_ef60 s> rcx_29)
        sub_1414d12e0(&data_1439b70b0, arg2, var_ef60)
    
    char var_109b8 = 0
    char* var_10878_1 = &var_109b8
    void*** (* var_10880)() = j_sub_140597fc0
    int64_t* rax_26 = sub_140a756e0(&var_10880, &data_143958018) + 0x10
    int64_t* var_10978 = rax_26
    int64_t rcx_31 = *rax_26
    int64_t rcx_32 = rax_26[2]
    char var_10960_1 = 0
    int64_t rcx_33 = rax_26[3]
    rax_26[3] = &var_10978
    int64_t* rax_27 = var_10978
    rax_27[4].d += 1
    int32_t var_109d8
    int32_t var_109d0
    
    if (rax_24 u<= 1)
        *arg3 = data_14395da00
        
        if (arg6 == 0)
            int64_t var_109a8 = 0
            int64_t* rdx_25 = &var_104a8
            void** rcx_81
            
            if (var_ef60 s< 3)
                void* const var_10988 = nullptr
                sub_141265300(arg2, rdx_25, 0, &var_10988)
                sub_1405d16e0(&var_109a8, var_10988)
                arg3[6] = var_109a8
                int64_t var_10950
                __builtin_memset(&var_10950, 0, 0x14)
                sub_141095f70(&var_10950, 0)
                int64_t var_108c0 = 0
                int64_t var_108b8_1 = 0
                void var_106d8
                sub_14108b090(&var_106d8)
                void** const var_107f8 = &data_142f11938
                int64_t* var_107f0_1 = &var_10950
                int64_t* var_107e8_1 = &var_108c0
                void* var_107e0_1 = &var_106d8
                void var_109b4
                void* var_107d8_1 = &var_109b4
                var_109d0.q = &var_107f8
                var_109d8.q = arg3
                void** var_10618
                sub_14125c390(&var_10618, r15_1, var_ef60, &var_104a8, var_109d8, var_109d0, 2, 4)
                sub_14125e400(&var_10618, arg5, -1, nullptr, 0xffffffff)
                int32_t rcx_88
                rcx_88.b = sub_1422eb5d0(&var_104a8) != 0
                var_109d0.q = &var_109b4
                int32_t var_109d8_4
                var_109d8_4.q = &var_106d8
                sub_1412680e0(&var_104a8, arg2, &var_108c0, &var_10950, var_109d8_4, var_109d0, 
                    rcx_88 + 1)
                var_107f8 = &data_142d56fa0
                int64_t var_106a8
                
                if (var_106a8 != 0)
                    sub_140a74f90(var_106a8)
                
                int64_t var_106b8
                
                if (var_106b8 != 0)
                    sub_140a74f90(var_106b8)
                
                sub_14108ca30(&var_106d8)
                sub_141095f70(&var_10950, 0)
                int64_t rcx_95 = var_10950
                
                if (rcx_95 != 0)
                    sub_140a74f90(rcx_95)
                
                rcx_81 = &var_10988
            else
                void* var_109a0 = nullptr
                int32_t var_109c8
                var_109c8.q = &var_109a0
                var_109d0.q = 0
                var_109d8.q = 0
                MRE::CbDoNestedType(arg2, rdx_25, nullptr, nullptr, var_109d8, var_109d0, var_109c8)
                sub_1405d16e0(&var_109a8, var_109a0)
                arg3[6] = var_109a8
                int64_t var_10918
                __builtin_memset(&var_10918, 0, 0x14)
                sub_141095f70(&var_10918, 0)
                int64_t var_108d0 = 0
                int64_t var_108c8_1 = 0
                void var_10728
                sub_14108b090(&var_10728)
                void** const var_10820 = &data_142f11938
                int64_t* var_10818_1 = &var_10918
                int64_t* var_10810_1 = &var_108d0
                void* var_10808_1 = &var_10728
                void var_109b5
                void* var_10800_1 = &var_109b5
                var_109d0.q = &var_10820
                var_109d8.q = arg3
                void** var_10528
                sub_14108b590(&var_10528, r15_1, var_ef60, &var_104a8, var_109d8, var_109d0, 
                    zx.d(arg7) * 2, 4)
                sub_14108e980(&var_10528, arg5, -1, nullptr, 0xffffffff)
                int32_t rcx_73
                rcx_73.b = sub_1422eb5d0(&var_104a8) != 0
                var_109d0.q = &var_109b5
                int32_t var_109d8_3
                var_109d8_3.q = &var_10728
                sub_1412680e0(&var_104a8, arg2, &var_108d0, &var_10918, var_109d8_3, var_109d0, 
                    rcx_73 + 1)
                var_10820 = &data_142d56fa0
                int64_t var_106f8
                
                if (var_106f8 != 0)
                    sub_140a74f90(var_106f8)
                
                int64_t var_10708
                
                if (var_10708 != 0)
                    sub_140a74f90(var_10708)
                
                sub_14108ca30(&var_10728)
                sub_141095f70(&var_10918, 0)
                int64_t rcx_80 = var_10918
                
                if (rcx_80 != 0)
                    sub_140a74f90(rcx_80)
                
                rcx_81 = &var_109a0
            
            sub_1405d1550(rcx_81)
            sub_1405d1550(&var_109a8)
    else
        int64_t* rdx_16 = &var_104a8
        int64_t var_109b0 = 0
        int64_t* rcx_50
        
        if (var_ef60 s< 3)
            void* var_10990 = nullptr
            sub_141265300(arg2, rdx_16, 1, &var_10990)
            sub_1405d16e0(&var_109b0, var_10990)
            arg3[6] = var_109b0
            int64_t var_108e8
            __builtin_memset(&var_108e8, 0, 0x14)
            sub_141095f70(&var_108e8, 0)
            int64_t var_108a0 = 0
            int64_t var_10898_1 = 0
            void var_10778
            sub_14108b090(&var_10778)
            void** const var_10848 = &data_142f11938
            int64_t* var_10840_1 = &var_108e8
            int64_t* var_10838_1 = &var_108a0
            void* var_10830_1 = &var_10778
            void var_109b6
            void* var_10828_1 = &var_109b6
            var_109d0.q = &var_10848
            var_109d8.q = arg3
            void** var_10688
            sub_14125c390(&var_10688, r15_1, var_ef60, &var_104a8, var_109d8, var_109d0, 0, 3)
            sub_14125e400(&var_10688, arg5, -1, nullptr, 0xffffffff)
            int32_t rcx_57
            rcx_57.b = sub_1422eb5d0(&var_104a8) != 0
            var_109d0.q = &var_109b6
            int32_t var_109d8_2
            var_109d8_2.q = &var_10778
            sub_1412680e0(&var_104a8, arg2, &var_108a0, &var_108e8, var_109d8_2, var_109d0, 
                rcx_57 + 1)
            var_10848 = &data_142d56fa0
            int64_t var_10748
            
            if (var_10748 != 0)
                sub_140a74f90(var_10748)
            
            int64_t var_10758
            
            if (var_10758 != 0)
                sub_140a74f90(var_10758)
            
            sub_14108ca30(&var_10778)
            sub_141095f70(&var_108e8, 0)
            int64_t rcx_64 = var_108e8
            
            if (rcx_64 != 0)
                sub_140a74f90(rcx_64)
            
            sub_1405d1550(&var_10990)
            rcx_50 = &var_109b0
        else
            int32_t var_109d0_1 = 0
            void* var_10998
            var_109d8.q = &var_10998
            var_10998 = nullptr
            sub_1414c97a0(arg2, rdx_16, nullptr, 0, var_109d8, var_109d0_1)
            sub_1405d16e0(&var_109b0, var_10998)
            arg3[6] = var_109b0
            int64_t var_10900
            __builtin_memset(&var_10900, 0, 0x14)
            sub_141095f70(&var_10900, 0)
            int64_t var_108b0 = 0
            int64_t var_108a8_1 = 0
            void var_107c8
            sub_14108b090(&var_107c8)
            void** const var_10870 = &data_142f11938
            int64_t* var_10868_1 = &var_10900
            int64_t* var_10860_1 = &var_108b0
            void* var_10858_1 = &var_107c8
            void var_109b7
            void* var_10850_1 = &var_109b7
            var_109d0_1.q = &var_10870
            var_109d8.q = arg3
            void** var_105a8
            sub_14108b590(&var_105a8, r15_1, var_ef60, &var_104a8, var_109d8, var_109d0_1, 
                zx.d(arg7) * 2, 3)
            sub_14108e980(&var_105a8, arg5, -1, nullptr, 0xffffffff)
            int32_t rcx_41
            rcx_41.b = sub_1422eb5d0(&var_104a8) != 0
            var_109d0_1.q = &var_109b7
            int32_t var_109d8_1
            var_109d8_1.q = &var_107c8
            sub_1412680e0(&var_104a8, arg2, &var_108b0, &var_10900, var_109d8_1, var_109d0_1, 
                rcx_41 + 1)
            var_10870 = &data_142d56fa0
            int64_t var_10798
            
            if (var_10798 != 0)
                sub_140a74f90(var_10798)
            
            int64_t var_107a8
            
            if (var_107a8 != 0)
                sub_140a74f90(var_107a8)
            
            sub_14108ca30(&var_107c8)
            sub_141095f70(&var_10900, 0)
            int64_t rcx_48 = var_10900
            
            if (rcx_48 != 0)
                sub_140a74f90(rcx_48)
            
            sub_1405d1550(&var_10998)
            rcx_50 = &var_109b0
        
        sub_1405d1550(rcx_50)
    
    if (var_10960_1 == 0)
        int64_t* rax_41 = var_10978
        char var_10960_2 = 1
        rax_41[4].d -= 1
        int64_t* rcx_96 = var_10978
        
        if (rcx_32 != rcx_96[2])
            sub_140b16b40(rcx_96, rcx_32)
            rcx_96 = var_10978
        
        *rcx_96 = rcx_31
        var_10978[3] = rcx_33
        int64_t var_10970_2 = 0
    
    sub_1405d1550(&var_10980)
    result = sub_141413290(&var_104a8)

__security_check_cookie(result_1 ^ &var_109f8)
return result
