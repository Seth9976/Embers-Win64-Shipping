// 函数: sub_142b915d0
// 地址: 0x142b915d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 && arg2 == 0)
    return 0

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg1)
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(arg2)
uint64_t rflags
int32_t temp0_1
temp0_1, rflags = _bit_scan_reverse(((temp1 ^ temp0) - temp0) | ((temp3 ^ temp2) - temp2))
int32_t r8_1
int32_t r9_1

if (temp0_1 s> 0x1d)
    r9_1 = arg1 s>> (temp0_1.b - 0x1d)
    r8_1 = arg2 s>> (temp0_1.b - 0x1d)
else
    r9_1 = arg1 << (0x1d - temp0_1.b)
    r8_1 = arg2 << (0x1d - temp0_1.b)

int32_t arg_18 = r9_1
sub_142b9a550(&arg_18)
return zx.q(r8_1)
