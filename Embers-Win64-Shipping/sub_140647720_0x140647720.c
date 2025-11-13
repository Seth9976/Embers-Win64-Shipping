// 函数: sub_140647720
// 地址: 0x140647720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg2[6]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t rcx_2 = arg2[2]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = *arg2

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)
