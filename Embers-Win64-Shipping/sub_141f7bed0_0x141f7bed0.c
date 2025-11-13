// 函数: sub_141f7bed0
// 地址: 0x141f7bed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg1 != 0)
    void*** rax_1 = data_143f3ca50
    
    if (rax_1 == 0)
        rax_1 = j_sub_140a82f30(zx.q((&rax_1[0xa]).d))
        
        if (rax_1 != 0)
            rax_1 = sub_141f7a1c0(rax_1)
        
        data_143f3ca50 = rax_1
    
    int64_t* rcx_2 = rax_1[7]
    (*(*rcx_2 + 0x120))(rcx_2, arg1)

int64_t rdx_1 = *arg2
*arg1 = rdx_1
arg1[1].d = arg2[1].d
arg1[2] = arg2[2]
arg1[3] = arg2[3]
arg1[4].d = arg2[4].d

if (rdx_1 != 0)
    void*** rax_7 = data_143f3ca50
    
    if (rax_7 == 0)
        rax_7 = j_sub_140a82f30(zx.q((&rax_7[0xa]).d))
        
        if (rax_7 != 0)
            rax_7 = sub_141f7a1c0(rax_7)
        
        data_143f3ca50 = rax_7
    
    int64_t* rcx_5 = rax_7[7]
    (*(*rcx_5 + 0x118))(rcx_5, arg1)

return arg1
