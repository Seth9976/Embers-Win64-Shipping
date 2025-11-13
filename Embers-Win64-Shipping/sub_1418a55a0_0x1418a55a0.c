// 函数: sub_1418a55a0
// 地址: 0x1418a55a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x10)
int32_t rdi = arg2
arg2.b = arg2 != 0
(*(*rcx + 0x68))(rcx, arg2)
*(arg1 + 0x3c)
*(arg1 + 0x3c) = rdi
int32_t result
bool z_1

do
    result = *(arg1 + 0x40)
    
    if (result s>= rdi)
        break
    
    if (result == *(arg1 + 0x40))
        *(arg1 + 0x40) = rdi
        z_1 = true
    else
        result = *(arg1 + 0x40)
        z_1 = false
while (not(z_1))
return result
