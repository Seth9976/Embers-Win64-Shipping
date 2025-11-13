// 函数: sub_141f50010
// 地址: 0x141f50010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x40))()
void* const result = sub_1425a4a90()

if (result != 0)
    sub_140d3a3a0(&arg1[1], result)
    int32_t r8_1 = *(result + 0x5c)
    int32_t rcx_4 = (*(result + 0x58) - 1 + r8_1) & not.d(r8_1 - 1)
    int32_t rax_3 = 1
    
    if (rcx_4 != 0)
        rax_3 = rcx_4
    
    void*** rax_4 = sub_140a82f30(sx.q(rax_3), 0)
    arg1[2] = rax_4
    sub_141f2d8c0(rax_4, *arg2)
    rax_4[0x15].b = 0
    *rax_4 = &data_14327f120
    result = nullptr
    __builtin_memset(&rax_4[0x16], 0, 0x11)
    __builtin_memset(rax_4 + 0xc4, 0, 0x15)
    __builtin_memset(rax_4 + 0xdc, 0, 0x15)
    __builtin_memset(rax_4 + 0xf4, 0, 0x15)
    __builtin_memset(rax_4 + 0x10c, 0, 0x1d)
    __builtin_memset(rax_4 + 0x12c, 0, 0x15)
    __builtin_memset(rax_4 + 0x144, 0, 0x15)
    __builtin_memset(rax_4 + 0x15c, 0, 0x15)
    *(rax_4 + 0x174) = 0
    rax_4[0x2f] = 0
    arg1[4].b = 1

return result
