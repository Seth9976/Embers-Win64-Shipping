// 函数: sub_1418ec310
// 地址: 0x1418ec310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

if (arg1[3].d == 1)
    if (arg3 != 0)
        return sub_14101ebf0(arg1) __tailcall
    
    *(arg2 + 0x10) = 0
    *(arg2 + 8) = 0
    int64_t rax_2 = *arg1
    arg1[2] = 0
    arg1[1] = 0
    jump(*(rax_2 + 8))

void* rax_3 = arg1[1]

if (arg2 != rax_3)
    void* rax_5 = arg1[2]
    
    if (arg2 != rax_5)
        *(*(arg2 + 8) + 0x10) = *(arg2 + 0x10)
        *(*(arg2 + 0x10) + 8) = *(arg2 + 8)
    else
        void* rax_6 = *(rax_5 + 0x10)
        arg1[2] = rax_6
        *(rax_6 + 8) = 0
else
    void* rax_4 = *(rax_3 + 8)
    arg1[1] = rax_4
    *(rax_4 + 0x10) = 0

if (arg3 == 0)
    *(arg2 + 0x10) = 0
    *(arg2 + 8) = 0
else
    j_sub_140a74f90(arg2)

(*(*arg1 + 8))(arg1, zx.q(arg1[3].d - 1))
