// 函数: sub_142114680
// 地址: 0x142114680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce8e80(arg1, arg2)
int64_t* rcx = *(*arg2 + 8)
(*(*rcx + 0x1d8))(rcx, &data_1439a9478)
uint64_t result = *arg2
void* rcx_1 = *(result + 8)

if ((*(rcx_1 + 0x28) & 1) != 0 && *(rcx_1 + 0x40) s< 0x109)
    result = zx.q(*(arg1 + 0x7c))
    
    if (result.b == 1)
        *(arg1 + 0x7c) = 2
        return result
    
    if (result.b == 2)
        *(arg1 + 0x7c) = 1

return result
