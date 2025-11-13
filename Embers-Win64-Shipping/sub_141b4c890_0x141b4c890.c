// 函数: sub_141b4c890
// 地址: 0x141b4c890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = arg1[2]
*arg1 = &data_14306c768

if (rsi != 0)
    int64_t* rax_1 = *(rsi + 0x20)
    
    if (rax_1 != 0)
        *rax_1 = 0
    
    int64_t* rbx_1 = *(rsi + 0x28)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    j_sub_140a74f90(rsi)

*arg1 = &data_142d5ee90

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
