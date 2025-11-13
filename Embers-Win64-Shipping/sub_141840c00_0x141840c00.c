// 函数: sub_141840c00
// 地址: 0x141840c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i = *(arg1 + 0xf8)
int64_t result

for (void* rdi_1 = sx.q(*(arg1 + 0x100)) * 0x138 + i; i != rdi_1; i += 0x138)
    if (*(i + 0x70) != 3)
        int64_t* rcx = *(i + 0x88)
        
        if ((*(*rcx + 0x230))(rcx).b != 0)
            result.b = 1
            return result

result.b = 0
return result
