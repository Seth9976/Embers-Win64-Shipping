// 函数: sub_142197c40
// 地址: 0x142197c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce3290(arg1)
sub_140cd85e0(arg1[6])
int64_t* rcx_1 = arg1[0xa]

if (rcx_1 != 0)
    sub_140cd85e0(rcx_1)

int64_t* rbx = arg1[7]
int64_t rdi_1 = 0
void* result = &rbx[arg1[8]]
uint64_t rsi_1 = sx.q(arg1[8].d) << 3 u>> 3

if (rbx u> result)
    rsi_1 = 0

if (rsi_1 != 0)
    do
        result = sub_140cd85e0(*rbx)
        rdi_1 += 1
        rbx = &rbx[1]
    while (rdi_1 != rsi_1)

return result
