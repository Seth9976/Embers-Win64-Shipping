// 函数: sub_140ec99c0
// 地址: 0x140ec99c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = *(arg4 + 0x70)

if (r14 != 0)
    int64_t rbx_1 = *r14
    sub_140ec00f0()
    
    if ((*(rbx_1 + 0x58))(r14, &data_143e29fe0) != 0)
        int64_t* rbx_2 = *(arg4 + 0x78)
        int64_t rbp_1 = *(arg4 + 0x70)
        
        if (rbx_2 != 0)
            rbx_2[1].d += 1
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    (**rbx_2)(rbx_2)
                    int32_t temp1_1 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*(*rbx_2 + 8))(rbx_2, 1)
        
        if (rbp_1 != 0)
            *(arg1 + 0x3f8) = 0

*arg2 = 0
*(arg2 + 8) = 0
*(arg2 + 0x10) = 0
arg2[0x20] = 0
__builtin_memset(&arg2[0x28], 0, 0x88)
*(arg2 + 0xb4) &= 0xffffff00
*(arg2 + 0xb0) = 0x20702
return arg2
