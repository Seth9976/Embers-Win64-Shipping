// 函数: sub_142c4b540
// 地址: 0x142c4b540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* hMem_3 = nullptr
SetLastError(NO_ERROR)

if (arg1 == 0)
label_142c4b76f:
    SetLastError(ERROR_BAD_ARGUMENTS)
    return 0

int32_t rdx_1 = 0
int64_t rax_1 = -1

do
    rax_1 += 1
while (arg1[rax_1] != 0)

if (rax_1 != 0)
    uint64_t rcx = 0
    
    do
        int16_t r8_1 = arg1[rcx]
        
        if (r8_1 == 0x5c)
            goto label_142c4b76f
        
        if (r8_1 == 0x2f)
            goto label_142c4b76f
        
        rdx_1 += 1
        rcx = zx.q(rdx_1)
    while (rcx u< rax_1)

int16_t* hMem_5 = sub_142c4b790(arg1)
int16_t* hMem_4 = hMem_5

if (hMem_5 != 0)
    HLOCAL hMem = sub_142c4bf50()
    
    if (hMem != 0)
        if (sub_142c49690(hMem_4) == 0)
            hMem_3 = sub_142c4af40(hMem, hMem_4)
        else
            wchar16 const* const var_18 = u"system32\"
            wchar16 const* const* i = &var_18
            wchar16 const* const var_10_1 = u"\SystemRoot\system32\"
            int64_t __saved_rbp
            
            do
                wchar16 const* const _String2 = *i
                uint64_t _MaxCount = -1
                
                do
                    _MaxCount += 1
                while (_String2[_MaxCount] != 0)
                
                if (_wcsnicmp(hMem_4, _String2, _MaxCount) == 0)
                    hMem_3 = sub_142c4af40(hMem, &hMem_4[_MaxCount])
                    break
                
                i = &i[1]
            while (i u< &__saved_rbp)
            
            if (i == &__saved_rbp && sub_142c49630(hMem_4) != 0)
                hMem_3 = hMem_4
                hMem_4 = nullptr
        
        LocalFree(hMem)
    
    LocalFree(hMem_4)
    goto label_142c4b736

if (GetLastError() != ERROR_MOD_NOT_FOUND)
label_142c4b73f:
    enum WIN32_ERROR rax_11 = GetLastError()
    
    if (rax_11 == NO_ERROR)
        SetLastError(rax_11 + 0x7e)
else
    int16_t* hMem_1 = sub_142c49510(arg1)
    
    if (hMem_1 == 0)
        goto label_142c4b73f
    
    int16_t* hMem_2
    
    if (sub_142c4aaf0(0x37e4) == 0)
        hMem_2 = sub_142c4bf50()
    else
        hMem_2 = sub_142c4bc80(&data_1436b00f8)
    
    if (hMem_2 != 0)
        int16_t* lpFileName = sub_142c4af40(hMem_2, hMem_1)
        hMem_3 = lpFileName
        
        if (lpFileName != 0)
            uint32_t rax_9 = GetFileAttributesW(lpFileName)
            
            if (rax_9 == 0xffffffff || (rax_9.b & 0x50) != 0)
                if (GetLastError() == ERROR_FILE_NOT_FOUND)
                    SetLastError(NO_ERROR)
                
                LocalFree(hMem_3)
                hMem_3 = nullptr
        
        LocalFree(hMem_2)
    
    LocalFree(hMem_1)
label_142c4b736:
    
    if (hMem_3 == 0)
        goto label_142c4b73f
    
    SetLastError(NO_ERROR)

return hMem_3
