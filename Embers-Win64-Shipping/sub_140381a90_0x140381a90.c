// 函数: sub_140381a90
// 地址: 0x140381a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0 = divs.dp.d(sx.q(sx.d(arg2) * 0x9a7), arg7 s/ 0x3e8)
int32_t r9 = sx.d(temp0.w)
int32_t r8_3 = ((temp0 s>> 0xf) + 1) s>> 1
int32_t r10_4 = (zx.d(temp0.w) * r9) s>> 0x10
int32_t var_30 = 0x10000000 - temp0 * 0x1d7
int32_t var_28 = 0x10000000 - temp0 * 0x1d7
int32_t rsi_1 = (0x10000000 - temp0 * 0x1d7) s>> 6
uint32_t r11_3 = zx.d(rsi_1.w)
int32_t var_2c = neg.d(0x10000000 - temp0 * 0x1d7) * 2
int32_t rbx_3 = rsi_1 s>> 0x10
int32_t rcx_6 = temp0 s>> 0x10
int32_t rdx_2 = sx.d((r8_3.w + rcx_6.w) * temp0.w + r10_4.w)
int32_t var_38 = ((((rcx_6 * r9 - 0x800000 + r10_4 + r8_3 * temp0) s>> 0xf) + 1) s>> 1) * rsi_1
    + ((r11_3 * rdx_2) s>> 0x10) + rbx_3 * rdx_2
int32_t rcx_17 = sx.d(rsi_1.w)
int32_t var_34 =
    (((rsi_1 s>> 0xf) + 1) s>> 1) * rsi_1 + ((rcx_17 * r11_3) s>> 0x10) + rcx_17 * rbx_3
void** result = sub_140385000(arg1, &var_30, &var_38, arg4, arg3, arg5, arg6)

if (arg6 != 2)
    return result

return sub_140385000(arg1 + 4, &var_30, &var_38, &arg4[2], arg3 + 4, arg5, arg6)
