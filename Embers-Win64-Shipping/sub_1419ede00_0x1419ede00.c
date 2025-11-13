// 函数: sub_1419ede00
// 地址: 0x1419ede00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = (*(*arg1 + 0x150))()

if (result == 0)
    return result

void* rax_1 = sub_141a0e030(result)
int32_t arg_8
sub_140cba0f0(rax_1 + 0x28, &arg_8, &arg1[0x45])
int64_t rcx_2 = sx.q(arg_8)

if (rcx_2.d != 0xffffffff)
    int64_t rax_3 = rcx_2 << 5
    
    if (rax_3 != neg.q(*(rax_1 + 0x28)))
        return *(rax_3 + *(rax_1 + 0x28) + 0x10)

return 0
