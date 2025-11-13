// 函数: sub_140fc3290
// 地址: 0x140fc3290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = *(arg1 + 0x4d8)
int64_t* rcx = *(arg1 + 0x4b8)

if (rdx == 0)
    return sub_140f2d520(rcx) __tailcall

void* rax_1 = *(arg1 + 0x4e0)
int64_t var_18 = rdx
void* var_10 = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

return (*(*rcx + 0x240))(rcx, &var_18)
