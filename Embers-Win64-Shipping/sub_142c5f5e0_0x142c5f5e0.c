// 函数: sub_142c5f5e0
// 地址: 0x142c5f5e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = data_143ccb8b8(1, 0x7b0)

if (result != 0)
    result[0x87] = &data_1436b2b60
    __builtin_memset(&result[0x47], 0xff, 0x20)
    *(result + 0x64) = 0xffffffff
    result[0x2f] = -1
    sub_142c65340(result, 1)
    uint64_t var_18[0x2]
    int128_t zmm0 = *sub_142c59600(&var_18)
    *result = arg1
    *(result + 0x228) = zmm0
    *(result + 0x164) = *(arg1 + 0x590)
    *(result + 0x12c) = 4
    char* rax_2 = *(arg1 + 0x6c8)
    
    if (rax_2 == 0 || *rax_2 == 0)
        rax_2 = nullptr
    else
        rax_2.b = 1
    
    *(result + 0x3f5) = rax_2.b
    char rcx_2
    
    if (rax_2.b == 0 || *(result + 0x164) u> 2)
        rcx_2 = 0
    else
        rcx_2 = 1
    
    *(result + 0x3f6) = rcx_2
    
    if (rax_2.b == 0 || rcx_2 != 0)
        rax_2 = nullptr
    else
        rax_2.b = 1
    
    *(result + 0x3f7) = rax_2.b
    char* rax_3 = *(arg1 + 0x6d0)
    
    if (rax_3 != 0 && *rax_3 != 0)
        *(result + 0x3f5) = 1
        *(result + 0x3f7) = 1
    
    rax_3.b = *(arg1 + 0x780) != 0
    *(result + 0x3f9) = rax_3.b
    *(result + 0x401) = *(arg1 + 0x5da)
    result[0x7f].b = *(arg1 + 0x768) != 0
    *(result + 0x404) = *(arg1 + 0x5f4)
    *(result + 0x405) = *(arg1 + 0x5f5)
    *(result + 0x36a) = *(arg1 + 0x452)
    result[0x6d].b = *(arg1 + 0x450)
    *(result + 0x369) = *(arg1 + 0x451)
    *(result + 0x3b2) = *(arg1 + 0x4f2)
    result[0x76].b = *(arg1 + 0x4f0)
    *(result + 0x3b1) = *(arg1 + 0x4f1)
    result[0x89].d = *(arg1 + 0x5b0)
    char rax_14 = sub_142c53090(*(arg1 + 0xc0), 1)
    int64_t rax_15
    
    if (rax_14 != 0 && result[0x9f] == 0)
        rax_15 = data_143ccb8b8(0x4000, 1)
        result[0x9f] = rax_15
    
    if (rax_14 == 0 || result[0x9f] != 0 || rax_15 != 0)
        sub_142c69f40(&result[0x97], _guard_check_icall)
        sub_142c69f40(&result[0x9b], _guard_check_icall)
        int64_t rcx_6 = *(arg1 + 0x660)
        int64_t rax_16
        
        if (rcx_6 != 0)
            rax_16 = data_143ccb8b0(rcx_6)
            result[0xf1] = rax_16
        
        if (rcx_6 == 0 || rax_16 != 0)
            *(result + 0x794) = *(arg1 + 0x2d4)
            result[0xf2].w = *(arg1 + 0x2d0)
            result[0xa] = *(arg1 + 0x340)
            result[0xb] = *(arg1 + 0x348)
            return result
    
    sub_142c69e80(&result[0x97], 0)
    sub_142c69e80(&result[0x9b], 0)
    data_143ccb8a0(result[0x9f])
    data_143ccb8a0(result[0xf1])
    data_143ccb8a0(result)

return 0
