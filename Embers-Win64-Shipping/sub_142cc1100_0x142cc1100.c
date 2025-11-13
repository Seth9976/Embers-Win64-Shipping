// 函数: sub_142cc1100
// 地址: 0x142cc1100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = data_143e1a3d8

if (i_1 != 0)
    int64_t* rdi_2 = data_143e1a3d0 + 0x10
    int32_t i
    
    do
        int64_t* rbx_1 = *rdi_2
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t rax = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (rax == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        rdi_2 = &rdi_2[4]
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t rcx_3 = data_143e1a3d0

if (rcx_3 == 0)
    return 

return sub_140a74f90(rcx_3) __tailcall
