// 函数: sub_1417deef0
// 地址: 0x1417deef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *(arg1 + 0x70)
bool z

if (0 == *(rdx + 8))
    *(rdx + 8) = 0
    z = true
else
    *(rdx + 8)
    z = false

int64_t var_18
int64_t rbx

if (z)
    var_18 = 0
    rbx = 0
    int64_t var_10_1 = 0
else
    rbx = *(rdx + 0x20)
    *(rdx + 0x20) = 0
    int64_t var_10
    var_10.d = *(rdx + 0x28)
    var_10:4.d = *(rdx + 0x2c)
    *(rdx + 0x28) = 0
    var_18 = rbx

int64_t result = sub_1417d85f0(arg1 + 0x50, &var_18)

if (rbx == 0)
    return result

return sub_140a74f90(rbx) __tailcall
