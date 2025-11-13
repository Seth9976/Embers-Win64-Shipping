// 函数: sub_142008f10
// 地址: 0x142008f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (arg2 != 0)
    int64_t rax_1 = (*(*arg2 + 0x58))(arg2)
    int64_t r8_1 = *arg1
    
    if ((*(r8_1 + 0x58))(arg1, arg3, r8_1) == rax_1 && arg1[2].w == arg2[2].w
            && *(arg1 + 0x32) == *(arg2 + 0x32) && arg1[3] == arg2[3])
        uint32_t zmm0[0x4] = *(arg1 + 0x2c)
        zmm0[0] = zmm0[0] f- *(arg2 + 0x2c)
        
        if (not(__andps_xmmxud_memxud(zmm0, data_142d3f770)[0] f> 9.99999994e-09f))
            result.b = 1
            return result

result.b = 0
return result
