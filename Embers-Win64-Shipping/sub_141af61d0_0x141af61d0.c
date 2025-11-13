// 函数: sub_141af61d0
// 地址: 0x141af61d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143054f88
void* rbx = &arg1[3]
arg1[1] = 0
arg1[1] = *arg2
*arg2 = 0
arg1[2].d = arg2[1].d
*(arg1 + 0x14) = *(arg2 + 0xc)
arg2[1] = 0
*(rbx + 0x30) = 0
int64_t rbp = sx.q(arg3[1].d)
int64_t r14 = *arg3
*(rbx + 0x38) = rbp.d

if (rbp.d != 0)
    sub_141b30220(rbx, rbp.d, 0)
    void* r9_1 = *(rbx + 0x30)
    
    if (r9_1 != 0)
        rbx = r9_1
    
    memcpy(rbx, r14, (rbp * 0x18).d)
else
    *(rbx + 0x3c) = 2

sub_140745ac0(arg2)
return arg1
