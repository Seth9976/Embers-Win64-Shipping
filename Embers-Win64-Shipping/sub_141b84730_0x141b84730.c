// 函数: sub_141b84730
// 地址: 0x141b84730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = &arg1[0x21]

for (int64_t i = 6; i != 0; )
    rbx = &rbx[-5]
    i -= 1
    sub_140745b20(&rbx[1])
    int64_t* rcx_1 = *rbx
    
    if (rcx_1 != 0)
        int32_t temp0_1 = *(rcx_1 + 0xc)
        *(rcx_1 + 0xc) -= 1
        
        if (temp0_1 == 1)
            (*(*rcx_1 + 8))(rcx_1, 1)

*arg1 = &data_142eda078
return &data_142eda078
