// 函数: sub_142282860
// 地址: 0x142282860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b33630("Physics")
int64_t rbp = sx.q(*(arg1 + 0x10))
int32_t rax = (rbp + 1).d
*(arg1 + 0x10) = rax

if (rax s> *(arg1 + 0x14))
    sub_1405a4d70(arg1 + 8)

*(*(arg1 + 8) + (rbp << 3)) = arg2

if (*(arg1 + 0x10) s<= 1)
    (*(*arg2 + 8))(arg2)
    (*(*arg2 + 0x30))(arg2)
    
    while (*(arg1 + 0x10) s> 1)
        int64_t rdx_1 = sx.q(*(arg1 + 0x10))
        int64_t* rbx_1 = *(*(arg1 + 8) + (rdx_1 << 3) - 8)
        *(arg1 + 0x10) = (rdx_1 - 1).d
        sub_1405c53d0(arg1 + 8)
        (*(*rbx_1 + 8))(rbx_1)
        (*(*rbx_1 + 0x30))(rbx_1)
    
    *(arg1 + 0x10) -= 1
    sub_1405c53d0(arg1 + 8)

return sub_140b37f60("Physics") __tailcall
