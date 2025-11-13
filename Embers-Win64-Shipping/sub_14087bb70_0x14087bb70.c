// 函数: sub_14087bb70
// 地址: 0x14087bb70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg2 + 0x18)

if (rbx == 0)
    return 

rbx[1].d -= 1

if (rbx[1].d != 1)
    return 

(**rbx)(rbx)
int32_t rdi_1 = *(rbx + 0xc)
*(rbx + 0xc) -= 1

if (rdi_1 == 1)
    (*(*rbx + 8))(rbx, zx.q(rdi_1))
