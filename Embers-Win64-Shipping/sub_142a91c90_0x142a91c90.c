// 函数: sub_142a91c90
// 地址: 0x142a91c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = arg1

if (*arg4 s> 0)
    if (arg2 != 0 && *(arg2 + 0x19) != 0)
        sub_142a91400()
        sub_142a860a0(&data_144015c00)
        int32_t rax_1 = *(arg2 + 4)
        
        if (rax_1 != 0)
            *(arg2 + 4) = rax_1 - 1
        
        if (*(arg2 + 4) u<= 0 && *(arg2 + 0x18) == 0)
            sub_142a91b50(arg2)
        
        sub_142a91400()
        sub_142a860d0(&data_144015c00)
    
    return result

int64_t r14

if (result != 0)
    r14.b = 1
else
    int64_t* result_1 = sub_142a7dd00(0x120)
    result = result_1
    
    if (result_1 == 0)
        *arg4 = 7
        sub_142a92480(arg2)
        return nullptr
    
    r14.b = 0

memset(result, 0, 0x120)
*(result + 0x3d) = r14.b
result[6] = arg2
result[7].d = *(arg3 + 0xc)

if (*(arg3 + 8) == 0)
    result[0x1a].d = 0xffffffff
    result[1] = sub_142af71d0
    *result = sub_142af70a0
    result[9].d = *(arg2 + 0x28)
    result[0xb].b = *(*(arg2 + 0x10) + 0x47)
    *(result + 0x5e) = *(*(arg2 + 0x10) + 0x50)
    uint32_t count = sx.d(*(*(arg2 + 0x10) + 0x4c))
    *(result + 0x59) = count.b
    result[5] = &result[0x11]
    memcpy(&result[0x11], *(arg2 + 0x10) + 0x48, count)
    *(result + 0x11c) = 1

int64_t r9 = *(*(arg2 + 0x20) + 0x18)

if (r9 != 0)
    r9(result, arg3, arg4)
    
    if (*arg4 s> 0 && *(arg3 + 8) == 0)
        sub_142a84ad0(result, arg5)
        return nullptr

return result
