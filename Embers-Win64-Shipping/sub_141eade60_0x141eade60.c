// 函数: sub_141eade60
// 地址: 0x141eade60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *(arg1 + 0x268)

for (void* r14_2 = &i[sx.q(*(arg1 + 0x270)) * 2]; i != r14_2; i = &i[2])
    int64_t rbx_1 = *i
    void* rsi_1 = i[1]
    sub_140d19090(arg2, rbx_1)
    sub_140d17260(&arg2[4], rbx_1, rsi_1)

jump(*(**(arg1 + 0x40) + 0x320))
