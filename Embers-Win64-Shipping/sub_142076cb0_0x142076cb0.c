// 函数: sub_142076cb0
// 地址: 0x142076cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx

if (arg2 != 0 && arg5 != 0)
    rcx = *(arg2 + 0x5a0)

int64_t rax_4

if (arg2 == 0 || arg5 == 0 || rcx == 0)
    rax_4 = 0
else
    rax_4 = (zx.q(arg3) * 3 + zx.q(arg4)) * 0x30 + rcx

*arg1 = rax_4
arg1[1].d = 0

if (rax_4 != 0 && data_143f47540 != 0)
    int64_t performanceCount
    
    if (data_143de5480 != 0)
        uint32_t rax_5
        rax_5.b = GetCurrentThreadId() == data_143de5470
        
        if (rax_5.b == 0)
            QueryPerformanceCounter(&performanceCount)
            arg1[1].d = performanceCount.d
            return arg1
    
    void* rdi_1 = *arg1
    int32_t rcx_2 = *(rdi_1 + 0x28)
    *(rdi_1 + 0x28) = rcx_2 + 1
    
    if (rcx_2 == 0 && data_143f47540 != rcx_2)
        QueryPerformanceCounter(&performanceCount)
        *(rdi_1 + 0x2c) = performanceCount.d

return arg1
