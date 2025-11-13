// 函数: sub_140b698e0
// 地址: 0x140b698e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
int32_t rsi = 0
TEB* gsbase

if (data_143e189a0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e189a0)
    
    if (data_143e189a0 == 0xffffffff)
        SYSTEM_INFO systemInfo
        GetNativeSystemInfo(&systemInfo)
        var_134
        memset(&var_134, 0, 0x118)
        OSVERSIONINFOW versionInformation
        versionInformation.dwOSVersionInfoSize = 0x11c
        
        if (GetVersionExW(&versionInformation) == 0)
            data_143e188a0 = 0
            _Init_thread_footer(&data_143e189a0)
        else
            wchar16 const* const var_178_1 = u"64bit"
            int16_t var_20
            uint32_t var_180_1 = zx.d(var_20)
            char var_1e
            uint32_t var_188_1 = zx.d(var_1e)
            uint32_t dwBuildNumber = versionInformation.dwBuildNumber
            uint32_t dwMinorVersion = versionInformation.dwMinorVersion
            sub_1405a6010(&data_143e188a0, 0x80, %d.%d.%d.%d.%d.%s", 
                zx.q(versionInformation.dwMajorVersion))
            _Init_thread_footer(&data_143e189a0)

*arg1 = 0
arg1[1] = 0

if (data_143e188a0 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while ((&data_143e188a0)[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(arg1, rbx_1.d + 1)
        rsi = arg1[1].d
    
    int32_t rcx_2 = rsi + rbx_1.d + 1
    arg1[1].d = rcx_2
    
    if (rcx_2 s> *(arg1 + 0xc))
        sub_140594770(arg1)
    
    UnDecorator::getReferenceType(*arg1, &data_143e188a0, (rbx_1.d + 1) * 2)

__security_check_cookie(rax_1 ^ &var_1b8)
return arg1
