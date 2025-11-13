// 函数: sub_140d84150
// 地址: 0x140d84150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rbx = nullptr

if (data_143de548f == 0)
    data_143de548f = 1
    void*** rax_1 = j_sub_140a82f30(0x18)
    void*** rdi_1 = rax_1
    
    if (rax_1 == 0)
        rdi_1 = nullptr
    else
        rax_1[1].d = 1
        *(rax_1 + 0xc) = 1
        *rdi_1 = &data_142ec1828
        rdi_1[2] = 0
    
    if (rdi_1 != 0)
        rbx = rdi_1

BOOL i

if (arg1 != 0)
    data_143de548e = 0
    MSG msg
    
    for (i = PeekMessageW(&msg, nullptr, 0, 0, PM_REMOVE); i != 0; 
            i = PeekMessageW(&msg, nullptr, 0, 0, PM_REMOVE))
        TranslateMessage(&msg)
        DispatchMessageW(&msg)
    
    bool rsi
    
    if (data_143dbb3dc == 0)
        uint32_t lpdwProcessId
        GetWindowThreadProcessId(GetForegroundWindow(), &lpdwProcessId)
        i = GetCurrentProcessId()
        rsi = lpdwProcessId == i
    else
        rsi = data_143dbb3dd
    
    if (data_143e20cac != rsi)
        int64_t var_58 = 0
        wchar16 const* const r14_1 = u"false"
        int32_t rdx_3 = 0
        
        if (rsi != 0)
            r14_1 = u"true"
        
        int32_t var_50_1 = 0
        int32_t rcx_5 = 0
        int32_t var_4c_1 = 0
        
        if (*r14_1 != 0)
            int64_t rdi_2 = -1
            
            do
                rdi_2 += 1
            while (r14_1[rdi_2] != 0)
            
            if (rdi_2.d + 1 s> 0)
                sub_1405947f0(&var_58, rdi_2.d + 1)
                rcx_5 = var_4c_1
                rdx_3 = var_50_1
            
            int32_t rax_3 = rdi_2.d + 1 + rdx_3
            int32_t var_50_2 = rax_3
            
            if (rax_3 s> rcx_5)
                sub_140594770(&var_58)
            
            UnDecorator::getReferenceType(var_58, r14_1, (rdi_2.d + 1) * 2)
        
        int64_t var_68 = 0
        int32_t var_60_1 = 0
        sub_1405947f0(&var_68, 0x15)
        int32_t rax_4 = var_60_1 + 0x15
        var_60_1 = rax_4
        int32_t var_5c
        
        if (rax_4 s> var_5c)
            sub_140594770(&var_68)
        
        UnDecorator::getReferenceType(var_68, u"Platform.AppHasFocus", 0x2a)
        i = sub_140a53700(&var_68, &var_58)
        int64_t rcx_13 = var_68
        
        if (rcx_13 != 0)
            i = sub_140a74f90(rcx_13)
        
        int64_t rcx_14 = var_58
        
        if (rcx_14 != 0)
            i = sub_140a74f90(rcx_14)
    
    data_143e20cac = rsi
    int32_t zmm0
    
    if (rsi == 0)
        zmm0, i = sub_140af62b0()
    else
        zmm0 = 0x3f800000
    
    data_14399f940 = zmm0
else
    i = sub_140b71870()

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        i = (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*rbx)[1](rbx, 1)

return i
