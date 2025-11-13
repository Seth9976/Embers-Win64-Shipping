// 函数: sub_140fb6180
// 地址: 0x140fb6180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg1 + 0x4c8)
int64_t* r8 = *(arg1 + 0x4b8)

if (rax == 0)
    return sub_140f2d520(r8) __tailcall

int64_t var_28 = rax
void* rax_1 = *(arg1 + 0x4d0)

if (rax_1 != 0)
    *(rax_1 + 8) += 1

int128_t var_18 = var_28.o

if (rax_1 != 0)
    *(rax_1 + 8) += 1

(*(*r8 + 0x240))(r8, &var_18)
return sub_140597060(&var_28)
