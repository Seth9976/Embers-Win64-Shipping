// 函数: sub_140b0b2f0
// 地址: 0x140b0b2f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e74828
sub_140b19bc0()
void* rbx = &data_1439a4950
int64_t rdi = sx.q(data_1439a4998)
int32_t rdx = (rdi + 1).d
data_1439a4998 = rdx

if (rdx s> data_1439a499c)
    sub_140809370(&data_1439a4950, rdi.d)

void* rcx = data_1439a4990

if (rcx != 0)
    rbx = rcx

*(rbx + (rdi << 3)) = arg1
return arg1
