// 函数: sub_140e645a0
// 地址: 0x140e645a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result
int64_t rdx_1
result, rdx_1 = sub_140db2e10(arg1, 1)
int64_t* rcx = *(arg1 + 0x20)

if (rcx == 0)
    return result

rdx_1.b = 1
jump(*(*rcx + 0xe8))
