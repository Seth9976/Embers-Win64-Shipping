// 函数: sub_14094c130
// 地址: 0x14094c130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140596d80(arg1 + 0x40)
*arg1 = &data_142e32d98
int64_t rcx_1 = *(arg1 + 0x18)

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t* rbx = *(arg1 + 0x10)

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
