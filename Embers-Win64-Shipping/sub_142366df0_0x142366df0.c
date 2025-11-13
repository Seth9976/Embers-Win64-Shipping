// 函数: sub_142366df0
// 地址: 0x142366df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** result = sub_140cddf60(arg1, arg2)
int64_t* rcx = arg1[0xa]

if (rcx != 0)
    result = sub_142366ad0(rcx, arg2)

int64_t* r8 = arg1[0xb]

if (r8 != 0)
    result = (sx.q(*(r8[2] + 0xc)) + sx.q(*(*r8 + 0xc)) * 6) * 2
    *(arg2 + 8) += result

return result
