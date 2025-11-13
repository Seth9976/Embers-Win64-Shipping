// 函数: sub_140e54cd0
// 地址: 0x140e54cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140e552a0(arg1, arg2)

if (&arg1[0x18] != &arg2[0x18])
    *(arg1 + 0x18) = *(arg2 + 0x18)
    *(arg2 + 0x18) = 0
    int64_t rax_2 = *(arg2 + 0x20)
    int64_t* rbx_1 = *(arg1 + 0x20)
    
    if (rax_2 != rbx_1)
        *(arg2 + 0x20) = 0
        *(arg1 + 0x20) = rax_2
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp2_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)

if (&arg1[0x28] != &arg2[0x28])
    *(arg1 + 0x28) = *(arg2 + 0x28)
    *(arg2 + 0x28) = 0
    int64_t rax_6 = *(arg2 + 0x30)
    int64_t* rbx_2 = *(arg1 + 0x30)
    
    if (rax_6 != rbx_2)
        *(arg2 + 0x30) = 0
        *(arg1 + 0x30) = rax_6
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp3_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)

*(arg1 + 0x38) = *(arg2 + 0x38)
return arg1
