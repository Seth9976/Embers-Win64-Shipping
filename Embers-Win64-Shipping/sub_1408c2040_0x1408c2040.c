// 函数: sub_1408c2040
// 地址: 0x1408c2040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg2 != 0)
    sub_1408b88b0(arg1 + 0x20, arg2)

int64_t* rbx_1 = arg2[1]

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
