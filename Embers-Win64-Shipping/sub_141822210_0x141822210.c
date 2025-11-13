// 函数: sub_141822210
// 地址: 0x141822210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x118)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rdi_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*rbx + 8))(rbx, zx.q(rdi_1))

int32_t i_1 = *(arg1 + 0x108)
int64_t* rbx_1 = *(arg1 + 0x100)

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_2 = *rbx_1
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        rbx_1 = &rbx_1[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx_1 = *(arg1 + 0x100)

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

int64_t rcx_4 = *(arg1 + 0xf0)

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = *(arg1 + 0xe0)

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)
