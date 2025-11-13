// 函数: sub_142932320
// 地址: 0x142932320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x288)
void var_298
int64_t rax_1 = __security_cookie ^ &var_298
HMODULE rax_2 = LoadLibraryW(u"KERNEL32.DLL")
int64_t result

if (rax_2 != 0)
    int64_t rax_3 = GetProcAddress(rax_2, "CreateToolhelp32Snapshot")
    
    if (rax_3 != 0)
        int64_t rax_4 = GetProcAddress(rax_2, "Module32First")
        int64_t rax_5 = GetProcAddress(rax_2, "Module32Next")
        HANDLE hObject = rax_3(8, 0)
        
        if (hObject != -1)
            int32_t var_268 = 0x238
            
            if (rax_4(hObject, &var_268) == 0)
            label_142932488:
                CloseHandle(hObject)
                FreeLibrary(rax_2)
                result = 0
            else
                while (true)
                    HMODULE hModule
                    int64_t result_1 = GetProcAddress(hModule, arg1)
                    
                    if (result_1 != 0)
                        CloseHandle(hObject)
                        FreeLibrary(rax_2)
                        result = result_1
                        break
                    
                    if (rax_5(hObject, &var_268) == 0)
                        goto label_142932488
        else
            FreeLibrary(rax_2)
            sub_1428a5670((hObject + 0x26).d, 0x8e, (hObject + 0x6d).d, "crypto\dso\dso_win32.c", 
                0x21e)
            result = 0
    else
        FreeLibrary(rax_2)
        sub_1428a5670((rax_3 + 0x25).d, 0x8e, (rax_3 + 0x6c).d, "crypto\dso\dso_win32.c", 0x20e)
        result = 0
else
    sub_1428a5670((rax_2 + 0x25).d, 0x8e, (&rax_2[0x1b]).d, "crypto\dso\dso_win32.c", 0x206)
    result = 0

__security_check_cookie(rax_1 ^ &var_298)
return result
