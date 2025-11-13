// 函数: sub_140a82f70
// 地址: 0x140a82f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143db95e8 != 0 && data_14399eaa5 != 0)
    uint64_t rax_1 = 0x10
    
    if (arg2 u>= 0x10)
        rax_1 = zx.q(arg2)
    
    int64_t r8_3 = (arg1 - 1 + rax_1) & not.q(rax_1 - 1)
    int64_t rax_4 = 0
    
    if (0 == data_143db7a98)
        data_143db7a98 = 0
    else
        rax_4 = data_143db7a98
    
    if (rax_4 + r8_3 u<= data_143db95f8)
        int64_t rcx_2 = data_143db7a98
        data_143db7a98 += r8_3
        
        if (rcx_2 + r8_3 u<= data_143db95f8)
            return data_143db95e8 + rcx_2

int64_t* rcx_3 = data_143ddb3f0

if (rcx_3 == 0)
    sub_140a750a0()
    rcx_3 = data_143ddb3f0

jump(*(*rcx_3 + 0x10))
