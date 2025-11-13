// 函数: sub_1427c8470
// 地址: 0x1427c8470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg3
uint64_t i_4 = zx.q(arg4)

if (*arg1 == 0)
    _wassert(MDDevice != nullptr", c:\dev\dev-rendering\engine\source\thirdparty\i"
    "ntelmetricsdiscovery\metricsdiscoveryhelper\source\range_metrics_dx11.cpp", 0xca)

if (arg1[2] == 0)
    _wassert(MDMetricSet != nullptr", c:\dev\dev-rendering\engine\source\thirdparty\i"
    "ntelmetricsdiscovery\metricsdiscoveryhelper\source\range_metrics_dx11.cpp", 0xcb)

int32_t result = rbx + i_4.d

if (result u> arg1[5].d)
    result = _wassert(firstRangeIndex + numRanges <= ReportMemory.NumReportsAllocated", c:\dev\d"
    "ev-rendering\engine\source\thirdparty\intelmetricsdiscovery\metricsdiscoveryhelper\source\r"
    "ange_metrics_dx11.cpp", 0xcc)

if (arg1[8].b != 0)
    int64_t* r12_1 = arg1[2]
    
    if (i_4.d != 0)
        uint64_t i_3 = i_4
        uint64_t i
        
        do
            int64_t rbp_1 = *r12_1
            int32_t rsi_2 = *(arg1 + 0x3c) << 4
            int64_t rax = sub_1427c7f10(&arg1[6], rbx)
            int32_t var_40
            var_40.q = 0
            int64_t var_48
            var_48.d = rsi_2
            result = (*(rbp_1 + 0x48))(r12_1, sub_1427c7ea0(&arg1[4], rbx), zx.q(*(arg1 + 0x2c)), 
                rax, var_48, 0, 0)
            
            if (result != 0)
                result = _wassert(cc == MetricsDiscovery::CC_OK", c:\dev\dev-rendering\engine\source"
                "hirdparty\intelmetricsdiscovery\metricsdiscoveryhelper\source\range_metrics_dx11."
                "cpp", 0xd9)
            
            rbx += 1
            i = i_3
            i_3 -= 1
        while (i != 1)
else if (i_4.d != 0)
    uint64_t i_2 = i_4
    uint64_t i_1
    
    do
        int128_t* rax_2 = sub_1427c7f10(&arg1[6], rbx)
        int64_t rax_3 = sub_1427c7ea0(&arg1[4], rbx)
        result = sub_1427c8b50(*arg1, arg1[2], 0, rax_3, rax_2, 0xd)
        rbx += 1
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

return result
