// 函数: sub_1410261c0
// 地址: 0x1410261c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
void var_110
sub_141992c00(&var_110, 0)
void* const var_138

if (*(arg1 + 0x54) != 0)
    int64_t* rcx_1 = arg1[3]
    int32_t rax_3 = (*(*rcx_1 + 0x128))(rcx_1)
    void* const rbx_1 = &data_142e5f8f8
    
    if (rax_3 == 0x887a0001)
        rbx_1 = u"INVALID_CALL"
    else if (rax_3 == 0x887a0005)
        rbx_1 = u"REMOVED"
    else if (rax_3 == 0x887a0006)
        rbx_1 = u"HUNG"
    else if (rax_3 == 0x887a0007)
        rbx_1 = u"RESET"
    else if (rax_3 == 0x887a0020)
        rbx_1 = u"INTERNAL_ERROR"
    
    *(arg1 + 0x54) = 0
    sub_141016770(arg1)
    var_138 = rbx_1
    sub_140af98a0("Unknown", 0x268, 
        The Direct3D 12 device that was being used has been removed (Error: %d '%s').  Please restart "
    "the game.", zx.q(rax_3))
    sub_140afbb40()

TEB* gsbase
int32_t* rbx_3 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143e2c340 s> *rbx_3)
    _Init_thread_header(&data_143e2c340)
    
    if (data_143e2c340 == 0xffffffff)
        sub_140af2b60()
        char rax_57
        
        if (sub_140b21a10(&data_143dbb3f0, u"d3ddebug") != 0)
            rax_57 = 1
        else
            sub_140af2b60()
            
            if (sub_140b21a10(&data_143dbb3f0, u"d3debug") != 0)
                rax_57 = 1
            else
                sub_140af2b60()
                rax_57 = sub_140b21a10(&data_143dbb3f0, u"dxdebug")
                
                if (rax_57 != 0)
                    rax_57 = 1
        
        data_143e2c33c = rax_57
        _Init_thread_footer(&data_143e2c340)

if (arg1[3] == 0)
    (*(*arg1 + 8))(arg1, zx.q(data_143e2c33c))
    
    if (data_143e2c348 s> *rbx_3)
        _Init_thread_header(&data_143e2c348)
        
        if (data_143e2c348 == 0xffffffff)
            sub_140af2b60()
            char rax_56
            
            if (sub_140b21a10(&data_143dbb3f0, u"d3dcompat") != 0)
                rax_56 = 1
            else
                sub_140af2b60()
                rax_56 = sub_140b21a10(&data_143dbb3f0, u"d3d12compat")
                
                if (rax_56 != 0)
                    rax_56 = 1
            
            data_143e2c344 = rax_56
            _Init_thread_footer(&data_143e2c348)
    
    if (data_143e2c344 == 0)
        int64_t* rcx_5 = arg1[4]
        int64_t* rdi_2 = arg1[3]
        arg1[4] = 0
        
        if (rcx_5 != 0)
            (*(*rcx_5 + 0x10))(rcx_5)
        
        (**rdi_2)(rdi_2, &data_142efdfe8, &arg1[4])
        int64_t* rcx_7 = arg1[5]
        int64_t* rdi_3 = arg1[3]
        arg1[5] = 0
        
        if (rcx_7 != 0)
            (*(*rcx_7 + 0x10))(rcx_7)
        
        (**rdi_3)(rdi_3, &data_142efdff8, &arg1[5])
    
    int64_t* rcx_9 = arg1[3]
    int64_t var_70
    __builtin_memset(&var_70, 0, 0x14)
    int64_t var_58
    __builtin_memset(&var_58, 0, 0x24)
    int32_t rax_13 = (*(*rcx_9 + 0x68))(rcx_9, 0, &var_70, 0x3c, var_138)
    int64_t* var_130
    
    if (rax_13 s< 0)
        int64_t var_b0 = 0
        var_130 = &var_b0
        int64_t var_a8_1 = 0
        var_138 = nullptr
        sub_14106a020(rax_13, 
            "RootDevice->CheckFeatureSupport(D3D12_FEATURE_D3D12_OPTIONS, &D3D12Caps, sizeof(D3D12Caps))", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/D3D12Adapter.cpp", 0x288, 
            var_138)
    
    int64_t* rcx_11 = arg1[3]
    int32_t var_38
    arg1[8].d = var_38
    int32_t var_60
    *(arg1 + 0x44) = var_60
    int64_t var_108 = 0
    int32_t rax_18
    
    if ((*(*rcx_11 + 0x68))(rcx_11, 0x12, &var_108, 8, var_138, var_130) s>= 0)
        rax_18 = var_108.d
    else
        rax_18 = 0
        var_108:4.d = 0
        var_108.d = 0
    
    int64_t* rcx_12 = arg1[3]
    int32_t r15_1 = 2
    int32_t var_128 = 2
    rax_18.b = rax_18 != 0
    *(arg1 + 0x4c) = rax_18.b
    int32_t rax_20 = (*(*rcx_12 + 0x68))(rcx_12, 0xc, &var_128, 4)
    int32_t rcx_13 = var_128
    
    if (rax_20 s< 0)
        rcx_13 = 1
    
    var_128 = rcx_13
    arg1[9].d = rcx_13
    void*** rax_21 = j_sub_140a82f30(0xb8)
    void*** rdi_4 = rax_21
    
    if (rax_21 == 0)
        rdi_4 = nullptr
    else
        int64_t var_c0
        sub_140b58260(&var_c0, u"Adapter Frame Fence", 1)
        int64_t rax_22 = var_c0
        int32_t rdx_2 = 1 << (data_1439c7a34).b
        *rdi_4 = &data_142d3ff08
        rdi_4[1].d = 0
        rdi_4[3] = rax_22
        *(rdi_4 + 0xc) = 0
        rdi_4[2].w = 0x100
        rdi_4[4].b = 0
        rdi_4[5] = arg1
        rdi_4[6].d = rdx_2 - 1
        *(rdi_4 + 0x34) = rdx_2 - 1
        *rdi_4 = &data_142efcd98
        __builtin_memset(&rdi_4[7], 0, 0x18)
        InitializeCriticalSection(&rdi_4[0xa])
        SetCriticalSectionSpinCount(&rdi_4[0xa], 0xfa0)
        __builtin_memset(&rdi_4[0xf], 0, 0x40)
        *rdi_4 = &data_142efcdb8
    
    sub_1405d16e0(&arg1[0x9d], rdi_4)
    sub_141019f60(arg1[0x9d])
    void*** rax_23 = j_sub_140a82f30(0xb8)
    void*** rax_24
    
    if (rax_23 == 0)
        rax_24 = nullptr
    else
        void var_b8
        sub_140b58260(&var_b8, u"Staging Fence", 1)
        rax_24 = sub_14100ad10(rax_23, arg1, (1 << (data_1439c7a34).b) - 1, &var_b8)
    
    sub_1405d16e0(&arg1[0x9e], rax_24)
    sub_141019f60(arg1[0x9e])
    sub_14101b6f0(arg1)
    arg1[0xd5].d = (1 << (data_1439c7a34).b) - 1
    arg1[0x101].d = (1 << (data_1439c7a34).b) - 1
    int32_t rdi_5 = 1 << (data_1439c7a34).b
    int32_t i_2 = rdi_5 - 1
    
    if (rdi_5 != 1)
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_forward(i_2)
        int32_t rbx_5 = temp0_2
        int32_t i
        
        do
            void*** rax_29 = j_sub_140a82f30(0xb00)
            void*** rcx_31
            
            if (rax_29 == 0)
                rcx_31 = nullptr
            else
                rcx_31 = sub_14100a730(rax_29, 1 << rbx_5.b, arg1)
            
            void* r14_1 = &arg1[zx.q(rbx_5)]
            *(r14_1 + 0x9d8) = rcx_31
            sub_141064150(rcx_31)
            void* rdx_8 = **(*(r14_1 + 0x9d8) + 0x6d8)
            int32_t rax_33 = *(rdx_8 + 0x130)
            uint64_t rax_34
            
            if (rax_33 != 0)
                uint64_t rflags_2
                int32_t temp0_3
                temp0_3, rflags_2 = _bit_scan_forward(rax_33)
                rax_34 = zx.q(temp0_3)
            else
                rax_34 = 0x20
            
            arg1[rax_34 + 0xd6] = rdx_8
            
            if (data_1439c79e0 != 0)
                void* rdx_9 = **(*(r14_1 + 0x9d8) + 0x720)
                int32_t rax_36 = *(rdx_9 + 0x130)
                uint64_t rax_37
                
                if (rax_36 != 0)
                    uint64_t rflags_3
                    int32_t temp0_4
                    temp0_4, rflags_3 = _bit_scan_forward(rax_36)
                    rax_37 = zx.q(temp0_4)
                else
                    rax_37 = 0x20
                
                arg1[rax_37 + 0x102] = rdx_9
            
            int32_t rax_38 = 1 << rbx_5.b
            rbx_5 = 0x20
            i = not.d(rax_38) & i_2
            i_2 = i
            
            if (i != 0)
                uint64_t rflags_4
                int32_t temp0_5
                temp0_5, rflags_4 = _bit_scan_forward(i)
                rbx_5 = temp0_5
        while (i != 0)
    
    (*(arg1[0x116] + 0x28))(&arg1[0x116])
    int64_t var_120 = 0
    int32_t var_118_1 = 0
    sub_1405947f0(&var_120, 0x18)
    int32_t r12_1 = var_118_1 + 0x18
    
    if (r12_1 s> 0)
        sub_140594770(&var_120)
    
    int64_t r13_1 = var_120
    UnDecorator::getReferenceType(r13_1, u"Upload Buffer Allocator", 0x30)
    int32_t r14_2 = 1 << (data_1439c7a34).b
    int32_t i_3 = r14_2 - 1
    
    if (r14_2 != 1)
        uint64_t rflags_5
        int32_t temp0_6
        temp0_6, rflags_5 = _bit_scan_forward(i_3)
        int32_t r15_2 = temp0_6
        int32_t i_1
        
        do
            void** rax_41 = j_sub_140a82f30(0xa8)
            uint64_t r13_2 = zx.q(r15_2)
            void** rdi_6 = rax_41
            
            if (rax_41 == 0)
                rdi_6 = nullptr
            else
                void* r8_9 = arg1[r13_2 + 0x13b]
                *rax_41 = arg1
                int32_t rdx_12 = (1 << (data_1439c7a34).b) - 1
                rdi_6[1].d = *(r8_9 + 0x10)
                *(rdi_6 + 0xc) = rdx_12
                rdi_6[2] = r8_9
                rdi_6[3].d = *(r8_9 + 0x10)
                *(rdi_6 + 0x1c) = rdx_12
                rdi_6[4] = 0x400000
                rdi_6[5] = 0
                rdi_6[6].d = r12_1
                
                if (r12_1 != 0)
                    sub_1405a4c70(&rdi_6[5], r12_1, 0)
                    memcpy(rdi_6[5], var_120, r12_1 * 2)
                else
                    *(rdi_6 + 0x34) = 0
                
                rdi_6[7].b = 0
                *(rdi_6 + 0x3c) = 2
                InitializeCriticalSection(&rdi_6[8])
                SetCriticalSectionSpinCount(&rdi_6[8], 0xfa0)
                __builtin_memcpy(&rdi_6[0x10], 
                    "\x01\x00\x00\x00\xc0\x00\x00\x00\x00\x00\x80\x00\x00\x01\x00\x00\x01\x00\x00\x00", 
                    0x14)
                __builtin_memset(&rdi_6[0xd], 0, 0x14)
                rdi_6[0x13] = 0
                rdi_6[0x14] = 0
            
            char rcx_46 = r15_2.b
            arg1[r13_2 + 0x94] = rdi_6
            r15_2 = 0x20
            i_1 = not.d(1 << rcx_46) & i_3
            i_3 = i_1
            
            if (i_1 != 0)
                uint64_t rflags_6
                int32_t temp0_7
                temp0_7, rflags_6 = _bit_scan_forward(i_1)
                r15_2 = temp0_7
        while (i_1 != 0)
        
        r13_1 = var_120
        r15_1 = i_1 + 2
    
    *(arg1 + 0x164)
    var_130.d = *(arg1 + 0x16c)
    var_138.d = arg1[0x2d].d
    int16_t* var_d0
    sub_140a2e390(&var_d0, u"V%d_D%d_S%d_R%d.ushaderprecache", zx.q(arg1[0x2c].d))
    int16_t* const r14_3 = &data_142d40450
    int16_t* const r8_13 = &data_142d40450
    int32_t var_c8
    
    if (var_c8 != 0)
        r8_13 = var_d0
    
    int16_t* var_a0
    sub_140a2e390(&var_a0, u"D3DGraphics_%s", r8_13)
    int64_t* rax_47 = sub_140b257f0()
    int32_t var_98
    int32_t rbx_7
    
    if (var_98 == 0)
        rbx_7 = 0
    else
        rbx_7 = var_98 - 1
    
    int32_t rax_49
    
    if (rax_47[1].d == 0)
        rax_49 = r15_1
    
    if (rax_47[1].d != 0 || rbx_7 == 0xffffffff)
        rax_49 = 1
    
    int64_t var_e0 = 0
    int32_t rdx_15 = rbx_7 + rax_49
    int32_t rdi_7 = rax_47[1].d
    int64_t r15_3 = *rax_47
    int32_t var_d8_1 = rdi_7
    
    if (rdi_7 != 0 || rdx_15 != 0)
        sub_1405a4c70(&var_e0, rdx_15 + rdi_7, 0)
        memcpy(var_e0, r15_3, rdi_7 * 2)
    else
        int32_t var_d4_1 = rdx_15
    
    sub_140a2cf70(&var_e0, var_a0, rbx_7)
    int16_t* rcx_53 = var_a0
    
    if (rcx_53 != 0)
        sub_140a74f90(rcx_53)
    
    int16_t* r8_17 = &data_142d40450
    
    if (var_c8 != 0)
        r8_17 = var_d0
    
    int16_t* var_90
    sub_140a2e390(&var_90, u"D3DCompute_%s", r8_17)
    int64_t* rax_50 = sub_140b257f0()
    int32_t var_88
    int32_t rbx_9
    
    if (var_88 == 0)
        rbx_9 = 0
    else
        rbx_9 = var_88 - 1
    
    int32_t rax_52
    int32_t r12_2
    
    if (rax_50[1].d != 0 || rbx_9 == 0xffffffff)
        rax_52 = 1
        r12_2 = 2
    else
        r12_2 = 2
        rax_52 = 2
    
    int64_t var_f0 = 0
    int32_t rdx_19 = rbx_9 + rax_52
    int32_t rdi_8 = rax_50[1].d
    int64_t r15_4 = *rax_50
    int32_t var_e8_1 = rdi_8
    
    if (rdi_8 != 0 || rdx_19 != 0)
        sub_1405a4c70(&var_f0, rdx_19 + rdi_8, 0)
        memcpy(var_f0, r15_4, rdi_8 * 2)
    else
        int32_t var_e4_1 = 0
    
    sub_140a2cf70(&var_f0, var_90, rbx_9)
    int16_t* rcx_59 = var_90
    
    if (rcx_59 != 0)
        sub_140a74f90(rcx_59)
    
    if (var_c8 != 0)
        r14_3 = var_d0
    
    int16_t* var_80
    sub_140a2e390(&var_80, u"D3DDriverByteCodeBlob_%s", r14_3)
    int64_t* rax_53 = sub_140b257f0()
    int32_t var_78
    int32_t rbx_11
    
    if (var_78 == 0)
        rbx_11 = 0
    else
        rbx_11 = var_78 - 1
    
    if (rax_53[1].d != 0 || rbx_11 == 0xffffffff)
        r12_2 = 1
    
    int64_t var_100 = 0
    int32_t rax_55 = rbx_11 + r12_2
    int32_t rdi_9 = rax_53[1].d
    int64_t r14_4 = *rax_53
    int32_t var_f8_1 = rdi_9
    
    if (rdi_9 != 0 || rax_55 != 0)
        sub_1405a4c70(&var_100, rdi_9 + rax_55, 0)
        memcpy(var_100, r14_4, rdi_9 * 2)
    else
        int32_t var_f4_1 = 0
    
    sub_140a2cf70(&var_100, var_80, rbx_11)
    int16_t* rcx_65 = var_80
    
    if (rcx_65 != 0)
        sub_140a74f90(rcx_65)
    
    sub_1410636f0(&arg1[0x44], &var_e0, &var_f0, &var_100)
    sub_141067a50(&arg1[0x44])
    int64_t rcx_68 = var_100
    
    if (rcx_68 != 0)
        sub_140a74f90(rcx_68)
    
    int64_t rcx_69 = var_f0
    
    if (rcx_69 != 0)
        sub_140a74f90(rcx_69)
    
    int64_t rcx_70 = var_e0
    
    if (rcx_70 != 0)
        sub_140a74f90(rcx_70)
    
    int16_t* rcx_71 = var_d0
    
    if (rcx_71 != 0)
        sub_140a74f90(rcx_71)
    
    if (r13_1 != 0)
        sub_140a74f90(r13_1)

int64_t result = sub_141994c70(&var_110)
__security_check_cookie(rax_1 ^ &var_158)
return result
