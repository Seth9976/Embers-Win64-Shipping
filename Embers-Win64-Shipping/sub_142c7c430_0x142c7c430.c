// 函数: sub_142c7c430
// 地址: 0x142c7c430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x73a) != 0 && sub_142c8f410(&arg1[0xe3], arg1) != 0)
    int32_t arg_8
    int32_t result
    int64_t r8_1
    int512_t entry_zmm2
    int512_t zmm2
    result, r8_1, zmm2 = sub_142c8fa60(&arg1[0xe3], arg1, 0, &arg_8, entry_zmm2)
    
    if (result != 0)
        return result
    
    if (arg_8 != 1)
        sub_142c64850(*arg1, "No known authentication mechanisms supported!\n", r8_1, zmm2)
        return 0x43
    
    arg1[0xe1].d = 6
    return result

arg1[0xe1].d = 0
return 0
