// 函数: sub_142ab24e0
// 地址: 0x142ab24e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg2 + 0x10)
int64_t* rbx = *(arg2 + 8)
*(rax + 8) = arg4

if (*(arg3 + 8) == 0)
    *(rax + 0xc) = 1
    *(arg3 + 0x10) = arg1
    *(arg1 + 0x14) += 1
    *(arg1 + 0x18) += 1

*(arg3 + 8) += 1
*(arg2 + 8) = arg3
rbx[1].d -= 1

if (rbx[1].d == 1)
    *(arg1 + 0x14) -= 1
    
    if (sub_1408e52d0(rbx) == 0)
        (**rbx)(rbx, 1)
        sub_142ab29b0()
        return sub_142a86010(&data_1440160f0) __tailcall
    
    rbx[2] = 0

sub_142ab29b0()
return sub_142a86010(&data_1440160f0) __tailcall
