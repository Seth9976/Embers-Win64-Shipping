// 函数: sub_141f79510
// 地址: 0x141f79510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1].d = 0
arg1[2] = 0
arg1[3] = 0
arg1[4].d = 0xffffffff

if (*arg1 != 0)
    void*** rax_1 = data_143f3ca50
    
    if (rax_1 == 0)
        void*** rax_2 = j_sub_140a82f30(0x50)
        
        if (rax_2 == 0)
            rax_1 = nullptr
        else
            rax_1 = sub_141f7a1c0(rax_2)
        
        data_143f3ca50 = rax_1
    
    int64_t* rcx_1 = rax_1[7]
    (*(*rcx_1 + 0x120))(rcx_1, arg1)

int64_t rdx_1 = *arg2
*arg1 = rdx_1
arg1[1].d = arg2[1].d
arg1[2] = arg2[2]
arg1[3] = arg2[3]
arg1[4].d = arg2[4].d

if (rdx_1 != 0)
    void*** rax_8 = data_143f3ca50
    
    if (rax_8 == 0)
        void*** rax_9 = j_sub_140a82f30(zx.q((&rax_8[0xa]).d))
        
        if (rax_9 == 0)
            rax_8 = nullptr
        else
            rax_8 = sub_141f7a1c0(rax_9)
        
        data_143f3ca50 = rax_8
    
    int64_t* rcx_4 = rax_8[7]
    (*(*rcx_4 + 0x118))(rcx_4, arg1)

return arg1
