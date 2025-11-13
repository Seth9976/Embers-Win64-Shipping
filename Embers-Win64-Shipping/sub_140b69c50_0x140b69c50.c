// 函数: sub_140b69c50
// 地址: 0x140b69c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_228
int64_t rax_1 = __security_cookie ^ &var_228
int32_t rdi = 0
uint64_t rsi = 0
int64_t r12 = arg1
int64_t r15 = arg3
int32_t var_1d8 = 0
SYSTEM_INFO systemInfo
GetNativeSystemInfo(&systemInfo)
var_164
memset(&var_164, 0, 0x118)
OSVERSIONINFOW versionInformation
versionInformation.dwOSVersionInfoSize = 0x11c
int16_t* var_1e8 = nullptr
int64_t var_1e0 = 0
sub_1405947f0(&var_1e8, 0x1a)
int32_t rax_2 = var_1e0.d + 0x1a
var_1e0.d = rax_2

if (rax_2 s> 0)
    sub_140594770(&var_1e8)

UnDecorator::getReferenceType(var_1e8, u"Windows (unknown version)", 0x34)
int16_t* rbx = nullptr
int64_t var_1f0 = 0
int16_t* var_1f8 = nullptr
int16_t* const r14 = &data_142d40450

if (GetVersionExW(&versionInformation) == 0)
    rsi = 4
else
    uint32_t dwMajorVersion = versionInformation.dwMajorVersion
    char var_4e
    
    if (dwMajorVersion == 5)
        uint32_t dwMinorVersion_1 = versionInformation.dwMinorVersion
        char var_50
        int32_t rax_41
        
        if (dwMinorVersion_1 == 0)
            if (var_1e8 != u"Windows 2000")
                int32_t rcx_79 = var_1e0:4.d
                int32_t rdx_23 = 0
                var_1e0.d = 0
                
                if (rcx_79 != 0xd)
                    sub_1405947f0(&var_1e8, 0xd)
                    rcx_79 = var_1e0:4.d
                    rdx_23 = var_1e0.d
                
                var_1e0.d = rdx_23 + 0xd
                
                if (rdx_23 + 0xd s> rcx_79)
                    sub_140594770(&var_1e8)
                
                uint128_t* rcx_82 = var_1e8
                *rcx_82 = (*u"Windows 2000")[0].o
                rcx_82[1].q = 0x30003000300032
                *(rcx_82 + 0x18) = 0
            
            uint64_t* rcx_83 = &var_1f8
            
            if (var_4e == 1)
                sub_1405947f0(rcx_83, 0xd)
                rax_41 = var_1f0.d + 0xd
                var_1f0.d = rax_41
            label_140b6a94b:
                
                if (rax_41 s> var_1f0:4.d)
                    sub_140594770(&var_1f8)
                
                rbx = var_1f8
                *rbx = (*u"Professional")[0].o
                *(rbx + 0x10) = 0x6c0061006e006f
                rbx[0xc] = 0
                goto label_140b6aa6a
            
            if (var_50 s< 0)
                sub_1405947f0(rcx_83, 0x12)
                int32_t rax_44 = var_1f0.d + 0x12
                var_1f0.d = rax_44
                
                if (rax_44 s> 0)
                    sub_140594770(&var_1f8)
                
                rbx = var_1f8
                __builtin_memcpy(rbx, u"Datacenter Server", 0x24)
            else if ((var_50 & 2) == 0)
                sub_1405947f0(rcx_83, 7)
                int32_t rax_46 = var_1f0.d + 7
                var_1f0.d = rax_46
                
                if (rax_46 s> 0)
                    sub_140594770(&var_1f8)
                
                rbx = var_1f8
                *rbx = 0x76007200650053
                *(rbx + 8) = 0x720065
                rbx[6] = 0
            else
                sub_1405947f0(rcx_83, 0x10)
                int32_t rax_45 = var_1f0.d + 0x10
                var_1f0.d = rax_45
                
                if (rax_45 s> 0)
                    sub_140594770(&var_1f8)
                
                rbx = var_1f8
                __builtin_memcpy(rbx, u"Advanced Server", 0x20)
            
            goto label_140b6aa6a
        
        if (dwMinorVersion_1 == 1)
            if (var_1e8 != u"Windows XP")
                int32_t rcx_73 = var_1e0:4.d
                int32_t rdx_21 = 0
                var_1e0.d = 0
                
                if (rcx_73 != 0xb)
                    sub_1405947f0(&var_1e8, 0xb)
                    rcx_73 = var_1e0:4.d
                    rdx_21 = var_1e0.d
                
                var_1e0.d = rdx_21 + 0xb
                
                if (rdx_21 + 0xb s> rcx_73)
                    sub_140594770(&var_1e8)
                
                __builtin_wcscpy(var_1e8, u"Windows XP")
            
            sub_1405947f0(&var_1f8, 0xd)
            rax_41 = var_1f0.d + 0xd
            var_1f0.d = rax_41
            
            if ((var_50.w & 0x200) == 0)
                goto label_140b6a94b
            
            if (rax_41 s> 0)
                sub_140594770(&var_1f8)
            
            rbx = var_1f8
            *rbx = (*u"Home Edition")[0].o
            *(rbx + 0x10) = 0x6e006f00690074
            rbx[0xc] = 0
            goto label_140b6aa6a
        
        if (dwMinorVersion_1 == 2)
            if (GetSystemMetrics(SM_SERVERR2) == 0)
                int16_t rax_31 = var_50.w
                
                if ((0x2000 & rax_31) == 0)
                    if ((0x8000 & rax_31) == 0)
                        if (var_4e == 1 && systemInfo..dwOemId.w == 9)
                            if (var_1e8 != u"Windows XP")
                                int32_t rcx_64 = var_1e0:4.d
                                int32_t rdx_18 = 0
                                var_1e0.d = 0
                                
                                if (rcx_64 != 0xb)
                                    sub_1405947f0(&var_1e8, 0xb)
                                    rcx_64 = var_1e0:4.d
                                    rdx_18 = var_1e0.d
                                
                                var_1e0.d = rdx_18 + 0xb
                                
                                if (rdx_18 + 0xb s> rcx_64)
                                    sub_140594770(&var_1e8)
                                
                                __builtin_wcscpy(var_1e8, u"Windows XP")
                            
                            sub_1405947f0(&var_1f8, 0x19)
                            int32_t rax_37 = var_1f0.d + 0x19
                            var_1f0.d = rax_37
                            
                            if (rax_37 s> 0)
                                sub_140594770(&var_1f8)
                            
                            rbx = var_1f8
                            __builtin_wcscpy(rbx, u"Professional x64 Edition")
                        else if (var_1e8 != u"Windows Server 2003")
                            int32_t rcx_70 = var_1e0:4.d
                            int32_t rdx_20 = 0
                            var_1e0.d = 0
                            
                            if (rcx_70 != 0x14)
                                sub_1405947f0(&var_1e8, 0x14)
                                rcx_70 = var_1e0:4.d
                                rdx_20 = var_1e0.d
                            
                            var_1e0.d = rdx_20 + 0x14
                            
                            if (rdx_20 + 0x14 s> rcx_70)
                                sub_140594770(&var_1e8)
                            
                            int16_t* rax_39 = var_1e8
                            __builtin_memcpy(rax_39, u"Windows Server 2", 0x20)
                            *(rax_39 + 0x20) = 0x3300300030
                    else if (var_1e8 != u"Windows Home Server")
                        int32_t rcx_61 = var_1e0:4.d
                        int32_t rdx_17 = 0
                        var_1e0.d = 0
                        
                        if (rcx_61 != 0x14)
                            sub_1405947f0(&var_1e8, 0x14)
                            rcx_61 = var_1e0:4.d
                            rdx_17 = var_1e0.d
                        
                        var_1e0.d = rdx_17 + 0x14
                        
                        if (rdx_17 + 0x14 s> rcx_61)
                            sub_140594770(&var_1e8)
                        
                        int16_t* rax_35 = var_1e8
                        __builtin_memcpy(rax_35, u"Windows Home Ser", 0x20)
                        *(rax_35 + 0x20) = 0x7200650076
                else if (var_1e8 != u"Windows Storage Server 2003")
                    int32_t rcx_58 = var_1e0:4.d
                    int32_t rdx_16 = 0
                    var_1e0.d = 0
                    
                    if (rcx_58 != 0x1c)
                        sub_1405947f0(&var_1e8, 0x1c)
                        rcx_58 = var_1e0:4.d
                        rdx_16 = var_1e0.d
                    
                    var_1e0.d = rdx_16 + 0x1c
                    
                    if (rdx_16 + 0x1c s> rcx_58)
                        sub_140594770(&var_1e8)
                    
                    int16_t* rax_33 = var_1e8
                    __builtin_memcpy(rax_33, u"Windows Storage Server 2", 0x30)
                    *(rax_33 + 0x30) = 0x3300300030
            else if (var_1e8 != u"Windows Server 2003 R2")
                int32_t rcx_54 = var_1e0:4.d
                int32_t rdx_15 = 0
                var_1e0.d = 0
                
                if (rcx_54 != 0x17)
                    sub_1405947f0(&var_1e8, 0x17)
                    rcx_54 = var_1e0:4.d
                    rdx_15 = var_1e0.d
                
                var_1e0.d = rdx_15 + 0x17
                
                if (rdx_15 + 0x17 s> rcx_54)
                    sub_140594770(&var_1e8)
                
                int16_t* rcx_57 = var_1e8
                __builtin_memcpy(rcx_57, u"Windows Server 2", 0x20)
                *(rcx_57 + 0x20) = 0x20003300300030
                *(rcx_57 + 0x28) = 0x320052
                rcx_57[0x16] = 0
            
            goto label_140b6aa6a
        
        rsi = 1
        var_1d8 = rsi.d
    else
        if (dwMajorVersion == 6)
            uint32_t dwMinorVersion = versionInformation.dwMinorVersion
            
            if (dwMinorVersion == 0)
                if (var_4e != 1)
                    if (var_1e8 == u"Windows Server 2008")
                        goto label_140b6aa8b
                    
                    int32_t rcx_51 = var_1e0:4.d
                    int32_t rdx_14 = 0
                    var_1e0.d = 0
                    
                    if (rcx_51 != 0x14)
                        sub_1405947f0(&var_1e8, 0x14)
                        rcx_51 = var_1e0:4.d
                        rdx_14 = var_1e0.d
                    
                    var_1e0.d = rdx_14 + 0x14
                    
                    if (rdx_14 + 0x14 s> rcx_51)
                        sub_140594770(&var_1e8)
                    
                    int16_t* rax_27 = var_1e8
                    __builtin_memcpy(rax_27, u"Windows Server 2", 0x20)
                    *(rax_27 + 0x20) = 0x3800300030
                    goto label_140b6aa6a
                
                if (var_1e8 == u"Windows Vista")
                    goto label_140b6aa8b
                
                int32_t rcx_47 = var_1e0:4.d
                int32_t rdx_13 = 0
                var_1e0.d = 0
                
                if (rcx_47 != 0xe)
                    sub_1405947f0(&var_1e8, 0xe)
                    rcx_47 = var_1e0:4.d
                    rdx_13 = var_1e0.d
                
                var_1e0.d = rdx_13 + 0xe
                
                if (rdx_13 + 0xe s> rcx_47)
                    sub_140594770(&var_1e8)
                
                uint128_t* rcx_50 = var_1e8
                *rcx_50 = (*u"Windows Vista")[0].o
                rcx_50[1].q = 0x74007300690056
                *(rcx_50 + 0x18) = 0x61
                goto label_140b6aa6a
            
            if (dwMinorVersion == 1)
                if (var_4e == 1)
                    if (var_1e8 == u"Windows 7")
                        goto label_140b6aa8b
                    
                    int32_t rcx_39 = var_1e0:4.d
                    int32_t rdx_11 = 0
                    var_1e0.d = 0
                    
                    if (rcx_39 != 0xa)
                        sub_1405947f0(&var_1e8, 0xa)
                        rcx_39 = var_1e0:4.d
                        rdx_11 = var_1e0.d
                    
                    var_1e0.d = rdx_11 + 0xa
                    
                    if (rdx_11 + 0xa s> rcx_39)
                        sub_140594770(&var_1e8)
                    
                    __builtin_memcpy(var_1e8, u"Windows 7", 0x14)
                    goto label_140b6aa6a
                
                if (var_1e8 == u"Windows Server 2008 R2")
                    goto label_140b6aa8b
                
                int32_t rcx_43 = var_1e0:4.d
                int32_t rdx_12 = 0
                var_1e0.d = 0
                
                if (rcx_43 != 0x17)
                    sub_1405947f0(&var_1e8, 0x17)
                    rcx_43 = var_1e0:4.d
                    rdx_12 = var_1e0.d
                
                var_1e0.d = rdx_12 + 0x17
                
                if (rdx_12 + 0x17 s> rcx_43)
                    sub_140594770(&var_1e8)
                
                int16_t* rcx_46 = var_1e8
                __builtin_memcpy(rcx_46, u"Windows Server 2", 0x20)
                *(rcx_46 + 0x20) = 0x20003800300030
                *(rcx_46 + 0x28) = 0x320052
                rcx_46[0x16] = 0
                goto label_140b6aa6a
            
            if (dwMinorVersion == 2)
                if (var_4e == 1)
                    if (var_1e8 == u"Windows 8")
                        goto label_140b6aa8b
                    
                    int32_t rcx_32 = var_1e0:4.d
                    int32_t rdx_9 = 0
                    var_1e0.d = 0
                    
                    if (rcx_32 != 0xa)
                        sub_1405947f0(&var_1e8, 0xa)
                        rcx_32 = var_1e0:4.d
                        rdx_9 = var_1e0.d
                    
                    var_1e0.d = rdx_9 + 0xa
                    
                    if (rdx_9 + 0xa s> rcx_32)
                        sub_140594770(&var_1e8)
                    
                    __builtin_memcpy(var_1e8, u"Windows 8", 0x14)
                    goto label_140b6aa6a
                
                if (var_1e8 == u"Windows Server 2012")
                    goto label_140b6aa8b
                
                int32_t rcx_36 = var_1e0:4.d
                int32_t rdx_10 = 0
                var_1e0.d = 0
                
                if (rcx_36 != 0x14)
                    sub_1405947f0(&var_1e8, 0x14)
                    rcx_36 = var_1e0:4.d
                    rdx_10 = var_1e0.d
                
                var_1e0.d = rdx_10 + 0x14
                
                if (rdx_10 + 0x14 s> rcx_36)
                    sub_140594770(&var_1e8)
                
                int16_t* rax_22 = var_1e8
                __builtin_memcpy(rax_22, u"Windows Server 2", 0x20)
                *(rax_22 + 0x20) = 0x3200310030
                goto label_140b6aa6a
            
            if (dwMinorVersion != 3)
                rsi = 1
                var_1d8 = 1
                goto label_140b6aa8b
            
            if (var_4e == 1)
                if (var_1e8 == u"Windows 8.1")
                    goto label_140b6aa8b
                
                int32_t rcx_25 = var_1e0:4.d
                int32_t rdx_7 = 0
                var_1e0.d = 0
                
                if (rcx_25 != 0xc)
                    sub_1405947f0(&var_1e8, 0xc)
                    rcx_25 = var_1e0:4.d
                    rdx_7 = var_1e0.d
                
                var_1e0.d = rdx_7 + 0xc
                
                if (rdx_7 + 0xc s> rcx_25)
                    sub_140594770(&var_1e8)
                
                int16_t* rax_18 = var_1e8
                *rax_18 = (*u"Windows 8.1")[0].o
                *(rax_18 + 0x10) = 0x31002e0038
                goto label_140b6aa6a
            
            if (var_1e8 == u"Windows Server 2012 R2")
                goto label_140b6aa8b
            
            int32_t rcx_28 = var_1e0:4.d
            int32_t rdx_8 = 0
            var_1e0.d = 0
            
            if (rcx_28 != 0x17)
                sub_1405947f0(&var_1e8, 0x17)
                rcx_28 = var_1e0:4.d
                rdx_8 = var_1e0.d
            
            var_1e0.d = rdx_8 + 0x17
            
            if (rdx_8 + 0x17 s> rcx_28)
                sub_140594770(&var_1e8)
            
            int16_t* rcx_31 = var_1e8
            __builtin_memcpy(rcx_31, u"Windows Server 2", 0x20)
            *(rcx_31 + 0x20) = 0x20003200310030
            *(rcx_31 + 0x28) = 0x320052
            rcx_31[0x16] = 0
            goto label_140b6aa6a
        
        if (dwMajorVersion == 0xa)
            uint32_t* lpcbData
            int32_t var_1d0
            
            if (versionInformation.dwMinorVersion == 0)
                if (var_4e != 1)
                    if (var_1e8 != u"Windows Server 2019")
                        int32_t rcx_10 = var_1e0:4.d
                        int32_t rdx_2 = 0
                        var_1e0.d = 0
                        
                        if (rcx_10 != 0x14)
                            sub_1405947f0(&var_1e8, 0x14)
                            rcx_10 = var_1e0:4.d
                            rdx_2 = var_1e0.d
                        
                        var_1e0.d = rdx_2 + 0x14
                        
                        if (rdx_2 + 0x14 s> rcx_10)
                            sub_140594770(&var_1e8)
                        
                        int16_t* rax_8 = var_1e8
                        __builtin_memcpy(rax_8, u"Windows Server 2", 0x20)
                        *(rax_8 + 0x20) = 0x3900310030
                else if (var_1e8 != u"Windows 10")
                    int32_t rcx_6 = var_1e0:4.d
                    int32_t rdx_1 = 0
                    var_1e0.d = 0
                    
                    if (rcx_6 != 0xb)
                        sub_1405947f0(&var_1e8, 0xb)
                        rcx_6 = var_1e0:4.d
                        rdx_1 = var_1e0.d
                    
                    var_1e0.d = rdx_1 + 0xb
                    
                    if (rdx_1 + 0xb s> rcx_6)
                        sub_140594770(&var_1e8)
                    
                    __builtin_wcscpy(var_1e8, u"Windows 10")
                
                int16_t* r13_1 = nullptr
                var_1d0 = 0
                int32_t r15_1 = 0
                int32_t r14_1 = 0
                
                while (true)
                    int16_t* var_1c8
                    int32_t var_1c0
                    
                    if (rsi.b == 0)
                        int32_t r9_1 = 0x100
                        HKEY hKey_1 = nullptr
                        
                        if (r14_1 == 0)
                            r9_1 = 0x200
                        
                        if (
                                RegOpenKeyExW(-0xffffffff80000002, 
                                    SOFTWARE\Microsoft\Windows NT\CurrentVersion", 
                                0, r9_1 | 0x20019, &hKey_1) == NO_ERROR)
                            HKEY hKey = hKey_1
                            uint32_t var_1d4
                            lpcbData = &var_1d4
                            uint8_t* lpData = nullptr
                            var_1d4 = 0
                            
                            if (RegQueryValueExW(hKey, ReleaseId", nullptr, nullptr, lpData, 
                                    lpcbData) == NO_ERROR)
                                uint32_t rax_11 = var_1d4
                                
                                if (rax_11 != 0)
                                    uint8_t* lpData_1 = j_sub_140a82f30(zx.q(rax_11))
                                    lpcbData = &var_1d4
                                    
                                    if (RegQueryValueExW(hKey_1, ReleaseId", nullptr, nullptr, 
                                            lpData_1, lpcbData) == NO_ERROR)
                                        int32_t rax_13 = 0
                                        rsi = zx.q(var_1d4 u>> 1)
                                        int16_t* r14_2 = nullptr
                                        var_1c8 = nullptr
                                        r15_1 = 0
                                        var_1c0 = 0
                                        int32_t var_1bc_1 = 0
                                        
                                        if (lpData_1 != 0 && *lpData_1 != 0 && rsi.d u> 1)
                                            if (rsi.d != 0)
                                                sub_1405947f0(&var_1c8, rsi.d)
                                                rax_13 = var_1bc_1
                                                r15_1 = var_1c0
                                                r14_2 = var_1c8
                                            
                                            r15_1 += rsi.d
                                            
                                            if (r15_1 s> rax_13)
                                                sub_140594770(&var_1c8)
                                                r14_2 = var_1c8
                                            
                                            UnDecorator::getReferenceType(r14_2, lpData_1, 
                                                (rsi << 1).d - 2)
                                            r14_2[sx.q(r15_1) - 1] = 0
                                        
                                        if (r13_1 != 0)
                                            sub_140a74f90(r13_1)
                                        
                                        r13_1 = r14_2
                                        var_1c8 = nullptr
                                        r14_1 = var_1d0
                                        rsi.b = 1
                                        var_1c0.q = 0
                                    
                                    j_sub_140a74f90(lpData_1)
                            
                            RegCloseKey(hKey_1)
                        
                        r14_1 += 1
                        var_1d0 = r14_1
                        
                        if (r14_1 s< 2)
                            continue
                        else if (rsi.b == 0)
                            r14 = &data_142d40450
                            break
                    
                    r14 = &data_142d40450
                    int16_t* const r8_1 = &data_142d40450
                    
                    if (r15_1 != 0)
                        r8_1 = r13_1
                    
                    sub_140a2e390(&var_1c8, u" (Release %s)", r8_1)
                    int32_t r8_3
                    
                    if (var_1c0 == 0)
                        r8_3 = 0
                    else
                        r8_3 = var_1c0 - 1
                    
                    sub_140a20ba0(&var_1e8, var_1c8, r8_3)
                    int16_t* rcx_23 = var_1c8
                    
                    if (rcx_23 != 0)
                        sub_140a74f90(rcx_23)
                    
                    break
                
                if (r13_1 != 0)
                    sub_140a74f90(r13_1)
                
                r15 = arg3
                rsi = 0
                r12 = arg1
                goto label_140b6aa6a
            
            rsi = 1
            var_1d8 = 1
        label_140b6aa8b:
            int64_t rax_48 = GetProcAddress(GetModuleHandleW(u"kernel32.dll"), "GetProductInfo")
            
            if (rax_48 == 0)
                if (rbx != u"(type unknown)")
                    bool cond:3_1 = var_1f0:4.d == 0xf
                    int32_t rdx_46 = 0
                    var_1f0.d = 0
                    
                    if (not(cond:3_1))
                        sub_1405947f0(&var_1f8, 0xf)
                        rdx_46 = var_1f0.d
                        rbx = var_1f8
                    
                    var_1f0.d = rdx_46 + 0xf
                    
                    if (rdx_46 + 0xf s> var_1f0:4.d)
                        sub_140594770(&var_1f8)
                        rbx = var_1f8
                    
                    *rbx = (*u"(type unknown)")[0].o
                    *(rbx + 0x10) = 0x77006f006e006b
                    *(rbx + 0x18) = 0x29006e
                    rbx[0xe] = 0
                
                rsi = zx.q(rsi.d) | 2
                var_1d8 = rsi.d
            else
                rax_48(zx.q(versionInformation.dwMajorVersion), 
                    zx.q(versionInformation.dwMinorVersion), 0, 0, &var_1d0, lpcbData)
                uint64_t rax_50 = zx.q(var_1d0 - 1)
                
                if (rax_50.d u<= 0x2f)
                    switch (rax_50)
                        case 0
                            if (rbx != u"Ultimate Edition")
                                bool cond:6_1 = var_1f0:4.d == 0x11
                                int32_t rdx_29 = 0
                                var_1f0.d = 0
                                
                                if (not(cond:6_1))
                                    sub_1405947f0(&var_1f8, 0x11)
                                    rdx_29 = var_1f0.d
                                    rbx = var_1f8
                                
                                var_1f0.d = rdx_29 + 0x11
                                
                                if (rdx_29 + 0x11 s> var_1f0:4.d)
                                    sub_140594770(&var_1f8)
                                    rbx = var_1f8
                                
                                __builtin_wcscpy(rbx, u"Ultimate Edition")
                        case 1
                            if (rbx != u"Home Basic Edition")
                                bool cond:9_1 = var_1f0:4.d == 0x13
                                int32_t rdx_32 = 0
                                var_1f0.d = 0
                                
                                if (not(cond:9_1))
                                    sub_1405947f0(&var_1f8, 0x13)
                                    rdx_32 = var_1f0.d
                                    rbx = var_1f8
                                
                                var_1f0.d = rdx_32 + 0x13
                                
                                if (rdx_32 + 0x13 s> var_1f0:4.d)
                                    sub_140594770(&var_1f8)
                                    rbx = var_1f8
                                
                                __builtin_wcscpy(rbx, u"Home Basic Edition")
                        case 2
                            if (rbx != u"Home Premium Edition")
                                bool cond:8_1 = var_1f0:4.d == 0x15
                                int32_t rdx_31 = 0
                                var_1f0.d = 0
                                
                                if (not(cond:8_1))
                                    sub_1405947f0(&var_1f8, 0x15)
                                    rdx_31 = var_1f0.d
                                    rbx = var_1f8
                                
                                var_1f0.d = rdx_31 + 0x15
                                
                                if (rdx_31 + 0x15 s> var_1f0:4.d)
                                    sub_140594770(&var_1f8)
                                    rbx = var_1f8
                                
                                __builtin_memcpy(rbx, u"Home Premium Edi", 0x20)
                                *(rbx + 0x20) = 0x6e006f00690074
                                rbx[0x14] = 0
                        case 3, 9
                            if (rbx != u"Enterprise Edition")
                                bool cond:10_1 = var_1f0:4.d == 0x13
                                int32_t rdx_33 = 0
                                var_1f0.d = 0
                                
                                if (not(cond:10_1))
                                    sub_1405947f0(&var_1f8, 0x13)
                                    rdx_33 = var_1f0.d
                                    rbx = var_1f8
                                
                                var_1f0.d = rdx_33 + 0x13
                                
                                if (rdx_33 + 0x13 s> var_1f0:4.d)
                                    sub_140594770(&var_1f8)
                                    rbx = var_1f8
                                
                                __builtin_wcscpy(rbx, u"Enterprise Edition")
                        case 5
                            if (rbx != u"Business Edition")
                                bool cond:11_1 = var_1f0:4.d == 0x11
                                int32_t rdx_34 = 0
                                var_1f0.d = 0
                                
                                if (not(cond:11_1))
                                    sub_1405947f0(&var_1f8, 0x11)
                                    rdx_34 = var_1f0.d
                                    rbx = var_1f8
                                
                                var_1f0.d = rdx_34 + 0x11
                                
                                if (rdx_34 + 0x11 s> var_1f0:4.d)
                                    sub_140594770(&var_1f8)
                                    rbx = var_1f8
                                
                                __builtin_wcscpy(rbx, u"Business Edition")
                        case 6
                            if (rbx != u"Standard Edition")
                                bool cond:20_1 = var_1f0:4.d == 0x11
                                int32_t rdx_43 = 0
                                var_1f0.d = 0
                                
                                if (not(cond:20_1))
                                    sub_1405947f0(&var_1f8, 0x11)
                                    rdx_43 = var_1f0.d
                                    rbx = var_1f8
                                
                                var_1f0.d = rdx_43 + 0x11
                                
                                if (rdx_43 + 0x11 s> var_1f0:4.d)
                                    sub_140594770(&var_1f8)
                                    rbx = var_1f8
                                
                                __builtin_wcscpy(rbx, u"Standard Edition")
                        case 7
                            if (rbx != u"Datacenter Edition")
                                bool cond:14_1 = var_1f0:4.d == 0x13
                                int32_t rdx_37 = 0
                                var_1f0.d = 0
                                
                                if (not(cond:14_1))
                                    sub_1405947f0(&var_1f8, 0x13)
                                    rdx_37 = var_1f0.d
                                    rbx = var_1f8
                                
                                var_1f0.d = rdx_37 + 0x13
                                
                                if (rdx_37 + 0x13 s> var_1f0:4.d)
                                    sub_140594770(&var_1f8)
                                    rbx = var_1f8
                                
                                __builtin_wcscpy(rbx, u"Datacenter Edition")
                        case 8
                            if (rbx != u"Small Business Server")
                                bool cond:18_1 = var_1f0:4.d == 0x16
                                int32_t rdx_41 = 0
                                var_1f0.d = 0
                                
                                if (not(cond:18_1))
                                    sub_1405947f0(&var_1f8, 0x16)
                                    rdx_41 = var_1f0.d
                                    rbx = var_1f8
                                
                                var_1f0.d = rdx_41 + 0x16
                                
                                if (rdx_41 + 0x16 s> var_1f0:4.d)
                                    sub_140594770(&var_1f8)
                                    rbx = var_1f8
                                
                                __builtin_memcpy(rbx, u"Small Business S", 0x20)
                                *(rbx + 0x20) = 0x65007600720065
                                *(rbx + 0x28) = 0x72
                        case 0xa
                            if (rbx != u"Starter Edition")
                                bool cond:12_1 = var_1f0:4.d == 0x10
                                int32_t rdx_35 = 0
                                var_1f0.d = 0
                                
                                if (not(cond:12_1))
                                    sub_1405947f0(&var_1f8, 0x10)
                                    rdx_35 = var_1f0.d
                                    rbx = var_1f8
                                
                                var_1f0.d = rdx_35 + 0x10
                                
                                if (rdx_35 + 0x10 s> var_1f0:4.d)
                                    sub_140594770(&var_1f8)
                                    rbx = var_1f8
                                
                                __builtin_memcpy(rbx, u"Starter Edition", 0x20)
                        case 0xb
                            if (rbx != u"Datacenter Edition (core installation)")
                                bool cond:15_1 = var_1f0:4.d == 0x27
                                int32_t rdx_38 = 0
                                var_1f0.d = 0
                                
                                if (not(cond:15_1))
                                    sub_1405947f0(&var_1f8, 0x27)
                                    rdx_38 = var_1f0.d
                                    rbx = var_1f8
                                
                                var_1f0.d = rdx_38 + 0x27
                                
                                if (rdx_38 + 0x27 s> var_1f0:4.d)
                                    sub_140594770(&var_1f8)
                                    rbx = var_1f8
                                
                                __builtin_memcpy(rbx, u"Datacenter Edition (core install", 0x40)
                                *(rbx + 0x40) = 0x6f006900740061
                                *(rbx + 0x48) = 0x29006e
                                rbx[0x26] = 0
                        case 0xc
                            if (rbx != u"Standard Edition (core installation)")
                                bool cond:21_1 = var_1f0:4.d == 0x25
                                int32_t rdx_44 = 0
                                var_1f0.d = 0
                                
                                if (not(cond:21_1))
                                    sub_1405947f0(&var_1f8, 0x25)
                                    rdx_44 = var_1f0.d
                                    rbx = var_1f8
                                
                                var_1f0.d = rdx_44 + 0x25
                                
                                if (rdx_44 + 0x25 s> var_1f0:4.d)
                                    sub_140594770(&var_1f8)
                                    rbx = var_1f8
                                
                                __builtin_memcpy(rbx, u"Standard Edition (core installat", 0x40)
                                *(rbx + 0x40) = 0x29006e006f0069
                                rbx[0x24] = 0
                        case 0xd
                            if (rbx != u"Enterprise Edition (core installation)")
                                bool cond:16_1 = var_1f0:4.d == 0x27
                                int32_t rdx_39 = 0
                                var_1f0.d = 0
                                
                                if (not(cond:16_1))
                                    sub_1405947f0(&var_1f8, 0x27)
                                    rdx_39 = var_1f0.d
                                    rbx = var_1f8
                                
                                var_1f0.d = rdx_39 + 0x27
                                
                                if (rdx_39 + 0x27 s> var_1f0:4.d)
                                    sub_140594770(&var_1f8)
                                    rbx = var_1f8
                                
                                __builtin_memcpy(rbx, u"Enterprise Edition (core install", 0x40)
                                *(rbx + 0x40) = 0x6f006900740061
                                *(rbx + 0x48) = 0x29006e
                                rbx[0x26] = 0
                        case 0xe
                            if (rbx != u"Enterprise Edition for Itanium-based Systems")
                                bool cond:17_1 = var_1f0:4.d == 0x2d
                                int32_t rdx_40 = 0
                                var_1f0.d = 0
                                
                                if (not(cond:17_1))
                                    sub_1405947f0(&var_1f8, 0x2d)
                                    rdx_40 = var_1f0.d
                                    rbx = var_1f8
                                
                                var_1f0.d = rdx_40 + 0x2d
                                
                                if (rdx_40 + 0x2d s> var_1f0:4.d)
                                    sub_140594770(&var_1f8)
                                    rbx = var_1f8
                                
                                __builtin_memcpy(rbx, Enterprise Edition for Itanium-based Sys", 
                                    0x50)
                                *(rbx + 0x50) = 0x73006d00650074
                                rbx[0x2c] = 0
                        case 0x10
                            if (rbx != u"Web Server Edition")
                                bool cond:22_1 = var_1f0:4.d == 0x13
                                int32_t rdx_45 = 0
                                var_1f0.d = 0
                                
                                if (not(cond:22_1))
                                    sub_1405947f0(&var_1f8, 0x13)
                                    rdx_45 = var_1f0.d
                                    rbx = var_1f8
                                
                                var_1f0.d = rdx_45 + 0x13
                                
                                if (rdx_45 + 0x13 s> var_1f0:4.d)
                                    sub_140594770(&var_1f8)
                                    rbx = var_1f8
                                
                                __builtin_wcscpy(rbx, u"Web Server Edition")
                        case 0x11
                            if (rbx != u"Cluster Server Edition")
                                bool cond:13_1 = var_1f0:4.d == 0x17
                                int32_t rdx_36 = 0
                                var_1f0.d = 0
                                
                                if (not(cond:13_1))
                                    sub_1405947f0(&var_1f8, 0x17)
                                    rdx_36 = var_1f0.d
                                    rbx = var_1f8
                                
                                var_1f0.d = rdx_36 + 0x17
                                
                                if (rdx_36 + 0x17 s> var_1f0:4.d)
                                    sub_140594770(&var_1f8)
                                    rbx = var_1f8
                                
                                __builtin_memcpy(rbx, u"Cluster Server E", 0x20)
                                *(rbx + 0x20) = 0x69007400690064
                                *(rbx + 0x28) = 0x6e006f
                                rbx[0x16] = 0
                        case 0x18
                            if (rbx != u"Small Business Server Premium Edition")
                                bool cond:19_1 = var_1f0:4.d == 0x26
                                int32_t rdx_42 = 0
                                var_1f0.d = 0
                                
                                if (not(cond:19_1))
                                    sub_1405947f0(&var_1f8, 0x26)
                                    rdx_42 = var_1f0.d
                                    rbx = var_1f8
                                
                                var_1f0.d = rdx_42 + 0x26
                                
                                if (rdx_42 + 0x26 s> var_1f0:4.d)
                                    sub_140594770(&var_1f8)
                                    rbx = var_1f8
                                
                                __builtin_memcpy(rbx, u"Small Business Server Premium Ed", 0x40)
                                *(rbx + 0x40) = 0x6f006900740069
                                *(rbx + 0x48) = 0x6e
                        case 0x2f
                            if (rbx != u"Professional")
                                bool cond:7_1 = var_1f0:4.d == 0xd
                                int32_t rdx_30 = 0
                                var_1f0.d = 0
                                
                                if (not(cond:7_1))
                                    sub_1405947f0(&var_1f8, 0xd)
                                    rdx_30 = var_1f0.d
                                    rbx = var_1f8
                                
                                var_1f0.d = rdx_30 + 0xd
                                
                                if (rdx_30 + 0xd s> var_1f0:4.d)
                                    sub_140594770(&var_1f8)
                                    rbx = var_1f8
                                
                                *rbx = (*u"Professional")[0].o
                                *(rbx + 0x10) = 0x6c0061006e006f
                                rbx[0xc] = 0
        else
            rsi = 1
            var_1d8 = 1
        label_140b6aa6a:
            
            if (versionInformation.dwMajorVersion u>= 6)
                goto label_140b6aa8b
    var_154
    
    if (rbx != &var_154)
        int32_t rsi_3
        
        if (var_154.w == 0)
            rsi_3 = 0
        else
            int64_t rsi_2 = -1
            
            do
                rsi_2 += 1
            while (*(&var_154 + (rsi_2 << 1)) != 0)
            
            rsi_3 = rsi_2.d + 1
        
        var_1f0.d = 0
        
        if (var_1f0:4.d != rsi_3)
            sub_1405947f0(&var_1f8, rsi_3)
            rdi = var_1f0.d
            rbx = var_1f8
        
        int32_t rax_70 = rsi_3 + rdi
        var_1f0.d = rax_70
        
        if (rax_70 s> var_1f0:4.d)
            sub_140594770(&var_1f8)
            rbx = var_1f8
        
        if (rsi_3 != 0)
            memcpy(rbx, &var_154, rsi_3 * 2)
        
        rsi = zx.q(var_1d8)

int16_t* const rcx_131 = &data_142d40450

if (var_1e0.d != 0)
    rcx_131 = var_1e8

int16_t* r12_2 = r12 - rcx_131
int16_t i

do
    i = *rcx_131
    *(r12_2 + rcx_131) = i
    rcx_131 = &rcx_131[1]
while (i != 0)

if (var_1f0.d != 0)
    r14 = rbx

int16_t* r15_2 = r15 - r14
int16_t i_1

do
    i_1 = *r14
    *(r15_2 + r14) = i_1
    r14 = &r14[1]
while (i_1 != 0)

if (rbx != 0)
    sub_140a74f90(rbx)

int16_t* rcx_133 = var_1e8

if (rcx_133 != 0)
    sub_140a74f90(rcx_133)

__security_check_cookie(rax_1 ^ &var_228)
return zx.q(rsi.d)
