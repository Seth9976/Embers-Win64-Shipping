// 函数: sub_141069b00
// 地址: 0x141069b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_348
int64_t rax_1 = __security_cookie ^ &var_348
int16_t* var_2c8
sub_1410615f0(&var_2c8, arg1, nullptr)
int64_t rax_2 = sx.q(*(arg4 + 0x20))
wchar16 const* const rsi

if (rax_2.d u> 0x62)
    rsi = data_1439b4b20
else
    switch (rax_2)
        case 0
            rsi = u"DXGI_FORMAT_UNKNOWN"
        case 1, 3, 4, 5, 6, 7, 8, 9, 0xb, 0xd, 0xe, 0xf, 0x11, 0x12, 0x16, 0x17, 0x19, 0x1a, 0x1d, 
                0x1e, 0x1f, 0x20, 0x21, 0x26, 0x27, 0x28, 0x2a, 0x2b, 0x2c, 0x2f, 0x30, 0x31, 0x32, 
                0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3e, 0x3f, 0x40, 0x41, 0x43, 
                0x44, 0x45, 0x46, 0x48, 0x49, 0x4b, 0x4c, 0x4e, 0x4f, 0x51, 0x52, 0x54, 0x55, 0x56, 
                0x59, 0x5b, 0x5c, 0x5d, 0x5e, 0x60, 0x61
            rsi = data_1439b4b20
        case 2
            rsi = u"DXGI_FORMAT_R32G32B32A32_FLOAT"
        case 0xa
            rsi = u"DXGI_FORMAT_R16G16B16A16_FLOAT"
        case 0xc
            rsi = u"DXGI_FORMAT_R16G16B16A16_UINT"
        case 0x10
            rsi = u"DXGI_FORMAT_R32G32_FLOAT"
        case 0x13
            rsi = u"DXGI_FORMAT_R32G8X24_TYPELESS"
        case 0x14
            rsi = u"DXGI_FORMAT_D32_FLOAT_S8X24_UINT"
        case 0x15
            rsi = u"DXGI_FORMAT_R32_FLOAT_X8X24_TYPELESS"
        case 0x18
            rsi = u"DXGI_FORMAT_R10G10B10A2_UNORM"
        case 0x1b
            rsi = u"DXGI_FORMAT_R8G8B8A8_TYPELESS"
        case 0x1c
            rsi = u"DXGI_FORMAT_R8G8B8A8_UNORM"
        case 0x22
            rsi = u"DXGI_FORMAT_R16G16_FLOAT"
        case 0x23
            rsi = u"DXGI_FORMAT_R16G16_UNORM"
        case 0x24
            rsi = u"DXGI_FORMAT_R16G16_UINT"
        case 0x25
            rsi = u"DXGI_FORMAT_R16G16_SNORM"
        case 0x29
            rsi = u"DXGI_FORMAT_R32_FLOAT"
        case 0x2d
            rsi = u"DXGI_FORMAT_D24_UNORM_S8_UINT"
        case 0x2e
            rsi = u"DXGI_FORMAT_R24_UNORM_X8_TYPELESS"
        case 0x33
            rsi = u"DXGI_FORMAT_R8G8_SNORM"
        case 0x3d
            rsi = u"DXGI_FORMAT_R8_UNORM"
        case 0x42
            rsi = u"DXGI_FORMAT_R1_UNORM"
        case 0x47
            rsi = u"DXGI_FORMAT_BC1_UNORM"
        case 0x4a
            rsi = u"DXGI_FORMAT_BC2_UNORM"
        case 0x4d
            rsi = u"DXGI_FORMAT_BC3_UNORM"
        case 0x50
            rsi = u"DXGI_FORMAT_BC4_UNORM"
        case 0x53
            rsi = u"DXGI_FORMAT_BC5_UNORM"
        case 0x57
            rsi = u"DXGI_FORMAT_B8G8R8A8_UNORM"
        case 0x58
            rsi = u"DXGI_FORMAT_B8G8R8X8_UNORM"
        case 0x5a
            rsi = u"DXGI_FORMAT_B8G8R8A8_TYPELESS"
        case 0x5f
            rsi = u"DXGI_FORMAT_BC6H_UF16"
        case 0x62
            rsi = u"DXGI_FORMAT_BC7_UNORM"

int16_t* const rbp = &data_142d40450

if (arg1 == 0x887a0005)
    sub_1410693f0(arg5, nullptr, 0)
else if (arg1 == 0x8007000e)
    void var_2b8
    int64_t* rax_5 = sub_140ac6680(
        _vfprintf_p_l(&var_2b8, 
            Out of video memory trying to allocate a texture! Make sure your video card has the minimum "
    "required memory, try lowering the resolution and/or closing", 
        Developer.MessageLog"))
    PWSTR rdx_1
    
    if (rax_5[1].d == 0)
        rdx_1 = &data_142d40450
    else
        rdx_1 = *rax_5
    
    sub_140b709d0(0, rdx_1, u"Error")
    int64_t* var_2b0
    
    if (var_2b0 != 0)
        var_2b0[1].d -= 1
        
        if (var_2b0[1].d == 1)
            (**var_2b0)(var_2b0)
            int32_t rdi_1 = *(var_2b0 + 0xc)
            *(var_2b0 + 0xc) -= 1
            
            if (rdi_1 == 1)
                (*(*var_2b0 + 8))(var_2b0, zx.q(rdi_1))
    
    sub_140b721f0(1)

char rbx_2 = (*(arg4 + 0x30)).b
int16_t* var_2d8 = nullptr
int32_t var_2d0 = 0

if ((rbx_2 & 1) != 0)
    sub_140a20ba0(&var_2d8, u"D3D12_RESOURCE_FLAG_ALLOW_RENDER_TARGET ", 0x28)

if ((rbx_2 & 2) != 0)
    sub_140a20ba0(&var_2d8, u"D3D12_RESOURCE_FLAG_ALLOW_DEPTH_STENCIL ", 0x28)

if ((rbx_2 & 8) != 0)
    sub_140a20ba0(&var_2d8, u"D3D12_RESOURCE_FLAG_DENY_SHADER_RESOURCE ", 0x29)

if ((rbx_2 & 4) != 0)
    sub_140a20ba0(&var_2d8, u"D3D12_RESOURCE_FLAG_ALLOW_UNORDERED_ACCESS ", 0x2b)

int16_t* const rdi_2 = &data_142d40450

if (var_2d0 != 0)
    rdi_2 = var_2d8

int32_t var_2c0

if (var_2c0 != 0)
    rbp = var_2c8

void var_178
sub_1405eb940(&var_178, arg3)
void var_298
sub_1405eb940(&var_298, arg2)
int16_t* const var_2e0 = rdi_2
uint32_t var_2e8 = zx.d(*(arg4 + 0x1e))
int32_t var_2f0 = *(arg4 + 0x20)
wchar16 const* const var_2f8 = rsi
uint32_t var_300 = zx.d(*(arg4 + 0x1c))
int32_t var_308 = *(arg4 + 0x18)
int64_t var_310 = *(arg4 + 0x10)
int16_t* const var_318 = rbp
int32_t r9
int32_t var_320 = r9
int64_t var_70
int64_t var_328 = var_70
int64_t var_190
sub_140af98a0("Unknown", 0x27b, 
    %s failed \n at %s:%u \n with error %s, \n Size=%ix%ix%i Format=%s(0x%08X), NumMips=%i, Flags=%s", 
    var_190)
int64_t var_198

if (var_198 != 0)
    sub_140a74f90(var_198)

int64_t var_78

if (var_78 != 0)
    sub_140a74f90(var_78)

int16_t* rcx_18 = var_2d8

if (rcx_18 != 0)
    sub_140a74f90(rcx_18)

sub_140afbb40()
sub_140b19e60()
void* rdx_5 = data_1439a8bd0
(*(rdx_5 + 0x50))(&data_1439a8bd0, rdx_5)
sub_140b19e60()
void* rdx_6 = data_1439a8bd0
int64_t result = (*(rdx_6 + 0x18))(&data_1439a8bd0, rdx_6)
int16_t* rcx_19 = var_2c8

if (rcx_19 != 0)
    result = sub_140a74f90(rcx_19)

__security_check_cookie(rax_1 ^ &var_348)
return result
