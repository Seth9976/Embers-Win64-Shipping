// 函数: sub_14292b100
// 地址: 0x14292b100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int32_t var_18
int32_t arg_20

if (sub_14292b370(arg1, arg2, arg3, &arg_20, &var_18) != 0)
    uint64_t r11_2 = zx.q(arg_20 + 0x10bd9)
    int32_t r9_3 = (r11_2 << 2).d s/ 0x23ab1
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r9_3 * 0x23ab1 + 3)
    int32_t r11_3 = r11_2.d + neg.d((temp3_1 + (temp2_1 & 3)) s>> 2)
    int32_t r8_2 = (r11_3 + 1) * 0xfa0 s/ 0x164b09
    int32_t temp6_1
    int32_t temp7_1
    temp6_1:temp7_1 = sx.q(r8_2 * 0x5b5)
    uint64_t r11_4 = zx.q(r11_3 + 0x1f - ((temp7_1 + (temp6_1 & 3)) s>> 2))
    int32_t r10_3 = ((r11_4 * 5).d << 4) s/ 0x98f
    uint64_t rdx_12 = zx.q(r10_3 s/ 0xb)
    int32_t rcx_8 = (r9_3 - 0x44) * 0x64 + rdx_12.d + r8_2
    
    if (rcx_8 u<= 0x1fa3)
        int32_t r9_4 = var_18
        arg1[5] = rcx_8
        arg1[3] = r11_4.d - r10_3 * 0x98f s/ 0x50
        arg1[4] = r10_3 - ((rdx_12 * 3).d << 2) + 1
        arg1[2] = r9_4 s/ 0xe10
        arg1[1] = r9_4 s/ 0x3c s% 0x3c
        *arg1 = r9_4 s% 0x3c
        return 1

return 0
