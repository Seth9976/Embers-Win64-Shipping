// 函数: sub_140a62ad0
// 地址: 0x140a62ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1[3]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rdi_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*rbx + 8))(rbx, zx.q(rdi_1))

if (*arg1 == 0)
    return 

int64_t* rcx_2 = data_143ddb3f0

if (rcx_2 == 0)
    sub_140a750a0()
    rcx_2 = data_143ddb3f0

jump(*(*rcx_2 + 0x30))
