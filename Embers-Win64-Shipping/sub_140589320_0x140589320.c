// 函数: sub_140589320
// 地址: 0x140589320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = arg2
char* var_18 = arg2
int32_t var_28 = 0
*(arg2 + 0x10) = 0
*(arg2 + 0x18) = 0xf
*arg2 = 0
int32_t var_28_1 = 2
char rdx = (*(arg1 + 0x88)).b
int64_t r9_1

if ((rdx & 2) == 0)
    r9_1 = **(arg1 + 0x58)

int64_t rdx_1

if ((rdx & 2) == 0 && r9_1 != 0)
    rdx_1 = **(arg1 + 0x38)
    int64_t var_20 = r9_1
    int64_t* r8_1 = &var_20
    
    if (r9_1 u< *(arg1 + 0x80))
        r8_1 = arg1 + 0x80
    
    sub_14058ad40(result, rdx_1, *r8_1 - rdx_1)
else if ((rdx & 4) == 0)
    int64_t r9_2 = **(arg1 + 0x50)
    
    if (r9_2 != 0)
        rdx_1 = **(arg1 + 0x30)
        sub_14058ad40(result, rdx_1, sx.q(**(arg1 + 0x68)) - rdx_1 + r9_2)
return result
