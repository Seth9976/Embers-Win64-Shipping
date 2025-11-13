// 函数: sub_140ffeb30
// 地址: 0x140ffeb30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3a8
int64_t rax_1 = __security_cookie ^ &var_3a8
uint32_t rbx = zx.d(arg9)
int16_t* var_2c0
sub_140fe7a50(&var_2c0, arg1, nullptr)
void* rax_3 = sub_140fe83b0(rbx)
sub_140ffdc90(arg1, arg20)
int16_t* const r14 = &data_142d40450

if (arg1 == 0x8007000e)
    void var_2b0
    int64_t* rax_5 = sub_140ac6680(
        _vfprintf_p_l(&var_2b0, 
            Out of video memory trying to allocate a texture! Make sure your video card has the minimum "
    "required memory, try lowering the resolution and/or closing", 
        Developer.MessageLog"))
    PWSTR rdx_2
    
    if (rax_5[1].d == 0)
        rdx_2 = &data_142d40450
    else
        rdx_2 = *rax_5
    
    sub_140b709d0(0, rdx_2, u"Error")
    int64_t* var_2a8
    
    if (var_2a8 != 0)
        var_2a8[1].d -= 1
        
        if (var_2a8[1].d == 1)
            (**var_2a8)(var_2a8)
            int32_t rdi_1 = *(var_2a8 + 0xc)
            *(var_2a8 + 0xc) -= 1
            
            if (rdi_1 == 1)
                (*(*var_2a8 + 8))(var_2a8, zx.q(rdi_1))
    
    sub_140b721f0(1)

int16_t* var_2e8 = nullptr
int32_t var_2e0 = 0

if ((arg11 & 0x20) != 0)
    sub_140a20ba0(&var_2e8, u"D3D11_BIND_RENDER_TARGET ", 0x19)

if ((arg11 & 0x40) != 0)
    sub_140a20ba0(&var_2e8, u"D3D11_BIND_DEPTH_STENCIL ", 0x19)

if ((arg11 & 8) != 0)
    sub_140a20ba0(&var_2e8, u"D3D11_BIND_SHADER_RESOURCE ", 0x1b)

if (arg11 s< 0)
    sub_140a20ba0(&var_2e8, u"D3D11_BIND_UNORDERED_ACCESS ", 0x1c)

int16_t* const rbx_3 = &data_142d40450

if (var_2e0 != 0)
    rbx_3 = var_2e8

int32_t var_2b8

if (var_2b8 != 0)
    r14 = var_2c0

void var_178
sub_1405eb940(&var_178, arg4)
void var_298
sub_1405eb940(&var_298, arg3)
int32_t var_2f8 = arg19
int32_t var_300 = arg18
int64_t var_308 = arg17
int32_t var_310 = arg16
int32_t var_318 = arg15
int32_t var_320 = arg14
int32_t var_328 = arg13
int32_t var_330 = arg12
int16_t* const var_338 = rbx_3
int32_t var_340 = arg10
uint32_t var_348 = rbx
void* var_350 = rax_3
int32_t var_358 = arg2
int32_t var_360 = arg8
int32_t var_368 = arg7
int32_t var_370 = arg6
int16_t* const var_378 = r14
int32_t var_380 = arg5
int64_t var_70
int64_t var_388 = var_70
int64_t var_190
sub_140af98a0("Unknown", 0x153, 
    %s failed \n at %s:%u \n with error %s, \n Size=%ix%ix%i PF=%d Format=%s(0x%08X), ", var_190)
int64_t var_198

if (var_198 != 0)
    sub_140a74f90(var_198)

int64_t var_78

if (var_78 != 0)
    sub_140a74f90(var_78)

int16_t* rcx_16 = var_2e8

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)

int64_t result = sub_140afbb40()
int16_t* rcx_17 = var_2c0

if (rcx_17 != 0)
    result = sub_140a74f90(rcx_17)

__security_check_cookie(rax_1 ^ &var_3a8)
return result
