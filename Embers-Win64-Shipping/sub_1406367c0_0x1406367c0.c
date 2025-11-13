// 函数: sub_1406367c0
// 地址: 0x1406367c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_20 = 0x20
int32_t var_18 = 0xffffffff
int32_t* var_28 = &data_143962350
int32_t rbx = arg1 - 0x80000000

if (arg1 u>= 0x80000000)
    rbx = arg1 - 0x80000000

int32_t rcx = arg2 - 0x80000000

if (arg2 u>= 0x80000000)
    rcx = arg2 - 0x80000000

int32_t rcx_1 = rcx - rbx
int32_t rax_2

if (rcx_1 != 0xffffffff)
    rax_2 = sub_140627d30(&var_28, rcx_1 + 1)
else
    rax_2 = sub_140643540(&var_28, arg2)

return zx.q(rbx + rax_2 - 0x80000000)
