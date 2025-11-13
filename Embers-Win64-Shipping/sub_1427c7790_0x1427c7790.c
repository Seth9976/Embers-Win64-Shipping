// 函数: sub_1427c7790
// 地址: 0x1427c7790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg1 != 0)
    _wassert(MDDevice == nullptr", c:\dev\dev-rendering\engine\source\thirdparty\i"
    "ntelmetricsdiscovery\metricsdiscoveryhelper\source\conte", 0x76)

if (arg1[1] != 0)
    _wassert(DLLHandle == nullptr", c:\dev\dev-rendering\engine\source\thirdparty\i"
    "ntelmetricsdiscovery\metricsdiscoveryhelper\source\conte", 0x77)

HMODULE hModule = sub_1427c7c20()
arg1[1] = hModule

if (hModule == 0)
    return 1

int64_t rax_1 = GetProcAddress(hModule, "OpenMetricsDevice")

if (rax_1 != 0)
    int32_t result = rax_1(arg1)
    
    if (result == 0 && *arg1 != 0)
        return result

sub_1427c7710(arg1)
return 2
