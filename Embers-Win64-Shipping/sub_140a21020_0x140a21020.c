// 函数: sub_140a21020
// 地址: 0x140a21020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_218
int64_t rax_1 = __security_cookie ^ &var_218
int64_t rdi = 0
int32_t var_1d0 = 0
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
int128_t zmm6
zmm6.q = float.d(performanceCount)
zmm6.q = zmm6.q f* data_143d796f8
zmm6.q = zmm6.q f+ 16777216.0
uint64_t result

if (data_143cf8c40 != 0)
    void*** r12_1 = nullptr
    void* var_50_1 = nullptr
    int32_t i_12 = 0
    int32_t var_44_1 = 4
    int32_t var_1f4
    __builtin_memset(&var_1f4, 0, 0x14)
    int64_t* var_1f0
    int64_t var_1e8_1
    void var_70
    
    if (arg1 != 0)
        void*** rax_5 = sub_140a491d0(0)
        int64_t* rcx_3 = data_143cf8c40
        int64_t rdx_1 = *rcx_3
        uint64_t i_13 = zx.q((*(rdx_1 + 0x18))(rcx_3, rdx_1))
        int32_t i_10 = i_13.d
        int32_t rcx_4
        
        if (arg2 != 0)
            rcx_4 = 2
        
        if (arg2 == 0 || data_14399e5c8 == 0)
            rcx_4 = 1
        
        int32_t rax_7
        rax_7.b = data_14399e5cc != 0
        var_1f4 += (rax_7 + rcx_4) * i_13.d
        int32_t rax_10 = 0
        
        if (0 == var_1f4)
            var_1f4 = 0
        else
            rax_10 = var_1f4
        
        if (rax_10 s> 0)
            sub_1405c5570(&var_1f0, rax_10)
        
        if (i_13.d s> 0)
            uint64_t i_7 = i_13
            uint64_t i
            
            do
                void*** rax_11 = sub_140a491d0(0)
                int64_t rbx_1 = sx.q(var_1e8_1.d)
                int32_t rcx_6 = (rbx_1 + 1).d
                var_1e8_1.d = rcx_6
                
                if (rcx_6 s> var_1e8_1:4.d)
                    sub_1405a4d70(&var_1f0)
                
                var_1f0[rbx_1] = rax_11
                int64_t* lpTlsValue_3 = TlsGetValue(data_143cf0950)
                int64_t* lpTlsValue = lpTlsValue_3
                
                if (lpTlsValue_3 == 0)
                    int64_t* lpTlsValue_4 = j_sub_140a82f30(zx.q((&lpTlsValue_3[3]).d))
                    lpTlsValue = lpTlsValue_4
                    
                    if (lpTlsValue_4 == 0)
                        lpTlsValue = nullptr
                    else
                        __builtin_memset(lpTlsValue_4, 0, 0x14)
                    
                    TlsSetValue(data_143cf0950, lpTlsValue)
                
                void*** rsi_1 = lpTlsValue[1]
                int32_t rcx_13
                
                if (rsi_1 != 0)
                    rcx_13 = lpTlsValue[2].d
                else
                    int64_t rax_12 = *lpTlsValue
                    
                    if (rax_12 == 0)
                        int64_t rax_13 = sub_14059e7c0(&data_143cf0958)
                        lpTlsValue[1] = rax_13
                        
                        if (rax_13 == 0)
                            int64_t* rax_14 = sub_140a82f70(0x2000, 0)
                            lpTlsValue[1] = rax_14
                            int64_t j_3 = 0x1f
                            int64_t* rcx_12
                            int64_t j
                            
                            do
                                rcx_12 = &rax_14[0x20]
                                *rax_14 = rcx_12
                                rax_14 = rcx_12
                                j = j_3
                                j_3 -= 1
                            while (j != 1)
                            *rcx_12 = 0
                    else
                        lpTlsValue[1] = rax_12
                        *lpTlsValue = 0
                    
                    rsi_1 = lpTlsValue[1]
                    rcx_13 = 0x20
                    lpTlsValue[2].d = 0x20
                
                lpTlsValue[1] = *rsi_1
                lpTlsValue[2].d = rcx_13 - 1
                int64_t* var_1b8
                int64_t** rax_17
                int64_t zmm6_1
                rax_17, zmm6_1 = sub_140a228d0(&var_1b8)
                void*** var_118_1 = rsi_1
                int64_t var_110_1 = 0
                int32_t var_108_1 = 0xff
                int64_t* rcx_15 = *rax_17
                *rax_17 = nullptr
                *rsi_1 = &data_142d40498
                int64_t* var_1c0_1 = rcx_15
                rsi_1[1].d = 0xff
                *(rsi_1 + 0xc) = 1
                *rsi_1 = &data_142e51ac8
                rsi_1[0x10].b = 0
                rsi_1[0x11] = rcx_15
                int64_t* rcx_16 = var_1b8
                int64_t var_1c0_2 = 0
                
                if (rcx_16 != 0)
                    zmm6_1 = sub_140a2f7d0(rcx_16)
                
                rsi_1[2] = *arg3
                rsi_1[4] = 0
                
                if (rsi_1[2] != 0)
                    void* rax_19 = arg3[2]
                    void* rcx_18 = &arg3[4]
                    
                    if (rax_19 != 0)
                        rcx_18 = rax_19
                    
                    (**rcx_18)(rcx_18)
                
                rsi_1[0xe] = zmm6_1
                rsi_1[0xb] = &var_1f4
                rsi_1[0xd] = rax_5
                rsi_1[0xf] = u"NPTask"
                rsi_1[0xa].d = 0x2ff
                rsi_1[0xc] = rax_11
                void* rbx_2 = rsi_1[0x11]
                
                if (rbx_2 != 0)
                    *(rbx_2 + 0x48) += 1
                
                sub_140a31da0(rsi_1, nullptr, 0xff, 1)
                int64_t i_20 = sx.q(i_12)
                int32_t i_14 = (i_20 + 1).d
                i_12 = i_14
                
                if (i_14 s> var_44_1)
                    sub_14083a490(&var_70, i_20.d)
                
                void* rcx_21 = &var_70
                
                if (var_50_1 != 0)
                    rcx_21 = var_50_1
                
                *(rcx_21 + (i_20 << 3)) = rbx_2
                i = i_7
                i_7 -= 1
            while (i != 1)
            i_13 = zx.q(i_10)
        
        if (data_14399e5cc != 0 && i_13.d s> 0)
            uint64_t i_8 = zx.q(i_13.d)
            uint64_t i_1
            
            do
                void*** rax_23 = sub_140a491d0(0)
                int64_t rbx_3 = sx.q(var_1e8_1.d)
                int32_t rcx_22 = (rbx_3 + 1).d
                var_1e8_1.d = rcx_22
                
                if (rcx_22 s> var_1e8_1:4.d)
                    sub_1405a4d70(&var_1f0)
                
                var_1f0[rbx_3] = rax_23
                int64_t* lpTlsValue_5 = TlsGetValue(data_143cf0950)
                int64_t* lpTlsValue_1 = lpTlsValue_5
                
                if (lpTlsValue_5 == 0)
                    int64_t* lpTlsValue_6 = j_sub_140a82f30(zx.q((&lpTlsValue_5[3]).d))
                    lpTlsValue_1 = lpTlsValue_6
                    
                    if (lpTlsValue_6 == 0)
                        lpTlsValue_1 = nullptr
                    else
                        __builtin_memset(lpTlsValue_6, 0, 0x14)
                    
                    TlsSetValue(data_143cf0950, lpTlsValue_1)
                
                int64_t* rsi_2 = lpTlsValue_1[1]
                int32_t rcx_28
                
                if (rsi_2 != 0)
                    rcx_28 = lpTlsValue_1[2].d
                else
                    rsi_2 = *lpTlsValue_1
                    
                    if (rsi_2 == 0)
                        int32_t rax_24 = sub_140a2d3e0(&data_143cf0958)
                        rsi_2 = nullptr
                        
                        if (rax_24 != 0)
                            rsi_2 = *(*((zx.q(rax_24) u>> 0xe << 3) + &data_143cf0bf8)
                                + (zx.q(rax_24) & 0x3fff) * 0x18 + 8)
                            sub_140a24050(rax_24)
                        
                        lpTlsValue_1[1] = rsi_2
                        
                        if (rsi_2 == 0)
                            int64_t* rax_25 = sub_140a82f70(0x2000, 0)
                            lpTlsValue_1[1] = rax_25
                            int64_t j_4 = 0x1f
                            int64_t* rcx_33
                            int64_t j_1
                            
                            do
                                rcx_33 = &rax_25[0x20]
                                *rax_25 = rcx_33
                                rax_25 = rcx_33
                                j_1 = j_4
                                j_4 -= 1
                            while (j_1 != 1)
                            *rcx_33 = 0
                            rsi_2 = lpTlsValue_1[1]
                        
                        lpTlsValue_1[2].d = 0x20
                        rcx_28 = 0x20
                    else
                        lpTlsValue_1[1] = rsi_2
                        rcx_28 = 0x20
                        *lpTlsValue_1 = 0
                        lpTlsValue_1[2].d = 0x20
                
                lpTlsValue_1[1] = *rsi_2
                lpTlsValue_1[2].d = rcx_28 - 1
                int64_t* var_1a0
                int64_t** rax_28
                int64_t zmm6_2
                rax_28, zmm6_2 = sub_140a228d0(&var_1a0)
                int64_t* var_100_1 = rsi_2
                int64_t var_f8_1 = 0
                int32_t var_f0_1 = 0xff
                int64_t* rcx_35 = *rax_28
                *rax_28 = nullptr
                *rsi_2 = &data_142d40498
                int64_t* var_1a8_1 = rcx_35
                rsi_2[1].d = 0xff
                *(rsi_2 + 0xc) = 1
                *rsi_2 = &data_142e51ac8
                rsi_2[0x10].b = 0
                rsi_2[0x11] = rcx_35
                int64_t* rcx_36 = var_1a0
                int64_t var_1a8_2 = 0
                
                if (rcx_36 != 0)
                    zmm6_2 = sub_140a2f7d0(rcx_36)
                
                rsi_2[2] = *arg3
                rsi_2[4] = 0
                
                if (rsi_2[2] != 0)
                    void* rax_30 = arg3[2]
                    void* rcx_38 = &arg3[4]
                    
                    if (rax_30 != 0)
                        rcx_38 = rax_30
                    
                    (**rcx_38)(rcx_38)
                
                rsi_2[0xe] = zmm6_2
                rsi_2[0xb] = &var_1f4
                rsi_2[0xd] = rax_5
                rsi_2[0xf] = u"HPTask"
                rsi_2[0xa].d = 0x6ff
                rsi_2[0xc] = rax_23
                void* rbx_4 = rsi_2[0x11]
                
                if (rbx_4 != 0)
                    *(rbx_4 + 0x48) += 1
                
                sub_140a31da0(rsi_2, nullptr, 0xff, 1)
                int64_t i_21 = sx.q(i_12)
                int32_t i_15 = (i_21 + 1).d
                i_12 = i_15
                
                if (i_15 s> var_44_1)
                    sub_14083a490(&var_70, i_21.d)
                
                void* rcx_41 = &var_70
                
                if (var_50_1 != 0)
                    rcx_41 = var_50_1
                
                *(rcx_41 + (i_21 << 3)) = rbx_4
                i_1 = i_8
                i_8 -= 1
            while (i_1 != 1)
        
        if (arg2 != 0 && data_14399e5c8 != 0 && i_10 s> 0)
            uint64_t i_9 = zx.q(i_10)
            uint64_t i_2
            
            do
                void*** rax_35 = sub_140a491d0(0)
                int64_t rbx_5 = sx.q(var_1e8_1.d)
                int32_t rcx_42 = (rbx_5 + 1).d
                var_1e8_1.d = rcx_42
                
                if (rcx_42 s> var_1e8_1:4.d)
                    sub_1405a4d70(&var_1f0)
                
                var_1f0[rbx_5] = rax_35
                void** lpTlsValue_7 = TlsGetValue(data_143cf0950)
                void** lpTlsValue_2 = lpTlsValue_7
                
                if (lpTlsValue_7 == 0)
                    void** lpTlsValue_8 = j_sub_140a82f30(zx.q((&lpTlsValue_7[3]).d))
                    lpTlsValue_2 = lpTlsValue_8
                    
                    if (lpTlsValue_8 == 0)
                        lpTlsValue_2 = nullptr
                    else
                        __builtin_memset(lpTlsValue_8, 0, 0x14)
                    
                    TlsSetValue(data_143cf0950, lpTlsValue_2)
                
                int64_t* rsi_3 = lpTlsValue_2[1]
                int32_t rcx_48
                
                if (rsi_3 != 0)
                    rcx_48 = lpTlsValue_2[2].d
                else
                    rsi_3 = *lpTlsValue_2
                    
                    if (rsi_3 == 0)
                        int32_t rax_36 = sub_140a2d3e0(&data_143cf0958)
                        rsi_3 = nullptr
                        
                        if (rax_36 != 0)
                            rsi_3 = *(*((zx.q(rax_36) u>> 0xe << 3) + &data_143cf0bf8)
                                + (zx.q(rax_36) & 0x3fff) * 0x18 + 8)
                            sub_140a24050(rax_36)
                        
                        lpTlsValue_2[1] = rsi_3
                        
                        if (rsi_3 == 0)
                            int64_t* rax_37 = sub_140a82f70(0x2000, 0)
                            lpTlsValue_2[1] = rax_37
                            int64_t j_5 = 0x1f
                            int64_t* rcx_53
                            int64_t j_2
                            
                            do
                                rcx_53 = &rax_37[0x20]
                                *rax_37 = rcx_53
                                rax_37 = rcx_53
                                j_2 = j_5
                                j_5 -= 1
                            while (j_2 != 1)
                            *rcx_53 = 0
                            rsi_3 = lpTlsValue_2[1]
                        
                        lpTlsValue_2[2].d = 0x20
                        rcx_48 = 0x20
                    else
                        lpTlsValue_2[1] = rsi_3
                        rcx_48 = 0x20
                        *lpTlsValue_2 = nullptr
                        lpTlsValue_2[2].d = 0x20
                
                lpTlsValue_2[1] = *rsi_3
                lpTlsValue_2[2].d = rcx_48 - 1
                int64_t* var_190
                int64_t** rax_40
                int64_t zmm6_3
                rax_40, zmm6_3 = sub_140a228d0(&var_190)
                int64_t* rcx_55 = *rax_40
                *rax_40 = nullptr
                *rsi_3 = &data_142d40498
                int64_t* var_158_1 = rcx_55
                rsi_3[1].d = 0xff
                *(rsi_3 + 0xc) = 1
                *rsi_3 = &data_142e51ac8
                rsi_3[0x10].b = 0
                rsi_3[0x11] = rcx_55
                int64_t* rcx_56 = var_190
                
                if (rcx_56 != 0)
                    zmm6_3 = sub_140a2f7d0(rcx_56)
                
                int64_t* var_150
                
                if (test_bit(0, 8) && var_150 != 0)
                    zmm6_3 = sub_140a2f7d0(var_150)
                
                rsi_3[2] = *arg3
                rsi_3[4] = 0
                
                if (rsi_3[2] != 0)
                    void* rax_42 = arg3[2]
                    void* rcx_58 = &arg3[4]
                    
                    if (rax_42 != 0)
                        rcx_58 = rax_42
                    
                    (**rcx_58)(rcx_58)
                
                rsi_3[0xe] = zmm6_3
                rsi_3[0xb] = &var_1f4
                rsi_3[0xd] = rax_5
                rsi_3[0xf] = u"BPTask"
                rsi_3[0xa].d = 0xaff
                rsi_3[0xc] = rax_35
                void* rbx_6 = rsi_3[0x11]
                
                if (rbx_6 != 0)
                    *(rbx_6 + 0x48) += 1
                
                sub_140a31da0(rsi_3, nullptr, 0xff, 1)
                int64_t i_22 = sx.q(i_12)
                int32_t i_16 = (i_22 + 1).d
                i_12 = i_16
                
                if (i_16 s> var_44_1)
                    sub_14083a490(&var_70, i_22.d)
                
                void* rcx_61 = &var_70
                
                if (var_50_1 != 0)
                    rcx_61 = var_50_1
                
                *(rcx_61 + (i_22 << 3)) = rbx_6
                i_2 = i_9
                i_9 -= 1
            while (i_2 != 1)
        
        r12_1 = rax_5
    
    void* var_80_1 = nullptr
    int32_t i_11 = 0
    int32_t var_74_1 = 4
    void var_a0
    
    if (data_143db7ab0 != 0)
        void var_e8
        int64_t* rax_46
        int64_t zmm6_4
        rax_46, zmm6_4 = sub_140a229f0(&var_e8, nullptr, 0xff)
        void* rbx_7 = *rax_46
        *(rbx_7 + 0x10) = *arg3
        *(rbx_7 + 0x20) = 0
        
        if (*(rbx_7 + 0x10) != 0)
            void* r8 = arg3[2]
            void* rcx_64 = &arg3[4]
            
            if (r8 != 0)
                rcx_64 = r8
            
            (**rcx_64)(rcx_64)
        
        *(rbx_7 + 0x70) = zmm6_4
        *(rbx_7 + 0x78) = u"RHIT"
        *(rbx_7 + 0x50) = 0x200
        __builtin_memset(rbx_7 + 0x58, 0, 0x18)
        void* rcx_65 = *rax_46
        int32_t r8_1 = rax_46[2].d
        int64_t* rdx_22 = rax_46[1]
        void* rbx_8 = *(rcx_65 + 0x88)
        
        if (rbx_8 != 0)
            *(rbx_8 + 0x48) += 1
        
        sub_140a31da0(rcx_65, rdx_22, r8_1, 1)
        int64_t i_23 = sx.q(i_11)
        int32_t i_17 = (i_23 + 1).d
        i_11 = i_17
        
        if (i_17 s> var_74_1)
            sub_14083a490(&var_a0, i_23.d)
        
        void* rcx_67 = &var_a0
        
        if (var_80_1 != 0)
            rcx_67 = var_80_1
        
        *(rcx_67 + (i_23 << 3)) = rbx_8
    
    int32_t rsi_5 = data_14399e5dc
    
    if (rsi_5 != 2)
        void var_d0
        int64_t* rax_49
        int64_t zmm6_5
        rax_49, zmm6_5 = sub_140a229f0(&var_d0, nullptr, 0xff)
        void* rbx_9 = *rax_49
        *(rbx_9 + 0x10) = *arg3
        *(rbx_9 + 0x20) = 0
        
        if (*(rbx_9 + 0x10) != 0)
            void* rax_50 = arg3[2]
            void* rcx_70 = &arg3[4]
            
            if (rax_50 != 0)
                rcx_70 = rax_50
            
            (**rcx_70)(rcx_70)
        
        *(rbx_9 + 0x70) = zmm6_5
        *(rbx_9 + 0x78) = &data_142e51b14
        *(rbx_9 + 0x50) = rsi_5 | 0x200
        __builtin_memset(rbx_9 + 0x58, 0, 0x18)
        void* rcx_71 = *rax_49
        int32_t r8_2 = rax_49[2].d
        int64_t* rdx_25 = rax_49[1]
        void* rbx_10 = *(rcx_71 + 0x88)
        
        if (rbx_10 != 0)
            *(rbx_10 + 0x48) += 1
        
        sub_140a31da0(rcx_71, rdx_25, r8_2, 1)
        int64_t i_24 = sx.q(i_11)
        int32_t i_18 = (i_24 + 1).d
        i_11 = i_18
        
        if (i_18 s> var_74_1)
            sub_14083a490(&var_a0, i_24.d)
        
        void* rcx_73 = &var_a0
        
        if (var_80_1 != 0)
            rcx_73 = var_80_1
        
        *(rcx_73 + (i_24 << 3)) = rbx_10
    
    int64_t* rcx_74 = data_143cf8c40
    
    if ((*(*rcx_74 + 0x20))(rcx_74, 1) != 0)
        void var_b8
        int64_t* rax_55
        int64_t zmm6_6
        rax_55, zmm6_6 = sub_140a229f0(&var_b8, nullptr, 0xff)
        void* rbx_11 = *rax_55
        *(rbx_11 + 0x10) = *arg3
        *(rbx_11 + 0x20) = 0
        
        if (*(rbx_11 + 0x10) != 0)
            void* r8_3 = arg3[2]
            void* rcx_77 = &arg3[4]
            
            if (r8_3 != 0)
                rcx_77 = r8_3
            
            (**rcx_77)(rcx_77)
        
        *(rbx_11 + 0x70) = zmm6_6
        *(rbx_11 + 0x78) = u"AudioT"
        *(rbx_11 + 0x50) = 0x201
        __builtin_memset(rbx_11 + 0x58, 0, 0x18)
        void* rcx_78 = *rax_55
        int32_t r8_4 = rax_55[2].d
        int64_t* rdx_28 = rax_55[1]
        void* rbx_12 = *(rcx_78 + 0x88)
        
        if (rbx_12 != 0)
            *(rbx_12 + 0x48) += 1
        
        sub_140a31da0(rcx_78, rdx_28, r8_4, 1)
        int64_t i_25 = sx.q(i_11)
        int32_t i_19 = (i_25 + 1).d
        i_11 = i_19
        
        if (i_19 s> var_74_1)
            sub_14083a490(&var_a0, i_25.d)
        
        void* rcx_80 = &var_a0
        
        if (var_80_1 != 0)
            rcx_80 = var_80_1
        
        *(rcx_80 + (i_25 << 3)) = rbx_12
    
    void* rax_58 = arg3[2]
    void* rcx_81 = &arg3[4]
    var_1d0 = 0x102
    
    if (rax_58 != 0)
        rcx_81 = rax_58
    
    (*arg3)((*(*rcx_81 + 8))(rcx_81), &var_1d0)
    
    if (arg1 != 0)
        if (r12_1 != 0)
            (*r12_1)[4](r12_1, 0xbb8, 0)
        
        int64_t* rbx_13 = var_1f0
        int64_t rsi_8 = 0
        void* rcx_84 = &rbx_13[sx.q(var_1e8_1.d)]
        uint64_t r14_8 = (rcx_84 - rbx_13 + 7) u>> 3
        
        if (rbx_13 u> rcx_84)
            r14_8 = 0
        
        if (r14_8 != 0)
            do
                int64_t* rcx_85 = *rbx_13
                (*(*rcx_85 + 0x10))(rcx_85)
                rsi_8 += 1
                rbx_13 = &rbx_13[1]
            while (rsi_8 != r14_8)
        
        int64_t performanceCount_1
        QueryPerformanceCounter(&performanceCount_1)
        int64_t* rcx_87 = data_143cf8c40
        (*(*rcx_87 + 0x48))(rcx_87, &var_70, 0x102)
        int64_t performanceCount_2
        QueryPerformanceCounter(&performanceCount_2)
    
    int64_t performanceCount_3
    QueryPerformanceCounter(&performanceCount_3)
    
    while (true)
        void* rcx_90 = &var_a0
        
        if (var_80_1 != 0)
            rcx_90 = var_80_1
        
        void* r8_5 = rcx_90 + (sx.q(i_11) << 3)
        
        if (rcx_90 == r8_5)
            break
        
        while (true)
            void* rdx_32 = *rcx_90
            
            if (rdx_32 != 0)
                int64_t rax_67 = 0
                
                if (0 == *(rdx_32 + 8))
                    *(rdx_32 + 8) = 0
                else
                    rax_67 = *(rdx_32 + 8)
                
                if (((rax_67 u>> 0x1a).b & 1) == 0)
                    sub_140b71870()
                    break
            
            rcx_90 += 8
            
            if (rcx_90 == r8_5)
                goto label_140a21cbb
    
label_140a21cbb:
    int64_t performanceCount_4
    QueryPerformanceCounter(&performanceCount_4)
    int64_t* r14_9 = var_1f0
    int64_t* rbx_14 = r14_9
    void* rcx_92 = &r14_9[sx.q(var_1e8_1.d)]
    uint64_t rsi_12 = (rcx_92 - r14_9 + 7) u>> 3
    
    if (r14_9 u> rcx_92)
        rsi_12 = 0
    
    if (rsi_12 != 0)
        do
            sub_140a4fc50(*rbx_14)
            rdi += 1
            rbx_14 = &rbx_14[1]
        while (rdi != rsi_12)
    
    if (r12_1 != 0)
        sub_140a4fc50(r12_1)
    
    int64_t performanceCount_5
    result = QueryPerformanceCounter(&performanceCount_5)
    void* rcx_96 = var_80_1
    void* rbx_15 = &var_a0
    int32_t i_5 = i_11
    
    if (rcx_96 != 0)
        rbx_15 = rcx_96
    
    if (i_5 != 0)
        int32_t i_3
        
        do
            int64_t* rcx_97 = *rbx_15
            
            if (rcx_97 != 0)
                result = sub_140a2f7d0(rcx_97)
            
            rbx_15 += 8
            i_3 = i_5
            i_5 -= 1
        while (i_3 != 1)
        rcx_96 = var_80_1
    
    if (rcx_96 != 0)
        result = sub_140a74f90(rcx_96)
    
    void* rcx_99 = var_50_1
    void* rbx_16 = &var_70
    int32_t i_6 = i_12
    
    if (rcx_99 != 0)
        rbx_16 = rcx_99
    
    if (i_6 != 0)
        int32_t i_4
        
        do
            int64_t* rcx_98 = *rbx_16
            
            if (rcx_98 != 0)
                result = sub_140a2f7d0(rcx_98)
            
            rbx_16 += 8
            i_4 = i_6
            i_6 -= 1
        while (i_4 != 1)
        rcx_99 = var_50_1
    
    if (rcx_99 != 0)
        result = sub_140a74f90(rcx_99)
    
    if (r14_9 != 0)
        result = sub_140a74f90(r14_9)
else
    void* rax_2 = arg3[2]
    int32_t var_1c8 = 2
    void* rcx_1 = &arg3[4]
    
    if (rax_2 != 0)
        rcx_1 = rax_2
    
    result = (*arg3)((*(*rcx_1 + 8))(rcx_1), &var_1c8)

__security_check_cookie(rax_1 ^ &var_218)
return result
