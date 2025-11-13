// 函数: sub_142c49910
// 地址: 0x142c49910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

HMODULE hModule = data_14401aa10
int64_t rbx = 0
HLOCAL hMem = nullptr
HLOCAL result = nullptr

if (hModule == 0)
    hModule = sub_142c4ad10(u"Advapi32.dll", 0)
    data_14401aa10 = hModule
    
    if (hModule == 0)
        return nullptr

if (data_14401aa38 == 0)
    int64_t rax = GetProcAddress(hModule, "OpenSCManagerW")
    data_14401aa38 = rax
    
    if (rax == 0)
        return nullptr
    
    hModule = data_14401aa10

if (data_14401aa40 == 0)
    int64_t rax_1 = GetProcAddress(hModule, "OpenServiceW")
    data_14401aa40 = rax_1
    
    if (rax_1 == 0)
        return nullptr
    
    hModule = data_14401aa10

if (data_14401aa48 == 0)
    int64_t rax_2 = GetProcAddress(hModule, "QueryServiceConfigW")
    data_14401aa48 = rax_2
    
    if (rax_2 == 0)
        return nullptr
    
    hModule = data_14401aa10

if (data_14401aa58 == 0)
    int64_t rax_3 = GetProcAddress(hModule, "CloseServiceHandle")
    data_14401aa58 = rax_3
    
    if (rax_3 == 0)
        return nullptr

int32_t arg_18 = 0
int64_t rax_4 = data_14401aa38(0, 0, 0x80000000)

if (rax_4 != 0)
    int64_t rax_5 = data_14401aa40(rax_4, arg2, 0x80000000)
    rbx = rax_5
    
    if (rax_5 != 0)
        data_14401aa48(rax_5, 0, 0, &arg_18)
        int32_t rax_6 = arg_18
        
        if (rax_6 != 0)
            HLOCAL hMem_1 = LocalAlloc(LMEM_ZEROINIT, zx.q(rax_6))
            hMem = hMem_1
            
            if (hMem_1 != 0 && data_14401aa48(rbx, hMem_1, zx.q(arg_18), &arg_18) != 0 && *hMem == 1
                    && sub_142c4a7b0(*(hMem + 0x10), arg1) != 0)
                result = sub_142c4b050(*(hMem + 0x10))

LocalFree(hMem)

if (rbx != 0)
    data_14401aa58(rbx)

if (rax_4 != 0)
    data_14401aa58(rax_4)

return result
