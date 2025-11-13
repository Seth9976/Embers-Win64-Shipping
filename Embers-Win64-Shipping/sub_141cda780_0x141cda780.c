// 函数: sub_141cda780
// 地址: 0x141cda780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8_1
int32_t temp0_1
int32_t temp1_1

if (arg2 s>= 0 && arg2 s< *(arg1 + 0x148))
    r8_1 = arg1 + 0x150
    void* rax = *(r8_1 + 0x10)
    
    if (rax != 0)
        r8_1 = rax
    
    temp0_1:temp1_1 = sx.q(arg2)

char result

if (arg2 s< 0 || arg2 s>= *(arg1 + 0x148)
        || (*(r8_1 + (sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5) << 2)) & 1 << (arg2.b & 0x1f)) == 0)
    result = 0
else
    result = 1

if (result != 0)
    return result

int32_t var_18[0x4]
int64_t* rcx_3 = *(sub_1409cacd0(arg1 + 0x140, &var_18, arg2) + 8)

if (rcx_3 != 0)
    *rcx_3 = 0
    rcx_3[1] = 0

return sub_14090bdf0(arg1 + 0x330, arg2)
