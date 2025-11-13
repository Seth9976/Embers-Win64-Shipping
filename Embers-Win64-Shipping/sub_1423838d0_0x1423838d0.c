// 函数: sub_1423838d0
// 地址: 0x1423838d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[1]

if (rcx != 0)
    int32_t rax_1 = *(rcx + 0x5c)
    *(rcx + 0x5c) -= 1
    
    if (rax_1 == 1)
        int32_t rax_2 = rcx[0xb].d
        
        if (rax_2 == 0)
            bool z_1
            
            if (rax_2 == rcx[0xa].d)
                rcx[0xa].d = 0
                z_1 = true
            else
                rcx[0xa].d
                z_1 = false
            
            if (z_1)
                (**rcx)(rcx, 1)

*arg1 = &data_142d5c278

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
