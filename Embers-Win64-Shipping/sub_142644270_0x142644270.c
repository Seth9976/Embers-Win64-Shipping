// 函数: sub_142644270
// 地址: 0x142644270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
*arg1 = &data_143453050
__builtin_memset(&arg1[5], 0, 0x20)
*(arg1 + 0x4c) &= 0xfffffffc
arg1[0xa].d = data_14399f630
__builtin_memset(&arg1[0xb], 0, 0x24)
arg1[0x10] = 0

if (((arg1[1].d u>> 4).b & 1) != 0)
    return arg1

void*** rax_3 = sub_140a84c80(0, 0x30, 0)

if (rax_3 != 0)
    *rax_3 = &data_143083ba0
    sub_140d3a3a0(&rax_3[1], arg1)
    rax_3[2] = sub_142660540
    rax_3[4] = sub_140a387b0()
    *rax_3 = &data_143083bf8

void var_18

if (&var_18 != &arg1[0xe])
    if (rax_3 != 0)
        (*rax_3)[8](rax_3, &arg1[0xe])
    else if (arg1[0xf].d != 0)
        int64_t* rcx_2 = arg1[0xe]
        
        if (rcx_2 != 0)
            (*(*rcx_2 + 0x38))(rcx_2, 0)
            int64_t rcx_3 = arg1[0xe]
            
            if (rcx_3 != 0)
                arg1[0xe] = sub_140a84c80(rcx_3, 0, 0)
            
            arg1[0xf].d = 0

if (rax_3 != 0)
    (*rax_3)[7](rax_3, 0)
    int64_t rax_9 = sub_140a84c80(rax_3, 0, 0)
    
    if (rax_9 != 0)
        sub_140a74f90(rax_9)

return arg1
