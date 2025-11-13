// 函数: sub_140a20b00
// 地址: 0x140a20b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int64_t rsi_1 = sx.q(arg1[1].d)
int64_t rdi_1 = sx.q(arg3)
int32_t rax_1
rax_1.b = rsi_1.d == 0
int32_t rax_3 = rax_1 + rsi_1.d + rdi_1.d
arg1[1].d = rax_3

if (rax_3 s> *(arg1 + 0xc))
    sub_140594770(arg1)

int64_t rax_4
rax_4.b = rsi_1.d != 0
int64_t rbx_2 = *arg1 + ((rsi_1 - rax_4) << 1)
sub_1405a7220(rbx_2, rdi_1.d, arg2, rdi_1.d, 0x3f)
*(rbx_2 + (rdi_1 << 1)) = 0
