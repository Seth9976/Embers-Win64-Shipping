// 函数: sub_140a35860
// 地址: 0x140a35860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b33460(*arg5, u"TArray<%s>, Num: %d\n", *(arg2 + 8))
int32_t rax_1 = arg5[2].d + 1
arg5[2].d = rax_1
void* rdi = *arg1

if ((rdi.b & 1) != 0)
    rdi = (rdi s>> 1) + arg1

int64_t r15 = *(arg2 + 0x40)
int32_t rsi_1 = 0
int32_t r12 = *(arg2 + 0x58)
int32_t result

if (arg3 s<= 0)
    result = rax_1 - 1
    arg5[2].d = result
else
    do
        sub_140b4d8a0(arg5)
        sub_140b33460(*arg5, u"[%d]: ", zx.q(rsi_1))
        result = r15(zx.q(rsi_1 * r12) + rdi, arg2, arg4, arg5)
        rsi_1 += 1
    while (rsi_1 s< arg3)
    
    arg5[2].d -= 1

return result
