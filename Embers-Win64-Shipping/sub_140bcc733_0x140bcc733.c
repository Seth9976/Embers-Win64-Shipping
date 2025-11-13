// 函数: sub_140bcc733
// 地址: 0x140bcc733
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rdx = 0
bool z

if (0 == *(arg1 + 0x1f0))
    *(arg1 + 0x1f0) = 0
    z = true
else
    *(arg1 + 0x1f0)
    z = false

bool z_1

if (z)
    if (0 == *(arg1 + 0x1f4))
        *(arg1 + 0x1f4) = 0
        z_1 = true
    else
        *(arg1 + 0x1f4)
        z_1 = false

if (not(z) || not(z_1))
    rdx = 1

return sub_140bcc760(arg1 + 0x2f8, rdx) __tailcall
