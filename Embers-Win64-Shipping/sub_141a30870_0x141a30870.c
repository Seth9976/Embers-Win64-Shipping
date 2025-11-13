// 函数: sub_141a30870
// 地址: 0x141a30870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14302dff0
arg1[1] = *arg2
void* rax_1 = arg2[1]
arg1[2] = rax_1

if (rax_1 != 0)
    *(rax_1 + 0xc) += 1

int64_t* rcx = arg2[1]

if (rcx != 0)
    int32_t temp0_1 = *(rcx + 0xc)
    *(rcx + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*rcx + 8))(rcx, 1)

return arg1
