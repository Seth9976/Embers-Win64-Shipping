// 函数: sub_140b56840
// 地址: 0x140b56840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *arg1
int64_t rdi = sx.q(*(rsi + 0x40))
int32_t rax = (rdi + 1).d
*(rsi + 0x40) = rax

if (rax s> *(rsi + 0x44))
    sub_14083a7e0(rsi + 0x38)

int32_t* rbx = *(rsi + 0x38) + rdi * 0xc
rbx[2] = sub_140b564b0(rsi, 0)
rbx[1] = arg4
*rbx = *(*(rsi + 0x10) + 8)
*arg2 = sub_140b4d630(*(rsi + 0x10), arg3)
return arg2
