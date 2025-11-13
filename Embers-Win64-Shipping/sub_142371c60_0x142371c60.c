// 函数: sub_142371c60
// 地址: 0x142371c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = (*(*arg1 + 0x320))()
int32_t rcx = 4

if (result.d == 2)
    rcx = 2

arg1[0x6b].d = rcx

if (arg3 != 0)
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(arg3)
    result = zx.q(divs.dp.d(temp2_1:temp3_1, rcx))
    
    if (mods.dp.d(temp2_1:temp3_1, rcx) == 0)
        uint32_t count = arg3
        int64_t var_28 = 0
        int64_t rbp_1 = 0
        int32_t var_1c_1 = 0
        
        if (arg3 s> 0)
            sub_1405daba0(&var_28)
            count = arg3
            rbp_1 = var_28
        
        memcpy(rbp_1, arg2, arg3)
        result = j_sub_140a82f30(0x18)
        uint64_t result_1 = result
        
        if (result != 0)
            *result = 0
            *(result + 8) = 0
            *(result + 0x10) = count
            
            if (count != 0)
                sub_1405da9e0(result + 8, count, 0)
                memcpy(*(result_1 + 8), rbp_1, count)
            else
                *(result + 0x14) = 0
            
            result = arg1[0x62]
            arg1[0x62] = result_1
            *result = result_1
        
        arg1[0x64].d
        arg1[0x64].d += arg3
        int64_t rcx_5 = var_28
        
        if (rcx_5 != 0)
            return sub_140a74f90(rcx_5)

return result
