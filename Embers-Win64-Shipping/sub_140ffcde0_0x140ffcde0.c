// 函数: sub_140ffcde0
// 地址: 0x140ffcde0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct ID3D11Device ppDevice = 0
struct ID3D11DeviceContext ppImmediateContext[0x3]
ppImmediateContext[0].vtable = 0
sub_140af2b60()
enum D3D11_CREATE_DEVICE_FLAG Flags

if (sub_140b21a10(&data_143dbb3f0, u"d3ddebug") != 0)
    Flags = D3D11_CREATE_DEVICE_SINGLETHREADED | D3D11_CREATE_DEVICE_DEBUG |
        D3D11_CREATE_DEVICE_BGRA_SUPPORT
else
    sub_140af2b60()
    
    if (sub_140b21a10(&data_143dbb3f0, u"d3debug") != 0)
        Flags = D3D11_CREATE_DEVICE_SINGLETHREADED | D3D11_CREATE_DEVICE_DEBUG |
            D3D11_CREATE_DEVICE_BGRA_SUPPORT
    else
        sub_140af2b60()
        Flags = D3D11_CREATE_DEVICE_SINGLETHREADED | D3D11_CREATE_DEVICE_BGRA_SUPPORT
        
        if (sub_140b21a10(&data_143dbb3f0, u"dxdebug") != 0)
            Flags = D3D11_CREATE_DEVICE_SINGLETHREADED | D3D11_CREATE_DEVICE_DEBUG |
                D3D11_CREATE_DEVICE_BGRA_SUPPORT

int32_t var_30 = 0xb100
int32_t var_2c = 0xb000
int32_t rcx = 0
int32_t rdx = 1
int64_t rax_3 = 0

while ((&var_30)[rax_3] != arg3)
    rcx += 1
    rax_3 += 1
    
    if (rax_3 s>= 2)
        break

int64_t result = 1

while ((&var_30)[result] s< arg2)
    rdx -= 1
    result -= 1
    
    if (result s<= 0)
        break

if (arg3 s< arg2 || rdx - rcx + 1 s<= 0)
    result.b = 0
else
    HRESULT rax_5 = D3D11CreateDevice(arg1, D3D_DRIVER_TYPE_UNKNOWN, nullptr, Flags, 
        &(&var_30)[sx.q(rcx)], rdx - rcx + 1, 7, &ppDevice, arg4, &ppImmediateContext)
    
    if (rax_5 s< 0)
        int64_t var_68_2 = 0
        sub_140fff1c0(rax_5, "Result")
        int64_t r9_1
        result, r9_1 = sub_140b74110(0xa, 0)
        
        if (rax_5 == 0x887a002d && result.b != 0)
            sub_140af98a0("Unknown", 0x168, 
                -d3ddebug was used but optional Graphics Tools were not found. Install them through the "
            "Manage Optional Features in windows. See: https://docs.", r9_1)
            sub_140afbb40()
        
        result.b = 0
    else
        struct ID3D11Device ppDevice_1 = ppDevice
        (*(*ppDevice_1 + 0x10))(ppDevice_1)
        HRESULT (** vtable)(struct IUnknown* this, GUID* riid, void** ppvObject) =
            ppImmediateContext[0].vtable
        (*(*vtable + 0x10))(vtable)
        result.b = 1

return result
