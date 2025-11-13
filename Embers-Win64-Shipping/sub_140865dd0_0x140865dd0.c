// 函数: sub_140865dd0
// 地址: 0x140865dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10
sub_140865c40(&data_14396ff70, &arg_10, arg1)
int64_t rax = sx.q(arg_10)
void* rcx

if (rax.d == 0xffffffff)
    rcx = nullptr
else
    rcx = data_14396ff70 + rax * 0x18

int64_t* result = rcx + 8

if (rcx == 0)
    result = nullptr

if (result != 0)
    return *result

return result
