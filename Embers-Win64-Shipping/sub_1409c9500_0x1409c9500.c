// 函数: sub_1409c9500
// 地址: 0x1409c9500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_18[0x4]
int32_t* result = sub_1409ca9d0(arg1, &var_18, arg2)
int32_t* rbx = *(result + 8)

if (rbx == 0)
    return result

*rbx = *arg3
*(rbx + 8) = 0
int64_t rdi_1 = sx.q(arg3[4])
int64_t rsi_1 = *(arg3 + 8)
rbx[4] = rdi_1.d

if (rdi_1.d != 0)
    sub_1405c4a90(&rbx[2], rdi_1.d, 0)
    return memcpy(*(rbx + 8), rsi_1, (rdi_1 << 2).d)

rbx[5] = 0
return 0
