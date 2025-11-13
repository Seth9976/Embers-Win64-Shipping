// 函数: sub_1409e2b40
// 地址: 0x1409e2b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = (*(*arg1 + 0x260))()

if (result.b == 0)
    arg1[0xa3].b = 1
    char performanceCount = result.b
    char arg_9 = arg2
    void*** rax_1 = j_sub_140a82f30(0x10)
    int64_t rdi_1 = 0
    
    if (rax_1 == 0)
        rax_1 = nullptr
    else
        *rax_1 = &data_142e3f8f8
        rax_1[1].w = performanceCount.w
        *(rax_1 + 0xa) = arg3
    
    performanceCount.q = rax_1
    sub_1409afc10(arg1, &performanceCount)
    *(arg1 + 0x519) = arg2
    *(arg1 + 0x51a) = arg3
    QueryPerformanceCounter(&performanceCount)
    int64_t* rsi_1 = arg1[0x77]
    uint64_t rcx_3 = sx.q(arg1[0x78].d)
    int64_t var_38
    int64_t* result_1 = &var_38
    int64_t rbp_1 = 0
    int64_t r13
    r13.b = (arg2 & 0xfd) == 0
    uint64_t r14_2 = rcx_3 << 3 u>> 3
    
    if (rsi_1 u> &rsi_1[rcx_3])
        r14_2 = 0
    
    int64_t zmm0_1 = float.d(performanceCount.q) f* data_143d796f8 f+ 16777216.0
    var_38 = (zx.o(0)).q
    
    if (r14_2 != 0)
        do
            int64_t* rcx_4 = *rsi_1
            (*(*rcx_4 + 0x268))(rcx_4, arg1, zx.q(r13.b))
            rbp_1 += 1
            rsi_1 = &rsi_1[1]
        while (rbp_1 != r14_2)
        
        rcx_3 = zx.q(arg1[0x78].d)
    
    int64_t* rsi_2 = arg1[0x77]
    uint64_t r14_4 = sx.q(rcx_3.d) << 3 u>> 3
    
    if (rsi_2 u> &rsi_2[sx.q(rcx_3.d)])
        r14_4 = 0
    
    if (r14_4 != 0)
        do
            int64_t* rcx_5 = *rsi_2
            (*(*rcx_5 + 0x280))(rcx_5, arg1, zx.q(arg2), zx.q(arg3), zmm0_1, result_1)
            rdi_1 += 1
            rsi_2 = &rsi_2[1]
        while (rdi_1 != r14_4)
    
    sub_1409d9c70(&arg1[0x7b])
    sub_1409d9c70(&arg1[0x85])
    sub_1409d9c70(&arg1[0x8f])
    sub_1409d9c70(&arg1[0x99])
    QueryPerformanceCounter(&performanceCount)
    result = result_1
    *result = float.d(performanceCount.q) f* data_143d796f8 + 16777216.0 f- zmm0_1 f+ *result

return result
