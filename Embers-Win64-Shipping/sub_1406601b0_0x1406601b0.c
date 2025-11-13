// 函数: sub_1406601b0
// 地址: 0x1406601b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x28) != 0)
    int64_t* rcx = *(arg1 + 0x20)
    
    if (rcx != 0)
        (*(*rcx + 0x38))(rcx, 0)
        int64_t rcx_1 = *(arg1 + 0x20)
        
        if (rcx_1 != 0)
            *(arg1 + 0x20) = sub_140a84c80(rcx_1, 0, 0)
        
        *(arg1 + 0x28) = 0

int64_t rcx_2 = *(arg1 + 0x20)

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t* rbx_1 = *(arg1 + 8)

if (rbx_1 == 0)
    return 

rbx_1[1].d -= 1

if (rbx_1[1].d != 1)
    return 

(**rbx_1)(rbx_1)
int32_t rdi_1 = *(rbx_1 + 0xc)
*(rbx_1 + 0xc) -= 1

if (rdi_1 == 1)
    (*(*rbx_1 + 8))(rbx_1, zx.q(rdi_1))
