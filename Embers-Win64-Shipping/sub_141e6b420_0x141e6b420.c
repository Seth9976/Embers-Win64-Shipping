// 函数: sub_141e6b420
// 地址: 0x141e6b420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm1 = sub_141ef3930(arg1, arg2)

if ((arg2[5].b & 1) != 0 && arg2[8].d s< 0xd9)
    *(arg1 + 0x224) = *(arg1 + 0x228)

if (arg2[8].d s>= 0x119)
    int32_t var_10_1 = 1
    int32_t var_10_2 = 1
    zmm1 = sub_140bcfa90(arg1 + 0x2a0, arg2, arg1, 
        sub_140bcfa90(arg1 + 0x280, arg2, arg1, zmm1, 0xff, 0), 0xff, 0)

int32_t var_10_3 = 1
int512_t zmm1_2 = sub_140bcfa90(arg1 + 0x2c0, arg2, arg1, zmm1, 0xff, 0)
int64_t* rcx_3 = arg2[1]
uint32_t result
uint32_t result_1

if ((arg2[5].b & 1) == 0)
    result_1 = *(arg1 + 0x260)
    uint32_t* rdx_5 = *rcx_3
    
    if (&rdx_5[1] u> rcx_3[1])
        int32_t* rdx_6 = &result_1
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            result = sub_140b54070(arg2, rdx_6, zmm1_2)
        else
            result = (*(*arg2 + 0x150))(arg2, rdx_6, 4)
    else
        result = *rdx_5
        result_1 = result
        *rcx_3 += 4
else
    int32_t* rdx_3 = *rcx_3
    
    if (&rdx_3[1] u> rcx_3[1])
        int32_t* rdx_4 = &result_1
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, rdx_4, zmm1_2)
        else
            (*(*arg2 + 0x150))(arg2, rdx_4, 4)
    else
        result_1 = *rdx_3
        *rcx_3 += 4
    
    if (result_1 s< 2)
        result = 0
        *(arg1 + 0x260) = 0
    else if (sub_140bc7f20(arg1 + 0x280) == 0)
        result = 0
        *(arg1 + 0x260) = 0
    else
        result = result_1
        *(arg1 + 0x260) = result

if ((arg2[5].b & 1) != 0 && arg2[8].d s< 0x119 && *(arg1 + 0x260) == 2)
    result = (divu.dp.q(0:(sub_140bc7f20(arg1 + 0x2c0) u>> 3), 
        sx.q(*(arg1 + 0x24c) * *(arg1 + 0x248) * *(arg1 + 0x244)))).d
    
    if (result s<= 1)
        result = 1
    
    *(arg1 + 0x240) = result

return result
