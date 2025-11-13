// 函数: sub_1427c8690
// 地址: 0x1427c8690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int32_t rdi = arg3

if (arg2 == 0)
    _wassert(deviceCtxt != nullptr", c:\dev\dev-rendering\engine\source\thirdparty\i"
    "ntelmetricsdiscovery\metricsdiscoveryhelper\source\range_metrics_dx11.cpp", 0xa0)

if (rdi + arg4 u> *(arg1 + 0x28))
    _wassert(firstRangeIndex + numRanges <= ReportMemory.NumReportsAllocated", c:\dev\dev-rendering"
    "ngine\source\thirdparty\intelmetricsdiscovery\metricsdiscoveryhelper\source\range_metrics_dx11."
    "cpp", 0xa1)

if (*(arg1 + 0x18) == 0)
    _wassert(D3D11Async != nullptr", c:\dev\dev-rendering\engine\source\thirdparty\i"
    "ntelmetricsdiscovery\metricsdiscoveryhelper\source\range_metrics_dx11.cpp", 0xa2)

int64_t* result = sub_1427c7ea0(arg1 + 0x20, rdi)
int64_t* result_1 = result

if (result == 0)
    _wassert(reportData != nullptr", c:\dev\dev-rendering\engine\source\thirdparty\i"
    "ntelmetricsdiscovery\metricsdiscoveryhelper\source\range_metrics_dx11.cpp", 0xa5)
    result = result_1

char rcx_3 = *(arg1 + 0x41)
int64_t r12 = 0
int64_t var_58 = 0
int64_t* result_2
int32_t r15

if (rcx_3 == 0)
    result_2 = &var_58
    r15 = 8
else
    r15 = *(arg1 + 0x2c)
    result_2 = result

int32_t rbp = 0

if (arg4 != 0)
    do
        int64_t rdx_1 = *(arg1 + 0x18)
        uint64_t rdi_1 = zx.q(rdi + rbp) << 3
        
        if (*(rdi_1 + rdx_1) == 0)
            _wassert(D3D11Async[rangeIndex] != nullptr", c:\dev\dev-rendering\engine\source\t"
            "hirdparty\intelmetricsdiscovery\metricsdiscoveryhelper\source\range_metrics_dx11.cpp", 
                0xb8)
            rdx_1 = *(arg1 + 0x18)
        
        result = (*(*arg2 + 0xe8))(arg2, *(rdi_1 + rdx_1), result_2, zx.q(r15), 0)
        
        while (result.d != 0)
            Sleep(1)
            result = (*(*arg2 + 0xe8))(arg2, *(*(arg1 + 0x18) + rdi_1), result_2, zx.q(r15), 1)
        
        rdi = arg3
        rbp += 1
    while (rbp u< arg4)
    
    rcx_3 = *(arg1 + 0x41)
    r12 = var_58

if (rcx_3 == 0)
    result = memcpy(result_1, r12, *(arg1 + 0x2c) * arg4)

__security_check_cookie(rax_1 ^ &var_98)
return result
