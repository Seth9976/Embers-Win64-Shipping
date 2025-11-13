// 函数: sub_142bcaff0
// 地址: 0x142bcaff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = sub_142b97060(arg2, *arg1, arg3)

if (result == 0)
    result = sub_142b96aa0(arg2, &data_143687c80, &arg1[1])
    
    if (result == 0)
        int16_t rcx_2 = arg1[1].w
        
        if ((0xfeff & (rcx_2 - 0x200)) != 0)
            return 2
        
        int32_t rax_2 = 0x76
        
        if (arg1[1].w == 0x300)
            rax_2 = 0x94
        
        if (arg1[2] u< rax_2)
            return 2
        
        if (rcx_2 == 0x200)
            *(arg1 + 0x84) = 0
            arg1[0x23] = 0
        
        if ((arg1[0x12].b & 1) != 0)
            return 2
        
        result = sub_142b97060(arg2, *arg1, arg3)
        
        if (result == 0)
            return sub_142b96670(arg2, arg1[2], &arg1[0x28])

return result
