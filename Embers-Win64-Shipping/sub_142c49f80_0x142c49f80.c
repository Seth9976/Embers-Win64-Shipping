// 函数: sub_142c49f80
// 地址: 0x142c49f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

HMODULE hModule = data_14401aa10
int64_t var_28 = 0
int64_t* r14 = arg4
HLOCAL i = nullptr

if (hModule != 0)
label_142c49fd5:
    int64_t r10_1 = data_14401aa18
    
    if (r10_1 != 0)
        goto label_142c4a007
    
    int64_t rax = GetProcAddress(hModule, "RegOpenKeyExW")
    data_14401aa18 = rax
    r10_1 = rax
    
    if (rax != 0)
        hModule = data_14401aa10
    label_142c4a007:
        
        if (data_14401aa30 != 0)
            goto label_142c4a04c
        
        int64_t rax_1 = GetProcAddress(hModule, "RegCloseKey")
        data_14401aa30 = rax_1
        
        if (rax_1 != 0)
            r10_1 = data_14401aa18
        label_142c4a04c:
            
            if (r10_1(arg2, arg3, 0, 1, &var_28) == 0)
                do
                    int64_t rdx_1 = *r14
                    
                    if (rdx_1 == 0)
                        break
                    
                    int64_t rcx_3 = var_28
                    HLOCAL hMem_1 = nullptr
                    int32_t arg_20 = 0
                    enum WIN32_ERROR rax_3 = sub_142c4ae00(rcx_3, rdx_1, &arg_20, &hMem_1)
                    HLOCAL hMem = hMem_1
                    
                    if (rax_3 == NO_ERROR)
                        int32_t rax_4 = arg_20
                        HLOCAL hMem_2 = hMem
                        
                        if (rax_4 == 1)
                            if (sub_142c4a7b0(hMem, arg1) != 0)
                                i = sub_142c4b050(hMem)
                        else if (rax_4 == 7)
                            if (0 != *hMem)
                                do
                                    if (sub_142c4a7b0(hMem_2, arg1) != 0)
                                        break
                                    
                                    int64_t rax_7 = -1
                                    bool cond:0_1
                                    
                                    do
                                        cond:0_1 = *(hMem_2 + (rax_7 << 1) + 2) != 0
                                        rax_7 += 1
                                    while (cond:0_1)
                                    hMem_2 = hMem_2 + (rax_7 << 1) + 2
                                while (0 != *hMem_2)
                            
                            if (0 != *hMem_2)
                                i = sub_142c4b050(hMem_2)
                        else
                            SetLastError(ERROR_INVALID_DATA)
                    
                    LocalFree(hMem)
                    r14 = &r14[1]
                while (i == 0)
                
                data_14401aa30(var_28)
                return i
else
    hModule = sub_142c4ad10(u"Advapi32.dll", 0)
    data_14401aa10 = hModule
    
    if (hModule != 0)
        goto label_142c49fd5

return nullptr
