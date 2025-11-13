// 函数: sub_142571100
// 地址: 0x142571100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_8, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_8)

int64_t rax_2 = *(arg2 + 0x20)
int64_t rbp
rbp.b = arg_8 != 0
int64_t rsi
rsi.b = rax_2 != 0
*(arg2 + 0x20) = rsi + rax_2
char result = (*(*arg1 + 0xa10))(arg1, zx.q(rbp.b))

if (result != 0)
    return (*(*arg1 + 0xa18))(arg1, zx.q(rbp.b))

sub_140be4120(u"ServerSetSpectatorWaiting_Validate")
return result
