// 函数: sub_1420e6460
// 地址: 0x1420e6460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    int64_t result
    result.b = 0
    return result

int32_t rbx = *(arg1 + 0xec)
char rax = sub_140b5b8a0(arg1[0x1d].d, 0)
int32_t rcx
rcx.b = rbx == 0
char rax_1
int32_t rcx_1

if ((rcx.b & rax) == 0)
    int32_t rbx_1 = *(arg1 + 0xec)
    rax_1 = sub_140b5b8a0(arg1[0x1d].d, 0x11a)
    rcx_1.b = rbx_1 == 0

if ((rcx.b & rax) != 0 || (rcx_1.b & rax_1) != 0)
    if (sub_141dcdc50(arg1) == 3)
        return arg1[0x1e].b != 0
else if (sub_141dcdc50(arg1) == 3)
    return arg1[0x1e].b != 0

return *(arg1 + 0x5f) != 0
