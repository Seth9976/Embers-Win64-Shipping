// 函数: sub_1419c3460
// 地址: 0x1419c3460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x30)

if ((rbx.b & 1) != 0)
    rbx = &arg1[0x30 + (rbx s>> 1)]

int32_t i_1 = *(arg1 + 0x38)

if (i_1 != 0)
    void* rbx_2 = rbx + 8
    int32_t i
    
    do
        sub_140a1d5c0(rbx_2)
        rbx_2 += 0x18
        i = i_1
        i_1 -= 1
    while (i != 1)

sub_140a1d5c0(&arg1[0x30])
sub_140a1d5c0(&arg1[0x20])
sub_140a1d5c0(&arg1[0x10])
return sub_140a1d5c0(arg1) __tailcall
