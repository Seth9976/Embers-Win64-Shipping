// 函数: sub_140b68140
// 地址: 0x140b68140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_558
int64_t rax_1 = __security_cookie ^ &var_558
int32_t rbx = 0
int64_t* rsi = arg2
int32_t var_468 = 0
uint64_t var_460 = 0
int64_t var_458
__builtin_memset(&var_458, 0, 0x58)
int128_t* var_440
sub_1405947f0(&var_440, 8)
int64_t var_438
int32_t rax_2 = var_438.d + 8
var_438.d = rax_2

if (rax_2 s> 0)
    sub_140594770(&var_440)

*var_440 = *u"Unknown"
int128_t* var_430
int64_t var_428

if (var_430 != u"Unknown")
    bool cond:0_1 = var_428:4.d == 8
    int32_t rdx_1 = 0
    var_428.d = 0
    
    if (not(cond:0_1))
        sub_1405947f0(&var_430, 8)
        rdx_1 = var_428.d
    
    var_428.d = rdx_1 + 8
    
    if (rdx_1 + 8 s> 0)
        sub_140594770(&var_430)
    
    *var_430 = *u"Unknown"

int128_t* var_420
int64_t var_418

if (var_420 != u"Unknown")
    bool cond:1_1 = var_418:4.d == 8
    int32_t rdx_2 = 0
    var_418.d = 0
    
    if (not(cond:1_1))
        sub_1405947f0(&var_420, 8)
        rdx_2 = var_418.d
    
    var_418.d = rdx_2 + 8
    
    if (rdx_2 + 8 s> 0)
        sub_140594770(&var_420)
    
    *var_420 = *u"Unknown"

int32_t* rax_8 = data_143e185e8
int64_t var_3f0 = 0
int64_t var_3e8 = 0
int32_t r12 = *rax_8
int32_t var_3f8 = 0
int32_t var_3e0 = r12
int32_t* result
int16_t* hKey_8
uint32_t lpcbData_1
int16_t* hKey_24
int32_t var_508
HKEY hKey_1
int16_t* hKey_13
int16_t* hKey_19
int32_t var_4d8
int16_t* var_4d0
int64_t var_4c0
int16_t* var_4b0
int64_t var_4a0
int64_t var_490
int64_t var_480
uint64_t var_450
uint64_t var_410

if (r12 - 3 u<= 1)
    int64_t rdi_7 = -1
    lpcbData_1 = 0
    
    for (uint32_t iDevNum = 0; iDevNum u< 0x100; )
        var_394
        memset(&var_394, 0, 0x344)
        DISPLAY_DEVICEW displayDevice
        displayDevice.cb = 0x348
        
        if (EnumDisplayDevicesW(nullptr, iDevNum, &displayDevice, 1) == 0)
            break
        
        if (r12 != 3 || (displayDevice.StateFlags.b & 4) != 0)
            int16_t* hKey_4 = nullptr
            hKey_1 = nullptr
            int32_t r14_1 = 0
            hKey_8 = nullptr
            int32_t rax_41 = 0
            int64_t var_520_5 = 0
            var_150
            int32_t rdi_9
            int16_t* hKey_10
            
            if (var_150.w == 0)
                hKey_10 = &data_142d40450
                rdi_9 = 0
            else
                do
                    rdi_7 += 1
                while (*(&var_150 + (rdi_7 << 1)) != 0)
                
                if (rdi_7.d + 1 s> 0)
                    sub_1405947f0(&hKey_8, rdi_7.d + 1)
                    hKey_4 = hKey_8
                    rax_41 = var_520_5:4.d
                    r14_1 = var_520_5.d
                    hKey_1 = hKey_4
                
                r14_1 += rdi_7.d + 1
                var_520_5.d = r14_1
                
                if (r14_1 s> rax_41)
                    sub_140594770(&hKey_8)
                    hKey_4 = hKey_8
                    r14_1 = var_520_5.d
                    hKey_1 = hKey_4
                
                UnDecorator::getReferenceType(hKey_4, &var_150, (rdi_7.d + 1) * 2)
                
                if (r14_1 == 0)
                    hKey_10 = &data_142d40450
                    rdi_9 = 0
                else
                    hKey_10 = hKey_4
                    rdi_9 = r14_1 - 1
            
            int16_t* var_3d8 = nullptr
            int16_t* rsi_9 = nullptr
            int64_t var_3d0_1 = 0
            
            if (rdi_9 s> 0x12)
                rdi_9 = 0x12
            
            int32_t rax_42 = 0
            int32_t rcx_99 = 0
            int16_t* const rcx_103
            int32_t r15_9
            
            if (hKey_10 != 0 && *hKey_10 != 0 && rdi_9 s> 0)
                if (rdi_9 + 1 s> 0)
                    sub_1405947f0(&var_3d8, rdi_9 + 1)
                    rcx_99 = var_3d0_1:4.d
                    rax_42 = var_3d0_1.d
                    rsi_9 = var_3d8
                
                r15_9 = rax_42 + 1 + rdi_9
                var_3d0_1.d = r15_9
                
                if (r15_9 s> rcx_99)
                    sub_140594770(&var_3d8)
                    r15_9 = var_3d0_1.d
                    rsi_9 = var_3d8
                
                UnDecorator::getReferenceType(rsi_9, hKey_10, rdi_9 * 2)
                rcx_103 = rsi_9
                rsi_9[sx.q(r15_9) - 1] = 0
            
            if (hKey_10 == 0 || *hKey_10 == 0 || rdi_9 s<= 0 || r15_9 == 0)
                rcx_103 = &data_142d40450
            
            rdi_9.b = sub_140a54510(rcx_103, u"\Registry\Machine\") == 0
            
            if (rsi_9 != 0)
                sub_140a74f90(rsi_9)
            
            int16_t* hKey_5
            
            if (rdi_9.b == 0)
                hKey_5 = hKey_1
            else
                int32_t rcx_105
                HKEY hKey_6
                
                if (r14_1 == 0)
                    rcx_105 = 0
                    hKey_6 = &data_142d40450
                else
                    hKey_6 = hKey_1
                    rcx_105 = r14_1 - 1
                
                int32_t rax_45
                
                if (rcx_105 - 0x12 s>= 0)
                    rax_45 = rcx_105
                    
                    if (rcx_105 - 0x12 s< rcx_105)
                        rax_45 = rcx_105 - 0x12
                else
                    rax_45 = 0
                
                int16_t* hKey_12 = nullptr
                r14_1 = 0
                hKey_13 = nullptr
                int64_t var_4f0_3 = 0
                int32_t r12_1 = 0
                void* rsi_10 = hKey_6 + ((sx.q(rcx_105) - sx.q(rax_45)) << 1)
                
                if (rsi_10 != 0 && *rsi_10 != 0)
                    int64_t rdi_10 = -1
                    
                    do
                        rdi_10 += 1
                    while (*(rsi_10 + (rdi_10 << 1)) != 0)
                    
                    if (rdi_10.d + 1 s> 0)
                        sub_1405947f0(&hKey_13, rdi_10.d + 1)
                        r12_1 = var_4f0_3:4.d
                        r14_1 = var_4f0_3.d
                        hKey_12 = hKey_13
                    
                    r14_1 += rdi_10.d + 1
                    var_4f0_3.d = r14_1
                    
                    if (r14_1 s> r12_1)
                        sub_140594770(&hKey_13)
                        r12_1 = var_4f0_3:4.d
                        r14_1 = var_4f0_3.d
                        hKey_12 = hKey_13
                    
                    UnDecorator::getReferenceType(hKey_12, rsi_10, (rdi_10.d + 1) * 2)
                
                hKey_19 = nullptr
                int64_t var_4e0_2 = 0
                sub_1405947f0(&hKey_19, 0x15)
                int32_t rsi_11 = var_4e0_2:4.d
                int32_t rdi_12 = var_4e0_2.d + 0x15
                var_4e0_2.d = rdi_12
                
                if (rdi_12 s> rsi_11)
                    sub_140594770(&hKey_19)
                    rsi_11 = var_4e0_2:4.d
                    rdi_12 = var_4e0_2.d
                
                int16_t* hKey_18 = hKey_19
                UnDecorator::getReferenceType(hKey_18, u"\HKEY_LOCAL_MACHINE\", 0x2a)
                
                if (rdi_12 s> 1)
                    int32_t r14_2
                    
                    if (r14_1 == 0)
                        r14_2 = 0
                    else
                        r14_2 = r14_1 - 1
                    
                    int32_t rax_47
                    
                    if (rdi_12 == 0)
                        rax_47 = rdi_12 + 1
                    
                    if (rdi_12 != 0 || r14_2 == 0)
                        rax_47 = 0
                    
                    int16_t* hKey_9 = hKey_18
                    int32_t rdx_52 = r14_2 + rax_47 + rdi_12
                    hKey_18 = nullptr
                    int64_t var_4e0_3 = 0
                    
                    if (rdx_52 s> rsi_11)
                        sub_1405947f0(&hKey_9, rdx_52)
                    
                    sub_140a20ba0(&hKey_9, hKey_12, r14_2)
                    hKey_5 = hKey_9
                    r14_1 = rdi_12
                    r12_1 = rsi_11
                    hKey_9 = nullptr
                    int32_t var_3c0_1
                    var_3c0_1.q = 0
                else
                    hKey_5 = hKey_12
                    int64_t var_4f0_4 = 0
                    hKey_12 = nullptr
                
                HKEY hKey_2 = hKey_1
                
                if (hKey_2 != 0)
                    sub_140a74f90(hKey_2)
                
                hKey_1 = hKey_5
                var_520_5:4.d = r12_1
                
                if (hKey_18 != 0)
                    sub_140a74f90(hKey_18)
                
                if (hKey_12 != 0)
                    sub_140a74f90(hKey_12)
            
            int32_t rdi_13
            int16_t* hKey_11
            
            if (r14_1 == 0)
                hKey_11 = &data_142d40450
                rdi_13 = 0
            else
                hKey_11 = hKey_5
                rdi_13 = r14_1 - 1
            
            int16_t* var_3b8 = nullptr
            int64_t var_3b0_1 = 0
            
            if (rdi_13 s> 0x14)
                rdi_13 = 0x14
            
            int16_t* rsi_12 = nullptr
            int32_t rax_48 = 0
            int32_t rcx_119 = 0
            int16_t* const rcx_123
            int32_t r15_11
            
            if (hKey_11 != 0 && *hKey_11 != 0 && rdi_13 s> 0)
                if (rdi_13 + 1 s> 0)
                    sub_1405947f0(&var_3b8, rdi_13 + 1)
                    rcx_119 = var_3b0_1:4.d
                    rax_48 = var_3b0_1.d
                    rsi_12 = var_3b8
                
                r15_11 = rdi_13 + 1 + rax_48
                var_3b0_1.d = r15_11
                
                if (r15_11 s> rcx_119)
                    sub_140594770(&var_3b8)
                    r15_11 = var_3b0_1.d
                    rsi_12 = var_3b8
                
                UnDecorator::getReferenceType(rsi_12, hKey_11, rdi_13 * 2)
                rcx_123 = rsi_12
                rsi_12[sx.q(r15_11) - 1] = 0
            
            if (hKey_11 == 0 || *hKey_11 == 0 || rdi_13 s<= 0 || r15_11 == 0)
                rcx_123 = &data_142d40450
            
            rdi_13.b = sub_140a54510(rcx_123, u"\HKEY_LOCAL_MACHINE\") == 0
            
            if (rsi_12 != 0)
                sub_140a74f90(rsi_12)
            
            if (rdi_13.b == 0)
                sub_140a20ba0(&var_3f0, u"PrimaryDriverLocationFailed ", 0x1c)
                r12 = var_3e0
            else
                int32_t rax_51
                HKEY hKey_7
                
                if (r14_1 == 0)
                    rax_51 = 0
                    hKey_7 = &data_142d40450
                else
                    hKey_7 = hKey_1
                    rax_51 = r14_1 - 1
                
                int32_t rdx_57
                
                if (rax_51 - 0x14 s>= 0)
                    rdx_57 = rax_51
                    
                    if (rax_51 - 0x14 s< rax_51)
                        rdx_57 = rax_51 - 0x14
                else
                    rdx_57 = 0
                
                int32_t rdx_58 = 0
                hKey_24 = nullptr
                var_508.q = 0
                void* rsi_13 = hKey_7 + ((sx.q(rax_51) - sx.q(rdx_57)) << 1)
                int32_t rcx_128 = 0
                
                if (rsi_13 != 0 && *rsi_13 != 0)
                    int64_t rdi_14 = -1
                    
                    do
                        rdi_14 += 1
                    while (*(rsi_13 + (rdi_14 << 1)) != 0)
                    
                    if (rdi_14.d + 1 s> 0)
                        sub_1405947f0(&hKey_24, rdi_14.d + 1)
                        int32_t var_504
                        rcx_128 = var_504
                        rdx_58 = var_508
                    
                    int32_t rax_53 = rdx_58 + rdi_14.d + 1
                    var_508 = rax_53
                    
                    if (rax_53 s> rcx_128)
                        sub_140594770(&hKey_24)
                    
                    UnDecorator::getReferenceType(hKey_24, rsi_13, (rdi_14.d + 1) * 2)
                
                var_4d8 = 0
                var_4d0 = nullptr
                int32_t var_4c8_3 = 0
                __builtin_memset(&var_4c0, 0, 0x1c)
                __builtin_memset(&var_4a0, 0, 0x30)
                sub_140b6ce50(&hKey_24, &var_4d8)
                
                if (var_4c8_3 s<= 1 || var_4d8 == 0)
                    sub_140a20ba0(&var_3f0, u"GetVideoDriverDetailsInvalid ", 0x1d)
                else
                    int16_t* rcx_133 = &data_142d40450
                    int32_t var_4a8_1
                    
                    if (var_4a8_1 != 0)
                        rcx_133 = var_4b0
                    
                    if (sub_140a54510(rcx_133, u"Unknown") == 0)
                        sub_140a20ba0(&var_3f0, u"GetVideoDriverDetailsInvalid ", 0x1d)
                    else
                        int16_t* rcx_134 = &data_142d40450
                        
                        if (var_4a8_1 != 0)
                            rcx_134 = var_4b0
                        
                        if (sub_140a54510(rcx_134, &data_142d40450) == 0)
                            sub_140a20ba0(&var_3f0, u"GetVideoDriverDetailsInvalid ", 0x1d)
                
                r12 = var_3e0
                int32_t rax_57
                
                if (r12 != 3)
                    int16_t* rdx_62
                    
                    if (arg2[1].d == 0)
                        rdx_62 = &data_142d40450
                    else
                        rdx_62 = *arg2
                    
                    int16_t* rcx_136 = &data_142d40450
                    
                    if (var_4c8_3 != 0)
                        rcx_136 = var_4d0
                    
                    rax_57 = sub_140a54510(rcx_136, rdx_62)
                
                if (r12 == 3 || rax_57 == 0)
                    if (var_3f8 == 0)
                        var_468 = var_4d8
                        sub_140597df0(&var_460, &var_4d0)
                        sub_140597df0(&var_450, &var_4c0)
                        sub_140597df0(&var_440, &var_4b0)
                        sub_140597df0(&var_430, &var_4a0)
                        sub_140597df0(&var_420, &var_490)
                        sub_140597df0(&var_410, &var_480)
                    
                    var_3f8 += 1
                else
                    sub_140a20ba0(&var_3f0, u"PrimaryIsNotTheChoosenAdapter ", 0x1e)
                
                int64_t rcx_144 = var_480
                
                if (rcx_144 != 0)
                    sub_140a74f90(rcx_144)
                
                int64_t rcx_145 = var_490
                
                if (rcx_145 != 0)
                    sub_140a74f90(rcx_145)
                
                int64_t rcx_146 = var_4a0
                
                if (rcx_146 != 0)
                    sub_140a74f90(rcx_146)
                
                int16_t* rcx_147 = var_4b0
                
                if (rcx_147 != 0)
                    sub_140a74f90(rcx_147)
                
                int64_t rcx_148 = var_4c0
                
                if (rcx_148 != 0)
                    sub_140a74f90(rcx_148)
                
                int16_t* rcx_149 = var_4d0
                
                if (rcx_149 != 0)
                    sub_140a74f90(rcx_149)
                
                int16_t* hKey_31 = hKey_24
                
                if (hKey_31 != 0)
                    sub_140a74f90(hKey_31)
            
            HKEY hKey_3 = hKey_1
            
            if (hKey_3 != 0)
                sub_140a74f90(hKey_3)
            
            iDevNum = lpcbData_1
            rdi_7 = -1
        else
            sub_140a20ba0(&var_3f0, u"JumpOverNonPrimary ", r12 + 0x10)
        
        iDevNum += 1
        lpcbData_1 = iDevNum
    
    uint64_t r8_29 = zx.q(var_3f8)
    
    if (r8_29.d != 1)
        sub_140a2e390(&hKey_24, u"FoundDriverCount:%d ", r8_29)
        
        if (var_508 != 0)
            rbx = var_508 - 1
        
        sub_140a20ba0(&var_3f0, hKey_24, rbx)
        int16_t* hKey_32 = hKey_24
        
        if (hKey_32 != 0)
            sub_140a74f90(hKey_32)
    
    result = arg1
    int64_t rcx_154 = var_3f0
    *result = var_468
    *(result + 8) = var_460
    result[4] = var_458.d
    result[5] = var_458:4.d
    *(result + 0x18) = var_450
    int64_t var_448
    result[8] = var_448.d
    result[9] = var_448:4.d
    *(result + 0x28) = var_440
    result[0xc] = var_438.d
    result[0xd] = var_438:4.d
    *(result + 0x38) = var_430
    result[0x10] = var_428.d
    result[0x11] = var_428:4.d
    *(result + 0x48) = var_420
    result[0x14] = var_418.d
    result[0x15] = var_418:4.d
    *(result + 0x58) = var_410
    int64_t var_408
    result[0x18] = var_408.d
    result[0x19] = var_408:4.d
    
    if (rcx_154 != 0)
        sub_140a74f90(rcx_154)
else
    int16_t* hKey_30
    
    if (r12 == 0)
        int32_t rdi_1 = 0
        
        while (true)
            sub_140a2e390(&hKey_24, 
                SYSTEM\CurrentControlSet\Control\Class\{4D36E968-E325-11CE-BFC1-08002BE10318}\%04d", 
                zx.q(rdi_1))
            var_4d8 = 0
            var_4d0 = nullptr
            int32_t var_4c8_1 = 0
            __builtin_memset(&var_4c0, 0, 0x1c)
            __builtin_memset(&var_4a0, 0, 0x30)
            sub_140b6ce50(&hKey_24, &var_4d8)
            
            if (var_4c8_1 s> 1 && var_4d8 != 0)
                int16_t* const rcx_8 = &data_142d40450
                int32_t var_4a8
                
                if (var_4a8 != 0)
                    rcx_8 = var_4b0
                
                if (sub_140a54510(rcx_8, u"Unknown") != 0)
                    int16_t* const rcx_9 = &data_142d40450
                    
                    if (var_4a8 != 0)
                        rcx_9 = var_4b0
                    
                    if (sub_140a54510(rcx_9, &data_142d40450) != 0)
                        int16_t* rdx_4
                        
                        if (rsi[1].d == 0)
                            rdx_4 = &data_142d40450
                        else
                            rdx_4 = *rsi
                        
                        int16_t* const rcx_10 = &data_142d40450
                        
                        if (var_4c8_1 != 0)
                            rcx_10 = var_4d0
                        
                        if (sub_140a54510(rcx_10, rdx_4) != 0)
                            int64_t rcx_11 = var_480
                            
                            if (rcx_11 != 0)
                                sub_140a74f90(rcx_11)
                            
                            int64_t rcx_12 = var_490
                            
                            if (rcx_12 != 0)
                                sub_140a74f90(rcx_12)
                            
                            int64_t rcx_13 = var_4a0
                            
                            if (rcx_13 != 0)
                                sub_140a74f90(rcx_13)
                            
                            int16_t* rcx_14 = var_4b0
                            
                            if (rcx_14 != 0)
                                sub_140a74f90(rcx_14)
                            
                            int64_t rcx_15 = var_4c0
                            
                            if (rcx_15 != 0)
                                sub_140a74f90(rcx_15)
                            
                            int16_t* rcx_16 = var_4d0
                            
                            if (rcx_16 != 0)
                                sub_140a74f90(rcx_16)
                            
                            int16_t* hKey_27 = hKey_24
                            
                            if (hKey_27 != 0)
                                sub_140a74f90(hKey_27)
                            
                            rdi_1 += 1
                            
                            if (rdi_1 u>= 0x100)
                                break
                            
                            continue
                        
                        var_468 = var_4d8
                        sub_140597df0(&var_460, &var_4d0)
                        sub_140597df0(&var_450, &var_4c0)
                        sub_140597df0(&var_440, &var_4b0)
                        sub_140597df0(&var_430, &var_4a0)
                        sub_140597df0(&var_420, &var_490)
                        sub_140597df0(&var_410, &var_480)
                        int64_t rcx_23 = var_480
                        
                        if (rcx_23 != 0)
                            sub_140a74f90(rcx_23)
                        
                        int64_t rcx_24 = var_490
                        
                        if (rcx_24 != 0)
                            sub_140a74f90(rcx_24)
                        
                        int64_t rcx_25 = var_4a0
                        
                        if (rcx_25 != 0)
                            sub_140a74f90(rcx_25)
                        
                        int16_t* rcx_26 = var_4b0
                        
                        if (rcx_26 != 0)
                            sub_140a74f90(rcx_26)
                        
                        int64_t rcx_27 = var_4c0
                        
                        if (rcx_27 != 0)
                            sub_140a74f90(rcx_27)
                        
                        int16_t* rcx_28 = var_4d0
                        
                        if (rcx_28 != 0)
                            sub_140a74f90(rcx_28)
                        
                        hKey_30 = hKey_24
                        
                        if (hKey_30 == 0)
                            goto label_140b68cb9
                        
                        goto label_140b68cb4
            
            sub_140a20ba0(&var_3f0, u"GetVideoDriverDetailsInvalid ", 0x1d)
            int64_t rcx_30 = var_480
            
            if (rcx_30 != 0)
                sub_140a74f90(rcx_30)
            
            int64_t rcx_31 = var_490
            
            if (rcx_31 != 0)
                sub_140a74f90(rcx_31)
            
            int64_t rcx_32 = var_4a0
            
            if (rcx_32 != 0)
                sub_140a74f90(rcx_32)
            
            int16_t* rcx_33 = var_4b0
            
            if (rcx_33 != 0)
                sub_140a74f90(rcx_33)
            
            int64_t rcx_34 = var_4c0
            
            if (rcx_34 != 0)
                sub_140a74f90(rcx_34)
            
            int16_t* rcx_35 = var_4d0
            
            if (rcx_35 != 0)
                sub_140a74f90(rcx_35)
            
            int16_t* hKey_28 = hKey_24
            
            if (hKey_28 != 0)
                sub_140a74f90(hKey_28)
            
            break
    
    if (var_440 != u"Unknown")
        bool cond:2_1 = var_438:4.d == 8
        int32_t rdx_11 = 0
        var_438.d = 0
        
        if (not(cond:2_1))
            sub_1405947f0(&var_440, 8)
            rdx_11 = var_438.d
        
        var_438.d = rdx_11 + 8
        
        if (rdx_11 + 8 s> 0)
            sub_140594770(&var_440)
        
        *var_440 = *u"Unknown"
    
    if (var_430 != u"Unknown")
        bool cond:3_1 = var_428:4.d == 8
        int32_t rdx_12 = 0
        var_428.d = 0
        
        if (not(cond:3_1))
            sub_1405947f0(&var_430, 8)
            rdx_12 = var_428.d
        
        var_428.d = rdx_12 + 8
        
        if (rdx_12 + 8 s> var_428:4.d)
            sub_140594770(&var_430)
        
        *var_430 = *u"Unknown"
    
    if (var_420 != u"Unknown")
        bool cond:5_1 = var_418:4.d == 8
        int32_t rdx_13 = 0
        var_418.d = 0
        
        if (not(cond:5_1))
            sub_1405947f0(&var_420, 8)
            rdx_13 = var_418.d
        
        var_418.d = rdx_13 + 8
        
        if (rdx_13 + 8 s> var_418:4.d)
            sub_140594770(&var_420)
        
        *var_420 = *u"Unknown"
    
    if (r12 == 0)
        sub_140a2e390(&hKey_24, u"FoundDriverCount:%d FallbackToPrimary ", 0)
        int32_t r8_3
        
        if (var_508 == 0)
            r8_3 = 0
        else
            r8_3 = var_508 - 1
        
        sub_140a20ba0(&var_3f0, hKey_24, r8_3)
        int16_t* hKey_29 = hKey_24
        
        if (hKey_29 != 0)
            sub_140a74f90(hKey_29)
    
    int16_t* hKey_25 = nullptr
    int32_t rdi_2 = 0
    rsi.b = 0
    int32_t r13_1 = 0
    
    while (true)
        wchar16 const* const rdx_18
        int32_t r8_5
        
        if (rsi.b != 0)
        label_140b687ed:
            int32_t rsi_2
            int16_t* hKey_35
            
            if (rdi_2 == 0)
                hKey_35 = &data_142d40450
                rsi_2 = 0
            else
                hKey_35 = hKey_25
                rsi_2 = rdi_2 - 1
            
            hKey_8 = nullptr
            int64_t var_520_1 = 0
            int16_t* hKey_15 = nullptr
            int32_t rdx_19 = 0
            
            if (rsi_2 s> 0x12)
                rsi_2 = 0x12
            
            int32_t rax_25 = 0
            int32_t r15_3
            
            if (hKey_35 != 0 && *hKey_35 != 0 && rsi_2 s> 0)
                if (rsi_2 + 1 s> 0)
                    sub_1405947f0(&hKey_8, rsi_2 + 1)
                    rax_25 = var_520_1:4.d
                    rdx_19 = var_520_1.d
                    hKey_15 = hKey_8
                
                r15_3 = rdx_19 + 1 + rsi_2
                var_520_1.d = r15_3
                
                if (r15_3 s> rax_25)
                    sub_140594770(&hKey_8)
                    r15_3 = var_520_1.d
                    hKey_15 = hKey_8
                
                UnDecorator::getReferenceType(hKey_15, hKey_35, rsi_2 * 2)
                hKey_15[sx.q(r15_3) - 1] = 0
            
            int16_t* hKey_20
            int16_t* const hKey_36
            
            if (hKey_35 == 0 || *hKey_35 == 0 || rsi_2 s<= 0 || r15_3 == 0)
                hKey_36 = &data_142d40450
                hKey_20 = &data_142d40450
            else
                hKey_20 = hKey_15
                hKey_36 = &data_142d40450
            
            rsi_2.b = sub_140a54510(hKey_20, u"\Registry\Machine\") == 0
            
            if (hKey_15 != 0)
                sub_140a74f90(hKey_15)
            
            if (rsi_2.b != 0)
                int16_t* hKey_33
                int32_t rdi_3
                
                if (rdi_2 == 0)
                    rdi_3 = 0
                    hKey_33 = &data_142d40450
                else
                    rdi_3 = rdi_2 - 1
                    hKey_33 = hKey_25
                
                int32_t rax_28
                
                if (rdi_3 - 0x12 s>= 0)
                    rax_28 = rdi_3
                    
                    if (rdi_3 - 0x12 s< rdi_3)
                        rax_28 = rdi_3 - 0x12
                else
                    rax_28 = 0
                
                int16_t* hKey_16 = nullptr
                rdi_2 = 0
                hKey_8 = nullptr
                int64_t var_520_2 = 0
                int32_t rax_30 = 0
                void* r15_4 = &hKey_33[sx.q(rdi_3) - sx.q(rax_28)]
                
                if (r15_4 != 0 && *r15_4 != 0)
                    int64_t rsi_3 = -1
                    
                    do
                        rsi_3 += 1
                    while (*(r15_4 + (rsi_3 << 1)) != 0)
                    
                    if (rsi_3.d + 1 s> 0)
                        sub_1405947f0(&hKey_8, rsi_3.d + 1)
                        rax_30 = var_520_2:4.d
                        rdi_2 = var_520_2.d
                        hKey_16 = hKey_8
                    
                    rdi_2 += rsi_3.d + 1
                    var_520_2.d = rdi_2
                    
                    if (rdi_2 s> rax_30)
                        sub_140594770(&hKey_8)
                        rdi_2 = var_520_2.d
                        hKey_16 = hKey_8
                    
                    UnDecorator::getReferenceType(hKey_16, r15_4, (rsi_3.d + 1) * 2)
                
                hKey_19 = nullptr
                int32_t var_4e0_1 = 0
                sub_1405947f0(&hKey_19, 0x15)
                int32_t rsi_5 = var_4e0_1 + 0x15
                
                if (rsi_5 s> 0)
                    sub_140594770(&hKey_19)
                
                int16_t* hKey_26 = hKey_19
                UnDecorator::getReferenceType(hKey_26, u"\HKEY_LOCAL_MACHINE\", 0x2a)
                int16_t* hKey_22
                
                if (rsi_5 s> 1)
                    int32_t rdi_4
                    
                    if (rdi_2 == 0)
                        rdi_4 = 0
                    else
                        rdi_4 = rdi_2 - 1
                    
                    int32_t rax_31
                    
                    if (rsi_5 == 0)
                        rax_31 = rsi_5 + 1
                    
                    if (rsi_5 != 0 || rdi_4 == 0)
                        rax_31 = 0
                    
                    sub_140596690(&hKey_24, &hKey_19, rdi_4 + rax_31)
                    sub_140a20ba0(&hKey_24, hKey_16, rdi_4)
                    hKey_22 = hKey_24
                    rdi_2 = var_508
                    hKey_26 = hKey_19
                    hKey_24 = nullptr
                    var_508.q = 0
                else
                    hKey_22 = hKey_16
                    hKey_16 = nullptr
                
                if (hKey_25 != 0)
                    sub_140a74f90(hKey_25)
                
                hKey_25 = hKey_22
                
                if (hKey_26 != 0)
                    sub_140a74f90(hKey_26)
                
                if (hKey_16 != 0)
                    sub_140a74f90(hKey_16)
            
            int32_t rsi_6
            
            if (rdi_2 == 0)
                rsi_6 = 0
            else
                hKey_36 = hKey_25
                rsi_6 = rdi_2 - 1
            
            hKey_8 = nullptr
            int64_t var_520_3 = 0
            int16_t* hKey_17 = nullptr
            int32_t rdx_28 = 0
            
            if (rsi_6 s> 0x14)
                rsi_6 = 0x14
            
            int32_t rax_32 = 0
            int32_t r15_6
            
            if (hKey_36 != 0 && *hKey_36 != 0 && rsi_6 s> 0)
                if (rsi_6 + 1 s> 0)
                    sub_1405947f0(&hKey_8, rsi_6 + 1)
                    rax_32 = var_520_3:4.d
                    rdx_28 = var_520_3.d
                    hKey_17 = hKey_8
                
                r15_6 = rsi_6 + 1 + rdx_28
                var_520_3.d = r15_6
                
                if (r15_6 s> rax_32)
                    sub_140594770(&hKey_8)
                    r15_6 = var_520_3.d
                    hKey_17 = hKey_8
                
                UnDecorator::getReferenceType(hKey_17, hKey_36, rsi_6 * 2)
                hKey_17[sx.q(r15_6) - 1] = 0
            
            int16_t* hKey_21
            int16_t* r15_7
            
            if (hKey_36 == 0 || *hKey_36 == 0 || rsi_6 s<= 0 || r15_6 == 0)
                r15_7 = &data_142d40450
                hKey_21 = &data_142d40450
            else
                hKey_21 = hKey_17
                r15_7 = &data_142d40450
            
            rsi_6.b = sub_140a54510(hKey_21, u"\HKEY_LOCAL_MACHINE\") == 0
            
            if (hKey_17 != 0)
                sub_140a74f90(hKey_17)
            
            if (rsi_6.b != 0)
                int16_t* hKey_34
                int32_t rdi_5
                
                if (rdi_2 == 0)
                    rdi_5 = 0
                    hKey_34 = &data_142d40450
                else
                    rdi_5 = rdi_2 - 1
                    hKey_34 = hKey_25
                
                int32_t rax_35
                
                if (rdi_5 - 0x14 s>= 0)
                    rax_35 = rdi_5
                    
                    if (rdi_5 - 0x14 s< rdi_5)
                        rax_35 = rdi_5 - 0x14
                else
                    rax_35 = 0
                
                hKey_8 = nullptr
                int64_t var_520_4 = 0
                void* rdi_6 = &hKey_34[sx.q(rdi_5) - sx.q(rax_35)]
                int32_t rdx_31 = 0
                int32_t rcx_79 = 0
                
                if (rdi_6 != 0 && *rdi_6 != 0)
                    int64_t rsi_7 = -1
                    
                    do
                        rsi_7 += 1
                    while (*(rdi_6 + (rsi_7 << 1)) != 0)
                    
                    if (rsi_7.d + 1 s> 0)
                        sub_1405947f0(&hKey_8, rsi_7.d + 1)
                        rcx_79 = var_520_4:4.d
                        rdx_31 = var_520_4.d
                    
                    int32_t rax_37 = rdx_31 + rsi_7.d + 1
                    var_520_4.d = rax_37
                    
                    if (rax_37 s> rcx_79)
                        sub_140594770(&hKey_8)
                    
                    UnDecorator::getReferenceType(hKey_8, rdi_6, (rsi_7.d + 1) * 2)
                
                var_4d8 = 0
                var_4d0 = nullptr
                int32_t var_4c8_2 = 0
                __builtin_memset(&var_4c0, 0, 0x50)
                sub_140b6ce50(&hKey_8, &var_4d8)
                
                if (sub_140b6e8f0(&var_4d8) == 0)
                    sub_140a20ba0(&var_3f0, u"GetVideoDriverDetailsInvalid ", 0x1d)
                
                int16_t* rdx_36
                
                if (arg2[1].d == 0)
                    rdx_36 = &data_142d40450
                else
                    rdx_36 = *arg2
                
                if (var_4c8_2 != 0)
                    r15_7 = var_4d0
                
                if (sub_140a54510(r15_7, rdx_36) != 0)
                    sub_140a20ba0(&var_3f0, u"PrimaryIsNotTheChoosenAdapter ", 0x1e)
                else
                    sub_140b64580(&var_468, &var_4d8)
                
                sub_140b64390(&var_4d8)
                int16_t* hKey_14 = hKey_8
                
                if (hKey_14 != 0)
                    sub_140a74f90(hKey_14)
                
                break
            
            r8_5 = 0x1c
            rdx_18 = u"PrimaryDriverLocationFailed "
        else
            int32_t r9_1 = 0x100
            hKey_1 = nullptr
            
            if (r13_1 == 0)
                r9_1 = 0x200
            
            if (RegOpenKeyExW(-0xffffffff80000002, HARDWARE\DEVICEMAP\VIDEO", 0, r9_1 | 0x20019, 
                    &hKey_1) == NO_ERROR)
                HKEY hKey = hKey_1
                uint32_t* lpcbData = &lpcbData_1
                uint8_t* lpData = nullptr
                lpcbData_1 = 0
                
                if (RegQueryValueExW(hKey, \Device\Video0", nullptr, nullptr, lpData, lpcbData)
                        == NO_ERROR)
                    uint32_t lpcbData_2 = lpcbData_1
                    
                    if (lpcbData_2 != 0)
                        uint8_t* lpData_1 = j_sub_140a82f30(zx.q(lpcbData_2))
                        
                        if (RegQueryValueExW(hKey_1, \Device\Video0", nullptr, nullptr, lpData_1, 
                                &lpcbData_1) == NO_ERROR)
                            int16_t* hKey_23 = nullptr
                            rsi = zx.q(lpcbData_1 u>> 1)
                            rdi_2 = 0
                            hKey_13 = nullptr
                            int32_t rax_23 = 0
                            int64_t var_4f0_1 = 0
                            
                            if (lpData_1 != 0 && *lpData_1 != 0 && rsi.d u> 1)
                                if (rsi.d != 0)
                                    sub_1405947f0(&hKey_13, rsi.d)
                                    rax_23 = var_4f0_1:4.d
                                    rdi_2 = var_4f0_1.d
                                    hKey_23 = hKey_13
                                
                                rdi_2 += rsi.d
                                var_4f0_1.d = rdi_2
                                
                                if (rdi_2 s> rax_23)
                                    sub_140594770(&hKey_13)
                                    rdi_2 = var_4f0_1.d
                                    hKey_23 = hKey_13
                                
                                UnDecorator::getReferenceType(hKey_23, lpData_1, (rsi << 1).d - 2)
                                hKey_23[sx.q(rdi_2) - 1] = 0
                            
                            if (hKey_25 != 0)
                                sub_140a74f90(hKey_25)
                            
                            hKey_25 = hKey_23
                            hKey_13 = nullptr
                            int64_t var_4f0_2 = 0
                            rsi.b = 1
                        
                        j_sub_140a74f90(lpData_1)
                
                RegCloseKey(hKey_1)
            
            r13_1 += 1
            
            if (r13_1 s< 2)
                continue
            else
                if (rsi.b != 0)
                    goto label_140b687ed
                
                r8_5 = 0x16
                rdx_18 = u"QueryForPrimaryFailed "
        
        sub_140a20ba0(&var_3f0, rdx_18, r8_5)
        break
    
    if (hKey_25 != 0)
        hKey_30 = hKey_25
    label_140b68cb4:
        sub_140a74f90(hKey_30)
    
label_140b68cb9:
    result = arg1
    sub_140b64290(result, &var_468)
    int64_t rcx_92 = var_3f0
    
    if (rcx_92 != 0)
        sub_140a74f90(rcx_92)
    
    sub_140b64390(&var_468)
__security_check_cookie(rax_1 ^ &var_558)
return result
