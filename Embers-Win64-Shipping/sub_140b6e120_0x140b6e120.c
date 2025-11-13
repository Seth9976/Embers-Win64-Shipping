// 函数: sub_140b6e120
// 地址: 0x140b6e120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
uint64_t var_18 = __security_cookie ^ &var_f8
uint64_t result

if (data_1439a9620 == -1 || data_143e19e3d != 0)
    TEB* gsbase
    void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
    data_1439a9620 = arg1
    int16_t* const UserSearchPath
    int16_t* const UserSearchPath_2 = UserSearchPath
    
    if (data_143e19e68 s> *(0x14 + *(ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143e19e68)
        
        if (data_143e19e68 == 0xffffffff)
            InitializeCriticalSection(&data_143e19e40)
            SetCriticalSectionSpinCount(&data_143e19e40, 0xfa0)
            atexit(&data_142cc0cb0)
            _Init_thread_footer(&data_143e19e68)
    
    EnterCriticalSection(&data_143e19e40)
    
    if (data_143e19e3c != 0)
        if (data_143e19e3d != 0)
            SymRefreshModuleList(data_1439a9620)
            data_143e19e3d = 0
        
        UserSearchPath = zx.q(data_143e19e3c)
    else
        HMODULE hModule = sub_140b67ab0(u"PSAPI.DLL")
        int64_t rax_6
        bool cond:0_1
        
        if (hModule != 0)
            int32_t var_28_1 = 0xd
            UserSearchPath = nullptr
            void var_b8
            void* lpProcName = &var_b8
            int64_t var_38_1 = 0
            sub_14060abb0(&var_b8, 0xe, u"EnumProcesses", 0xe, 0x3f)
            int64_t rax_2 = GetProcAddress(hModule, lpProcName)
            
            if (var_38_1 != 0)
                sub_140a74f90(var_38_1)
            
            data_143e18610 = rax_2
            int64_t var_38_2 = 0
            int32_t var_28_2 = 0x12
            void* lpProcName_1 = &var_b8
            sub_14060abb0(&var_b8, 0x13, u"EnumProcessModules", 0x13, 0x3f)
            int64_t rax_3 = GetProcAddress(hModule, lpProcName_1)
            
            if (var_38_2 != 0)
                sub_140a74f90(var_38_2)
            
            data_143e18618 = rax_3
            int64_t var_38_3 = 0
            int32_t var_28_3 = 0x14
            PSTR lpProcName_2 = &var_b8
            sub_14060abb0(&var_b8, 0x15, u"GetModuleFileNameExW", 0x15, 0x3f)
            int64_t rax_4 = GetProcAddress(hModule, lpProcName_2)
            
            if (var_38_3 != 0)
                sub_140a74f90(var_38_3)
            
            data_143e18628 = rax_4
            int64_t var_38_4 = 0
            int32_t var_28_4 = 0x12
            PSTR lpProcName_3 = &var_b8
            sub_14060abb0(&var_b8, 0x13, u"GetModuleBaseNameW", 0x13, 0x3f)
            int64_t rax_5 = GetProcAddress(hModule, lpProcName_3)
            
            if (var_38_4 != 0)
                sub_140a74f90(var_38_4)
            
            data_143e18620 = rax_5
            int64_t var_38_5 = 0
            int32_t var_28_5 = 0x14
            PSTR lpProcName_4 = &var_b8
            sub_14060abb0(&var_b8, 0x15, u"GetModuleInformation", 0x15, 0x3f)
            rax_6 = GetProcAddress(hModule, lpProcName_4)
            
            if (var_38_5 != 0)
                sub_140a74f90(var_38_5)
            
            cond:0_1 = data_143e18610 == 0
            data_143e18630 = rax_6
        
        if (hModule == 0 || cond:0_1 || data_143e18618 == 0 || data_143e18628 == 0
                || data_143e18620 == 0 || rax_6 == 0)
            UserSearchPath.b = 0
        else
            SymSetOptions(SymGetOptions() | 0x616)
            int16_t* UserSearchPath_1
            sub_140b6c780(&UserSearchPath_1)
            int32_t var_c0
            
            if (var_c0 s> 1)
                UserSearchPath = &data_142d40450
                
                if (var_c0 != 0)
                    UserSearchPath = UserSearchPath_1
            
            SymInitializeW(data_1439a9620, UserSearchPath, 1)
            int16_t* UserSearchPath_3 = UserSearchPath_1
            data_143e19e3d = 0
            data_143e19e3c = 1
            
            if (UserSearchPath_3 != 0)
                sub_140a74f90(UserSearchPath_3)
            
            UserSearchPath = zx.q(data_143e19e3c)
    
    LeaveCriticalSection(&data_143e19e40)
    result = zx.q(UserSearchPath.b)
else
    result.b = 1

__security_check_cookie(var_18 ^ &var_f8)
return result
