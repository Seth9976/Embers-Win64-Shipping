// 函数: sub_140cea3f0
// 地址: 0x140cea3f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_808
int64_t rax_1 = __security_cookie ^ &var_808
int64_t* var_758 = arg3
int32_t var_790 = 0
int64_t* rsi = arg3
int16_t* var_7c0 = arg2
arg3.b = 1
int32_t r15 = 0
char rax_2
int64_t r8
rax_2, r8 = sub_140b0f6c0(&var_7c0, &data_142d85f90)
int64_t* rcx_1 = &var_7c0
int64_t result
int32_t var_7e8
int64_t var_7e0
int64_t* j_3
int64_t var_768
int16_t var_648[0x100]
int16_t var_448[0x100]

if (rax_2 == 0)
    r8.b = 1
    char rax_5
    int64_t r8_3
    rax_5, r8_3 = sub_140b0f6c0(rcx_1, u"LISTPROPS")
    int16_t** rcx_8 = &var_7c0
    int16_t* result_1
    int64_t* var_788
    int64_t result_2
    int16_t* var_750
    void* var_740
    int16_t* result_16
    int64_t result_17
    int16_t* result_18
    int16_t* var_700
    int32_t var_6f8
    int16_t* var_6f0
    int32_t var_6e8
    int16_t* var_6e0
    int16_t* var_6d0
    int16_t* var_6c0
    
    if (rax_5 == 0)
        r8_3.b = 1
        char rax_54
        int64_t r8_33
        rax_54, r8_33 = sub_140b0f6c0(rcx_8, u"GETALL")
        int16_t** rcx_89 = &var_7c0
        
        if (rax_54 == 0)
            r8_33.b = 1
            
            if (sub_140b0f6c0(rcx_89, &data_142ea6100) != 0)
                sub_140ce2ef0(var_7c0, rsi, 1)
                result.b = 1
            else if (sub_140b0f6c0(&var_7c0, u"SETNOPEC") == 0)
                result = gz_write(arg1, arg2, rsi)
                
                if (result.b != 0)
                    result.b = 1
            else
                sub_140ce2ef0(var_7c0, rsi, 0)
                result.b = 1
        else if (sub_140b297e0(rcx_89, &var_648, 0x100, 1).b == 0)
            result.b = 1
        else
            result = sub_140d2ee50(sub_140bdf2e0(), -ffffffffffffffff, &var_648, 0)
            result_1 = result
            
            if (result == 0)
                result.b = 1
            else
                sub_140b297e0(&var_7c0, &var_448, 0x100, 1)
                sub_140b58260(&var_750, &var_448, 0)
                int64_t result_5 = sub_140bd3220(result, var_750)
                int16_t* rdi_12 = var_7c0
                int64_t* result_14 = result_5
                result_2 = result_5
                int32_t r12_4 = 0
                int32_t var_7c4_1 = 0
                var_740 = nullptr
                void* rsi_5
                
                if (rdi_12 != 0)
                    int16_t i = *rdi_12
                    void* rbx_17 = &rdi_12[1]
                    char r8_35 = 0
                    
                    if (i != 0)
                        do
                            int16_t i_9 = i - 0x20
                            
                            if (i - 0x61 u> 0x19)
                                i_9 = i
                            
                            if (r8_35 == 0 && i_9 == 0x4f)
                                if (sub_140a546e0(rbx_17, &(*u"OUTER=")[1], 5) == 0)
                                    rdi_12 = var_7c0
                                    rsi_5 = rbx_17 - 2
                                    goto label_140ceb2a6
                                
                                r8_35 = 1
                            else if (i_9 - 0x41 u<= 0x19 || i_9 - 0x30 u<= 9)
                                r8_35 = 1
                            else
                                r8_35 = 0
                            
                            i = *rbx_17
                            rbx_17 += 2
                        while (i != 0)
                        
                        rdi_12 = var_7c0
                
                rsi_5 = nullptr
            label_140ceb2a6:
                var_7e8.q = -1
                sub_140d260b0(rdi_12, u"OUTER=", sub_140d41340(), &var_740, var_7e8, nullptr)
                int32_t var_790_2 = 0
                int32_t var_78c_1 = 0
                int32_t rdi_13 = 0
                var_7e8.b = 1
                void var_248
                int64_t r8_38
                result, r8_38 = sub_140b2b020(var_7c0, u"NAME=", &var_248, 0x100, var_7e8.b)
                int64_t rbx_18
                
                if (result.b == 0)
                    rbx_18 = var_790_2.q
                else
                    result, r8_38 = sub_140b58260(&var_788, &var_248, 1)
                    rbx_18 = *result
                    var_790_2.q = rbx_18
                    rdi_13 = var_790_2
                
                var_768 = rbx_18
                
                if (rsi_5 == 0 || var_740 != 0)
                    r8_38.b = 1
                    char rax_60
                    int64_t r8_39
                    rax_60, r8_39 = sub_140b0f6c0(&var_7c0, u"SHOWDEFAULTS")
                    r8_39.b = 1
                    char rsi_6 = rax_60
                    char rax_61
                    int64_t r8_40
                    rax_61, r8_40 = sub_140b0f6c0(&var_7c0, u"SHOWPENDINGKILLS")
                    r8_40.b = 1
                    char rax_62 = sub_140b0f6c0(&var_7c0, u"DETAILED")
                    char r14_10 = rax_62
                    void var_670
                    sub_1409aa070(&var_670, sub_140d41340(), 0, 0, 0)
                    int64_t** i_6
                    int64_t** i_1 = i_6
                    
                    if (i_1 == 0)
                        result.b = 1
                    else
                        do
                            void* rdx_60 = var_740
                            int64_t* r15_3 = *i_1
                            char rax_64
                            
                            if (rdx_60 != 0)
                                rax_64 = sub_140d23d40(r15_3, rdx_60)
                            
                            if ((rdx_60 == 0 || rax_64 != 0)
                                    && (sub_140d23dc0(r15_3, 0x10) == 0 || rsi_6 != 0))
                                int32_t rcx_104
                                rcx_104.b = sub_140b5b8a0(rdi_13, 0) == 0
                                
                                if ((var_78c_1 != 0 | rcx_104.b) == 0 || r15_3[3] == rbx_18)
                                    void* const rax_73
                                    
                                    if (rax_61 == 0)
                                        int32_t rax_67 = *(r15_3 + 0xc)
                                        
                                        if (rax_67 s>= data_143e1d9b4)
                                            rax_73 = nullptr
                                        else
                                            int16_t temp1_1
                                            int32_t temp2_1
                                            temp1_1:temp2_1 = sx.q(rax_67)
                                            uint32_t rdx_62 = zx.d(temp1_1)
                                            int32_t rax_69 = temp2_1 + rdx_62
                                            rax_73 =
                                                *(data_143e1d9a0 + (sx.q(rax_69 s>> 0x10) << 3))
                                                + sx.q(zx.d(rax_69.w) - rdx_62) * 0x18
                                    
                                    if (rax_61 != 0 || ((*(rax_73 + 8) u>> 0x1d).b & 1) == 0)
                                        void* rax_76 = r15_3[2]
                                        int64_t rcx_109 = sx.q(*(result_1 + 0x38))
                                        
                                        if (rcx_109.d s<= *(rax_76 + 0x38)
                                                && *(*(rax_76 + 0x30) + (rcx_109 << 3)) ==
                                                &result_1[0x18])
                                            int32_t var_7e8_3
                                            
                                            if (result_14 != 0)
                                                int32_t rdx_69 = result_14[7].d
                                                char* result_30
                                                
                                                if (rdx_69 s> 1 || (
                                                        (zx.q(*(result_14[1] + 0x10)) u>> 0x15).b
                                                        & 1) != 0)
                                                    void* r14_13 = sx.q(*(result_14 + 0x4c)) + r15_3
                                                    sub_140b63b70(&result_14[5], &var_700)
                                                    int16_t* rsi_11 = &data_142d40450
                                                    
                                                    if (var_6f8 != 0)
                                                        rsi_11 = var_700
                                                    
                                                    int64_t var_680
                                                    int64_t* rax_86 =
                                                        sub_140d21830(r15_3, &var_680, 0, 0)
                                                    
                                                    if (rax_86[1].d != 0)
                                                        *rax_86
                                                    
                                                    var_7e8_3.q = rsi_11
                                                    sub_140b1f700(var_758, %i) %s.%s =", 
                                                        zx.q(r12_4))
                                                    int64_t rcx_136 = var_680
                                                    var_7c4_1 = r12_4 + 1
                                                    
                                                    if (rcx_136 != 0)
                                                        sub_140a74f90(rcx_136)
                                                    
                                                    int16_t* rcx_137 = var_700
                                                    
                                                    if (rcx_137 != 0)
                                                        sub_140a74f90(rcx_137)
                                                    
                                                    int32_t r12_10 = result_14[7].d
                                                    
                                                    if (r12_10 == 1)
                                                        int64_t result_9 = result_2
                                                        int64_t result_19 = 0
                                                        
                                                        if ((r12_10.b & (
                                                                zx.q(*(*(result_9 + 8) + 0x10))
                                                                u>> 0x15).b) != 0)
                                                            result_19 = result_9
                                                        
                                                        char rax_88 = not.b((*(result_19 + 0x80)).b)
                                                            & r12_10.b
                                                        r12_10 = *(r14_13 + 8)
                                                        
                                                        if (r12_10 == 0)
                                                            result_14 = *(result_19 + 0x78)
                                                            r14_13 = nullptr
                                                        else if (rax_88 != 0)
                                                            r14_13 = *r14_13
                                                            result_14 = *(result_19 + 0x78)
                                                        else
                                                            void* rax_89 = *r14_13
                                                            
                                                            if ((rax_89.b & 1) != 0)
                                                                rax_89 = (rax_89 s>> 1) + r14_13
                                                            
                                                            result_14 = *(result_19 + 0x78)
                                                            r14_13 = rax_89
                                                    
                                                    int32_t rsi_12 = 0
                                                    
                                                    if (r12_10 s> 0)
                                                        int64_t rax_91 = sx.q(*(result_14 + 0x3c))
                                                        
                                                        do
                                                            int64_t rax_92 = *result_14
                                                            int64_t var_7d8_4 = 0
                                                            j_3 = nullptr
                                                            result_30.d = 0x20000
                                                            int32_t var_798_2 = 0
                                                            var_7e8_3.q = r15_3
                                                            (*(rax_92 + 0xa0))(result_14, &j_3, 
                                                                r14_13, 0, var_7e8_3, result_30, 
                                                                var_7d8_4)
                                                            
                                                            if (rax_62 == 0)
                                                                sub_140b1f700(var_758, \t%i: %s", 
                                                                    zx.q(rsi_12))
                                                            else
                                                                int64_t* rax_93 =
                                                                    sub_140cdd170(r15_3, &result_17)
                                                                int16_t* const rcx_142
                                                                
                                                                if (rax_93[1].d == 0)
                                                                    rcx_142 = &data_142d40450
                                                                else
                                                                    rcx_142 = *rax_93
                                                                
                                                                var_7e8_3.q = rcx_142
                                                                sub_140b1f700(var_758, \t%i: %s %s", 
                                                                    zx.q(rsi_12))
                                                                int64_t result_26 = result_17
                                                                
                                                                if (result_26 != 0)
                                                                    sub_140a74f90(result_26)
                                                            
                                                            int64_t* j_9 = j_3
                                                            
                                                            if (j_9 != 0)
                                                                sub_140a74f90(j_9)
                                                            
                                                            rsi_12 += 1
                                                            r14_13 += rax_91
                                                        while (rsi_12 s< r12_10)
                                                        
                                                        rbx_18 = var_768
                                                        rdi_13 = var_790_2
                                                    
                                                    result_14 = result_2
                                                else
                                                    int32_t var_72c_1 = 0
                                                    int16_t* result_21 = nullptr
                                                    result_16 = nullptr
                                                    int32_t rcx_118 = 0
                                                    int32_t var_730_1 = 0
                                                    int32_t j = 0
                                                    
                                                    if (rdx_69 s> 0)
                                                        do
                                                            int64_t rax_82 =
                                                                sx.q(*(result_14 + 0x4c))
                                                            int32_t rcx_120 =
                                                                j * *(result_14 + 0x3c)
                                                            result_30.d = 0x20000
                                                            var_7e8_3.q = r15_3
                                                            sub_140cdb3d0(result_14, &result_16, 
                                                                sx.q(rcx_120) + rax_82 + r15_3, 
                                                                sx.q(rcx_120) + rax_82 + r15_3, 
                                                                var_7e8_3, result_30.d, 0)
                                                            j += 1
                                                        while (j s< result_14[7].d)
                                                        
                                                        rcx_118 = var_730_1
                                                        result_21 = result_16
                                                        rdi_13 = var_790_2
                                                    
                                                    int16_t* rcx_132
                                                    
                                                    if (r14_10 == 0)
                                                        int16_t* r14_11 = &data_142d40450
                                                        int16_t* result_31 = &data_142d40450
                                                        
                                                        if (rcx_118 != 0)
                                                            result_31 = result_21
                                                        
                                                        sub_140b63b70(&result_14[5], &var_6f0)
                                                        
                                                        if (var_6e8 != 0)
                                                            r14_11 = var_6f0
                                                        
                                                        int64_t var_690
                                                        int64_t* rax_85 =
                                                            sub_140d21830(r15_3, &var_690, 0, 0)
                                                        
                                                        if (rax_85[1].d != 0)
                                                            *rax_85
                                                        
                                                        result_30 = result_31
                                                        var_7e8_3.q = r14_11
                                                        sub_140b1f700(var_758, %i) %s.%s = %s", 
                                                            zx.q(r12_4))
                                                        int64_t rcx_131 = var_690
                                                        var_7c4_1 = r12_4 + 1
                                                        
                                                        if (rcx_131 != 0)
                                                            sub_140a74f90(rcx_131)
                                                        
                                                        rcx_132 = var_6f0
                                                    else
                                                        int16_t* var_6a0
                                                        int64_t* rax_83 =
                                                            sub_140cdd170(r15_3, &var_6a0)
                                                        int16_t* const r12_7 = &data_142d40450
                                                        int16_t* const rsi_8
                                                        
                                                        if (rax_83[1].d == 0)
                                                            rsi_8 = &data_142d40450
                                                        else
                                                            rsi_8 = *rax_83
                                                        
                                                        int16_t* result_29 = &data_142d40450
                                                        
                                                        if (var_730_1 != 0)
                                                            result_29 = result_16
                                                        
                                                        sub_140b63b70(&result_14[5], &var_6e0)
                                                        int32_t var_6d8
                                                        
                                                        if (var_6d8 != 0)
                                                            r12_7 = var_6e0
                                                        
                                                        int64_t var_6b0
                                                        int64_t* rax_84 =
                                                            sub_140d21830(r15_3, &var_6b0, 0, 0)
                                                        
                                                        if (rax_84[1].d != 0)
                                                            *rax_84
                                                        
                                                        int16_t* const var_7d8_3 = rsi_8
                                                        result_30 = result_29
                                                        var_7e8_3.q = r12_7
                                                        sub_140b1f700(var_758, %i) %s.%s = %s %s", 
                                                            zx.q(var_7c4_1))
                                                        int64_t rcx_126 = var_6b0
                                                        var_7c4_1 += 1
                                                        
                                                        if (rcx_126 != 0)
                                                            sub_140a74f90(rcx_126)
                                                        
                                                        int16_t* rcx_127 = var_6e0
                                                        
                                                        if (rcx_127 != 0)
                                                            sub_140a74f90(rcx_127)
                                                        
                                                        rcx_132 = var_6a0
                                                    
                                                    if (rcx_132 != 0)
                                                        sub_140a74f90(rcx_132)
                                                    
                                                    int16_t* result_25 = result_16
                                                    
                                                    if (result_25 != 0)
                                                        sub_140a74f90(result_25)
                                                r14_10 = rax_62
                                                rsi_6 = rax_60
                                            else if (r14_10 == 0)
                                                int64_t* rax_80 =
                                                    sub_140d21830(r15_3, &result_18, 0, 0)
                                                
                                                if (rax_80[1].d != 0)
                                                    *rax_80
                                                
                                                sub_140b1f700(var_758, u"%i) %s", zx.q(r12_4))
                                                int16_t* result_24 = result_18
                                                var_7c4_1 = r12_4 + 1
                                                
                                                if (result_24 != 0)
                                                    sub_140a74f90(result_24)
                                            else
                                                int64_t* rax_78 = sub_140cdd170(r15_3, &var_6d0)
                                                int16_t* const rsi_7
                                                
                                                if (rax_78[1].d == result_14.d)
                                                    rsi_7 = &data_142d40450
                                                else
                                                    rsi_7 = *rax_78
                                                
                                                int64_t* rax_79 =
                                                    sub_140d21830(r15_3, &var_6c0, 0, 0)
                                                
                                                if (rax_79[1].d != 0)
                                                    *rax_79
                                                
                                                var_7e8_3.q = rsi_7
                                                sub_140b1f700(var_758, u"%i) %s %s", zx.q(r12_4))
                                                int16_t* rcx_113 = var_6c0
                                                var_7c4_1 = r12_4 + 1
                                                
                                                if (rcx_113 != 0)
                                                    sub_140a74f90(rcx_113)
                                                
                                                int16_t* rcx_114 = var_6d0
                                                
                                                if (rcx_114 != 0)
                                                    sub_140a74f90(rcx_114)
                                                
                                                rsi_6 = rax_60
                            
                            sub_140cd6b60(&var_670)
                            i_1 = i_6
                            r12_4 = var_7c4_1
                        while (i_1 != 0)
                        
                        result.b = 1
                else
                    result.b = 1
    else
        var_750 = nullptr
        int32_t var_748_1 = 0
        
        if (sub_140b297e0(rcx_8, &var_648, 0x100, 1).b != 0)
            result = sub_140d2ee50(sub_140bdf2e0(), -ffffffffffffffff, &var_648, 0)
            result_2 = result
            
            if (result != 0 && sub_140b295a0(&var_7c0, &var_750, 1).b != 0)
                int64_t r13_1 = var_768
                int32_t i_12 = 0
                var_788 = nullptr
                int32_t i_11 = 0
                int32_t rdi_1 = 0
                int32_t var_77c_1 = 0
                int32_t var_7b0
                int32_t var_7ac
                
                while (true)
                    int32_t rax_7 = sub_140a23cf0(&var_750, &data_142d6bbe8, 1, 0, 0xffffffff)
                    int32_t rax_8 = sub_140a23cf0(&var_750, &data_142e5f8f8, 1, 0, 0xffffffff)
                    
                    if (rax_7 == 0xffffffff)
                        if (rax_8 != rax_7)
                            goto label_140cea6ed
                        
                        break
                    
                    int32_t rax_24
                    int32_t rcx_24
                    int32_t rbx_4
                    
                    if (rax_8 == 0xffffffff || rax_8 s> rax_7)
                        i_11 = i_12 + 1
                        
                        if (i_12 + 1 s> rdi_1)
                            sub_1405a4df0(&var_788)
                            i_11 = i_12 + 1
                        
                        void* rsi_3 = &var_788[sx.q(i_12) * 3]
                        
                        if (rsi_3 != 0)
                            r15 |= 1
                            int32_t rdi_6
                            int16_t* r14_2
                            
                            if (var_748_1 == 0)
                                r14_2 = &data_142d40450
                                rdi_6 = 0
                            else
                                r14_2 = var_750
                                rdi_6 = var_748_1 - 1
                            
                            if (rax_7 s< 0)
                                rdi_6 = 0
                            else if (rax_7 s< rdi_6)
                                rdi_6 = rax_7
                            
                            var_768 = 0
                            r13_1 = 0
                            int64_t var_760_1 = 0
                            int32_t rbx_5 = 0
                            int32_t rax_22 = 0
                            
                            if (r14_2 != 0 && *r14_2 != 0 && rdi_6 s> 0)
                                if (rdi_6 + 1 s> 0)
                                    sub_1405947f0(&var_768, rdi_6 + 1)
                                    rax_22 = var_760_1:4.d
                                    rbx_5 = var_760_1.d
                                    r13_1 = var_768
                                
                                rbx_5 += rdi_6 + 1
                                var_760_1.d = rbx_5
                                
                                if (rbx_5 s> rax_22)
                                    sub_140594770(&var_768)
                                    rbx_5 = var_760_1.d
                                    r13_1 = var_768
                                
                                UnDecorator::getReferenceType(r13_1, r14_2, rdi_6 * 2)
                                *(r13_1 + (sx.q(rbx_5) << 1) - 2) = 0
                            
                            *rsi_3 = 0
                            *(rsi_3 + 8) = rbx_5
                            
                            if (rbx_5 != 0)
                                sub_1405a4c70(rsi_3, rbx_5, 0)
                                memcpy(*rsi_3, r13_1, rbx_5 * 2)
                            else
                                *(rsi_3 + 0xc) = 0
                            
                            *(rsi_3 + 0x10) = 1
                        
                        if ((r15.b & 1) != 0)
                            r15 &= 0xfffffffe
                            
                            if (r13_1 != 0)
                                sub_140a74f90(r13_1)
                        
                        rax_24 = var_748_1
                        int32_t rdx_26 = rax_24 - 1
                        
                        if (rax_24 == 0)
                            rdx_26 = 0
                        
                        int32_t rdx_27 = rdx_26 - rax_7
                        int32_t rcx_33 = rax_24 - 1
                        
                        if (rax_24 == 0)
                            rcx_33 = 0
                        
                        int32_t r8_15
                        
                        if (rdx_27 - 1 s>= 0)
                            r8_15 = rcx_33
                            
                            if (rdx_27 s<= rcx_33)
                                r8_15 = rdx_27 - 1
                        else
                            r8_15 = 0
                        
                        rcx_24 = rcx_33 - r8_15
                        rbx_4 = rax_24 - 1
                        
                        if (rax_24 == 0)
                            rbx_4 = 0
                    else
                    label_140cea6ed:
                        i_11 = i_12 + 1
                        
                        if (i_12 + 1 s> rdi_1)
                            sub_1405a4df0(&var_788)
                            i_11 = i_12 + 1
                        
                        void* rsi_2 = &var_788[sx.q(i_12) * 3]
                        
                        if (rsi_2 != 0)
                            r15 |= 2
                            int32_t rdi_4
                            int16_t* r12_2
                            
                            if (var_748_1 == 0)
                                r12_2 = &data_142d40450
                                rdi_4 = 0
                            else
                                r12_2 = var_750
                                rdi_4 = var_748_1 - 1
                            
                            if (rax_8 s< 0)
                                rdi_4 = 0
                            else if (rax_8 s< rdi_4)
                                rdi_4 = rax_8
                            
                            result_1 = nullptr
                            int32_t rbx_2 = 0
                            var_7b0.q = 0
                            int32_t rax_17 = 0
                            int16_t* result_13
                            
                            if (r12_2 == 0 || *r12_2 == 0 || rdi_4 s<= 0)
                                result_13 = result_1
                            else
                                if (rdi_4 + 1 s> 0)
                                    sub_1405947f0(&result_1, rdi_4 + 1)
                                    rax_17 = var_7ac
                                    rbx_2 = var_7b0
                                
                                rbx_2 += rdi_4 + 1
                                var_7b0 = rbx_2
                                
                                if (rbx_2 s> rax_17)
                                    sub_140594770(&result_1)
                                    rbx_2 = var_7b0
                                
                                result_13 = result_1
                                UnDecorator::getReferenceType(result_13, r12_2, rdi_4 * 2)
                                result_13[sx.q(rbx_2) - 1] = 0
                            
                            *rsi_2 = 0
                            *(rsi_2 + 8) = rbx_2
                            
                            if (rbx_2 != 0)
                                sub_1405a4c70(rsi_2, rbx_2, 0)
                                memcpy(*rsi_2, result_13, rbx_2 * 2)
                            else
                                *(rsi_2 + 0xc) = 0
                            
                            *(rsi_2 + 0x10) = 0
                        
                        if ((r15.b & 2) != 0)
                            int16_t* result_4 = result_1
                            r15 &= 0xfffffffd
                            
                            if (result_4 != 0)
                                sub_140a74f90(result_4)
                        
                        rax_24 = var_748_1
                        int32_t rdx_17 = rax_24 - 1
                        
                        if (rax_24 == 0)
                            rdx_17 = 0
                        
                        int32_t rdx_18 = rdx_17 - rax_8
                        int32_t rcx_23 = rax_24 - 1
                        
                        if (rax_24 == 0)
                            rcx_23 = 0
                        
                        int32_t r8_10
                        
                        if (rdx_18 - 1 s>= 0)
                            r8_10 = rcx_23
                            
                            if (rdx_18 s<= rcx_23)
                                r8_10 = rdx_18 - 1
                        else
                            r8_10 = 0
                        
                        rcx_24 = rcx_23 - r8_10
                        
                        if (rax_24 == 0)
                            rbx_4 = 0
                        else
                            rbx_4 = rax_24 - 1
                    
                    rdi_1 = var_77c_1
                    
                    if (rcx_24 s>= 0)
                        if (rcx_24 s< rbx_4)
                            rbx_4 = rcx_24
                        
                        if (rbx_4 != 0)
                            if (rax_24 != rbx_4)
                                int16_t* rcx_36 = var_750
                                memmove(rcx_36, &rcx_36[sx.q(rbx_4)], (rax_24 - rbx_4) * 2)
                                rax_24 = var_748_1
                            
                            rdi_1 = var_77c_1
                            var_748_1 = rax_24 - rbx_4
                    
                    i_12 = i_11
                
                int32_t r15_1 = var_748_1 - 1
                
                if (var_748_1 == 0)
                    r15_1 = 0
                
                int32_t var_790_1 = r15_1
                
                if (r15_1 s> 0)
                    i_11 = i_12 + 1
                    
                    if (i_12 + 1 s> rdi_1)
                        sub_1405a4df0(&var_788)
                        i_11 = i_12 + 1
                    
                    int64_t* rbx_1 = &var_788[sx.q(i_12) * 3]
                    
                    if (rbx_1 != 0)
                        *rbx_1 = 0
                        int16_t* rsi_1 = var_750
                        rbx_1[1].d = var_748_1
                        
                        if (var_748_1 != 0)
                            sub_1405a4c70(rbx_1, var_748_1, 0)
                            memcpy(*rbx_1, rsi_1, var_748_1 * 2)
                        else
                            *(rbx_1 + 0xc) = 0
                        
                        rbx_1[2].b = 0
                
                var_740.d = 0
                int64_t result_11 = result_2
                result_17 = result_11
                int32_t var_718_1 = 0xffffffff
                int16_t var_714_1 = 0x101
                void* i_5 = *(result_11 + 0x50)
                char var_712_1 = 0
                sub_1406328d0(&result_17)
                void* i_2 = i_5
                int32_t var_7e8_2
                int64_t var_798
                int32_t var_730
                int32_t var_708
                
                if (i_2 != 0)
                    uint64_t j_2 = 0
                    
                    do
                        sub_140b63b70(*(i_2 + 8), &result_1)
                        *(i_2 + 0x4c)
                        int16_t* const result_10 = &data_142d40450
                        
                        if (var_7b0 != 0)
                            result_10 = result_1
                        
                        sub_140b63b70(i_2 + 0x28, &result_16)
                        int16_t* const result_15 = result_10
                        int16_t* const result_27 = &data_142d40450
                        
                        if (var_730 != 0)
                            result_27 = result_16
                        
                        var_7e0.d = *(i_2 + 0x3c)
                        var_7e8_2 = *(i_2 + 0x38)
                        sub_140a2e390(&result_18, %s at offset %d; %dx %d bytes of type %s", 
                            result_27)
                        int16_t* const result_28 = &data_142d40450
                        
                        if (var_708 != 0)
                            result_28 = result_18
                        
                        sub_140b1f700(var_758, u"    Prop %s", result_28)
                        int16_t* result_22 = result_18
                        
                        if (result_22 != 0)
                            sub_140a74f90(result_22)
                        
                        int16_t* result_23 = result_16
                        
                        if (result_23 != 0)
                            sub_140a74f90(result_23)
                        
                        int16_t* result_6 = result_1
                        
                        if (result_6 != 0)
                            sub_140a74f90(result_6)
                        
                        uint64_t rdi_8 = *(i_2 + 0x40)
                        wchar16 const (** r14_3)[0x9] = &data_1439aa0d0
                        int32_t rdx_33 = j_2.d
                        j_3 = j_2
                        int64_t* j_5 = j_2
                        var_798:4.d = rdx_33
                        int32_t rcx_44 = j_2.d
                        j_2 = 0x38
                        uint64_t j_1
                        
                        do
                            wchar16 const (* r12_3)[0x9] = *r14_3
                            
                            if ((rdi_8.b & 1) != 0)
                                int64_t rbx_7 = sx.q(rcx_44)
                                rcx_44 = (rbx_7 + 1).d
                                var_798.d = rcx_44
                                
                                if (rcx_44 s> rdx_33)
                                    sub_1405a4d70(&j_3)
                                    rdx_33 = var_798:4.d
                                    rcx_44 = var_798.d
                                    j_5 = j_3
                                
                                j_5[rbx_7] = r12_3
                            
                            rdi_8 u>>= 1
                            r14_3 = &r14_3[1]
                            j_1 = j_2
                            j_2 -= 1
                        while (j_1 != 1)
                        uint64_t j_4 = j_2
                        int64_t* j_10 = j_5
                        void* rcx_46 = &j_5[sx.q(rcx_44)]
                        uint64_t j_6 = (rcx_46 - j_5 + 7) u>> 3
                        
                        if (j_5 u> rcx_46)
                            j_6 = j_2
                        
                        if (j_6 != 0)
                            do
                                sub_140b1f700(var_758, u"      Flag %s", *j_10)
                                j_4 += 1
                                j_10 = &j_10[1]
                            while (j_4 != j_6)
                            
                            i_2 = i_5
                        
                        if (j_5 != 0)
                            sub_140a74f90(j_5)
                        
                        i_5 = *(i_2 + 0x20)
                        sub_1406328d0(&result_17)
                        i_2 = i_5
                    while (i_2 != 0)
                    
                    result_11 = result_2
                    r15_1 = var_790_1
                
                void* i_7 = *(result_11 + 0x50)
                result_17 = result_11
                int32_t var_718_2 = 0xffffffff
                int16_t var_714_2 = 0x101
                char var_712_2 = 0
                sub_1406328d0(&result_17)
                void* i_3 = i_7
                int32_t i_10 = i_11
                
                if (i_3 == 0)
                    sub_140b1f640(var_758, u"- No matches")
                else
                    int32_t rbx_14
                    
                    do
                        sub_140b63b70(i_3 + 0x28, &result_2)
                        int32_t var_770
                        int32_t rdx_36 = var_770
                        int32_t rbx_8 = 0
                        int64_t* r14_7 = var_788
                        int32_t rsi_4 = 0
                        int64_t rdi_9 = 0
                        int64_t* rax_32
                        
                        if (i_10 s<= 0)
                        label_140cead63:
                            bool cond:3_1
                            
                            if (r15_1 s> 0)
                                if (rdx_36 == 0)
                                    cond:3_1 = true
                                else
                                    cond:3_1 = rdx_36 == 1
                                
                                goto label_140cead99
                            
                            if (r14_7[sx.q(i_10 - 1) * 3 + 2].b != 0)
                            label_140ceada4:
                                result_1 = nullptr
                                int16_t* result_12 = nullptr
                                var_7b0.q = 0
                                int32_t rdi_10 = 0
                                int32_t r15_2 = 0
                                
                                if (i_3 == 0)
                                label_140ceb058:
                                    sub_140b63b70(*(i_3 + 8), &result_18)
                                    result_12 = result_18
                                    rdi_10 = var_708
                                    int32_t var_704
                                    var_7ac = var_704
                                    var_708.q = 0
                                    result_18 = nullptr
                                else
                                    int64_t rcx_57 = *(*(i_3 + 8) + 0x10)
                                    
                                    if (((rcx_57 u>> 0x14).b & 1) != 0)
                                        var_768 = *(*(i_3 + 0x78) + 0x18)
                                        sub_140b63b70(&var_768, &var_6d0)
                                        int16_t* const r14_8 = &data_142d40450
                                        int32_t var_6c8
                                        
                                        if (var_6c8 != 0)
                                            r14_8 = var_6d0
                                        
                                        if (r14_8 != 0)
                                            if (*r14_8 != 0)
                                                int64_t rbx_11 = -1
                                                
                                                do
                                                    rbx_11 += 1
                                                while (r14_8[rbx_11] != 0)
                                                
                                                rbx_8 = rbx_11.d + 1
                                            
                                            if (rbx_8 != 0)
                                                sub_1405947f0(&result_1, rbx_8)
                                                r15_2 = var_7ac
                                                rdi_10 = var_7b0
                                                result_12 = result_1
                                            
                                            rdi_10 += rbx_8
                                            
                                            if (rdi_10 s> r15_2)
                                                sub_140594770(&result_1)
                                                result_12 = result_1
                                            
                                            if (rbx_8 != 0)
                                                memcpy(result_12, r14_8, rbx_8 * 2)
                                        
                                        int16_t* rcx_63 = var_6d0
                                        
                                        if (rcx_63 != 0)
                                            sub_140a74f90(rcx_63)
                                    else if (((rcx_57 u>> 0xa).b & 1) != 0)
                                        var_768 = *(*(i_3 + 0x80) + 0x18)
                                        sub_140b63b70(&var_768, &var_6c0)
                                        int16_t* const r8_28 = &data_142d40450
                                        int32_t var_6b8
                                        
                                        if (var_6b8 != 0)
                                            r8_28 = var_6c0
                                        
                                        sub_140a2e390(&j_3, u"SubclassOf<%s>", r8_28)
                                        int16_t* rcx_67 = var_6c0
                                        result_12 = j_3
                                        rdi_10 = var_798.d
                                        j_3 = nullptr
                                        var_7ac = var_798:4.d
                                        var_798 = 0
                                        
                                        if (rcx_67 != 0)
                                            sub_140a74f90(rcx_67)
                                    else if (((rcx_57 u>> 0x21).b & 1) == 0)
                                        if (((rcx_57 u>> 0x1a).b & 1) == 0)
                                            goto label_140ceb058
                                        
                                        var_768 = *(*(i_3 + 0x78) + 0x18)
                                        sub_140b63b70(&var_768, &var_6f0)
                                        int16_t* const r14_9 = &data_142d40450
                                        
                                        if (var_6e8 != 0)
                                            r14_9 = var_6f0
                                        
                                        if (r14_9 != 0)
                                            if (*r14_9 != 0)
                                                int64_t rbx_12 = -1
                                                
                                                do
                                                    rbx_12 += 1
                                                while (r14_9[rbx_12] != 0)
                                                
                                                rbx_8 = rbx_12.d + 1
                                            
                                            if (rbx_8 != 0)
                                                sub_1405947f0(&result_1, rbx_8)
                                                r15_2 = var_7ac
                                                rdi_10 = var_7b0
                                                result_12 = result_1
                                            
                                            rdi_10 += rbx_8
                                            
                                            if (rdi_10 s> r15_2)
                                                sub_140594770(&result_1)
                                                result_12 = result_1
                                            
                                            if (rbx_8 != 0)
                                                memcpy(result_12, r14_9, rbx_8 * 2)
                                        
                                        int16_t* rcx_78 = var_6f0
                                        
                                        if (rcx_78 != 0)
                                            sub_140a74f90(rcx_78)
                                    else
                                        var_768 = *(*(i_3 + 0x80) + 0x18)
                                        sub_140b63b70(&var_768, &var_700)
                                        int16_t* const r8_29 = &data_142d40450
                                        
                                        if (var_6f8 != 0)
                                            r8_29 = var_700
                                        
                                        sub_140a2e390(&result_16, u"SoftClassPtr<%s>", r8_29)
                                        int16_t* rcx_71 = var_700
                                        result_12 = result_16
                                        rdi_10 = var_730
                                        result_16 = nullptr
                                        int32_t var_72c
                                        var_7ac = var_72c
                                        var_730.q = 0
                                        
                                        if (rcx_71 != 0)
                                            sub_140a74f90(rcx_71)
                                
                                int16_t* result_20 = &data_142d40450
                                
                                if (rdi_10 != 0)
                                    result_20 = result_12
                                
                                sub_140b63b70(i_3 + 0x28, &var_6e0)
                                var_7e8_2.q = result_20
                                int32_t rbx_13 = var_740.d
                                sub_140b1f700(var_758, u"%i) %s (%s)", zx.q(rbx_13))
                                int16_t* rcx_82 = var_6e0
                                
                                if (rcx_82 != 0)
                                    sub_140a74f90(rcx_82)
                                
                                rbx_14 = rbx_13 + 1
                                var_740.d = rbx_14
                                
                                if (result_12 != 0)
                                    sub_140a74f90(result_12)
                            else
                                int32_t rdx_41
                                
                                if (rdx_36 == 0)
                                    rdx_41 = 0
                                else
                                    rdx_41 = rdx_36 - 1
                                
                                cond:3_1 = rdx_41 == 1
                            label_140cead99:
                                rax_32.b = cond:3_1
                                
                                if (rax_32.b != 0)
                                    goto label_140ceada4
                                
                                rbx_14 = var_740.d
                        else
                            while (true)
                                rax_32 = rdi_9 * 3
                                int32_t rcx_52 = r14_7[rax_32 + 1].d
                                int16_t** rbx_9 = &r14_7[rax_32]
                                
                                if (rcx_52 != 0 && rcx_52 - 1 s> 0)
                                    int16_t* rdx_37
                                    
                                    if (rcx_52 == 0)
                                        rdx_37 = &data_142d40450
                                    else
                                        rdx_37 = *rbx_9
                                    
                                    int32_t rax_33 =
                                        sub_140a23cf0(&result_2, rdx_37, 1, 0, 0xffffffff)
                                    
                                    if (rax_33 == 0xffffffff)
                                        break
                                    
                                    bool cond:11_1
                                    
                                    if (rdi_9 == 0)
                                        cond:11_1 = rax_33 != 0
                                    label_140ceacd0:
                                        
                                        if (cond:11_1)
                                            break
                                    else if (rdi_9 s> 0 && r14_7[rdi_9 * 3 - 1].b == 0)
                                        cond:11_1 = rax_33 != 1
                                        goto label_140ceacd0
                                    rdx_36 = var_770
                                    int32_t r8_21 = rdx_36 - 1
                                    
                                    if (rdx_36 == 0)
                                        r8_21 = 0
                                    
                                    int32_t rax_35 = rbx_9[1].d
                                    int32_t rcx_54 = rax_35 - 1
                                    
                                    if (rax_35 == 0)
                                        rcx_54 = 0
                                    
                                    int32_t rax_36 = rdx_36 - 1
                                    int32_t r8_23 = r8_21 - rcx_54 - rax_33
                                    
                                    if (rdx_36 == 0)
                                        rax_36 = 0
                                    
                                    int32_t rcx_55
                                    
                                    if (r8_23 s>= 0)
                                        rcx_55 = rax_36
                                        
                                        if (r8_23 s< rax_36)
                                            rcx_55 = r8_23
                                    else
                                        rcx_55 = 0
                                    
                                    rax_32 = zx.q(rax_36 - rcx_55)
                                    int32_t rbx_10 = rdx_36 - 1
                                    
                                    if (rdx_36 == 0)
                                        rbx_10 = 0
                                    
                                    if (rax_32.d s>= 0)
                                        if (rax_32.d s< rbx_10)
                                            rbx_10 = rax_32.d
                                        
                                        if (rbx_10 != 0)
                                            if (rdx_36 != rbx_10)
                                                int64_t result_7 = result_2
                                                memmove(result_7, result_7 + (sx.q(rbx_10) << 1), 
                                                    (rdx_36 - rbx_10) * 2)
                                                rdx_36 = var_770
                                            
                                            rdx_36 -= rbx_10
                                            var_770 = rdx_36
                                
                                rsi_4 += 1
                                rdi_9 += 1
                                
                                if (rsi_4 s>= i_10)
                                    rbx_8 = 0
                                    goto label_140cead63
                            
                            rbx_14 = var_740.d
                        int64_t result_8 = result_2
                        
                        if (result_8 != 0)
                            sub_140a74f90(result_8)
                        
                        void* i_8 = *(i_3 + 0x20)
                        sub_1406328d0(&result_17)
                        i_3 = i_8
                        r15_1 = var_790_1
                    while (i_3 != 0)
                    
                    if (rbx_14 == 0)
                        sub_140b1f640(var_758, u"- No matches")
                
                int64_t* rdi_11 = var_788
                int64_t* rbx_15 = rdi_11
                
                if (i_10 != 0)
                    int32_t i_4
                    
                    do
                        int64_t rcx_86 = *rbx_15
                        
                        if (rcx_86 != 0)
                            sub_140a74f90(rcx_86)
                        
                        rbx_15 = &rbx_15[3]
                        i_4 = i_10
                        i_10 -= 1
                    while (i_4 != 1)
                
                if (rdi_11 != 0)
                    sub_140a74f90(rdi_11)
        
        int16_t* rcx_88 = var_750
        
        if (rcx_88 == 0)
            result.b = 1
        else
            sub_140a74f90(rcx_88)
            result.b = 1
else if (sub_140b297e0(rcx_1, &var_448, 0x100, 1).b == 0)
    result.b = 1
else
    result = sub_140d2ee50(sub_140bdf2e0(), -ffffffffffffffff, &var_448, 0)
    int64_t result_3 = result
    
    if (result == 0)
        result.b = 1
    else if (sub_140b297e0(&var_7c0, &var_648, 0x100, 1).b == 0)
        result.b = 1
    else
        sub_140b58260(&var_768, &var_648, 0)
        result = sub_140bd3220(result_3, var_768)
        
        if (result == 0)
            result.b = 1
        else
            int64_t rdx_4 = *(result_3 + 0x118)
            j_3 = nullptr
            int32_t var_798_1 = 0
            int16_t* const j_7
            
            if (rdx_4 != 0 && *(result_3 + 0x58) != 0)
                int64_t rax_4 = sx.q(*(result + 0x4c))
                var_7e0.d = 0x20000
                var_7e8.q = result_3
                (*(*result + 0xa0))(result, &j_3, rdx_4 + rax_4, rdx_4 + rax_4, var_7e8, var_7e0, 0)
                j_7 = j_3
            
            if (rdx_4 == 0 || *(result_3 + 0x58) == 0 || var_798_1 == 0)
                j_7 = &data_142d40450
            
            sub_140b1f640(rsi, j_7)
            int64_t* j_8 = j_3
            
            if (j_8 == 0)
                result.b = 1
            else
                sub_140a74f90(j_8)
                result.b = 1
__security_check_cookie(rax_1 ^ &var_808)
return result
