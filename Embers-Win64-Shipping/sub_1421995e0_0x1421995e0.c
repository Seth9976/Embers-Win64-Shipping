// 函数: sub_1421995e0
// 地址: 0x1421995e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_18 = 0xffffffff
int64_t var_28 = 0
int32_t i_2 = 0
void* result
float zmm0
result, zmm0 = sub_140d3cc80(sub_14255cbc0(), &var_28, 1, 0x10, 0)
int32_t i = i_2
int32_t i_1 = var_18 + 1
int64_t rdx_1 = var_28
int32_t i_3 = i_1

if (i_1 s< i)
    do
        result = sx.q(i_1)
        
        if (*(rdx_1 + (result << 3)) != 0)
            break
        
        result = zx.q(i_1 + 1)
        i_3 = result.d
        i_1 = result.d
    while (result.d s< i)

while (i_1 s>= 0)
    if (i_1 s>= i)
        break
    
    int64_t* rbx_1 = *(rdx_1 + (sx.q(i_1) << 3))
    sub_142199780(rbx_1, 0, zmm0)
    float zmm0_1 = sub_142185b40(rbx_1, 1)
    *(rbx_1 + 0x432) |= 0x40
    rbx_1[0x9b].d = 0
    
    if (*(rbx_1 + 0x4dc) != 0)
        zmm0_1 = sub_1405c5570(&rbx_1[0x9a], 0)
    
    void* rcx_5 = rbx_1[0xca]
    
    if (rcx_5 != 0)
        int64_t rax_2 = 0
        
        if (0 == *(rcx_5 + 8))
            *(rcx_5 + 8) = 0
        else
            rax_2 = *(rcx_5 + 8)
        
        if (((rax_2 u>> 0x1a).b & 1) == 0)
            float zmm0_2 = sub_14218eae0(&data_143a2edd8)
            int64_t performanceCount
            QueryPerformanceCounter(&performanceCount)
            
            while (*(rbx_1 + 0x434) != 0)
                zmm0_2 = sub_140b732d0((zx.o(0)).d)
            
            int64_t performanceCount_1
            QueryPerformanceCounter(&performanceCount_1)
            zmm0_1 = sub_14218e220(rbx_1, zmm0_2)
    
    if ((*(rbx_1 + 0x432) & 0x40) != 0)
        sub_142187c60(rbx_1, rbx_1[0x81], zmm0_1)
        sub_141ee8490(rbx_1)
    
    result, zmm0 = sub_141ef27a0(rbx_1)
    i = i_2
    i_1 = i_3 + 1
    rdx_1 = var_28
    i_3 = i_1
    
    if (i_1 s< i)
        do
            result = sx.q(i_1)
            
            if (*(rdx_1 + (result << 3)) != 0)
                break
            
            result = zx.q(i_1 + 1)
            i_3 = result.d
            i_1 = result.d
        while (result.d s< i)

if (rdx_1 == 0)
    return result

return sub_140a74f90(rdx_1)
