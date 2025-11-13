// 函数: sub_141fd8aa0
// 地址: 0x141fd8aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1
void* arg_8 = rbx
sub_141fe8dd0(&data_143a2dd30)
int32_t result = sub_1405a7050(&data_143a2ddf0, &arg_8)
int64_t rdi = data_143f3d830
int64_t rcx

if (data_143de5480 == 0)
    rcx = 0
else
    result = GetCurrentThreadId()
    rcx.b = result != data_143de5470

if (*(rdi + (rcx << 2)) s>= 0x400)
    *(rbx + 0x20) |= 2

return result
