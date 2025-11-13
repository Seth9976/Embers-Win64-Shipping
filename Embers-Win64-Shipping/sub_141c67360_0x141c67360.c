// 函数: sub_141c67360
// 地址: 0x141c67360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f43b40(arg1)
int64_t* rdi = *(arg1 + 0xa0)

if (rdi == 0 || (*(arg1 + 0x1f0) & 2) != 0)
    sub_141c70e50(arg1)

void* result = *(arg1 + 0x698)

if (result != 0 && (*(result + 0x8b) & 2) == 0)
    if (rdi != 0 && (*(*rdi + 0x150))(rdi) != 0)
        int64_t* rcx_2 = *(arg1 + 0x698)
        (*(*rcx_2 + 0x400))(rcx_2, &data_143a2de50)
        sub_141efdf10(*(arg1 + 0x698))
    
    int64_t* rcx_4 = *(arg1 + 0x698)
    result = (*(*rcx_4 + 0x3a0))(rcx_4, 0)
    *(arg1 + 0x698) = 0

return result
