// 函数: sub_141c4a520
// 地址: 0x141c4a520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

while (true)
    void* r9_1 = *arg1
    int32_t rax_1 = 0
    
    if (0 == *(r9_1 + 0x20))
        *(r9_1 + 0x20) = 0
    else
        rax_1 = *(r9_1 + 0x20)
    
    int32_t rax_2 = 0
    
    if (0 == *(r9_1 + 0x24))
        *(r9_1 + 0x24) = 0
    else
        rax_2 = *(r9_1 + 0x24)
    
    int32_t result
    
    if (rax_2 s< rax_1)
        result = rax_2 + *(r9_1 + 0x18) - rax_1
    else
        result = rax_2 - rax_1
    
    if (result s<= 0)
        return result
    
    int32_t rax_3 = 0
    
    if (0 == *(r9_1 + 0x20))
        *(r9_1 + 0x20) = 0
    else
        rax_3 = *(r9_1 + 0x20)
    
    int64_t* r8_2 = *(r9_1 + 0x10) + (sx.q(rax_3) << 3)
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rax_3 + 1)
    int64_t* rcx_3 = *r8_2
    *r8_2 = 0
    result = divs.dp.d(temp2_1:temp3_1, *(r9_1 + 0x18))
    *(r9_1 + 0x20)
    *(r9_1 + 0x20) = mods.dp.d(temp2_1:temp3_1, *(r9_1 + 0x18))
    int64_t* arg_8 = rcx_3
    
    if (rcx_3 == 0)
        return result
    
    int64_t* rcx_4 = *arg1
    (*(*rcx_4 + 0x18))(rcx_4, &arg_8, arg2)
    int64_t* rcx_5 = arg_8
    
    if (rcx_5 != 0)
        (**rcx_5)(rcx_5, 1)
