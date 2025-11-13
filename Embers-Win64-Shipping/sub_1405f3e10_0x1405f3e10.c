// 函数: sub_1405f3e10
// 地址: 0x1405f3e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_30 = -2
uint32_t resetToken = 0

if (*(arg1 + 0x68) != 0)
    void* const* rax_16
    rax_16.b = 1
    return rax_16

if (MFCreateDXGIDeviceManager(&resetToken, arg1 + 0x68) s>= 0)
    int64_t* rcx_1 = data_143f0f180
    
    if (rcx_1 != 0 && sub_140a54510((*(*rcx_1 + 0x20))(rcx_1), u"D3D11") == 0)
        int64_t* rcx_3 = data_143f0f180
        int64_t* rax_4 = (*(*rcx_3 + 0x458))(rcx_3)
        int64_t* var_38 = nullptr
        int64_t r9 = *rax_4
        (*r9)(rax_4, &data_142d5ff40, &var_38, r9)
        struct IDXGIAdapter pAdapter = 0
        int64_t* rcx_5 = var_38
        (*(*rcx_5 + 0x38))(rcx_5, &pAdapter)
        sub_140af2b60()
        enum D3D11_CREATE_DEVICE_FLAG Flags = 0
        
        if (sub_140b21a10(&data_143dbb3f0, u"d3ddebug") != 0)
            Flags = D3D11_CREATE_DEVICE_DEBUG
        
        enum D3D_FEATURE_LEVEL featureLevel
        int64_t* rbx
        
        if (D3D11CreateDevice(pAdapter, D3D_DRIVER_TYPE_UNKNOWN, nullptr, Flags, nullptr, 0, 7, 
                arg1 + 0x70, &featureLevel, arg1 + 0x78) s< 0 || featureLevel s< D3D_FEATURE_LEVEL_9_3)
            rbx.b = 0
        else
            int64_t* rcx_7 = *(arg1 + 0x68)
            
            if ((*(*rcx_7 + 0x38))(rcx_7, (arg1 + 0x70)->vtable, zx.q(resetToken)) s< 0)
                rbx.b = 0
            else
                int64_t* arg_18 = nullptr
                struct ID3D11DeviceVTable* vtable = (arg1 + 0x70)->vtable
                (*vtable->QueryInterface)(vtable, &data_142d5ff50, &arg_18)
                int64_t* rcx_8 = arg_18
                
                if (rcx_8 == 0)
                    rbx.b = 0
                else
                    (*(*rcx_8 + 0x28))(rcx_8, 1)
                    int64_t* rcx_9 = arg_18
                    (*(*rcx_9 + 0x10))(rcx_9)
                    rbx.b = 1
        
        struct IDXGIAdapter pAdapter_1 = pAdapter
        
        if (pAdapter_1 != 0)
            (*(*pAdapter_1 + 0x10))(pAdapter_1)
        
        int64_t* rcx_10 = var_38
        
        if (rcx_10 != 0)
            int64_t rdx_3 = *rcx_10
            (*(rdx_3 + 0x10))(rcx_10, rdx_3)
        
        return zx.q(rbx.b)

HRESULT rax
rax.b = 0
return rax
