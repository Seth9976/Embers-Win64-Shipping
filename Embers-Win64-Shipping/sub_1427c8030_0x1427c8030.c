// 函数: sub_1427c8030
// 地址: 0x1427c8030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    _wassert(mdMetricSet != nullptr", c:\dev\dev-rendering\engine\source\thirdparty\i"
    "ntelmetricsdiscovery\metricsdiscoveryhelper\source\report_memory.cpp", (arg2 + 0x21).d)

if (arg4 u> 1)
    _wassert(reportType == MDH_RANGE_METRICS_REPORT || reportType == MDH_PERIODIC_METRICS_REPORT", 
    "c:\dev\dev-rendering\engine\source\thirdparty\intelmetricsdiscovery\metricsdiscoveryhelper\s"
    "ource\report_memory.cpp", 0x22)

void* rax_1 = (*(*arg2 + 8))(arg2)

if (rax_1 == 0)
    _wassert(metricSetParams != nullptr", c:\dev\dev-rendering\engine\source\thirdparty\i"
    "ntelmetricsdiscovery\metricsdiscoveryhelper\source\report_memory.cpp", (rax_1 + 0x25).d)

arg1[1].d = arg3

if (arg4 == 0)
    *(arg1 + 0xc) = *(rax_1 + 0x1c)
else if (arg4 == 1)
    *(arg1 + 0xc) = *(rax_1 + 0x18)

int64_t result = j_sub_140a82f30(zx.q(*(arg1 + 0xc) * arg3))
*arg1 = result

if (result != 0)
    return result

return _wassert(ReportData != nullptr", c:\dev\dev-rendering\engine\source\thirdparty\i"
"ntelmetricsdiscovery\metricsdiscoveryhelper\source\report_memory.cpp", (result + 0x33).d)
