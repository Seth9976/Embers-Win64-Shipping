// 函数: sub_141369400
// 地址: 0x141369400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(arg1[1])
int32_t temp0 = divs.dp.d(temp2:temp3, 2)
int32_t temp1 = mods.dp.d(temp2:temp3, 2)
int32_t r9_1 = temp0 & 0x80000001

if (r9_1 s< 0)
    r9_1 = ((r9_1 - 1) | 0xfffffffe) + 1

int32_t temp8
int32_t temp9
temp8:temp9 = sx.q(temp0)
int32_t r8_2 = ((temp8 & 3) + temp9) s>> 2 & 0x80000001

if (r8_2 s< 0)
    r8_2 = ((r8_2 - 1) | 0xfffffffe) + 1

int64_t rcx = sx.q(*arg1)

if (((rcx.d u<= 0x1e && test_bit(0x6562c800, rcx.d)) || (*(&data_143f025fc + rcx * 0x14) & 1) != 0)
        && (temp1 == 1 || r9_1 == 1))
    if (r8_2 != 1)
        return 1
    
    if (temp1 == r8_2 && sub_14135d1e0(rcx.d) != 0)
        return 1

return 0
