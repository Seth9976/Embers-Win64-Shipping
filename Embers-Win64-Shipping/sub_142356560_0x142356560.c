// 函数: sub_142356560
// 地址: 0x142356560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x70) = 0
int64_t rcx = *(arg1 + 0x68)

if (rcx != 0)
    sub_140a74f90(rcx)

sub_1407ece30(arg1 + 0x28, 0)
int64_t rcx_2 = *(arg1 + 0x48)

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = *(arg1 + 0x28)

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t* rbx = *(arg1 + 0x18)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t* rcx_6 = *(arg1 + 8)

if (rcx_6 != 0)
    int32_t temp1_1 = *(rcx_6 + 0xc)
    *(rcx_6 + 0xc) -= 1
    
    if (temp1_1 == 1)
        (*(*rcx_6 + 8))(rcx_6, 1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
