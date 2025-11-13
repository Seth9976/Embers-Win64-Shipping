// 函数: sub_1406476c0
// 地址: 0x1406476c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg2[5]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t* rbx = arg2[4]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t rcx_3 = *arg2

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)
