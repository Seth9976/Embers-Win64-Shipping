// 函数: sub_1427c8110
// 地址: 0x1427c8110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    _wassert(mdMetricSet != nullptr", c:\dev\dev-rendering\engine\source\thirdparty\i"
    "ntelmetricsdiscovery\metricsdiscoveryhelper\source\report_memory.cpp", (arg2 + 0x4b).d)

void* rax_1 = (*(*arg2 + 8))(arg2)

if (rax_1 == 0)
    _wassert(metricSetParams != nullptr", c:\dev\dev-rendering\engine\source\thirdparty\i"
    "ntelmetricsdiscovery\metricsdiscoveryhelper\source\report_memory.cpp", (rax_1 + 0x4e).d)

int32_t r13 = *(rax_1 + 0x20)
int32_t rcx_2 = *(rax_1 + 0x24) + r13
*(arg1 + 0xc) = rcx_2
uint64_t rcx_3 = zx.q(rcx_2 * arg3)
arg1[1].d = arg3
int64_t rax_2 = 0x10 * rcx_3

if (mulu.dp.q(0x10, rcx_3) u>> 0x40 != zx.o(0))
    rax_2 = -1

int64_t result = j_sub_140a82f30(rax_2)
*arg1 = result

if (result == 0)
    result = _wassert(ReportValues != nullptr", c:\dev\dev-rendering\engine\source\thirdparty\i"
    "ntelmetricsdiscovery\metricsdiscoveryhelper\source\report_memory.cpp", (result + 0x56).d)

int32_t rbp = 0
int32_t rbx_1 = 1

if (r13 != 0)
    int32_t* r15_1 = nullptr
    
    do
        int64_t* rax_4 = (*(*arg2 + 0x10))(arg2, zx.q(rbp))
        
        if (rax_4 == 0)
            _wassert(metric != nullptr", c:\dev\dev-rendering\engine\source\thirdparty\i"
            "ntelmetricsdiscovery\metricsdiscoveryhelper\source\report_memory.cpp", 
                (rax_4 + 0x5a).d)
        
        int64_t rdx_1 = *rax_4
        void* rax_5 = (*(rdx_1 + 8))(rax_4, rdx_1)
        
        if (rax_5 == 0)
            _wassert(metricParams != nullptr", c:\dev\dev-rendering\engine\source\thirdparty\i"
            "ntelmetricsdiscovery\metricsdiscoveryhelper\source\report_memory.cpp", 
                (rax_5 + 0x5d).d)
        
        int32_t rax_6 = *(rax_5 + 0x38)
        int32_t rdx_2 = 5
        
        if (rax_6 == 0)
            rdx_2 = 0
        else if (rax_6 == 1)
            rdx_2 = 1
        else if (rax_6 == 2)
            rdx_2 = 3
        else if (rax_6 == 3)
            rdx_2 = 2
        
        result = *arg1
        rbp += 1
        *(r15_1 + result) = rdx_2
        r15_1 = &r15_1[4]
    while (rbp u< r13)

if (arg3 u> 1)
    do
        int32_t rax_9 = *(arg1 + 0xc)
        int64_t rdx_3 = *arg1
        result = memcpy((zx.q(rax_9 * rbx_1) << 4) + rdx_3, rdx_3, rax_9 << 4)
        rbx_1 += 1
    while (rbx_1 u< arg3)

return result
