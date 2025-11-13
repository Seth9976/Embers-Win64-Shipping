// 函数: sub_1429a4050
// 地址: 0x1429a4050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int32_t r13 = arg4
int64_t r14 = sx.q(arg6)
int64_t r11 = arg3
int64_t r10 = sx.q(arg11)
int64_t rsi = sx.q(arg8)
uint64_t result = arg15
uint64_t result_2 = result
int32_t var_e4 = r14.d
int32_t var_d8 = arg10
int32_t result_1 = r10.d
struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject
uint128_t zmm0

if (arg16 == 0)
    if (arg18 != 1)
        int32_t var_c0
        
        if (arg19 == 0)
            if (arg20 == 0)
                int64_t r9_40 = sx.q(arg7)
                
                if (r9_40 s<= rsi)
                    int32_t r9_42 = (r9_40.d - arg9) * r13
                    int64_t* r10_43 = (r9_40 - r10) * arg14 + arg2 + (r14 - sx.q(arg12)) * result_2
                    int64_t i_41 = rsi - r9_40 + 1
                    int64_t i
                    
                    do
                        char* rdx_111 = *r10_43
                        result = sx.q(r9_42) + r11
                        int64_t rcx_87 = sx.q(*(result + sx.q((r14.d - arg10) * arg5)))
                        
                        if (rdx_111 == 0)
                            result = rcx_87 << 2
                            *arg1 += result
                        else if (rcx_87.d s> 0)
                            uint64_t j_27 = zx.q(rcx_87.d)
                            uint64_t j
                            
                            do
                                *rdx_111 = **arg1
                                rdx_111[1] = *(*arg1 + 1)
                                rdx_111[2] = *(*arg1 + 2)
                                result = *arg1
                                rdx_111[3] = *(result + 3)
                                rdx_111 = &rdx_111[arg13]
                                *arg1 += 4
                                j = j_27
                                j_27 -= 1
                            while (j != 1)
                        
                        r9_42 += r13
                        r10_43 += arg14
                        i = i_41
                        i_41 -= 1
                    while (i != 1)
            else if (arg20 == 1)
                int64_t r8_67 = sx.q(arg7)
                
                if (r8_67 s<= rsi)
                    int32_t r8_69 = (r8_67.d - arg9) * r13
                    int64_t r15_37 = sx.q((r14.d - arg10) * arg5)
                    var_c0.q = r15_37
                    int32_t var_e4_6 = r8_69
                    int64_t* r9_39 =
                        (r8_67 - sx.q(result_1)) * arg14 + arg2 + (r14 - sx.q(arg12)) * result_2
                    int64_t* var_d0_9 = r9_39
                    int64_t i_40 = rsi - r8_67 + 1
                    int64_t i_1
                    
                    do
                        int32_t* r14_41 = *r9_39
                        result = sx.q(r8_69) + r11
                        int64_t rcx_84 = sx.q(*(result + r15_37))
                        
                        if (r14_41 == 0)
                            result = rcx_84 * 2
                            *arg1 += result
                        else if (rcx_84.d s> 0)
                            uint64_t j_41 = zx.q(rcx_84.d)
                            uint64_t j_1
                            
                            do
                                result = sub_1429bd110(**arg1)
                                *r14_41 = result.d
                                r14_41 += arg13
                                *arg1 += 2
                                j_1 = j_41
                                j_41 -= 1
                            while (j_1 != 1)
                            r8_69 = var_e4_6
                            r9_39 = var_d0_9
                            r11 = arg3
                            r15_37 = var_c0.q
                        
                        r8_69 += r13
                        r9_39 += arg14
                        var_e4_6 = r8_69
                        var_d0_9 = r9_39
                        i_1 = i_40
                        i_40 -= 1
                    while (i_1 != 1)
            else
                if (arg20 != 2)
                    sub_14297d3f0(&exceptionObject, "Unknown pixel data type.")
                    _CxxThrowException(&exceptionObject, &data_143946538)
                    noreturn
                
                int64_t r8_64 = sx.q(arg7)
                
                if (r8_64 s<= rsi)
                    int32_t r8_66 = (r8_64.d - arg9) * r13
                    int64_t r15_36 = sx.q((r14.d - arg10) * arg5)
                    var_c0.q = r15_36
                    int32_t var_e4_5 = r8_66
                    int64_t* r9_35 =
                        (r8_64 - sx.q(result_1)) * arg14 + arg2 + (r14 - sx.q(arg12)) * result_2
                    int64_t* var_d0_8 = r9_35
                    int64_t i_39 = rsi - r8_64 + 1
                    int64_t i_2
                    
                    do
                        int32_t* r14_40 = *r9_35
                        result = sx.q(r8_66) + r11
                        int64_t rdx_104 = sx.q(*(result + r15_36))
                        
                        if (r14_40 == 0)
                            result = rdx_104 << 2
                            *arg1 += result
                        else if (rdx_104.d s> 0)
                            uint64_t rcx_82 = *arg1
                            uint64_t j_40 = zx.q(rdx_104.d)
                            uint64_t j_2
                            
                            do
                                result_1.b = *rcx_82
                                result_1:1.b = *(rcx_82 + 1)
                                result_1:2.b = *(rcx_82 + 2)
                                result_1:3.b = *(rcx_82 + 3)
                                result = sub_1429bd0b0(result_1.d)
                                *r14_40 = result.d
                                r14_40 += arg13
                                *arg1 += 4
                                rcx_82 = *arg1
                                j_2 = j_40
                                j_40 -= 1
                            while (j_2 != 1)
                            r8_66 = var_e4_5
                            r9_35 = var_d0_8
                            r11 = arg3
                            r15_36 = var_c0.q
                        
                        r8_66 += r13
                        r9_35 += arg14
                        var_e4_5 = r8_66
                        var_d0_8 = r9_35
                        i_2 = i_39
                        i_39 -= 1
                    while (i_2 != 1)
        else if (arg19 != 1)
            if (arg19 != 2)
                sub_14297d3f0(&exceptionObject, "Unknown pixel data type.")
                _CxxThrowException(&exceptionObject, &data_143946538)
                noreturn
            
            if (arg20 == 0)
                int64_t r9_18 = sx.q(arg7)
                
                if (r9_18 s<= rsi)
                    int32_t r9_20 = (r9_18.d - arg9) * r13
                    int64_t* r10_31 = (r9_18 - r10) * arg14 + arg2 + (r14 - sx.q(arg12)) * result_2
                    int64_t i_35 = rsi - r9_18 + 1
                    int64_t i_3
                    
                    do
                        int32_t* rdx_87 = *r10_31
                        result = sx.q(r9_20) + r11
                        int64_t r8_56 = sx.q(*(result + sx.q((r14.d - arg10) * arg5)))
                        
                        if (rdx_87 == 0)
                            result = r8_56 << 2
                            *arg1 += result
                        else if (r8_56.d s> 0)
                            uint64_t rcx_64 = *arg1
                            uint64_t j_25 = zx.q(r8_56.d)
                            uint64_t j_3
                            
                            do
                                result_1.b = *rcx_64
                                result_1:1.b = *(rcx_64 + 1)
                                result_1:2.b = *(rcx_64 + 2)
                                char rax_154 = *(rcx_64 + 3)
                                rcx_64 = *arg1 + 4
                                result_1:3.b = rax_154
                                result = zx.q(result_1)
                                *arg1 = rcx_64
                                zmm0.d = float.s(result)
                                *rdx_87 = zmm0.d
                                rdx_87 += arg13
                                j_3 = j_25
                                j_25 -= 1
                            while (j_3 != 1)
                        
                        r9_20 += r13
                        r10_31 += arg14
                        i_3 = i_35
                        i_35 -= 1
                    while (i_3 != 1)
            else if (arg20 == 1)
                int64_t r11_18 = sx.q(arg7)
                
                if (r11_18 s<= rsi)
                    int32_t r11_20 = (r11_18.d - arg9) * r13
                    int64_t* r15_31 = (r11_18 - r10) * arg14 + arg2 + (r14 - sx.q(arg12)) * result_2
                    int64_t i_34 = rsi - r11_18 + 1
                    int64_t i_4
                    
                    do
                        int32_t* rdx_80 = *r15_31
                        result = sx.q(r11_20) + arg3
                        int64_t r8_54 = sx.q(*(result + sx.q((r14.d - arg10) * arg5)))
                        
                        if (rdx_80 == 0)
                            result = r8_54 * 2
                            *arg1 += result
                        else
                            uint32_t r10_27 = 0
                            
                            if (r8_54.d s>= 4)
                                uint64_t rcx_58 = *arg1
                                uint64_t rax_134 = zx.q(((r8_54 - 4).d u>> 2) + 1)
                                uint64_t j_28 = zx.q(rax_134.d)
                                r10_27 = (rax_134 << 2).d
                                uint64_t j_4
                                
                                do
                                    *rdx_80 = *(&data_1436bbc50 + (zx.q(*rcx_58) << 2))
                                    void* rdx_81 = rdx_80 + arg13
                                    *arg1 = rcx_58 + 2
                                    *rdx_81 = *(&data_1436bbc50 + (zx.q(*(rcx_58 + 2)) << 2))
                                    void* rdx_82 = rdx_81 + arg13
                                    *arg1 = rcx_58 + 4
                                    *rdx_82 = *(&data_1436bbc50 + (zx.q(*(rcx_58 + 4)) << 2))
                                    void* rdx_83 = rdx_82 + arg13
                                    *arg1 = rcx_58 + 6
                                    uint64_t rax_141 = zx.q(*(rcx_58 + 6))
                                    rcx_58 += 8
                                    result = zx.q(*(&data_1436bbc50 + (rax_141 << 2)))
                                    *rdx_83 = result.d
                                    rdx_80 = rdx_83 + arg13
                                    *arg1 = rcx_58
                                    j_4 = j_28
                                    j_28 -= 1
                                while (j_4 != 1)
                            
                            if (r10_27 s< r8_54.d)
                                uint64_t rcx_62 = *arg1
                                uint64_t j_24 = zx.q(r8_54.d - r10_27)
                                uint64_t j_5
                                
                                do
                                    uint64_t rax_142 = zx.q(*rcx_62)
                                    rcx_62 += 2
                                    result = zx.q(*(&data_1436bbc50 + (rax_142 << 2)))
                                    *rdx_80 = result.d
                                    rdx_80 += arg13
                                    *arg1 = rcx_62
                                    j_5 = j_24
                                    j_24 -= 1
                                while (j_5 != 1)
                        
                        r11_20 += r13
                        r15_31 += arg14
                        i_4 = i_34
                        i_34 -= 1
                    while (i_4 != 1)
            else
                if (arg20 != 2)
                    sub_14297d3f0(&exceptionObject, "Unknown pixel data type.")
                    _CxxThrowException(&exceptionObject, &data_143946538)
                    noreturn
                
                int64_t r9_15 = sx.q(arg7)
                
                if (r9_15 s<= rsi)
                    int32_t r9_17 = (r9_15.d - arg9) * r13
                    int64_t* r10_26 = (r9_15 - r10) * arg14 + arg2 + (r14 - sx.q(arg12)) * result_2
                    int64_t i_33 = rsi - r9_15 + 1
                    int64_t i_5
                    
                    do
                        char* rdx_76 = *r10_26
                        result = sx.q(r9_17) + r11
                        int64_t rcx_52 = sx.q(*(result + sx.q((r14.d - arg10) * arg5)))
                        
                        if (rdx_76 == 0)
                            result = rcx_52 << 2
                            *arg1 += result
                        else if (rcx_52.d s> 0)
                            uint64_t j_23 = zx.q(rcx_52.d)
                            uint64_t j_6
                            
                            do
                                *rdx_76 = **arg1
                                rdx_76[1] = *(*arg1 + 1)
                                rdx_76[2] = *(*arg1 + 2)
                                result = *arg1
                                rdx_76[3] = *(result + 3)
                                rdx_76 = &rdx_76[arg13]
                                *arg1 += 4
                                j_6 = j_23
                                j_23 -= 1
                            while (j_6 != 1)
                        
                        r9_17 += r13
                        r10_26 += arg14
                        i_5 = i_33
                        i_33 -= 1
                    while (i_5 != 1)
        else if (arg20 == 0)
            int64_t r8_61 = sx.q(arg7)
            
            if (r8_61 s<= rsi)
                int32_t r8_63 = (r8_61.d - arg9) * r13
                int64_t r15_35 = sx.q((r14.d - arg10) * arg5)
                var_c0.q = r15_35
                int32_t var_e4_4 = r8_63
                int64_t* r9_31 =
                    (r8_61 - sx.q(result_1)) * arg14 + arg2 + (r14 - sx.q(arg12)) * result_2
                int64_t* var_d0_7 = r9_31
                int64_t i_38 = rsi - r8_61 + 1
                int64_t i_6
                
                do
                    int16_t* r14_39 = *r9_31
                    result = sx.q(r8_63) + r11
                    int64_t rdx_99 = sx.q(*(result + r15_35))
                    
                    if (r14_39 == 0)
                        result = rdx_99 << 2
                        *arg1 += result
                    else if (rdx_99.d s> 0)
                        uint64_t rcx_76 = *arg1
                        uint64_t j_39 = zx.q(rdx_99.d)
                        uint64_t j_7
                        
                        do
                            result_1.b = *rcx_76
                            result_1:1.b = *(rcx_76 + 1)
                            result_1:2.b = *(rcx_76 + 2)
                            result_1:3.b = *(rcx_76 + 3)
                            result = sub_1429bd160(&var_d8, result_1)
                            *r14_39 = *result
                            r14_39 += arg13
                            *arg1 += 4
                            rcx_76 = *arg1
                            j_7 = j_39
                            j_39 -= 1
                        while (j_7 != 1)
                        r8_63 = var_e4_4
                        r9_31 = var_d0_7
                        r11 = arg3
                        r15_35 = var_c0.q
                    
                    r8_63 += r13
                    r9_31 += arg14
                    var_e4_4 = r8_63
                    var_d0_7 = r9_31
                    i_6 = i_38
                    i_38 -= 1
                while (i_6 != 1)
        else if (arg20 == 1)
            int64_t r9_25 = sx.q(arg7)
            
            if (r9_25 s<= rsi)
                int32_t r9_27 = (r9_25.d - arg9) * r13
                int64_t* r10_36 = (r9_25 - r10) * arg14 + arg2 + (r14 - sx.q(arg12)) * result_2
                int64_t i_37 = rsi - r9_25 + 1
                int64_t i_7
                
                do
                    int16_t* rdx_95 = *r10_36
                    result = sx.q(r9_27) + r11
                    int64_t rcx_73 = sx.q(*(result + sx.q((r14.d - arg10) * arg5)))
                    
                    if (rdx_95 == 0)
                        result = rcx_73 * 2
                        *arg1 += result
                    else if (rcx_73.d s> 0)
                        uint64_t j_26 = zx.q(rcx_73.d)
                        uint64_t j_8
                        
                        do
                            result = *arg1
                            *rdx_95 = *result
                            rdx_95 += arg13
                            *arg1 += 2
                            j_8 = j_26
                            j_26 -= 1
                        while (j_8 != 1)
                    
                    r9_27 += r13
                    r10_36 += arg14
                    i_7 = i_37
                    i_37 -= 1
                while (i_7 != 1)
        else
            if (arg20 != 2)
                sub_14297d3f0(&exceptionObject, "Unknown pixel data type.")
                _CxxThrowException(&exceptionObject, &data_143946538)
                noreturn
            
            int64_t r8_57 = sx.q(arg7)
            
            if (r8_57 s<= rsi)
                int32_t r8_59 = (r8_57.d - arg9) * r13
                int64_t r15_33 = sx.q((r14.d - arg10) * arg5)
                var_c0.q = r15_33
                int32_t var_e4_3 = r8_59
                int64_t* r9_24 =
                    (r8_57 - sx.q(result_1)) * arg14 + arg2 + (r14 - sx.q(arg12)) * result_2
                int64_t* var_d0_6 = r9_24
                int64_t i_36 = rsi - r8_57 + 1
                int64_t i_8
                
                do
                    int16_t* r14_38 = *r9_24
                    result = sx.q(r8_59) + r11
                    int64_t rdx_91 = sx.q(*(result + r15_33))
                    
                    if (r14_38 == 0)
                        result = rdx_91 << 2
                        *arg1 += result
                    else if (rdx_91.d s> 0)
                        uint64_t rcx_69 = *arg1
                        uint64_t j_38 = zx.q(rdx_91.d)
                        uint64_t j_9
                        
                        do
                            result_1.b = *rcx_69
                            result_1:1.b = *(rcx_69 + 1)
                            result_1:2.b = *(rcx_69 + 2)
                            result_1:3.b = *(rcx_69 + 3)
                            result = sub_1429bd040(&var_d8, result_1.d)
                            *r14_38 = *result
                            r14_38 += arg13
                            *arg1 += 4
                            rcx_69 = *arg1
                            j_9 = j_38
                            j_38 -= 1
                        while (j_9 != 1)
                        r8_59 = var_e4_3
                        r9_24 = var_d0_6
                        r11 = arg3
                        r15_33 = var_c0.q
                    
                    r8_59 += r13
                    r9_24 += arg14
                    var_e4_3 = r8_59
                    var_d0_6 = r9_24
                    i_8 = i_36
                    i_36 -= 1
                while (i_8 != 1)
    else if (arg19 == 0)
        if (arg20 == 0)
            int64_t r15_24 = sx.q(arg7)
            
            if (r15_24 s<= rsi)
                int64_t rcx_46 = arg3
                int32_t r15_26 = (r15_24.d - arg9) * r13
                int64_t rax_106 = sx.q((r14.d - var_d8) * arg5)
                int64_t* r11_15 = (r15_24 - r10) * arg14 + arg2 + (r14 - sx.q(arg12)) * result_2
                int64_t* var_d0_4 = r11_15
                int64_t i_32 = rsi - r15_24 + 1
                int64_t i_9
                
                do
                    uint32_t* r11_16 = *r11_15
                    result = sx.q(r15_26) + rcx_46
                    uint64_t rdx_70 = zx.q(*(result + rax_106))
                    
                    if (r11_16 == 0)
                        result = sub_1429a37c0(arg1, (rdx_70 << 2).d)
                        rcx_46 = arg3
                    else if (rdx_70.d s> 0)
                        uint64_t j_33 = zx.q(rdx_70.d)
                        uint64_t j_10
                        
                        do
                            uint64_t rax_110 = *arg1
                            uint32_t r10_22 = zx.d(*rax_110)
                            *arg1 = rax_110 + 1
                            uint32_t r9_14 = zx.d(*(rax_110 + 1))
                            *arg1 = rax_110 + 2
                            uint32_t rdx_71 = zx.d(*(rax_110 + 2))
                            *arg1 = rax_110 + 3
                            result = rax_110 + 4
                            uint32_t r8_47 = zx.d(*(rax_110 + 3)) << 8 | rdx_71
                            *arg1 = result
                            *r11_16 = (r8_47 << 8 | r9_14) << 8 | r10_22
                            r11_16 += arg13
                            j_10 = j_33
                            j_33 -= 1
                        while (j_10 != 1)
                        rcx_46 = arg3
                    
                    r15_26 += r13
                    r11_15 = var_d0_4 + arg14
                    var_d0_4 = r11_15
                    i_9 = i_32
                    i_32 -= 1
                while (i_9 != 1)
        else if (arg20 == 1)
            int64_t r15_21 = sx.q(arg7)
            
            if (r15_21 s<= rsi)
                int32_t r15_23 = (r15_21.d - arg9) * r13
                int64_t rax_96 = sx.q((r14.d - var_d8) * arg5)
                int64_t rcx_42 = rax_96
                int32_t var_e4_2 = r15_23
                int64_t* r14_35 = (r15_21 - r10) * arg14 + arg2 + (r14 - sx.q(arg12)) * result_2
                int64_t* var_d0_3 = r14_35
                int64_t i_31 = rsi - r15_21 + 1
                int64_t i_10
                
                do
                    int32_t* r14_36 = *r14_35
                    result = sx.q(r15_23) + r11
                    int32_t j_44 = *(result + rcx_42)
                    
                    if (r14_36 == 0)
                        result = sub_1429a37c0(arg1, j_44 * 2)
                        rcx_42 = rax_96
                        r11 = arg3
                    else if (j_44 s> 0)
                        uint64_t j_37 = zx.q(j_44)
                        uint64_t j_11
                        
                        do
                            uint64_t rax_100 = *arg1
                            uint16_t rdx_64 = zx.w(*rax_100)
                            *arg1 = rax_100 + 1
                            uint16_t rcx_44 = zx.w(*(rax_100 + 1)) << 8 | rdx_64
                            *arg1 = rax_100 + 2
                            result = sub_1429bd110(rcx_44)
                            *r14_36 = result.d
                            r14_36 += arg13
                            j_11 = j_37
                            j_37 -= 1
                        while (j_11 != 1)
                        r15_23 = var_e4_2
                        rcx_42 = rax_96
                        r11 = arg3
                    
                    r15_23 += r13
                    r14_35 = var_d0_3 + arg14
                    var_e4_2 = r15_23
                    var_d0_3 = r14_35
                    i_10 = i_31
                    i_31 -= 1
                while (i_10 != 1)
        else
            if (arg20 != 2)
                sub_14297d3f0(&exceptionObject, "Unknown pixel data type.")
                _CxxThrowException(&exceptionObject, &data_143946538)
                noreturn
            
            int64_t r15_18 = sx.q(arg7)
            
            if (r15_18 s<= rsi)
                int32_t r15_20 = (r15_18.d - arg9) * r13
                int64_t rax_84 = sx.q((r14.d - var_d8) * arg5)
                int64_t rcx_40 = rax_84
                int32_t var_e4_1 = r15_20
                int64_t* r14_29 = (r15_18 - r10) * arg14 + arg2 + (r14 - sx.q(arg12)) * result_2
                int64_t* var_d0_2 = r14_29
                int64_t i_30 = rsi - r15_18 + 1
                int64_t i_11
                
                do
                    int32_t* r14_30 = *r14_29
                    result = sx.q(r15_20) + r11
                    uint64_t rdx_58 = zx.q(*(result + rcx_40))
                    
                    if (r14_30 == 0)
                        result = sub_1429a37c0(arg1, (rdx_58 << 2).d)
                        rcx_40 = rax_84
                        r11 = arg3
                    else if (rdx_58.d s> 0)
                        uint64_t j_36 = zx.q(rdx_58.d)
                        uint64_t j_12
                        
                        do
                            uint64_t rax_88 = *arg1
                            uint32_t r10_21 = zx.d(*rax_88)
                            *arg1 = rax_88 + 1
                            uint32_t r9_13 = zx.d(*(rax_88 + 1))
                            *arg1 = rax_88 + 2
                            uint32_t rdx_59 = zx.d(*(rax_88 + 2))
                            *arg1 = rax_88 + 3
                            uint32_t r8_38 = zx.d(*(rax_88 + 3)) << 8 | rdx_59
                            *arg1 = rax_88 + 4
                            result = sub_1429bd0b0(((r8_38 << 8 | r9_13) << 8 | r10_21).d)
                            *r14_30 = result.d
                            r14_30 += arg13
                            j_12 = j_36
                            j_36 -= 1
                        while (j_12 != 1)
                        r15_20 = var_e4_1
                        rcx_40 = rax_84
                        r11 = arg3
                    
                    r15_20 += r13
                    r14_29 = var_d0_2 + arg14
                    var_e4_1 = r15_20
                    var_d0_2 = r14_29
                    i_11 = i_30
                    i_30 -= 1
                while (i_11 != 1)
    else if (arg19 != 1)
        if (arg19 != 2)
            sub_14297d3f0(&exceptionObject, "Unknown pixel data type.")
            _CxxThrowException(&exceptionObject, &data_143946538)
            noreturn
        
        if (arg20 == 0)
            int64_t r14_7 = sx.q(arg7)
            
            if (r14_7 s<= rsi)
                int64_t rcx_22 = sx.q(var_e4)
                int32_t r14_9 = (r14_7.d - arg9) * r13
                int64_t rcx_23 = arg3
                int32_t var_f8_1 = r14_9
                int64_t r15_7 = sx.q((rcx_22.d - arg10) * arg5)
                int64_t var_d0_1 = r15_7
                int32_t** r11_9 = (r14_7 - r10) * arg14 + arg2 + (rcx_22 - sx.q(arg12)) * result_2
                int32_t** var_f0_3 = r11_9
                int64_t i_26 = rsi - r14_7 + 1
                int64_t i_12
                
                do
                    int32_t* r11_10 = *r11_9
                    result = sx.q(r14_9) + rcx_23
                    uint64_t rdx_29 = zx.q(*(result + r15_7))
                    
                    if (r11_10 == 0)
                        result = sub_1429a37c0(arg1, (rdx_29 << 2).d)
                        rcx_23 = arg3
                    else if (rdx_29.d s> 0)
                        uint64_t r14_10 = *arg1
                        uint64_t j_35 = zx.q(rdx_29.d)
                        uint64_t j_13
                        
                        do
                            uint32_t r10_18 = zx.d(*r14_10)
                            *arg1 = r14_10 + 1
                            uint32_t r9_9 = zx.d(*(r14_10 + 1))
                            *arg1 = r14_10 + 2
                            uint32_t rdx_30 = zx.d(*(r14_10 + 2))
                            *arg1 = r14_10 + 3
                            uint32_t r8_17 = zx.d(*(r14_10 + 3))
                            r14_10 += 4
                            *arg1 = r14_10
                            result = zx.q(r10_18) | zx.q(((r8_17 << 8 | rdx_30) << 8 | r9_9) << 8)
                            zmm0.d = float.s(result)
                            *r11_10 = zmm0.d
                            r11_10 += arg13
                            j_13 = j_35
                            j_35 -= 1
                        while (j_13 != 1)
                        r14_9 = var_f8_1
                        r15_7 = var_d0_1
                        rcx_23 = arg3
                    
                    r14_9 += r13
                    r11_9 = var_f0_3 + arg14
                    var_f8_1 = r14_9
                    var_f0_3 = r11_9
                    i_12 = i_26
                    i_26 -= 1
                while (i_12 != 1)
        else if (arg20 == 1)
            int64_t r15_4 = sx.q(arg7)
            
            if (r15_4 s<= rsi)
                int32_t r15_6 = (r15_4.d - arg9) * r13
                int64_t rax_33 = sx.q((r14.d - var_d8) * arg5)
                int64_t rcx_20 = rax_33
                int64_t* r10_15 = (r15_4 - r10) * arg14 + arg2 + (r14 - sx.q(arg12)) * result_2
                int64_t* var_e0_1 = r10_15
                int64_t i_25 = rsi - r15_4 + 1
                int64_t i_13
                
                do
                    int32_t* r10_16 = *r10_15
                    result = sx.q(r15_6) + r11
                    int32_t j_42 = *(result + rcx_20)
                    
                    if (r10_16 == 0)
                        result = sub_1429a37c0(arg1, j_42 * 2)
                        rcx_20 = rax_33
                        r11 = arg3
                    else if (j_42 s> 0)
                        uint64_t r9_8 = *arg1
                        uint64_t j_30 = zx.q(j_42)
                        uint64_t j_14
                        
                        do
                            uint64_t r8_15 = zx.q(*r9_8)
                            uint64_t rax_37 = r9_8 + 1
                            *arg1 = rax_37
                            r9_8 = rax_37 + 1
                            uint64_t rdx_24 = zx.q(*rax_37) << 8 | r8_15
                            *arg1 = r9_8
                            result = zx.q(*(&data_1436bbc50 + (rdx_24 << 2)))
                            *r10_16 = result.d
                            r10_16 += arg13
                            j_14 = j_30
                            j_30 -= 1
                        while (j_14 != 1)
                        rcx_20 = rax_33
                        r11 = arg3
                    
                    r15_6 += r13
                    r10_15 = var_e0_1 + arg14
                    var_e0_1 = r10_15
                    i_13 = i_25
                    i_25 -= 1
                while (i_13 != 1)
        else
            if (arg20 != 2)
                sub_14297d3f0(&exceptionObject, "Unknown pixel data type.")
                _CxxThrowException(&exceptionObject, &data_143946538)
                noreturn
            
            int64_t r15_1 = sx.q(arg7)
            
            if (r15_1 s<= rsi)
                int32_t r15_3 = (r15_1.d - arg9) * r13
                int64_t rax_24 = sx.q((r14.d - var_d8) * arg5)
                int64_t rcx_17 = rax_24
                int32_t var_f8 = r15_3
                uint32_t** r14_4 = (r15_1 - r10) * arg14 + arg2 + (r14 - sx.q(arg12)) * result_2
                uint32_t** var_e0 = r14_4
                int64_t i_24 = rsi - r15_1 + 1
                int64_t i_14
                
                do
                    uint32_t* r14_5 = *r14_4
                    result = sx.q(r15_3) + r11
                    uint64_t rdx_16 = zx.q(*(result + rcx_17))
                    
                    if (r14_5 == 0)
                        result = sub_1429a37c0(arg1, (rdx_16 << 2).d)
                        rcx_17 = rax_24
                        r11 = arg3
                    else if (rdx_16.d s> 0)
                        uint64_t r11_5 = *arg1
                        uint64_t j_34 = zx.q(rdx_16.d)
                        uint64_t j_15
                        
                        do
                            uint32_t r10_11 = zx.d(*r11_5)
                            *arg1 = r11_5 + 1
                            uint32_t r9_7 = zx.d(*(r11_5 + 1))
                            *arg1 = r11_5 + 2
                            uint32_t rdx_17 = zx.d(*(r11_5 + 2))
                            result = r11_5 + 3
                            *arg1 = result
                            r11_5 = result + 1
                            uint32_t r8_9 = zx.d(*result) << 8 | rdx_17
                            *arg1 = r11_5
                            *r14_5 = (r8_9 << 8 | r9_7) << 8 | r10_11
                            r14_5 += arg13
                            j_15 = j_34
                            j_34 -= 1
                        while (j_15 != 1)
                        r15_3 = var_f8
                        rcx_17 = rax_24
                        r11 = arg3
                    
                    r15_3 += r13
                    r14_4 = var_e0 + arg14
                    var_f8 = r15_3
                    var_e0 = r14_4
                    i_14 = i_24
                    i_24 -= 1
                while (i_14 != 1)
    else if (arg20 == 0)
        int64_t r15_15 = sx.q(arg7)
        
        if (r15_15 s<= rsi)
            int32_t r15_17 = (r15_15.d - arg9) * r13
            int64_t rax_72 = sx.q((r14.d - var_d8) * arg5)
            int64_t rcx_34 = rax_72
            int64_t* r14_23 = (r15_15 - r10) * arg14 + arg2 + (r14 - sx.q(arg12)) * result_2
            int64_t* var_e0_3 = r14_23
            int64_t i_29 = rsi - r15_15 + 1
            int64_t i_15
            
            do
                int16_t* r14_24 = *r14_23
                result = sx.q(r15_17) + r11
                uint64_t rdx_46 = zx.q(*(result + rcx_34))
                
                if (r14_24 == 0)
                    result = sub_1429a37c0(arg1, (rdx_46 << 2).d)
                    rcx_34 = rax_72
                    r11 = arg3
                else if (rdx_46.d s> 0)
                    uint64_t j_32 = zx.q(rdx_46.d)
                    uint64_t j_16
                    
                    do
                        uint64_t rax_76 = *arg1
                        uint32_t r10_20 = zx.d(*rax_76)
                        *arg1 = rax_76 + 1
                        uint32_t r9_12 = zx.d(*(rax_76 + 1))
                        *arg1 = rax_76 + 2
                        uint32_t r8_34 = zx.d(*(rax_76 + 2))
                        *arg1 = rax_76 + 3
                        uint32_t rdx_49 = zx.d(*(rax_76 + 3)) << 8 | r8_34
                        *arg1 = rax_76 + 4
                        result = sub_1429bd160(&var_d8, (rdx_49 << 8 | r9_12) << 8 | r10_20)
                        *r14_24 = *result
                        r14_24 += arg13
                        j_16 = j_32
                        j_32 -= 1
                    while (j_16 != 1)
                    r13 = arg4
                    rcx_34 = rax_72
                    r11 = arg3
                
                r15_17 += r13
                r14_23 = var_e0_3 + arg14
                var_e0_3 = r14_23
                i_15 = i_29
                i_29 -= 1
            while (i_15 != 1)
    else if (arg20 == 1)
        int64_t r14_17 = sx.q(arg7)
        
        if (r14_17 s<= rsi)
            int64_t rcx_31 = sx.q(var_e4)
            int32_t r14_19 = (r14_17.d - arg9) * r13
            int64_t rax_63 = sx.q((rcx_31.d - arg10) * arg5)
            int64_t rcx_32 = rax_63
            int64_t* r15_14 = (r14_17 - r10) * arg14 + arg2 + (rcx_31 - sx.q(arg12)) * result_2
            int64_t i_28 = rsi - r14_17 + 1
            int64_t i_16
            
            do
                uint16_t* r9_11 = *r15_14
                result = sx.q(r14_19) + r11
                int32_t j_43 = *(result + rcx_32)
                
                if (r9_11 == 0)
                    result = sub_1429a37c0(arg1, j_43 * 2)
                    r11 = arg3
                    rcx_32 = rax_63
                else if (j_43 s> 0)
                    uint64_t j_29 = zx.q(j_43)
                    uint64_t j_17
                    
                    do
                        uint64_t rax_67 = *arg1
                        uint16_t r8_32 = zx.w(*rax_67)
                        *arg1 = rax_67 + 1
                        result = rax_67 + 2
                        uint16_t rdx_41 = zx.w(*(rax_67 + 1)) << 8 | r8_32
                        *arg1 = result
                        *r9_11 = rdx_41
                        r9_11 += arg13
                        j_17 = j_29
                        j_29 -= 1
                    while (j_17 != 1)
                    rcx_32 = rax_63
                
                r14_19 += r13
                r15_14 += arg14
                i_16 = i_28
                i_28 -= 1
            while (i_16 != 1)
    else
        if (arg20 != 2)
            sub_14297d3f0(&exceptionObject, "Unknown pixel data type.")
            _CxxThrowException(&exceptionObject, &data_143946538)
            noreturn
        
        int64_t r15_8 = sx.q(arg7)
        
        if (r15_8 s<= rsi)
            int32_t r15_10 = (r15_8.d - arg9) * r13
            int64_t rax_51 = sx.q((r14.d - var_d8) * arg5)
            int64_t rcx_27 = rax_51
            int64_t* r14_14 = (r15_8 - r10) * arg14 + arg2 + (r14 - sx.q(arg12)) * result_2
            int64_t* var_e0_2 = r14_14
            int64_t i_27 = rsi - r15_8 + 1
            int64_t i_17
            
            do
                int16_t* r14_15 = *r14_14
                result = sx.q(r15_10) + r11
                uint64_t rdx_35 = zx.q(*(result + rcx_27))
                
                if (r14_15 == 0)
                    result = sub_1429a37c0(arg1, (rdx_35 << 2).d)
                    rcx_27 = rax_51
                    r11 = arg3
                else if (rdx_35.d s> 0)
                    uint64_t j_31 = zx.q(rdx_35.d)
                    uint64_t j_18
                    
                    do
                        uint64_t rax_55 = *arg1
                        uint32_t r10_19 = zx.d(*rax_55)
                        *arg1 = rax_55 + 1
                        uint32_t r9_10 = zx.d(*(rax_55 + 1))
                        *arg1 = rax_55 + 2
                        uint32_t rdx_36 = zx.d(*(rax_55 + 2))
                        *arg1 = rax_55 + 3
                        uint32_t r8_26 = zx.d(*(rax_55 + 3)) << 8 | rdx_36
                        *arg1 = rax_55 + 4
                        result = sub_1429bd040(&var_d8, ((r8_26 << 8 | r9_10) << 8 | r10_19).d)
                        *r14_15 = *result
                        r14_15 += arg13
                        j_18 = j_31
                        j_31 -= 1
                    while (j_18 != 1)
                    r13 = arg4
                    rcx_27 = rax_51
                    r11 = arg3
                
                r15_10 += r13
                r14_14 = var_e0_2 + arg14
                var_e0_2 = r14_14
                i_17 = i_27
                i_27 -= 1
            while (i_17 != 1)
else if (arg19 == 0)
    int64_t r11_3 = sx.q(arg7)
    
    if (r11_3 s<= rsi)
        int32_t r11_4 = r11_3.d - arg9
        result = arg2 + (r14 - sx.q(arg12)) * result_2
        int32_t** r10_10 = (r11_3 - r10) * arg14 + result
        int64_t i_23 = rsi - r11_3 + 1
        int64_t i_18
        
        do
            int32_t* r8_5 = *r10_10
            
            if (r8_5 != 0)
                result = arg3 + sx.q((r14.d - arg10) * arg5)
                int32_t result_4 = *(sx.q(r13 * r11_4) + result)
                
                if (result_4 s> 0)
                    result = zx.q(result_4)
                    uint64_t j_19
                    
                    do
                        *r8_5 = (int.q(fconvert.t(arg17))).d
                        r8_5 += arg13
                        j_19 = result
                        result -= 1
                    while (j_19 != 1)
            
            r11_4 += 1
            r10_10 += arg14
            i_18 = i_23
            i_23 -= 1
        while (i_18 != 1)
else if (arg19 == 1)
    result = sub_142989720(&var_d8, _mm_cvtpd_ps(zx.o(arg17)).d)
    int64_t r11_1 = sx.q(arg7)
    
    if (r11_1 s<= rsi)
        int32_t r11_2 = r11_1.d - arg9
        int64_t* r10_6 = (r11_1 - sx.q(result_1)) * arg14 + arg2 + (r14 - sx.q(arg12)) * result_2
        result = zx.q(var_d8.w)
        int64_t i_22 = rsi - r11_1 + 1
        int64_t i_19
        
        do
            int16_t* r9_5 = *r10_6
            
            if (r9_5 != 0)
                int32_t j_45 = *(sx.q(r13 * r11_2) + arg3 + sx.q((r14.d - arg10) * arg5))
                
                if (j_45 s> 0)
                    uint64_t j_22 = zx.q(j_45)
                    uint64_t j_20
                    
                    do
                        *r9_5 = result.w
                        r9_5 += arg13
                        j_20 = j_22
                        j_22 -= 1
                    while (j_20 != 1)
            
            r11_2 += 1
            r10_6 += arg14
            i_19 = i_22
            i_22 -= 1
        while (i_19 != 1)
else
    if (arg19 != 2)
        sub_14297d3f0(&exceptionObject, "Unknown pixel data type.")
        _CxxThrowException(&exceptionObject, &data_143946538)
        noreturn
    
    int64_t r10_1 = sx.q(arg7)
    zmm0 = _mm_cvtpd_ps(zx.o(arg17))
    
    if (r10_1 s<= rsi)
        int32_t r10_2 = r10_1.d - arg9
        result = arg2 + (r14 - sx.q(arg12)) * result_2
        int64_t* r9_4 = (r10_1 - sx.q(result_1)) * arg14 + result
        int64_t i_21 = rsi - r10_1 + 1
        int64_t i_20
        
        do
            int32_t* r8_1 = *r9_4
            
            if (r8_1 != 0)
                result = r11 + sx.q((r14.d - arg10) * arg5)
                int32_t result_3 = *(sx.q(r13 * r10_2) + result)
                
                if (result_3 s> 0)
                    result = zx.q(result_3)
                    uint64_t j_21
                    
                    do
                        *r8_1 = zmm0.d
                        r8_1 += arg13
                        j_21 = result
                        result -= 1
                    while (j_21 != 1)
            
            r10_2 += 1
            r9_4 += arg14
            i_20 = i_21
            i_21 -= 1
        while (i_20 != 1)
__security_check_cookie(rax_1 ^ &var_118)
return result
