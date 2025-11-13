// 函数: sub_140bb8bb0
// 地址: 0x140bb8bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
sub_140ba6ce0(arg1 + 0x58, &arg_8, arg3)
int64_t rax = sx.q(arg_8)
uint64_t result

if (rax.d == 0xffffffff)
    result = 0
else
    result = rax * 0x160 + *(arg1 + 0x58)

int64_t* rcx_1 = result + 8

if (result == 0)
    rcx_1 = nullptr

if (rcx_1 != 0)
    sub_140d26170(rcx_1)
    sub_140bb61a0(arg1 + 0x58, arg3)

result.b = 1
return result
