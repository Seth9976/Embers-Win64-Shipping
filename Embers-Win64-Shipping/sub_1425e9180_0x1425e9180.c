// 函数: sub_1425e9180
// 地址: 0x1425e9180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1] = 0
int64_t* rcx = data_143f0f180

if (rcx != 0)
    int16_t* rax_2 = (*(*rcx + 0x20))(rcx)
    int16_t* rbx_1 = nullptr
    int32_t var_58_1 = 0
    int16_t* var_60 = nullptr
    int32_t rax_3 = 0
    int32_t r14_1 = 0
    int32_t var_54_1 = 0
    
    if (rax_2 != 0 && *rax_2 != 0)
        int64_t rdi_1 = -1
        
        do
            rdi_1 += 1
        while (rax_2[rdi_1] != 0)
        
        if (rdi_1.d + 1 s> 0)
            sub_1405947f0(&var_60, rdi_1.d + 1)
            rax_3 = var_54_1
            r14_1 = var_58_1
            rbx_1 = var_60
        
        r14_1 += rdi_1.d + 1
        
        if (r14_1 s> rax_3)
            sub_140594770(&var_60)
            rbx_1 = var_60
        
        UnDecorator::getReferenceType(rbx_1, rax_2, (rdi_1.d + 1) * 2)
    
    TEB* gsbase
    void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
    uint64_t rcx_4 = zx.q(data_14401b1a0)
    int64_t* arg_20 = nullptr
    int32_t* rdi_4 = *(ThreadLocalStoragePointer + (rcx_4 << 3)) + 0x14
    
    if (data_143f70b84 s> *rdi_4)
        _Init_thread_header(&data_143f70b84)
        
        if (data_143f70b84 == 0xffffffff)
            sub_140af2b60()
            data_143f70b80 = sub_140b21a10(&data_143dbb3f0, u"nod3dasync") == 0
            _Init_thread_footer(&data_143f70b84)
    
    enum D3D11_CREATE_DEVICE_FLAG Flags
    Flags.b = data_143f70b80 == 0
    
    if (data_143f70b7c s> *rdi_4)
        _Init_thread_header(&data_143f70b7c)
        
        if (data_143f70b7c == 0xffffffff)
            sub_140af2b60()
            char rax_29
            
            if (sub_140b21a10(&data_143dbb3f0, u"d3ddebug") != 0)
                rax_29 = 1
            else
                sub_140af2b60()
                
                if (sub_140b21a10(&data_143dbb3f0, u"d3debug") != 0)
                    rax_29 = 1
                else
                    sub_140af2b60()
                    rax_29 = sub_140b21a10(&data_143dbb3f0, u"dxdebug")
                    
                    if (rax_29 != 0)
                        rax_29 = 1
            
            data_143f70b78 = rax_29
            _Init_thread_footer(&data_143f70b7c)
    
    if (data_143f70b78 != 0)
        Flags |= D3D11_CREATE_DEVICE_DEBUG
    
    int16_t* const rdi_5 = &data_142d40450
    enum D3D_FEATURE_LEVEL featureLevels = D3D_FEATURE_LEVEL_11_1
    struct IDXGIAdapter pAdapter = 0
    int16_t* const rcx_5 = &data_142d40450
    
    if (r14_1 != 0)
        rcx_5 = rbx_1
    
    struct IDXGIAdapter pAdapter_1
    int32_t rdx_9
    wchar16 const* const r8_5
    int64_t r9_2
    
    if (sub_140a54510(rcx_5, u"D3D11") != 0)
        if (r14_1 != 0)
            rdi_5 = rbx_1
        
        int32_t rax_13
        rax_13, r9_2 = sub_140a54510(rdi_5, u"D3D12")
        
        if (rax_13 != 0)
            r8_5 = u"NvEnc requires D3D11/D3D12"
            rdx_9 = 0x158
        label_1425e9499:
            sub_140af98a0("Unknown", rdx_9, r8_5, r9_2)
            sub_140afbb40()
            pAdapter_1 = pAdapter
        else
            int64_t* rcx_11 = data_143f0f180
            int64_t* rax_15 = (*(*rcx_11 + 0x458))(rcx_11)
            int64_t r8_4 = *rax_15
            (*(r8_4 + 0x158))(rax_15, &var_60, r8_4)
            int64_t* ppFactory = nullptr
            
            if (CreateDXGIFactory(&data_142f03670, &ppFactory) s>= 0)
                struct IDXGIAdapter pAdapter_2 = pAdapter
                int64_t* ppFactory_3 = ppFactory
                
                if (pAdapter_2 != 0)
                    (*(*pAdapter_2 + 0x10))(pAdapter_2)
                
                int32_t rax_20 =
                    (*(*ppFactory_3 + 0xd0))(ppFactory_3, var_60, &data_142efa5e0, &pAdapter)
                int64_t* ppFactory_2 = ppFactory
                
                if (rax_20 s>= 0)
                    if (ppFactory_2 != 0)
                        (*(*ppFactory_2 + 0x10))(ppFactory_2)
                    
                    goto label_1425e9401
                
                if (ppFactory_2 != 0)
                    (*(*ppFactory_2 + 0x10))(ppFactory_2)
                
                pAdapter_1 = pAdapter
            else
                int64_t* ppFactory_1 = ppFactory
                
                if (ppFactory_1 != 0)
                    (*(*ppFactory_1 + 0x10))(ppFactory_1)
                
                pAdapter_1 = pAdapter
    else
        int64_t* rcx_6 = data_143f0f180
        int64_t* rax_8 = (*(*rcx_6 + 0x458))(rcx_6)
        int64_t* rcx_7 = arg_20
        
        if (rcx_7 != 0)
            int64_t rdx_4 = *rcx_7
            (*(rdx_4 + 0x10))(rcx_7, rdx_4)
        
        int64_t r9_1 = *rax_8
        int32_t rax_9 = (*r9_1)(rax_8, &data_142d5ff40, &arg_20, r9_1)
        pAdapter_1 = pAdapter
        
        if (rax_9 s>= 0)
            int64_t* rdi_7 = arg_20
            
            if (pAdapter_1 != 0)
                (*(*pAdapter_1 + 0x10))(pAdapter_1)
            
            if ((*(*rdi_7 + 0x38))(rdi_7, &pAdapter) s< 0)
                pAdapter_1 = pAdapter
            else
                featureLevels = D3D_FEATURE_LEVEL_11_0
            label_1425e9401:
                int64_t* rcx_14 = arg1[1]
                arg1[1] = 0
                
                if (rcx_14 != 0)
                    (*(*rcx_14 + 0x10))(rcx_14)
                
                int64_t* rcx_15 = *arg1
                *arg1 = 0
                
                if (rcx_15 != 0)
                    (*(*rcx_15 + 0x10))(rcx_15)
                
                enum D3D_FEATURE_LEVEL featureLevel
                HRESULT rax_25
                rax_25, r9_2 = D3D11CreateDevice(pAdapter, D3D_DRIVER_TYPE_UNKNOWN, nullptr, Flags, 
                    &featureLevels, 1, 7, arg1, &featureLevel, &arg1[1])
                
                if (rax_25 s>= 0 && featureLevels == D3D_FEATURE_LEVEL_11_1
                        && featureLevel != D3D_FEATURE_LEVEL_11_1)
                    r8_5 = Failed to create a D3D 11.1 device. This is needed when using the D3D12 "
                    "renderer."
                    rdx_9 = 0x16e
                    goto label_1425e9499
                
                pAdapter_1 = pAdapter
    
    if (pAdapter_1 != 0)
        (*(*pAdapter_1 + 0x10))(pAdapter_1)
    
    int64_t* rcx_17 = arg_20
    
    if (rcx_17 != 0)
        (*(*rcx_17 + 0x10))(rcx_17)
    
    if (rbx_1 != 0)
        sub_140a74f90(rbx_1)

return arg1
