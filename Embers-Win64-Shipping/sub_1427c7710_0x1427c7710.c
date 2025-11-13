// 函数: sub_1427c7710
// 地址: 0x1427c7710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

HMODULE hModule = arg1[1]

if (hModule != 0)
    if (*arg1 != 0)
        int64_t rax_1 = GetProcAddress(hModule, "CloseMetricsDevice")
        
        if (rax_1 != 0)
            rax_1(*arg1)
    
    HMODULE hLibModule = arg1[1]
    
    if (hLibModule == 0)
        _wassert(dllHandle != nullptr", c:\dev\dev-rendering\engine\source\thirdparty\i"
        "ntelmetricsdiscovery\metricsdiscoveryhelper\source\conte", (hLibModule + 0x66).d)
    
    FreeLibrary(hLibModule)

arg1[1] = 0
*arg1 = 0
return 0
