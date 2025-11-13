// 函数: sub_141befc40
// 地址: 0x141befc40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x50) == 0)
    return 

void* rax = *(arg1 + 0x28)
void* rcx = *(rax + 0x128)

if (rcx != 0)
    int128_t zmm0 = *(arg1 + 0x38)
    char var_28_1 = 1
    int64_t var_20 = 0
    int128_t var_38 = zmm0
    int32_t var_18_1 = 0
    sub_140f605b0(rcx, &var_38)
    sub_140745b20(&var_20)
    rax = *(arg1 + 0x28)

void* rcx_2 = *(rax + 0x128)

if (rcx_2 != 0)
    sub_140f5e590(rcx_2, zx.d(*(arg1 + 0x48)))
    rax = *(arg1 + 0x28)

void* rcx_3 = *(rax + 0x128)

if (rcx_3 != 0)
    return sub_140f61790(rcx_3, zx.d(*(arg1 + 0x49))) __tailcall
