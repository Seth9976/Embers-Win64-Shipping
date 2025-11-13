// 函数: sub_142c4aaf0
// 地址: 0x142c4aaf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
int32_t rax_2 = data_14401a9bc
uint64_t result
int32_t result_1

if (rax_2 != 0)
    result_1.b = rax_2 u>= arg1
    result = zx.q(result_1)
else
    uint64_t dwlConditionMask = VerSetConditionMask(0, VER_BUILDNUMBER, 3)
    OSVERSIONINFOEXW versionInformation
    memset(&versionInformation, 0, 0x11c)
    versionInformation.dwBuildNumber = arg1
    
    if (VerifyVersionInfoW(&versionInformation, VER_BUILDNUMBER, dwlConditionMask) == 0)
        HMODULE hModule = data_14401aa10
        void* hMem = nullptr
        int32_t var_168 = 0
        void* hMem_1 = nullptr
        int64_t var_160 = 0
        enum WIN32_ERROR rbx_2
        
        if (hModule != 0)
        label_142c4aba5:
            int64_t r10_1 = data_14401aa18
            
            if (r10_1 != 0)
                goto label_142c4abd7
            
            int64_t rax_4 = GetProcAddress(hModule, "RegOpenKeyExW")
            data_14401aa18 = rax_4
            r10_1 = rax_4
            
            if (rax_4 == 0)
                rbx_2 = GetLastError()
            else
                hModule = data_14401aa10
            label_142c4abd7:
                
                if (data_14401aa30 != 0)
                    goto label_142c4ac2e
                
                int64_t rax_5 = GetProcAddress(hModule, "RegCloseKey")
                data_14401aa30 = rax_5
                
                if (rax_5 != 0)
                    r10_1 = data_14401aa18
                label_142c4ac2e:
                    enum WIN32_ERROR rax_7 =
                        r10_1(-0x7ffffffe, SOFTWARE\Microsoft\Windows NT\CurrentVersion", 0, 1, 
                        &var_160)
                    rbx_2 = rax_7
                    
                    if (rax_7 == NO_ERROR)
                        rbx_2 = sub_142c4ae00(var_160, u"CurrentBuildNumber", &var_168, &hMem_1)
                        data_14401aa30(var_160)
                        hMem = hMem_1
                else
                    rbx_2 = GetLastError()
        else
            hModule = sub_142c4ad10(u"Advapi32.dll", 0)
            data_14401aa10 = hModule
            
            if (hModule != 0)
                goto label_142c4aba5
            
            rbx_2 = GetLastError()
        
        if (rbx_2 == NO_ERROR && var_168 == 1)
            void* hMem_2 = hMem
            int64_t rax_9 = -1
            bool cond:0_1
            
            do
                cond:0_1 = *(hMem + (rax_9 << 1) + 2) != 0
                rax_9 += 1
            while (cond:0_1)
            void* rbp_1 = hMem + (rax_9 << 1)
            
            if (hMem u< rbp_1)
                do
                    if (isdigit(zx.d(*hMem_2)) == 0)
                        data_14401a9bc = 0
                        break
                    
                    uint32_t rax_12 = zx.d(*hMem_2)
                    hMem_2 += 2
                    data_14401a9bc = rax_12 + ((data_14401a9bc * 5 - 0x18) << 1)
                while (hMem_2 u< rbp_1)
        
        LocalFree(hMem)
        result_1.b = data_14401a9bc u>= arg1
        result = zx.q(result_1)
    else
        result = 1
__security_check_cookie(rax_1 ^ &var_198)
return result
