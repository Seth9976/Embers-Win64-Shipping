// 函数: ?FIsFileOutOfDate@MRE@@IEAAHPEAUFI@@@Z
// 地址: 0x14101aa30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
uint32_t r15 = zx.d(arg2)
char var_1a8 = r15.b
sub_140af2b60()
bool cond:0 = sub_140b21a10(&data_143dbb3f0, u"novendordevice") == 0
HMODULE rax_3 = sub_140b67ab0(u"dxgi.dll")
int64_t rax_4 = GetProcAddress(rax_3, "CreateDXGIFactory2")
FreeLibrary(rax_3)
int64_t* rcx_2 = *(arg1 + 0x4d8)
char r12 = 0
*(arg1 + 0x4d8) = 0

if (rcx_2 != 0)
    int64_t rdx = *rcx_2
    (*(rdx + 0x10))(rcx_2, rdx)

int32_t rax_5 = rax_4(zx.q(r15), &data_142efe428, arg1 + 0x4d8)
int64_t* var_1b8
int64_t* var_1b0
int64_t* var_e8
int32_t var_e0

if (rax_5 s< 0)
    var_e8 = nullptr
    var_1b0 = &var_e8
    var_e0 = 0
    var_1b8 = nullptr
    sub_14106a020(rax_5, 
        "CreateDXGIFactory2FnPtr(Flags, IID_PPV_ARGS(DxgiFactory.GetInitReference()))", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/D3D12Adapter.cpp", 0x37f, 
        var_1b8)

int64_t* rcx_5 = *(arg1 + 0x4e0)
int64_t* r14_1 = *(arg1 + 0x4d8)
*(arg1 + 0x4e0) = 0

if (rcx_5 != 0)
    (*(*rcx_5 + 0x10))(rcx_5)

int32_t rax_8 = (**r14_1)(r14_1, &data_142efa1e8, arg1 + 0x4e0)

if (rax_8 s< 0)
    var_e8 = nullptr
    var_1b0 = &var_e8
    var_e0 = 0
    var_1b8 = nullptr
    sub_14106a020(rax_8, 
        "DxgiFactory->QueryInterface(IID_PPV_ARGS(DxgiFactory2.GetInitReference()))", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/D3D12Adapter.cpp", 0x380, 
        var_1b8)

int64_t* rcx_8 = *(arg1 + 0x4d8)
uint64_t rdx_1 = zx.q(*(arg1 + 0x58))
int64_t* var_180 = nullptr
(*(*rcx_8 + 0x38))(rcx_8, rdx_1, &var_180)
int64_t* rbx_2 = var_180
void* r14_2 = arg1 + 0x198
int64_t* rcx_9 = *r14_2
*r14_2 = 0

if (rcx_9 != 0)
    (*(*rcx_9 + 0x10))(rcx_9)

int32_t rax_12 = (**rbx_2)(rbx_2, &data_142efa5e0, r14_2)

if (rax_12 s< 0)
    var_e8 = nullptr
    var_1b0 = &var_e8
    var_e0 = 0
    var_1b8 = nullptr
    sub_14106a020(rax_12, 
        "TempAdapter->QueryInterface(IID_PPV_ARGS(DxgiAdapter.GetInitReference()))", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/D3D12Adapter.cpp", 0xb4, 
        var_1b8)

sub_140af2b60()
char rax_13
int64_t r8_4
rax_13, r8_4 = sub_140b21a10(&data_143dbb3f0, u"gpucrashdebugging")
TEB* gsbase

if (rax_13 == 0)
    if (data_143e2c358
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143e2c358)
        
        if (data_143e2c358 == 0xffffffff)
            int64_t* rcx_75 = data_143db18d0
            
            if (rcx_75 == 0)
                sub_140a53c40()
                rcx_75 = data_143db18d0
            
            r8_4.b = 1
            data_143e2c350 = (*(*rcx_75 + 0xb0))(rcx_75, u"r.GPUCrashDebugging", r8_4)
            _Init_thread_footer(&data_143e2c358)
    
    int64_t* rcx_13 = data_143e2c350
    int32_t rcx_14
    
    if (rcx_13 == 0)
        rcx_14 = *(arg1 + 0x50)
    else
        int32_t rax_17
        rax_17, r8_4 = (*(*rcx_13 + 0x90))(rcx_13)
        rcx_14 = 0
        
        if (rax_17 s> 0)
            rcx_14 = 2
        
        *(arg1 + 0x50) = rcx_14
    
    if (rcx_14 == 0)
        int64_t* rcx_15 = data_143db18d0
        
        if (rcx_15 == 0)
            sub_140a53c40()
            rcx_15 = data_143db18d0
        
        r8_4.b = 1
        int64_t* rax_19 = (*(*rcx_15 + 0xb0))(rcx_15, u"r.D3D12.GPUCrashDebuggingMode", r8_4)
        void* rax_20
        
        if (rax_19 != 0)
            int64_t rdx_3 = *rax_19
            rax_20 = (*(rdx_3 + 0x58))(rax_19, rdx_3)
        
        int32_t rax_22
        
        if (rax_19 == 0 || rax_20 == 0)
            rax_22 = -1
        else if (data_143de5480 == 0)
            rax_22 = *rax_20
        else
            int64_t rcx_17
            rcx_17.b = GetCurrentThreadId() != data_143de5470
            rax_22 = *(rax_20 + (rcx_17 << 2))
        
        if (rax_22 u<= 2)
            *(arg1 + 0x50) = rax_22
else
    *(arg1 + 0x50) = 2

int64_t* var_1a0
int32_t var_198
int64_t* var_190

if (r15.b != 0)
    var_e8 = nullptr
    int32_t rax_23
    int64_t r9_1
    rax_23, r9_1 = Ordinal_d3d12_102(&data_142efda18, &var_e8)
    
    if (rax_23 s< 0)
        var_1a8 = 0
        sub_140af98a0("Unknown", 0xe7, 
            The debug interface requires the D3D12 SDK Layers. Please install the Graphics Tools for "
        "Windows. See: https://docs.microsoft."
        "com/en-us/windows/uwp/gaming/use-the-directx-runtime-and-", r9_1)
        sub_140afbb40()
    else
        int64_t* rcx_18 = var_e8
        (*(*rcx_18 + 0x18))(rcx_18)
        *(arg1 + 0x4d) = 1
        sub_140af2b60()
        char rax_25 = sub_140b21a10(&data_143dbb3f0, u"d3d12gpuvalidation")
        char rax_26
        
        if (rax_25 == 0)
            sub_140af2b60()
            rax_26 = sub_140b21a10(&data_143dbb3f0, u"gpuvalidation")
        
        if (rax_25 != 0 || rax_26 != 0)
            int64_t* rcx_19 = var_e8
            var_190 = nullptr
            int32_t rax_28 = (**rcx_19)(rcx_19, &data_142efda70, &var_190)
            
            if (rax_28 s< 0)
                var_1a0 = nullptr
                var_1b0 = &var_1a0
                var_198 = 0
                var_1b8 = nullptr
                sub_14106a020(rax_28, 
                    "DebugController->QueryInterface(IID_PPV_ARGS(DebugController1.GetInitReference()))", 
                    "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/D3D12Adapter.cpp", 
                    0xdd, var_1b8)
            
            int64_t* rcx_21 = var_190
            (*(*rcx_21 + 0x20))(rcx_21, 1)
            int64_t* rcx_22 = var_190
            
            if (rcx_22 != 0)
                (*(*rcx_22 + 0x10))(rcx_22)
    
    int64_t* rcx_23 = var_e8
    
    if (rcx_23 != 0)
        (*(*rcx_23 + 0x10))(rcx_23)

char rax_32
int64_t r8_6

if (*(arg1 + 0x50) != 2)
    sub_140af2b60()
    rax_32, r8_6 = sub_140b21a10(&data_143dbb3f0, u"dred")

if (*(arg1 + 0x50) == 2 || rax_32 != 0)
    var_e8 = nullptr
    int32_t rax_33
    rax_33, r8_6 = Ordinal_d3d12_102(&data_142efda80, &var_e8)
    
    if (rax_33 s>= 0)
        int64_t* rcx_24 = var_e8
        (*(*rcx_24 + 0x18))(rcx_24, 2)
        int64_t* rcx_25 = var_e8
        (*(*rcx_25 + 0x20))(rcx_25, 2)

int64_t r13
r13.b = 0

if (sub_1419767d0() == 0 || *(*(arg1 + 0x10) + 0x38) == 0)
    goto label_14101b0f7

int64_t* rcx_26 = data_143db18d0

if (rcx_26 == 0)
    sub_140a53c40()
    rcx_26 = data_143db18d0

r8_6.b = 1
int64_t* rax_39
int64_t r8_7
rax_39, r8_7 = (*(*rcx_26 + 0xb0))(rcx_26, u"r.ShaderDevelopmentMode", r8_6)
int64_t rbx_4

if (rax_39 == 0)
    rbx_4 = 0
else
    int64_t rdx_6 = *rax_39
    int64_t rax_40
    rax_40, r8_7 = (*(rdx_6 + 0x58))(rax_39, rdx_6)
    rbx_4 = rax_40

int64_t* rcx_28 = data_143db18d0

if (rcx_28 == 0)
    sub_140a53c40()
    rcx_28 = data_143db18d0

r8_7.b = 1
int64_t* rax_42 = (*(*rcx_28 + 0xb0))(rcx_28, u"r.DisableEngineAndAppRegistration", r8_7)
int64_t rsi_1

if (rax_42 == 0)
    rsi_1 = 0
else
    int64_t rdx_7 = *rax_42
    rsi_1 = (*(rdx_7 + 0x58))(rax_42, rdx_7)

int64_t rcx_30

if (rbx_4 != 0)
    if (data_143de5480 == 0)
        rcx_30 = 0
    else
        rcx_30.b = GetCurrentThreadId() != data_143de5470

int64_t rcx_31

if ((rbx_4 == 0 || *(rbx_4 + (rcx_30 << 2)) == 0) && rsi_1 != 0)
    if (data_143de5480 == 0)
        rcx_31 = 0
    else
        rcx_31.b = GetCurrentThreadId() != data_143de5470

if ((rbx_4 == 0 || *(rbx_4 + (rcx_30 << 2)) == 0) && (rsi_1 == 0 || *(rsi_1 + (rcx_31 << 2)) == 0))
    r15.b = 0
    
    if ((*u"Embers")[0] == 0)
        r12 = 1
    else if (sub_140a54510(u"Embers", u"None") == 0)
        r12 = 1
else
    r15.b = 1
    r12 = 1

int128_t var_c0
var_c0.q = *r14_2
int32_t rax_48 = *(arg1 + 0x5c)
var_c0 = data_142efcae0
int128_t var_b0
var_b0:8.d = rax_48
int64_t var_158_1 = 0
int64_t var_d8
int64_t* rax_50 = sub_140b29040(j_sub_140b17d00(), &var_d8, 1)
int64_t* rax_51 = sub_140af3ab0(&var_190)
int32_t rcx_34 = rax_51[1].d
int64_t* rsi_2

if (rcx_34 s> 1)
    int32_t rax_52 = rax_50[1].d
    int32_t rsi_3 = rax_52 - 1
    
    if (rax_52 == 0)
        rsi_3 = 0
    
    int32_t r8_8
    
    if (rcx_34 == 0)
        r8_8 = rcx_34 + 1
    
    if (rcx_34 != 0 || rsi_3 == 0)
        r8_8 = 0
    
    int64_t* rax_53 = *rax_51
    *rax_51 = 0
    var_e8 = rax_53
    var_e0 = rcx_34
    int32_t rcx_35 = *(rax_51 + 0xc)
    rax_51[1] = 0
    int32_t rdx_11 = rcx_34 + r8_8 + rsi_3
    
    if (rdx_11 s> rcx_35)
        sub_1405947f0(&var_e8, rdx_11)
    
    sub_140a20ba0(&var_e8, *rax_50, rsi_3)
    rsi_2 = var_e8
    r14_2 = zx.q(rcx_35)
else
    rsi_2 = *rax_50
    *rax_50 = 0
    r14_2 = zx.q(rax_50[1].d)
    rax_50[1] = 0

int64_t* rcx_38 = var_190

if (rcx_38 != 0)
    sub_140a74f90(rcx_38)

int64_t rcx_39 = var_d8

if (rcx_39 != 0)
    sub_140a74f90(rcx_39)

int16_t* const rax_55 = &data_142d40450

if (r15.b == 0)
    int64_t* var_168_1 = rsi_2

if (r15.b != 0 || r14_2.d == 0)
    int16_t* const var_168_2 = &data_142d40450

int32_t var_15c_1 = 0xffffad00
int32_t var_160_1 = 0xffffad00

if (r12 == 0)
    rax_55 = u"Embers"

int16_t* const var_170 = rax_55

if (agsDriverExtensionsDX12_CreateDevice(*(*(arg1 + 0x10) + 0x38), &var_c0, &var_170, &var_1a0)
        == 0)
    int64_t* rcx_41 = var_1a0
    int64_t* rbx_6 = *(arg1 + 0x18)
    *(arg1 + 0x18) = rcx_41
    
    if (rcx_41 != 0)
        (*(*rcx_41 + 8))()
    
    if (rbx_6 != 0)
        (*(*rbx_6 + 0x10))(rbx_6)
    
    r13.b = 1
    *(*(arg1 + 0x10) + 0x40) = var_198

if (rsi_2 != 0)
    sub_140a74f90(rsi_2)

if (r13.b == 0)
    r14_2 = arg1 + 0x198
label_14101b0f7:
    int64_t* rcx_44 = *(arg1 + 0x18)
    *(arg1 + 0x18) = 0
    
    if (rcx_44 != 0)
        (*(*rcx_44 + 0x10))(rcx_44)
    
    int32_t rax_62 = Ordinal_d3d12_101(*r14_2, zx.q(*(arg1 + 0x5c)), &data_142efcae0, arg1 + 0x18, 
        var_1b8, var_1b0, var_1a8)
    
    if (rax_62 s< 0)
        var_1a0 = nullptr
        var_1b0 = &var_1a0
        int64_t var_198_1 = 0
        var_1b8 = nullptr
        sub_14106a020(rax_62, 
            "D3D12CreateDevice( GetAdapter(), GetFeatureLevel(), IID_PPV_ARGS(RootDevice."
        "GetInitReference()) )", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/D3D12Adapter.cpp", 0x140, 
            var_1b8)

int64_t* rcx_47 = *(arg1 + 0x18)
var_d8 = 0
int32_t var_d0 = 0
int64_t var_c8 = 0
(*(*rcx_47 + 0x68))(rcx_47, 8, &var_d8, 0x18, var_1b8, var_1b0, var_1a8)
int32_t rax_64 = var_d8:4.d
int64_t rbx_7 = data_143e2c1e8
data_143f0f222 = var_d8.d != 0
bool cond:4 = data_143de5480 == 0
data_1439c7a40 = rax_64
data_1439c7a44 = var_d0
int64_t rcx_48

if (cond:4)
    rcx_48 = 0
else
    rcx_48.b = GetCurrentThreadId() != data_143de5470

char rax_67 = data_1439b4ad4

if (*(rbx_7 + (rcx_48 << 2)) == 0)
    rax_67 = 0

r14_2.b = 0
data_1439b4ad4 = rax_67
int64_t* rcx_49 = *(arg1 + 0x18)
var_e8 = nullptr
var_e0 = 0
int32_t rax_69
int64_t r8_13
rax_69, r8_13 = (*(*rcx_49 + 0x68))(rcx_49, 0x1b, &var_e8, 0xc)

if (rax_69 s>= 0 && var_e0 s>= 0xa)
    int64_t* rcx_50 = data_143db18d0
    r14_2.b = 1
    
    if (rcx_50 == 0)
        sub_140a53c40()
        rcx_50 = data_143db18d0
    
    r8_13.b = 1
    int64_t* rax_71 = (*(*rcx_50 + 0xb0))(rcx_50, u"r.RayTracing", r8_13)
    
    if (rax_71 != 0)
        int64_t rdx_16 = *rax_71
        
        if ((*(rdx_16 + 0x90))(rax_71, rdx_16) s> 0)
            sub_140af2b60()
            
            if (sub_140b21a10(&data_143dbb3f0, u"noraytracing") == 0)
                int64_t* rcx_52 = *(arg1 + 0x38)
                int64_t* rsi_4 = *(arg1 + 0x18)
                *(arg1 + 0x38) = 0
                
                if (rcx_52 != 0)
                    (*(*rcx_52 + 0x10))(rcx_52)
                
                (**rsi_4)(rsi_4, &data_142efdab0, arg1 + 0x38)
                
                if (*(arg1 + 0x38) == 0)
                    r14_2.b = 0
                else
                    if (data_143e2c368 s> *(0x14
                            + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                        _Init_thread_header(&data_143e2c368)
                        
                        if (data_143e2c368 == 0xffffffff)
                            int64_t* rcx_74 = data_143db18d0
                            
                            if (rcx_74 == 0)
                                sub_140a53c40()
                                rcx_74 = data_143db18d0
                            
                            int64_t r8_18
                            r8_18.b = 1
                            data_143e2c360 =
                                (*(*rcx_74 + 0xb0))(rcx_74, r.SkinCache.CompileShaders", r8_18)
                            _Init_thread_footer(&data_143e2c368)
                    
                    int64_t* rcx_55 = data_143e2c360
                    int32_t rax_79
                    int64_t r9_4
                    rax_79, r9_4 = (*(*rcx_55 + 0x90))(rcx_55)
                    
                    if (rax_79 s<= 0)
                        sub_140af98a0("Unknown", 0x171, 
                            D3D12 ray tracing requires skin cache to be enabled. Set r.SkinCache."
                        "CompileShaders=1.", r9_4)
                        sub_140afbb40()

if (*(arg1 + 0x50) != 2 || data_143e2c7c8 == 0)
    data_143e2c7c8 = 0
else
    char rax_80 = sub_1419767f0()
    int32_t rax_81
    
    if (rax_80 != 0 && cond:0 != 0)
        rax_81 = GFSDK_Aftermath_DX12_Initialize(0x13, 3, *(arg1 + 0x18))
    
    if (rax_80 == 0 || cond:0 == 0 || rax_81 != 1)
        data_143e2c7c8 = 0
    else
        sub_140b00890(rax_81.b)
        data_143e2c7c8 = 1

if (var_1a8 != 0)
    int64_t rax_82 = AddVectoredExceptionHandler(1, sub_14101bd00)
    int64_t* rcx_57 = *(arg1 + 0x18)
    *(arg1 + 0x30) = rax_82
    var_e8 = nullptr
    int32_t rax_84 = (**rcx_57)(rcx_57, &data_142efda28, &var_e8)
    
    if (rax_84 s< 0)
        var_1a0 = nullptr
        int64_t** var_1b0_1 = &var_1a0
        int64_t var_198_2 = 0
        sub_14106a020(rax_84, 
            "RootDevice->QueryInterface(__uuidof(ID3D12InfoQueue), (void**)&pd3dInfoQueue)", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/D3D12Adapter.cpp", 0x1b6, 
            nullptr)
    
    if (var_e8 != 0)
        void var_148
        memset(&var_148, 0, 0x60)
        var_190.d = 3
        int32_t var_108_1 = 1
        int64_t** var_100_1 = &var_190
        __builtin_memcpy(&var_c0, 
            "\xf2\x00\x00\x00\xfd\x00\x00\x00\xd5\x00\x00\x00\x34\x03\x00\x00\x35\x03\x00\x00\x9f\x03\x"
        "00\x00\xf0\x03\x00\x00\xc3\x03\x00\x00\x60\x02\x00\x00", 
            0x24)
        void* var_58_1 = nullptr
        int32_t var_50_1 = 9
        void var_98
        sub_1410344d0(&var_98, 9, 0)
        void* rcx_61 = &var_98
        
        if (var_58_1 != 0)
            rcx_61 = var_58_1
        
        *rcx_61 = var_c0
        __builtin_memcpy(rcx_61 + 0x10, 
            "\x35\x03\x00\x00\x9f\x03\x00\x00\xf0\x03\x00\x00\xc3\x03\x00\x00\x60\x02\x00\x00", 
            0x14)
        
        if (r14_2.b != 0)
            int64_t rbx_8 = sx.q(var_50_1)
            int32_t rax_86 = (rbx_8 + 1).d
            var_50_1 = rax_86
            int32_t var_4c
            
            if (rax_86 s> var_4c)
                sub_1408090b0(&var_98, rbx_8.d)
            
            void* rcx_63 = &var_98
            
            if (var_58_1 != 0)
                rcx_63 = var_58_1
            
            *(rcx_63 + (rbx_8 << 2)) = 0x28d
        
        void* rcx_64 = &var_98
        int32_t var_f8_1 = var_50_1
        
        if (var_58_1 != 0)
            rcx_64 = var_58_1
        
        void* var_f0_1 = rcx_64
        int64_t* rcx_65 = var_e8
        (*(*rcx_65 + 0x88))(rcx_65, &var_148)
        int64_t* rcx_66 = var_e8
        (*(*rcx_66 + 0xf8))(rcx_66, 1, 1)
        sub_140af2b60()
        
        if (sub_140b21a10(&data_143dbb3f0, u"d3dbreakonwarning") != 0)
            int64_t* rcx_67 = var_e8
            (*(*rcx_67 + 0xf8))(rcx_67, 2, 1)
        
        int64_t* rcx_68 = var_e8
        (*(*rcx_68 + 0x10))(rcx_68)
        
        if (var_58_1 != 0)
            sub_140a74f90(var_58_1)

data_1439c7a34 = 1
int32_t rax_95 = 1
int32_t rcx_70 = *(arg1 + 0x190)

if (rcx_70 u> 1)
    rax_95 = rcx_70

data_1439c7a34 = rax_95
sub_140af2b60()
int32_t var_178
uint32_t result = sub_140b2ab20(&data_143dbb3f0, u"PresentGPU=", &var_178)

if (result.b == 0)
    sub_140af2b60()
    uint32_t result_1
    
    if (sub_140b2ab80(&data_143dbb3f0, u"NumAFRGroups=", &data_1439c7a38) != 0)
        result = data_1439c7a34
        result_1 = data_1439c7a38
    label_14101b5d1:
        
        if (result_1 u<= 1 || result_1 u> result)
            data_1439c7a38 = 1
        else
            uint32_t temp1_1 = modu.dp.d(0:result, result_1)
            result = divu.dp.d(0:result, result_1)
            
            if (temp1_1 != 0)
                data_1439c7a38 = 1
    else
        sub_140af2b60()
        result = sub_140b21a10(&data_143dbb3f0, &data_142efda58)
        
        if (result.b != 0)
            result = data_1439c7a34
            result_1 = result
            data_1439c7a38 = result
            goto label_14101b5d1

int64_t* rcx_71 = var_180

if (rcx_71 != 0)
    result = (*(*rcx_71 + 0x10))(rcx_71)

__security_check_cookie(rax_1 ^ &var_1d8)
return result
