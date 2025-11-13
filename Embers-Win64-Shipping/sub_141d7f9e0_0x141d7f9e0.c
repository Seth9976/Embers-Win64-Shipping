// 函数: sub_141d7f9e0
// 地址: 0x141d7f9e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x7c) = 0
void* i = *(arg1 + 0x48)
int64_t result = sx.q(*(arg1 + 0x50))

for (void* rsi = i + result * 0x48; i != rsi; i += 0x48)
    int64_t* rcx = *(i + 0x18)
    
    if (rcx != 0)
        (*(*rcx + 0x20))(rcx, 0xffffffff, 0)
        result = sub_140a4fc50(*(i + 0x18))
        *(i + 0x18) = 0

void* rcx_2 = data_143e29f28

if (rcx_2 != 0)
    result = sub_1405c2d80(*(rcx_2 + 0x20) + 0x78, *(arg1 + 8))

*(arg1 + 8) = 0
return result
