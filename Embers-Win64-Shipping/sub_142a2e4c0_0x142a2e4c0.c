// 函数: sub_142a2e4c0
// 地址: 0x142a2e4c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = arg1 + arg2

if (rcx s> 0x7f)
    rcx = 0x7f
else if (rcx s< 0)
    rcx = 0

int32_t result = (*(&data_1436099b0 + (sx.q(rcx) << 2)) * 0x18ccd) s>> 0x10

if (result s< 8)
    return 8

return result
