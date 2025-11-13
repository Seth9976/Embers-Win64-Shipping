// 函数: sub_14081d280
// 地址: 0x14081d280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1[3]

if ((rbx.b & 1) != 0)
    rbx = (rbx s>> 1) + &arg1[3]

int32_t i_1 = arg1[4].d

if (i_1 != 0)
    int32_t i
    
    do
        sub_1405d1550(rbx)
        rbx += 0x20
        i = i_1
        i_1 -= 1
    while (i != 1)

sub_140a1d5c0(&arg1[3])
return sub_14081c9d0(arg1) __tailcall
