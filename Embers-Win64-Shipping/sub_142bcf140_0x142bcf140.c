// 函数: sub_142bcf140
// 地址: 0x142bcf140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x18)
int32_t result

if (sx.d(*(rcx + 0x62)) + 1 + sx.d(*(rcx + 0x1a)) u> rcx[1].d)
    result = sub_142b92690(rcx, 1, 0)
    
    if (result == 0)
        goto label_142bcf188
else
    result = 0
label_142bcf188:
    void* r9_3 = *(arg1 + 0x28)
    
    if (*(arg1 + 0x59) != 0)
        int64_t rdx = sx.q(*(r9_3 + 2))
        int32_t* r8 = *(r9_3 + 8) + (rdx << 3)
        int64_t rcx_2 = *(r9_3 + 0x10)
        *r8 = arg2 s>> 0xa
        r8[1] = arg3 s>> 0xa
        *(rdx + rcx_2) = 1
    
    *(r9_3 + 2) += 1

return result
