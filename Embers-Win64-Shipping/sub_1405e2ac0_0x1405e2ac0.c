// 函数: sub_1405e2ac0
// 地址: 0x1405e2ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce3290(arg1)
int64_t* rbx = arg1[9]
int64_t rdi_1 = 0
void* result = &rbx[arg1[0xa]]
uint64_t rsi_1 = sx.q(arg1[0xa].d) << 3 u>> 3

if (rbx u> result)
    rsi_1 = 0

if (rsi_1 != 0)
    do
        result = sub_140cd85e0(*rbx)
        rdi_1 += 1
        rbx = &rbx[1]
    while (rdi_1 != rsi_1)

return result
