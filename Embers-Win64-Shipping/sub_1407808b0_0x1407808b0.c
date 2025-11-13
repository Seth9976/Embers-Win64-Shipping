// 函数: sub_1407808b0
// 地址: 0x1407808b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1

if (rcx != 0)
    int32_t rax_1 = 0
    
    if (0 == *(rcx + 8))
        *(rcx + 8) = 0
    else
        rax_1 = *(rcx + 8)
    
    if (rax_1 == 1)
        void* rbx_1 = *arg1
        
        if (*(rbx_1 + 0x11) != 0)
            if (data_143f0f1c7 != 0)
                int64_t* rcx_1 = data_143f0f180
                (*(*rcx_1 + 0x638))(rcx_1, rbx_1)
            
            *(rbx_1 + 0x11) = 0

arg1[3].d = 0
sub_1405d16e0(arg1, nullptr)
sub_1405d16e0(&arg1[1], nullptr)
sub_1405d16e0(&arg1[2], nullptr)
sub_1405ec8a0(&arg1[2])
sub_1405d1550(&arg1[1])
return sub_1405d1550(arg1) __tailcall
