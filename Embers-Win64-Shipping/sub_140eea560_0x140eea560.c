// 函数: sub_140eea560
// 地址: 0x140eea560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i = *(arg1 + 0x18)
int64_t result = sx.q(*(arg1 + 0x20))

for (void* rbp_1 = result * 0x70 + i; i != rbp_1; i += 0x70)
    int64_t* j = *(i + 0x28)
    result = sx.q(*(i + 0x30))
    
    for (void* rdi_3 = &j[result * 6]; j != rdi_3; j = &j[6])
        int64_t* rcx = *j
        result = (*(*rcx + 0x50))(rcx)

return result
