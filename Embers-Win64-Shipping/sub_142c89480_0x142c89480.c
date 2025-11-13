// 函数: sub_142c89480
// 地址: 0x142c89480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
uint64_t var_38 = __security_cookie ^ &var_f8
uint64_t result
int64_t rbx
int64_t rdi

if (arg4 == 0)
    rbx.b = 4
    rdi.b = 5
label_142c89502:
    OSVERSIONINFOEXA versionInformation
    memset(&versionInformation, 0, 0x9c)
    versionInformation.dwMajorVersion = arg1
    versionInformation.dwOSVersionInfoSize = 0x9c
    versionInformation.dwMinorVersion = arg2
    
    if (arg3 != 1)
        uint32_t dwPlatformId = versionInformation.dwPlatformId
        
        if (arg3 == 2)
            dwPlatformId = 2
        
        versionInformation.dwPlatformId = dwPlatformId
    else
        versionInformation.dwPlatformId = 1
    
    uint64_t rax_4 = VerSetConditionMask(
        VerSetConditionMask(
            VerSetConditionMask(VerSetConditionMask(0, VER_MAJORVERSION, rbx.b), VER_MINORVERSION, 
                rbx.b), 
            VER_SERVICEPACKMAJOR, rdi.b), 
        VER_SERVICEPACKMINOR, rdi.b)
    
    if (arg3 != 0)
        rax_4 = VerSetConditionMask(rax_4, VER_PLATFORMID, 1)
    
    char result_1 = 0
    
    if (VerifyVersionInfoA(&versionInformation, 
            VER_MINORVERSION | VER_MAJORVERSION | VER_SERVICEPACKMINOR | VER_SERVICEPACKMAJOR, 
            rax_4) != 0)
        result_1 = 1
    
    result = zx.q(result_1)
else
    if (arg4 == 1)
        rbx.b = 5
        rdi = 5
        goto label_142c89502
    
    if (arg4 == 2)
        rbx.b = 1
        rdi.b = 3
        goto label_142c89502
    
    if (arg4 == 3)
        rbx.b = 3
        rdi = 3
        goto label_142c89502
    
    if (arg4 == 4)
        rbx.b = 2
        rdi.b = 3
        goto label_142c89502
    
    result.b = 0
__security_check_cookie(var_38 ^ &var_f8)
return result
