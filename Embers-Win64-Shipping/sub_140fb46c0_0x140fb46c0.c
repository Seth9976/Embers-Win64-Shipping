// 函数: sub_140fb46c0
// 地址: 0x140fb46c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x492) = 1
sub_140faa6f0(arg1)

if (data_143e2b798 == 0)
label_140fb4721:
    int64_t* rbx_1 = *(arg1 + 0x4a0)
    void* rcx_2 = nullptr
    
    if (rbx_1 != 0)
        int32_t rax_4 = rbx_1[1].d
        
        if (rax_4 != 0)
            rbx_1[1].d = rax_4 + 1
            rax_4.b = 1
        
        if (rax_4.b == 0)
            rbx_1 = nullptr
        
        if (rbx_1 != 0)
            rcx_2 = *(arg1 + 0x498)
    
    sub_140e21770(rcx_2)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
else
    int64_t* rcx = data_143e2b790
    
    if (rcx == 0)
        goto label_140fb4721
    
    if ((*(*rcx + 0x28))(rcx) == 0)
        goto label_140fb4721
    
    int64_t* rcx_1 = nullptr
    
    if (data_143e2b798 != 0)
        rcx_1 = data_143e2b790
    
    (*(*rcx_1 + 0x48))(rcx_1)

*arg2 = 1
*(arg2 + 8) = 0
*(arg2 + 0x10) = 0
arg2[0x20] = 0
__builtin_memset(&arg2[0x28], 0, 0x88)
*(arg2 + 0xb4) &= 0xffffff00
*(arg2 + 0xb0) = 0x20702
return arg2
