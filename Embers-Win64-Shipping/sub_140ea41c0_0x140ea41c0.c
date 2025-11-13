// 函数: sub_140ea41c0
// 地址: 0x140ea41c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x10))(arg1, arg4, 0)
arg1[0xf].b = 1
arg1[0xb] = arg2
sub_14065da90(&arg1[0xc], sub_140d44910(arg3))
char rax_5

if (data_143e2a050 == 0)
    rax_5 = data_143e2a040
else
    int64_t* rcx_2 = data_143e2a048
    
    if (rcx_2 == 0)
        rax_5 = data_143e2a040
    else if ((*(*rcx_2 + 0x28))(rcx_2) == 0)
        rax_5 = data_143e2a040
    else
        int64_t* rcx_3 = nullptr
        
        if (data_143e2a050 != 0)
            rcx_3 = data_143e2a048
        
        rax_5 = (*(*rcx_3 + 0x48))(rcx_3)
        data_143e2a040 = rax_5

if (rax_5 != 0)
    (*(*arg1 + 0x18))(arg1)

jump(*(*arg1 + 0x10))
