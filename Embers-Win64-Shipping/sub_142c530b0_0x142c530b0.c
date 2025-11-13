// 函数: sub_142c530b0
// 地址: 0x142c530b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = nullptr
int64_t* i_1 = *(arg3 + 0x4c18)
int128_t var_28

if (i_1 != 0)
    int64_t* i
    
    do
        r14 = *i_1
        i = i_1[2]
        int128_t var_38 = *arg1
        var_28 = *(r14 + 0x18)
        
        if (sub_142c595d0(&var_28, &var_38) s> 0)
            break
        
        sub_142c6a090(arg3 + 0x4c18, i_1, 0)
        i_1 = i
    while (i != 0)

if (*(arg3 + 0x4c18) == 0)
    *(arg3 + 0x4bd0) = 0
    *(arg3 + 0x4bd8) = 0
    return 0

*(arg3 + 0x4bd0) = *(r14 + 0x18)
int64_t* rdx_2 = *(arg2 + 0xb0)
var_28 = *(r14 + 0x18)
*(arg2 + 0xb0) = sub_142c6a480(&var_28, rdx_2, arg3 + 0x4be0)
return 0
