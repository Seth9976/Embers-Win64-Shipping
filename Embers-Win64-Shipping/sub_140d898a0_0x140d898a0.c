// 函数: sub_140d898a0
// 地址: 0x140d898a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 0x80070057

if (*(arg1 + 0x40) == 0)
    return 0x80040200

int64_t rax_2 = *arg2
int32_t rbx = 0
int64_t* arg_10 = nullptr
int64_t* rcx_2

if ((*rax_2)(arg2, &data_1434cb230, &arg_10) s>= 0)
    int64_t rax_4 = *arg2
    int64_t* arg_18 = nullptr
    int32_t rax_5 = (*rax_4)(arg2, &data_1434cb230, &arg_18)
    rcx_2 = arg_10
    int64_t* rax_6 = arg_18
    
    if (rax_5 s< 0)
        rbx = -0x7fff0001
    else if (rcx_2 == rax_6)
        int64_t* rdx_1 = *(arg1 + 0x40)
        
        if (rdx_1 != 0)
            (*(*rdx_1 + 0x10))(rdx_1)
            rcx_2 = arg_10
            rax_6 = arg_18
            *(arg1 + 0x40) = 0
    else
        rbx = -0x7ffbfe00
    
    if (rax_6 != 0)
        int64_t rdx_2 = *rax_6
        (*(rdx_2 + 0x10))(rax_6, rdx_2)
        rcx_2 = arg_10
else
    rbx = -0x7fff0001
    rcx_2 = arg_10

if (rcx_2 != 0)
    int64_t rdx_3 = *rcx_2
    (*(rdx_3 + 0x10))(rcx_2, rdx_3)

return zx.q(rbx)
