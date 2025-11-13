// 函数: sub_141754910
// 地址: 0x141754910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = arg2[1]
void* rdi = arg1
void* rdx = *r8
void* result
bool cond:0

if (rdx + 4 u> r8[1])
    int64_t rax_1 = *arg2
    int32_t arg_10 = 1
    result, arg1 = (*(rax_1 + 0x150))(arg2, &arg_10, 4)
    cond:0 = arg_10 != 0
else
    cond:0 = *rdx != 0
    result = rdx + 4
    *r8 = result

arg1.b = cond:0

if (arg1.b == 0)
    return result

sub_1417083f0(arg2, rdi + 0x28, arg3)
return sub_1417502a0(rdi, *(rdi + 0x30))
