// 函数: sub_14094c4a0
// 地址: 0x14094c4a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e32d98
int64_t rcx = arg1[3]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t* rbx = arg1[2]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

*arg1 = &data_142e2d690
return &data_142e2d690
