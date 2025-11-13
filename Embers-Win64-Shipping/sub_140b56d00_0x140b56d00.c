// 函数: sub_140b56d00
// 地址: 0x140b56d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[4].d != 0)
    int64_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    int64_t var_28
    int64_t* rcx_1 = &var_28
    int128_t zmm6
    zmm6.q = float.d(performanceCount)
    bool cond:1_1 = arg1[4].d == 2
    var_28 = 0
    int32_t var_20_1 = 0
    zmm6.q = zmm6.q f* data_143d796f8
    zmm6.q = zmm6.q f+ 16777216.0
    zmm6.q = zmm6.q f- *arg1
    void* const rdx_2
    uint32_t r8_1
    
    if (cond:1_1)
        sub_1405947f0(rcx_1, 2)
        int32_t rax_2 = var_20_1 + 2
        var_20_1 = rax_2
        
        if (rax_2 s> 0)
            sub_140594770(&var_28)
        
        r8_1 = 4
        rdx_2 = &data_142d8c8c8
    else
        sub_1405947f0(rcx_1, 3)
        int32_t rax_1 = var_20_1 + 3
        var_20_1 = rax_1
        
        if (rax_1 s> 0)
            sub_140594770(&var_28)
        
        r8_1 = 6
        rdx_2 = &data_142e6c338
    
    int64_t rdi_1 = var_28
    UnDecorator::getReferenceType(rdi_1, rdx_2, r8_1)
    int64_t* rax = arg1[3]
    
    if (rax != 0)
        zmm6.q = zmm6.q f+ *rax
        *rax = zmm6.q
        rax = arg1[3]
        rax[1].d += 1
    
    if (rdi_1 != 0)
        sub_140a74f90(rdi_1)

int64_t rcx_6 = arg1[1]

if (rcx_6 == 0)
    return 

return sub_140a74f90(rcx_6) __tailcall
