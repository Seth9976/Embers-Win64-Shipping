// 函数: sub_141d00f70
// 地址: 0x141d00f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1

if ((rbx.b & 1) != 0)
    rbx = (rbx s>> 1) + arg1

int32_t i_1 = arg1[1].d

if (i_1 != 0)
    void* rbx_2 = rbx + 0x30
    int32_t i
    
    do
        sub_140a1d5c0(rbx_2)
        rbx_2 += 0x50
        i = i_1
        i_1 -= 1
    while (i != 1)

arg1[1].d = 0

if (*(arg1 + 0xc) != arg2)
    sub_14119ada0(arg1, arg2)
