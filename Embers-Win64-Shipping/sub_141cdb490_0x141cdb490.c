// 函数: sub_141cdb490
// 地址: 0x141cdb490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)
*(*(arg1 + 0x38) + rbx * 0x18) = arg3
int64_t* rdi_2 = (sx.q(arg3) << 5) + *arg1
int64_t rsi = sx.q(rdi_2[1].d)
int32_t rax_1 = (rsi + 1).d
rdi_2[1].d = rax_1

if (rax_1 s> *(rdi_2 + 0xc))
    sub_1405a4cf0(rdi_2)

*(*rdi_2 + (rsi << 2)) = rbx.d
return sub_14090bdf0(arg1 + 0x1a8, rbx.d) __tailcall
