// 函数: sub_14282b41c
// 地址: 0x14282b41c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_38
char rbx_1
int64_t r9_1
int128_t zmm1

if (*(arg1 + 0xa8) != 0)
    r9_1 = *(arg1 + 0xa8)
    rbx_1 = 1
    int128_t* rcx_1 =
        *(*(arg1 + 0x90) + (((*(arg1 + 0x98) - 1) & (*(arg1 + 0xa0) - 1 + r9_1)) << 3))
    zmm1 = rcx_1[1]
    var_38 = *rcx_1
    int128_t var_18_1 = rcx_1[2]
    int128_t var_28_1 = zmm1

int32_t* result

if (*(arg1 + 0xa8) == 0 || zmm1.q != *(arg1 + 0x110))
    result.b = 0
else
    *(arg1 + 0xa8) = r9_1 - 1
    
    if (r9_1 == 1)
        *(arg1 + 0xa0) &= r9_1 - 1
    
    if (*(arg1 + 0xc) != (var_38.q u>> 0x20).d || *(arg1 + 8) - var_38.d s> 0x400)
        rbx_1 = 0
        sub_14282b330(&var_38)
    else
        sub_14282b3f4(&var_38)
    
    result.b = rbx_1

return result
