// 函数: sub_140aa9de0
// 地址: 0x140aa9de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
int64_t* rbx = arg4
int16_t* var_d8 = arg3
int64_t* var_d0 = rbx
arg3.b = 1
int16_t result
int64_t r8
result, r8 = sub_140b0f6c0(&var_d8, &data_142d42948)

if (result.b == 0)
    result.b = 0
else
    r8.b = 1
    int32_t var_188
    int64_t* var_150
    uint64_t var_140
    uint128_t var_138
    uint64_t var_110
    int32_t var_108
    uint64_t var_100
    uint64_t var_c8
    uint128_t var_c0
    
    if (sub_140b0f6c0(&var_d8, u"LIST") == 0)
        int16_t* rdi_1 = var_d8
        result = *rdi_1
        
        if (result == 0x2e)
            result.b = 0
        else
            var_150 = nullptr
            int32_t rdx_17 = 0
            int32_t var_148_2 = 0
            int32_t rcx_27 = 0
            int32_t var_144_2 = 0
            
            if (result != 0)
                int64_t rbx_5 = -1
                
                do
                    rbx_5 += 1
                while (rdi_1[rbx_5] != 0)
                
                if (rbx_5.d + 1 s> 0)
                    sub_1405947f0(&var_150, rbx_5.d + 1)
                    rcx_27 = var_144_2
                    rdx_17 = var_148_2
                
                int32_t rax_35 = rbx_5.d + 1 + rdx_17
                var_148_2 = rax_35
                
                if (rax_35 s> rcx_27)
                    sub_140594770(&var_150)
                
                UnDecorator::getReferenceType(var_150, rdi_1, (rbx_5.d + 1) * 2)
                rbx = var_d0
            
            sub_140a360c0(&var_150)
            
            if (var_148_2 == 0 || var_148_2 == 1)
                sub_140b1f640(rbx, u"------- Log conventions")
                sub_140b1f640(rbx, 
                    [cat]   = a category for the command to operate on, or 'global' for all categories.")
                sub_140b1f640(rbx, 
                    [level] = verbosity level, one of: none, error, warning, display, log, verbose,")
                sub_140b1f640(rbx, 
                    At boot time, compiled in default is overridden by ini files setting, which is "
                "overridden by command line")
                sub_140b1f640(rbx, u"------- Log console command usage")
                sub_140b1f640(rbx, u"Log list            - list all log categories")
                sub_140b1f640(rbx, 
                    Log list [string]   - list all log categories containing a substring")
                sub_140b1f640(rbx, 
                    Log reset           - reset all log categories to their boot-time default")
                sub_140b1f640(rbx, Log [cat]           - toggle the display of the category [cat]")
                sub_140b1f640(rbx, u"Log [cat] off       - disable display of the category [cat]")
                sub_140b1f640(rbx, u"Log [cat] on        - resume display of the category [cat]")
                sub_140b1f640(rbx, 
                    Log [cat] only      - enables [cat] and disables all other categories")
                sub_140b1f640(rbx, 
                    Log [cat] [level]   - set the verbosity level of the category [cat]")
                sub_140b1f640(rbx, 
                    Log [cat] break     - toggle the debug break on display of the category [cat]")
                sub_140b1f640(rbx, u"------- Log command line")
                sub_140b1f640(rbx, 
                    -LogCmds="[arguments],[arguments]..."           - applies a list of console com")
                sub_140b1f640(rbx, 
                    -LogCmds="foo verbose, bar off"         - turns on the foo category and turns off "
                "the bar category")
                sub_140b1f640(rbx, u"------- Environment variables")
                sub_140b1f640(rbx, 
                    Any command line option can be set via the environment variable UE-CmdLineArgs")
                sub_140b1f640(rbx, u"set UE-CmdLineArgs="-LogCmds=foo verbose breakon, bar off"")
                sub_140b1f640(rbx, u"------- Config file")
                sub_140b1f640(rbx, u"[Core.Log]")
                sub_140b1f640(rbx, u"global=[default verbosity for things not listed later]")
                sub_140b1f640(rbx, u"[cat]=[level]")
                sub_140b1f640(rbx, u"foo=verbose break")
            else
                var_140 = arg1 - 8
                
                if (sub_140ab9200(arg1 - 8, &var_150, rbx).b == 0)
                    int32_t rbx_8 = *(arg1 + 0x820) - *(arg1 + 0x84c)
                    int64_t var_98 = 0
                    int32_t var_90_1 = 0
                    int32_t var_6c_1 = 0x80
                    int64_t var_88
                    __builtin_memset(&var_88, 0, 0x1c)
                    int32_t var_68_1 = 0xffffffff
                    int32_t var_64_1 = 0
                    void* var_58_1 = nullptr
                    int32_t var_50_1 = 0
                    
                    if (rbx_8 s> 0)
                        sub_140ac03a0(&var_98, rbx_8)
                        int32_t rdx_23
                        
                        if (rbx_8 u< 4)
                            rdx_23 = 1
                        else
                            uint32_t rbx_9 = rbx_8 u>> 1
                            uint64_t rflags_3
                            int32_t temp0_6
                            temp0_6, rflags_3 = _bit_scan_reverse(rbx_9 + 8)
                            int32_t rcx_34
                            
                            if (rbx_9 == 0xfffffff8)
                                rcx_34 = 0x20
                            else
                                rcx_34 = 0x1f - temp0_6
                            
                            int32_t rcx_36 = rcx_34 << 0x1a s>> 0x1f
                            uint64_t rflags_4
                            char temp0_7
                            temp0_7, rflags_4 = _bit_scan_reverse(rbx_9 + 7)
                            char rdx_22
                            
                            if (rcx_36 == 0)
                                rdx_22 = 0x20
                            else
                                rdx_22 = 0x1f - temp0_7
                            
                            rdx_23 = 1 << ((not.d(rcx_36)).b & (0x20 - rdx_22))
                        
                        if (var_50_1 == 0 || var_50_1 s< rdx_23)
                            var_50_1 = rdx_23
                            sub_140943160(&var_98)
                    
                    int32_t r10_2 = *(arg1 + 0x840)
                    int32_t var_16c_3 = 1
                    int32_t rcx_40 = 0
                    int32_t var_170_2 = 0
                    int32_t r8_13 = 0
                    void* var_168_2 = arg1 + 0x828
                    int32_t var_160_2 = 0xffffffff
                    int64_t var_15c_2 = 0
                    
                    if (r10_2 != 0)
                        void* rax_43 = *(arg1 + 0x838)
                        void* r9_5 = arg1 + 0x828
                        
                        if (rax_43 != 0)
                            r9_5 = rax_43
                        
                        int32_t temp6_1
                        int32_t temp7_1
                        temp6_1:temp7_1 = sx.q(r10_2 - 1)
                        int32_t rdx_26 = *r9_5
                        
                        if (rdx_26 != 0)
                        label_140aaa44d:
                            int32_t rax_50 = ((rdx_26 - 1) & rdx_26) ^ rdx_26
                            uint64_t rflags_5
                            int32_t temp0_8
                            temp0_8, rflags_5 = _bit_scan_reverse(rax_50)
                            int32_t var_16c_4 = rax_50
                            int32_t rax_51
                            
                            if (rax_50 == 0)
                                rax_51 = 0x20
                            else
                                rax_51 = 0x1f - temp0_8
                            
                            var_15c_2.d = r8_13 - rax_51 + 0x1f
                            
                            if (r8_13 - rax_51 + 0x1f s> r10_2)
                                var_15c_2.d = r10_2
                        else
                            while (true)
                                int64_t rdx_27 = sx.q(rcx_40)
                                r8_13 += 0x20
                                rcx_40 += 1
                                var_15c_2:4.d = r8_13
                                var_170_2 = rcx_40
                                
                                if (rdx_27.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                                    break
                                
                                rdx_26 = *(r9_5 + (rdx_27 << 2) + 4)
                                int32_t var_160_3 = 0xffffffff
                                
                                if (rdx_26 != 0)
                                    goto label_140aaa44d
                            
                            var_15c_2.d = r10_2
                    
                    int32_t rdx_28 = *(arg1 + 0x840)
                    var_100 = arg1 + 0x818
                    var_15c_2.d = rdx_28
                    int128_t var_e8_2 = 0xffffffff
                    uint128_t var_f8_2 = var_170_2.o
                    int32_t rdi_2 = 0xffffffff << (rdx_28 & 0x1f).b
                    uint128_t zmm0_2 = var_100.o
                    int32_t r8_16 = rdx_28 s>> 5
                    int32_t r9_7 = rdx_28 & 0xffffffe0
                    int64_t var_118_2 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
                    int32_t var_160_4 = rdi_2
                    var_138 = zmm0_2
                    uint128_t var_128_2 = var_f8_2
                    
                    if (rdx_28 != r10_2)
                        void* rax_55 = *(arg1 + 0x838)
                        void* r11_2 = arg1 + 0x828
                        
                        if (rax_55 != 0)
                            r11_2 = rax_55
                        
                        int32_t temp8_1
                        int32_t temp9_1
                        temp8_1:temp9_1 = sx.q(r10_2 - 1)
                        int32_t rdx_32 = *(r11_2 + (sx.q(r8_16) << 2)) & rdi_2
                        
                        if (rdx_32 != 0)
                        label_140aaa527:
                            int32_t rax_61 = ((rdx_32 - 1) & rdx_32) ^ rdx_32
                            uint64_t rflags_6
                            int32_t temp0_10
                            temp0_10, rflags_6 = _bit_scan_reverse(rax_61)
                            int32_t rax_62
                            
                            if (rax_61 == 0)
                                rax_62 = 0x20
                            else
                                rax_62 = 0x1f - temp0_10
                            
                            r9_7 -= rax_62
                            var_15c_2.d = r9_7 + 0x1f
                            
                            if (r9_7 + 0x1f s> r10_2)
                                var_15c_2.d = r10_2
                        else
                            while (true)
                                int64_t rcx_44 = sx.q(r8_16)
                                r9_7 += 0x20
                                r8_16 += 1
                                
                                if (rcx_44.d s>= (temp9_1 + (temp8_1 & 0x1f)) s>> 5)
                                    break
                                
                                rdx_32 = *(r11_2 + (rcx_44 << 2) + 4)
                                var_160_4 = 0xffffffff
                                
                                if (rdx_32 != 0)
                                    goto label_140aaa527
                            
                            var_15c_2.d = r10_2
                    
                    while (true)
                        int64_t rcx_46 = sx.q(var_128_2:0xc.d)
                        int32_t rax_54
                        
                        if (rcx_46.d != (var_160_4.q u>> 0x20).d || var_128_2.q != arg1 + 0x828)
                            rax_54.b = 0
                        else
                            rax_54.b = 1
                        
                        int64_t* rdx_33 = var_138.q
                        
                        if (rax_54.b == 0 || rdx_33 != arg1 + 0x818)
                            rax_54.b = 1
                        else
                            rax_54.b = 0
                        
                        if (rax_54.b == 0)
                            break
                        
                        zmm0_2 = *(*rdx_33 + rcx_46 * 0x18)
                        var_c0 = zmm0_2
                        char rbx_12 = *_mm_bsrli_si128(zmm0_2, 8).q
                        sub_140a9e570(&var_98, &var_110)
                        int64_t rax_64 = var_c0.q
                        int64_t* rdi_3 = var_108.q
                        rdi_3[1].b = rbx_12
                        *rdi_3 = rax_64
                        *(rdi_3 + 0xc) = 0xffffffff
                        sub_14095c550(&var_98, &var_c8, 
                            (rax_64 u>> 0x20).d + sub_140b5ead0(rax_64.d), rdi_3, var_110.d, 
                            nullptr)
                        var_128_2:8.d &= not.d(var_138:0xc.d)
                        rax_54, r9_7 = sub_14059bdd0(&var_138:8)
                    
                    sub_140ab7510(var_140, &var_150, 0, r9_7)
                    int32_t r10_3 = *(arg1 + 0x840)
                    int32_t var_16c_5 = 1
                    int32_t rcx_53 = 0
                    int32_t var_170_3 = 0
                    int32_t r8_18 = 0
                    void* var_168_3 = arg1 + 0x828
                    int32_t var_160_5 = 0xffffffff
                    int64_t var_15c_3 = 0
                    
                    if (r10_3 != 0)
                        void* rax_69 = *(arg1 + 0x838)
                        void* r9_9 = arg1 + 0x828
                        
                        if (rax_69 != 0)
                            r9_9 = rax_69
                        
                        int32_t temp10_1
                        int32_t temp11_1
                        temp10_1:temp11_1 = sx.q(r10_3 - 1)
                        int32_t rdx_40 = *r9_9
                        
                        if (rdx_40 != 0)
                        label_140aaa6ab:
                            int32_t rax_76 = neg.d(rdx_40) & rdx_40
                            uint64_t rflags_7
                            int32_t temp0_12
                            temp0_12, rflags_7 = _bit_scan_reverse(rax_76)
                            int32_t var_16c_6 = rax_76
                            int32_t rax_77
                            
                            if (rax_76 == 0)
                                rax_77 = 0x20
                            else
                                rax_77 = 0x1f - temp0_12
                            
                            var_15c_3.d = r8_18 - rax_77 + 0x1f
                            
                            if (r8_18 - rax_77 + 0x1f s> r10_3)
                                var_15c_3.d = r10_3
                        else
                            while (true)
                                int64_t rdx_41 = sx.q(rcx_53)
                                r8_18 += 0x20
                                rcx_53 += 1
                                var_15c_3:4.d = r8_18
                                var_170_3 = rcx_53
                                
                                if (rdx_41.d s>= (temp11_1 + (temp10_1 & 0x1f)) s>> 5)
                                    break
                                
                                rdx_40 = *(r9_9 + (rdx_41 << 2) + 4)
                                int32_t var_160_6 = 0xffffffff
                                
                                if (rdx_40 != 0)
                                    goto label_140aaa6ab
                            
                            var_15c_3.d = r10_3
                    
                    int32_t rdx_42 = *(arg1 + 0x840)
                    var_100 = arg1 + 0x818
                    var_15c_3.d = rdx_42
                    int128_t var_e8_3 = 0xffffffff
                    uint128_t var_f8_3 = var_170_3.o
                    int32_t rdi_4 = 0xffffffff << (rdx_42 & 0x1f).b
                    uint128_t zmm0_3 = var_100.o
                    int32_t r8_21 = rdx_42 s>> 5
                    int32_t r9_11 = rdx_42 & 0xffffffe0
                    int64_t var_118_3 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
                    int32_t var_160_7 = rdi_4
                    var_138 = zmm0_3
                    uint128_t var_128_3 = var_f8_3
                    
                    if (rdx_42 != r10_3)
                        void* rax_81 = *(arg1 + 0x838)
                        void* r11_3 = arg1 + 0x828
                        
                        if (rax_81 != 0)
                            r11_3 = rax_81
                        
                        int32_t temp13_1
                        int32_t temp14_1
                        temp13_1:temp14_1 = sx.q(r10_3 - 1)
                        int32_t rdx_46 = *(r11_3 + (sx.q(r8_21) << 2)) & rdi_4
                        
                        if (rdx_46 != 0)
                        label_140aaa786:
                            int32_t rax_87 = neg.d(rdx_46) & rdx_46
                            uint64_t rflags_8
                            int32_t temp0_14
                            temp0_14, rflags_8 = _bit_scan_reverse(rax_87)
                            int32_t r14_4
                            
                            if (rax_87 == 0)
                                r14_4 = 0x20
                            else
                                r14_4 = 0x1f - temp0_14
                            
                            var_15c_3.d = r9_11 - r14_4 + 0x1f
                            
                            if (r9_11 - r14_4 + 0x1f s> r10_3)
                                var_15c_3.d = r10_3
                        else
                            while (true)
                                int64_t rcx_57 = sx.q(r8_21)
                                r9_11 += 0x20
                                r8_21 += 1
                                
                                if (rcx_57.d s>= (temp14_1 + (temp13_1 & 0x1f)) s>> 5)
                                    break
                                
                                rdx_46 = *(r11_3 + (rcx_57 << 2) + 4)
                                var_160_7 = 0xffffffff
                                
                                if (rdx_46 != 0)
                                    goto label_140aaa786
                            
                            var_15c_3.d = r10_3
                    
                    while (true)
                        int64_t rcx_59 = sx.q(var_128_3:0xc.d)
                        int32_t rax_80
                        
                        if (rcx_59.d != (var_160_7.q u>> 0x20).d || var_128_3.q != arg1 + 0x828)
                            rax_80.b = 0
                        else
                            rax_80.b = 1
                        
                        int64_t* rdx_47 = var_138.q
                        
                        if (rax_80.b == 0 || rdx_47 != arg1 + 0x818)
                            rax_80.b = 1
                        else
                            rax_80.b = 0
                        
                        if (rax_80.b == 0)
                            break
                        
                        var_110.o = *(*rdx_47 + rcx_59 * 0x18)
                        uint64_t rbx_16 = var_110
                        var_140 = rbx_16
                        uint64_t rax_90
                        
                        if (var_90_1 == var_64_1)
                        labelid_76:
                            rax_90.b = 0
                        else
                            void var_60
                            void* rcx_64 = &var_60
                            int64_t rdx_49 =
                                sx.q(var_50_1 - 1) & sx.q(sub_140b5ead0(rbx_16.d) + var_110:4.d)
                            
                            if (var_58_1 != 0)
                                rcx_64 = var_58_1
                            
                            rax_90 = zx.q(*(rcx_64 + (rdx_49 << 2)))
                            
                            if (rax_90.d == 0xffffffff)
                            label_140aaa859:
                                rax_90.b = 0
                            else
                                int64_t r8_22 = var_98
                                int64_t rdx_50
                                
                                while (true)
                                    rdx_50 = sx.q(rax_90.d)
                                    int64_t rcx_65 = rdx_50 * 5
                                    
                                    if (*(r8_22 + (rcx_65 << 2)) == rbx_16)
                                        break
                                    
                                    rax_90 = zx.q(*(r8_22 + (rcx_65 << 2) + 0xc))
                                    
                                    if (rax_90.d == 0xffffffff)
                                        goto label_140aaa859_2
                                
                                if (rax_90.d == 0xffffffff)
                                label_140aaa859_1:
                                    rax_90.b = 0
                                else
                                    void* rcx_67 = r8_22 + rdx_50 * 0x14
                                    
                                    if (rcx_67 == 0)
                                    label_140aaa859_2:
                                        rax_90.b = 0
                                    else
                                        rax_90 = zx.q(*(rcx_67 + 8))
                        
                        char* rdi_5 = var_108.q
                        
                        if (*rdi_5 != rax_90.b)
                            int64_t* rax_95 = sub_140b63b70(&var_140, &var_c0)
                            int16_t* const r14_5
                            
                            if (rax_95[1].d == 0)
                                r14_5 = &data_142d40450
                            else
                                r14_5 = *rax_95
                            
                            int16_t* const rbx_17 = &data_142d40450
                            
                            if (rdi_5[1] != 0)
                                rbx_17 = u" - DebugBreak"
                            
                            sub_140b2b1a0(*rdi_5)
                            var_188.q = rbx_17
                            sub_140b1f700(var_d0, u"%-40s  %-12s  %s", r14_5)
                            int64_t rcx_70 = var_c0.q
                            
                            if (rcx_70 != 0)
                                sub_140a74f90(rcx_70)
                        
                        var_128_3:8.d &= not.d(var_138:0xc.d)
                        sub_14059bdd0(&var_138:8)
                    
                    int32_t var_50_2 = 0
                    
                    if (var_58_1 != 0)
                        sub_140a74f90(var_58_1)
                    
                    var_90_1 = 0
                    int32_t var_68_2 = 0xffffffff
                    int32_t var_64_2 = 0
                    sub_14059a8e0(&var_88, 0)
                    int64_t var_78
                    
                    if (var_78 != 0)
                        sub_140a74f90(var_78)
                    
                    int64_t rcx_76 = var_98
                    
                    if (rcx_76 != 0)
                        sub_140a74f90(rcx_76)
            
            int64_t* rcx_102 = var_150
            
            if (rcx_102 != 0)
                sub_140a74f90(rcx_102)
            
            result.b = 1
    else
        int32_t rsi_1 = 0
        var_150 = nullptr
        int32_t var_144_1 = 0
        int64_t* r12_1 = nullptr
        int32_t i_1 = 0
        sub_140b294d0(&var_110, &var_d8, 0)
        uint64_t r13_1 = arg1 + 0x818
        int32_t var_16c_1 = 1
        int32_t r10_1 = *(r13_1 + 0x28)
        void* r11_1 = r13_1 + 0x10
        var_c8 = r13_1
        int32_t rcx_3 = 0
        int32_t var_170_1 = 0
        int32_t r8_1 = 0
        void* var_168_1 = r11_1
        int32_t var_160_1 = 0xffffffff
        int64_t var_15c_1 = 0
        
        if (r10_1 != 0)
            void* rax_3 = *(r11_1 + 0x10)
            void* r9 = r11_1
            
            if (rax_3 != 0)
                r9 = rax_3
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(r10_1 - 1)
            int32_t rdx_3 = *r9
            
            if (rdx_3 != 0)
            label_140aa9f0b:
                int32_t rax_10 = neg.d(rdx_3) & rdx_3
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_10)
                int32_t var_16c_2 = rax_10
                int32_t rax_11
                
                if (rax_10 == 0)
                    rax_11 = 0x20
                else
                    rax_11 = 0x1f - temp0_2
                
                var_15c_1.d = r8_1 - rax_11 + 0x1f
                
                if (r8_1 - rax_11 + 0x1f s> r10_1)
                    var_15c_1.d = r10_1
            else
                while (true)
                    int64_t rdx_4 = sx.q(rcx_3)
                    r8_1 += 0x20
                    rcx_3 += 1
                    var_15c_1:4.d = r8_1
                    var_170_1 = rcx_3
                    
                    if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_3 = *(r9 + (rdx_4 << 2) + 4)
                    var_160_1 = 0xffffffff
                    
                    if (rdx_3 != 0)
                        goto label_140aa9f0b
                
                var_15c_1.d = r10_1
        
        int32_t rdx_5 = *(r13_1 + 0x28)
        var_100 = r13_1
        double zmm2[0x2] = var_160_1.o
        uint128_t var_f8_1 = var_170_1.o
        int32_t r15_1 = 0xffffffff << (rdx_5.b & 0x1f)
        uint128_t zmm0_1 = var_100.o
        int32_t r8_4 = rdx_5 s>> 5
        int32_t r9_2 = rdx_5 & 0xffffffe0
        double var_e8_1[0x2] = zmm2
        int64_t var_118_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
        uint128_t zmm1 = var_f8_1
        var_f8_1:8.d = r15_1
        var_f8_1:0xc.d = rdx_5
        var_138 = zmm0_1
        uint128_t var_128_1 = zmm1
        
        if (rdx_5 != r10_1)
            void* rax_13 = *(r11_1 + 0x10)
            
            if (rax_13 != 0)
                r11_1 = rax_13
            
            int32_t temp3_1
            int32_t temp4_1
            temp3_1:temp4_1 = sx.q(r10_1 - 1)
            int32_t rdx_9 = *(r11_1 + (sx.q(r8_4) << 2)) & r15_1
            
            if (rdx_9 != 0)
            label_140aa9fe2:
                int32_t rax_20 = neg.d(rdx_9) & rdx_9
                uint64_t rflags_2
                int32_t temp0_4
                temp0_4, rflags_2 = _bit_scan_reverse(rax_20)
                int32_t r14_1
                
                if (rax_20 == 0)
                    r14_1 = 0x20
                else
                    r14_1 = 0x1f - temp0_4
                
                var_f8_1:0xc.d = r9_2 - r14_1 + 0x1f
                
                if (r9_2 - r14_1 + 0x1f s> r10_1)
                    var_f8_1:0xc.d = r10_1
            else
                while (true)
                    int64_t rcx_8 = sx.q(r8_4)
                    r9_2 += 0x20
                    r8_4 += 1
                    
                    if (rcx_8.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_9 = *(r11_1 + (rcx_8 << 2) + 4)
                    var_f8_1:8.d = 0xffffffff
                    
                    if (rdx_9 != 0)
                        goto label_140aa9fe2
                
                var_f8_1:0xc.d = r10_1
            
            r11_1 = var_168_1
        
        uint64_t rax_23 = var_f8_1:8.q u>> 0x20
        var_140 = rax_23
        char var_178
        
        while (true)
            int64_t rcx_10 = sx.q(var_128_1:0xc.d)
            
            if (rcx_10.d != rax_23.d || var_128_1.q != r11_1)
                rax_23.b = 0
            else
                rax_23.b = 1
            
            int64_t* rdx_10 = var_138.q
            
            if (rax_23.b == 0 || rdx_10 != r13_1)
                rax_23.b = 1
            else
                rax_23.b = 0
            
            if (rax_23.b == 0)
                break
            
            zmm0_1 = *(*rdx_10 + rcx_10 * 0x18)
            var_c0 = zmm0_1
            char* rbx_1 = _mm_bsrli_si128(zmm0_1, 8).q
            int64_t var_b0
            sub_140b63b70(&var_c0, &var_b0)
            
            if (var_108 == 0 || var_108 == 1)
            label_140aaa0ab:
                uint64_t r14_2 = 0
                int64_t r15_2 = var_b0
                var_178 = rbx_1[1]
                char rax_28 = *rbx_1
                int32_t var_a8
                int32_t rbx_2 = var_a8
                var_100 = 0
                var_f8_1.d = rbx_2
                int32_t r13_2
                
                if (rbx_2 != 0)
                    sub_1405a4c70(&var_100, rbx_2, 0)
                    r14_2 = var_100
                    memcpy(r14_2, r15_2, rbx_2 * 2)
                    r13_2 = var_f8_1:4.d
                    rbx_2 = var_f8_1.d
                else
                    r13_2 = 0
                
                int64_t i_2 = sx.q(i_1)
                i_1 = (i_2 + 1).d
                
                if (i_1 s> var_144_1)
                    sub_140ac0d60(&var_150)
                    r12_1 = var_150
                
                int64_t rcx_17 = i_2 * 3
                r12_1[rcx_17] = r14_2
                *(&r12_1[rcx_17] + 0xc) = r13_2
                r13_1 = var_c8
                r12_1[rcx_17 + 1].d = rbx_2
                r12_1[rcx_17 + 2].b = rax_28
                *(&r12_1[rcx_17] + 0x11) = var_178
            else if (sub_140a23cf0(&var_b0, var_110, 1, 0, 0xffffffff) != 0xffffffff)
                goto label_140aaa0ab
            
            int64_t rcx_18 = var_b0
            
            if (rcx_18 != 0)
                sub_140a74f90(rcx_18)
            
            var_128_1:8.d &= not.d(var_138:0xc.d)
            sub_14059bdd0(&var_138:8)
            r11_1 = var_168_1
            rax_23 = var_140
        
        sub_140a92dd0(r12_1, i_1, var_178)
        
        while (true)
            if (rsi_1 s< 0 || rsi_1 s>= i_1)
                result.b = 0
            else
                result.b = 1
            
            if (result.b == 0)
                break
            
            int64_t rcx_21 = sx.q(rsi_1) * 3
            int16_t* const r14_3
            
            if (r12_1[rcx_21 + 1].d == 0)
                r14_3 = &data_142d40450
            else
                r14_3 = r12_1[rcx_21]
            
            int16_t* const rbx_3 = &data_142d40450
            
            if (*(&r12_1[rcx_21] + 0x11) != 0)
                rbx_3 = u" - DebugBreak"
            
            sub_140b2b1a0(r12_1[rcx_21 + 2].b)
            var_188.q = rbx_3
            sub_140b1f700(var_d0, u"%-40s  %-12s  %s", r14_3)
            rsi_1 += 1
        
        uint64_t rcx_24 = var_110
        
        if (rcx_24 != 0)
            sub_140a74f90(rcx_24)
        
        int64_t* rbx_4 = r12_1
        
        if (i_1 != 0)
            int32_t i
            
            do
                int64_t rcx_25 = *rbx_4
                
                if (rcx_25 != 0)
                    sub_140a74f90(rcx_25)
                
                rbx_4 = &rbx_4[3]
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        if (r12_1 == 0)
            result.b = 1
        else
            sub_140a74f90(r12_1)
            result.b = 1

__security_check_cookie(rax_1 ^ &var_1a8)
return result
