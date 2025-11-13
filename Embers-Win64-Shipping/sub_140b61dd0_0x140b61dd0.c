// 函数: sub_140b61dd0
// 地址: 0x140b61dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_6d8
int64_t rax_1 = __security_cookie ^ &var_6d8
int64_t* r12 = arg1
void* var_600 = arg2
arg1.b = 1
void* rsi = arg2
void* rax_2 = sub_140b66930(arg1.b)
int32_t rbx = 0
void* rdi_2

if (rax_2 == 0)
    rdi_2 = nullptr
else
    int64_t rsi_1 = -1
    
    do
        rsi_1 += 1
    while ((*u"CrashReportClient")[rsi_1] != 0)
    
    int16_t rcx = *rax_2
    void* rdi_1 = rax_2 + 2
    
    if (rcx == 0)
    label_140b61e8b:
        rsi = var_600
        rdi_2 = nullptr
    else
        while (true)
            int32_t rax_4
            rax_4.w = sbb.w(rcx - 0x61, rcx - 0x61, zx.d(rcx) - 0x61 u< 0x1a)
            rax_4.w &= 0x20
            
            if (rcx - rax_4.w == 0x43 && sub_140a546e0(rdi_1, &(*CrashReportClient")[1], 
                    sx.q(rsi_1.d - 1)) == 0)
                rsi = var_600
                rdi_2 = rdi_1 - 2
                break
            
            rcx = *rdi_1
            rdi_1 += 2
            
            if (rcx == 0)
                goto label_140b61e8b

int64_t r15

if (sub_140a4aa30() != 0 || arg3 == 1)
    r15.b = 1
else
    r15.b = 0

void* rcx_2 = data_143ddb400
char var_676 = r15.b
char var_675 = 0
int16_t** var_6b8

if (rcx_2 != 0 && arg3 != 1)
    var_6b8 = &data_143de5780
    sub_140af2fd0(rcx_2, u"CrashReportClient", u"bImplicitSend", &var_675, var_6b8)
    rcx_2 = data_143ddb400

char var_678 = 1

if (rcx_2 != 0)
    var_6b8 = &data_143de57c0
    sub_140af2fd0(rcx_2, /Script/UnrealEd.CrashReportsPrivacySettings", bSendUnattendedBugReports", 
        &var_678, var_6b8)
    rcx_2 = data_143ddb400

char var_677 = 1

if (rcx_2 != 0)
    var_6b8 = &data_143de57c0
    sub_140af2fd0(rcx_2, /Script/UnrealEd.AnalyticsPrivacySettings", bSendUsageData", &var_677, 
        var_6b8)

char rax_7

if (sub_1405949a0() == 0)
    rax_7 = var_678
else
    rax_7 = 0
    var_678 = 0
    var_677 = 0

if ((r15.b == 0 || rax_7 != 0) && rdi_2 == 0)
    void var_268
    memset(&var_268, 0, 0x212)
    wchar16 var_368[0x80]
    sub_140a493f0(r12, &var_368, 0x80)
    int64_t var_5c8
    sub_140a470a0(&var_5c8)
    int64_t* rax_8 = sub_140b257f0()
    int16_t* const r13_1 = &data_142d40450
    int16_t* const rcx_6
    
    if (rax_8[1].d == 0)
        rcx_6 = &data_142d40450
    else
        rcx_6 = *rax_8
    
    int16_t* const var_3b8 = rcx_6
    wchar16 const* const var_3b0_1 = u"Crashes"
    uint64_t var_598 = 0
    wchar16 (* var_3a8_1)[0x80] = &var_368
    int32_t var_590_1 = 0
    sub_140b0f5f0(&var_598, &var_3b8, 3)
    sub_140a464c0()
    int16_t* const r8_1 = &data_142d40450
    
    if (var_590_1 != 0)
        r8_1 = var_598
    
    char const (* r9_4)[0x4] = data_14399ea08
    int16_t* var_650
    (*(r9_4 + 0x100))(&data_14399ea08, &var_650, r8_1, r9_4, var_6b8)
    sub_140a464c0()
    int16_t* const rdx_3 = &data_142d40450
    int64_t r8_2
    r8_2.b = 1
    int32_t var_648
    
    if (var_648 != 0)
        rdx_3 = var_650
    
    char const (* r9_5)[0x4] = data_14399ea08
    int64_t i_1 = 2
    
    if ((*(r9_5 + 0x58))(&data_14399ea08, rdx_3, r8_2, r9_5) == 0)
    label_140b627cb:
        
        if (var_676 == 0)
            sub_140a42270(data_143ddb418)
            wchar16* rax_26 = sub_140a473e0()
            int64_t var_620 = 0
            int64_t var_618_1 = 0
            int32_t rdx_35 = 0
            int32_t rcx_71 = 0
            
            if (rax_26 != 0 && *rax_26 != 0)
                int64_t rdi_10 = -1
                
                do
                    rdi_10 += 1
                while (rax_26[rdi_10] != 0)
                
                if (rdi_10.d + 1 s> 0)
                    sub_1405947f0(&var_620, rdi_10.d + 1)
                    rcx_71 = var_618_1:4.d
                    rdx_35 = var_618_1.d
                
                int32_t rax_27 = rdi_10.d + 1 + rdx_35
                var_618_1.d = rax_27
                
                if (rax_27 s> rcx_71)
                    sub_140594770(&var_620)
                
                UnDecorator::getReferenceType(var_620, rax_26, (rdi_10.d + 1) * 2)
            
            void var_438
            int64_t* rax_28 = sub_140aae2f0(&var_438, &var_620)
            void var_450
            int64_t* rax_29 = sub_140aae420(&var_450, &var_5c8)
            void var_490
            char* var_460
            char** rax_31 = sub_140a96390(&var_460, 
                _vfprintf_p_l(&var_490, The {0} {1} has crashed and will close", MessageDialog"))
            int64_t var_408_1 = *rax_29
            void* rcx_80 = rax_29[1]
            int32_t var_418_1 = 4
            void* var_400_1 = rcx_80
            
            if (rcx_80 != 0)
                *(rcx_80 + 8) += 1
            
            int32_t var_3f8_1 = rax_29[2].d
            int64_t var_3d8_1 = *rax_28
            void* rax_34 = rax_28[1]
            char var_3f0_1 = 1
            int32_t var_3e8_1 = 4
            void* var_3d0_1 = rax_34
            
            if (rax_34 != 0)
                *(rax_34 + 8) += 1
            
            int32_t var_3c8_1 = rax_28[2].d
            char var_3c0_1 = 1
            void* var_538 = nullptr
            int32_t var_530_1 = 2
            sub_1405a4b40(&var_538, 2, 0)
            void var_410
            void* rdx_41 = &var_410
            int64_t* rcx_83 = var_538 + 8
            int32_t i_4 = 2
            int32_t i
            
            do
                rcx_83[-1].d = *(rdx_41 - 8)
                *rcx_83 = *rdx_41
                *rcx_83 = *rdx_41
                *rcx_83 = *rdx_41
                *rcx_83 = *rdx_41
                rcx_83[4].b = 0
                
                if (*(rdx_41 + 0x20) != 0)
                    rcx_83[1] = *(rdx_41 + 8)
                    void* rax_42 = *(rdx_41 + 0x10)
                    rcx_83[2] = rax_42
                    
                    if (rax_42 != 0)
                        *(rax_42 + 8) += 1
                    
                    rcx_83[3].d = *(rdx_41 + 0x18)
                    rcx_83[4].b = 1
                
                rcx_83 = &rcx_83[6]
                rdx_41 += 0x30
                i = i_4
                i_4 -= 1
            while (i != 1)
            char* var_4f0 = *rax_31
            void* rax_45 = rax_31[1]
            void* var_4e8_1 = rax_45
            
            if (rax_45 != 0)
                *(rax_45 + 8) += 1
            
            void var_4a8
            int64_t* rax_46 = sub_140aac870(&var_4a8, &var_4f0, &var_538)
            int64_t var_528 = *rax_46
            int64_t* rcx_86 = rax_46[1]
            
            if (rcx_86 != 0)
                rcx_86[1].d += 1
            
            int32_t var_518_1 = rax_46[2].d
            int64_t* var_4a0
            
            if (var_4a0 != 0)
                var_4a0[1].d -= 1
                
                if (var_4a0[1].d == 1)
                    (**var_4a0)(var_4a0)
                    int32_t rax_50 = *(var_4a0 + 0xc)
                    *(var_4a0 + 0xc) -= 1
                    
                    if (rax_50 == 1)
                        (*(*var_4a0 + 8))(var_4a0, 1)
            
            sub_140596f50(&var_538)
            int128_t var_390
            int128_t* rsi_11 = &var_390
            
            do
                i_1 -= 1
                rsi_11 = &rsi_11[-3]
                
                if (*rsi_11 != 0)
                    *rsi_11 = 0
                    int64_t* rdi_13 = rsi_11[-1].q
                    
                    if (rdi_13 != 0)
                        rdi_13[1].d -= 1
                        
                        if (rdi_13[1].d == 1)
                            (**rdi_13)(rdi_13)
                            int32_t rax_54 = *(rdi_13 + 0xc)
                            *(rdi_13 + 0xc) -= 1
                            
                            if (rax_54 == 1)
                                (*(*rdi_13 + 8))(rdi_13, 1)
            while (i_1 != 0)
            
            int64_t* rdi_14 = rax_31[1]
            
            if (rdi_14 != 0)
                rdi_14[1].d -= 1
                
                if (rdi_14[1].d == 1)
                    (**rdi_14)(rdi_14)
                    int32_t rax_58 = *(rdi_14 + 0xc)
                    *(rdi_14 + 0xc) -= 1
                    
                    if (rax_58 == 1)
                        (*(*rdi_14 + 8))(rdi_14, zx.q((i_1 + 1).d))
            
            int64_t* rdi_15 = rax_29[1]
            
            if (rdi_15 != 0)
                rdi_15[1].d -= 1
                
                if (rdi_15[1].d == 1)
                    (**rdi_15)(rdi_15)
                    int32_t rax_62 = *(rdi_15 + 0xc)
                    *(rdi_15 + 0xc) -= 1
                    
                    if (rax_62 == 1)
                        (*(*rdi_15 + 8))(rdi_15, 1)
            
            int64_t* rdi_16 = rax_28[1]
            
            if (rdi_16 != 0)
                rdi_16[1].d -= 1
                
                if (rdi_16[1].d == 1)
                    (**rdi_16)(rdi_16)
                    int32_t rax_66 = *(rdi_16 + 0xc)
                    *(rdi_16 + 0xc) -= 1
                    
                    if (rax_66 == 1)
                        (*(*rdi_16 + 8))(rdi_16, 1)
            
            int64_t* var_488
            
            if (var_488 != 0)
                var_488[1].d -= 1
                
                if (var_488[1].d == 1)
                    (**var_488)(var_488)
                    int32_t rax_70 = *(var_488 + 0xc)
                    *(var_488 + 0xc) -= 1
                    
                    if (rax_70 == 1)
                        (*(*var_488 + 8))(var_488, 1)
            
            int64_t rcx_100 = var_620
            
            if (rcx_100 != 0)
                sub_140a74f90(rcx_100)
            
            bool cond:6_1 = data_143ddb420 == 0
            int32_t rcx_101 = 0
            int64_t var_610 = 0
            int64_t var_608_1 = 0
            
            if (not(cond:6_1))
                int64_t rdi_18 = -1
                
                do
                    rdi_18 += 1
                while ((&data_143ddb420)[rdi_18] != 0)
                
                if (rdi_18.d + 1 s> 0)
                    sub_1405947f0(&var_610, rdi_18.d + 1)
                    rcx_101 = var_608_1:4.d
                    rbx = var_608_1.d
                
                int32_t rax_72 = rdi_18.d + 1 + rbx
                var_608_1.d = rax_72
                
                if (rax_72 s> rcx_101)
                    sub_140594770(&var_610)
                
                UnDecorator::getReferenceType(var_610, &data_143ddb420, (rdi_18.d + 1) * 2)
            
            void var_478
            sub_140b21610(0, sub_140aae2f0(&var_478, &var_610), &var_528)
            int64_t* var_470
            
            if (var_470 != 0)
                var_470[1].d -= 1
                
                if (var_470[1].d == 1)
                    (**var_470)(var_470)
                    int32_t rax_76 = *(var_470 + 0xc)
                    *(var_470 + 0xc) -= 1
                    
                    if (rax_76 == 1)
                        (*(*var_470 + 8))(var_470, 1)
            
            int64_t rcx_108 = var_610
            
            if (rcx_108 != 0)
                sub_140a74f90(rcx_108)
            
            if (rcx_86 != 0)
                rcx_86[1].d -= 1
                
                if (rcx_86[1].d == 1)
                    (**rcx_86)(rcx_86)
                    int32_t rax_80 = *(rcx_86 + 0xc)
                    *(rcx_86 + 0xc) -= 1
                    
                    if (rax_80 == 1)
                        (*(*rcx_86 + 8))(rcx_86, 1)
    else
        int16_t* const rax_10 = &data_142d40450
        uint64_t var_5a8 = 0
        
        if (var_648 != 0)
            rax_10 = var_650
        
        int16_t* const var_510 = rax_10
        wchar16 const* const var_508_1 = u"CrashContext.runtime-xml"
        int32_t var_5a0_1 = 0
        sub_140b0f5f0(&var_5a8, &var_510, 2)
        int16_t* const rdx_5 = &data_142d40450
        
        if (var_5a0_1 != 0)
            rdx_5 = var_5a8
        
        (*(*r12 + 8))(r12, rdx_5)
        int16_t* const rdx_6 = &data_142d40450
        
        if (var_648 != 0)
            rdx_6 = var_650
        
        (*(*r12 + 0x28))(r12, rdx_6, rsi)
        sub_140a421d0(&var_650)
        
        if (data_143de542e == 0)
            int16_t* const r8_4 = &data_142d40450
            
            if (var_648 != 0)
                r8_4 = var_650
            
            int16_t* var_640
            sub_140a2e390(&var_640, u""%s"", r8_4)
            
            if (var_677 == 0)
                sub_140a20ba0(&var_640, u" -NoAnalytics ", 0xe)
            
            TEB* gsbase
            
            if (data_143cd80cc s>
                    *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                _Init_thread_header(&data_143cd80cc)
                
                if (data_143cd80cc == 0xffffffff)
                    sub_140af2b60()
                    data_143cd80c8 = sub_140b21a10(&data_143dbb3f0, u"nullrhi")
                    _Init_thread_footer(&data_143cd80cc)
            
            if (data_143de5426 == 0)
                if (data_143cd80c8 != 0)
                    rdi_2.b = 1
                else
                    rdi_2.b = 0
            else if (data_143de5427 == 0 || data_143cd80c8 != 0)
                rdi_2.b = 1
            else
                rdi_2.b = 0
            
            wchar16 const* const rdx_7
            int32_t r8_5
            
            if (var_675 != 0)
                rdx_7 = u" -Unattended -ImplicitSend"
                r8_5 = 0x1a
            label_140b62198:
                sub_140a20ba0(&var_640, rdx_7, r8_5)
                
                if (rdi_2.b != 0)
                    sub_140a20ba0(&var_640, u" -nullrhi", 9)
            else if (var_676 != 0 || rdi_2.b != 0)
                rdx_7 = u" -Unattended"
                r8_5 = 0xc
                goto label_140b62198
            uint64_t var_670 = 0
            int64_t var_668_1 = 0
            sub_1405947f0(&var_670, 0xb)
            int32_t r12_1 = var_668_1:4.d
            int32_t rdi_3 = var_668_1.d + 0xb
            var_668_1.d = rdi_3
            
            if (rdi_3 s> r12_1)
                sub_140594770(&var_670)
                r12_1 = var_668_1:4.d
                rdi_3 = var_668_1.d
            
            uint64_t r14_1 = var_670
            UnDecorator::getReferenceType(r14_1, u" -AppName=", 0x16)
            uint64_t rsi_3
            int32_t rdi_4
            uint64_t r12_3
            int32_t var_5c0
            uint64_t var_578
            
            if (rdi_3 s> 1)
                int32_t rsi_4 = var_5c0 - 1
                
                if (var_5c0 == 0)
                    rsi_4 = 0
                
                int32_t rax_16
                
                if (rdi_3 == 0)
                    rax_16 = rdi_3 + 1
                
                if (rdi_3 != 0 || rsi_4 == 0)
                    rax_16 = 0
                
                uint64_t var_5f8 = r14_1
                int32_t rdx_12 = rax_16 + rsi_4 + rdi_3
                var_670 = 0
                r14_1 = 0
                int32_t var_5ec_1 = r12_1
                
                if (rdx_12 s> r12_1)
                    sub_1405947f0(&var_5f8, rdx_12)
                
                sub_140a20ba0(&var_5f8, var_5c8, rsi_4)
                rsi_3 = var_5f8
                rdi_4 = rdi_3
                var_578 = rsi_3
                var_5f8 = 0
                int32_t var_570_2 = rdi_4
                int32_t var_5f0_1
                var_5f0_1.q = 0
                r12_3 = rsi_3
            else
                rdi_4 = var_5c0
                rsi_3 = 0
                int64_t r12_2 = var_5c8
                var_578 = 0
                
                if (rdi_4 != 0)
                    sub_1405a4c70(&var_578, rdi_4, 0)
                    rsi_3 = var_578
                    memcpy(rsi_3, r12_2, rdi_4 * 2)
                    r12_3 = rsi_3
                else
                    r12_3 = 0
            int32_t r8_9 = rdi_4 - 1
            
            if (rdi_4 == 0)
                r8_9 = 0
            
            sub_140a20ba0(&var_640, rsi_3, r8_9)
            
            if (r12_3 != 0)
                sub_140a74f90(r12_3)
            
            if (r14_1 != 0)
                sub_140a74f90(r14_1)
            
            int64_t var_630 = 0
            int64_t var_628_1 = 0
            sub_1405947f0(&var_630, 0xd)
            int32_t r12_4 = var_628_1:4.d
            int32_t rsi_5 = var_628_1.d + 0xd
            var_628_1.d = rsi_5
            
            if (rsi_5 s> r12_4)
                sub_140594770(&var_630)
                r12_4 = var_628_1:4.d
                rsi_5 = var_628_1.d
            
            int64_t r14_2 = var_630
            UnDecorator::getReferenceType(r14_2, u" -CrashGUID=", 0x1a)
            
            if (var_368[0] != 0)
                int64_t rdi_5 = -1
                
                do
                    rdi_5 += 1
                while (var_368[rdi_5] != 0)
                
                int32_t rax_17
                
                if (rsi_5 == 0)
                    rax_17 = rsi_5 + 1
                
                if (rsi_5 != 0 || rdi_5.d == 0)
                    rax_17 = 0
                
                int64_t var_5e8 = r14_2
                int32_t rdx_17 = rdi_5.d + rsi_5 + rax_17
                int32_t var_5dc_1 = r12_4
                
                if (rdx_17 s> r12_4)
                    sub_1405947f0(&var_5e8, rdx_17)
                
                sub_140a20ba0(&var_5e8, &var_368, rdi_5.d)
                r14_2 = var_5e8
                var_5e8 = 0
                int32_t var_5e0_1
                var_5e0_1.q = 0
            
            int32_t r8_11 = rsi_5 - 1
            
            if (rsi_5 == 0)
                r8_11 = 0
            
            sub_140a20ba0(&var_640, r14_2, r8_11)
            
            if (r14_2 != 0)
                sub_140a74f90(r14_2)
            
            int64_t var_588
            sub_140b67cf0(&var_588)
            int32_t var_580
            
            if (var_580 s> 1)
                uint64_t var_660 = 0
                int64_t var_658_1 = 0
                sub_1405947f0(&var_660, 0x10)
                int32_t r12_5 = var_658_1:4.d
                int32_t rdi_6 = var_658_1.d + 0x10
                var_658_1.d = rdi_6
                
                if (rdi_6 s> r12_5)
                    sub_140594770(&var_660)
                    r12_5 = var_658_1:4.d
                    rdi_6 = var_658_1.d
                
                uint64_t r14_3 = var_660
                UnDecorator::getReferenceType(r14_3, u" -DebugSymbols=", 0x20)
                uint64_t rsi_6
                int32_t rdi_7
                uint64_t r12_7
                uint64_t var_568
                
                if (rdi_6 s> 1)
                    int32_t rsi_7 = var_580 - 1
                    
                    if (var_580 == 0)
                        rsi_7 = 0
                    
                    int32_t rax_19
                    
                    if (rdi_6 == 0)
                        rax_19 = rdi_6 + 1
                    
                    if (rdi_6 != 0 || rsi_7 == 0)
                        rax_19 = 0
                    
                    uint64_t var_5d8 = r14_3
                    int32_t rdx_24 = rsi_7 + rax_19 + rdi_6
                    var_660 = 0
                    r14_3 = 0
                    int32_t var_5cc_1 = r12_5
                    
                    if (rdx_24 s> r12_5)
                        sub_1405947f0(&var_5d8, rdx_24)
                    
                    sub_140a20ba0(&var_5d8, var_588, rsi_7)
                    rsi_6 = var_5d8
                    rdi_7 = rdi_6
                    var_568 = rsi_6
                    var_5d8 = 0
                    int32_t var_560_2 = rdi_7
                    int32_t var_5d0_1
                    var_5d0_1.q = 0
                    r12_7 = rsi_6
                else
                    rdi_7 = var_580
                    rsi_6 = 0
                    int64_t r12_6 = var_588
                    var_568 = 0
                    
                    if (rdi_7 != 0)
                        sub_1405a4c70(&var_568, rdi_7, 0)
                        rsi_6 = var_568
                        memcpy(rsi_6, r12_6, rdi_7 * 2)
                        r12_7 = rsi_6
                    else
                        r12_7 = 0
                int32_t r8_15 = rdi_7 - 1
                
                if (rdi_7 == 0)
                    r8_15 = 0
                
                sub_140a20ba0(&var_640, rsi_6, r8_15)
                
                if (r12_7 != 0)
                    sub_140a74f90(r12_7)
                
                if (r14_3 != 0)
                    sub_140a74f90(r14_3)
            
            wchar16* r14_4 = nullptr
            uint64_t rdi_8 = zx.q(((GetDllDirectoryW(0, nullptr) << 1) + 2).d)
            
            if (rdi_8.d != 0)
                wchar16* rax_21 = sub_140a82f30(zx.q(rdi_8.d), 0)
                r14_4 = rax_21
                
                if (rax_21 != 0)
                    memset(rax_21, 0, zx.q(rdi_8.d))
                    GetDllDirectoryW(rdi_8.d, r14_4)
                    SetDllDirectoryW(nullptr)
            
            int64_t var_558 = 0
            int32_t var_550_1 = 0
            sub_140af2b60()
            
            if (sub_140b2acc0(&data_143dbb3f0, u"AbsCrashReportClientLog=", &var_558, 1) != 0)
                rdi_8 = sx.q(var_550_1)
                int64_t rsi_9 = var_558
                int64_t var_548 = 0
                int32_t var_540_1 = rdi_8.d
                
                if (rdi_8.d != 0)
                    sub_1405a4c70(&var_548, rdi_8.d, 0)
                    memcpy(var_548, rsi_9, rdi_8.d * 2)
                else
                    int32_t var_53c_1 = 0
                
                void var_4c8
                sub_140b2f3e0(&var_4c8, &var_548)
                uint64_t var_5b8 = 0
                int32_t i_5 = 1
                sub_14083a1f0(&var_5b8, 1, 0)
                sub_140b2f340(var_5b8, &var_4c8)
                int64_t var_4d8
                int64_t* rax_23 = sub_140b3b4b0(&var_4d8, u" -abslog="{0}"", &var_5b8)
                int32_t rcx_56 = rax_23[1].d
                int32_t r8_21 = rcx_56 - 1
                
                if (rcx_56 == 0)
                    r8_21 = 0
                
                sub_140a20ba0(&var_640, *rax_23, r8_21)
                int64_t rcx_58 = var_4d8
                
                if (rcx_58 != 0)
                    sub_140a74f90(rcx_58)
                
                int32_t i_3 = i_5
                
                if (i_3 != 0)
                    rdi_8 = var_5b8 + 0x10
                    int32_t i_2
                    
                    do
                        int64_t rcx_59 = *rdi_8
                        
                        if (rcx_59 != 0)
                            sub_140a74f90(rcx_59)
                        
                        rdi_8 += 0x20
                        i_2 = i_3
                        i_3 -= 1
                    while (i_2 != 1)
                
                uint64_t rcx_60 = var_5b8
                
                if (rcx_60 != 0)
                    sub_140a74f90(rcx_60)
                
                int64_t var_4b8
                
                if (var_4b8 != 0)
                    sub_140a74f90(var_4b8)
            
            int32_t var_4f8_1 = 0x109
            var_600 = &var_268
            int128_t var_3a0
            __builtin_memcpy(&var_3a0, u"CrashReportClien", 0x20)
            void** var_500 = &var_600
            uint64_t var_380_1 = 0x780065002e0074
            int32_t var_378_1 = 0x65
            
            if (sub_140b5bae0(&var_500, &var_3a0) == 0)
                rdi_8.b = 0
            else
                int32_t var_638
                
                if (var_638 != 0)
                    r13_1 = var_640
                
                var_6b8.b = 0
                void var_4e0
                rdi_8.b = *sub_140b65ff0(&var_4e0, &var_268, r13_1, 1, var_6b8.b, 0, nullptr, 0, 
                    nullptr, 0, 0) != 0
            
            if (r14_4 != 0)
                SetDllDirectoryW(r14_4)
                sub_140a74f90(r14_4)
            
            int64_t rcx_66 = var_558
            
            if (rcx_66 != 0)
                sub_140a74f90(rcx_66)
            
            int64_t rcx_67 = var_588
            
            if (rcx_67 != 0)
                sub_140a74f90(rcx_67)
            
            int16_t* rcx_68 = var_640
            
            if (rcx_68 != 0)
                sub_140a74f90(rcx_68)
            
            uint64_t rcx_69 = var_5a8
            
            if (rcx_69 != 0)
                sub_140a74f90(rcx_69)
            
            if (rdi_8.b == 0)
                goto label_140b627cb
        else
            uint64_t rcx_12 = var_5a8
            
            if (rcx_12 != 0)
                sub_140a74f90(rcx_12)
    
    int16_t* rcx_111 = var_650
    
    if (rcx_111 != 0)
        sub_140a74f90(rcx_111)
    
    uint64_t rcx_112 = var_598
    
    if (rcx_112 != 0)
        sub_140a74f90(rcx_112)
    
    int64_t rcx_113 = var_5c8
    
    if (rcx_113 != 0)
        sub_140a74f90(rcx_113)

__security_check_cookie(rax_1 ^ &var_6d8)
return 0xffffffff
