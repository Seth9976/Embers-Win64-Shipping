// 函数: sub_1427a0930
// 地址: 0x1427a0930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x58))
int32_t rax = (rdi + 1).d
*(arg1 + 0x58) = rax

if (rax s> *(arg1 + 0x5c))
    sub_1405a4d70(arg1 + 0x50)

*(*(arg1 + 0x50) + (rdi << 3)) = arg2
int64_t* rax_2 = sub_140a84c80(0, 0x20, 0)

if (rax_2 != 0)
    rax_2[1] = arg1
    *rax_2 = &data_1434ba080
    rax_2[3] = sub_140a387b0()
    *rax_2 = &data_1434ba0d8

if (rax_2 != 0)
    sub_140599630(arg2 + 0x28, 1)
    void arg_8
    (*(*rax_2 + 0x30))(rax_2, &arg_8)
    int64_t rbp_1 = sx.q(*(arg2 + 0x30))
    int32_t rax_5 = (rbp_1 + 1).d
    *(arg2 + 0x30) = rax_5
    
    if (rax_5 s> *(arg2 + 0x34))
        sub_1405a4f90(arg2 + 0x28)
    
    void** rax_8 = (rbp_1 << 4) + *(arg2 + 0x28)
    *rax_8 = rax_2
    rax_8[1].d = 2

return sub_140599090(arg1 + 0x30) __tailcall
