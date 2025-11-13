// 函数: sub_1405ec220
// 地址: 0x1405ec220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
int64_t* rcx = *(arg1 + 0x60)

if (rcx != 0)
    int32_t rax = *(rcx + 0xc)
    *(rcx + 0xc) -= 1
    
    if (rax == 1 && rcx != 0)
        (*(*rcx + 8))(rcx, 1)

int64_t rcx_1 = *(arg1 + 0x10)

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

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
