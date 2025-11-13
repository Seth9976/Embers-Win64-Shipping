// 函数: sub_140f89a00
// 地址: 0x140f89a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x40) == 0)
    return 

*(arg1 + 0x40) = 0

if (*(arg1 + 0x20) != 0)
    *(arg1 + 0x20) = 0

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
