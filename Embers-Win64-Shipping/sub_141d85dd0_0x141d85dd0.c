// 函数: sub_141d85dd0
// 地址: 0x141d85dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    *arg1 = *arg2
    *arg2 = 0
    int64_t rax_2 = arg2[1]
    int64_t* rbx_1 = arg1[1]
    
    if (rax_2 != rbx_1)
        arg2[1] = 0
        arg1[1] = rax_2
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp1_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)

if (&arg1[2] != &arg2[2])
    int64_t* rbx_2 = arg1[2]
    int32_t i_1 = arg1[3].d
    
    if (i_1 != 0)
        int32_t i
        
        do
            int64_t rcx_2 = *rbx_2
            
            if (rcx_2 != 0)
                sub_140a74f90(rcx_2)
            
            rbx_2 = &rbx_2[2]
            i = i_1
            i_1 -= 1
        while (i != 1)
        rbx_2 = arg1[2]
    
    if (rbx_2 != 0)
        sub_140a74f90(rbx_2)
    
    arg1[2] = arg2[2]
    arg2[2] = 0
    arg1[3].d = arg2[3].d
    *(arg1 + 0x1c) = *(arg2 + 0x1c)
    arg2[3] = 0

arg1[4].d = arg2[4].d
*(arg1 + 0x24) = *(arg2 + 0x24)
*(arg1 + 0x25) = *(arg2 + 0x25)
*(arg1 + 0x26) = *(arg2 + 0x26)
*(arg1 + 0x27) = *(arg2 + 0x27)
arg1[5].b = arg2[5].b
*(arg1 + 0x29) = *(arg2 + 0x29)
return arg1
