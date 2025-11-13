// 函数: sub_140a32d50
// 地址: 0x140a32d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_5d8
int64_t rax_1 = __security_cookie ^ &var_5d8
int32_t var_5ac = 0
void* rax_2 = sub_140a7b0a0()

if (rax_2 != 0)
    sub_140a8dc00(rax_2, 0)

int32_t r12 = data_14399e5d4
data_14399e5d4 = 0
int32_t i_17 = 0
int32_t var_5b4 = 0

if (sub_140a54810() != 0)
    if (arg1[1].d == 1)
        int64_t* rax_4 = *arg1
        int16_t* const rcx_1
        
        if (rax_4[1].d == 0)
            rcx_1 = &data_142d40450
        else
            rcx_1 = *rax_4
        
        if (sub_140a54510(rcx_1, u"infinite") == 0)
            while (true)
                int64_t performanceCount_28
                QueryPerformanceCounter(&performanceCount_28)
                uint64_t (* var_520)(int64_t* arg1) = sub_140a22020
                int32_t* var_530 = &i_17
                int32_t* var_528_1 = &var_5b4
                int32_t** var_518_1 = &var_530
                sub_14077b750(0x3e8, &var_520, 0)
                int64_t performanceCount_29
                QueryPerformanceCounter(&performanceCount_29)
                int64_t* rcx_4 = data_143cf8c40
                (*(*rcx_4 + 0x30))(rcx_4, 0x102)
                int64_t performanceCount_30
                QueryPerformanceCounter(&performanceCount_30)
    
    int64_t performanceCount_31
    QueryPerformanceCounter(&performanceCount_31)
    void* var_1f0_1 = nullptr
    int32_t i_31 = 0
    int32_t var_1e4_1 = 4
    void var_210
    sub_14085a940(&var_210, 0x3e8)
    int64_t i_23 = 0x3e8
    int64_t i
    
    do
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
        
        int64_t* rsi_1 = lpTlsValue[1]
        int32_t rcx_12
        
        if (rsi_1 != 0)
            rcx_12 = lpTlsValue[2].d
        else
            int64_t rax_7 = *lpTlsValue
            
            if (rax_7 == 0)
                int64_t rax_8 = sub_14059e7c0(&data_143cf0958)
                lpTlsValue[1] = rax_8
                
                if (rax_8 == 0)
                    int64_t* rax_9 = sub_140a82f70(0x2000, 0)
                    lpTlsValue[1] = rax_9
                    int64_t j_3 = 0x1f
                    int64_t* rcx_11
                    int64_t j
                    
                    do
                        rcx_11 = &rax_9[0x20]
                        *rax_9 = rcx_11
                        rax_9 = rcx_11
                        j = j_3
                        j_3 -= 1
                    while (j != 1)
                    *rcx_11 = 0
            else
                lpTlsValue[1] = rax_7
                *lpTlsValue = 0
            
            rsi_1 = lpTlsValue[1]
            rcx_12 = 0x20
            lpTlsValue[2].d = 0x20
        
        lpTlsValue[1] = *rsi_1
        lpTlsValue[2].d = rcx_12 - 1
        int64_t* var_578
        int64_t** rax_12 = sub_140a228d0(&var_578)
        int64_t* rcx_14 = *rax_12
        *rax_12 = nullptr
        int64_t* var_580_1 = rcx_14
        *rsi_1 = &data_142d40498
        rsi_1[1].d = 0xff
        *(rsi_1 + 0xc) = 1
        *rsi_1 = &data_142e04a50
        *(rsi_1 + 0x14) = 0
        rsi_1[3] = rcx_14
        int64_t* rcx_15 = var_578
        int64_t var_580_2 = 0
        
        if (rcx_15 != 0)
            sub_140a2f7d0(rcx_15)
        
        rsi_1[2].d = 0xff
        void* rbx_1 = rsi_1[3]
        
        if (rbx_1 != 0)
            *(rbx_1 + 0x48) += 1
        
        sub_1408c3b70(rsi_1, nullptr, 2, 1)
        int64_t i_46 = sx.q(i_31)
        int32_t i_44 = (i_46 + 1).d
        i_31 = i_44
        
        if (i_44 s> var_1e4_1)
            sub_14083a490(&var_210, i_46.d)
        
        void* rcx_19 = &var_210
        
        if (var_1f0_1 != 0)
            rcx_19 = var_1f0_1
        
        *(rcx_19 + (i_46 << 3)) = rbx_1
        i = i_23
        i_23 -= 1
    while (i != 1)
    int64_t performanceCount_32
    QueryPerformanceCounter(&performanceCount_32)
    void var_288
    int64_t* rax_14 = sub_140a22cb0(&var_288, &var_210, (i_23 + 2).d)
    *(*rax_14 + 0x10) = 0xff
    void* rcx_23 = *rax_14
    int32_t r8_2 = rax_14[2].d
    int64_t* rdx_5 = rax_14[1]
    int64_t* rbx_2 = *(rcx_23 + 0x18)
    int64_t* var_5a8_1 = rbx_2
    int32_t* rsi_2 = &rbx_2[9]
    
    if (rbx_2 != 0)
        *rsi_2 += 1
        rbx_2 = var_5a8_1
    
    sub_1408c3b70(rcx_23, rdx_5, r8_2, 1)
    int64_t performanceCount_33
    QueryPerformanceCounter(&performanceCount_33)
    int64_t* rcx_25 = data_143cf8c40
    void** var_100_1 = nullptr
    int32_t var_f4_1 = 4
    int32_t i_36 = 1
    int64_t* var_120 = rbx_2
    
    if (rbx_2 != 0)
        *rsi_2 += 1
        rbx_2 = var_5a8_1
    
    (*(*rcx_25 + 0x48))(rcx_25, &var_120, 0x102)
    void** rcx_26 = var_100_1
    void** rsi_3 = &var_120
    int32_t i_24 = i_36
    
    if (rcx_26 != 0)
        rsi_3 = rcx_26
    
    if (i_24 != 0)
        int32_t i_1
        
        do
            int64_t* rcx_27 = *rsi_3
            
            if (rcx_27 != 0)
                sub_140a2f7d0(rcx_27)
            
            rsi_3 = &rsi_3[1]
            i_1 = i_24
            i_24 -= 1
        while (i_1 != 1)
        rcx_26 = var_100_1
    
    if (rcx_26 != 0)
        sub_140a74f90(rcx_26)
    
    int64_t performanceCount_34
    QueryPerformanceCounter(&performanceCount_34)
    
    if (rbx_2 != 0)
        sub_140a2f7d0(rbx_2)
    
    void* rcx_31 = var_1f0_1
    void* rbx_3 = &var_210
    int32_t i_18 = i_31
    
    if (rcx_31 != 0)
        rbx_3 = rcx_31
    
    if (i_18 != 0)
        int32_t i_2
        
        do
            int64_t* rcx_30 = *rbx_3
            
            if (rcx_30 != 0)
                sub_140a2f7d0(rcx_30)
            
            rbx_3 += 8
            i_2 = i_18
            i_18 -= 1
        while (i_2 != 1)
        rcx_31 = var_1f0_1
    
    if (rcx_31 != 0)
        sub_140a74f90(rcx_31)
    
    i_17 = 0
    var_5b4 = 0
    int64_t performanceCount_35
    QueryPerformanceCounter(&performanceCount_35)
    void* var_1c0_1 = nullptr
    int32_t i_32 = 0
    int32_t var_1b4_1 = 4
    void var_1e0
    sub_14085a940(&var_1e0, 0x3e8)
    int64_t i_25 = 0x3e8
    int32_t r15_1
    int64_t i_3
    
    do
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
        
        int64_t* rsi_4 = lpTlsValue_1[1]
        int32_t rcx_37
        
        if (rsi_4 != 0)
            rcx_37 = lpTlsValue_1[2].d
        else
            rsi_4 = *lpTlsValue_1
            
            if (rsi_4 == 0)
                int32_t rax_17 = sub_140a2d3e0(&data_143cf0958)
                rsi_4 = nullptr
                
                if (rax_17 != 0)
                    rsi_4 = *(*((zx.q(rax_17) u>> 0xe << 3) + &data_143cf0bf8)
                        + (zx.q(rax_17) & 0x3fff) * 0x18 + 8)
                    sub_140a24050(rax_17)
                
                lpTlsValue_1[1] = rsi_4
                
                if (rsi_4 == 0)
                    int64_t* rax_18 = sub_140a82f70(0x2000, 0)
                    lpTlsValue_1[1] = rax_18
                    int64_t j_4 = 0x1f
                    int64_t* rcx_42
                    int64_t j_1
                    
                    do
                        rcx_42 = &rax_18[0x20]
                        *rax_18 = rcx_42
                        rax_18 = rcx_42
                        j_1 = j_4
                        j_4 -= 1
                    while (j_1 != 1)
                    *rcx_42 = 0
                    rsi_4 = lpTlsValue_1[1]
                
                lpTlsValue_1[2].d = 0x20
                rcx_37 = 0x20
            else
                lpTlsValue_1[1] = rsi_4
                rcx_37 = 0x20
                *lpTlsValue_1 = 0
                lpTlsValue_1[2].d = 0x20
        
        lpTlsValue_1[1] = *rsi_4
        lpTlsValue_1[2].d = rcx_37 - 1
        int64_t* var_560
        int64_t** rax_21 = sub_140a228d0(&var_560)
        r15_1 = 0
        int64_t* rcx_44 = *rax_21
        *rax_21 = nullptr
        *rsi_4 = &data_142d40498
        int64_t* var_568_1 = rcx_44
        rsi_4[1].d = 0xff
        *(rsi_4 + 0xc) = 1
        *rsi_4 = &data_142e50890
        rsi_4[5].b = 0
        rsi_4[6] = rcx_44
        int64_t* rcx_45 = var_560
        int64_t var_568_2 = 0
        
        if (rcx_45 != 0)
            sub_140a2f7d0(rcx_45)
        
        rsi_4[4].d = 0x3e8
        rsi_4[2] = &i_17
        rsi_4[3] = &var_5b4
        void* rbx_4 = rsi_4[6]
        
        if (rbx_4 != 0)
            *(rbx_4 + 0x48) += 1
        
        sub_140a322a0(rsi_4, nullptr, 2, 1)
        int64_t i_47 = sx.q(i_32)
        int32_t i_45 = (i_47 + 1).d
        i_32 = i_45
        
        if (i_45 s> var_1b4_1)
            sub_14083a490(&var_1e0, i_47.d)
        
        void* rcx_49 = &var_1e0
        
        if (var_1c0_1 != 0)
            rcx_49 = var_1c0_1
        
        *(rcx_49 + (i_47 << 3)) = rbx_4
        i_3 = i_25
        i_25 -= 1
    while (i_3 != 1)
    int64_t performanceCount_36
    QueryPerformanceCounter(&performanceCount_36)
    void var_270
    int64_t* rax_23 = sub_140a22cb0(&var_270, &var_1e0, (i_25 + 2).d)
    *(*rax_23 + 0x10) = 0xff
    void* rcx_53 = *rax_23
    int32_t r8_4 = rax_23[2].d
    int64_t* rdx_13 = rax_23[1]
    int64_t* rbx_5 = *(rcx_53 + 0x18)
    int64_t* var_5a0_1 = rbx_5
    int32_t* rsi_5 = &rbx_5[9]
    
    if (rbx_5 != 0)
        *rsi_5 += 1
        rbx_5 = var_5a0_1
    
    sub_1408c3b70(rcx_53, rdx_13, r8_4, 1)
    int64_t performanceCount_37
    QueryPerformanceCounter(&performanceCount_37)
    int64_t* rcx_55 = data_143cf8c40
    void** var_d0_1 = nullptr
    int32_t var_c4_1 = 4
    int32_t i_37 = 1
    int64_t* var_f0 = rbx_5
    
    if (rbx_5 != 0)
        *rsi_5 += 1
        rbx_5 = var_5a0_1
    
    (*(*rcx_55 + 0x48))(rcx_55, &var_f0, 0x102)
    void** rcx_56 = var_d0_1
    void** rsi_6 = &var_f0
    int32_t i_26 = i_37
    
    if (rcx_56 != 0)
        rsi_6 = rcx_56
    
    if (i_26 != 0)
        int32_t i_4
        
        do
            int64_t* rcx_57 = *rsi_6
            
            if (rcx_57 != 0)
                sub_140a2f7d0(rcx_57)
            
            rsi_6 = &rsi_6[1]
            i_4 = i_26
            i_26 -= 1
        while (i_4 != 1)
        rcx_56 = var_d0_1
    
    if (rcx_56 != 0)
        sub_140a74f90(rcx_56)
    
    int64_t performanceCount_38
    QueryPerformanceCounter(&performanceCount_38)
    
    if (rbx_5 != 0)
        sub_140a2f7d0(rbx_5)
    
    void* rcx_61 = var_1c0_1
    void* rbx_6 = &var_1e0
    int32_t i_19 = i_32
    
    if (rcx_61 != 0)
        rbx_6 = rcx_61
    
    if (i_19 != 0)
        int32_t i_5
        
        do
            int64_t* rcx_60 = *rbx_6
            
            if (rcx_60 != 0)
                sub_140a2f7d0(rcx_60)
            
            rbx_6 += 8
            i_5 = i_19
            i_19 -= 1
        while (i_5 != 1)
        rcx_61 = var_1c0_1
    
    if (rcx_61 != 0)
        sub_140a74f90(rcx_61)
    
    i_17 = 0
    var_5b4 = 0
    int64_t performanceCount_39
    QueryPerformanceCounter(&performanceCount_39)
    void* var_190_1 = nullptr
    int32_t var_184_1 = 4
    int32_t i_33 = 0x3e8
    void var_1b0
    sub_14083a490(&var_1b0, 0)
    void* rcx_64 = &var_1b0
    
    if (var_190_1 != 0)
        rcx_64 = var_190_1
    
    memset(rcx_64, 0, 0x1f40)
    void* var_550 = &var_1b0
    int64_t (* var_510)(int64_t* arg1, int32_t* arg2) = sub_140a22220
    void** var_508_1 = &var_550
    sub_14077b750(0x3e8, &var_510, 0)
    int64_t performanceCount_40
    QueryPerformanceCounter(&performanceCount_40)
    void var_258
    int64_t* rax_27 = sub_140a22cb0(&var_258, &var_1b0, 2)
    *(*rax_27 + 0x10) = 0xff
    void* rcx_68 = *rax_27
    int32_t r8_5 = rax_27[2].d
    int64_t* rdx_17 = rax_27[1]
    int64_t* rbx_7 = *(rcx_68 + 0x18)
    int64_t* var_598_1 = rbx_7
    int32_t* rsi_7 = &rbx_7[9]
    
    if (rbx_7 != 0)
        *rsi_7 += 1
        rbx_7 = var_598_1
    
    sub_1408c3b70(rcx_68, rdx_17, r8_5, 1)
    int64_t performanceCount_41
    QueryPerformanceCounter(&performanceCount_41)
    int64_t* rcx_70 = data_143cf8c40
    void** var_a0_1 = nullptr
    int32_t var_94_1 = 4
    int32_t i_38 = 1
    int64_t* var_c0 = rbx_7
    
    if (rbx_7 != 0)
        *rsi_7 += 1
        rbx_7 = var_598_1
    
    (*(*rcx_70 + 0x48))(rcx_70, &var_c0, 0x102)
    void** rcx_71 = var_a0_1
    void** rsi_8 = &var_c0
    int32_t i_27 = i_38
    
    if (rcx_71 != 0)
        rsi_8 = rcx_71
    
    if (i_27 != 0)
        int32_t i_6
        
        do
            int64_t* rcx_72 = *rsi_8
            
            if (rcx_72 != 0)
                sub_140a2f7d0(rcx_72)
            
            rsi_8 = &rsi_8[1]
            i_6 = i_27
            i_27 -= 1
        while (i_6 != 1)
        rcx_71 = var_a0_1
    
    if (rcx_71 != 0)
        sub_140a74f90(rcx_71)
    
    int64_t performanceCount_42
    QueryPerformanceCounter(&performanceCount_42)
    
    if (rbx_7 != 0)
        sub_140a2f7d0(rbx_7)
    
    void* rcx_76 = var_190_1
    void* rbx_8 = &var_1b0
    int32_t i_20 = i_33
    
    if (rcx_76 != 0)
        rbx_8 = rcx_76
    
    if (i_20 != 0)
        int32_t i_7
        
        do
            int64_t* rcx_75 = *rbx_8
            
            if (rcx_75 != 0)
                sub_140a2f7d0(rcx_75)
            
            rbx_8 += 8
            i_7 = i_20
            i_20 -= 1
        while (i_7 != 1)
        rcx_76 = var_190_1
    
    if (rcx_76 != 0)
        sub_140a74f90(rcx_76)
    
    i_17 = 0
    var_5b4 = 0
    int64_t performanceCount_43
    QueryPerformanceCounter(&performanceCount_43)
    void* var_160_1 = nullptr
    int32_t var_154_1 = 4
    int32_t i_34 = 0xa
    void var_180
    sub_14083a490(&var_180, 0)
    void* rcx_79 = &var_180
    
    if (var_160_1 != 0)
        rcx_79 = var_160_1
    
    memset(rcx_79, 0, 0x50)
    void* var_548 = &var_180
    int64_t (* var_500)(int64_t* arg1, int32_t* arg2) = sub_140a221b0
    void** var_4f8_1 = &var_548
    sub_14077b750(0xa, &var_500, 0)
    int64_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    void var_240
    int64_t* rax_31 = sub_140a22cb0(&var_240, &var_180, 2)
    *(*rax_31 + 0x10) = 0xff
    void* rcx_83 = *rax_31
    int32_t r8_6 = rax_31[2].d
    int64_t* rdx_21 = rax_31[1]
    int64_t* rbx_9 = *(rcx_83 + 0x18)
    int64_t* var_590_1 = rbx_9
    int32_t* rsi_9 = &rbx_9[9]
    
    if (rbx_9 != 0)
        *rsi_9 += 1
        rbx_9 = var_590_1
    
    sub_1408c3b70(rcx_83, rdx_21, r8_6, 1)
    int64_t performanceCount_1
    QueryPerformanceCounter(&performanceCount_1)
    int64_t* rcx_85 = data_143cf8c40
    void** var_70_1 = nullptr
    int32_t var_64_1 = 4
    int32_t i_39 = 1
    int64_t* var_90 = rbx_9
    
    if (rbx_9 != 0)
        *rsi_9 += 1
        rbx_9 = var_590_1
    
    (*(*rcx_85 + 0x48))(rcx_85, &var_90, 0x102)
    void** rcx_86 = var_70_1
    void** rsi_10 = &var_90
    int32_t i_28 = i_39
    
    if (rcx_86 != 0)
        rsi_10 = rcx_86
    
    if (i_28 != 0)
        int32_t i_8
        
        do
            int64_t* rcx_87 = *rsi_10
            
            if (rcx_87 != 0)
                sub_140a2f7d0(rcx_87)
            
            rsi_10 = &rsi_10[1]
            i_8 = i_28
            i_28 -= 1
        while (i_8 != 1)
        rcx_86 = var_70_1
    
    if (rcx_86 != 0)
        sub_140a74f90(rcx_86)
    
    int64_t performanceCount_2
    QueryPerformanceCounter(&performanceCount_2)
    
    if (rbx_9 != 0)
        sub_140a2f7d0(rbx_9)
    
    void* rcx_91 = var_160_1
    void* rbx_10 = &var_180
    int32_t i_21 = i_34
    
    if (rcx_91 != 0)
        rbx_10 = rcx_91
    
    if (i_21 != 0)
        int32_t i_9
        
        do
            int64_t* rcx_90 = *rbx_10
            
            if (rcx_90 != 0)
                sub_140a2f7d0(rcx_90)
            
            rbx_10 += 8
            i_9 = i_21
            i_21 -= 1
        while (i_9 != 1)
        rcx_91 = var_160_1
    
    if (rcx_91 != 0)
        sub_140a74f90(rcx_91)
    
    i_17 = 0
    var_5b4 = 0
    int64_t performanceCount_3
    QueryPerformanceCounter(&performanceCount_3)
    void* var_130_1 = nullptr
    int32_t var_124_1 = 4
    int32_t i_35 = 0x64
    void var_150
    sub_14083a490(&var_150, 0)
    void* rcx_94 = &var_150
    
    if (var_130_1 != 0)
        rcx_94 = var_130_1
    
    memset(rcx_94, 0, 0x320)
    void* var_540 = &var_150
    int64_t (* var_4f0)(int64_t* arg1, int32_t* arg2) = sub_140a22160
    void** var_4e8_1 = &var_540
    sub_14077b750(0x64, &var_4f0, 0)
    int64_t performanceCount_4
    QueryPerformanceCounter(&performanceCount_4)
    void var_228
    int64_t* rax_35 = sub_140a22cb0(&var_228, &var_150, 2)
    *(*rax_35 + 0x10) = 0xff
    void* rcx_98 = *rax_35
    int32_t r8_7 = rax_35[2].d
    int64_t* rdx_25 = rax_35[1]
    int64_t* rbx_11 = *(rcx_98 + 0x18)
    int64_t* var_588_1 = rbx_11
    int32_t* rsi_11 = &rbx_11[9]
    
    if (rbx_11 != 0)
        *rsi_11 += 1
        rbx_11 = var_588_1
    
    sub_1408c3b70(rcx_98, rdx_25, r8_7, 1)
    int64_t performanceCount_5
    QueryPerformanceCounter(&performanceCount_5)
    int64_t* rcx_100 = data_143cf8c40
    void** var_40_1 = nullptr
    int32_t var_34_1 = 4
    int32_t i_40 = 1
    int64_t* var_60 = rbx_11
    
    if (rbx_11 != 0)
        *rsi_11 += 1
        rbx_11 = var_588_1
    
    (*(*rcx_100 + 0x48))(rcx_100, &var_60, 0x102)
    void** rcx_101 = var_40_1
    void** rsi_12 = &var_60
    int32_t i_29 = i_40
    
    if (rcx_101 != 0)
        rsi_12 = rcx_101
    
    if (i_29 != 0)
        int32_t i_10
        
        do
            int64_t* rcx_102 = *rsi_12
            
            if (rcx_102 != 0)
                sub_140a2f7d0(rcx_102)
            
            rsi_12 = &rsi_12[1]
            i_10 = i_29
            i_29 -= 1
        while (i_10 != 1)
        rcx_101 = var_40_1
    
    if (rcx_101 != 0)
        sub_140a74f90(rcx_101)
    
    int64_t performanceCount_6
    QueryPerformanceCounter(&performanceCount_6)
    
    if (rbx_11 != 0)
        sub_140a2f7d0(rbx_11)
    
    void* rcx_106 = var_130_1
    void* rbx_12 = &var_150
    int32_t i_22 = i_35
    
    if (rcx_106 != 0)
        rbx_12 = rcx_106
    
    if (i_22 != 0)
        int32_t i_11
        
        do
            int64_t* rcx_105 = *rbx_12
            
            if (rcx_105 != 0)
                sub_140a2f7d0(rcx_105)
            
            rbx_12 += 8
            i_11 = i_22
            i_22 -= 1
        while (i_11 != 1)
        rcx_106 = var_130_1
    
    if (rcx_106 != 0)
        sub_140a74f90(rcx_106)
    
    i_17 = 0
    var_5b4 = 0
    int64_t performanceCount_7
    QueryPerformanceCounter(&performanceCount_7)
    int32_t* var_4e0 = &i_17
    int32_t* var_4d8_1 = &var_5b4
    uint64_t (* var_4d0)(int64_t* arg1) = sub_140a220d0
    int32_t** var_4c8_1 = &var_4e0
    sub_14077b750(0x3e8, &var_4d0, 0)
    int64_t performanceCount_8
    QueryPerformanceCounter(&performanceCount_8)
    int32_t i_41 = 0
    
    if (0 == i_17)
        i_17 = 0
    else
        i_41 = i_17
    
    if (i_41 s< 0x3e8)
        int32_t i_12
        
        do
            i_12 = 0
            
            if (0 == i_17)
                i_17 = 0
            else
                i_12 = i_17
        while (i_12 s< 0x3e8)
    
    int64_t performanceCount_9
    QueryPerformanceCounter(&performanceCount_9)
    i_17 = 0
    var_5b4 = 0
    int64_t performanceCount_10
    QueryPerformanceCounter(&performanceCount_10)
    memset(&data_143cf0460, 0, 0x3e8)
    char var_5b0 = 0
    int64_t (* var_4c0)(int64_t arg1, int32_t* arg2) = sub_140a22240
    char* var_4b8_1 = &var_5b0
    sub_14077b750(0x3e8, &var_4c0, 0)
    int64_t performanceCount_11
    QueryPerformanceCounter(&performanceCount_11)
    
    for (int64_t i_13 = 0; i_13 s< 0x3e8; i_13 += 1)
        while (*(i_13 + &data_143cf0460) == 0)
            sub_140b73230(zx.o(0))
    
    int64_t performanceCount_12
    QueryPerformanceCounter(&performanceCount_12)
    i_17 = 0
    var_5b4 = 0
    int64_t performanceCount_13
    QueryPerformanceCounter(&performanceCount_13)
    int32_t* var_4b0 = &i_17
    int32_t* var_4a8_1 = &var_5b4
    uint64_t (* var_4a0)(int64_t* arg1) = sub_140a21fa0
    int32_t** var_498_1 = &var_4b0
    sub_14077b750(0x3e8, &var_4a0, 0)
    int64_t performanceCount_14
    QueryPerformanceCounter(&performanceCount_14)
    int32_t i_42 = 0
    
    if (0 == i_17)
        i_17 = 0
    else
        i_42 = i_17
    
    if (i_42 s< 0x3e8)
        int32_t i_14
        
        do
            sub_140b73230(zx.o(0))
            i_14 = 0
            
            if (0 == i_17)
                i_17 = 0
            else
                i_14 = i_17
        while (i_14 s< 0x3e8)
    
    int64_t performanceCount_15
    QueryPerformanceCounter(&performanceCount_15)
    i_17 = 0
    var_5b4 = 0
    int64_t performanceCount_16
    QueryPerformanceCounter(&performanceCount_16)
    int64_t var_388_1 = 0
    int64_t var_380_1 = 0
    int64_t i_30 = 0x3e8
    int64_t i_15
    
    do
        int64_t* lpTlsValue_7 = TlsGetValue(data_143cf0950)
        int64_t* lpTlsValue_2 = lpTlsValue_7
        
        if (lpTlsValue_7 == 0)
            int64_t* lpTlsValue_8 = j_sub_140a82f30(zx.q((&lpTlsValue_7[3]).d))
            lpTlsValue_2 = lpTlsValue_8
            
            if (lpTlsValue_8 == 0)
                lpTlsValue_2 = nullptr
            else
                __builtin_memset(lpTlsValue_8, 0, 0x14)
            
            TlsSetValue(data_143cf0950, lpTlsValue_2)
        
        int64_t* rsi_13 = lpTlsValue_2[1]
        int32_t rcx_120
        
        if (rsi_13 != 0)
            rcx_120 = lpTlsValue_2[2].d
        else
            rsi_13 = *lpTlsValue_2
            
            if (rsi_13 == 0)
                int32_t rax_41 = sub_140a2d3e0(&data_143cf0958)
                rsi_13 = nullptr
                
                if (rax_41 != 0)
                    rsi_13 = *(*((zx.q(rax_41) u>> 0xe << 3) + &data_143cf0bf8)
                        + (zx.q(rax_41) & 0x3fff) * 0x18 + 8)
                    sub_140a24050(rax_41)
                
                lpTlsValue_2[1] = rsi_13
                
                if (rsi_13 == 0)
                    int64_t* rax_42 = sub_140a82f70(0x2000, 0)
                    lpTlsValue_2[1] = rax_42
                    int64_t j_5 = 0x1f
                    int64_t* rcx_125
                    int64_t j_2
                    
                    do
                        rcx_125 = &rax_42[0x20]
                        *rax_42 = rcx_125
                        rax_42 = rcx_125
                        j_2 = j_5
                        j_5 -= 1
                    while (j_2 != 1)
                    *rcx_125 = 0
                    rsi_13 = lpTlsValue_2[1]
                
                lpTlsValue_2[2].d = 0x20
                rcx_120 = 0x20
            else
                lpTlsValue_2[1] = rsi_13
                rcx_120 = 0x20
                *lpTlsValue_2 = 0
                lpTlsValue_2[2].d = 0x20
        
        r15_1 |= 0x100
        lpTlsValue_2[1] = *rsi_13
        lpTlsValue_2[2].d = rcx_120 - 1
        *rsi_13 = &data_142d40498
        rsi_13[1].d = 0xff
        *(rsi_13 + 0xc) = 1
        *rsi_13 = &data_142e50880
        rsi_13[5].b = 0
        rsi_13[6] = 0
        
        if (test_bit(r15_1, 9))
            r15_1 &= 0xfffffdff
            int64_t* var_378
            
            if (var_378 != 0)
                sub_140a2f7d0(var_378)
        
        rsi_13[4].d = 0x3e8
        rsi_13[2] = &i_17
        rsi_13[3] = &var_5b4
        int64_t* rbx_13 = rsi_13[6]
        
        if (rbx_13 != 0)
            rbx_13[9].d += 1
        
        sub_140a322a0(rsi_13, nullptr, 2, 1)
        
        if (rbx_13 != 0)
            sub_140a2f7d0(rbx_13)
        
        i_15 = i_30
        i_30 -= 1
    while (i_15 != 1)
    int64_t performanceCount_17
    QueryPerformanceCounter(&performanceCount_17)
    int32_t i_43 = 0
    
    if (0 == i_17)
        i_17 = 0
    else
        i_43 = i_17
    
    if (i_43 s< 0x3e8)
        int32_t i_16
        
        do
            sub_140b73230(zx.o(0))
            i_16 = 0
            
            if (0 == i_17)
                i_17 = 0
            else
                i_16 = i_17
        while (i_16 s< 0x3e8)
    
    int64_t performanceCount_18
    QueryPerformanceCounter(&performanceCount_18)
    i_17 = 0
    var_5b4 = 0
    int64_t performanceCount_19
    QueryPerformanceCounter(&performanceCount_19)
    int32_t* var_490 = &i_17
    int32_t* var_488_1 = &var_5b4
    uint64_t (* var_480)(int64_t* arg1) = sub_140a22020
    int32_t** var_478_1 = &var_490
    sub_14077b750(0x3e8, &var_480, 0)
    int64_t performanceCount_20
    QueryPerformanceCounter(&performanceCount_20)
    int64_t* rcx_133 = data_143cf8c40
    (*(*rcx_133 + 0x30))(rcx_133, 0x102)
    int64_t performanceCount_21
    QueryPerformanceCounter(&performanceCount_21)
    i_17 = 0
    var_5b4 = 0
    int64_t performanceCount_22
    QueryPerformanceCounter(&performanceCount_22)
    int32_t* var_470 = &i_17
    int32_t* var_468_1 = &var_5b4
    int64_t (* var_460)() = sub_140594850
    int32_t** var_458_1 = &var_470
    sub_14077b750(0x3e8, &var_460, 0)
    int64_t performanceCount_23
    QueryPerformanceCounter(&performanceCount_23)
    i_17 = 0
    var_5b4 = 0
    int64_t performanceCount_24
    QueryPerformanceCounter(&performanceCount_24)
    int32_t* var_450 = &i_17
    int32_t* var_448_1 = &var_5b4
    int64_t (* var_440)(int64_t* arg1, int32_t* arg2) = sub_140a22230
    int32_t** var_438_1 = &var_450
    sub_14077b750(0x3e8, &var_440, 0)
    int64_t performanceCount_25
    QueryPerformanceCounter(&performanceCount_25)
    i_17 = 0
    var_5b4 = 0
    int64_t performanceCount_26
    QueryPerformanceCounter(&performanceCount_26)
    int32_t* var_430 = &i_17
    int32_t* var_428_1 = &var_5b4
    int64_t (* var_420)(int64_t* arg1, int32_t* arg2) = sub_140a22230
    int32_t** var_418_1 = &var_430
    sub_14077b750(0x3e8, &var_420, 1)
    int64_t performanceCount_27
    QueryPerformanceCounter(&performanceCount_27)
    i_17 = 0
    var_5b4 = 0

data_14399e5d4 = r12
void* result = sub_140a7b0a0()

if (result != 0)
    result = sub_140a89de0(result, 0)

__security_check_cookie(rax_1 ^ &var_5d8)
return result
