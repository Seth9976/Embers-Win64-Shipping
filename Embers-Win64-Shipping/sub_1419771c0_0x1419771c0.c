// 函数: sub_1419771c0
// 地址: 0x1419771c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_328
int64_t rax_1 = __security_cookie ^ &var_328
int32_t* r13 = arg1
char var_2f8 = 0
char rax_2
int64_t r8
rax_2, r8 = sub_140af2fd0(data_143ddb400, D3DRHIPreference", bUseGPUCrashDebugging"
    , &var_2f8, &data_143de5840)

if (rax_2 != 0)
    int64_t* rcx_1 = data_143db18d0
    
    if (rcx_1 == 0)
        sub_140a53c40()
        rcx_1 = data_143db18d0
    
    r8.b = 1
    int64_t* rax_4 = (*(*rcx_1 + 0xb0))(rcx_1, u"r.GPUCrashDebugging", r8)
    int64_t* rcx_3
    
    if (rax_4 == 0)
        rcx_3 = nullptr
    else
        int64_t rdx = *rax_4
        rcx_3 = (*(rdx + 0x58))(rax_4, rdx)
    
    uint32_t rax_6 = zx.d(var_2f8)
    uint32_t var_19c_1 = rax_6
    *rcx_3 = rax_6.q

void* rcx_4 = data_143ddb400
char var_2f7 = 0
char rax_8
int512_t zmm2
rax_8, zmm2 = sub_140af2fd0(rcx_4, D3DRHIPreference", bPreferD3D12InGame"
    , &var_2f7, &data_143de5840)
char rdx_1 = 0

if (rax_8 != 0)
    rdx_1 = var_2f7

sub_140af2b60()
char rax_9 = sub_140b21a10(&data_143dbb3f0, &data_1430033d8)
char rdi = rax_9
sub_140af2b60()
char r15 = sub_140b21a10(&data_143dbb3f0, u"vulkan")
int64_t rsi

if (sub_140b74110(6, 0) == 0)
    rsi.b = 1
else
    sub_140af2b60()
    
    if (sub_140b21a10(&data_143dbb3f0, u"opengl") != 0)
        rsi.b = 1
    else
        sub_140af2b60()
        
        if (sub_140b21a10(&data_143dbb3f0, u"opengl3") != 0)
            rsi.b = 1
        else
            sub_140af2b60()
            
            if (sub_140b21a10(&data_143dbb3f0, u"opengl4") != 0)
                rsi.b = 1
            else
                rsi.b = 0

sub_140af2b60()
char rax_15 = sub_140b21a10(&data_143dbb3f0, u"d3d11")
char rax_16

if (rax_15 == 0)
    sub_140af2b60()
    rax_16 = sub_140b21a10(&data_143dbb3f0, u"dx11")

int64_t r14

if (rax_15 != 0 || rax_16 != 0 || (rdi != 0 && r15 == 0 && rsi.b == 0))
    r14.b = 1
else
    r14.b = 0

sub_140af2b60()
char rax_17
int64_t r9_2
rax_17, r9_2 = sub_140b21a10(&data_143dbb3f0, u"d3d12")
char rax_18

if (rax_17 == 0)
    sub_140af2b60()
    rax_18, r9_2 = sub_140b21a10(&data_143dbb3f0, u"dx12")

int64_t r12

if (rax_17 != 0 || rax_18 != 0)
    r12.b = 1
else
    r12.b = 0

*r13 = 4
int16_t* const rbx = &data_142d40450

if (r15 == 0 && rsi.b == 0 && r14.b == 0 && r12.b == 0)
    void var_188
    sub_140ae6a10(&var_188)
    int16_t* var_2d8 = nullptr
    int32_t var_2d0_1 = 0
    sub_1405947f0(&var_2d8, 0x10)
    int32_t rdi_1 = var_2d0_1 + 0x10
    
    if (rdi_1 s> 0)
        sub_140594770(&var_2d8)
    
    int16_t* r13_1 = var_2d8
    int16_t** var_308_1
    var_308_1.w = 0x3f
    sub_1405a7220(r13_1, 0x10, "WindowsNoEditor", 0x10, var_308_1.w)
    var_308_1.b = 0
    int16_t* r9_3 = &data_142d40450
    
    if (rdi_1 != 0)
        r9_3 = r13_1
    
    sub_140af9680(&var_188, u"Engine", 1, r9_3, zmm2, var_308_1.b)
    uint64_t var_2e8 = 0
    int32_t var_2e0_1 = 0
    
    if (sub_140af5d90(&var_188, /Script/WindowsTargetPlatform.WindowsTargetSettings", 
            DefaultGraphicsRHI", &var_2e8) != 0)
        TEB* gsbase
        int32_t* rdi_3 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14
        
        if (data_143f0fce0 s> *rdi_3)
            _Init_thread_header(&data_143f0fce0)
            
            if (data_143f0fce0 == 0xffffffff)
                sub_1405947f0(&data_143f0fcd0, 0x18)
                int32_t rax_93 = data_143f0fcd8 + 0x18
                bool cond:3_1 = rax_93 s<= data_143f0fcdc
                data_143f0fcd8 = rax_93
                
                if (not(cond:3_1))
                    sub_140594770(&data_143f0fcd0)
                
                UnDecorator::getReferenceType(data_143f0fcd0, u"DefaultGraphicsRHI_DX11", 0x30)
                atexit(sub_142cf0840)
                _Init_thread_footer(&data_143f0fce0)
        
        if (data_143f0fcf8 s> *rdi_3)
            _Init_thread_header(&data_143f0fcf8)
            
            if (data_143f0fcf8 == 0xffffffff)
                sub_1405947f0(&data_143f0fce8, 0x18)
                int32_t rax_94 = data_143f0fcf0 + 0x18
                bool cond:4_1 = rax_94 s<= data_143f0fcf4
                data_143f0fcf0 = rax_94
                
                if (not(cond:4_1))
                    sub_140594770(&data_143f0fce8)
                
                UnDecorator::getReferenceType(data_143f0fce8, u"DefaultGraphicsRHI_DX12", 0x30)
                atexit(sub_142cf0860)
                _Init_thread_footer(&data_143f0fcf8)
        
        if (data_143f0fd10 s> *rdi_3)
            _Init_thread_header(&data_143f0fd10)
            
            if (data_143f0fd10 == 0xffffffff)
                sub_1405947f0(&data_143f0fd00, 0x1a)
                int32_t rax_95 = data_143f0fd08 + 0x1a
                bool cond:6_1 = rax_95 s<= data_143f0fd0c
                data_143f0fd08 = rax_95
                
                if (not(cond:6_1))
                    sub_140594770(&data_143f0fd00)
                
                UnDecorator::getReferenceType(data_143f0fd00, u"DefaultGraphicsRHI_Vulkan", 0x34)
                atexit(sub_142cf0880)
                _Init_thread_footer(&data_143f0fd10)
        
        int16_t* const rdx_3 = &data_142d40450
        int16_t* const rcx_13 = &data_142d40450
        
        if (data_143f0fcd8 != 0)
            rdx_3 = data_143f0fcd0
        
        if (var_2e0_1 != 0)
            rcx_13 = var_2e8
        
        if (sub_140a54510(rcx_13, rdx_3) != 0)
            int16_t* const rdx_4 = &data_142d40450
            int16_t* const rcx_14 = &data_142d40450
            
            if (data_143f0fcf0 != 0)
                rdx_4 = data_143f0fce8
            
            if (var_2e0_1 != 0)
                rcx_14 = var_2e8
            
            if (sub_140a54510(rcx_14, rdx_4) != 0)
                int16_t* const rdx_5 = &data_142d40450
                int16_t* const rcx_15 = &data_142d40450
                
                if (data_143f0fd08 != 0)
                    rdx_5 = data_143f0fd00
                
                if (var_2e0_1 != 0)
                    rcx_15 = var_2e8
                
                if (sub_140a54510(rcx_15, rdx_5) == 0)
                    r15 = 1
            else
                r12.b = 1
        else
            r14.b = 1
    
    uint64_t rcx_16 = var_2e8
    
    if (rcx_16 != 0)
        sub_140a74f90(rcx_16)
    
    if (r13_1 != 0)
        sub_140a74f90(r13_1)
    
    r9_2 = sub_140ae7280(&var_188)
    rdi = rax_9
    r13 = arg1

int32_t rcx_19
rcx_19.b = r12.b != 0
int32_t rax_27
rax_27.b = r14.b != 0
int32_t rdx_8 = rax_27 + rcx_19 + zx.d(rsi.b) + zx.d(r15)

if (rdx_8 u> 1)
    sub_140af98a0("Unknown", 0x66, 
        -d3d12, -d3d11, -vulkan, and -opengl[3|4] are mutually exclusive options, but more than one was "
    "specified on the command-line.", r9_2)
    sub_140afbb40()
else if (rdx_8 == 0)
    void* rcx_29 = data_143ddb400
    int16_t** var_288 = nullptr
    int32_t i_2 = 0
    sub_140af2c50(rcx_29, /Script/WindowsTargetPlatform.WindowsTargetSettings", TargetedRHIs", 
        &var_288, &data_143de5780)
    int32_t i_1 = i_2
    
    if (i_1 s> 0)
        int16_t** rax_38 = var_288
        
        if (rax_38[1].d != 0)
            rbx = *rax_38
        
        int64_t var_270
        sub_140b58260(&var_270, rbx, 1)
        int64_t rbx_3 = sx.q(sub_141987fc0(var_270))
        r15 = sub_141271090(rbx_3.d)
        
        if (rdx_1 != 0)
            r14.b = 0
        else if (rbx_3.d == 0)
            r14.b = 1
        else if (rbx_3.d == 4)
            r14.b = 0
        else if (rbx_3.d == 0xe)
            r14.b = 1
        else
            int64_t rax_41
            rax_41.b = *(&data_143f025f0 + rbx_3 * 0x14) == data_143f025a8
            
            if (rax_41.b == 0)
                r14.b = 0
            else
                r14.b = 1
        
        if (rbx_3.d u> 0x18)
            if (*(&data_143f025f0 + rbx_3 * 0x14) == data_143f025b8)
                rsi.b = 1
            else
                rsi.b = 0
        else if (test_bit(0x100a040, rbx_3.d)
                || *(&data_143f025f0 + rbx_3 * 0x14) == data_143f025b8)
            rsi.b = 1
        else
            rsi.b = 0
        
        i_1 = i_2
        void var_278
        *r13 = *sub_1410f8320(&var_278, rbx_3.d)
    
    int16_t** rbx_4 = var_288
    
    if (i_1 != 0)
        int32_t i
        
        do
            int16_t* rcx_37 = *rbx_4
            
            if (rcx_37 != 0)
                sub_140a74f90(rcx_37)
            
            rbx_4 = &rbx_4[2]
            i = i_1
            i_1 -= 1
        while (i != 1)
        rbx_4 = var_288
    
    if (rbx_4 != 0)
        sub_140a74f90(rbx_4)
else if (rdi != 0)
    *r13 = 3

int64_t* result
wchar16 const* const r12_1
wchar16** r14_1

if (rsi.b == 0)
    if (r15 != 0)
        int64_t var_2b8 = 0
        int32_t var_2b0_1 = 0
        sub_1405947f0(&var_2b8, 7)
        int32_t rax_44 = var_2b0_1 + 7
        var_2b0_1 = rax_44
        
        if (rax_44 s> 0)
            sub_140594770(&var_2b8)
        
        UnDecorator::getReferenceType(var_2b8, u"Vulkan", 0xe)
        sub_140b00950(&var_2b8)
        r12_1 = u"VulkanRHI"
        void var_260
        int64_t rbx_5 = *sub_140b58260(&var_260, u"VulkanRHI", 1)
        j_sub_140b3db50()
        int64_t* result_2 = j_sub_140b407e0(&data_143de7d78, rbx_5)
        result = result_2
        
        if ((*(*result_2 + 0x40))(result) == 0)
            void var_228
            sub_140b21610(0, _vfprintf_p_l(&var_228, Vulkan Driver is required to run the engine.", 
                WindowsDynamicRHI"), nullptr)
            int64_t* var_220
            
            if (var_220 != 0)
                var_220[1].d -= 1
                
                if (var_220[1].d == 1)
                    (**var_220)(var_220)
                    int32_t rax_51 = *(var_220 + 0xc)
                    *(var_220 + 0xc) -= 1
                    
                    if (rax_51 == 1)
                        (*(*var_220 + 8))(var_220, 1)
            
            sub_140b721f0(1)
            result = nullptr
        
        goto label_141977993
    
    if (r12.b != 0 || (rdx_1 != r12.b && r14.b == 0))
        int64_t var_2a8 = 0
        int32_t var_2a0_1 = 0
        sub_1405947f0(&var_2a8, 0xb)
        int32_t rax_53 = var_2a0_1 + 0xb
        var_2a0_1 = rax_53
        
        if (rax_53 s> 0)
            sub_140594770(&var_2a8)
        
        UnDecorator::getReferenceType(var_2a8, u"DirectX 12", 0x16)
        sub_140b00950(&var_2a8)
        r14_1 = arg2
        *r14_1 = u"D3D12RHI"
        void var_258
        int64_t rbx_7 = *sub_140b58260(&var_258, u"D3D12RHI", 1)
        j_sub_140b3db50()
        int64_t* result_3 = sub_140b407e0(&data_143de7d78, rbx_7)
        int64_t* rcx_53 = data_143db18d0
        result = result_3
        
        if (rcx_53 == 0)
            sub_140a53c40()
            rcx_53 = data_143db18d0
        
        int64_t* rax_56 = (*(*rcx_53 + 0xb0))(rcx_53, u"r.ShaderPipelineCache.Enabled", 1)
        int64_t* rcx_55
        
        if (rax_56 == 0)
            rcx_55 = nullptr
        else
            int64_t rdx_20 = *rax_56
            rcx_55 = (*(rdx_20 + 0x58))(rax_56, rdx_20)
        
        int32_t var_1ac_1 = 1
        *rcx_55 = 1.q
        int64_t* rcx_56 = data_143db18d0
        
        if (rcx_56 == 0)
            sub_140a53c40()
            rcx_56 = data_143db18d0
        
        int64_t* rax_60 = (*(*rcx_56 + 0xb0))(rcx_56, u"r.ShaderPipelineCache.ReportPSO", 1)
        int64_t* rcx_58
        
        if (rax_60 == 0)
            rcx_58 = nullptr
        else
            int64_t rdx_21 = *rax_60
            rcx_58 = (*(rdx_21 + 0x58))(rax_60, rdx_21)
        
        int32_t var_194_1 = 1
        *rcx_58 = 1.q
        int64_t* rcx_59 = data_143db18d0
        
        if (rcx_59 == 0)
            sub_140a53c40()
            rcx_59 = data_143db18d0
        
        int64_t* rax_64 = (*(*rcx_59 + 0xb0))(rcx_59, u"r.ShaderPipelineCache.SaveUserCache", 1)
        int64_t* rcx_61
        
        if (rax_64 == 0)
            rcx_61 = nullptr
        else
            int64_t rdx_22 = *rax_64
            rcx_61 = (*(rdx_22 + 0x58))(rax_64, rdx_22)
        
        *rcx_61 = 0x100000001
        char rax_67
        
        if (result != 0)
            rax_67 = (*(*result + 0x40))(result)
        
        if (result != 0 && rax_67 != 0)
            if (sub_140b6e650(u"fraps.exe") != 0)
                void var_210
                sub_140b21610(0, 
                    _vfprintf_p_l(&var_210, 
                        Fraps has been known to crash D3D12. Please use Microsoft Expression Encoder instead "
                "for capturing.", 
                    WindowsDynamicRHI"), nullptr)
                int64_t* var_208
                
                if (var_208 != 0)
                    var_208[1].d -= 1
                    
                    if (var_208[1].d == 1)
                        (**var_208)(var_208)
                        int32_t rax_72 = *(var_208 + 0xc)
                        *(var_208 + 0xc) -= 1
                        
                        if (rax_72 == 1)
                            (*(*var_208 + 8))(var_208, 1)
            
            goto label_141977bce
        
        if (r12.b != 0)
            void var_1f8
            sub_140b21610(0, 
                _vfprintf_p_l(&var_1f8, 
                    DX12 is not supported on your system. Try running without the -dx12 or -d3d12 command "
            "line argument.", 
                WindowsDynamicRHI"), nullptr)
            int64_t* var_1f0
            
            if (var_1f0 != 0)
                var_1f0[1].d -= 1
                
                if (var_1f0[1].d == 1)
                    (**var_1f0)(var_1f0)
                    int32_t rax_77 = *(var_1f0 + 0xc)
                    *(var_1f0 + 0xc) -= 1
                    
                    if (rax_77 == 1)
                        (*(*var_1f0 + 8))(var_1f0, 1)
            
            sub_140b721f0(1)
        
        if (result != 0)
            void var_250
            int64_t* rax_79 = sub_140b58260(&var_250, *r14_1, 1)
            j_sub_140b3db50()
            sub_140b4a6b0(&data_143de7d78, *rax_79, 0)
        
        *r14_1 = nullptr
        goto label_141977c87
    
    r14_1 = arg2
label_141977c87:
    int64_t var_298 = 0
    int32_t var_290_1 = 0
    sub_1405947f0(&var_298, 0xb)
    int32_t rax_80 = var_290_1 + 0xb
    var_290_1 = rax_80
    
    if (rax_80 s> 0)
        sub_140594770(&var_298)
    
    UnDecorator::getReferenceType(var_298, u"DirectX 11", 0x16)
    sub_140b00950(&var_298)
    void var_248
    int64_t rbx_11 = *sub_140b58260(&var_248, u"D3D11RHI", 1)
    j_sub_140b3db50()
    int64_t* result_4 = j_sub_140b407e0(&data_143de7d78, rbx_11)
    result = result_4
    int64_t rdx_29 = *result_4
    
    if ((*(rdx_29 + 0x40))(result_4, rdx_29) != 0)
        if (sub_140b6e650(u"fraps.exe") != 0)
            void var_1c8
            sub_140b21610(0, 
                _vfprintf_p_l(&var_1c8, 
                    Fraps has been known to crash D3D11. Please use Microsoft Expression Encoder in", 
                WindowsDynamicRHI"), nullptr)
            int64_t* var_1c0
            
            if (var_1c0 != 0)
                var_1c0[1].d -= 1
                
                if (var_1c0[1].d == 1)
                    (**var_1c0)(var_1c0)
                    int32_t rdi_5 = *(var_1c0 + 0xc)
                    *(var_1c0 + 0xc) -= 1
                    
                    if (rdi_5 == 1)
                        (*(*var_1c0 + 8))(var_1c0, 1)
    else
        void var_1e0
        sub_140b21610(0, 
            _vfprintf_p_l(&var_1e0, DX11 feature level 10.0 is required to run the engine.", 
            WindowsDynamicRHI"), nullptr)
        int64_t* var_1d8
        
        if (var_1d8 != 0)
            var_1d8[1].d -= 1
            
            if (var_1d8[1].d == 1)
                (**var_1d8)(var_1d8)
                int32_t rdi_4 = *(var_1d8 + 0xc)
                *(var_1d8 + 0xc) -= 1
                
                if (rdi_4 == 1)
                    (*(*var_1d8 + 8))(var_1d8, 1)
        
        sub_140b721f0(1)
        result = nullptr
    
    *r14_1 = u"D3D11RHI"
else
    int64_t var_2c8 = 0
    int32_t var_2c0_1 = 0
    sub_1405947f0(&var_2c8, 7)
    int32_t rax_30 = var_2c0_1 + 7
    var_2c0_1 = rax_30
    
    if (rax_30 s> 0)
        sub_140594770(&var_2c8)
    
    UnDecorator::getReferenceType(var_2c8, u"OpenGL", 0xe)
    sub_140b00950(&var_2c8)
    r12_1 = u"OpenGLDrv"
    void var_268
    int64_t rbx_1 = *sub_140b58260(&var_268, u"OpenGLDrv", 1)
    j_sub_140b3db50()
    int64_t* result_1 = j_sub_140b407e0(&data_143de7d78, rbx_1)
    result = result_1
    int64_t rdx_11 = *result_1
    
    if ((*(rdx_11 + 0x40))(result_1, rdx_11) == 0)
        void var_240
        sub_140b21610(0, _vfprintf_p_l(&var_240, OpenGL 3.2 is required to run the engine.", 
            WindowsDynamicRHI"), nullptr)
        int64_t* var_238
        
        if (var_238 != 0)
            var_238[1].d -= 1
            
            if (var_238[1].d == 1)
                (**var_238)(var_238)
                int32_t rax_36 = *(var_238 + 0xc)
                *(var_238 + 0xc) -= 1
                
                if (rax_36 == 1)
                    (*(*var_238 + 8))(var_238, 1)
        
        sub_140b721f0(1)
        r14_1 = arg2
        result = nullptr
        *r14_1 = u"OpenGLDrv"
        goto label_141977bce
    
label_141977993:
    r14_1 = arg2
    *r14_1 = r12_1
label_141977bce:
    
    if (result == 0)
        goto label_141977c87
__security_check_cookie(rax_1 ^ &var_328)
return result
