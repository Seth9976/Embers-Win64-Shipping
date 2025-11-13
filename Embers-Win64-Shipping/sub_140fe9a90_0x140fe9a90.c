// 函数: sub_140fe9a90
// 地址: 0x140fe9a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x2230)
void var_2258
int64_t rax_1 = __security_cookie ^ &var_2258
int64_t* rsi = arg1
int64_t* var_2200 = arg1
void var_21d8
sub_141992c00(&var_21d8, 0)
void* ppDevice_1 = &rsi[0x2d]
bool cond:0 = *ppDevice_1 != 0
void* ppDevice_2 = ppDevice_1

if (not(cond:0))
    sub_140fddf90(rsi)
    char r13_1 = 0
    int64_t* pAdapter = nullptr
    enum D3D_DRIVER_TYPE DriverType_1 = D3D_DRIVER_TYPE_UNKNOWN
    enum D3D_DRIVER_TYPE DriverType = D3D_DRIVER_TYPE_UNKNOWN
    int32_t r14_1
    r14_1.b = sub_140fe5200() == 0
    
    if (sub_140fe5280() != 0)
        r14_1 |= 2
    
    data_143f0f200 = 0
    int64_t* rcx_2 = rsi[0x28]
    enum D3D11_CREATE_DEVICE_FLAG Flags_3 = r14_1 | 0x20
    uint64_t rdx_1 = zx.q(rsi[0x2fbf].d)
    int64_t* pAdapter_3 = nullptr
    enum D3D11_CREATE_DEVICE_FLAG Flags_1 = Flags_3
    uint64_t i_3 = 2
    int64_t* pAdapter_1
    int32_t var_2178
    int32_t var_2168
    uint128_t zmm0_1
    
    if ((*(*rcx_2 + 0x38))(rcx_2, rdx_1, &pAdapter_3) != 0x887a0002)
        int64_t* pAdapter_2 = pAdapter_3
        
        if (pAdapter_2 != 0)
            void* rax_6 = &rsi[0x2fc0]
            int16_t var_2068[0x80]
            int16_t (* rdx_2)[0x80] = &var_2068
            float zmm1_1[0x4]
            uint64_t i
            
            do
                rdx_2 = &(*rdx_2)[0x40]
                zmm0_1 = *rax_6
                zmm1_1 = *(rax_6 + 0x10)
                rax_6 += 0x80
                *(rdx_2 - 0x80) = zmm0_1
                zmm0_1 = *(rax_6 - 0x60)
                *(rdx_2 - 0x70) = zmm1_1
                zmm1_1 = *(rax_6 - 0x50)
                *(rdx_2 - 0x60) = zmm0_1
                zmm0_1 = *(rax_6 - 0x40)
                *(rdx_2 - 0x50) = zmm1_1
                zmm1_1 = *(rax_6 - 0x30)
                *(rdx_2 - 0x40) = zmm0_1
                zmm0_1 = *(rax_6 - 0x20)
                *(rdx_2 - 0x30) = zmm1_1
                zmm1_1 = *(rax_6 - 0x10)
                *(rdx_2 - 0x20) = zmm0_1
                *(rdx_2 - 0x10) = zmm1_1
                i = i_3
                i_3 -= 1
            while (i != 1)
            pAdapter = pAdapter_2
            zmm1_1 = *(rax_6 + 0x10)
            *rdx_2 = *rax_6
            zmm0_1 = *(rax_6 + 0x20)
            *(rdx_2 + 0x10) = zmm1_1
            *(rdx_2 + 0x20) = zmm0_1
            (*(*pAdapter_2 + 8))()
            
            if (data_143f024b8 != &var_2068)
                int32_t rbx_2
                
                if (var_2068[0] == 0)
                    rbx_2 = 0
                else
                    int64_t rbx_1 = -1
                    
                    do
                        rbx_1 += 1
                    while (var_2068[rbx_1] != 0)
                    
                    rbx_2 = rbx_1.d + 1
                
                int32_t rcx_3 = data_143f024c4
                int32_t rdx_3 = 0
                data_143f024c0 = 0
                
                if (rcx_3 != rbx_2)
                    sub_1405947f0(&data_143f024b8, rbx_2)
                    rcx_3 = data_143f024c4
                    rdx_3 = data_143f024c0
                
                int32_t rax_8 = rbx_2 + rdx_3
                data_143f024c0 = rax_8
                
                if (rax_8 s> rcx_3)
                    sub_140594770(&data_143f024b8)
                
                if (rbx_2 != 0)
                    memcpy(data_143f024b8, &var_2068, rbx_2 * 2)
            
            int32_t var_1f68
            data_143f0f1b0 = var_1f68
            int32_t var_1f64
            data_143f0f1a8 = var_1f64
            int32_t var_1f5c
            data_143f0f1ac = var_1f5c
            sub_140b68140(&pAdapter_1, &data_143f024b8)
            int32_t r8_4 = data_143f024e4
            data_143f024e0 = var_2178
            int64_t var_2180
            
            if (var_2178 != 0 || r8_4 != 0)
                sub_1405a4c70(&data_143f024d8, var_2178, r8_4)
                memcpy(data_143f024d8, var_2180, var_2178 * 2)
            else
                data_143f024e4 = 0
            
            int32_t r8_7 = data_143f024d4
            int32_t var_2188
            data_143f024d0 = var_2188
            int32_t var_2190
            
            if (var_2188 != 0 || r8_7 != 0)
                sub_1405a4c70(&data_143f024c8, var_2188, r8_7)
                memcpy(data_143f024c8, var_2190.q, var_2188 * 2)
            else
                data_143f024d4 = 0
            
            int64_t var_2170
            int64_t rbx_5 = var_2170
            int32_t r8_10 = data_143f024f4
            data_143f024f0 = var_2168
            
            if (var_2168 != 0 || r8_10 != 0)
                sub_1405a4c70(&data_143f024e8, var_2168, r8_10)
                memcpy(data_143f024e8, rbx_5, var_2168 * 2)
                rbx_5 = var_2170
            else
                data_143f024f4 = 0
            
            int64_t var_2160
            
            if (var_2160 != 0)
                sub_140a74f90(var_2160)
                rbx_5 = var_2170
            
            if (rbx_5 != 0)
                sub_140a74f90(rbx_5)
            
            if (var_2180 != 0)
                sub_140a74f90(var_2180)
            
            int64_t rcx_12 = var_2190.q
            
            if (rcx_12 != 0)
                sub_140a74f90(rcx_12)
            
            int32_t var_21a0
            int64_t rcx_13 = var_21a0.q
            
            if (rcx_13 != 0)
                sub_140a74f90(rcx_13)
            
            int32_t var_21b0
            int64_t rcx_14 = var_21b0.q
            
            if (rcx_14 != 0)
                sub_140a74f90(rcx_14)
            
            int64_t var_1f58
            data_143e2b8c8 = var_1f58
            int64_t var_1f50
            data_143e2b8d0 = var_1f50
            int64_t var_1f48
            data_143e2b8d8 = var_1f48
            sub_140b673e0()
            uint64_t rbx_6 = 8
            uint64_t rcx_15 = zx.q(data_1439a95a8)
            int64_t rax_16
            int64_t rdx_12
            rdx_12:rax_16 = sx.o(data_143e2b8d8)
            int64_t* var_21d0 = nullptr
            
            if (rcx_15 u<= 8)
                rbx_6 = zx.q(rcx_15.d)
            
            data_143e2b8e0 = 0
            uint64_t rbx_7 = rbx_6 << 0x1c
            int64_t rax_18 = (rax_16 - rdx_12) s>> 1
            int64_t rsi_4 = rbx_7
            
            if (rax_18 s<= rbx_7)
                rsi_4 = rax_18
            
            uint64_t rdx_15
            
            if (sub_1419767e0() == 0)
                if (sub_1419767d0() == 0)
                label_140fe9edc:
                    rdx_15 = data_143e2b8c8
                    
                    if (rdx_15 s< 0xc800000)
                        rdx_15 = data_143e2b8d0
                        
                        if (rdx_15 s< 0xc800000)
                            rdx_15 = rbx_7
                            
                            if (data_143e2b8d8 s>= 0x19000000)
                                rdx_15 = rsi_4
                else
                    int64_t* rcx_16 = var_21d0
                    
                    if (rcx_16 != 0)
                        (*(*rcx_16 + 0x10))(rcx_16)
                    
                    if ((**pAdapter)(pAdapter, &data_142efa7c8, &var_21d0) s< 0)
                        goto label_140fe9edc
                    
                    int64_t* rcx_18 = var_21d0
                    
                    if (rcx_18 == 0)
                        goto label_140fe9edc
                    
                    uint64_t var_2090
                    
                    if ((*(*rcx_18 + 0x70))(rcx_18, 0, 0, &var_2090) s< 0)
                        goto label_140fe9edc
                    
                    rdx_15 = var_2090
            else
                rdx_15 = data_143e2b8d0 + data_143e2b8c8 + rsi_4
            
            int32_t rax_26 = data_143f0f208
            data_143e2b8e0 = rdx_15
            
            if (rax_26 s> 0)
                zmm1_1 = zx.o(0)
                zmm0_1 = _mm_cvtepi32_ps(zx.o(rax_26))
                zmm1_1[0] = float.s(rdx_15)
                zmm0_1.d = zmm0_1.d f* 9.53674295e-09f
                zmm0_1.d = zmm0_1.d f* zmm1_1[0]
                truncf(zmm0_1.d)
                data_143f0f200 = int.q(zmm0_1.d) << 0x14
            
            int32_t rax_29
            rax_29, i_3 = sub_140a54510(&var_2068, u"NVIDIA PerfHUD")
            int64_t* rcx_20 = var_21d0
            
            if (rax_29 == 0)
                DriverType = D3D_DRIVER_TYPE_REFERENCE
            
            DriverType_1 = DriverType
            
            if (rcx_20 != 0)
                (*(*rcx_20 + 0x10))(rcx_20)
            
            rsi = var_2200
    
    if (sub_1419767d0() == 0 || rsi[0x2fe6].b == 0)
        __builtin_memset(&data_143e2c068, 0, 0x38)
    else
        int32_t rax_32
        rax_32, i_3 = agsInit(&rsi[0x4d4], nullptr, &data_143e2c070)
        
        if (rax_32 != 0)
            __builtin_memset(&data_143e2c068, 0, 0x38)
            rsi[0x4d4] = 0
        else
            int32_t i_4 = (data_143e2c090).d
            data_143e2c068 = rsi[0x4d4]
            
            if (i_4 s> 0)
                i_3 = zx.q(i_4)
                void* rcx_23 = data_143e2c098 + 0x14
                char rdx_16 = data_143f0f1b4
                uint64_t i_1
                
                do
                    int32_t rax_34
                    
                    if (rsi[0x2fe0].d != *(rcx_23 - 4) || *(rsi + 0x17f04) != *rcx_23
                            || *(rcx_23 - 0xc) != 1)
                        rax_34.b = 0
                    else
                        rax_34.b = 1
                    
                    rdx_16 |= rax_34.b
                    rcx_23 += 0x78
                    data_143f0f1b4 = rdx_16
                    i_1 = i_3
                    i_3 -= 1
                while (i_1 != 1)
    
    enum D3D_FEATURE_LEVEL var_21dc = 0
    
    if (sub_1419767d0() != 0)
        int64_t rbx_8 = data_143e2bfa0
        int64_t rcx_24
        
        if (data_143de5480 == 0)
            rcx_24 = 0
        else
            uint32_t rax_36
            rax_36, i_3 = GetCurrentThreadId()
            rcx_24.b = rax_36 != data_143de5470
        
        if (*(rbx_8 + (rcx_24 << 2)) != 0)
            Flags_1 = Flags_3 & ~D3D11_CREATE_DEVICE_SINGLETHREADED
    
    int32_t r14_4 = 0
    int64_t var_20d0
    int64_t var_20c0
    int64_t* rbx_11
    
    if (sub_1419767d0() == 0 || rsi[0x4d4] == 0 || rsi[0x2fe6].b == 0)
        rbx_11 = var_2200
    else
        int64_t* rcx_25 = data_143db18d0
        enum D3D11_CREATE_DEVICE_FLAG Flags_2 = Flags_1
        void* var_2198_1 = &rsi[0x4d3]
        pAdapter_1 = pAdapter
        enum D3D_DRIVER_TYPE DriverType_2 = DriverType
        int64_t var_21a8_1 = 0
        int32_t var_2190_1 = 1
        int32_t var_218c_1 = 7
        int64_t var_2188_1 = 0
        
        if (rcx_25 == 0)
            sub_140a53c40()
            rcx_25 = data_143db18d0
        
        i_3.b = 1
        int64_t* rax_41
        int64_t r8_14
        rax_41, r8_14 = (*(*rcx_25 + 0xb0))(rcx_25, u"r.ShaderDevelopmentMode", i_3)
        int64_t rbx_9
        
        if (rax_41 == 0)
            rbx_9 = 0
        else
            int64_t rdx_17 = *rax_41
            int64_t rax_42
            rax_42, r8_14 = (*(rdx_17 + 0x58))(rax_41, rdx_17)
            rbx_9 = rax_42
        
        int64_t* rcx_27 = data_143db18d0
        
        if (rcx_27 == 0)
            sub_140a53c40()
            rcx_27 = data_143db18d0
        
        r8_14.b = 1
        int64_t* rax_44 = (*(*rcx_27 + 0xb0))(rcx_27, u"r.DisableEngineAndAppRegistration", r8_14)
        int64_t rsi_5
        
        if (rax_44 == 0)
            rsi_5 = 0
        else
            int64_t rdx_18 = *rax_44
            rsi_5 = (*(rdx_18 + 0x58))(rax_44, rdx_18)
        
        int64_t rcx_29
        
        if (rbx_9 != 0)
            if (data_143de5480 == 0)
                rcx_29 = 0
            else
                rcx_29.b = GetCurrentThreadId() != data_143de5470
        
        int64_t rcx_30
        
        if ((rbx_9 == 0 || *(rbx_9 + (rcx_29 << 2)) == 0) && rsi_5 != 0)
            if (data_143de5480 == 0)
                rcx_30 = 0
            else
                rcx_30.b = GetCurrentThreadId() != data_143de5470
        
        char r12_1
        
        if ((rbx_9 == 0 || *(rbx_9 + (rcx_29 << 2)) == 0)
                && (rsi_5 == 0 || *(rsi_5 + (rcx_30 << 2)) == 0))
            ppDevice_1.b = 0
            
            if ((*u"Embers")[0] == 0)
                r12_1 = 1
            else if (sub_140a54510(u"Embers", u"None") == 0)
                r12_1 = 1
            else
                r12_1 = 0
        else
            ppDevice_1.b = 1
            r12_1 = 1
        
        int32_t var_2130_1 = 0
        int64_t var_2128_1 = 2
        int32_t var_212c_1 = 7
        int64_t* rax_49 = sub_140b29040(j_sub_140b17d00(), &var_20c0, 1)
        int64_t var_2110
        int64_t* rax_50 = sub_140af3ab0(&var_2110)
        int32_t rcx_33 = rax_50[1].d
        int64_t rsi_6
        int32_t r14_3
        
        if (rcx_33 s> 1)
            int32_t rax_52 = rax_49[1].d
            int32_t rsi_7 = rax_52 - 1
            
            if (rax_52 == 0)
                rsi_7 = 0
            
            int32_t r8_15
            
            if (rcx_33 == 0)
                r8_15 = rcx_33 + 1
            
            if (rcx_33 != 0 || rsi_7 == 0)
                r8_15 = 0
            
            int64_t rax_53 = *rax_50
            *rax_50 = 0
            var_20d0 = rax_53
            int32_t rcx_34 = *(rax_50 + 0xc)
            rax_50[1] = 0
            int32_t var_20c4_1 = rcx_34
            int32_t rdx_22 = rcx_33 + r8_15 + rsi_7
            
            if (rdx_22 s> rcx_34)
                sub_1405947f0(&var_20d0, rdx_22)
            
            sub_140a20ba0(&var_20d0, *rax_49, rsi_7)
            rsi_6 = var_20d0
            r14_3 = rcx_33
        else
            rsi_6 = *rax_49
            *rax_49 = 0
            r14_3 = rax_49[1].d
            rax_49[1] = 0
        
        int64_t rcx_37 = var_2110
        
        if (rcx_37 != 0)
            sub_140a74f90(rcx_37)
        
        int64_t rcx_38 = var_20c0
        
        if (rcx_38 != 0)
            sub_140a74f90(rcx_38)
        
        int16_t* const rax_55 = &data_142d40450
        
        if (ppDevice_1.b == 0)
            int64_t var_2140_1 = rsi_6
        
        if (ppDevice_1.b != 0 || r14_3 == 0)
            int16_t* const var_2140_2 = &data_142d40450
        
        rbx_11 = var_2200
        int32_t var_2134_1 = 0xffffad00
        int32_t var_2138_1 = 0xffffad00
        
        if (r12_1 == 0)
            rax_55 = u"Embers"
        
        void* rcx_39 = rbx_11[0x4d4]
        int16_t* const var_2148 = rax_55
        int64_t* var_2100
        
        if (agsDriverExtensionsDX11_CreateDevice(rcx_39, &pAdapter_1, &var_2148, &var_2100) != 0)
            agsDeInit(rbx_11[0x4d4])
            ppDevice_1 = ppDevice_2
            rbx_11[0x4d4] = 0
            r14_4 = 0
            __builtin_memset(&data_143e2c068, 0, 0x38)
            data_143f0f1b4 = 0
        else
            ppDevice_1 = ppDevice_2
            sub_140fdabc0(ppDevice_1, var_2100)
            enum D3D_FEATURE_LEVEL var_20e8
            var_21dc = var_20e8
            int64_t* var_20f8
            sub_140fdabc0(&rbx_11[0x2a], var_20f8)
            int32_t var_20e4
            r14_4 = var_20e4
            r13_1 = 1
        
        data_143f0f1bd = (r14_4 u>> 0x19).b & 1
        
        if (rsi_6 != 0)
            sub_140a74f90(rsi_6)
        
        DriverType = DriverType_1
    
    if (sub_1419767e0() != 0 && rbx_11[0x2fe6].b != 0)
        sub_140fe4ec0(rbx_11)
    
    int64_t* r13_2 = var_2200
    enum D3D_FEATURE_LEVEL* pFeatureLevels
    uint32_t FeatureLevels
    uint32_t SDKVersion
    struct ID3D11Device* ppDevice
    enum D3D_FEATURE_LEVEL* pFeatureLevel
    struct ID3D11DeviceContext* ppImmediateContext
    enum D3D11_CREATE_DEVICE_FLAG Flags
    
    if (r13_1 != 0)
        Flags = Flags_1
    else
        struct ID3D11DeviceContextVTable* rcx_45 = r13_2[0x2a].q
        r13_2[0x2a].q = 0
        
        if (rcx_45 != 0)
            (*(rcx_45->QueryInterface + 0x10))(rcx_45)
        
        int64_t* rcx_46 = *ppDevice_1
        *ppDevice_1 = 0
        
        if (rcx_46 != 0)
            (*(*rcx_46 + 0x10))(rcx_46)
        
        Flags = Flags_1
        ppImmediateContext = &r13_2[0x2a]
        pFeatureLevel = &var_21dc
        ppDevice = ppDevice_1
        SDKVersion = 7
        FeatureLevels = 1
        pFeatureLevels = &r13_2[0x4d3]
        HRESULT rax_64 = D3D11CreateDevice(pAdapter, DriverType, nullptr, Flags, pFeatureLevels, 
            FeatureLevels, SDKVersion, ppDevice, pFeatureLevel, ppImmediateContext)
        
        if (rax_64 s< 0)
            pFeatureLevels = nullptr
            sub_140fff020(rax_64, 
                "D3D11CreateDevice( Adapter, DriverType, NULL, DeviceFlags, &FeatureLevel, 1, "
            "D3D11_SDK_VERSION, Direct3DDevice.GetInitReference(), &ActualFeatureLevel, "
            "Direct3DDeviceIMContext.GetInitReference() )", 
                "D:"
            "/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/Windows/WindowsD3D11Device."
            "cpp", 0x715)
    
    (*(r13_2[0x2e] + 8))(&r13_2[0x2e], r13_2[0x2a])
    r13_2[0x4c0].b = 0
    int64_t* rcx_50 = *ppDevice_1
    int64_t var_21c0 = 0
    int32_t rax_67 = (*(*rcx_50 + 0x108))(rcx_50, 0, &var_21c0, 8, pFeatureLevels, FeatureLevels, 
        SDKVersion, ppDevice, pFeatureLevel, ppImmediateContext)
    
    if (rax_67 s< 0)
        pFeatureLevels = *ppDevice_1
        sub_140fff020(rax_67, 
            "Direct3DDevice->CheckFeatureSupport(D3D11_FEATURE_THREADING, &ThreadingSupport, "
        "sizeof(ThreadingSupport))", 
            "D:"
        "/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/Windows/WindowsD3D11Device."
        "cpp", 0x724)
    
    if (var_21c0.d == 0 || (Flags.b & 1) != 0)
        rax_67.b = 0
    else
        rax_67.b = 1
    
    *U"1111" = data_142ef4010
    data_143f0f1bb = rax_67.b
    
    if (sub_1419767d0() != 0)
        int64_t rbx_13 = data_143e2bfb8
        int64_t rcx_53
        
        if (data_143de5480 == 0)
            rcx_53 = 0
        else
            rcx_53.b = GetCurrentThreadId() != data_143de5470
        
        char rax_70 = data_143f0f1bb
        
        if (*(rbx_13 + (rcx_53 << 2)) != 0)
            rax_70 = 0
        
        data_143f0f1bb = rax_70
    
    if (sub_1419767f0() != 0 && r13_2[0x2fe6].b != 0)
        int32_t rax_72 = sub_142c49460()
        
        if (rax_72 == 0)
            sub_142c48630(*ppDevice_1, rax_72 + 0x14, &data_143f0f1bd)
    
    if (sub_1419767f0() != 0)
        int64_t rbx_14 = data_143e2bfd0
        int64_t rcx_55
        
        if (data_143de5480 == 0)
            rcx_55 = 0
        else
            rcx_55.b = GetCurrentThreadId() != data_143de5470
        
        if (*(rbx_14 + (rcx_55 << 2)) != 0)
            int64_t rcx_56 = *ppDevice_1
            char var_2208 = 0
            
            if (sub_142c48630(rcx_56, 1, &var_2208) == 0)
                char rax_76 = data_143f0f1b7
                
                if (var_2208 == 0)
                    rax_76 = 0
                
                data_143f0f1b7 = rax_76
    
    if (data_143e2b8b5 == 0)
        data_143e2b8b6 = 0
    else if (sub_1419767f0() == 0)
        data_143e2b8b6 = 0
    else
        sub_140af2b60()
        
        if (sub_140b21a10(&data_143dbb3f0, u"nogpucrashdebugging") != 0)
            data_143e2b8b6 = 0
        else
            sub_140af2b60()
            
            if (sub_140b21a10(&data_143dbb3f0, u"gpucrashdebugging") == 0)
                TEB* gsbase
                
                if (data_143e2c198 s> *
                        (0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                    _Init_thread_header(&data_143e2c198)
                    
                    if (data_143e2c198 == 0xffffffff)
                        int64_t* rcx_112 = data_143db18d0
                        
                        if (rcx_112 == 0)
                            sub_140a53c40()
                            rcx_112 = data_143db18d0
                        
                        int64_t r8_31
                        r8_31.b = 1
                        data_143e2c190 = (*(*rcx_112 + 0xb0))(rcx_112, r.GPUCrashDebugging", r8_31)
                        _Init_thread_footer(&data_143e2c198)
                
                int64_t* rcx_59 = data_143e2c190
                
                if (rcx_59 != 0)
                    data_143e2b8b6 = (*(*rcx_59 + 0x90))(rcx_59) != 0
            else
                data_143e2b8b6 = 1
    
    GUID lpiid
    
    if (IIDFromString(u"{A7AA6116-9C8D-4BBA-9083-B4D816B71B78}", &lpiid) s>= 0)
        int64_t* rcx_60 = *ppDevice_1
        void var_2120
        int32_t rax_86
        int64_t rdx_32
        rax_86, rdx_32 = (**rcx_60)(rcx_60, &lpiid, &var_2120)
        
        if (rax_86 s>= 0)
            r13_2[0x2fa1].b = 1
            rdx_32.b = 1
            int64_t* rcx_61 = data_143f0f180
            (*(*rcx_61 + 0x688))(rcx_61, rdx_32)
    
    int64_t* rcx_62 = *ppDevice_1
    void var_2118
    int32_t rax_89
    int64_t rdx_33
    rax_89, rdx_33 = (**rcx_62)(rcx_62, &data_142efa7d8, &var_2118)
    
    if (rax_89 s>= 0)
        int64_t* rcx_63 = data_143f0f180
        rdx_33.b = 1
        (*(*rcx_63 + 0x688))(rcx_63, rdx_33)
    
    data_1439c7a38 = 1
    
    if (r13_2[0x2fa1].b == 0)
        if (sub_1419767f0() == 0)
            if (sub_1419767d0() != 0 && r13_2[0x4d4] != 0)
                char rax_94 = data_143f0f1c3
                
                if ((r14_4.b & 8) != 0)
                    rax_94 = 1
                
                data_143f0f1c3 = rax_94
        else
            data_143f0f1c3 = 1
            int64_t rcx_64 = *ppDevice_1
            var_20c0 = 0
            var_20c0.d = 0x10020
            int32_t var_20b8_1 = 0
            int64_t var_20b0_1 = 0
            int64_t var_20a8 = 0
            
            if (sub_142c48d10(rcx_64, &var_20c0) == 0)
                int32_t rcx_65 = data_1439c7a38
                
                if (var_20b8_1 u> 1)
                    rcx_65 = var_20b8_1
                
                data_1439c7a38 = rcx_65
            
            sub_140ffd5f0(r13_2)
    
    int32_t rax_95 = data_1439b49b0
    int32_t rcx_67 = data_1439c7a38
    
    if (rax_95 s> 0)
        rcx_67 = rax_95
    
    data_1439c7a38 = rcx_67
    
    if (sub_1419767e0() != 0 && r13_2[0x2fe6].b != 0 && data_143e2b8c0 != 0)
        int64_t* rbx_15 = r13_2[0x2c]
        
        if (rbx_15 == 0)
        label_140fea958:
            
            if (data_143e2b8c0 != 0)
                data_143f0f21e = 1
                data_143f0f1b9 = 1
        else
            rbx_15[0xc] = sub_1427c78f0(*rbx_15, &data_142efa790)
            void* rbx_16 = r13_2[0x2c]
            *(rbx_16 + 0x58) = sub_1427c7b70(*(rbx_16 + 0x60), "RenderBasic")
            uint128_t* rax_99 = sub_1427c79a0(&var_20c0, *r13_2[0x2c], "GpuTimestampFrequency")
            void* rbx_17 = r13_2[0x2c]
            var_20c0.o = *rax_99
            *(rbx_17 + 0x68) = sub_1427c7a60(*(rbx_17 + 0x58), "GpuTime")
            int64_t** rdx_37 = r13_2[0x2c]
            
            if (rdx_37[0xd].d != 0xffffffff && var_20c0.d != 5)
                FeatureLevels = 2
                pFeatureLevels = *ppDevice_1
                char rax_102 = do_wait(&rdx_37[2], *rdx_37, rdx_37[0xc], rdx_37[0xb], 
                    pFeatureLevels, FeatureLevels)
                int64_t* rcx_73 = r13_2[0x2c]
                
                if (rax_102 != 0)
                    rcx_73[0xf].b = 0
                else
                    sub_1427c7710(rcx_73)
                    data_143e2b8c0 = 0
                    int64_t rcx_74 = r13_2[0x2c]
                    r13_2[0x2c] = 0
                    j_sub_140a74f90(rcx_74)
                
                goto label_140fea958
            
            sub_1427c7710(rdx_37)
            data_143e2b8c0 = 0
    
    char rax_103 = sub_1419767e0()
    int32_t rax_104
    
    if (rax_103 == 0)
        rax_104 = sub_140b70ca0()
    
    if (rax_103 != 0 || rax_104 s< 4)
        data_143f0f223 = 0
    
    float zmm2_1[0x4] = *(r13_2 + 0x19fc)
    int32_t rcx_75 = int.d(zmm2_1[0])
    uint64_t var_20b0_2 = *(r13_2 + 0x1a0c)
    int32_t rax_105 = int.d(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)[0])
    var_20d0.d = rcx_75
    zmm0_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
    zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xff)
    int64_t* rcx_76 = r13_2[0x2a]
    int32_t var_20c8_2 = rax_105 + rcx_75
    int32_t rdx_40 = int.d(zmm0_1.d)
    var_20d0:4.d = rdx_40
    int32_t var_20c4_2 = int.d(zmm2_1[0]) + rdx_40
    (*(*rcx_76 + 0x168))(rcx_76, 1, &var_20d0)
    r13_2[0x4d5] = -1
    r13_2[0x4d6].d = 0
    *(r13_2 + 0x26b4) = 0xffffffff
    r13_2[0x4d7].d = 0
    *(r13_2 + 0x26bc) = -1
    *(r13_2 + 0x26c4) = 0xffffffff
    r13_2[0x4d9].d = 0
    int64_t* rcx_77 = *ppDevice_1
    int32_t rax_111
    
    if ((*(*rcx_77 + 0x108))(rcx_77, 0xf, &DriverType_1, 4, pFeatureLevels, FeatureLevels) s< 0
            || DriverType_1 == D3D_DRIVER_TYPE_UNKNOWN)
        rax_111.b = 0
    else
        rax_111.b = 1
    
    data_143f0f228 = rax_111.b
    int32_t i_2 = 0
    int64_t r14_5 = 0
    int64_t rbx_18 = 0
    
    do
        int32_t rax_113 = *(rbx_18 + &data_1439c85fc)
        
        if (rax_113 == 0)
            if (rbx_18 u>= 0xb18)
                __report_rangecheckfailure()
                noreturn
            
            rax_113.b = 0
        else
            int64_t* rcx_79 = *ppDevice_1
            var_2200.d = rax_113
            var_2200:4.d = 0
            
            if ((*(*rcx_79 + 0x108))(rcx_79, 3, &var_2200, 8) s< 0 || (var_2200:4.b & 0x40) == 0)
                rax_113.b = 0
            else
                rax_113.b = 1
        
        i_2 += 1
        *(r14_5 + &data_143e2c020) = rax_113.b
        rbx_18 += 0x28
        r14_5 += 1
    while (i_2 u< 0x47)
    
    if (r13_2[0x4d3].d s>= 0xb000)
        data_143e2c02d = 1
        data_143e2c03c = 0x101
    
    if ((Flags_1.b & 2) != 0)
        int64_t* rcx_80 = *ppDevice_1
        var_2200 = nullptr
        int32_t rax_116 = (**rcx_80)(rcx_80, &data_1435fc2b0, &var_2200)
        
        if (rax_116 s< 0)
            int64_t var_2238 = *ppDevice_1
            sub_140fff020(rax_116, 
                "Direct3DDevice->QueryInterface( IID_ID3D11InfoQueue, (void**)InfoQueue."
            "GetInitReference())", 
                "D:"
            "/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/Windows/WindowsD3D11Device."
            "cpp", 0x7c7)
        
        int64_t* rbx_19 = var_2200
        
        if (rbx_19 != 0)
            memset(&pAdapter_1, 0, 0x60)
            enum D3D_DRIVER_TYPE* var_2170_1 = &DriverType_1
            DriverType_1 = D3D_DRIVER_TYPE_NULL
            int64_t* var_2160_1 = &var_20c0
            var_2178 = 1
            __builtin_memcpy(&var_20c0, 
                "\x84\x01\x00\x00\x98\x01\x00\x00\x9a\x01\x00\x00\xa4\x01\x00\x00\x67\x01\x00\x00\x61\x"
            "01\x30\x00\x37\x00\x00\x00", 
                0x1c)
            var_2168 = 7
            (*(*rbx_19 + 0x88))(rbx_19, &pAdapter_1)
            int64_t* rcx_85 = var_2200
            (*(*rcx_85 + 0xf8))(rcx_85, 1, 1)
            sub_140af2b60()
            
            if (sub_140b21a10(&data_143dbb3f0, u"d3dbreakonwarning") != 0)
                int64_t* rcx_86 = var_2200
                (*(*rcx_86 + 0xf8))(rcx_86, 2, 1)
            
            int64_t* rcx_87 = var_2200
            
            if (rcx_87 != 0)
                (*(*rcx_87 + 0x10))(rcx_87)
    
    data_143f0f227 = sub_140ffd8b0(r13_2)
    int64_t rax_123
    
    if (sub_1419767f0().b == 0)
    label_140feadb6:
        rax_123.b = 0
    else
        int64_t var_238[0x40]
        rax_123 = sub_142c49200(&var_238, &DriverType_1)
        
        if (rax_123.d != 0)
        label_140feadb6_1:
            rax_123.b = 0
        else
            int32_t r14_6 = 0
            
            if (DriverType_1 u<= rax_123.d)
            label_140feadb6_2:
                rax_123.b = 0
            else
                while (true)
                    char var_1f34
                    memset(&var_1f34, 0, 0x1cf4)
                    uint64_t rbx_20 = zx.q(r14_6)
                    int32_t var_1f38 = 0x31cf8
                    rax_123 = sub_142c492d0(var_238[rbx_20], &var_1f38)
                    
                    if (rax_123.d == 0xfffffff7)
                        int64_t rcx_92 = var_238[rbx_20]
                        var_1f38 = 0x11c94
                        rax_123 = sub_142c492d0(rcx_92, &var_1f38)
                    
                    if (rax_123.d != 0)
                        goto label_140feadb6_2
                    
                    if ((var_1f34 & 1) != 0)
                        int32_t r11_1 = 0
                        int32_t var_1f30
                        
                        if (var_1f30 != 0)
                            while (true)
                                uint64_t rbx_21 = zx.q(r11_1)
                                int64_t r8_27 = rbx_21 * 0x1c8
                                void var_1f20
                                
                                if ((*(&var_1f20 + r8_27) & 1) != 0)
                                    int32_t rdx_45 = 0
                                    int32_t var_1f2c
                                    
                                    if (var_1f2c != 0)
                                        while (true)
                                            rax_123 = zx.q(rdx_45) * 0x2c + r8_27
                                            void var_1f14
                                            void var_1f10
                                            
                                            if ((*(&var_1f14 + rax_123) & 1) != 0
                                                    && *(&var_1f10 + rax_123) != 0)
                                                break
                                            
                                            rdx_45 += 1
                                            
                                            if (rdx_45 u>= var_1f2c)
                                                goto label_140fead68
                                        
                                        rax_123.b = 1
                                        break
                                    
                                label_140fead68:
                                    int32_t rcx_93 = 0
                                    int32_t var_1f28
                                    
                                    if (var_1f28 != 0)
                                        while (true)
                                            int64_t rdx_46 = (zx.q(rcx_93) + rbx_21 * 0x13) * 3
                                            void var_1db8
                                            void var_1db0
                                            
                                            if ((*(&var_1db8 + (rdx_46 << 3)) & 1) != 0
                                                    && *(&var_1db0 + (rdx_46 << 3)) != 0)
                                                break
                                            
                                            rcx_93 += 1
                                            
                                            if (rcx_93 u>= var_1f28)
                                                goto label_140fead9c
                                        
                                        rax_123.b = 1
                                        break
                                
                            label_140fead9c:
                                r11_1 += 1
                                
                                if (r11_1 u>= var_1f30)
                                    goto label_140feada8
                            
                            break
                    
                label_140feada8:
                    r14_6 += 1
                    
                    if (r14_6 u>= DriverType_1)
                        goto label_140feadb6_2
    
    var_2200 = nullptr
    int32_t rdx_47 = 0
    wchar16 const* const rbx_22 = u"false"
    int32_t var_21f8_1 = 0
    
    if (rax_123.b != 0)
        rbx_22 = u"true"
    
    int32_t rcx_94 = 0
    int32_t var_21f4_1 = 0
    
    if (*rbx_22 != 0)
        int64_t rsi_9 = -1
        
        do
            rsi_9 += 1
        while (rbx_22[rsi_9] != 0)
        
        if (rsi_9.d + 1 s> 0)
            sub_1405947f0(&var_2200, rsi_9.d + 1)
            rcx_94 = var_21f4_1
            rdx_47 = var_21f8_1
        
        int32_t rax_127 = rsi_9.d + 1 + rdx_47
        int32_t var_21f8_2 = rax_127
        
        if (rax_127 s> rcx_94)
            sub_140594770(&var_2200)
        
        UnDecorator::getReferenceType(var_2200, rbx_22, (rsi_9.d + 1) * 2)
    
    ppDevice_2 = nullptr
    int32_t var_21e8_1 = 0
    sub_1405947f0(&ppDevice_2, 0x15)
    int32_t rax_128 = var_21e8_1 + 0x15
    var_21e8_1 = rax_128
    
    if (rax_128 s> 0)
        sub_140594770(&ppDevice_2)
    
    UnDecorator::getReferenceType(ppDevice_2, u"RHI.IsGPUOverclocked", 0x2a)
    sub_140a53700(&ppDevice_2, &var_2200)
    void* ppDevice_3 = ppDevice_2
    
    if (ppDevice_3 != 0)
        sub_140a74f90(ppDevice_3)
    
    int64_t* rcx_102 = var_2200
    
    if (rcx_102 != 0)
        sub_140a74f90(rcx_102)
    
    ppDevice_2 = nullptr
    int32_t var_21e8_2 = 0
    sub_1405947f0(&ppDevice_2, 6)
    int32_t rax_129 = var_21e8_2 + 6
    var_21e8_2 = rax_129
    
    if (rax_129 s> 0)
        sub_140594770(&ppDevice_2)
    
    UnDecorator::getReferenceType(ppDevice_2, u"D3D11", 0xc)
    sub_142064b30(data_143f426f8, &ppDevice_2)
    void* ppDevice_4 = ppDevice_2
    
    if (ppDevice_4 != 0)
        sub_140a74f90(ppDevice_4)
    
    data_143f0f1f6 = 1
    void* rax_130 = &r13_2[3]
    data_143f0f21d = 1
    data_143f0f1d0 = 0
    
    if (r13_2 == 0)
        rax_130 = nullptr
    
    data_143f02bb8 = rax_130
    data_143f02bc0 = rax_130
    data_143f02d88 = (*(*r13_2 + 0x470))(r13_2)
    sub_1419a3ff0()
    int64_t* pAdapter_4 = pAdapter_3
    data_143f0f19c = 1
    
    if (pAdapter_4 != 0)
        (*(*pAdapter_4 + 0x10))(pAdapter_4)
    
    if (pAdapter != 0)
        (*(*pAdapter + 0x10))(pAdapter)

int64_t result = sub_141994c70(&var_21d8)
__security_check_cookie(rax_1 ^ &var_2258)
return result
