// 函数: sub_142c4a910
// 地址: 0x142c4a910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
int32_t var_38 = 0x24
wchar16* rbx = nullptr
int32_t var_34 = 0x26
HLOCAL lpBuffer_1 = nullptr
int32_t var_30 = 0x2a
int32_t result_1 = 0
int32_t rcx_2

if (data_14401a8a0 != 0)
    rcx_2 = data_143ccb878
else
    uint64_t dwlConditionMask = VerSetConditionMask(
        VerSetConditionMask(VerSetConditionMask(0, VER_MAJORVERSION, 3), VER_MINORVERSION, 3), 
        VER_SERVICEPACKMAJOR, 3)
    data_14401a8a0 = 0x11c
    data_14401a8a4 = 6
    data_14401a8a8 = 1
    data_14401a9b4 = 0
    rcx_2.b = VerifyVersionInfoW(&data_14401a8a0, 
        VER_MINORVERSION | VER_MAJORVERSION | VER_SERVICEPACKMAJOR, dwlConditionMask) == 0
    data_143ccb878 = rcx_2

uint64_t result

if (rcx_2 == 0)
    if (arg1 != 0)
        uint32_t nBufferLength = GetFullPathNameW(arg1, 0, nullptr, nullptr)
        
        if (nBufferLength != 0)
            HLOCAL lpBuffer = LocalAlloc(LMEM_ZEROINIT, zx.q(nBufferLength) * 2)
            lpBuffer_1 = lpBuffer
            
            if (lpBuffer != 0
                    && nBufferLength u> GetFullPathNameW(arg1, nBufferLength, lpBuffer, nullptr))
                for (int64_t i = 0; i s< 3; )
                    HLOCAL rax_6 = sub_142c496e0((&var_38)[i], &data_1434ccfec)
                    rbx = rax_6
                    
                    if (rax_6 == 0)
                        break
                    
                    uint64_t _MaxCount = -1
                    
                    do
                        _MaxCount += 1
                    while (*(rax_6 + (_MaxCount << 1)) != 0)
                    
                    result_1.b = _wcsnicmp(lpBuffer_1, rbx, _MaxCount) == 0
                    
                    if (result_1 != 0)
                        break
                    
                    LocalFree(rbx)
                    i += 1
                    rbx = nullptr
    
    LocalFree(rbx)
    LocalFree(lpBuffer_1)
    result = zx.q(result_1)
else
    result = 1

__security_check_cookie(rax_1 ^ &var_58)
return result
