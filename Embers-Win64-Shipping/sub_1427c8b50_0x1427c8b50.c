// 函数: sub_1427c8b50
// 地址: 0x1427c8b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_b8 = -2
void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8

if (arg4 == 0)
    _wassert(reportMemory != nullptr", c:\dev\dev-rendering\engine\source\thirdparty\i"
    "ntelmetricsdiscovery\metricsdiscoveryhelper\source\equations.cpp", (arg4 + 0x25).d)

if (arg5 == 0)
    _wassert(reportValues != nullptr", c:\dev\dev-rendering\engine\source\thirdparty\i"
    "ntelmetricsdiscovery\metricsdiscoveryhelper\source\equations.cpp", (arg5 + 0x26).d)

struct MetricsDiscoveryInternal::Stack<struct MetricsDiscovery::STypedValue_1_0>::VTable* var_a8
memset(&var_a8, 0, 0x58)
sub_1427c8d70(&var_a8, arg1)
sub_1427caa00(&var_a8, 0)
int32_t rsi_2 = arg6 & 2
int32_t r12_1 = arg6 & 1

if (r12_1 != 0)
    if (rsi_2 != 0)
        _wassert((equations & MDH_EQUATION_READ_PERIODIC) == 0", c:\dev\dev-rendering\engine\source"
        "hirdparty\intelmetricsdiscovery\metricsdiscoveryhelper\source\equations.cpp", 0x2c)
    
    if (arg3 != 0)
        _wassert(prevReportMemory == nullptr", c:\dev\dev-rendering\engine\source\thirdparty\i"
        "ntelmetricsdiscovery\metricsdiscoveryhelper\source\equations.cpp", 0x2d)
    
    sub_1427ca900(&var_a8, arg4, arg5, arg2)

if (rsi_2 != 0)
    if (r12_1 != 0)
        _wassert((equations & MDH_EQUATION_READ_RANGE) == 0", c:\dev\dev-rendering\engine\source\t"
        "hirdparty\intelmetricsdiscovery\metricsdiscoveryhelper\source\equations.cpp", 0x31)
    
    if (arg3 == 0)
        _wassert(prevReportMemory != nullptr", c:\dev\dev-rendering\engine\source\thirdparty\i"
        "ntelmetricsdiscovery\metricsdiscoveryhelper\source\equations.cpp", (arg3 + 0x32).d)
    
    sub_1427ca7d0(&var_a8, arg4, arg3, arg5, arg2)

if ((arg6.b & 8) != 0)
    sub_1427ca430(&var_a8, arg5, arg5, arg2)

if ((arg6.b & 4) != 0)
    if (arg2 == 0)
        _wassert(mdMetricSet != nullptr", c:\dev\dev-rendering\engine\source\thirdparty\i"
        "ntelmetricsdiscovery\metricsdiscoveryhelper\source\equations.cpp", (arg2 + 0x39).d)
    
    int64_t rax_3 = (*(*arg2 + 8))(arg2)
    
    if (rax_3 == 0)
        _wassert(mdMetricSet->GetParams() != nullptr", c:\dev\dev-rendering\engine\source\thirdparty"
        "ntelmetricsdiscovery\metricsdiscoveryhelper\source\equations.cpp", (rax_3 + 0x3a).d)
    
    sub_1427ca620(&var_a8, arg4, &arg5[zx.q(*((*(*arg2 + 8))(arg2) + 0x20))], arg2)

int64_t result = sub_1427c8db0(&var_a8)
__security_check_cookie(rax_1 ^ &var_e8)
return result
