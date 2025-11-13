// 函数: sub_14058a7f0
// 地址: 0x14058a7f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* arg_10 = arg2
int64_t* result = arg2
int32_t var_18 = 0
*(arg2 + 0x10) = 0
*(arg2 + 0x18) = 0xf
*arg2 = 0
int32_t var_18_1 = 1
char rdx = (*(arg1 + 0x70)).b

if ((rdx & 2) == 0)
    int64_t r8_1 = **(arg1 + 0x40)
    
    if (r8_1 != 0)
        int64_t rdx_1 = **(arg1 + 0x20)
        
        if (r8_1 u< *(arg1 + 0x68))
            r8_1 = *(arg1 + 0x68)
        
        sub_14058ad40(result, rdx_1, r8_1 - rdx_1)
        return result

if ((rdx & 4) == 0)
    int64_t r9_1 = **(arg1 + 0x38)
    
    if (r9_1 != 0)
        int64_t rdx_2 = **(arg1 + 0x18)
        sub_14058ad40(result, rdx_2, sx.q(**(arg1 + 0x50)) - rdx_2 + r9_1)

return result
