// 函数: sub_142822d2c
// 地址: 0x142822d2c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 8)

if (rbx != 0)
    int64_t* rbx_1 = *(rbx + 0x28)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t rax = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rax == 1)
                (*(*rbx_1 + 8))(rbx_1)

void* rcx_2 = *(arg1 + 8)

if (rcx_2 != 0)
    sub_14058ba50(rcx_2, 0x30)
