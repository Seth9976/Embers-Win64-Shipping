// 函数: sub_141cb8f30
// 地址: 0x141cb8f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = arg2[1]
arg1[2] = arg2[2]
arg1[3] = arg2[3]
arg1[4] = arg2[4]

if (&arg1[5] != &arg2[5])
    arg1[5] = arg2[5]
    arg2[5] = 0
    int64_t rax_6 = arg2[6]
    int64_t* rbx_1 = arg1[6]
    
    if (rax_6 != rbx_1)
        arg2[6] = 0
        arg1[6] = rax_6
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp1_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)

if (&arg1[7] != &arg2[7])
    int64_t rcx_3 = arg1[7]
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    arg1[7] = arg2[7]
    arg2[7] = 0
    arg1[8].d = arg2[8].d
    *(arg1 + 0x44) = *(arg2 + 0x44)
    arg2[8] = 0

arg1[9].d = arg2[9].d
return arg1
