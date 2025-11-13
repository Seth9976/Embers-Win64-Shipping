// 函数: sub_140a8a3d0
// 地址: 0x140a8a3d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi
rdi.b = 0
bool z

if (0 == *(arg1 + 0x10))
    *(arg1 + 0x10) = 0
    z = true
else
    *(arg1 + 0x10)
    z = false

if (not(z))
    return 0

while (data_143de5432 == 0)
    uint64_t arg_8
    uint32_t rax_2
    int64_t rdx_2
    float zmm6_1
    rax_2, rdx_2, zmm6_1 = sub_140a6ab40(arg1, &arg_8)
    
    if (rax_2 == 0xffffffff)
        rdi.b = 0
    else if (rdi.b == 0)
        rdi.b = 1
        
        if (rax_2 != 0xfffffffe)
            zmm6_1 = sub_140a835c0(arg1, rdx_2, rax_2)
    
    bool z_1
    
    if (0 == *(arg1 + 0x10))
        *(arg1 + 0x10) = 0
        z_1 = true
    else
        *(arg1 + 0x10)
        z_1 = false
    
    if (z_1 && data_143de5432 == 0)
        sub_140b732d0(zmm6_1)
    
    int64_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    int64_t performanceCount_1 = performanceCount
    int64_t rcx_3 = *(arg1 + 0x100)
    int64_t rdx_4 = performanceCount_1 - *(arg1 + 0xf8)
    *(arg1 + 0xf8) = performanceCount_1
    
    if (rdx_4 u<= rcx_3)
        rcx_3 = rdx_4
    
    *(arg1 + 0xf0) += rcx_3
    bool z_2
    
    if (0 == *(arg1 + 0x10))
        *(arg1 + 0x10) = 0
        z_2 = true
    else
        *(arg1 + 0x10)
        z_2 = false
    
    if (not(z_2))
        break

return 0
