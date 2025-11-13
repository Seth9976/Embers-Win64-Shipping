// 函数: sub_140f259f0
// 地址: 0x140f259f0
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
                int32_t temp2_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)

if (&arg1[2] != &arg2[2])
    arg1[2] = arg2[2]
    arg2[2] = 0
    int64_t rax_6 = arg2[3]
    int64_t* rbx_2 = arg1[3]
    
    if (rax_6 != rbx_2)
        arg2[3] = 0
        arg1[3] = rax_6
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp3_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)

sub_1407473e0(&arg1[4], &arg2[4])
arg1[6].b = arg2[6].b
return arg1
