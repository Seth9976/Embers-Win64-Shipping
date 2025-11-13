// 函数: sub_140aa1030
// 地址: 0x140aa1030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_18 = zx.o(0)
sub_140aa0560(arg1, arg2, nullptr, &var_18, arg3)
void* rcx = var_18:8.q

if (rcx == 0)
    return arg1

int32_t rax = *(rcx + 8)
*(rcx + 8) -= 1

if (rax == 1)
    int64_t* rbx_1 = var_18:8.q
    (**rbx_1)(rbx_1)
    int32_t rdi_1 = *(rbx_1 + 0xc)
    *(rbx_1 + 0xc) -= 1
    
    if (rdi_1 == 1)
        int64_t* rcx_2 = var_18:8.q
        (*(*rcx_2 + 8))(rcx_2, zx.q(rdi_1))

return arg1
