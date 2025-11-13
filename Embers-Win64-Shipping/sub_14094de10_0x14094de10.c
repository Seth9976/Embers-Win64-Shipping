// 函数: sub_14094de10
// 地址: 0x14094de10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    int64_t rcx = *arg1
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    *arg1 = *arg2
    *arg2 = 0
    arg1[1].d = arg2[1].d
    *(arg1 + 0xc) = *(arg2 + 0xc)
    arg2[1] = 0

if (&arg1[2] != &arg2[2])
    arg1[2] = arg2[2]
    arg2[2] = 0
    int64_t rax_5 = arg2[3]
    int64_t* rbx_1 = arg1[3]
    
    if (rax_5 != rbx_1)
        arg2[3] = 0
        arg1[3] = rax_5
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp1_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)

arg1[4].d = arg2[4].d
arg1[5] = arg2[5]
return arg1
