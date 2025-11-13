// 函数: sub_140a4f990
// 地址: 0x140a4f990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = arg1[1]
int64_t rcx = 4

if (arg1[2] != 0 || rbx u> 4)
    rcx = rbx + 0x10 + ((rbx * 3) u>> 3)

int64_t result = sub_140a846a0(rcx, 0)

if (rbx s> result)
    result = 0x7fffffffffffffff

arg1[2] = result
int64_t rcx_2 = *arg1

if (rcx_2 != 0 || result != 0)
    result = sub_140a84c80(rcx_2, result, 0)
    *arg1 = result

return result
