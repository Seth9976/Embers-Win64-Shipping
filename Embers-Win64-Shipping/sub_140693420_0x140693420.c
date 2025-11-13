// 函数: sub_140693420
// 地址: 0x140693420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = arg2[1]
*(arg1 + 0x10) = *(arg2 + 0x10)
*(arg1 + 0x20) = *(arg2 + 0x20)

if (&arg1[6] != &arg2[6])
    arg1[6] = arg2[6]
    arg2[6] = 0
    int64_t rax_3 = arg2[7]
    int64_t* rbx_1 = arg1[7]
    
    if (rax_3 != rbx_1)
        arg2[7] = 0
        arg1[7] = rax_3
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp1_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)

arg1[8] = arg2[8]
arg1[9].d = arg2[9].d
*(arg1 + 0x4c) = *(arg2 + 0x4c)
return arg1
