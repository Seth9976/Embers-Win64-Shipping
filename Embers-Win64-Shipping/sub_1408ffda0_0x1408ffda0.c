// 函数: sub_1408ffda0
// 地址: 0x1408ffda0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg1 + 0x30)

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t rcx_1 = *(arg1 + 0x18)

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
