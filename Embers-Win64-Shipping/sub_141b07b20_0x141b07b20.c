// 函数: sub_141b07b20
// 地址: 0x141b07b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rbp = *(arg3 + 0x5a4)
void*** rsi = nullptr
int32_t rax = sub_141f3ba00(arg3)
int64_t rbx_1 = *(arg3 + 0x650)

if (rbx_1 != 0)
    void*** rax_1 = j_sub_140a82f30(0x18)
    
    if (rax_1 != 0)
        rsi = sub_1405de320(rax_1, rbx_1)

arg2[4].b |= 3
*arg2 = &data_143059b18
arg2[1].b = rbp
*(arg2 + 0xc) = rax
arg2[2] = rsi
return arg2
