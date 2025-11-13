// 函数: sub_141c8e820
// 地址: 0x141c8e820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x38)

if (rcx != 0)
    char result = (*(*rcx + 0x18))(rcx)
    
    if (result == 0)
        return result

int128_t zmm0 = *arg2
void* rdi_1 = *(arg1 + 0x28)
int64_t* (* var_28_1)(void* arg1, int128_t* arg2) = sub_141c89990
int32_t var_20_1 = 0
int64_t var_38 = 0
int32_t var_30_1 = 0
void*** rax_2 = sub_1405978f0(0x38, &var_38)

if (rax_2 != 0)
    rax_2[1] = rdi_1
    *rax_2 = &data_14320f9d0
    *(rax_2 + 0x10) = var_28_1.o
    *(rax_2 + 0x20) = zmm0
    rax_2[6] = sub_140a387b0()
    *rax_2 = &data_14320fa28

if (sub_141c87730(rdi_1 + 0x110, &var_38) != 0)
    int64_t* rcx_2 = *(rdi_1 + 0x158)
    (*(*rcx_2 + 0x10))(rcx_2)

return sub_140745b20(&var_38)
