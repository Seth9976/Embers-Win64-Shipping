// 函数: sub_141b53f80
// 地址: 0x141b53f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x58)
void*** rdi_1

if (rax == 0)
    rdi_1 = nullptr
else
    int128_t var_18 = zx.o(0)
    rdi_1 = sub_14234f120(rax, arg2, arg3, 2, &var_18, 0x100, 1)

void* rbx_1 = &rdi_1[4]

if (sub_140a80f40() == 0)
    if (rdi_1 == 0)
        rbx_1 = nullptr
    
    sub_141997e80(rbx_1)
else
    (*(*rbx_1 + 0x28))(rbx_1)

if (rdi_1 == 0)
    return nullptr

return &rdi_1[2]
