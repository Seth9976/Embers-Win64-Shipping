// 函数: sub_142c49d80
// 地址: 0x142c49d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

HMODULE hModule = data_14401aa10
int64_t arg_20 = 0
int64_t* r14 = arg3
HLOCAL i = nullptr

if (hModule == 0)
    hModule = sub_142c4ad10(u"Advapi32.dll", 0)
    data_14401aa10 = hModule
    
    if (hModule == 0)
        return 0

if (data_14401aa18 == 0)
    int64_t rax = GetProcAddress(hModule, "RegOpenKeyExW")
    data_14401aa18 = rax
    
    if (rax == 0)
        return 0
    
    hModule = data_14401aa10

if (data_14401aa20 == 0)
    int64_t rax_1 = GetProcAddress(hModule, "RegEnumValueW")
    data_14401aa20 = rax_1
    
    if (rax_1 == 0)
        return 0
    
    hModule = data_14401aa10

if (data_14401aa30 == 0)
    int64_t rax_2 = GetProcAddress(hModule, "RegCloseKey")
    data_14401aa30 = rax_2
    
    if (rax_2 == 0)
        return 0

do
    int64_t rdx = *r14
    
    if (rdx == 0)
        break
    
    int64_t var_50
    int64_t var_48
    int64_t var_40
    int32_t rax_4 = data_14401aa18(arg2, rdx, 0, 0x20019, &arg_20, var_50, var_48, var_40)
    
    if (rax_4 == 0)
        HLOCAL hMem = LocalAlloc(rax_4 + 0x40, 0x10000)
        
        if (hMem != 0)
            int32_t rbp_1 = 0
            int32_t j
            
            do
                int32_t arg_18 = 0x7fff
                memset(hMem, 0, 0x8000)
                int64_t rcx_6 = arg_20
                __builtin_memset(&var_50, 0, 0x18)
                j = data_14401aa20(rcx_6, zx.q(rbp_1), hMem, &arg_18, 0, 0, 0, 0)
                rbp_1 += 1
                
                if (j == 0 && sub_142c4a7b0(hMem, arg1) != 0)
                    i = sub_142c4b050(hMem)
                
                if (i != 0)
                    break
            while (j != 0x103)
            LocalFree(hMem)
        
        data_14401aa30(arg_20)
    
    r14 = &r14[1]
while (i == 0)

return i
