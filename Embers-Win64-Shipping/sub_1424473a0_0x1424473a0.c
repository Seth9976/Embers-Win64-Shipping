// 函数: sub_1424473a0
// 地址: 0x1424473a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1f8
int64_t rax_1 = __security_cookie ^ &var_1f8
int64_t* r15
r15.b = 0
int64_t* var_178 = arg1
int64_t* r12 = arg1

if (*(arg1 + 0x93) != 0 && data_14399fa10() == 0)
    sub_140cb0ba0(0, 1)
    *(r12 + 0x93) = 0
    
    if (r12[0x12].b != 0)
        *(r12 + 0x92) = 0
        
        if (*(r12 + 0x91) != 0)
            sub_142445d20(r12)

void* rax_3 = r12[0x10]
int64_t* var_188 = *(rax_3 + 0x38)
int64_t result

if (r12[0xf] != 0 || r12[0x11] != 0)
    int16_t* const rbx_1 = &data_142d40450
    int16_t* const rcx_2
    
    if (*(rax_3 + 0x578) == 0)
        rcx_2 = &data_142d40450
    else
        rcx_2 = *(rax_3 + 0x570)
    
    int32_t rax_4
    int64_t r8_1
    rax_4, r8_1 = sub_140a54510(rcx_2, &data_142d40450)
    
    if (rax_4 != 0)
        goto label_142448907
    
    char rax_5
    
    if (r12[0x11] != 0)
        rax_5, r8_1 = data_14399fa10()
    
    if (r12[0x11] != 0 && rax_5 != 0)
        result = 0
    else
        void* rcx_3 = r12[0x10]
        void* rax_6 = r12[0x11]
        int16_t* var_198
        int16_t* rcx_6
        
        if (rcx_3 != rax_6)
            int16_t* var_1c0
            int32_t var_190
            int64_t var_168
            
            if (*(rax_6 + 0x30) == 0)
                var_168 = *(r12[0xf] + 0x18)
                sub_140b63b70(&var_168, &var_198)
                
                if (var_190 != 0)
                    rbx_1 = var_198
                
                sub_140a2e390(&var_1c0, u"Unable to travel to '%s' - package is not a level", rbx_1)
                int16_t* rcx_10 = var_198
                
                if (rcx_10 != 0)
                    sub_140a74f90(rcx_10)
                
                sub_14242e880(r12)
                sub_1423d27f0(data_143f5b298, r12[0x10], 0, &var_1c0)
                rcx_6 = var_1c0
                goto label_1424474be
            
            sub_142435600(rcx_3, 2)
            bool rdx_5 = *(r12 + 0x91)
            
            if (rdx_5 != 0)
                void* rcx_13 = r12[0x11]
                *(*(rcx_13 + 0x20) + 0x18)
                sub_142431df0(rcx_13)
                rdx_5 = *(r12 + 0x91)
            
            void* rbx_2 = r12[0x10]
            int64_t* rcx_14 = *(rbx_2 + 0x130)
            
            if (rcx_14 != 0)
                (*(*rcx_14 + 0x668))(rcx_14, rdx_5 == 0)
                rbx_2 = r12[0x10]
            
            *(rbx_2 + 0x11d) |= 0x20
            sub_140599090(rbx_2 + 0x3e8)
            sub_140920c10(&data_143a30788, rbx_2)
            void* rcx_16 = *(r12[0x10] + 0xf0)
            
            if (rcx_16 != 0 && sub_141fba5f0(rcx_16) == 0)
                void* rcx_17 = r12[0x10]
                
                if (*(*(rcx_17 + 0xf0) + 0xb08) == 0)
                    sub_142430a60(rcx_17)
            
            int64_t var_120 = 0
            void** const var_128 = &data_142ead108
            int32_t var_118_1 = 0
            int32_t var_f4_1 = 0x80
            int64_t var_110
            __builtin_memset(&var_110, 0, 0x1c)
            int32_t var_f0_1 = 0xffffffff
            int32_t var_ec_1 = 0
            int64_t var_e0_1 = 0
            int32_t var_d8_1 = 0
            CRITICAL_SECTION criticalSection
            InitializeCriticalSection(&criticalSection)
            SetCriticalSectionSpinCount(&criticalSection, 0xfa0)
            int64_t var_a8 = 0
            var_128 = &data_142ead108
            void* rax_12 = r12[0x10]
            char var_a0 = 0
            var_198 = nullptr
            var_190.q = 0
            int64_t* rcx_20 = *(rax_12 + 0x128)
            
            if (rcx_20 != 0)
                int64_t rdx_9
                rdx_9.b = *(r12 + 0x91) == 0
                (*(*rcx_20 + 0x700))(rcx_20, rdx_9, &var_198)
                rax_12 = r12[0x10]
            
            int64_t rax_14 = sub_14243ac50(rax_12)
            void* rsi_1 = r12[0x10]
            bool var_1c8_1 = rax_14.d == 3
            int32_t var_1b8
            int32_t var_1b0
            int64_t* performanceCount
            int32_t var_1a0
            
            if (rax_14.d != 3)
                int32_t rbx_4 = 0
                
                while (true)
                    if (rbx_4 s< 0 || rbx_4 s>= *(rsi_1 + 0x1c0))
                        rax_14.b = 0
                    else
                        rax_14.b = 1
                    
                    if (rax_14.b == 0)
                        break
                    
                    rax_14 = sub_140d3c6e0(*(rsi_1 + 0x1b8) + (sx.q(rbx_4) << 3))
                    int64_t rdi_1 = rax_14
                    
                    if (rax_14 != 0)
                        if (*(rax_14 + 0x228) != 0)
                        label_142447859:
                            EnterCriticalSection(&criticalSection)
                            var_a8 = rdi_1
                            var_a0 = 1
                            
                            if (var_118_1 == var_ec_1)
                                sub_140d186f0(&data_143e1d990, &var_128)
                            
                            var_1c0 = &var_a8
                            var_1b8.q = &var_a0
                            sub_141a29980(&var_120, &var_1b0, &var_1c0, nullptr)
                            LeaveCriticalSection(&criticalSection)
                        else
                            void* rax_18 = sub_14256a090()
                            void* rdx_14 = *(rdi_1 + 0x10)
                            rax_14 = sx.q(*(rax_18 + 0x38))
                            
                            if (rax_14.d s<= *(rdx_14 + 0x38)
                                    && *(*(rdx_14 + 0x30) + (rax_14 << 3)) == rax_18 + 0x30)
                                goto label_142447859
                    
                    rbx_4 += 1
            else
                sub_1423ddac0(data_143f5b298, &var_1c0, rsi_1)
                int16_t* r8_5 = var_1c0
                int32_t rdx_11 = var_1b8
                int64_t* rax_15
                
                while (true)
                    if (rdx_11 s< 0 || rdx_11 s>= *(r8_5 + 8))
                        rax_15.b = 0
                    else
                        rax_15.b = 1
                    
                    if (rax_15.b == 0)
                        break
                    
                    if (*(*r8_5 + (sx.q(rdx_11) << 3)) != 0)
                        break
                    
                    rdx_11 += 1
                    var_1b8 = rdx_11
                
                while (true)
                    if (rdx_11 s< 0 || rdx_11 s>= *(r8_5 + 8))
                        rax_15.b = 0
                    else
                        rax_15.b = 1
                    
                    if (rax_15.b == 0)
                        break
                    
                    int64_t rbx_3 = *((*r8_5)[sx.q(rdx_11)] + 0x30)
                    
                    if (rbx_3 != 0)
                        EnterCriticalSection(&criticalSection)
                        var_a8 = rbx_3
                        var_a0 = 1
                        
                        if (var_118_1 == var_ec_1)
                            sub_140d186f0(&data_143e1d990, &var_128)
                        
                        performanceCount = &var_a8
                        var_1a0 = &var_a0
                        sub_141a29980(&var_120, &var_1b0, &performanceCount, nullptr)
                        LeaveCriticalSection(&criticalSection)
                        rdx_11 = var_1b8
                        r8_5 = var_1c0
                    
                    do
                        rdx_11 += 1
                        var_1b8 = rdx_11
                        
                        if (rdx_11 s< 0 || rdx_11 s>= *(r8_5 + 8))
                            rax_15.b = 0
                        else
                            rax_15.b = 1
                        
                        if (rax_15.b == 0)
                            break
                    while ((*r8_5)[sx.q(rdx_11)] == 0)
            
            sub_1423ddac0(data_143f5b298, &var_1c0, r12[0x10])
            int16_t* r8_10 = var_1c0
            int32_t rdx_18 = var_1b8
            int64_t* rax_20
            
            while (true)
                if (rdx_18 s< 0 || rdx_18 s>= *(r8_10 + 8))
                    rax_20.b = 0
                else
                    rax_20.b = 1
                
                if (rax_20.b == 0)
                    break
                
                if (*(*r8_10 + (sx.q(rdx_18) << 3)) != 0)
                    break
                
                rdx_18 += 1
                var_1b8 = rdx_18
            
            while (true)
                if (rdx_18 s< 0 || rdx_18 s>= *(r8_10 + 8))
                    rax_20.b = 0
                else
                    rax_20.b = 1
                
                if (rax_20.b == 0)
                    break
                
                int64_t* rcx_40 = *((*r8_10)[sx.q(rdx_18)] + 0x30)
                
                if (rcx_40 != 0)
                    rdx_18.b = *(r12 + 0x91) == 0
                    (*(*rcx_40 + 0xae8))(rcx_40, rdx_18, &var_198)
                    rdx_18 = var_1b8
                    r8_10 = var_1c0
                
                do
                    rdx_18 += 1
                    var_1b8 = rdx_18
                    
                    if (rdx_18 s< 0 || rdx_18 s>= *(r8_10 + 8))
                        rax_20.b = 0
                    else
                        rax_20.b = 1
                    
                    if (rax_20.b == 0)
                        break
                while ((*r8_10)[sx.q(rdx_18)] == 0)
            
            int16_t* rbx_5 = var_198
            int64_t rsi_2 = 0
            void* rcx_42 = &rbx_5[sx.q(var_190) * 4]
            uint64_t r14_4 = (rcx_42 - rbx_5 + 7) u>> 3
            
            if (rbx_5 u> rcx_42)
                r14_4 = 0
            
            if (r14_4 != 0)
                do
                    int64_t rdi_2 = *rbx_5
                    
                    if (rdi_2 != 0)
                        EnterCriticalSection(&criticalSection)
                        var_a8 = rdi_2
                        var_a0 = 1
                        
                        if (var_118_1 == var_ec_1)
                            sub_140d186f0(&data_143e1d990, &var_128)
                        
                        var_1c0 = &var_a8
                        var_1b8.q = &var_a0
                        sub_141a29980(&var_120, &var_1b0, &var_1c0, nullptr)
                        LeaveCriticalSection(&criticalSection)
                    
                    rbx_5 = &rbx_5[4]
                    rsi_2 += 1
                while (rsi_2 != r14_4)
            
            uint64_t r15_1 = 0
            int32_t rdx_22 = var_118_1 - var_ec_1
            var_1c0 = nullptr
            var_1b8.q = 0
            
            if (rdx_22 s> 0)
                sub_140638c50(&var_1c0, rdx_22)
                r15_1 = zx.q(var_1b8)
            
            int64_t rdi_3 = r12[0x10]
            int64_t rax_24 = sub_142452380()
            int32_t var_98 = 5
            char var_40_1 = 0
            uint64_t var_90
            sub_142442440(&var_90)
            sub_1405ab0f0(&var_90, rdi_3, rax_24)
            char var_40_2 = 1
            sub_1405b0c60(&var_98)
            int32_t var_1b4
            void var_160
            char var_74
            int64_t rbx_6
            
            if (var_74 == 0)
                int64_t var_68
                int64_t rdi_4 = var_68
                
                while (true)
                    void* rax_25 = sub_14256a090()
                    void* rdx_24 = *(rdi_4 + 0x10)
                    int64_t rax_26 = sx.q(*(rax_25 + 0x38))
                    
                    if (rax_26.d s> *(rdx_24 + 0x38)
                            || *(*(rdx_24 + 0x30) + (rax_26 << 3)) != rax_25 + 0x30)
                        int64_t* rax_28 = var_188
                        void* const rsi_3
                        
                        if (rax_28 == 0)
                            rsi_3 = nullptr
                        else
                            rsi_3 = sub_1421673c0(rax_28, rdi_4)
                        
                        r14_4.b = sub_141dc9840(rdi_4) == *(r12[0x10] + 0x30)
                        EnterCriticalSection(&criticalSection)
                        
                        if (rdi_4 == var_a8)
                            rbx_6 = zx.q(var_a0)
                        else
                            var_a8 = rdi_4
                            sub_140865c40(&var_120, &var_1b0, rdi_4)
                            int64_t rax_31 = sx.q(var_1b0)
                            void* rax_33
                            
                            if (rax_31.d != 0xffffffff)
                                rax_33 = var_120 + rax_31 * 0x18
                            
                            if (rax_31.d == 0xffffffff || rax_33 == 0 || rax_33 == -8)
                                rbx_6.b = 0
                                var_a0 = 0
                            else
                                rbx_6 = zx.q(*(rax_33 + 8))
                                var_a0 = rbx_6.b
                        
                        LeaveCriticalSection(&criticalSection)
                        int64_t* rax_35
                        
                        if (rsi_3 == 0)
                            rax_35.b = 0
                        else
                            rax_35 = var_188
                            
                            if (rax_35 == 0)
                                rax_35.b = 0
                            else
                                void* rdx_28 = rax_35[0x11]
                                
                                if (rdx_28 == 0)
                                    rax_35.b = 0
                                else
                                    sub_140d3a3a0(&performanceCount, rdx_28)
                                    
                                    if (*sub_141fb3050(rsi_3 + 0x30, &var_160, performanceCount)
                                            == 0xffffffff)
                                        rax_35.b = 0
                                    else
                                        rax_35.b = 1
                        
                        uint8_t rax_36
                        
                        if (*(rdi_4 + 0xf0) u< 3 && rax_35.b == 0)
                            rax_36 = sub_141dce3a0(rdi_4)
                        
                        if (*(rdi_4 + 0xf0) u>= 3 || rax_35.b != 0 || rax_36 != 0)
                            rsi_3.b = 0
                        else
                            rsi_3.b = 1
                        
                        void* rax_37 = sub_14252d950()
                        void* rdx_30 = *(rdi_4 + 0x10)
                        int64_t rax_38 = sx.q(*(rax_37 + 0x38))
                        int64_t rcx_60
                        
                        if (rax_38.d s<= *(rdx_30 + 0x38))
                            rcx_60 = rax_38
                        
                        if (rax_38.d s> *(rdx_30 + 0x38)
                                || *(*(rdx_30 + 0x30) + (rcx_60 << 3)) != rax_37 + 0x30)
                            rax_38.b = 0
                        else
                            rax_38.b = 1
                        
                        if (r14_4.b == 0 || rax_38.b != 0 || (rbx_6.b == 0 && rsi_3.b == 0))
                            sub_141dd6120(rdi_4, 1)
                            sub_140d13a10(&var_128, rdi_4)
                            int64_t* rcx_65 = var_188
                            
                            if (rcx_65 != 0)
                                (*(*rcx_65 + 0x348))(rcx_65, rdi_4)
                        else
                            rbx_6 = sx.q(r15_1.d)
                            int32_t rax_39 = (rbx_6 + 1).d
                            var_1b8 = rax_39
                            
                            if (rax_39 s> var_1b4)
                                sub_1405a4d70(&var_1c0)
                            
                            *(var_1c0 + (rbx_6 << 3)) = rdi_4
                    
                    int32_t var_58
                    int32_t r8_18 = var_58
                    int32_t var_80
                    int32_t rdx_34 = var_80
                    r15_1 = var_90
                    int32_t var_78
                    int32_t rsi_5 = var_78 + 1
                    
                    if (rsi_5 s>= r8_18 + rdx_34)
                    label_142447e1c:
                        int64_t var_68_1 = 0
                        char var_74_1 = 1
                        break
                    
                    r14_4 = sx.q(rsi_5) << 3
                    
                    while (true)
                        int64_t var_60
                        int64_t var_88
                        
                        if (rsi_5 s>= rdx_34)
                            rdi_4 = *(var_60 + (sx.q(rsi_5 - rdx_34) << 3))
                        else
                            rdi_4 = *(var_88 + r14_4)
                        int32_t var_70 = var_70 + 1
                        
                        if (rdi_4 != 0)
                            int64_t rax_47 = sub_141dc9840(rdi_4)
                            
                            if (rax_47 != 0)
                                void* const rax_54
                                
                                if ((var_98.b & 1) != 0)
                                    int32_t rax_48 = *(rdi_4 + 0xc)
                                    
                                    if (rax_48 s>= data_143e1d9b4)
                                        rax_54 = nullptr
                                    else
                                        int16_t temp4_1
                                        int32_t temp5_1
                                        temp4_1:temp5_1 = sx.q(rax_48)
                                        uint32_t rdx_36 = zx.d(temp4_1)
                                        int32_t rax_50 = temp5_1 + rdx_36
                                        rax_54 = *(data_143e1d9a0 + (sx.q(rax_50 s>> 0x10) << 3))
                                            + sx.q(zx.d(rax_50.w) - rdx_36) * 0x18
                                
                                if ((var_98.b & 1) == 0 || ((*(rax_54 + 8) u>> 0x1d).b & 1) == 0)
                                    int32_t rcx_73 = var_98
                                    
                                    if (((rcx_73 u>> 1).b & 1) == 0)
                                        goto label_142447d24
                                    
                                    uint64_t rax_58 = sub_1405949a0()
                                    
                                    if (rax_58.b != 0)
                                        rcx_73 = var_98
                                    label_142447d24:
                                        
                                        if (((rcx_73 u>> 2).b & 1) == 0)
                                        label_142447dcd:
                                            
                                            if (Concurrency::details::_CancellationTokenRegistration::_GetToken(
                                                    rax_47) == r15_1)
                                                if (rax_47 == *(r15_1 + 0x30))
                                                    break
                                                
                                                void* rax_60 = sub_1425bd0d0()
                                                void* rdx_39 = *(rdi_4 + 0x10)
                                                int64_t rax_61 = sx.q(*(rax_60 + 0x38))
                                                
                                                if (rax_61.d s> *(rdx_39 + 0x38))
                                                    break
                                                
                                                if (*(*(rdx_39 + 0x30) + (rax_61 << 3))
                                                        != rax_60 + 0x30)
                                                    break
                                        else
                                            if ((*(rax_47 + 0x1f4) & 0x20) == 0
                                                    || (*(rax_47 + 0x1f6) & 8) != 0)
                                                rax_58 = zx.q(*(rax_47 + 0x1f5))
                                            
                                            char r9_2
                                            
                                            if (((*(rax_47 + 0x1f4) & 0x20) != 0
                                                    && (*(rax_47 + 0x1f6) & 8) == 0)
                                                    || (rax_58.b & 0x40) != 0 || rax_58.b s< 0)
                                                r9_2 = 1
                                            else
                                                r9_2 = 0
                                            
                                            void* rdx_38 = *(rax_47 + 0xb8)
                                            char* r8_20 = *(rax_47 + 0x248)
                                            uint8_t rcx_74
                                            
                                            if (rdx_38 != 0)
                                                rax_58 = sx.q(*(rdx_38 + 0x168))
                                                
                                                if (rax_58.d s< 0 || rax_58.d s>= *(rdx_38 + 0x160))
                                                    rcx_74 = 0
                                                else
                                                    rcx_74 = 1
                                            
                                            int64_t rcx_76
                                            
                                            if (rdx_38 == 0 || rcx_74 == 0)
                                                rcx_76 = 0
                                            else
                                                rcx_76 = rax_58 * 0x78 + *(rdx_38 + 0x158)
                                            
                                            if (rcx_76 == 0 || r8_20 == rcx_76)
                                                rcx_76.b = 1
                                            else
                                                rcx_76.b = 0
                                            
                                            if (r8_20 == 0 || *r8_20 == 2)
                                                rax_58.b = 1
                                            else
                                                rax_58.b = 0
                                            
                                            if (rcx_76.b != 0 || rax_58.b != 0)
                                                rax_58.b = 1
                                            
                                            if (r9_2 != 0 && rax_58.b != 0)
                                                goto label_142447dcd
                            
                            r8_18 = var_58
                            rdx_34 = var_80
                        
                        rsi_5 += 1
                        r14_4 += 8
                        
                        if (rsi_5 s>= r8_18 + rdx_34)
                            goto label_142447e1c
                    
                    int64_t var_68_2 = rdi_4
                    var_78 = rsi_5
                    
                    if (var_74 != 0)
                        break
                    
                    r15_1 = zx.q(var_1b8)
            
            sub_142442440(&var_90)
            void* r13_1 = r12[0x10]
            int32_t r14_5 = 0
            
            while (true)
                int64_t rax_64
                
                if (r14_5 s< 0 || r14_5 s>= *(r13_1 + 0x1d0))
                    rax_64.b = 0
                else
                    rax_64.b = 1
                
                if (rax_64.b == 0)
                    break
                
                rax_64 = sub_140d3c6e0(*(r13_1 + 0x1c8) + (sx.q(r14_5) << 3))
                
                if (rax_64 != 0)
                    int64_t* rax_66 = var_188
                    void* const rsi_6
                    
                    if (rax_66 == 0)
                        rsi_6 = nullptr
                    else
                        rsi_6 = sub_1421673c0(rax_66, rax_64)
                    
                    r15_1.b = sub_141dc9840(rax_64) == *(r12[0x10] + 0x30)
                    EnterCriticalSection(&criticalSection)
                    
                    if (rax_64 == var_a8)
                        rbx_6 = zx.q(var_a0)
                    else
                        var_a8 = rax_64
                        sub_140865c40(&var_120, &var_1b0, rax_64)
                        int64_t rax_69 = sx.q(var_1b0)
                        void* rax_71
                        
                        if (rax_69.d != 0xffffffff)
                            rax_71 = var_120 + rax_69 * 0x18
                        
                        if (rax_69.d == 0xffffffff || rax_71 == 0 || rax_71 == -8)
                            rbx_6.b = 0
                            var_a0 = 0
                        else
                            rbx_6 = zx.q(*(rax_71 + 8))
                            var_a0 = rbx_6.b
                    
                    LeaveCriticalSection(&criticalSection)
                    int32_t* rax_73
                    
                    if (rsi_6 == 0)
                        rax_73.b = 0
                    else
                        rax_73 = var_188
                        
                        if (rax_73 == 0)
                            rax_73.b = 0
                        else
                            void* rdx_43 = *(rax_73 + 0x88)
                            
                            if (rdx_43 == 0)
                                rax_73.b = 0
                            else
                                sub_140d3a3a0(&performanceCount, rdx_43)
                                
                                if (*sub_141fb3050(rsi_6 + 0x30, &var_160, performanceCount)
                                        == 0xffffffff)
                                    rax_73.b = 0
                                else
                                    rax_73.b = 1
                    
                    uint8_t rax_74
                    
                    if (*(rax_64 + 0xf0) u< 3 && rax_73.b == 0)
                        rax_74 = sub_141dce3a0(rax_64)
                    
                    if (*(rax_64 + 0xf0) u>= 3 || rax_73.b != 0 || rax_74 != 0)
                        rsi_6.b = 0
                    else
                        rsi_6.b = 1
                    
                    void* rax_75 = sub_14252d950()
                    void* rdx_45 = *(rax_64 + 0x10)
                    int64_t rax_76 = sx.q(*(rax_75 + 0x38))
                    int64_t rcx_91
                    
                    if (rax_76.d s<= *(rdx_45 + 0x38))
                        rcx_91 = rax_76
                    
                    if (rax_76.d s> *(rdx_45 + 0x38)
                            || *(*(rdx_45 + 0x30) + (rcx_91 << 3)) != rax_75 + 0x30)
                        rax_76.b = 0
                    else
                        rax_76.b = 1
                    
                    if (r15_1.b != 0 && rax_76.b == 0 && (rbx_6.b != 0 || rsi_6.b != 0))
                        rbx_6 = sx.q(var_1b8)
                        int32_t rax_77 = (rbx_6 + 1).d
                        var_1b8 = rax_77
                        
                        if (rax_77 s> var_1b4)
                            sub_1405a4d70(&var_1c0)
                        
                        r14_5 += 1
                        *(var_1c0 + (rbx_6 << 3)) = rax_64
                        continue
                    
                    sub_141dd6120(rax_64, 1)
                    sub_140d13a10(&var_128, rax_64)
                    int64_t* rcx_96 = var_188
                    
                    if (rcx_96 != 0)
                        (*(*rcx_96 + 0x348))(rcx_96, rax_64)
                
                r14_5 += 1
            
            int64_t* rcx_97 = var_188
            
            if (rcx_97 != 0)
                sub_142161f60(rcx_97)
            
            int16_t* rsi_7 = var_1c0
            int64_t* r14_6 = nullptr
            int64_t* rdi_6 = nullptr
            bool r12_1 = var_1c8_1 ^ 1
            void* r15_2 = &rsi_7[sx.q(var_1b8) * 4]
            
            if (rsi_7 != r15_2)
                int64_t* r13_2 = var_178
                
                do
                    int64_t* rbx_7 = *rsi_7
                    sub_140d13a10(&var_128, rbx_7)
                    (*(*rbx_7 + 0x138))(rbx_7, 0, *(r13_2[0x11] + 0x30), 0)
                    void* rax_81 = sub_142497110()
                    void* rdx_50 = rbx_7[2]
                    int64_t rax_82 = sx.q(*(rax_81 + 0x38))
                    
                    if (rax_82.d s> *(rdx_50 + 0x38)
                            || *(*(rdx_50 + 0x30) + (rax_82 << 3)) != rax_81 + 0x30)
                        void* rax_84 = sub_1424b14e0()
                        void* rdx_52 = rbx_7[2]
                        int64_t rax_85 = sx.q(*(rax_84 + 0x38))
                        
                        if (rax_85.d s> *(rdx_52 + 0x38)
                                || *(*(rdx_52 + 0x30) + (rax_85 << 3)) != rax_84 + 0x30)
                            void* rax_87 = sub_1424bf010()
                            void* rdx_53 = rbx_7[2]
                            int64_t rax_88 = sx.q(*(rax_87 + 0x38))
                            
                            if (rax_88.d s<= *(rdx_53 + 0x38)
                                    && *(*(rdx_53 + 0x30) + (rax_88 << 3)) == rax_87 + 0x30)
                                rdi_6 = rbx_7
                        else
                            r14_6 = rbx_7
                    else
                        sub_14242beb0(r13_2[0x11], rbx_7)
                    
                    *(rbx_7 + 0x5a) |= 0x80
                    rsi_7 = &rsi_7[4]
                while (rsi_7 != r15_2)
                
                if (r14_6 != 0)
                    void* rsi_8 = r13_2[0x11]
                    *(rsi_8 + 0x128) = r14_6
                    
                    if (rdi_6 != *(rsi_8 + 0x130))
                        *(rsi_8 + 0x130) = rdi_6
                        
                        if (rdi_6 != 0)
                            void* rax_90 = sub_141dc9840(rdi_6)
                            
                            if (rax_90 != 0)
                                void* rax_91 = *(rax_90 + 0x248)
                                
                                if (rax_91 != 0)
                                    bool cond:7_1 = *rax_91 != 0
                                    *(rax_91 + 8) = rdi_6
                                    
                                    if (not(cond:7_1))
                                        *(sub_1424350b0(rsi_8, 2) + 8) = rdi_6
                        
                        int64_t r15_3 = *(rsi_8 + 0x130)
                        r14_6.b = 0
                        *(rsi_8 + 0x5ec) += 1
                        int32_t rax_93 = *(rsi_8 + 0x5e0)
                        int32_t rcx_106 = *(rsi_8 + 0x5ec)
                        int64_t rdi_7 = sx.q(rax_93 - 1)
                        
                        if (rax_93 - 1 s>= 0)
                            int64_t rbx_9 = rdi_7 << 4
                            int64_t temp9_1
                            
                            do
                                int64_t rcx_107 = *(rsi_8 + 0x5d8)
                                
                                if (*(rbx_9 + rcx_107 + 8) == 0)
                                    r14_6.b = 1
                                else
                                    int64_t* rcx_108 = *(rbx_9 + rcx_107)
                                    
                                    if (rcx_108 == 0)
                                        r14_6.b = 1
                                    else if ((*(*rcx_108 + 0x50))(rcx_108, r15_3) == 0)
                                        r14_6.b = 1
                                
                                rbx_9 -= 0x10
                                temp9_1 = rdi_7
                                rdi_7 -= 1
                            while (temp9_1 - 1 s>= 0)
                            rcx_106 = *(rsi_8 + 0x5ec)
                        
                        *(rsi_8 + 0x5ec) = rcx_106 - 1
                        
                        if (r14_6.b != 0)
                            sub_140599630(rsi_8 + 0x5d8, 0)
                    
                    r12_1 = false
            
            r15 = var_178
            sub_14242f730(r15)
            char rdx_56 = *(r15 + 0x91)
            void* rcx_111 = r15[0x10]
            data_143f5e404 += 1
            sub_14242eb40(rcx_111, rdx_56, 1, 0)
            int32_t rax_99 = *(r15[0x10] + 0xc)
            void* const rax_106
            
            if (rax_99 s>= data_143e1d9b4)
                rax_106 = nullptr
            else
                int16_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(rax_99)
                uint32_t rdx_58 = zx.d(temp0_1)
                int32_t rax_101 = temp1_1 + rdx_58
                rax_106 = *(data_143e1d9a0 + (sx.q(rax_101 s>> 0x10) << 3))
                    + sx.q(zx.d(rax_101.w) - rdx_58) * 0x18
            
            *(rax_106 + 8) &= 0xbfffffff
            void* rax_107 = r15[0x10]
            *(rax_107 + 8) &= 0xfffffffd
            void* rbx_10 = r15[0x10]
            int64_t* rax_109
            
            if (sub_141e80b60(rbx_10 + 0x170) == 0)
                void* rcx_118 = data_143f5b298
                
                if (rcx_118 != 0)
                    rax_109 = sub_1423ddb40(rcx_118)
                    goto label_1424482c0
            else
                rax_109 = sub_1405948a0(rbx_10 + 0x170)
            label_1424482c0:
                
                if (rax_109 != 0)
                    sub_141e7b450(rax_109, r15[0x10], 1)
            void* rcx_120 = *(r15[0x10] + 0x58)
            
            if (rcx_120 == 0)
                r14_6.b = 0
            else
                r14_6 = zx.q(*(rcx_120 + 0x244) u>> 1)
            
            int32_t rax_112 = *(r15[0x11] + 0xc)
            void* const rax_119
            
            if (rax_112 s>= data_143e1d9b4)
                rax_119 = nullptr
            else
                int16_t temp6_1
                int32_t temp7_1
                temp6_1:temp7_1 = sx.q(rax_112)
                uint32_t rdx_62 = zx.d(temp6_1)
                int32_t rax_114 = temp7_1 + rdx_62
                rax_119 = *(data_143e1d9a0 + (sx.q(rax_114 s>> 0x10) << 3))
                    + sx.q(zx.d(rax_114.w) - rdx_62) * 0x18
            
            *(rax_119 + 8) |= 0x40000000
            char* rax_120 = sub_1423de4f0(data_143f5b298, r15[0x10])
            sub_1423efa60(rax_120, r15[0x11])
            *(r15[0x11] + 0x11a) = *rax_120
            
            if (*rax_120 == 3)
                void* rax_121 = sub_140d21d80(r15[0x11])
                *(rax_121 + 0x50) |= 0x100000
            
            int64_t* rax_122 = var_188
            void* rdx_66
            
            if (rax_122 != 0)
                rax_122, rdx_66 = sub_1421709d0(rax_122)
            
            data_143f5e920 = 0
            int32_t rbx_11 = 0
            void* rdi_8 = r15[0x10]
            
            while (true)
                if (rbx_11 s< 0 || rbx_11 s>= *(rdi_8 + 0x150))
                    rax_122.b = 0
                else
                    rax_122.b = 1
                
                if (rax_122.b == 0)
                    break
                
                void* rcx_131 = (*(rdi_8 + 0x148))[sx.q(rbx_11)]
                
                if (rcx_131 != 0)
                    void* rcx_132 = *(rcx_131 + 0x20)
                    
                    if ((*(rcx_132 + 0x598) & 1) == 0)
                        rax_122, rdx_66 = sub_14243c790(rcx_132)
                
                rbx_11 += 1
            
            void* rax_123 = r15[0x10]
            int64_t rdi_9 = 0
            void** rbx_12 = *(rax_123 + 0x98)
            uint64_t rsi_11 = sx.q(*(rax_123 + 0xa0)) << 3 u>> 3
            
            if (rbx_12 u> &rbx_12[sx.q(*(rax_123 + 0xa0))])
                rsi_11 = 0
            
            if (rsi_11 != 0)
                do
                    void* rcx_133 = *(*rbx_12 + 0x128)
                    
                    if (rcx_133 != 0)
                        void* rcx_134 = *(rcx_133 + 0x20)
                        
                        if ((*(rcx_134 + 0x598) & 1) == 0)
                            sub_14243c790(rcx_134)
                    
                    rbx_12 = &rbx_12[1]
                    rdi_9 += 1
                while (rdi_9 != rsi_11)
            
            r15[0x10] = 0
            rdx_66.b = 1
            char r8_32 = sub_140cb0ba0(0, rdx_66.b)
            int64_t* rax_127 = var_188
            
            if (rax_127 != 0)
                r8_32 = sub_1421707d0(rax_127)
            
            data_143f5e920 = r15[0x11]
            void* rsi_12 = r15[0x11]
            
            if ((*(rsi_12 + 0x11b) & 0x40) == 0)
                var_1a0 = 0
                performanceCount.d = (performanceCount.d & 0xffffff7f) | 0x37f
                performanceCount.o = performanceCount.o
                r8_32 = sub_142439130(rsi_12, &performanceCount)
                rsi_12 = r15[0x11]
            
            r15.b = 1
            
            if (r12_1 == 0)
                r12 = var_178
            else
                int64_t* rcx_137 = *(rsi_12 + 0x38)
                
                if (rcx_137 != 0)
                label_1424484f8:
                    char rax_133
                    rax_133, r8_32 = (*(*rcx_137 + 0x368))(rcx_137)
                    
                    if (rax_133 != 0)
                        goto label_14244850a
                    
                    r12 = var_178
                else
                    rcx_137 = *(rsi_12 + 0xf0)
                    
                    if (rcx_137 != 0)
                        goto label_1424484f8
                    
                label_14244850a:
                    r12 = var_178
                    
                    if (*(rsi_12 + 0x128) == 0)
                        int64_t* rbx_13 = *(rsi_12 + 0x188)
                        int64_t rax_135
                        rax_135, r8_32 =
                            (*(*rbx_13 + 0x330))(rbx_13, sub_1423cf790(&var_98, r12), rsi_12)
                        *(rsi_12 + 0x128) = rax_135
            
            if (*(r12 + 0x91) != 0 && var_1c8_1 == 0)
                void* rbx_14 = r12[0x11]
                void** rax_137
                
                if (sub_141e80b60(rbx_14 + 0x170) == 0)
                    void* rcx_142 = data_143f5b298
                    
                    if (rcx_142 != 0)
                        rax_137, r8_32 = sub_1423ddb40(rcx_142)
                        goto label_1424485a6
                else
                    rax_137 = sub_1405948a0(rbx_14 + 0x170)
                label_1424485a6:
                    
                    if (rax_137 != 0)
                        void* rdx_71 = nullptr
                        void* rcx_143 = *(r12[0x11] + 0x30)
                        
                        if (rcx_143 != 0)
                            rdx_71.b = 1
                            rdx_71 = sub_1420e4e60(rcx_143)
                        
                        sub_141e86640(rax_137, *(rdx_71 + 0x2e0), r8_32)
                void* rcx_145 = *(r12[0x11] + 0x58)
                
                if (rcx_145 != 0)
                    *(rcx_145 + 0x244) &= 0xfffffffd
                    *(rcx_145 + 0x244) |= (zx.d(r14_6.b) & 1) * 2
            
            int64_t var_158[0x6]
            sub_140b56c10(&var_158, 1, u"    SeamlessTravel FlushLevelStreaming ", 0, 2)
            sub_142435600(r12[0x11], 2)
            sub_140b56d00(&var_158)
            sub_14242f9a0(r12[0x11])
            sub_14243a0c0(r12[0x11], r12, 0, nullptr)
            int32_t var_1d8_1
            var_1d8_1.b = 0
            sub_141de0ff0(r12[0x11], 1, nullptr, 1, var_1d8_1.b)
            performanceCount = *(sub_140d21d80(r12[0x11]) + 0x18)
            sub_140b63b70(&performanceCount, &var_178)
            int64_t* rax_145 = sub_142441630(&var_188, &var_178)
            int16_t* rdx_77
            
            if (rax_145[1].d == 0)
                rdx_77 = &data_142d40450
            else
                rdx_77 = *rax_145
            
            sub_140b58260(&var_168, rdx_77, 1)
            int64_t* rcx_157 = var_188
            
            if (rcx_157 != 0)
                sub_140a74f90(rcx_157)
            
            int64_t* rcx_158 = var_178
            
            if (rcx_158 != 0)
                sub_140a74f90(rcx_158)
            
            sub_1423ddac0(data_143f5b298, &performanceCount, r12[0x11])
            int64_t* performanceCount_1 = performanceCount
            int32_t rdx_79 = var_1a0
            int64_t* rax_146
            
            while (true)
                if (rdx_79 s< 0 || rdx_79 s>= performanceCount_1[1].d)
                    rax_146.b = 0
                else
                    rax_146.b = 1
                
                if (rax_146.b == 0)
                    break
                
                if ((*performanceCount_1)[sx.q(rdx_79)] != 0)
                    break
                
                rdx_79 += 1
                var_1a0 = rdx_79
            
            while (true)
                if (rdx_79 s< 0 || rdx_79 s>= performanceCount_1[1].d)
                    rax_146.b = 0
                else
                    rax_146.b = 1
                
                if (rax_146.b == 0)
                    break
                
                int64_t* rcx_163 = *((*performanceCount_1)[sx.q(rdx_79)] + 0x30)
                
                if (rcx_163 != 0)
                    (*(*rcx_163 + 0xa88))(rcx_163, var_168, zx.q(*(r12 + 0x91)))
                    sub_14256a610(*(*(*performanceCount + (sx.q(var_1a0) << 3)) + 0x30), var_168)
                    rdx_79 = var_1a0
                    performanceCount_1 = performanceCount
                
                do
                    rdx_79 += 1
                    var_1a0 = rdx_79
                    
                    if (rdx_79 s< 0 || rdx_79 s>= performanceCount_1[1].d)
                        rax_146.b = 0
                    else
                        rax_146.b = 1
                    
                    if (rax_146.b == 0)
                        break
                while ((*performanceCount_1)[sx.q(rdx_79)] == 0)
            
            void* rax_149 = r12[0x11]
            *(rax_149 + 0x11b) |= 1
            
            if (*(r12 + 0x91) == 0)
                bool cond:10_1 = *(r12 + 0x92) != 0
                r12[0x10] = r12[0x11]
                *(r12 + 0x91) = 1
                
                if (not(cond:10_1))
                    sub_142445d20(r12)
            else
                sub_141fa75e0(&rax_120[0xd0], r12)
                r12[0x12].b = 0
                QueryPerformanceCounter(&performanceCount)
                sub_140b3ce60()
                void* rbx_16 = r12[0x11]
                int64_t* rcx_171 = *(rbx_16 + 0x128)
                
                if (rcx_171 != 0)
                    (*(*rcx_171 + 0x720))(rcx_171)
                    rbx_16 = r12[0x11]
                
                int64_t* rcx_172 = *(rbx_16 + 0x128)
                
                if (rcx_172 != 0)
                    (*(*rcx_172 + 0x6b0))(rcx_172)
                    int64_t* rcx_173 = *(rbx_16 + 0x138)
                    
                    if (rcx_173 != 0)
                        (*(*rcx_173 + 0x278))(rcx_173)
                
                sub_140599090(rbx_16 + 0x5c0)
                sub_140920c10(&data_1439aa970, r12[0x11])
            
            int16_t* rax_154 = var_1c0
            
            if (rax_154 != 0)
                sub_140a74f90(rax_154)
            
            int16_t* rcx_177 = var_198
            
            if (rcx_177 != 0)
                sub_140a74f90(rcx_177)
            
            var_128 = &data_142ead108
            sub_140d2aba0(&var_128)
            DeleteCriticalSection(&criticalSection)
            sub_1405ae080(&var_120)
            goto label_142448907
        
        sub_140a2e390(&var_198, u"Travel aborted - new world is the same as current world", r8_1)
        sub_14242e880(r12)
        rcx_6 = var_198
    label_1424474be:
        
        if (rcx_6 == 0)
            result = 0
        else
            sub_140a74f90(rcx_6)
            result = 0
else
label_142448907:
    result = 0
    
    if (r15.b != 0)
        result = r12[0x11]
        r12[0x11] = 0
        r12[0xf] = 0

__security_check_cookie(rax_1 ^ &var_1f8)
return result
