// 函数: sub_142c4b790
// 地址: 0x142c4b790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int16_t* hMem_1 = nullptr
HLOCAL hMem_2 = nullptr
SetLastError(NO_ERROR)
int16_t* result

if (arg1 == 0)
label_142c4ba7c:
    SetLastError(ERROR_BAD_ARGUMENTS)
    result = nullptr
else
    int64_t rsi_1 = -1
    int32_t rdx_1 = 0
    int64_t rax_2 = -1
    
    do
        rax_2 += 1
    while (arg1[rax_2] != 0)
    
    if (rax_2 != 0)
        uint64_t rcx = 0
        
        do
            int16_t r8_1 = arg1[rcx]
            
            if (r8_1 == 0x5c)
                goto label_142c4ba7c
            
            if (r8_1 == 0x2f)
                goto label_142c4ba7c
            
            rdx_1 += 1
            rcx = zx.q(rdx_1)
        while (rcx u< rax_2)
    
    if (sub_142c4aaf0(0x42ea) == 0)
        goto label_142c4b87d
    
    int16_t* rax_4 = sub_142c4a410()
    
    if (data_14401acf0 == 0)
        rax_4 = sub_142c4a510()
    
    int16_t* lpFileName = sub_142c4af40(rax_4, arg1)
    int16_t* hMem = lpFileName
    uint32_t rax_5 = GetFileAttributesW(lpFileName)
    
    if (rax_5 == 0xffffffff || (rax_5.b & 0x50) != 0)
        LocalFree(hMem)
    label_142c4b87d:
        int16_t* hMem_3 = sub_142c4bab0(&data_1436b00f8)
        hMem_1 = hMem_3
        hMem = nullptr
        
        if (hMem_3 != 0)
            HLOCAL hMem_4 = sub_142c49510(arg1)
            hMem_2 = hMem_4
            
            if (hMem_4 != 0)
                bool cond:0_1
                
                do
                    cond:0_1 = *(hMem_4 + (rsi_1 << 1) + 2) != 0
                    rsi_1 += 1
                while (cond:0_1)
                void* _String1 = hMem_4 + (rsi_1 << 1)
                void* _String1_1 = _String1
                
                if (hMem_2 u< _String1)
                    do
                        int16_t rcx_5 = *_String1_1
                        
                        if (0x5c == rcx_5)
                            break
                        
                        if (0x2e == rcx_5)
                            break
                        
                        _String1_1 -= 2
                    while (hMem_2 u< _String1_1)
                
                if (0x2e == *_String1_1)
                    _String1 = _String1_1
                
                if (_wcsicmp(_String1, u".dll") != 0 && GetLastError() == NO_ERROR)
                    hMem = sub_142c49b00(hMem_2, &data_1436b00f8)
                
                if (_wcsicmp(_String1, u".sys") == 0)
                    goto label_142c4b9f1
                
                if (hMem == 0)
                    enum WIN32_ERROR rax_10 = GetLastError()
                    wchar16 const* const var_68
                    wchar16 const* const var_48
                    HLOCAL hMem_5
                    
                    if (rax_10 == NO_ERROR)
                        int64_t var_30_1 = 0
                        var_48 = u"UserModeDriverNameWow"
                        int64_t var_50_1 = 0
                        wchar16 const* const var_40_1 = u"OpenGLDriverNameWow"
                        wchar16 const* const var_38_1 = u"UserModeDListDriverNameWow"
                        var_68 = u"UserModeDriverName"
                        wchar16 const* const var_60_1 = u"OpenGLDriverName"
                        wchar16 const* const var_58_1 = u"UserModeDListDriverName"
                        hMem_5 = sub_142c49f80(hMem_2, -0x7ffffffe, hMem_1, &var_68)
                        hMem = hMem_5
                    
                    if (rax_10 != NO_ERROR || hMem_5 == 0)
                        if (GetLastError() != NO_ERROR)
                            goto label_142c4b9f6
                        
                        int64_t var_58_2 = 0
                        var_68 = u"SOFTWARE\Khronos\Vulkan\Drivers"
                        wchar16 const* const var_60_2 = u"SOFTWARE\Khronos\OpenCL\Vendors"
                        hMem = sub_142c49d80(hMem_2, -0x7ffffffe, &var_68)
                    label_142c4b9f1:
                        
                        if (hMem == 0)
                        label_142c4b9f6:
                            
                            if (GetLastError() == NO_ERROR)
                                int64_t var_60_3 = 0
                                var_68 = u"DriverSupportModulesWow"
                                int64_t var_40_2 = 0
                                var_48 = u"DriverSupportModules"
                                hMem = sub_142c49f80(hMem_2, -0x7ffffffe, hMem_1, &var_48)
    
    LocalFree(hMem_1)
    LocalFree(hMem_2)
    
    if (hMem == 0)
        enum WIN32_ERROR rax_15 = GetLastError()
        
        if (rax_15 == NO_ERROR)
            SetLastError(rax_15 + 0x7e)
    else
        SetLastError(NO_ERROR)
    
    result = hMem

__security_check_cookie(rax_1 ^ &var_88)
return result
