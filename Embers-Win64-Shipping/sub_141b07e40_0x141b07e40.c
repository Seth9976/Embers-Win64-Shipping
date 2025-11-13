// 函数: sub_141b07e40
// 地址: 0x141b07e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = *(arg1 + 0x10)
void*** rdi = nullptr
int32_t rbp = *(arg1 + 8)

if (rsi != 0)
    void*** rax_1 = j_sub_140a82f30(0x18)
    
    if (rax_1 != 0)
        rdi = sub_1405de320(rax_1, rsi)

arg2[4].b |= 3
*arg2 = &data_1430584f0
arg2[1].d = rbp
arg2[2] = rdi
return arg2
