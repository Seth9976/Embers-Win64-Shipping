// 函数: sub_14281e68c
// 地址: 0x14281e68c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x80)
int64_t rsi = *(arg1 + 0x88)

if (rbx != rsi)
    do
        int64_t* rcx = *rbx
        (*(*rcx + 8))(rcx)
        rbx = &rbx[1]
    while (rbx != rsi)
    
    rbx = *(arg1 + 0x80)

sub_14281d950(rbx, *(arg1 + 0x88))
int64_t result = *(arg1 + 0x80)
*(arg1 + 0x88) = result
return result
