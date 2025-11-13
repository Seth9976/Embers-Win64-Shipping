// 函数: sub_1423cc310
// 地址: 0x1423cc310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0xe0)
void* result

if (rcx == 0)
label_1423cc3c4:
    result = *(arg1 + 0x78)
    
    if (arg2 == 0 || result == 0 || *(result + 0x58) == 0)
        result.b = 0
        return result
    
    if (__andps_xmmxud_memxud(*(result + 0x34), data_142d3f770)[0] f<= 9.99999994e-09f)
        result.b = 0
        return result
    
    uint32_t zmm0[0x4] = data_143f13d4c
    zmm0[0] = zmm0[0] f- *(result + 0x38)
    zmm0[0] = zmm0[0] f* *(result + 0x3c)
    
    if (not(zmm0[0] f< 1f))
        result.b = 0
        return result
else
    if (data_143de5432 != 0 || *(arg1 + 0x78) == 0)
        (*(*rcx + 0x20))()
    
    int32_t rdi_1
    rdi_1.b = data_143f138f4 == 0
    
    if (((*(arg1 + 8) u>> 0xf).b & 1) != 0)
        int64_t* rcx_1 = *(arg1 + 0xe0)
        
        if ((*(*rcx_1 + 0x28))(rcx_1) == 2)
            rdi_1 = 4
    
    sub_14239a540(*(arg1 + 0xe0), rdi_1)
    
    if (*(*(arg1 + 0xe0) + 0x58) == 0)
        int64_t* rcx_4 = *(arg1 + 0xe0)
        *(arg1 + 0xe0) = 0
        
        if (rcx_4 != 0)
            sub_142394bb0(rcx_4)
        
        goto label_1423cc3c4

result.b = 1
return result
